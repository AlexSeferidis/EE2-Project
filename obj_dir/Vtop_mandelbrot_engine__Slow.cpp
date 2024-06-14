// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop__Syms.h"
#include "Vtop_mandelbrot_engine.h"

void Vtop_mandelbrot_engine___ctor_var_reset(Vtop_mandelbrot_engine* vlSelf);

Vtop_mandelbrot_engine::Vtop_mandelbrot_engine(Vtop__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop_mandelbrot_engine___ctor_var_reset(this);
}

void Vtop_mandelbrot_engine::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtop_mandelbrot_engine::~Vtop_mandelbrot_engine() {
}
