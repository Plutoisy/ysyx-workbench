#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vysyx_24120011_top.h"
#include <cstdint>
#include <stdio.h>
#include <stdint.h>
#include <getopt.h>
#include <readline/readline.h>
#include <readline/history.h>
#include <capstone/capstone.h>

#define PMEM_SIZE    0x8000000
#define CONFIG_MBASE 0x80000000
#define ARRLEN(arr) (int)(sizeof(arr) / sizeof(arr[0]))


VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;
static Vysyx_24120011_top* top;
int trap = 0;
static char *img_file = NULL;
csh handle;
int gpr[32];
uint8_t pmem[PMEM_SIZE] = {
  // 0x00000413,
  // 0x00009117,
  // 0xffc10113,
  // 0x00c000ef,
  // 0x00000513,
  // 0x00008067,
  // 0xff410113,
  // 0x00000517,
  // 0x01c50513,
  // 0x00112423,
  // 0xfe9ff0ef,
  // 0x00050513,
  // 0x00100073,
  // 0x0000006f,  
};

typedef struct {
  uint32_t gpr[32];
  uint32_t pc;
} CPU_state;

const char *regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};

static char* rl_gets() {
  static char *line_read = NULL;

  if (line_read) {
    free(line_read);
    line_read = NULL;
  }

  line_read = readline("(npc) ");

  if (line_read && *line_read) {
    add_history(line_read);
  }

  return line_read;
}

static long load_img() {
  if (img_file == NULL) {
    printf("No image is given. Use the default build-in image.\n");
    return 4096; // built-in image size
  }

  FILE *fp = fopen(img_file, "rb");
  if(!fp){
    assert(0);
  }

  fseek(fp, 0, SEEK_END);
  long size = ftell(fp);

  printf("The image is %s, size = %ld\n", img_file, size);

  fseek(fp, 0, SEEK_SET);
  int ret = fread(pmem, size, 1, fp);
  assert(ret == 1);

  fclose(fp);
  return size;
}

bool capstone_init(csh *handle) {
    if (cs_open(CS_ARCH_RISCV, CS_MODE_RISCV32, handle) != CS_ERR_OK) {
        printf("Failed to initialize Capstone\n");
        return false;
    }
    return true;
}

void AssembleDecoder(csh handle, uint32_t instruction, uint32_t pc) {
    cs_insn *insn;
    size_t count;

    count = cs_disasm(handle, reinterpret_cast<uint8_t*>(&instruction), sizeof(instruction), 0x1000, 1, &insn);
    if (count > 0) {
        for (size_t i = 0; i < count; i++) {
            printf("\33[1;34mnpc execute pc = 0x%08x, inst = 0x%08x,\t%s\t%s\033[0m\n",top->pc, top->inst, insn[i].mnemonic, insn[i].op_str);
            // printf("0x%lx:\t%s\t%s\n", insn[i].address, insn[i].mnemonic, insn[i].op_str);
        }
        cs_free(insn, count);
    } else {
        printf("Failed to disassemble given code!\n");
        printf("\33[1;34mnpc execute pc = 0x%08x, inst = 0x%08x\033[0m\n",top->pc, top->inst);

    }
}

void step_and_dump_wave(){
  top->eval();
  contextp->timeInc(1);
  tfp->dump(contextp->time());
}

void sim_init(){
  contextp = new VerilatedContext;
  tfp = new VerilatedVcdC;
  top = new Vysyx_24120011_top;
  contextp->traceEverOn(true);
  top->trace(tfp, 99);
  tfp->open("dump.vcd");
}

void sim_exit(){
  step_and_dump_wave();
  tfp->close();
}

void system_rst(){
  top->clk = 0;
  top->rst = 0;
  step_and_dump_wave();
  top->clk = 1;
  top->rst = 1;
  step_and_dump_wave();
  top->clk = 0;
  step_and_dump_wave();
  top->clk = 1;
  step_and_dump_wave();
  top->clk = 0;
  step_and_dump_wave();
  top->rst = 0;
}

uint8_t* guest_to_host(uint32_t paddr) { return pmem + paddr - CONFIG_MBASE; }

static inline uint32_t host_read(void *addr, int len) {
  switch (len) {
    case 1: return *(uint8_t  *)addr;
    case 2: return *(uint16_t *)addr;
    case 4: return *(uint32_t *)addr;
    default: assert(0); return 0;
  }
}

static inline void host_write(void *addr, int len, uint32_t data) {
  switch (len) {
    case 1: *(uint8_t  *)addr = data; return;
    case 2: *(uint16_t *)addr = data; return;
    case 4: *(uint32_t *)addr = data; return;
    default: assert(0); return;
  }
}

static uint32_t pmem_read(uint32_t addr, int len) {
  uint32_t ret = host_read(guest_to_host(addr), len);
  return ret;
}

static int parse_args(int argc, char *argv[]) {
  const struct option table[] = {
    {"help"     , no_argument      , NULL, 'h'},
    {0          , 0                , NULL,  0 },
  };
  int o;
  while ( (o = getopt_long(argc, argv, "-h", table, NULL)) != -1) {
    switch (o) {
      case 1: img_file = optarg; return 0;
      default:
        printf("Usage: %s [OPTION...] IMAGE [args]\n\n", argv[0]);
        printf("\n");
        exit(0);
    }
  }
  return 0;
}

void isa_reg_display() {
  printf("Name    DEC         HEX\n");
  for (int i = 0; i < 32; i++){
    printf("%-3s     %-10u  0x%08x\n", regs[i], gpr[i], gpr[i]);
  }
}

extern "C" void ebreak(){
  trap = 1;
  // printf("excute the ebreak inst!!!\n");
}

