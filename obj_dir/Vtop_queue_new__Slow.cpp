// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop__Syms.h"
#include "Vtop_queue_new.h"

void Vtop_queue_new___ctor_var_reset(Vtop_queue_new* vlSelf);

Vtop_queue_new::Vtop_queue_new(Vtop__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop_queue_new___ctor_var_reset(this);
}

void Vtop_queue_new::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtop_queue_new::~Vtop_queue_new() {
}
