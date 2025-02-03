#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vysyx_24120011_top.h"
#include <cstdint>
#include <stdio.h>
#include <stdint.h>

#define PMEM_SIZE 0x8000000
VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;
static Vysyx_24120011_top* top;
int trap = 0;

uint32_t pmem[PMEM_SIZE] = {
    // 0x00230293, //addi t0, t1, 2
    // 0x00328393, //addi t2, t0, 3
    // 0x00100073, //ebreak
};

void read_bin_file(const char *filename) {
    FILE *file = fopen(filename, "rb");
    if (!file) {
        perror("Failed to open file");
        return;
    }

    size_t index = 0;
    while (index < PMEM_SIZE && fread(&pmem[index], sizeof(uint32_t), 1, file) == 1) {
        index++;
    }

    if (!feof(file)) {
        perror("Error reading file");
    }

    fclose(file);
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
  //const char *filename = "/home/plutoisy/ysyx-workbench/am-kernels/tests/cpu-tests/build/dummy-riscv32e-npc.bin";
  //read_bin_file(filename);
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
