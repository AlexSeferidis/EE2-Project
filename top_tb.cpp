#include "Vtop.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

int main(int argc, char **argv, char **env){

    int clk;

    Verilated::commandArgs(argc, argv);

    //initiate top (main) verilog instance
    Vtop *top = new Vtop;

    //initiate trace dump
    Verilated::traceEverOn(true);
    VerilatedVcdC *tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("top.vcd");

    // Set initial simulation values
    top->clk = 1;
    top->reset = 1;
    top->fin_flag = 1;
    top->ready = 1;

    int x = 0;
    int y = 480;

    for (int i=0; i < 5000; i++){
        
        for(clk = 0; clk < 2; clk++){
            tfp->dump(2 * i + clk);
            top->clk = !top->clk;
            top->eval(); // function to read variables. occurs on both edges of clk
        }

        top->reset = 0;

        if(x == 640){
            x = 0;
            y -= 1;
        }
        if(y == 0){
            break;
        }

        top->xpixel_i = x;
        top->ypixel_i = y;
        top->colour_i = i;

        x++;
        
        
        if (Verilated::gotFinish())
            break;
        
    }

    tfp->close();

    exit(0);

}