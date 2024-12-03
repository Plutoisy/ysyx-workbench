#include "Vtop.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "verilated_fst_c.h"
#include <nvboard.h>
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
int main(int argc, char** argv) {

    nvboard_bind_all_pins(&dut);
    nvboard_init();
    
    VerilatedContext* contextp = new VerilatedContext;
    contextp->commandArgs(argc, argv);
    Vtop* top = new Vtop{contextp};
    
    //VerilatedVcdC *tfp= new VerilatedVcdC;
    //Verilated::traceEverOn(true);  
    //top->trace(tfp, 99);           
    //tfp->open("waveform.vcd");   
    
    VerilatedFstC* tfp = new VerilatedFstC;
    Verilated::traceEverOn(true);  
    top->trace(tfp, 99);           
    tfp->open("waveform.fst");    

    int i = 10;
    while (i > 0) {
    	
    	int a = rand() & 1;
  	int b = rand() & 1; 
  	top->a = a;
  	top->b = b;
    	top->eval(); 
    	printf("a = %d, b = %d, f = %d\n", a, b, top->f);
    	tfp->dump(contextp->time()); 
  	assert(top->f == (a ^ b));
  	contextp->timeInc(1);
        i--;

    }
    delete top;
    tfp->close();
    delete contextp;
    nvboard_quit();
    return 0;
}
