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
    IData/*23:0*/ top__DOT__lut_rom__DOT____Vlvbound_h2aad094a__0;
    IData/*31:0*/ __Vdly__top__DOT__distributor__DOT__x0;
    IData/*31:0*/ __Vdly__top__DOT__distributor__DOT__y0;
    IData/*31:0*/ __Vdly__top__DOT__combinator_block__DOT__xcount;
    IData/*31:0*/ __Vdly__top__DOT__combinator_block__DOT__ycount;
    IData/*31:0*/ __Vdly__top__DOT__xpixel_wire;
    IData/*31:0*/ __Vdly__top__DOT__ypixel_wire;
    IData/*31:0*/ __Vdly__top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__state;
    IData/*31:0*/ __Vdly__top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__engine__iterations;
    IData/*31:0*/ __Vdly__top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__x;
    IData/*31:0*/ __Vdly__top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__y;
    QData/*63:0*/ __Vdly__top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__y_tmp;
    QData/*63:0*/ __Vdly__top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__x2;
    QData/*63:0*/ __Vdly__top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__y2;
    CData/*2:0*/ __Vdly__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__counter;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v0;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v5;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v5;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue__v5;
    IData/*23:0*/ __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v5;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v5;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v6;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue__v6;
    IData/*23:0*/ __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v6;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v6;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v7;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue__v7;
    IData/*23:0*/ __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v7;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v7;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v8;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue__v8;
    IData/*23:0*/ __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v8;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v8;
    CData/*2:0*/ __Vdlyvdim0__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v9;
    IData/*23:0*/ __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v9;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v9;
    CData/*2:0*/ __Vdlyvdim0__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v9;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v9;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v9;
    CData/*2:0*/ __Vdlyvdim0__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue__v9;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue__v9;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue__v9;
    IData/*31:0*/ __Vdly__top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__state;
    IData/*31:0*/ __Vdly__top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__engine__iterations;
    IData/*31:0*/ __Vdly__top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__x;
    IData/*31:0*/ __Vdly__top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__y;
    QData/*63:0*/ __Vdly__top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__y_tmp;
    QData/*63:0*/ __Vdly__top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__x2;
    QData/*63:0*/ __Vdly__top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__y2;
    CData/*2:0*/ __Vdly__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__counter;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v0;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v5;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v5;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue__v5;
    IData/*23:0*/ __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v5;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v5;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v6;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue__v6;
    IData/*23:0*/ __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v6;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v6;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v7;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue__v7;
    IData/*23:0*/ __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v7;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v7;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v8;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue__v8;
    IData/*23:0*/ __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v8;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v8;
    CData/*2:0*/ __Vdlyvdim0__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v9;
    IData/*23:0*/ __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v9;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v9;
    CData/*2:0*/ __Vdlyvdim0__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v9;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v9;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v9;
    CData/*2:0*/ __Vdlyvdim0__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue__v9;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue__v9;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue__v9;
    IData/*31:0*/ __Vdly__top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__state;
    IData/*31:0*/ __Vdly__top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__engine__iterations;
    IData/*31:0*/ __Vdly__top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__x;
    IData/*31:0*/ __Vdly__top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__y;
    QData/*63:0*/ __Vdly__top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__y_tmp;
    QData/*63:0*/ __Vdly__top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__x2;
    QData/*63:0*/ __Vdly__top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__y2;
    CData/*2:0*/ __Vdly__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__counter;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v0;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v5;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v5;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue__v5;
    IData/*23:0*/ __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v5;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v5;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v6;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue__v6;
    IData/*23:0*/ __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v6;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v6;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v7;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue__v7;
    IData/*23:0*/ __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v7;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v7;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v8;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue__v8;
    IData/*23:0*/ __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v8;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v8;
    CData/*2:0*/ __Vdlyvdim0__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v9;
    IData/*23:0*/ __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v9;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v9;
    CData/*2:0*/ __Vdlyvdim0__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v9;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v9;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v9;
    CData/*2:0*/ __Vdlyvdim0__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue__v9;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue__v9;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue__v9;
    // Body
    __Vdly__top__DOT__distributor__DOT__y0 = vlSelf->top__DOT__distributor__DOT__y0;
    __Vdly__top__DOT__distributor__DOT__x0 = vlSelf->top__DOT__distributor__DOT__x0;
    __Vdly__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__counter 
        = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__counter;
    __Vdly__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__counter 
        = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__counter;
    __Vdly__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__counter 
        = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__counter;
    __Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue__v9 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue__v9 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue__v9 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v9 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v5 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v9 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v5 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v9 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v5 = 0U;
    __Vdly__top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__y2 
        = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__y2;
    __Vdly__top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__x2 
        = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__x2;
    __Vdly__top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__y_tmp 
        = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__y_tmp;
    __Vdly__top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__y 
        = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__y;
    __Vdly__top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__x 
        = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__x;
    __Vdly__top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__y2 
        = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__y2;
    __Vdly__top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__x2 
        = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__x2;
    __Vdly__top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__y_tmp 
        = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__y_tmp;
    __Vdly__top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__y 
        = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__y;
    __Vdly__top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__x 
        = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__x;
    __Vdly__top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__y2 
        = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__y2;
    __Vdly__top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__x2 
        = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__x2;
    __Vdly__top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__y_tmp 
        = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__y_tmp;
    __Vdly__top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__y 
        = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__y;
    __Vdly__top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__x 
        = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__x;
    __Vdly__top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__state 
        = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__state;
    __Vdly__top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__state 
        = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__state;
    __Vdly__top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__state 
        = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__state;
    __Vdly__top__DOT__ypixel_wire = vlSelf->top__DOT__ypixel_wire;
    __Vdly__top__DOT__xpixel_wire = vlSelf->top__DOT__xpixel_wire;
    __Vdly__top__DOT__combinator_block__DOT__ycount 
        = vlSelf->top__DOT__combinator_block__DOT__ycount;
    __Vdly__top__DOT__combinator_block__DOT__xcount 
        = vlSelf->top__DOT__combinator_block__DOT__xcount;
    __Vdly__top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__engine__iterations 
        = vlSelf->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__engine__iterations;
    __Vdly__top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__engine__iterations 
        = vlSelf->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__engine__iterations;
    __Vdly__top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__engine__iterations 
        = vlSelf->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__engine__iterations;
    __Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v8 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v9 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v0 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v5 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v6 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v7 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v8 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v9 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v0 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v5 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v6 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v7 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v8 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v9 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v0 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v5 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v6 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v7 = 0U;
    vlSelf->last_x = ((0x280U == vlSelf->top__DOT__combinator_block__DOT__xcount)
                       ? 1U : 0U);
    if (vlSelf->reset) {
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__unnamedblk1__DOT__i = 5U;
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__unnamedblk1__DOT__i = 5U;
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__unnamedblk1__DOT__i = 5U;
        __Vdly__top__DOT__distributor__DOT__x0 = 0U;
        __Vdly__top__DOT__distributor__DOT__y0 = 0U;
        __Vdly__top__DOT__combinator_block__DOT__xcount = 0U;
        __Vdly__top__DOT__combinator_block__DOT__ycount = 0U;
    } else if (vlSelf->top__DOT__fin_wire) {
        __Vdly__top__DOT__distributor__DOT__x0 = VL_MODDIV_III(32, 
                                                               ((IData)(3U) 
                                                                + vlSelf->top__DOT__distributor__DOT__x0), (IData)(0x280U));
        __Vdly__top__DOT__distributor__DOT__y0 = VL_MODDIV_III(32, 
                                                               (vlSelf->top__DOT__distributor__DOT__y0 
                                                                + 
                                                                VL_DIV_III(32, 
                                                                           ((IData)(3U) 
                                                                            + vlSelf->top__DOT__distributor__DOT__x0), (IData)(0x280U))), (IData)(0x1e0U));
    }
    if ((0x280U == vlSelf->top__DOT__combinator_block__DOT__xcount)) {
        __Vdly__top__DOT__combinator_block__DOT__ycount 
            = ((IData)(1U) + vlSelf->top__DOT__combinator_block__DOT__ycount);
        vlSelf->last_x = 1U;
        __Vdly__top__DOT__combinator_block__DOT__xcount = 0U;
    }
    if ((0x1e0U == vlSelf->top__DOT__combinator_block__DOT__ycount)) {
        vlSelf->last_y = 1U;
        __Vdly__top__DOT__combinator_block__DOT__ycount = 0U;
        __Vdly__top__DOT__combinator_block__DOT__xcount = 0U;
    } else {
        vlSelf->last_y = 0U;
    }
    if (((IData)(vlSelf->top__DOT__en_wire) & (IData)(vlSelf->ready))) {
        vlSelf->valid = 1U;
        __Vdly__top__DOT__combinator_block__DOT__xcount 
            = ((IData)(1U) + vlSelf->top__DOT__combinator_block__DOT__xcount);
        __Vdly__top__DOT__xpixel_wire = vlSelf->top__DOT__combinator_block__DOT__xcount;
        __Vdly__top__DOT__ypixel_wire = vlSelf->top__DOT__combinator_block__DOT__ycount;
        vlSelf->top__DOT__colour_o_wire = vlSelf->top__DOT__colour_wire;
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__en_wire = 0U;
        __Vdly__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__counter = 0U;
        __Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v0 = 1U;
        vlSelf->top__DOT__en_wire = 0U;
        __Vdly__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__counter = 0U;
        __Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v0 = 1U;
        vlSelf->top__DOT__en_wire = 0U;
        __Vdly__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__counter = 0U;
        __Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v0 = 1U;
    } else {
        if ((4U == (IData)(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__counter))) {
            vlSelf->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__queue_block__full_queue = 1U;
        } else if ((0U == (IData)(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__counter))) {
            vlSelf->top__DOT__en_wire = 0U;
            vlSelf->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__queue_block__full_queue = 0U;
        } else {
            vlSelf->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__queue_block__full_queue = 0U;
        }
        if (((vlSelf->top__DOT__xpixel_wire == vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue
              [0U]) & (vlSelf->top__DOT__ypixel_wire 
                       == vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue
                       [0U]))) {
            __Vdly__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__counter 
                = (7U & ((IData)(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__counter) 
                         - (IData)(1U)));
            vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_hc0c41b9e__0 
                = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue
                [1U];
            vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_h131125b7__0 
                = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue
                [1U];
            vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__unnamedblk2__DOT__i = 4U;
            vlSelf->top__DOT__colour_wire = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue
                [0U];
            vlSelf->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__queue_block__full_queue = 0U;
            vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_hc89f5955__0 
                = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue
                [1U];
            __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v5 
                = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_hc0c41b9e__0;
            __Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v5 = 1U;
            __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue__v5 
                = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_h131125b7__0;
            vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_hc0c41b9e__0 
                = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue
                [2U];
            vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_h131125b7__0 
                = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue
                [2U];
            __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v5 
                = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_hc89f5955__0;
            __Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v5 = 1U;
            __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v6 
                = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_hc0c41b9e__0;
            __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue__v6 
                = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_h131125b7__0;
            vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_hc89f5955__0 
                = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue
                [2U];
            vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_hc0c41b9e__0 
                = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue
                [3U];
            vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_h131125b7__0 
                = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue
                [3U];
            __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v6 
                = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_hc89f5955__0;
            __Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v6 = 1U;
            __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v7 
                = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_hc0c41b9e__0;
            __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue__v7 
                = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_h131125b7__0;
            vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_hc89f5955__0 
                = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue
                [3U];
            vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_hc0c41b9e__0 
                = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue
                [4U];
            vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_h131125b7__0 
                = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue
                [4U];
            __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v7 
                = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_hc89f5955__0;
            __Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v7 = 1U;
            __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v8 
                = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_hc0c41b9e__0;
            __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue__v8 
                = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_h131125b7__0;
            vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_hc89f5955__0 
                = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue
                [4U];
            __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v8 
                = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_hc89f5955__0;
            __Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v8 = 1U;
        }
        if ((1U & (IData)(vlSelf->top__DOT__fin_bus))) {
            vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_h9942c0e0__0 
                = vlSelf->top__DOT__colour_bus[0U];
            vlSelf->top__DOT__en_wire = 1U;
            vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_hf058b455__0 
                = vlSelf->top__DOT__xpixel_bus[0U];
            vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_hc3849630__0 
                = vlSelf->top__DOT__ypixel_bus[0U];
            if ((4U >= (IData)(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__counter))) {
                __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v9 
                    = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_h9942c0e0__0;
                __Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v9 = 1U;
                __Vdlyvdim0__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v9 
                    = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__counter;
                __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v9 
                    = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_hf058b455__0;
                __Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v9 = 1U;
                __Vdlyvdim0__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v9 
                    = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__counter;
                __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue__v9 
                    = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_hc3849630__0;
                __Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue__v9 = 1U;
                __Vdlyvdim0__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue__v9 
                    = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__counter;
            }
            __Vdly__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__counter 
                = (7U & ((IData)(1U) + (IData)(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__counter)));
        }
        if ((4U == (IData)(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__counter))) {
            vlSelf->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__queue_block__full_queue = 1U;
        } else if ((0U == (IData)(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__counter))) {
            vlSelf->top__DOT__en_wire = 0U;
            vlSelf->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__queue_block__full_queue = 0U;
        } else {
            vlSelf->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__queue_block__full_queue = 0U;
        }
        if (((vlSelf->top__DOT__xpixel_wire == vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue
              [0U]) & (vlSelf->top__DOT__ypixel_wire 
                       == vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue
                       [0U]))) {
            __Vdly__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__counter 
                = (7U & ((IData)(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__counter) 
                         - (IData)(1U)));
            vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_hc0c41b9e__0 
                = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue
                [1U];
            vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_h131125b7__0 
                = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue
                [1U];
            vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__unnamedblk2__DOT__i = 4U;
            vlSelf->top__DOT__colour_wire = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue
                [0U];
            vlSelf->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__queue_block__full_queue = 0U;
            vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_hc89f5955__0 
                = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue
                [1U];
            __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v5 
                = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_hc0c41b9e__0;
            __Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v5 = 1U;
            __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue__v5 
                = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_h131125b7__0;
            vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_hc0c41b9e__0 
                = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue
                [2U];
            vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_h131125b7__0 
                = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue
                [2U];
            __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v5 
                = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_hc89f5955__0;
            __Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v5 = 1U;
            __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v6 
                = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_hc0c41b9e__0;
            __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue__v6 
                = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_h131125b7__0;
            vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_hc89f5955__0 
                = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue
                [2U];
            vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_hc0c41b9e__0 
                = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue
                [3U];
            vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_h131125b7__0 
                = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue
                [3U];
            __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v6 
                = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_hc89f5955__0;
            __Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v6 = 1U;
            __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v7 
                = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_hc0c41b9e__0;
            __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue__v7 
                = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_h131125b7__0;
            vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_hc89f5955__0 
                = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue
                [3U];
            vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_hc0c41b9e__0 
                = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue
                [4U];
            vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_h131125b7__0 
                = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue
                [4U];
            __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v7 
                = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_hc89f5955__0;
            __Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v7 = 1U;
            __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v8 
                = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_hc0c41b9e__0;
            __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue__v8 
                = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_h131125b7__0;
            vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_hc89f5955__0 
                = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue
                [4U];
            __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v8 
                = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_hc89f5955__0;
            __Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v8 = 1U;
        }
        if ((2U & (IData)(vlSelf->top__DOT__fin_bus))) {
            vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_h9942c0e0__0 
                = vlSelf->top__DOT__colour_bus[1U];
            vlSelf->top__DOT__en_wire = 1U;
            vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_hf058b455__0 
                = vlSelf->top__DOT__xpixel_bus[1U];
            vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_hc3849630__0 
                = vlSelf->top__DOT__ypixel_bus[1U];
            if ((4U >= (IData)(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__counter))) {
                __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v9 
                    = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_h9942c0e0__0;
                __Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v9 = 1U;
                __Vdlyvdim0__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v9 
                    = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__counter;
                __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v9 
                    = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_hf058b455__0;
                __Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v9 = 1U;
                __Vdlyvdim0__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v9 
                    = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__counter;
                __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue__v9 
                    = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_hc3849630__0;
                __Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue__v9 = 1U;
                __Vdlyvdim0__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue__v9 
                    = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__counter;
            }
            __Vdly__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__counter 
                = (7U & ((IData)(1U) + (IData)(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__counter)));
        }
        if ((4U == (IData)(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__counter))) {
            vlSelf->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__queue_block__full_queue = 1U;
        } else if ((0U == (IData)(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__counter))) {
            vlSelf->top__DOT__en_wire = 0U;
            vlSelf->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__queue_block__full_queue = 0U;
        } else {
            vlSelf->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__queue_block__full_queue = 0U;
        }
        if (((vlSelf->top__DOT__xpixel_wire == vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue
              [0U]) & (vlSelf->top__DOT__ypixel_wire 
                       == vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue
                       [0U]))) {
            __Vdly__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__counter 
                = (7U & ((IData)(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__counter) 
                         - (IData)(1U)));
            vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_hc0c41b9e__0 
                = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue
                [1U];
            vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_h131125b7__0 
                = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue
                [1U];
            vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__unnamedblk2__DOT__i = 4U;
            vlSelf->top__DOT__colour_wire = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue
                [0U];
            vlSelf->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__queue_block__full_queue = 0U;
            vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_hc89f5955__0 
                = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue
                [1U];
            __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v5 
                = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_hc0c41b9e__0;
            __Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v5 = 1U;
            __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue__v5 
                = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_h131125b7__0;
            vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_hc0c41b9e__0 
                = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue
                [2U];
            vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_h131125b7__0 
                = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue
                [2U];
            __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v5 
                = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_hc89f5955__0;
            __Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v5 = 1U;
            __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v6 
                = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_hc0c41b9e__0;
            __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue__v6 
                = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_h131125b7__0;
            vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_hc89f5955__0 
                = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue
                [2U];
            vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_hc0c41b9e__0 
                = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue
                [3U];
            vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_h131125b7__0 
                = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue
                [3U];
            __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v6 
                = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_hc89f5955__0;
            __Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v6 = 1U;
            __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v7 
                = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_hc0c41b9e__0;
            __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue__v7 
                = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_h131125b7__0;
            vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_hc89f5955__0 
                = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue
                [3U];
            vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_hc0c41b9e__0 
                = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue
                [4U];
            vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_h131125b7__0 
                = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue
                [4U];
            __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v7 
                = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_hc89f5955__0;
            __Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v7 = 1U;
            __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v8 
                = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_hc0c41b9e__0;
            __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue__v8 
                = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_h131125b7__0;
            vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_hc89f5955__0 
                = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue
                [4U];
            __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v8 
                = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_hc89f5955__0;
            __Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v8 = 1U;
        }
        if ((4U & (IData)(vlSelf->top__DOT__fin_bus))) {
            vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_h9942c0e0__0 
                = vlSelf->top__DOT__colour_bus[2U];
            vlSelf->top__DOT__en_wire = 1U;
            vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_hf058b455__0 
                = vlSelf->top__DOT__xpixel_bus[2U];
            vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_hc3849630__0 
                = vlSelf->top__DOT__ypixel_bus[2U];
            if ((4U >= (IData)(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__counter))) {
                __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v9 
                    = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_h9942c0e0__0;
                __Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v9 = 1U;
                __Vdlyvdim0__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v9 
                    = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__counter;
                __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v9 
                    = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_hf058b455__0;
                __Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v9 = 1U;
                __Vdlyvdim0__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v9 
                    = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__counter;
                __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue__v9 
                    = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_hc3849630__0;
                __Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue__v9 = 1U;
                __Vdlyvdim0__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue__v9 
                    = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__counter;
            }
            __Vdly__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__counter 
                = (7U & ((IData)(1U) + (IData)(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__counter)));
        }
    }
    vlSelf->first = (((0U == vlSelf->top__DOT__combinator_block__DOT__xcount) 
                      & (0U == vlSelf->top__DOT__combinator_block__DOT__ycount))
                      ? 1U : 0U);
    if (vlSelf->top__DOT__reset_engine) {
        __Vdly__top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__state = 2U;
        vlSelf->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__engine__finished = 0U;
        __Vdly__top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__engine__iterations = 0U;
        __Vdly__top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__x = 0U;
        __Vdly__top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__y = 0U;
        __Vdly__top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__y_tmp = 0ULL;
        __Vdly__top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__x2 = 0ULL;
        __Vdly__top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__y2 = 0ULL;
        __Vdly__top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__state = 2U;
        vlSelf->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__engine__finished = 0U;
        __Vdly__top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__engine__iterations = 0U;
        __Vdly__top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__x = 0U;
        __Vdly__top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__y = 0U;
        __Vdly__top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__y_tmp = 0ULL;
        __Vdly__top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__x2 = 0ULL;
        __Vdly__top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__y2 = 0ULL;
        __Vdly__top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__state = 2U;
        vlSelf->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__engine__finished = 0U;
        __Vdly__top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__engine__iterations = 0U;
        __Vdly__top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__x = 0U;
        __Vdly__top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__y = 0U;
        __Vdly__top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__y_tmp = 0ULL;
        __Vdly__top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__x2 = 0ULL;
        __Vdly__top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__y2 = 0ULL;
    } else {
        if ((2U == vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__state)) {
            vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__x0_buff 
                = vlSelf->top__DOT__x[2U];
            vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__y0_buff 
                = vlSelf->top__DOT__y[2U];
            __Vdly__top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__state = 0U;
        } else if ((0U == vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__state)) {
            __Vdly__top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__x 
                = (((IData)((vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__x2 
                             >> 0x18U)) - (IData)((vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__y2 
                                                   >> 0x18U))) 
                   + (VL_RTOIROUND_I_D(((1.67772160000000000e+07 
                                         * (-320.0 
                                            + VL_ISTOR_D_I(32, vlSelf->x_offset))) 
                                        / VL_ISTOR_D_I(32, 
                                                       ((IData)(0x64U) 
                                                        * vlSelf->zoom)))) 
                      + VL_MULS_III(32, VL_DIVS_III(32, (IData)(0x1000000U), 
                                                    VL_MULS_III(32, (IData)(0x64U), vlSelf->zoom)), 
                                    vlSelf->top__DOT__x
                                    [2U])));
            if (((vlSelf->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__engine__iterations 
                  >= vlSelf->iterations_max) | (0x4000000U 
                                                <= 
                                                ((IData)(
                                                         (vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__x2 
                                                          >> 0x18U)) 
                                                 + (IData)(
                                                           (vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__y2 
                                                            >> 0x18U)))))) {
                __Vdly__top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__state = 1U;
            } else {
                __Vdly__top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__engine__iterations 
                    = ((IData)(1U) + vlSelf->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__engine__iterations);
                __Vdly__top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__state = 0U;
            }
            __Vdly__top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__x2 
                = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__x), 
                              VL_EXTENDS_QI(64,32, vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__x));
            __Vdly__top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__y2 
                = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__y), 
                              VL_EXTENDS_QI(64,32, vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__y));
            __Vdly__top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__y 
                = ((IData)((vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__y_tmp 
                            >> 0x18U)) + (VL_RTOIROUND_I_D(
                                                           ((1.67772160000000000e+07 
                                                             * 
                                                             (-240.0 
                                                              + 
                                                              VL_ISTOR_D_I(32, vlSelf->y_offset))) 
                                                            / 
                                                            VL_ISTOR_D_I(32, 
                                                                         ((IData)(0x64U) 
                                                                          * vlSelf->zoom)))) 
                                          + VL_MULS_III(32, 
                                                        VL_DIVS_III(32, (IData)(0x1000000U), 
                                                                    VL_MULS_III(32, (IData)(0x64U), vlSelf->zoom)), 
                                                        vlSelf->top__DOT__y
                                                        [2U])));
            __Vdly__top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__y_tmp 
                = ((1ULL & __Vdly__top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__y_tmp) 
                   | (VL_MULS_QQQ(63, (0x7fffffffffffffffULL 
                                       & VL_EXTENDS_QI(63,32, vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__x)), 
                                  (0x7fffffffffffffffULL 
                                   & VL_EXTENDS_QI(63,32, vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__y))) 
                      << 1U));
        } else if ((1U == vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__state)) {
            vlSelf->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__engine__finished = 1U;
            vlSelf->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__engine__xpixel 
                = vlSelf->top__DOT__x[2U];
            vlSelf->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__engine__ypixel 
                = vlSelf->top__DOT__y[2U];
        }
        if ((2U == vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__state)) {
            vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__x0_buff 
                = vlSelf->top__DOT__x[1U];
            vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__y0_buff 
                = vlSelf->top__DOT__y[1U];
            __Vdly__top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__state = 0U;
        } else if ((0U == vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__state)) {
            __Vdly__top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__x 
                = (((IData)((vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__x2 
                             >> 0x18U)) - (IData)((vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__y2 
                                                   >> 0x18U))) 
                   + (VL_RTOIROUND_I_D(((1.67772160000000000e+07 
                                         * (-320.0 
                                            + VL_ISTOR_D_I(32, vlSelf->x_offset))) 
                                        / VL_ISTOR_D_I(32, 
                                                       ((IData)(0x64U) 
                                                        * vlSelf->zoom)))) 
                      + VL_MULS_III(32, VL_DIVS_III(32, (IData)(0x1000000U), 
                                                    VL_MULS_III(32, (IData)(0x64U), vlSelf->zoom)), 
                                    vlSelf->top__DOT__x
                                    [1U])));
            if (((vlSelf->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__engine__iterations 
                  >= vlSelf->iterations_max) | (0x4000000U 
                                                <= 
                                                ((IData)(
                                                         (vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__x2 
                                                          >> 0x18U)) 
                                                 + (IData)(
                                                           (vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__y2 
                                                            >> 0x18U)))))) {
                __Vdly__top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__state = 1U;
            } else {
                __Vdly__top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__engine__iterations 
                    = ((IData)(1U) + vlSelf->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__engine__iterations);
                __Vdly__top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__state = 0U;
            }
            __Vdly__top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__x2 
                = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__x), 
                              VL_EXTENDS_QI(64,32, vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__x));
            __Vdly__top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__y2 
                = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__y), 
                              VL_EXTENDS_QI(64,32, vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__y));
            __Vdly__top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__y 
                = ((IData)((vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__y_tmp 
                            >> 0x18U)) + (VL_RTOIROUND_I_D(
                                                           ((1.67772160000000000e+07 
                                                             * 
                                                             (-240.0 
                                                              + 
                                                              VL_ISTOR_D_I(32, vlSelf->y_offset))) 
                                                            / 
                                                            VL_ISTOR_D_I(32, 
                                                                         ((IData)(0x64U) 
                                                                          * vlSelf->zoom)))) 
                                          + VL_MULS_III(32, 
                                                        VL_DIVS_III(32, (IData)(0x1000000U), 
                                                                    VL_MULS_III(32, (IData)(0x64U), vlSelf->zoom)), 
                                                        vlSelf->top__DOT__y
                                                        [1U])));
            __Vdly__top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__y_tmp 
                = ((1ULL & __Vdly__top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__y_tmp) 
                   | (VL_MULS_QQQ(63, (0x7fffffffffffffffULL 
                                       & VL_EXTENDS_QI(63,32, vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__x)), 
                                  (0x7fffffffffffffffULL 
                                   & VL_EXTENDS_QI(63,32, vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__y))) 
                      << 1U));
        } else if ((1U == vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__state)) {
            vlSelf->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__engine__finished = 1U;
            vlSelf->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__engine__xpixel 
                = vlSelf->top__DOT__x[1U];
            vlSelf->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__engine__ypixel 
                = vlSelf->top__DOT__y[1U];
        }
        if ((2U == vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__state)) {
            vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__x0_buff 
                = vlSelf->top__DOT__x[0U];
            vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__y0_buff 
                = vlSelf->top__DOT__y[0U];
            __Vdly__top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__state = 0U;
        } else if ((0U == vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__state)) {
            __Vdly__top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__x 
                = (((IData)((vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__x2 
                             >> 0x18U)) - (IData)((vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__y2 
                                                   >> 0x18U))) 
                   + (VL_RTOIROUND_I_D(((1.67772160000000000e+07 
                                         * (-320.0 
                                            + VL_ISTOR_D_I(32, vlSelf->x_offset))) 
                                        / VL_ISTOR_D_I(32, 
                                                       ((IData)(0x64U) 
                                                        * vlSelf->zoom)))) 
                      + VL_MULS_III(32, VL_DIVS_III(32, (IData)(0x1000000U), 
                                                    VL_MULS_III(32, (IData)(0x64U), vlSelf->zoom)), 
                                    vlSelf->top__DOT__x
                                    [0U])));
            if (((vlSelf->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__engine__iterations 
                  >= vlSelf->iterations_max) | (0x4000000U 
                                                <= 
                                                ((IData)(
                                                         (vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__x2 
                                                          >> 0x18U)) 
                                                 + (IData)(
                                                           (vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__y2 
                                                            >> 0x18U)))))) {
                __Vdly__top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__state = 1U;
            } else {
                __Vdly__top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__engine__iterations 
                    = ((IData)(1U) + vlSelf->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__engine__iterations);
                __Vdly__top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__state = 0U;
            }
            __Vdly__top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__x2 
                = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__x), 
                              VL_EXTENDS_QI(64,32, vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__x));
            __Vdly__top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__y2 
                = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__y), 
                              VL_EXTENDS_QI(64,32, vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__y));
            __Vdly__top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__y 
                = ((IData)((vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__y_tmp 
                            >> 0x18U)) + (VL_RTOIROUND_I_D(
                                                           ((1.67772160000000000e+07 
                                                             * 
                                                             (-240.0 
                                                              + 
                                                              VL_ISTOR_D_I(32, vlSelf->y_offset))) 
                                                            / 
                                                            VL_ISTOR_D_I(32, 
                                                                         ((IData)(0x64U) 
                                                                          * vlSelf->zoom)))) 
                                          + VL_MULS_III(32, 
                                                        VL_DIVS_III(32, (IData)(0x1000000U), 
                                                                    VL_MULS_III(32, (IData)(0x64U), vlSelf->zoom)), 
                                                        vlSelf->top__DOT__y
                                                        [0U])));
            __Vdly__top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__y_tmp 
                = ((1ULL & __Vdly__top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__y_tmp) 
                   | (VL_MULS_QQQ(63, (0x7fffffffffffffffULL 
                                       & VL_EXTENDS_QI(63,32, vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__x)), 
                                  (0x7fffffffffffffffULL 
                                   & VL_EXTENDS_QI(63,32, vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__y))) 
                      << 1U));
        } else if ((1U == vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__state)) {
            vlSelf->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__engine__finished = 1U;
            vlSelf->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__engine__xpixel 
                = vlSelf->top__DOT__x[0U];
            vlSelf->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__engine__ypixel 
                = vlSelf->top__DOT__y[0U];
        }
    }
    vlSelf->top__DOT__distributor__DOT__y0 = __Vdly__top__DOT__distributor__DOT__y0;
    vlSelf->top__DOT__distributor__DOT__x0 = __Vdly__top__DOT__distributor__DOT__x0;
    vlSelf->top__DOT__combinator_block__DOT__xcount 
        = __Vdly__top__DOT__combinator_block__DOT__xcount;
    vlSelf->top__DOT__combinator_block__DOT__ycount 
        = __Vdly__top__DOT__combinator_block__DOT__ycount;
    vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__x 
        = __Vdly__top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__x;
    vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__y 
        = __Vdly__top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__y;
    vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__y_tmp 
        = __Vdly__top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__y_tmp;
    vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__x2 
        = __Vdly__top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__x2;
    vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__y2 
        = __Vdly__top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__y2;
    vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__state 
        = __Vdly__top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__state;
    vlSelf->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__engine__iterations 
        = __Vdly__top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__engine__iterations;
    vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__x 
        = __Vdly__top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__x;
    vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__y 
        = __Vdly__top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__y;
    vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__y_tmp 
        = __Vdly__top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__y_tmp;
    vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__x2 
        = __Vdly__top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__x2;
    vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__y2 
        = __Vdly__top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__y2;
    vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__state 
        = __Vdly__top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__state;
    vlSelf->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__engine__iterations 
        = __Vdly__top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__engine__iterations;
    vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__x 
        = __Vdly__top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__x;
    vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__y 
        = __Vdly__top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__y;
    vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__y_tmp 
        = __Vdly__top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__y_tmp;
    vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__x2 
        = __Vdly__top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__x2;
    vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__y2 
        = __Vdly__top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__y2;
    vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__state 
        = __Vdly__top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__state;
    vlSelf->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__engine__iterations 
        = __Vdly__top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__engine__iterations;
    vlSelf->top__DOT__y[0U] = vlSelf->top__DOT__distributor__DOT__y0;
    vlSelf->top__DOT__x[2U] = VL_MODDIV_III(32, ((IData)(2U) 
                                                 + vlSelf->top__DOT__distributor__DOT__x0), (IData)(0x280U));
    vlSelf->top__DOT__x[1U] = VL_MODDIV_III(32, ((IData)(1U) 
                                                 + vlSelf->top__DOT__distributor__DOT__x0), (IData)(0x280U));
    vlSelf->top__DOT__x[0U] = vlSelf->top__DOT__distributor__DOT__x0;
    vlSelf->top__DOT__y[2U] = VL_MODDIV_III(32, (vlSelf->top__DOT__distributor__DOT__y0 
                                                 + 
                                                 VL_DIV_III(32, 
                                                            ((IData)(2U) 
                                                             + vlSelf->top__DOT__distributor__DOT__x0), (IData)(0x280U))), (IData)(0x1e0U));
    vlSelf->top__DOT__y[1U] = VL_MODDIV_III(32, (vlSelf->top__DOT__distributor__DOT__y0 
                                                 + 
                                                 VL_DIV_III(32, 
                                                            ((IData)(1U) 
                                                             + vlSelf->top__DOT__distributor__DOT__x0), (IData)(0x280U))), (IData)(0x1e0U));
    vlSelf->top__DOT__iterations_bus[2U] = vlSelf->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__engine__iterations;
    vlSelf->top__DOT__iterations_bus[1U] = vlSelf->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__engine__iterations;
    vlSelf->top__DOT__iterations_bus[0U] = vlSelf->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__engine__iterations;
    vlSelf->r = (0xffU & vlSelf->top__DOT__colour_o_wire);
    vlSelf->g = (0xffU & (vlSelf->top__DOT__colour_o_wire 
                          >> 8U));
    vlSelf->b = (0xffU & (vlSelf->top__DOT__colour_o_wire 
                          >> 0x10U));
    vlSelf->top__DOT____Vcellinp__lut_rom__iterations[2U] 
        = vlSelf->top__DOT__iterations_bus[2U];
    vlSelf->top__DOT____Vcellinp__lut_rom__iterations[1U] 
        = vlSelf->top__DOT__iterations_bus[1U];
    vlSelf->top__DOT____Vcellinp__lut_rom__iterations[0U] 
        = vlSelf->top__DOT__iterations_bus[0U];
    vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__counter 
        = __Vdly__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__counter;
    if (__Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v0) {
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[0U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[1U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[2U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[3U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[4U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[0U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[1U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[2U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[3U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[4U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[0U] = 0U;
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[1U] = 0U;
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[2U] = 0U;
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[3U] = 0U;
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[4U] = 0U;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v5) {
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[0U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue__v5;
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[0U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v5;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v5) {
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[1U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue__v6;
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[1U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v6;
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[0U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v5;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v6) {
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[2U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue__v7;
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[2U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v7;
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[1U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v6;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v7) {
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[3U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue__v8;
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[3U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v8;
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[2U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v7;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue__v9) {
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[__Vdlyvdim0__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue__v9] 
            = __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue__v9;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v9) {
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[__Vdlyvdim0__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v9] 
            = __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v9;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v8) {
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[3U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v8;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v9) {
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[__Vdlyvdim0__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v9] 
            = __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v9;
    }
    vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__counter 
        = __Vdly__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__counter;
    if (__Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v0) {
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[0U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[1U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[2U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[3U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[4U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[0U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[1U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[2U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[3U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[4U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[0U] = 0U;
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[1U] = 0U;
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[2U] = 0U;
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[3U] = 0U;
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[4U] = 0U;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v5) {
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[0U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue__v5;
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[0U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v5;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v5) {
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[1U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue__v6;
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[1U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v6;
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[0U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v5;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v6) {
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[2U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue__v7;
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[2U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v7;
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[1U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v6;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v7) {
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[3U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue__v8;
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[3U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v8;
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[2U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v7;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue__v9) {
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[__Vdlyvdim0__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue__v9] 
            = __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue__v9;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v9) {
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[__Vdlyvdim0__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v9] 
            = __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v9;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v8) {
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[3U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v8;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v9) {
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[__Vdlyvdim0__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v9] 
            = __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v9;
    }
    vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__counter 
        = __Vdly__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__counter;
    vlSelf->top__DOT__xpixel_wire = __Vdly__top__DOT__xpixel_wire;
    vlSelf->top__DOT__ypixel_wire = __Vdly__top__DOT__ypixel_wire;
    if (__Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v0) {
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[0U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[1U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[2U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[3U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[4U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[0U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[1U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[2U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[3U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[4U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[0U] = 0U;
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[1U] = 0U;
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[2U] = 0U;
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[3U] = 0U;
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[4U] = 0U;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v5) {
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[0U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue__v5;
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[0U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v5;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v5) {
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[1U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue__v6;
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[1U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v6;
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[0U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v5;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v6) {
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[2U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue__v7;
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[2U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v7;
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[1U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v6;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v7) {
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[3U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue__v8;
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[3U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v8;
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[2U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v7;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue__v9) {
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[__Vdlyvdim0__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue__v9] 
            = __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue__v9;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v9) {
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[__Vdlyvdim0__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v9] 
            = __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v9;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v8) {
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[3U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v8;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v9) {
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[__Vdlyvdim0__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v9] 
            = __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v9;
    }
    vlSelf->top__DOT__xpixel_bus[0U] = vlSelf->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__engine__xpixel;
    vlSelf->top__DOT__xpixel_bus[1U] = vlSelf->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__engine__xpixel;
    vlSelf->top__DOT__xpixel_bus[2U] = vlSelf->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__engine__xpixel;
    vlSelf->top__DOT__ypixel_bus[0U] = vlSelf->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__engine__ypixel;
    vlSelf->top__DOT__ypixel_bus[1U] = vlSelf->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__engine__ypixel;
    vlSelf->top__DOT__ypixel_bus[2U] = vlSelf->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__engine__ypixel;
    vlSelf->top__DOT__fin_bus = (((IData)(vlSelf->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__engine__finished) 
                                  << 2U) | (((IData)(vlSelf->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__engine__finished) 
                                             << 1U) 
                                            | (IData)(vlSelf->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__engine__finished)));
    top__DOT__lut_rom__DOT____Vlvbound_h2aad094a__0 
        = ((0x31U >= (0x3fU & vlSelf->top__DOT____Vcellinp__lut_rom__iterations
                      [0U])) ? vlSelf->top__DOT__lut_rom__DOT__lut_array
           [(0x3fU & vlSelf->top__DOT____Vcellinp__lut_rom__iterations
             [0U])] : 0U);
    vlSelf->top__DOT____Vcellout__lut_rom__rgb_val[0U] 
        = top__DOT__lut_rom__DOT____Vlvbound_h2aad094a__0;
    top__DOT__lut_rom__DOT____Vlvbound_h2aad094a__0 
        = ((0x31U >= (0x3fU & vlSelf->top__DOT____Vcellinp__lut_rom__iterations
                      [1U])) ? vlSelf->top__DOT__lut_rom__DOT__lut_array
           [(0x3fU & vlSelf->top__DOT____Vcellinp__lut_rom__iterations
             [1U])] : 0U);
    vlSelf->top__DOT____Vcellout__lut_rom__rgb_val[1U] 
        = top__DOT__lut_rom__DOT____Vlvbound_h2aad094a__0;
    top__DOT__lut_rom__DOT____Vlvbound_h2aad094a__0 
        = ((0x31U >= (0x3fU & vlSelf->top__DOT____Vcellinp__lut_rom__iterations
                      [2U])) ? vlSelf->top__DOT__lut_rom__DOT__lut_array
           [(0x3fU & vlSelf->top__DOT____Vcellinp__lut_rom__iterations
             [2U])] : 0U);
    vlSelf->top__DOT____Vcellout__lut_rom__rgb_val[2U] 
        = top__DOT__lut_rom__DOT____Vlvbound_h2aad094a__0;
    vlSelf->full_queue[0U] = vlSelf->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__queue_block__full_queue;
    vlSelf->full_queue[1U] = vlSelf->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__queue_block__full_queue;
    vlSelf->full_queue[2U] = vlSelf->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__queue_block__full_queue;
    vlSelf->top__DOT__colour_bus[2U] = vlSelf->top__DOT____Vcellout__lut_rom__rgb_val
        [2U];
    vlSelf->top__DOT__colour_bus[1U] = vlSelf->top__DOT____Vcellout__lut_rom__rgb_val
        [1U];
    vlSelf->top__DOT__colour_bus[0U] = vlSelf->top__DOT____Vcellout__lut_rom__rgb_val
        [0U];
}

VL_INLINE_OPT void Vtop___024root___combo__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__fin_wire = ((7U == (IData)(vlSelf->top__DOT__fin_bus)) 
                                  | (IData)(vlSelf->reset));
    vlSelf->top__DOT__reset_engine = ((7U == (IData)(vlSelf->top__DOT__fin_bus)) 
                                      | (IData)(vlSelf->reset));
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
    Vtop___024root___combo__TOP__0(vlSelf);
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
    if (VL_UNLIKELY((vlSelf->ready & 0xfeU))) {
        Verilated::overWidthError("ready");}
}
#endif  // VL_DEBUG
