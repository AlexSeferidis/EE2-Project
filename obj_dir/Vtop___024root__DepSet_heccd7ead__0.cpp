// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__0\n"); );
    // Init
    CData/*2:0*/ __Vdly__top__DOT__queue_block__DOT__counter;
    CData/*0:0*/ __Vdlyvset__top__DOT__queue_block__DOT__colour_queue__v0;
    IData/*31:0*/ __Vdlyvval__top__DOT__queue_block__DOT__xqueue__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__queue_block__DOT__xqueue__v0;
    IData/*31:0*/ __Vdlyvval__top__DOT__queue_block__DOT__yqueue__v0;
    IData/*23:0*/ __Vdlyvval__top__DOT__queue_block__DOT__colour_queue__v5;
    CData/*0:0*/ __Vdlyvset__top__DOT__queue_block__DOT__colour_queue__v5;
    IData/*31:0*/ __Vdlyvval__top__DOT__queue_block__DOT__xqueue__v1;
    IData/*31:0*/ __Vdlyvval__top__DOT__queue_block__DOT__yqueue__v1;
    IData/*23:0*/ __Vdlyvval__top__DOT__queue_block__DOT__colour_queue__v6;
    CData/*0:0*/ __Vdlyvset__top__DOT__queue_block__DOT__colour_queue__v6;
    IData/*31:0*/ __Vdlyvval__top__DOT__queue_block__DOT__xqueue__v2;
    IData/*31:0*/ __Vdlyvval__top__DOT__queue_block__DOT__yqueue__v2;
    IData/*23:0*/ __Vdlyvval__top__DOT__queue_block__DOT__colour_queue__v7;
    CData/*0:0*/ __Vdlyvset__top__DOT__queue_block__DOT__colour_queue__v7;
    IData/*31:0*/ __Vdlyvval__top__DOT__queue_block__DOT__xqueue__v3;
    IData/*31:0*/ __Vdlyvval__top__DOT__queue_block__DOT__yqueue__v3;
    IData/*23:0*/ __Vdlyvval__top__DOT__queue_block__DOT__colour_queue__v8;
    CData/*0:0*/ __Vdlyvset__top__DOT__queue_block__DOT__colour_queue__v8;
    CData/*2:0*/ __Vdlyvdim0__top__DOT__queue_block__DOT__colour_queue__v9;
    IData/*23:0*/ __Vdlyvval__top__DOT__queue_block__DOT__colour_queue__v9;
    CData/*0:0*/ __Vdlyvset__top__DOT__queue_block__DOT__colour_queue__v9;
    CData/*2:0*/ __Vdlyvdim0__top__DOT__queue_block__DOT__xqueue__v4;
    IData/*31:0*/ __Vdlyvval__top__DOT__queue_block__DOT__xqueue__v4;
    CData/*0:0*/ __Vdlyvset__top__DOT__queue_block__DOT__xqueue__v4;
    CData/*2:0*/ __Vdlyvdim0__top__DOT__queue_block__DOT__yqueue__v4;
    IData/*31:0*/ __Vdlyvval__top__DOT__queue_block__DOT__yqueue__v4;
    CData/*0:0*/ __Vdlyvset__top__DOT__queue_block__DOT__yqueue__v4;
    IData/*31:0*/ __Vdly__top__DOT__combinator_block__DOT__xcount;
    IData/*31:0*/ __Vdly__top__DOT__combinator_block__DOT__ycount;
    // Body
    __Vdly__top__DOT__combinator_block__DOT__ycount 
        = vlSelf->top__DOT__combinator_block__DOT__ycount;
    __Vdly__top__DOT__combinator_block__DOT__xcount 
        = vlSelf->top__DOT__combinator_block__DOT__xcount;
    __Vdly__top__DOT__queue_block__DOT__counter = vlSelf->top__DOT__queue_block__DOT__counter;
    __Vdlyvset__top__DOT__queue_block__DOT__yqueue__v4 = 0U;
    __Vdlyvset__top__DOT__queue_block__DOT__xqueue__v4 = 0U;
    __Vdlyvset__top__DOT__queue_block__DOT__xqueue__v0 = 0U;
    __Vdlyvset__top__DOT__queue_block__DOT__colour_queue__v0 = 0U;
    __Vdlyvset__top__DOT__queue_block__DOT__colour_queue__v8 = 0U;
    __Vdlyvset__top__DOT__queue_block__DOT__colour_queue__v9 = 0U;
    __Vdlyvset__top__DOT__queue_block__DOT__colour_queue__v5 = 0U;
    __Vdlyvset__top__DOT__queue_block__DOT__colour_queue__v6 = 0U;
    __Vdlyvset__top__DOT__queue_block__DOT__colour_queue__v7 = 0U;
    if (vlSelf->reset) {
        vlSelf->top__DOT__queue_block__DOT__unnamedblk1__DOT__i = 5U;
    }
    if (((IData)(vlSelf->top__DOT__en_wire) & (IData)(vlSelf->ready))) {
        vlSelf->valid = 1U;
        vlSelf->colour_o = vlSelf->top__DOT__colour_wire;
    }
    if (vlSelf->reset) {
        __Vdly__top__DOT__queue_block__DOT__counter = 0U;
        __Vdlyvset__top__DOT__queue_block__DOT__colour_queue__v0 = 1U;
        __Vdly__top__DOT__combinator_block__DOT__xcount = 0U;
        __Vdly__top__DOT__combinator_block__DOT__ycount = 0x1e0U;
    } else {
        vlSelf->full_queue = (4U == (IData)(vlSelf->top__DOT__queue_block__DOT__counter));
        if (((vlSelf->top__DOT__xpixel_wire == vlSelf->top__DOT__queue_block__DOT__xqueue
              [0U]) & (vlSelf->top__DOT__ypixel_wire 
                       == vlSelf->top__DOT__queue_block__DOT__yqueue
                       [0U]))) {
            __Vdly__top__DOT__queue_block__DOT__counter 
                = (7U & ((IData)(vlSelf->top__DOT__queue_block__DOT__counter) 
                         - (IData)(1U)));
            vlSelf->top__DOT__queue_block__DOT____Vlvbound_hc0c41b9e__0 
                = vlSelf->top__DOT__queue_block__DOT__xqueue
                [1U];
            vlSelf->top__DOT__queue_block__DOT____Vlvbound_h131125b7__0 
                = vlSelf->top__DOT__queue_block__DOT__yqueue
                [1U];
            vlSelf->top__DOT__queue_block__DOT__unnamedblk2__DOT__i = 4U;
            vlSelf->top__DOT__colour_wire = vlSelf->top__DOT__queue_block__DOT__colour_queue
                [0U];
            vlSelf->full_queue = 0U;
            vlSelf->top__DOT__queue_block__DOT____Vlvbound_hc89f5955__0 
                = vlSelf->top__DOT__queue_block__DOT__colour_queue
                [1U];
            __Vdlyvval__top__DOT__queue_block__DOT__xqueue__v0 
                = vlSelf->top__DOT__queue_block__DOT____Vlvbound_hc0c41b9e__0;
            __Vdlyvset__top__DOT__queue_block__DOT__xqueue__v0 = 1U;
            __Vdlyvval__top__DOT__queue_block__DOT__yqueue__v0 
                = vlSelf->top__DOT__queue_block__DOT____Vlvbound_h131125b7__0;
            vlSelf->top__DOT__queue_block__DOT____Vlvbound_hc0c41b9e__0 
                = vlSelf->top__DOT__queue_block__DOT__xqueue
                [2U];
            vlSelf->top__DOT__queue_block__DOT____Vlvbound_h131125b7__0 
                = vlSelf->top__DOT__queue_block__DOT__yqueue
                [2U];
            __Vdlyvval__top__DOT__queue_block__DOT__colour_queue__v5 
                = vlSelf->top__DOT__queue_block__DOT____Vlvbound_hc89f5955__0;
            __Vdlyvset__top__DOT__queue_block__DOT__colour_queue__v5 = 1U;
            __Vdlyvval__top__DOT__queue_block__DOT__xqueue__v1 
                = vlSelf->top__DOT__queue_block__DOT____Vlvbound_hc0c41b9e__0;
            __Vdlyvval__top__DOT__queue_block__DOT__yqueue__v1 
                = vlSelf->top__DOT__queue_block__DOT____Vlvbound_h131125b7__0;
            vlSelf->top__DOT__queue_block__DOT____Vlvbound_hc89f5955__0 
                = vlSelf->top__DOT__queue_block__DOT__colour_queue
                [2U];
            vlSelf->top__DOT__queue_block__DOT____Vlvbound_hc0c41b9e__0 
                = vlSelf->top__DOT__queue_block__DOT__xqueue
                [3U];
            vlSelf->top__DOT__queue_block__DOT____Vlvbound_h131125b7__0 
                = vlSelf->top__DOT__queue_block__DOT__yqueue
                [3U];
            __Vdlyvval__top__DOT__queue_block__DOT__colour_queue__v6 
                = vlSelf->top__DOT__queue_block__DOT____Vlvbound_hc89f5955__0;
            __Vdlyvset__top__DOT__queue_block__DOT__colour_queue__v6 = 1U;
            __Vdlyvval__top__DOT__queue_block__DOT__xqueue__v2 
                = vlSelf->top__DOT__queue_block__DOT____Vlvbound_hc0c41b9e__0;
            __Vdlyvval__top__DOT__queue_block__DOT__yqueue__v2 
                = vlSelf->top__DOT__queue_block__DOT____Vlvbound_h131125b7__0;
            vlSelf->top__DOT__queue_block__DOT____Vlvbound_hc89f5955__0 
                = vlSelf->top__DOT__queue_block__DOT__colour_queue
                [3U];
            vlSelf->top__DOT__queue_block__DOT____Vlvbound_hc0c41b9e__0 
                = vlSelf->top__DOT__queue_block__DOT__xqueue
                [4U];
            vlSelf->top__DOT__queue_block__DOT____Vlvbound_h131125b7__0 
                = vlSelf->top__DOT__queue_block__DOT__yqueue
                [4U];
            __Vdlyvval__top__DOT__queue_block__DOT__colour_queue__v7 
                = vlSelf->top__DOT__queue_block__DOT____Vlvbound_hc89f5955__0;
            __Vdlyvset__top__DOT__queue_block__DOT__colour_queue__v7 = 1U;
            __Vdlyvval__top__DOT__queue_block__DOT__xqueue__v3 
                = vlSelf->top__DOT__queue_block__DOT____Vlvbound_hc0c41b9e__0;
            __Vdlyvval__top__DOT__queue_block__DOT__yqueue__v3 
                = vlSelf->top__DOT__queue_block__DOT____Vlvbound_h131125b7__0;
            vlSelf->top__DOT__queue_block__DOT____Vlvbound_hc89f5955__0 
                = vlSelf->top__DOT__queue_block__DOT__colour_queue
                [4U];
            __Vdlyvval__top__DOT__queue_block__DOT__colour_queue__v8 
                = vlSelf->top__DOT__queue_block__DOT____Vlvbound_hc89f5955__0;
            __Vdlyvset__top__DOT__queue_block__DOT__colour_queue__v8 = 1U;
        }
        if (vlSelf->fin_flag) {
            vlSelf->top__DOT__queue_block__DOT____Vlvbound_h9942c0e0__0 
                = vlSelf->colour_i;
            vlSelf->top__DOT__queue_block__DOT____Vlvbound_hf058b455__0 
                = vlSelf->xpixel_i;
            vlSelf->top__DOT__queue_block__DOT____Vlvbound_hc3849630__0 
                = vlSelf->ypixel_i;
            if ((4U >= (IData)(vlSelf->top__DOT__queue_block__DOT__counter))) {
                __Vdlyvval__top__DOT__queue_block__DOT__colour_queue__v9 
                    = vlSelf->top__DOT__queue_block__DOT____Vlvbound_h9942c0e0__0;
                __Vdlyvset__top__DOT__queue_block__DOT__colour_queue__v9 = 1U;
                __Vdlyvdim0__top__DOT__queue_block__DOT__colour_queue__v9 
                    = vlSelf->top__DOT__queue_block__DOT__counter;
                __Vdlyvval__top__DOT__queue_block__DOT__xqueue__v4 
                    = vlSelf->top__DOT__queue_block__DOT____Vlvbound_hf058b455__0;
                __Vdlyvset__top__DOT__queue_block__DOT__xqueue__v4 = 1U;
                __Vdlyvdim0__top__DOT__queue_block__DOT__xqueue__v4 
                    = vlSelf->top__DOT__queue_block__DOT__counter;
                __Vdlyvval__top__DOT__queue_block__DOT__yqueue__v4 
                    = vlSelf->top__DOT__queue_block__DOT____Vlvbound_hc3849630__0;
                __Vdlyvset__top__DOT__queue_block__DOT__yqueue__v4 = 1U;
                __Vdlyvdim0__top__DOT__queue_block__DOT__yqueue__v4 
                    = vlSelf->top__DOT__queue_block__DOT__counter;
            }
            __Vdly__top__DOT__queue_block__DOT__counter 
                = (7U & ((IData)(1U) + (IData)(vlSelf->top__DOT__queue_block__DOT__counter)));
        }
    }
    vlSelf->top__DOT__queue_block__DOT__counter = __Vdly__top__DOT__queue_block__DOT__counter;
    if (__Vdlyvset__top__DOT__queue_block__DOT__colour_queue__v0) {
        vlSelf->top__DOT__queue_block__DOT__colour_queue[0U] = 0U;
        vlSelf->top__DOT__queue_block__DOT__colour_queue[1U] = 0U;
        vlSelf->top__DOT__queue_block__DOT__colour_queue[2U] = 0U;
        vlSelf->top__DOT__queue_block__DOT__colour_queue[3U] = 0U;
        vlSelf->top__DOT__queue_block__DOT__colour_queue[4U] = 0U;
    }
    if (__Vdlyvset__top__DOT__queue_block__DOT__colour_queue__v5) {
        vlSelf->top__DOT__queue_block__DOT__colour_queue[0U] 
            = __Vdlyvval__top__DOT__queue_block__DOT__colour_queue__v5;
    }
    if (__Vdlyvset__top__DOT__queue_block__DOT__colour_queue__v6) {
        vlSelf->top__DOT__queue_block__DOT__colour_queue[1U] 
            = __Vdlyvval__top__DOT__queue_block__DOT__colour_queue__v6;
    }
    if (__Vdlyvset__top__DOT__queue_block__DOT__colour_queue__v7) {
        vlSelf->top__DOT__queue_block__DOT__colour_queue[2U] 
            = __Vdlyvval__top__DOT__queue_block__DOT__colour_queue__v7;
    }
    if (__Vdlyvset__top__DOT__queue_block__DOT__colour_queue__v8) {
        vlSelf->top__DOT__queue_block__DOT__colour_queue[3U] 
            = __Vdlyvval__top__DOT__queue_block__DOT__colour_queue__v8;
    }
    if (__Vdlyvset__top__DOT__queue_block__DOT__colour_queue__v9) {
        vlSelf->top__DOT__queue_block__DOT__colour_queue[__Vdlyvdim0__top__DOT__queue_block__DOT__colour_queue__v9] 
            = __Vdlyvval__top__DOT__queue_block__DOT__colour_queue__v9;
    }
    if (__Vdlyvset__top__DOT__queue_block__DOT__xqueue__v0) {
        vlSelf->top__DOT__queue_block__DOT__yqueue[0U] 
            = __Vdlyvval__top__DOT__queue_block__DOT__yqueue__v0;
        vlSelf->top__DOT__queue_block__DOT__xqueue[0U] 
            = __Vdlyvval__top__DOT__queue_block__DOT__xqueue__v0;
    }
    if (__Vdlyvset__top__DOT__queue_block__DOT__colour_queue__v5) {
        vlSelf->top__DOT__queue_block__DOT__yqueue[1U] 
            = __Vdlyvval__top__DOT__queue_block__DOT__yqueue__v1;
        vlSelf->top__DOT__queue_block__DOT__xqueue[1U] 
            = __Vdlyvval__top__DOT__queue_block__DOT__xqueue__v1;
    }
    if (__Vdlyvset__top__DOT__queue_block__DOT__colour_queue__v6) {
        vlSelf->top__DOT__queue_block__DOT__yqueue[2U] 
            = __Vdlyvval__top__DOT__queue_block__DOT__yqueue__v2;
        vlSelf->top__DOT__queue_block__DOT__xqueue[2U] 
            = __Vdlyvval__top__DOT__queue_block__DOT__xqueue__v2;
    }
    if (__Vdlyvset__top__DOT__queue_block__DOT__colour_queue__v7) {
        vlSelf->top__DOT__queue_block__DOT__yqueue[3U] 
            = __Vdlyvval__top__DOT__queue_block__DOT__yqueue__v3;
        vlSelf->top__DOT__queue_block__DOT__xqueue[3U] 
            = __Vdlyvval__top__DOT__queue_block__DOT__xqueue__v3;
    }
    if (__Vdlyvset__top__DOT__queue_block__DOT__yqueue__v4) {
        vlSelf->top__DOT__queue_block__DOT__yqueue[__Vdlyvdim0__top__DOT__queue_block__DOT__yqueue__v4] 
            = __Vdlyvval__top__DOT__queue_block__DOT__yqueue__v4;
    }
    if (__Vdlyvset__top__DOT__queue_block__DOT__xqueue__v4) {
        vlSelf->top__DOT__queue_block__DOT__xqueue[__Vdlyvdim0__top__DOT__queue_block__DOT__xqueue__v4] 
            = __Vdlyvval__top__DOT__queue_block__DOT__xqueue__v4;
    }
    if ((0x280U == vlSelf->top__DOT__combinator_block__DOT__xcount)) {
        vlSelf->last_x = 1U;
        __Vdly__top__DOT__combinator_block__DOT__ycount 
            = (vlSelf->top__DOT__combinator_block__DOT__ycount 
               - (IData)(1U));
        vlSelf->last_x = 1U;
        __Vdly__top__DOT__combinator_block__DOT__xcount = 0U;
    } else {
        vlSelf->last_x = 0U;
    }
    vlSelf->last_y = ((1U == vlSelf->top__DOT__combinator_block__DOT__ycount)
                       ? 1U : 0U);
    vlSelf->first = (((0U == vlSelf->top__DOT__combinator_block__DOT__xcount) 
                      & (0x1e0U == vlSelf->top__DOT__combinator_block__DOT__ycount))
                      ? 1U : 0U);
    if ((0U == vlSelf->top__DOT__combinator_block__DOT__ycount)) {
        __Vdly__top__DOT__combinator_block__DOT__ycount = 0x1e0U;
        __Vdly__top__DOT__combinator_block__DOT__xcount = 0U;
    }
    if (((IData)(vlSelf->top__DOT__en_wire) & (IData)(vlSelf->ready))) {
        __Vdly__top__DOT__combinator_block__DOT__xcount 
            = ((IData)(1U) + vlSelf->top__DOT__combinator_block__DOT__xcount);
    }
    vlSelf->top__DOT__xpixel_wire = vlSelf->top__DOT__combinator_block__DOT__xcount;
    vlSelf->top__DOT__ypixel_wire = vlSelf->top__DOT__combinator_block__DOT__ycount;
    vlSelf->top__DOT__combinator_block__DOT__xcount 
        = __Vdly__top__DOT__combinator_block__DOT__xcount;
    vlSelf->top__DOT__combinator_block__DOT__ycount 
        = __Vdly__top__DOT__combinator_block__DOT__ycount;
    if (((vlSelf->top__DOT__xpixel_wire == vlSelf->top__DOT__queue_block__DOT__xqueue
          [0U]) & (vlSelf->top__DOT__ypixel_wire == 
                   vlSelf->top__DOT__queue_block__DOT__yqueue
                   [0U]))) {
        vlSelf->top__DOT__en_wire = 1U;
    }
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtop___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->fin_flag & 0xfeU))) {
        Verilated::overWidthError("fin_flag");}
    if (VL_UNLIKELY((vlSelf->colour_i & 0xff000000U))) {
        Verilated::overWidthError("colour_i");}
    if (VL_UNLIKELY((vlSelf->ready & 0xfeU))) {
        Verilated::overWidthError("ready");}
}
#endif  // VL_DEBUG
