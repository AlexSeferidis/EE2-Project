// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___settle__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__0\n"); );
    // Body
    if (((vlSelf->top__DOT__xpixel_wire == vlSelf->top__DOT__queue_block__DOT__xqueue
          [0U]) & (vlSelf->top__DOT__ypixel_wire == 
                   vlSelf->top__DOT__queue_block__DOT__yqueue
                   [0U]))) {
        vlSelf->top__DOT__en_wire = 1U;
    }
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vtop___024root___final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___final\n"); );
}

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->fin_flag = VL_RAND_RESET_I(1);
    vlSelf->colour_i = VL_RAND_RESET_I(24);
    vlSelf->xpixel_i = VL_RAND_RESET_I(32);
    vlSelf->ypixel_i = VL_RAND_RESET_I(32);
    vlSelf->ready = VL_RAND_RESET_I(1);
    vlSelf->full_queue = VL_RAND_RESET_I(1);
    vlSelf->colour_o = VL_RAND_RESET_I(24);
    vlSelf->first = VL_RAND_RESET_I(1);
    vlSelf->last_x = VL_RAND_RESET_I(1);
    vlSelf->last_y = VL_RAND_RESET_I(1);
    vlSelf->valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__xpixel_wire = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ypixel_wire = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__colour_wire = VL_RAND_RESET_I(24);
    vlSelf->top__DOT__en_wire = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->top__DOT__queue_block__DOT__colour_queue[__Vi0] = VL_RAND_RESET_I(24);
    }
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->top__DOT__queue_block__DOT__xqueue[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->top__DOT__queue_block__DOT__yqueue[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__queue_block__DOT__counter = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__queue_block__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->top__DOT__queue_block__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->top__DOT__queue_block__DOT____Vlvbound_hc89f5955__0 = VL_RAND_RESET_I(24);
    vlSelf->top__DOT__queue_block__DOT____Vlvbound_hc0c41b9e__0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__queue_block__DOT____Vlvbound_h131125b7__0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__queue_block__DOT____Vlvbound_h9942c0e0__0 = VL_RAND_RESET_I(24);
    vlSelf->top__DOT__queue_block__DOT____Vlvbound_hf058b455__0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__queue_block__DOT____Vlvbound_hc3849630__0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__combinator_block__DOT__xcount = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__combinator_block__DOT__ycount = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
