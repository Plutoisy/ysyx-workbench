#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vysyx_24120011_top.h"
#include <cstdint>

VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;
static Vysyx_24120011_top* top;

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

uint32_t memory[] = {
    0x12345678, 
    0x9abcdef0,
};

uint32_t pmem_read(uint32_t pc) {
    uint32_t index = (pc - 0x80000000) / 4; 
    return memory[index];
}

int main() {
  sim_init();
  system_rst();
  while (top->pc <= 0x8000000c) {
    top->clk ^= 1;
    if (top->clk == 1){
      if(top->pc <= 0x80000008)
        top->inst = pmem_read(top->pc);
      else
        top->inst = 0xdeadbeef;
    }
    step_and_dump_wave();
  }
  sim_exit();
  return 0;
}
