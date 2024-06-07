// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdistributor.h for the primary calling header

#include "verilated.h"

#include "Vdistributor__Syms.h"
#include "Vdistributor___024root.h"

void Vdistributor___024root___ctor_var_reset(Vdistributor___024root* vlSelf);

Vdistributor___024root::Vdistributor___024root(Vdistributor__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vdistributor___024root___ctor_var_reset(this);
}

void Vdistributor___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vdistributor___024root::~Vdistributor___024root() {
}
