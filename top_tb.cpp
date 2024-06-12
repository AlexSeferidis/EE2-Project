#include "Vtop.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>
#include <fstream>
#include <vector>

#define SCREEN_WIDTH 640
#define SCREEN_HEIGHT 480

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
    top->ready = 1;
    top->iterations_max = 50;
    top->zoom = 1;
    top->x_offset = 0;
    top->y_offset = 0;

    std::vector<unsigned char> arr(3 * SCREEN_HEIGHT * SCREEN_WIDTH);

    int i = 0;
    int index = 0;

    for (i=0; i < 300000; i++){
        
        for(clk = 0; clk < 2; clk++){
            tfp->dump(2 * i + clk);
            top->clk = !top->clk;
            top->eval(); // function to read variables. occurs on both edges of clk
        }

        top->reset = 0;

        if(top->valid){
            int tmp_index = (3 * index) % arr.size();

            arr[tmp_index] = static_cast<unsigned char>(top->r);
            arr[tmp_index + 1] = static_cast<unsigned char>(top->g);
            arr[tmp_index + 2] = static_cast<unsigned char>(top->b);

            index++;
        }
        
        
        if (Verilated::gotFinish())
            break;
        
        // iterate the vcd
        i++;
    }

    tfp->close();

    // Open a file for writing
    std::ofstream file("image.data", std::ios::binary);

    // Write the pixel data to the file
    file.write(reinterpret_cast<char *>(arr.data()), arr.size());

    // Close the file
    file.close();

    std::cout << "Done :)" << std::endl;
    // std::cout << relative_iterations_max << std::endl;

    exit(0);

}