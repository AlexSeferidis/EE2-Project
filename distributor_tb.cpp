#include "Vdistributor.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

int main(int argc, char **argv, char **env){

    int clk;

    Verilated::commandArgs(argc, argv);

    //initiate distributor (main) verilog instance
    Vdistributor *top = new Vdistributor;

    //initiate trace dump
    Verilated::traceEverOn(true);
    VerilatedVcdC *tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("distributor.vcd");

    // Set initial simulation values
    top->clk = 1;
    top->reset = 1;
    top->fin_bus = 3;

    for (int i=0; i < 5000; i++){
        
        for(clk = 0; clk < 2; clk++){
            tfp->dump(2 * i + clk);
            top->clk = !top->clk;
            top->eval(); // function to read variables. occurs on both edges of clk
        }
        
        if (Verilated::gotFinish())
            break;
        
    }

    tfp->close();

    exit(0);

}