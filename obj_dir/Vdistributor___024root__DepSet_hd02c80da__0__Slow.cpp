// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdistributor.h for the primary calling header

#include "verilated.h"

#include "Vdistributor___024root.h"

VL_ATTR_COLD void Vdistributor___024root___eval_initial(Vdistributor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdistributor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdistributor___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vdistributor___024root___eval_settle(Vdistributor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdistributor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdistributor___024root___eval_settle\n"); );
}

VL_ATTR_COLD void Vdistributor___024root___final(Vdistributor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdistributor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdistributor___024root___final\n"); );
}

VL_ATTR_COLD void Vdistributor___024root___ctor_var_reset(Vdistributor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdistributor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdistributor___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->fin_bus = VL_RAND_RESET_I(2);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->xcoord[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->ycoord[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->reset_engines[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->distributor__DOT__xcount = VL_RAND_RESET_I(32);
    vlSelf->distributor__DOT__ycount = VL_RAND_RESET_I(32);
    vlSelf->distributor__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->distributor__DOT__unnamedblk2__DOT__i = 0;
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
