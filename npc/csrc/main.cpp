#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vysyx_24120011_top.h"
#include <cstdint>
#include <stdio.h>
#include <stdint.h>
#include <getopt.h>
#include <readline/readline.h>
#include <readline/history.h>

#define PMEM_SIZE 0x8000000
#define ARRLEN(arr) (int)(sizeof(arr) / sizeof(arr[0]))


VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;
static Vysyx_24120011_top* top;
int trap = 0;
static char *img_file = NULL;

uint32_t pmem[PMEM_SIZE] = {
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

uint32_t pmem_read(uint32_t pc) {   
    uint32_t index = (pc - 0x80000000) / 4; 
    return pmem[index];
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

void cpu_exec(uint32_t n){
  for(int i = 0; i < n; i++){
    if(trap != 1){
      top->clk ^= 1;
      if (top->clk == 1){
        top->inst = pmem_read(top->pc);
        printf("\33[1;34mnpc execute pc = 0x%08x, inst = 0x%08x\033[0m\n",top->pc, top->inst);
      }
      step_and_dump_wave();
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

static struct {
  const char *name;
  const char *description;
  int (*handler) (char *);
} cmd_table [] = {
  { "help", "Display information about all supported commands", cmd_help },
  { "c", "Continue the execution of the program", cmd_c },
  { "si","Execute one time", cmd_si},
};

#define NR_CMD ARRLEN(cmd_table)

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
  load_img();
  sim_init();
  system_rst();
  sdb_mainloop();
  sim_exit();
  return 0;
}
