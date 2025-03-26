#include "verilated.h"
#include "verilated_vcd_c.h"
#include "VysyxSoCFull.h"
#include <cstdint>
#include <stdio.h>
#include <stdint.h>
#include <getopt.h>
#include <readline/readline.h>
#include <readline/history.h>
#include <capstone/capstone.h>
#include <sys/time.h>
#include <nvboard.h>

#define PMEM_SIZE    0x8000000
#define FLASH_SIZE    0x10000000
#define PSRAM_SIZE    0x20000000
#define PMEM_SIZE_SOC    0x1000
#define CONFIG_MBASE 0x80000000
#define CONFIG_MBASE_SOC 0x20000000
#define CONFIG_FLASHBASE 0x30000000
#define CONFIG_PSRAMBASE 0x80000000
#define ARRLEN(arr) (int)(sizeof(arr) / sizeof(arr[0]))
#define LOAD_IMG_TO_FLASH 0
#define START_FROM_MROM 0
#define M_R_TRACE 0
#define M_W_TRACE 0
#define M_R_ASSERT 1
#define M_W_ASSERT 1
#define PC_ASSERT 1
#define REG_ASSERT 1
#define DIFFTESE 0
#define BMODE 0
#define WAVE 0
#define NVBOARD 1

VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;
static VysyxSoCFull* top;
void nvboard_bind_all_pins(VysyxSoCFull* top);
int trap = 0;
static char *img_file = NULL;
csh handle;
int gpr[32];
int top_pc;
int top_dnpc;
int top_inst;
int top_IFU_valid_int;

uint8_t pmem[PMEM_SIZE] = {
  0x13,0x04,0x00,0x00,
  0x17,0x91,0x00,0x00,
  0x13,0x01,0xc1,0xff,
  0xef,0x00,0xc0,0x00,
  0x13,0x05,0x00,0x00,
  0x67,0x80,0x00,0x00,
  0x13,0x01,0x41,0xff,
  0x17,0x05,0x00,0x00,
  0x13,0x05,0xc5,0x01,
  0x23,0x24,0x11,0x00,
  0xef,0xf0,0x9f,0xfe,
  0x13,0x05,0x05,0x00,
  0x73,0x00,0x10,0x00,
  0x6f,0x00,0x00,0x00,  
};

uint8_t flash[FLASH_SIZE] = {
  0x13,0x04,0x00,0x00,
  0x17,0x91,0x00,0x00,
  0x13,0x01,0xc1,0xff,
  0xef,0x00,0xc0,0x00,
  0x13,0x05,0x00,0x00,
  0x67,0x80,0x00,0x00,
  0x13,0x01,0x41,0xff,
  0x17,0x05,0x00,0x00,
  0x13,0x05,0xc5,0x01,
  0x23,0x24,0x11,0x00,
  0xef,0xf0,0x9f,0xfe,
  0x13,0x05,0x05,0x00,
  0x73,0x00,0x10,0x00,
  0x6f,0x00,0x00,0x00,  
};

