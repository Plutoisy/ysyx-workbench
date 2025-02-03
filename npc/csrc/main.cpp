#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vysyx_24120011_top.h"
#include <cstdint>
#include <stdio.h>

VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;
static Vysyx_24120011_top* top;
int trap = 0;

uint32_t pmem[0x8000000] = {
    // 0x00230293, //addi t0, t1, 2
    // 0x00328393, //addi t2, t0, 3
    // 0x00100073, //ebreak
};



static long load_img() {
  const char *img_file = "/home/plutoisy/ysyx-workbench/am-kernels/tests/cpu-tests/build/dummy-riscv32e-npc.bin";
  if (img_file == NULL) {
    printf("No image is given. Use the default build-in image.");
    return 4096; // built-in image size
  }
  
  FILE *fp = fopen(img_file, "rb");
  printf("Can not open '%s'", img_file);

  fseek(fp, 0, SEEK_END);
  long size = ftell(fp);

  printf("The image is %s, size = %ld", img_file, size);

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


extern "C" void ebreak(){
  trap = 1;
  printf("excute the ebreak inst!!!\n");
}

int main() {
  printf("hello");
  load_img();
  sim_init();
  system_rst();
  while (trap != 1) {
    top->clk ^= 1;
    if (top->clk == 1){
      top->inst = pmem_read(top->pc);
    }
    step_and_dump_wave();
  }
  sim_exit();
  return 0;
}