extern "C" void npc_trap(int pc, int ret){
  printf("npc execute ebreak at pc = 0x%08x\n",pc);
  if(ret == 0){
    printf("\33[1;32mHIT GOOD TRAP!\033[0m\n");
  }
  else{
    printf("\33[1;31mHIT BAD TRAP!\033[0m\n");
  }
}

extern "C" void reg_out(const int array[32]) {
  for (int i = 0; i < 32; ++i) {
    gpr[i] = array[i];
  }
}

extern "C" void rtl_pmem_write (int w_mem_addr, int w_mem_data, char w_mem_len){
  printf("W->addr: 0x%x, len: %d, mem: 0x%08x\n", w_mem_addr, w_mem_len, w_mem_data);
  host_write(guest_to_host(w_mem_addr), w_mem_len, w_mem_data);
}

extern "C" int rtl_pmem_read(int r_mem_addr){
  uint32_t ret = host_read(guest_to_host(r_mem_addr), 4);
  printf("R->addr: 0x%x, len: %d, mem: 0x%08x\n", r_mem_addr, 4, ret);
  return 0x8000025c;
}

extern "C" void difftest_exec(uint64_t n);
extern "C" void difftest_memcpy(uint32_t addr, void *buf, size_t n, bool direction);
extern "C" void difftest_regcpy(void *dut, bool direction);
CPU_state refstate;

void cpu_exec(uint32_t n){
  for(int i = 0; i < n; i++){
    if(trap != 1){
      top->clk ^= 1;
      if (top->clk != 1){
        step_and_dump_wave();
        top->clk ^= 1;
      }
      top->inst = pmem_read(top->pc,4);
      // printf("\33[1;34mnpc execute pc = 0x%08x, inst = 0x%08x\033[0m\n",top->pc, top->inst);
      AssembleDecoder(handle, top->inst, top->pc);
      difftest_exec(1);
      difftest_regcpy(&refstate, 0);
      step_and_dump_wave();

      if(refstate.pc != top->pc){
        assert(0);
        //printf("0x%08x\n",refstate.pc );
        //printf("0x%08x\n",top->pc);
      }
      for(int j = 0; j < 32; j++){
        if(refstate.gpr[j] != gpr[j]){
          //assert(0);
        }
        //printf("0x%08x\n",refstate.gpr[j]);
      }
      
    }
    else{
      printf("\33[1;34mProgram execution has ended. To restart the program, exit npc and run again.\033[0m\n");
      return;
    }
  }
}


static int cmd_si(char *args);
static int cmd_c(char *args);
static int cmd_help(char *args);
static int cmd_q(char *args);
static int cmd_info(char *args);

static struct {
  const char *name;
  const char *description;
  int (*handler) (char *);
} cmd_table [] = {
  { "help", "Display information about all supported commands", cmd_help },
  { "c", "Continue the execution of the program", cmd_c },
  { "si","Execute one time", cmd_si},
  { "q", "Exit NEMU", cmd_q },
  { "info", "Show some info", cmd_info},
};

#define NR_CMD ARRLEN(cmd_table)

static int cmd_info(char *args) {
  char ARG;
  if (args == NULL){
    printf("args needed\n");
  }
  else{
    sscanf(args,"%c",&ARG);
    if (ARG == 'r'){
      isa_reg_display();
    }
    else{
      printf("not support yet\n");
    }
  }
  return 0;
}

static int cmd_q(char *args) {
  return -1;
}

static int cmd_si(char *args) {
  int N;
  if (args == NULL){
    N = 1;
  }
  else{
    sscanf(args,"%d",&N);
    //printf("%d\n",N);
  }
  cpu_exec(N);
  return 0;
}

static int cmd_c(char *args) {
  cpu_exec(-1);
  return 0;
}

static int cmd_help(char *args) {
  /* extract the first argument */
  char *arg = strtok(NULL, " ");
  int i;

  if (arg == NULL) {
    /* no argument given */
    for (i = 0; i < NR_CMD; i ++) {
      printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
    }
  }
  else {
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(arg, cmd_table[i].name) == 0) {
        printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
        return 0;
      }
    }
    printf("Unknown command '%s'\n", arg);
  }
  return 0;
}



void sdb_mainloop() {
  for (char *str; (str = rl_gets()) != NULL; ) {
    char *str_end = str + strlen(str);

    /* extract the first token as the command */
    char *cmd = strtok(str, " ");
    if (cmd == NULL) { continue; }

    /* treat the remaining string as the arguments,
     * which may need further parsing
     */
    char *args = cmd + strlen(cmd) + 1;
    if (args >= str_end) {
      args = NULL;
    }

    int i;
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(cmd, cmd_table[i].name) == 0) {
        if (cmd_table[i].handler(args) < 0) { return; }
        break;
      }
    }

    if (i == NR_CMD) { printf("Unknown command '%s'\n", cmd); }
  }
}




int main(int argc, char *argv[]) {
  /* Parse arguments. */
  parse_args(argc, argv);
  //const char *filename = "/home/plutoisy/ysyx-workbench/am-kernels/tests/cpu-tests/build/dummy-riscv32e-npc.bin";

  // 示例 RISC-V 指令
  uint32_t instruction = 0x00000013; // NOP 指令
  
  if (!capstone_init(&handle)) {
      return -1;
  }

  // AssembleDecoder(handle, instruction);
  

  load_img();
  difftest_memcpy(CONFIG_MBASE, pmem, PMEM_SIZE, 1);
  void* dut;
  difftest_regcpy(dut, 1);
  sim_init();
  system_rst();
  sdb_mainloop();
  cs_close(&handle);
  sim_exit();
  return 0;
}