uint8_t psram[PSRAM_SIZE] = {
  0x13,0x04,0x00,0x00,
  0x17,0x91,0x00,0x00,
  0x13,0x01,0xc1,0xff,
  0xef,0x00,0xc0,0x00,
  0x13,0x05,0x00,0x00,
  0x67,0x80,0x00,0x00,
  0x13,0x01,0x41,0xff,
  0x17,0x05,0x00,0x00,
  0x13,0x05,0xc5,0x01,
  0x23,0x24,0x11,0x00,
  0xef,0xf0,0x9f,0xfe,
  0x13,0x05,0x05,0x00,
  0x73,0x00,0x10,0x00,
  0x6f,0x00,0x00,0x00,  
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

static long load_img_mrom() {
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

  printf("Start from mrom The image is %s, size = %ld\n", img_file, size);

  fseek(fp, 0, SEEK_SET);
  int ret = fread(pmem, size, 1, fp);
  assert(ret == 1);

  fclose(fp);
  return size;
}

static long load_img_flash() {
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

  printf("Start from flash The image is %s, size = %ld\n", img_file, size);

  fseek(fp, 0, SEEK_SET);
  int ret = fread(flash, size, 1, fp);
  assert(ret == 1);

  fclose(fp);
  return size;
}

static long load_img_to_flash(char *img) {
  if (img == NULL) {
    printf("No image is given. Use the default build-in image.\n");
    return 4096; // built-in image size
  }

  FILE *fp = fopen(img, "rb");
  if(!fp){
    assert(0);
  }

  fseek(fp, 0, SEEK_END);
  long size = ftell(fp);

  printf("The image is %s, size = %ld\n", img_file, size);

  fseek(fp, 0, SEEK_SET);
  int ret = fread(flash, size, 1, fp);
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
            printf("\33[1;34mnpc execute pc = 0x%08x, inst = 0x%08x,\t%s\t%s\033[0m\n",top_pc, top_inst, insn[i].mnemonic, insn[i].op_str);
            // printf("0x%lx:\t%s\t%s\n", insn[i].address, insn[i].mnemonic, insn[i].op_str);
        }
        cs_free(insn, count);
    } else {
        printf("Failed to disassemble given code!\n");
        printf("\33[1;34mnpc execute pc = 0x%08x, inst = 0x%08x\033[0m\n",top_pc, top_inst);

    }
}

void step_and_dump_wave(){
  if(NVBOARD){
    nvboard_update();
  }
  top->eval();
  if(WAVE){
    contextp->timeInc(1);
    tfp->dump(contextp->time());
  }
}

void sim_init(){
  contextp = new VerilatedContext;
  tfp = new VerilatedVcdC;
  top = new VysyxSoCFull;
  contextp->traceEverOn(true);
  top->trace(tfp, 99);
  tfp->open("dump.vcd");
}

void sim_exit(){
  step_and_dump_wave();
  tfp->close();
}

void system_rst(){
  top->clock = 0;
  top->reset = 0;
  step_and_dump_wave();
  top->clock = 1;
  top->reset = 1;
  step_and_dump_wave();
  top->clock = 0;
  step_and_dump_wave();
  for(int i = 0; i < 20; i++){
	top->clock = 1;
	step_and_dump_wave();
	top->clock = 0;
	step_and_dump_wave();
  }
  top->reset = 0;
}

uint8_t* guest_to_host(uint32_t paddr) { return pmem + paddr - CONFIG_MBASE; }
uint8_t* guest_to_host_soc(uint32_t paddr) { return pmem + paddr - CONFIG_MBASE_SOC; }
uint8_t* guest_to_host_flash(uint32_t paddr) { return flash + paddr - CONFIG_FLASHBASE; }
uint8_t* guest_to_host_psram(uint32_t paddr) { return psram + paddr - CONFIG_PSRAMBASE; }

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

extern "C" void psram_read(uint32_t addr, uint32_t *data) {
	if(addr >= 0 && addr <= PSRAM_SIZE){
		*data = host_read(psram+addr,4);
    if(M_R_TRACE){
      printf("psramR->addr: 0x%08x, len: %d, mem: 0x%08x\n", addr, 4, *data);
    }
	}else{
    if(M_R_ASSERT){
      assert(0);
    }
	}
}
extern "C" void psram_write(uint32_t addr, uint32_t data,uint32_t mask) {
	if(addr >= 0 && addr <= PSRAM_SIZE){
		uint32_t wdata = data >> ((8-mask)*4);
		host_write(psram+addr,mask/2,wdata);
    if(M_R_TRACE){
      printf("psramW->addr: 0x%08x, len: %d, mem: 0x%08x\n", addr, 4, data);
    }
	}else{
		if(M_W_ASSERT){
      assert(0);
    }
	}
}

