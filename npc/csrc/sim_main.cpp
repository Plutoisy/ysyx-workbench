#include "Vtop.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
int main(int argc, char** argv) {
    VerilatedContext* contextp = new VerilatedContext;
    contextp->commandArgs(argc, argv);
    Vtop* top = new Vtop{contextp};
    
    VerilatedVcdC *tfp= new VerilatedVcdC;
    Verilated::traceEverOn(true);  
    top->trace(tfp, 99);           
    tfp->open("waveform.vcd");     
    
    while (!contextp->gotFinish()) {
    	
    	int a = rand() & 1;
  	int b = rand() & 1; 
  	top->a = a;
  	top->b = b;
    	top->eval(); 
    	printf("a = %d, b = %d, f = %d\n", a, b, top->f);
    	tfp->dump(contextp->time()); 
  	assert(top->f == (a ^ b));
  	context_p->timeInc(1);
        

    }
    delete top;
    tfp->close();
    delete contextp;
    return 0;
}