extern "C" void flash_read(int32_t addr, int32_t *data) { 
  addr += CONFIG_FLASHBASE;
  if(addr - CONFIG_FLASHBASE > FLASH_SIZE){
    if(M_R_ASSERT){
      assert(0);
    }
    return;
  }
  else{
    *data = host_read(guest_to_host_flash(addr & ~0x3), 4);
    if(M_R_TRACE){
      printf("flashR->addr: 0x%08x, len: %d, mem: 0x%08x\n", addr & ~0x3, 4, *data);
    }
    return;
  }
}

extern "C" void mrom_read(int32_t addr, int32_t *data) { 
  if(addr - CONFIG_MBASE_SOC > 0xfff){
    if(M_R_ASSERT){
      assert(0);
    }
    return;
  }
  else{
    *data = host_read(guest_to_host_soc(addr & ~0x3), 4);
    if(M_R_TRACE){
      printf("mromR->addr: 0x%08x, len: %d, mem: 0x%08x\n", addr & ~0x3, 4, *data);
    }
    return;
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

extern "C" void get_pc_inst(int pc, int dnpc, int inst, int IFU_valid_int){
  top_pc = pc;
  top_dnpc = dnpc;
  top_inst = inst;
  top_IFU_valid_int = IFU_valid_int;
}

extern "C" void reg_out(const int array[32]) {
  for (int i = 0; i < 32; ++i) {
    gpr[i] = array[i];
  }
}

extern "C" void rtl_pmem_write (int w_mem_addr, int w_mem_data, char w_mem_len){
  if(M_W_TRACE){
    printf("npcW->addr: 0x%x, len: %d, mem: 0x%08x\n", w_mem_addr, w_mem_len, w_mem_data);
  }
  if(w_mem_addr - CONFIG_MBASE > PMEM_SIZE){
    if (w_mem_addr == 0x000003f8) { 
      //putchar((char)(w_mem_data & 0xFF)); 
      if(M_W_ASSERT){
        assert(0);
      }
    }
    else{
      if(M_W_ASSERT){
        assert(0);
      }
    }
  }
  else{
    //printf("npcW->addr: 0x%x, len: %d, mem: 0x%08x\n", w_mem_addr, w_mem_len, w_mem_data);
    host_write(guest_to_host(w_mem_addr), w_mem_len, w_mem_data);
  }
}
extern "C" void sram_write_print (int w_mem_addr, int w_mem_data, char w_mem_len){
  if(M_W_TRACE){
    printf("sramW->addr: 0x%x, len: %d, mem: 0x%08x\n", w_mem_addr, w_mem_len, w_mem_data);
  }
}
static uint64_t boot_time = 0;

static uint64_t get_time_internal() {
  struct timeval now;
  gettimeofday(&now, NULL);
  uint64_t us = now.tv_sec * 1000000 + now.tv_usec;
  return us;
}

uint64_t get_time() {
  if (boot_time == 0) boot_time = get_time_internal();
  uint64_t now = get_time_internal();
  return now - boot_time;
}

static uint32_t rtc_port_base[2];

extern "C" int rtl_pmem_read(int r_mem_addr){
  if(r_mem_addr - CONFIG_MBASE > PMEM_SIZE){
    if(M_R_TRACE){
      printf("npcR->addr: 0x%x, len: %d\n", r_mem_addr, 4);
    }
    // if (r_mem_addr == 0xa0000048 + 4) { 
    //   uint64_t us = get_time();
    //   rtc_port_base[0] = (uint32_t)us;
    //   rtc_port_base[1] = us >> 32;
    //   return rtc_port_base[1];
    // }
    // else if (r_mem_addr == 0xa0000048) {
    //   return rtc_port_base[0];
    // }
    // else{
    //   if(M_R_ASSERT){
    //     assert(0);
    //   }
    //   return 0;
    // }
    if(M_R_ASSERT){
      assert(0);
    }
    return 0;
  }
  else{
    
    uint32_t ret = host_read(guest_to_host(r_mem_addr), 4);
    //printf("npcR->addr: 0x%x, len: %d, mem: 0x%08x\n", r_mem_addr, 4, ret);
    return ret;
  }
  
}

extern "C" void difftest_exec(uint64_t n);
extern "C" void difftest_memcpy(uint32_t addr, void *buf, size_t n, bool direction);
extern "C" void difftest_regcpy(void *dut, bool direction);

CPU_state refstate;

void cpu_exec(uint32_t n){
  for(int i = 0; i < n; i++){
    if(trap != 1){
      top->clock ^= 1;
      if (top->clock != 1){
        step_and_dump_wave();
        top->clock ^= 1;
      }
      //printf("top_IFU_valid_int:%d\n",top_IFU_valid_int);
      //AssembleDecoder(handle, top_inst, top_pc);
      if(top_IFU_valid_int){
        if(DIFFTESE){
          AssembleDecoder(handle, top_inst, top_pc);
          printf("exec times: %d\n",i+1);
          difftest_exec(1);
          difftest_regcpy(&refstate, 0);
        }
        
        step_and_dump_wave();

        if(DIFFTESE){
          printf("        dut                    | ref                   \n");
          printf("pc      0x%08x             | 0x%08x\n", top_dnpc, refstate.pc);
          if(refstate.pc != top_dnpc){
           //AssembleDecoder(handle, top_inst, top_pc);
           if(PC_ASSERT){
             assert(0);
           }
           
           //printf("0x%08x\n",refstate.pc );
           //printf("0x%08x\n",top_pc);
          }
          
          for(int j = 0; j < 32; j++){
            printf("%-3s     %-10u  0x%08x | %-10u  0x%08x\n", regs[j], gpr[j], gpr[j], refstate.gpr[j], refstate.gpr[j]);
            if(refstate.gpr[j] != gpr[j]){
              //AssembleDecoder(handle, top_inst, top_pc);
              //printf("exec times: %d\n",i+1);
              //printf("%-3s     %-10u  0x%08x | %-10u  0x%08x\n", regs[j], gpr[j], gpr[j], refstate.gpr[j], refstate.gpr[j]);
              if(REG_ASSERT){
                assert(0);
              }
            }
          }
        }
      }
      else{
        step_and_dump_wave();
      }
      
      
    }
    else{
      printf("\33[1;34mProgram execution has ended. To restart the program, exit npc and run again.\033[0m\n");
      printf("exec times: %d\n",i+1);
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
  if(NVBOARD){
    nvboard_bind_all_pins(top);
    nvboard_init();
  }
  Verilated::commandArgs(argc, argv);
  /* Parse arguments. */
  parse_args(argc, argv);
  //const char *filename = "/home/plutoisy/ysyx-workbench/am-kernels/tests/cpu-tests/build/dummy-riscv32e-npc.bin";

  // 示例 RISC-V 指令
  //uint32_t instruction = 0x00000013; // NOP 指令
  
  if (!capstone_init(&handle)) {
      return -1;
  }

  // AssembleDecoder(handle, instruction);
  
  if(START_FROM_MROM){
    load_img_mrom();
  }
  else{
    load_img_flash();
  }
  
  if(LOAD_IMG_TO_FLASH){
    load_img_to_flash("/home/plutoisy/ysyx-workbench/npc/npc_test/build/char_test.bin");
  }
  if(DIFFTESE){
    difftest_memcpy(CONFIG_MBASE_SOC, pmem, PMEM_SIZE_SOC, 1);
    void* dut;
    difftest_regcpy(dut, 1);
  }
  sim_init();
  system_rst();
  if(BMODE){
    cmd_si("-1");
    cmd_q(NULL);
  }
  else{
    sdb_mainloop();
  }
  cs_close(&handle);
  sim_exit();
  return 0;
}

