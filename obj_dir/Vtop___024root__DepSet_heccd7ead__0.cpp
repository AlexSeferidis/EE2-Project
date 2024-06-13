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
    IData/*23:0*/ top__DOT__lut_rom__DOT____Vlvbound_h5eb2d243__0;
    IData/*31:0*/ __Vdly__top__DOT__combinator_block__DOT__xpixel;
    IData/*31:0*/ __Vdly__top__DOT__combinator_block__DOT__ypixel;
    IData/*31:0*/ __Vdly__top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__state;
    IData/*31:0*/ __Vdly__top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__engine__iterations;
    IData/*31:0*/ __Vdly__top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__x;
    IData/*31:0*/ __Vdly__top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__y;
    QData/*63:0*/ __Vdly__top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__y_tmp;
    QData/*63:0*/ __Vdly__top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__x2;
    QData/*63:0*/ __Vdly__top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__y2;
    CData/*3:0*/ __Vdly__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__counter;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v0;
    CData/*0:0*/ __Vdly__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__fin_wire;
    IData/*23:0*/ __Vdly__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_wire;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v10;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v10;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue__v10;
    IData/*23:0*/ __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v10;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v10;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v11;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue__v11;
    IData/*23:0*/ __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v11;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v11;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v12;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue__v12;
    IData/*23:0*/ __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v12;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v12;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v13;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue__v13;
    IData/*23:0*/ __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v13;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v13;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v14;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue__v14;
    IData/*23:0*/ __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v14;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v14;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v15;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue__v15;
    IData/*23:0*/ __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v15;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v15;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v16;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue__v16;
    IData/*23:0*/ __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v16;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v16;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v17;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue__v17;
    IData/*23:0*/ __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v17;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v17;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v18;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue__v18;
    IData/*23:0*/ __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v18;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v18;
    CData/*3:0*/ __Vdlyvdim0__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v19;
    IData/*23:0*/ __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v19;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v19;
    CData/*3:0*/ __Vdlyvdim0__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v19;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v19;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v19;
    CData/*3:0*/ __Vdlyvdim0__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue__v19;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue__v19;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue__v19;
    IData/*31:0*/ __Vdly__top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__state;
    IData/*31:0*/ __Vdly__top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__engine__iterations;
    IData/*31:0*/ __Vdly__top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__x;
    IData/*31:0*/ __Vdly__top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__y;
    QData/*63:0*/ __Vdly__top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__y_tmp;
    QData/*63:0*/ __Vdly__top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__x2;
    QData/*63:0*/ __Vdly__top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__y2;
    CData/*3:0*/ __Vdly__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__counter;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v0;
    CData/*0:0*/ __Vdly__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__fin_wire;
    IData/*23:0*/ __Vdly__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_wire;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v10;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v10;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue__v10;
    IData/*23:0*/ __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v10;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v10;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v11;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue__v11;
    IData/*23:0*/ __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v11;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v11;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v12;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue__v12;
    IData/*23:0*/ __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v12;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v12;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v13;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue__v13;
    IData/*23:0*/ __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v13;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v13;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v14;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue__v14;
    IData/*23:0*/ __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v14;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v14;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v15;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue__v15;
    IData/*23:0*/ __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v15;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v15;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v16;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue__v16;
    IData/*23:0*/ __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v16;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v16;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v17;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue__v17;
    IData/*23:0*/ __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v17;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v17;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v18;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue__v18;
    IData/*23:0*/ __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v18;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v18;
    CData/*3:0*/ __Vdlyvdim0__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v19;
    IData/*23:0*/ __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v19;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v19;
    CData/*3:0*/ __Vdlyvdim0__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v19;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v19;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v19;
    CData/*3:0*/ __Vdlyvdim0__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue__v19;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue__v19;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue__v19;
    IData/*31:0*/ __Vdly__top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__state;
    IData/*31:0*/ __Vdly__top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__engine__iterations;
    IData/*31:0*/ __Vdly__top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__x;
    IData/*31:0*/ __Vdly__top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__y;
    QData/*63:0*/ __Vdly__top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__y_tmp;
    QData/*63:0*/ __Vdly__top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__x2;
    QData/*63:0*/ __Vdly__top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__y2;
    CData/*3:0*/ __Vdly__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__counter;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v0;
    CData/*0:0*/ __Vdly__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__fin_wire;
    IData/*23:0*/ __Vdly__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_wire;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v10;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v10;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue__v10;
    IData/*23:0*/ __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v10;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v10;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v11;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue__v11;
    IData/*23:0*/ __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v11;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v11;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v12;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue__v12;
    IData/*23:0*/ __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v12;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v12;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v13;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue__v13;
    IData/*23:0*/ __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v13;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v13;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v14;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue__v14;
    IData/*23:0*/ __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v14;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v14;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v15;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue__v15;
    IData/*23:0*/ __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v15;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v15;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v16;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue__v16;
    IData/*23:0*/ __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v16;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v16;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v17;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue__v17;
    IData/*23:0*/ __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v17;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v17;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v18;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue__v18;
    IData/*23:0*/ __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v18;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v18;
    CData/*3:0*/ __Vdlyvdim0__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v19;
    IData/*23:0*/ __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v19;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v19;
    CData/*3:0*/ __Vdlyvdim0__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v19;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v19;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v19;
    CData/*3:0*/ __Vdlyvdim0__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue__v19;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue__v19;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue__v19;
    IData/*31:0*/ __Vdly__top__DOT__genblk1__BRA__3__KET____DOT__engine__DOT__state;
    IData/*31:0*/ __Vdly__top__DOT____Vcellout__genblk1__BRA__3__KET____DOT__engine__iterations;
    IData/*31:0*/ __Vdly__top__DOT__genblk1__BRA__3__KET____DOT__engine__DOT__x;
    IData/*31:0*/ __Vdly__top__DOT__genblk1__BRA__3__KET____DOT__engine__DOT__y;
    QData/*63:0*/ __Vdly__top__DOT__genblk1__BRA__3__KET____DOT__engine__DOT__y_tmp;
    QData/*63:0*/ __Vdly__top__DOT__genblk1__BRA__3__KET____DOT__engine__DOT__x2;
    QData/*63:0*/ __Vdly__top__DOT__genblk1__BRA__3__KET____DOT__engine__DOT__y2;
    CData/*3:0*/ __Vdly__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__counter;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v0;
    CData/*0:0*/ __Vdly__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__fin_wire;
    IData/*23:0*/ __Vdly__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_wire;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue__v10;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue__v10;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue__v10;
    IData/*23:0*/ __Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v10;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v10;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue__v11;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue__v11;
    IData/*23:0*/ __Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v11;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v11;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue__v12;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue__v12;
    IData/*23:0*/ __Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v12;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v12;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue__v13;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue__v13;
    IData/*23:0*/ __Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v13;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v13;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue__v14;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue__v14;
    IData/*23:0*/ __Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v14;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v14;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue__v15;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue__v15;
    IData/*23:0*/ __Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v15;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v15;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue__v16;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue__v16;
    IData/*23:0*/ __Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v16;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v16;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue__v17;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue__v17;
    IData/*23:0*/ __Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v17;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v17;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue__v18;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue__v18;
    IData/*23:0*/ __Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v18;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v18;
    CData/*3:0*/ __Vdlyvdim0__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v19;
    IData/*23:0*/ __Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v19;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v19;
    CData/*3:0*/ __Vdlyvdim0__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue__v19;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue__v19;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue__v19;
    CData/*3:0*/ __Vdlyvdim0__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue__v19;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue__v19;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue__v19;
    IData/*31:0*/ __Vdly__top__DOT__genblk1__BRA__4__KET____DOT__engine__DOT__state;
    IData/*31:0*/ __Vdly__top__DOT____Vcellout__genblk1__BRA__4__KET____DOT__engine__iterations;
    IData/*31:0*/ __Vdly__top__DOT__genblk1__BRA__4__KET____DOT__engine__DOT__x;
    IData/*31:0*/ __Vdly__top__DOT__genblk1__BRA__4__KET____DOT__engine__DOT__y;
    QData/*63:0*/ __Vdly__top__DOT__genblk1__BRA__4__KET____DOT__engine__DOT__y_tmp;
    QData/*63:0*/ __Vdly__top__DOT__genblk1__BRA__4__KET____DOT__engine__DOT__x2;
    QData/*63:0*/ __Vdly__top__DOT__genblk1__BRA__4__KET____DOT__engine__DOT__y2;
    CData/*3:0*/ __Vdly__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__counter;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v0;
    CData/*0:0*/ __Vdly__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__fin_wire;
    IData/*23:0*/ __Vdly__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_wire;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue__v10;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue__v10;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue__v10;
    IData/*23:0*/ __Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v10;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v10;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue__v11;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue__v11;
    IData/*23:0*/ __Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v11;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v11;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue__v12;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue__v12;
    IData/*23:0*/ __Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v12;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v12;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue__v13;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue__v13;
    IData/*23:0*/ __Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v13;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v13;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue__v14;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue__v14;
    IData/*23:0*/ __Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v14;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v14;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue__v15;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue__v15;
    IData/*23:0*/ __Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v15;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v15;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue__v16;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue__v16;
    IData/*23:0*/ __Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v16;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v16;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue__v17;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue__v17;
    IData/*23:0*/ __Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v17;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v17;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue__v18;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue__v18;
    IData/*23:0*/ __Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v18;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v18;
    CData/*3:0*/ __Vdlyvdim0__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v19;
    IData/*23:0*/ __Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v19;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v19;
    CData/*3:0*/ __Vdlyvdim0__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue__v19;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue__v19;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue__v19;
    CData/*3:0*/ __Vdlyvdim0__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue__v19;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue__v19;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue__v19;
    IData/*31:0*/ __Vdly__top__DOT__genblk1__BRA__5__KET____DOT__engine__DOT__state;
    IData/*31:0*/ __Vdly__top__DOT____Vcellout__genblk1__BRA__5__KET____DOT__engine__iterations;
    IData/*31:0*/ __Vdly__top__DOT__genblk1__BRA__5__KET____DOT__engine__DOT__x;
    IData/*31:0*/ __Vdly__top__DOT__genblk1__BRA__5__KET____DOT__engine__DOT__y;
    QData/*63:0*/ __Vdly__top__DOT__genblk1__BRA__5__KET____DOT__engine__DOT__y_tmp;
    QData/*63:0*/ __Vdly__top__DOT__genblk1__BRA__5__KET____DOT__engine__DOT__x2;
    QData/*63:0*/ __Vdly__top__DOT__genblk1__BRA__5__KET____DOT__engine__DOT__y2;
    CData/*3:0*/ __Vdly__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__counter;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v0;
    CData/*0:0*/ __Vdly__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__fin_wire;
    IData/*23:0*/ __Vdly__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_wire;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue__v10;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue__v10;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue__v10;
    IData/*23:0*/ __Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v10;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v10;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue__v11;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue__v11;
    IData/*23:0*/ __Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v11;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v11;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue__v12;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue__v12;
    IData/*23:0*/ __Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v12;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v12;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue__v13;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue__v13;
    IData/*23:0*/ __Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v13;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v13;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue__v14;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue__v14;
    IData/*23:0*/ __Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v14;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v14;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue__v15;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue__v15;
    IData/*23:0*/ __Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v15;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v15;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue__v16;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue__v16;
    IData/*23:0*/ __Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v16;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v16;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue__v17;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue__v17;
    IData/*23:0*/ __Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v17;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v17;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue__v18;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue__v18;
    IData/*23:0*/ __Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v18;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v18;
    CData/*3:0*/ __Vdlyvdim0__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v19;
    IData/*23:0*/ __Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v19;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v19;
    CData/*3:0*/ __Vdlyvdim0__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue__v19;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue__v19;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue__v19;
    CData/*3:0*/ __Vdlyvdim0__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue__v19;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue__v19;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue__v19;
    // Body
    __Vdly__top__DOT__combinator_block__DOT__ypixel 
        = vlSelf->top__DOT__combinator_block__DOT__ypixel;
    __Vdly__top__DOT__combinator_block__DOT__xpixel 
        = vlSelf->top__DOT__combinator_block__DOT__xpixel;
    __Vdly__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_wire 
        = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_wire;
    __Vdly__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__fin_wire 
        = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__fin_wire;
    __Vdly__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_wire 
        = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_wire;
    __Vdly__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__fin_wire 
        = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__fin_wire;
    __Vdly__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_wire 
        = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_wire;
    __Vdly__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__fin_wire 
        = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__fin_wire;
    __Vdly__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_wire 
        = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_wire;
    __Vdly__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__fin_wire 
        = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__fin_wire;
    __Vdly__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_wire 
        = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_wire;
    __Vdly__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__fin_wire 
        = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__fin_wire;
    __Vdly__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_wire 
        = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_wire;
    __Vdly__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__fin_wire 
        = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__fin_wire;
    __Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue__v19 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue__v19 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue__v19 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue__v19 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue__v19 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue__v19 = 0U;
    __Vdly__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__counter 
        = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__counter;
    __Vdly__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__counter 
        = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__counter;
    __Vdly__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__counter 
        = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__counter;
    __Vdly__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__counter 
        = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__counter;
    __Vdly__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__counter 
        = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__counter;
    __Vdly__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__counter 
        = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__counter;
    __Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue__v19 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue__v10 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue__v19 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue__v10 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue__v19 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue__v10 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v19 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v10 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v19 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v10 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v19 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v10 = 0U;
    __Vdly__top__DOT__genblk1__BRA__5__KET____DOT__engine__DOT__y2 
        = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__engine__DOT__y2;
    __Vdly__top__DOT__genblk1__BRA__5__KET____DOT__engine__DOT__x2 
        = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__engine__DOT__x2;
    __Vdly__top__DOT__genblk1__BRA__5__KET____DOT__engine__DOT__y_tmp 
        = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__engine__DOT__y_tmp;
    __Vdly__top__DOT__genblk1__BRA__5__KET____DOT__engine__DOT__y 
        = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__engine__DOT__y;
    __Vdly__top__DOT__genblk1__BRA__5__KET____DOT__engine__DOT__x 
        = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__engine__DOT__x;
    __Vdly__top__DOT__genblk1__BRA__4__KET____DOT__engine__DOT__y2 
        = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__engine__DOT__y2;
    __Vdly__top__DOT__genblk1__BRA__4__KET____DOT__engine__DOT__x2 
        = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__engine__DOT__x2;
    __Vdly__top__DOT__genblk1__BRA__4__KET____DOT__engine__DOT__y_tmp 
        = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__engine__DOT__y_tmp;
    __Vdly__top__DOT__genblk1__BRA__4__KET____DOT__engine__DOT__y 
        = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__engine__DOT__y;
    __Vdly__top__DOT__genblk1__BRA__4__KET____DOT__engine__DOT__x 
        = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__engine__DOT__x;
    __Vdly__top__DOT__genblk1__BRA__3__KET____DOT__engine__DOT__y2 
        = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__engine__DOT__y2;
    __Vdly__top__DOT__genblk1__BRA__3__KET____DOT__engine__DOT__x2 
        = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__engine__DOT__x2;
    __Vdly__top__DOT__genblk1__BRA__3__KET____DOT__engine__DOT__y_tmp 
        = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__engine__DOT__y_tmp;
    __Vdly__top__DOT__genblk1__BRA__3__KET____DOT__engine__DOT__y 
        = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__engine__DOT__y;
    __Vdly__top__DOT__genblk1__BRA__3__KET____DOT__engine__DOT__x 
        = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__engine__DOT__x;
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
    __Vdly__top__DOT__genblk1__BRA__5__KET____DOT__engine__DOT__state 
        = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__engine__DOT__state;
    __Vdly__top__DOT__genblk1__BRA__4__KET____DOT__engine__DOT__state 
        = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__engine__DOT__state;
    __Vdly__top__DOT__genblk1__BRA__3__KET____DOT__engine__DOT__state 
        = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__engine__DOT__state;
    __Vdly__top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__state 
        = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__state;
    __Vdly__top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__state 
        = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__state;
    __Vdly__top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__state 
        = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__state;
    __Vdly__top__DOT____Vcellout__genblk1__BRA__5__KET____DOT__engine__iterations 
        = vlSelf->top__DOT____Vcellout__genblk1__BRA__5__KET____DOT__engine__iterations;
    __Vdly__top__DOT____Vcellout__genblk1__BRA__4__KET____DOT__engine__iterations 
        = vlSelf->top__DOT____Vcellout__genblk1__BRA__4__KET____DOT__engine__iterations;
    __Vdly__top__DOT____Vcellout__genblk1__BRA__3__KET____DOT__engine__iterations 
        = vlSelf->top__DOT____Vcellout__genblk1__BRA__3__KET____DOT__engine__iterations;
    __Vdly__top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__engine__iterations 
        = vlSelf->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__engine__iterations;
    __Vdly__top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__engine__iterations 
        = vlSelf->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__engine__iterations;
    __Vdly__top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__engine__iterations 
        = vlSelf->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__engine__iterations;
    __Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v18 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v19 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v0 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v10 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v11 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v12 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v13 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v14 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v15 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v16 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v17 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v18 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v19 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v0 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v10 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v11 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v12 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v13 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v14 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v15 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v16 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v17 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v18 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v19 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v0 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v10 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v11 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v12 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v13 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v14 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v15 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v16 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v17 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v18 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v19 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v0 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v10 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v11 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v12 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v13 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v14 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v15 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v16 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v17 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v18 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v19 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v0 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v10 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v11 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v12 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v13 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v14 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v15 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v16 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v17 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v18 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v19 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v0 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v10 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v11 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v12 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v13 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v14 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v15 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v16 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v17 = 0U;
    vlSelf->valid = ((0x3fU == (IData)(vlSelf->top__DOT__en_bus)) 
                     & (IData)(vlSelf->ready));
    if (vlSelf->reset) {
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__unnamedblk2__DOT__i = 0xaU;
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__unnamedblk2__DOT__i = 0xaU;
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__unnamedblk2__DOT__i = 0xaU;
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__unnamedblk2__DOT__i = 0xaU;
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__unnamedblk2__DOT__i = 0xaU;
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__unnamedblk2__DOT__i = 0xaU;
        vlSelf->first = 1U;
    }
    if (((0x3fU == (IData)(vlSelf->top__DOT__en_bus)) 
         & (IData)(vlSelf->ready))) {
        vlSelf->top__DOT__colour_o_wire = vlSelf->top__DOT__colour_wire;
    }
    if (vlSelf->reset) {
        __Vdly__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__counter = 0U;
        __Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v0 = 1U;
        __Vdly__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__counter = 0U;
        __Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v0 = 1U;
        __Vdly__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__counter = 0U;
        __Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v0 = 1U;
        __Vdly__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__counter = 0U;
        __Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v0 = 1U;
        __Vdly__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__counter = 0U;
        __Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v0 = 1U;
        __Vdly__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__counter = 0U;
        __Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v0 = 1U;
        __Vdly__top__DOT__combinator_block__DOT__xpixel = 0U;
        __Vdly__top__DOT__combinator_block__DOT__ypixel = 0U;
    } else {
        if (((IData)(vlSelf->top__DOT__fin_bus) & (
                                                   vlSelf->top__DOT__xpixel_bus
                                                   [0U] 
                                                   != vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__prev_xpixel))) {
            __Vdly__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__fin_wire = 1U;
            __Vdly__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_wire 
                = vlSelf->top__DOT__colour_bus[0U];
        }
        if (((vlSelf->top__DOT__xpixel_wire == vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue
              [0U]) & (vlSelf->top__DOT__ypixel_wire 
                       == vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue
                       [0U]))) {
            __Vdly__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__counter 
                = (0xfU & ((IData)(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__counter) 
                           - (IData)(1U)));
            vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_hba1e7bd2__0 
                = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue
                [1U];
            vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_hb8b57eae__0 
                = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue
                [1U];
            vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__unnamedblk3__DOT__i = 9U;
            vlSelf->top__DOT__colour_wire = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue
                [0U];
            vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0 
                = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue
                [1U];
            __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v10 
                = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_hba1e7bd2__0;
            __Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v10 = 1U;
            __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue__v10 
                = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_hb8b57eae__0;
            vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_hba1e7bd2__0 
                = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue
                [2U];
            vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_hb8b57eae__0 
                = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue
                [2U];
            __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v10 
                = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0;
            __Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v10 = 1U;
            __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v11 
                = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_hba1e7bd2__0;
            __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue__v11 
                = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_hb8b57eae__0;
            vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0 
                = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue
                [2U];
            vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_hba1e7bd2__0 
                = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue
                [3U];
            vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_hb8b57eae__0 
                = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue
                [3U];
            __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v11 
                = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0;
            __Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v11 = 1U;
            __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v12 
                = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_hba1e7bd2__0;
            __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue__v12 
                = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_hb8b57eae__0;
            vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0 
                = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue
                [3U];
            vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_hba1e7bd2__0 
                = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue
                [4U];
            vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_hb8b57eae__0 
                = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue
                [4U];
            __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v12 
                = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0;
            __Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v12 = 1U;
            __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v13 
                = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_hba1e7bd2__0;
            __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue__v13 
                = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_hb8b57eae__0;
            vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0 
                = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue
                [4U];
            vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_hba1e7bd2__0 
                = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue
                [5U];
            vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_hb8b57eae__0 
                = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue
                [5U];
            __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v13 
                = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0;
            __Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v13 = 1U;
            __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v14 
                = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_hba1e7bd2__0;
            __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue__v14 
                = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_hb8b57eae__0;
            vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0 
                = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue
                [5U];
            vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_hba1e7bd2__0 
                = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue
                [6U];
            vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_hb8b57eae__0 
                = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue
                [6U];
            __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v14 
                = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0;
            __Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v14 = 1U;
            __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v15 
                = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_hba1e7bd2__0;
            __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue__v15 
                = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_hb8b57eae__0;
            vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0 
                = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue
                [6U];
            vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_hba1e7bd2__0 
                = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue
                [7U];
            vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_hb8b57eae__0 
                = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue
                [7U];
            __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v15 
                = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0;
            __Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v15 = 1U;
            __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v16 
                = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_hba1e7bd2__0;
            __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue__v16 
                = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_hb8b57eae__0;
            vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0 
                = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue
                [7U];
            vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_hba1e7bd2__0 
                = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue
                [8U];
            vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_hb8b57eae__0 
                = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue
                [8U];
            __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v16 
                = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0;
            __Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v16 = 1U;
            __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v17 
                = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_hba1e7bd2__0;
            __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue__v17 
                = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_hb8b57eae__0;
            vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0 
                = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue
                [8U];
            vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_hba1e7bd2__0 
                = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue
                [9U];
            vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_hb8b57eae__0 
                = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue
                [9U];
            __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v17 
                = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0;
            __Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v17 = 1U;
            __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v18 
                = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_hba1e7bd2__0;
            __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue__v18 
                = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_hb8b57eae__0;
            vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0 
                = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue
                [9U];
            __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v18 
                = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0;
            __Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v18 = 1U;
        } else if (((IData)(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__fin_wire) 
                    & (vlSelf->top__DOT__xpixel_bus
                       [0U] != vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__prev_xpixel))) {
            vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_he6b57a3a__0 
                = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_wire;
            vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__prev_xpixel 
                = vlSelf->top__DOT__xpixel_bus[0U];
            __Vdly__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__fin_wire = 0U;
            vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_h7940f0e4__0 
                = vlSelf->top__DOT__xpixel_bus[0U];
            vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_h794bab9c__0 
                = vlSelf->top__DOT__ypixel_bus[0U];
            if ((9U >= (IData)(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__counter))) {
                __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v19 
                    = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_he6b57a3a__0;
                __Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v19 = 1U;
                __Vdlyvdim0__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v19 
                    = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__counter;
            }
            if ((9U >= (IData)(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__counter))) {
                __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v19 
                    = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_h7940f0e4__0;
                __Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v19 = 1U;
                __Vdlyvdim0__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v19 
                    = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__counter;
            }
            if ((9U >= (IData)(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__counter))) {
                __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue__v19 
                    = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_h794bab9c__0;
                __Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue__v19 = 1U;
                __Vdlyvdim0__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue__v19 
                    = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__counter;
            }
            __Vdly__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__counter 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__counter)));
        }
        if ((((IData)(vlSelf->top__DOT__fin_bus) >> 1U) 
             & (vlSelf->top__DOT__xpixel_bus[1U] != vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__prev_xpixel))) {
            __Vdly__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__fin_wire = 1U;
            __Vdly__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_wire 
                = vlSelf->top__DOT__colour_bus[1U];
        }
        if (((vlSelf->top__DOT__xpixel_wire == vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue
              [0U]) & (vlSelf->top__DOT__ypixel_wire 
                       == vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue
                       [0U]))) {
            __Vdly__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__counter 
                = (0xfU & ((IData)(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__counter) 
                           - (IData)(1U)));
            vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_hba1e7bd2__0 
                = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue
                [1U];
            vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_hb8b57eae__0 
                = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue
                [1U];
            vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__unnamedblk3__DOT__i = 9U;
            vlSelf->top__DOT__colour_wire = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue
                [0U];
            vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0 
                = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue
                [1U];
            __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v10 
                = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_hba1e7bd2__0;
            __Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v10 = 1U;
            __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue__v10 
                = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_hb8b57eae__0;
            vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_hba1e7bd2__0 
                = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue
                [2U];
            vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_hb8b57eae__0 
                = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue
                [2U];
            __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v10 
                = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0;
            __Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v10 = 1U;
            __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v11 
                = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_hba1e7bd2__0;
            __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue__v11 
                = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_hb8b57eae__0;
            vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0 
                = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue
                [2U];
            vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_hba1e7bd2__0 
                = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue
                [3U];
            vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_hb8b57eae__0 
                = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue
                [3U];
            __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v11 
                = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0;
            __Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v11 = 1U;
            __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v12 
                = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_hba1e7bd2__0;
            __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue__v12 
                = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_hb8b57eae__0;
            vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0 
                = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue
                [3U];
            vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_hba1e7bd2__0 
                = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue
                [4U];
            vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_hb8b57eae__0 
                = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue
                [4U];
            __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v12 
                = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0;
            __Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v12 = 1U;
            __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v13 
                = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_hba1e7bd2__0;
            __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue__v13 
                = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_hb8b57eae__0;
            vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0 
                = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue
                [4U];
            vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_hba1e7bd2__0 
                = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue
                [5U];
            vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_hb8b57eae__0 
                = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue
                [5U];
            __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v13 
                = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0;
            __Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v13 = 1U;
            __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v14 
                = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_hba1e7bd2__0;
            __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue__v14 
                = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_hb8b57eae__0;
            vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0 
                = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue
                [5U];
            vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_hba1e7bd2__0 
                = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue
                [6U];
            vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_hb8b57eae__0 
                = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue
                [6U];
            __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v14 
                = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0;
            __Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v14 = 1U;
            __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v15 
                = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_hba1e7bd2__0;
            __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue__v15 
                = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_hb8b57eae__0;
            vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0 
                = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue
                [6U];
            vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_hba1e7bd2__0 
                = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue
                [7U];
            vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_hb8b57eae__0 
                = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue
                [7U];
            __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v15 
                = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0;
            __Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v15 = 1U;
            __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v16 
                = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_hba1e7bd2__0;
            __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue__v16 
                = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_hb8b57eae__0;
            vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0 
                = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue
                [7U];
            vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_hba1e7bd2__0 
                = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue
                [8U];
            vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_hb8b57eae__0 
                = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue
                [8U];
            __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v16 
                = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0;
            __Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v16 = 1U;
            __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v17 
                = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_hba1e7bd2__0;
            __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue__v17 
                = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_hb8b57eae__0;
            vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0 
                = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue
                [8U];
            vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_hba1e7bd2__0 
                = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue
                [9U];
            vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_hb8b57eae__0 
                = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue
                [9U];
            __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v17 
                = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0;
            __Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v17 = 1U;
            __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v18 
                = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_hba1e7bd2__0;
            __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue__v18 
                = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_hb8b57eae__0;
            vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0 
                = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue
                [9U];
            __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v18 
                = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0;
            __Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v18 = 1U;
        } else if (((IData)(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__fin_wire) 
                    & (vlSelf->top__DOT__xpixel_bus
                       [1U] != vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__prev_xpixel))) {
            vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_he6b57a3a__0 
                = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_wire;
            vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__prev_xpixel 
                = vlSelf->top__DOT__xpixel_bus[1U];
            __Vdly__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__fin_wire = 0U;
            vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_h7940f0e4__0 
                = vlSelf->top__DOT__xpixel_bus[1U];
            vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_h794bab9c__0 
                = vlSelf->top__DOT__ypixel_bus[1U];
            if ((9U >= (IData)(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__counter))) {
                __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v19 
                    = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_he6b57a3a__0;
                __Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v19 = 1U;
                __Vdlyvdim0__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v19 
                    = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__counter;
            }
            if ((9U >= (IData)(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__counter))) {
                __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v19 
                    = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_h7940f0e4__0;
                __Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v19 = 1U;
                __Vdlyvdim0__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v19 
                    = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__counter;
            }
            if ((9U >= (IData)(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__counter))) {
                __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue__v19 
                    = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_h794bab9c__0;
                __Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue__v19 = 1U;
                __Vdlyvdim0__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue__v19 
                    = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__counter;
            }
            __Vdly__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__counter 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__counter)));
        }
        if ((((IData)(vlSelf->top__DOT__fin_bus) >> 2U) 
             & (vlSelf->top__DOT__xpixel_bus[2U] != vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__prev_xpixel))) {
            __Vdly__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__fin_wire = 1U;
            __Vdly__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_wire 
                = vlSelf->top__DOT__colour_bus[2U];
        }
        if (((vlSelf->top__DOT__xpixel_wire == vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue
              [0U]) & (vlSelf->top__DOT__ypixel_wire 
                       == vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue
                       [0U]))) {
            __Vdly__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__counter 
                = (0xfU & ((IData)(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__counter) 
                           - (IData)(1U)));
            vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_hba1e7bd2__0 
                = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue
                [1U];
            vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_hb8b57eae__0 
                = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue
                [1U];
            vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__unnamedblk3__DOT__i = 9U;
            vlSelf->top__DOT__colour_wire = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue
                [0U];
            vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0 
                = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue
                [1U];
            __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v10 
                = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_hba1e7bd2__0;
            __Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v10 = 1U;
            __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue__v10 
                = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_hb8b57eae__0;
            vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_hba1e7bd2__0 
                = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue
                [2U];
            vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_hb8b57eae__0 
                = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue
                [2U];
            __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v10 
                = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0;
            __Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v10 = 1U;
            __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v11 
                = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_hba1e7bd2__0;
            __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue__v11 
                = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_hb8b57eae__0;
            vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0 
                = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue
                [2U];
            vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_hba1e7bd2__0 
                = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue
                [3U];
            vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_hb8b57eae__0 
                = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue
                [3U];
            __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v11 
                = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0;
            __Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v11 = 1U;
            __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v12 
                = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_hba1e7bd2__0;
            __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue__v12 
                = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_hb8b57eae__0;
            vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0 
                = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue
                [3U];
            vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_hba1e7bd2__0 
                = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue
                [4U];
            vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_hb8b57eae__0 
                = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue
                [4U];
            __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v12 
                = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0;
            __Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v12 = 1U;
            __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v13 
                = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_hba1e7bd2__0;
            __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue__v13 
                = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_hb8b57eae__0;
            vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0 
                = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue
                [4U];
            vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_hba1e7bd2__0 
                = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue
                [5U];
            vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_hb8b57eae__0 
                = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue
                [5U];
            __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v13 
                = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0;
            __Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v13 = 1U;
            __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v14 
                = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_hba1e7bd2__0;
            __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue__v14 
                = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_hb8b57eae__0;
            vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0 
                = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue
                [5U];
            vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_hba1e7bd2__0 
                = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue
                [6U];
            vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_hb8b57eae__0 
                = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue
                [6U];
            __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v14 
                = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0;
            __Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v14 = 1U;
            __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v15 
                = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_hba1e7bd2__0;
            __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue__v15 
                = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_hb8b57eae__0;
            vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0 
                = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue
                [6U];
            vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_hba1e7bd2__0 
                = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue
                [7U];
            vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_hb8b57eae__0 
                = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue
                [7U];
            __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v15 
                = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0;
            __Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v15 = 1U;
            __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v16 
                = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_hba1e7bd2__0;
            __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue__v16 
                = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_hb8b57eae__0;
            vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0 
                = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue
                [7U];
            vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_hba1e7bd2__0 
                = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue
                [8U];
            vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_hb8b57eae__0 
                = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue
                [8U];
            __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v16 
                = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0;
            __Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v16 = 1U;
            __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v17 
                = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_hba1e7bd2__0;
            __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue__v17 
                = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_hb8b57eae__0;
            vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0 
                = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue
                [8U];
            vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_hba1e7bd2__0 
                = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue
                [9U];
            vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_hb8b57eae__0 
                = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue
                [9U];
            __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v17 
                = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0;
            __Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v17 = 1U;
            __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v18 
                = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_hba1e7bd2__0;
            __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue__v18 
                = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_hb8b57eae__0;
            vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0 
                = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue
                [9U];
            __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v18 
                = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0;
            __Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v18 = 1U;
        } else if (((IData)(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__fin_wire) 
                    & (vlSelf->top__DOT__xpixel_bus
                       [2U] != vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__prev_xpixel))) {
            vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_he6b57a3a__0 
                = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_wire;
            vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__prev_xpixel 
                = vlSelf->top__DOT__xpixel_bus[2U];
            __Vdly__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__fin_wire = 0U;
            vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_h7940f0e4__0 
                = vlSelf->top__DOT__xpixel_bus[2U];
            vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_h794bab9c__0 
                = vlSelf->top__DOT__ypixel_bus[2U];
            if ((9U >= (IData)(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__counter))) {
                __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v19 
                    = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_he6b57a3a__0;
                __Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v19 = 1U;
                __Vdlyvdim0__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v19 
                    = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__counter;
            }
            if ((9U >= (IData)(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__counter))) {
                __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v19 
                    = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_h7940f0e4__0;
                __Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v19 = 1U;
                __Vdlyvdim0__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v19 
                    = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__counter;
            }
            if ((9U >= (IData)(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__counter))) {
                __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue__v19 
                    = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_h794bab9c__0;
                __Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue__v19 = 1U;
                __Vdlyvdim0__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue__v19 
                    = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__counter;
            }
            __Vdly__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__counter 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__counter)));
        }
        if ((((IData)(vlSelf->top__DOT__fin_bus) >> 3U) 
             & (vlSelf->top__DOT__xpixel_bus[3U] != vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__prev_xpixel))) {
            __Vdly__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__fin_wire = 1U;
            __Vdly__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_wire 
                = vlSelf->top__DOT__colour_bus[3U];
        }
        if (((vlSelf->top__DOT__xpixel_wire == vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue
              [0U]) & (vlSelf->top__DOT__ypixel_wire 
                       == vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue
                       [0U]))) {
            __Vdly__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__counter 
                = (0xfU & ((IData)(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__counter) 
                           - (IData)(1U)));
            vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_hba1e7bd2__0 
                = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue
                [1U];
            vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_hb8b57eae__0 
                = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue
                [1U];
            vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__unnamedblk3__DOT__i = 9U;
            vlSelf->top__DOT__colour_wire = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue
                [0U];
            vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0 
                = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue
                [1U];
            __Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue__v10 
                = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_hba1e7bd2__0;
            __Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue__v10 = 1U;
            __Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue__v10 
                = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_hb8b57eae__0;
            vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_hba1e7bd2__0 
                = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue
                [2U];
            vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_hb8b57eae__0 
                = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue
                [2U];
            __Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v10 
                = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0;
            __Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v10 = 1U;
            __Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue__v11 
                = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_hba1e7bd2__0;
            __Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue__v11 
                = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_hb8b57eae__0;
            vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0 
                = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue
                [2U];
            vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_hba1e7bd2__0 
                = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue
                [3U];
            vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_hb8b57eae__0 
                = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue
                [3U];
            __Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v11 
                = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0;
            __Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v11 = 1U;
            __Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue__v12 
                = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_hba1e7bd2__0;
            __Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue__v12 
                = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_hb8b57eae__0;
            vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0 
                = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue
                [3U];
            vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_hba1e7bd2__0 
                = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue
                [4U];
            vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_hb8b57eae__0 
                = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue
                [4U];
            __Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v12 
                = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0;
            __Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v12 = 1U;
            __Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue__v13 
                = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_hba1e7bd2__0;
            __Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue__v13 
                = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_hb8b57eae__0;
            vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0 
                = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue
                [4U];
            vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_hba1e7bd2__0 
                = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue
                [5U];
            vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_hb8b57eae__0 
                = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue
                [5U];
            __Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v13 
                = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0;
            __Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v13 = 1U;
            __Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue__v14 
                = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_hba1e7bd2__0;
            __Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue__v14 
                = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_hb8b57eae__0;
            vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0 
                = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue
                [5U];
            vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_hba1e7bd2__0 
                = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue
                [6U];
            vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_hb8b57eae__0 
                = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue
                [6U];
            __Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v14 
                = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0;
            __Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v14 = 1U;
            __Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue__v15 
                = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_hba1e7bd2__0;
            __Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue__v15 
                = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_hb8b57eae__0;
            vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0 
                = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue
                [6U];
            vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_hba1e7bd2__0 
                = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue
                [7U];
            vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_hb8b57eae__0 
                = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue
                [7U];
            __Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v15 
                = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0;
            __Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v15 = 1U;
            __Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue__v16 
                = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_hba1e7bd2__0;
            __Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue__v16 
                = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_hb8b57eae__0;
            vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0 
                = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue
                [7U];
            vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_hba1e7bd2__0 
                = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue
                [8U];
            vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_hb8b57eae__0 
                = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue
                [8U];
            __Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v16 
                = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0;
            __Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v16 = 1U;
            __Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue__v17 
                = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_hba1e7bd2__0;
            __Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue__v17 
                = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_hb8b57eae__0;
            vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0 
                = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue
                [8U];
            vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_hba1e7bd2__0 
                = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue
                [9U];
            vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_hb8b57eae__0 
                = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue
                [9U];
            __Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v17 
                = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0;
            __Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v17 = 1U;
            __Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue__v18 
                = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_hba1e7bd2__0;
            __Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue__v18 
                = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_hb8b57eae__0;
            vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0 
                = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue
                [9U];
            __Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v18 
                = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0;
            __Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v18 = 1U;
        } else if (((IData)(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__fin_wire) 
                    & (vlSelf->top__DOT__xpixel_bus
                       [3U] != vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__prev_xpixel))) {
            vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_he6b57a3a__0 
                = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_wire;
            vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__prev_xpixel 
                = vlSelf->top__DOT__xpixel_bus[3U];
            __Vdly__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__fin_wire = 0U;
            vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_h7940f0e4__0 
                = vlSelf->top__DOT__xpixel_bus[3U];
            vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_h794bab9c__0 
                = vlSelf->top__DOT__ypixel_bus[3U];
            if ((9U >= (IData)(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__counter))) {
                __Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v19 
                    = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_he6b57a3a__0;
                __Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v19 = 1U;
                __Vdlyvdim0__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v19 
                    = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__counter;
            }
            if ((9U >= (IData)(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__counter))) {
                __Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue__v19 
                    = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_h7940f0e4__0;
                __Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue__v19 = 1U;
                __Vdlyvdim0__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue__v19 
                    = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__counter;
            }
            if ((9U >= (IData)(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__counter))) {
                __Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue__v19 
                    = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_h794bab9c__0;
                __Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue__v19 = 1U;
                __Vdlyvdim0__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue__v19 
                    = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__counter;
            }
            __Vdly__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__counter 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__counter)));
        }
        if ((((IData)(vlSelf->top__DOT__fin_bus) >> 4U) 
             & (vlSelf->top__DOT__xpixel_bus[4U] != vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__prev_xpixel))) {
            __Vdly__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__fin_wire = 1U;
            __Vdly__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_wire 
                = vlSelf->top__DOT__colour_bus[4U];
        }
        if (((vlSelf->top__DOT__xpixel_wire == vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue
              [0U]) & (vlSelf->top__DOT__ypixel_wire 
                       == vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue
                       [0U]))) {
            __Vdly__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__counter 
                = (0xfU & ((IData)(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__counter) 
                           - (IData)(1U)));
            vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_hba1e7bd2__0 
                = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue
                [1U];
            vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_hb8b57eae__0 
                = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue
                [1U];
            vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__unnamedblk3__DOT__i = 9U;
            vlSelf->top__DOT__colour_wire = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue
                [0U];
            vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0 
                = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue
                [1U];
            __Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue__v10 
                = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_hba1e7bd2__0;
            __Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue__v10 = 1U;
            __Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue__v10 
                = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_hb8b57eae__0;
            vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_hba1e7bd2__0 
                = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue
                [2U];
            vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_hb8b57eae__0 
                = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue
                [2U];
            __Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v10 
                = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0;
            __Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v10 = 1U;
            __Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue__v11 
                = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_hba1e7bd2__0;
            __Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue__v11 
                = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_hb8b57eae__0;
            vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0 
                = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue
                [2U];
            vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_hba1e7bd2__0 
                = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue
                [3U];
            vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_hb8b57eae__0 
                = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue
                [3U];
            __Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v11 
                = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0;
            __Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v11 = 1U;
            __Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue__v12 
                = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_hba1e7bd2__0;
            __Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue__v12 
                = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_hb8b57eae__0;
            vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0 
                = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue
                [3U];
            vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_hba1e7bd2__0 
                = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue
                [4U];
            vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_hb8b57eae__0 
                = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue
                [4U];
            __Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v12 
                = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0;
            __Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v12 = 1U;
            __Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue__v13 
                = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_hba1e7bd2__0;
            __Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue__v13 
                = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_hb8b57eae__0;
            vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0 
                = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue
                [4U];
            vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_hba1e7bd2__0 
                = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue
                [5U];
            vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_hb8b57eae__0 
                = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue
                [5U];
            __Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v13 
                = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0;
            __Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v13 = 1U;
            __Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue__v14 
                = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_hba1e7bd2__0;
            __Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue__v14 
                = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_hb8b57eae__0;
            vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0 
                = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue
                [5U];
            vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_hba1e7bd2__0 
                = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue
                [6U];
            vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_hb8b57eae__0 
                = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue
                [6U];
            __Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v14 
                = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0;
            __Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v14 = 1U;
            __Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue__v15 
                = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_hba1e7bd2__0;
            __Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue__v15 
                = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_hb8b57eae__0;
            vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0 
                = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue
                [6U];
            vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_hba1e7bd2__0 
                = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue
                [7U];
            vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_hb8b57eae__0 
                = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue
                [7U];
            __Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v15 
                = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0;
            __Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v15 = 1U;
            __Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue__v16 
                = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_hba1e7bd2__0;
            __Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue__v16 
                = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_hb8b57eae__0;
            vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0 
                = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue
                [7U];
            vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_hba1e7bd2__0 
                = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue
                [8U];
            vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_hb8b57eae__0 
                = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue
                [8U];
            __Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v16 
                = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0;
            __Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v16 = 1U;
            __Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue__v17 
                = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_hba1e7bd2__0;
            __Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue__v17 
                = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_hb8b57eae__0;
            vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0 
                = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue
                [8U];
            vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_hba1e7bd2__0 
                = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue
                [9U];
            vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_hb8b57eae__0 
                = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue
                [9U];
            __Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v17 
                = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0;
            __Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v17 = 1U;
            __Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue__v18 
                = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_hba1e7bd2__0;
            __Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue__v18 
                = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_hb8b57eae__0;
            vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0 
                = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue
                [9U];
            __Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v18 
                = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0;
            __Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v18 = 1U;
        } else if (((IData)(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__fin_wire) 
                    & (vlSelf->top__DOT__xpixel_bus
                       [4U] != vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__prev_xpixel))) {
            vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_he6b57a3a__0 
                = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_wire;
            vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__prev_xpixel 
                = vlSelf->top__DOT__xpixel_bus[4U];
            __Vdly__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__fin_wire = 0U;
            vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_h7940f0e4__0 
                = vlSelf->top__DOT__xpixel_bus[4U];
            vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_h794bab9c__0 
                = vlSelf->top__DOT__ypixel_bus[4U];
            if ((9U >= (IData)(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__counter))) {
                __Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v19 
                    = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_he6b57a3a__0;
                __Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v19 = 1U;
                __Vdlyvdim0__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v19 
                    = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__counter;
            }
            if ((9U >= (IData)(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__counter))) {
                __Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue__v19 
                    = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_h7940f0e4__0;
                __Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue__v19 = 1U;
                __Vdlyvdim0__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue__v19 
                    = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__counter;
            }
            if ((9U >= (IData)(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__counter))) {
                __Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue__v19 
                    = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_h794bab9c__0;
                __Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue__v19 = 1U;
                __Vdlyvdim0__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue__v19 
                    = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__counter;
            }
            __Vdly__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__counter 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__counter)));
        }
        if ((((IData)(vlSelf->top__DOT__fin_bus) >> 5U) 
             & (vlSelf->top__DOT__xpixel_bus[5U] != vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__prev_xpixel))) {
            __Vdly__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__fin_wire = 1U;
            __Vdly__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_wire 
                = vlSelf->top__DOT__colour_bus[5U];
        }
        if (((vlSelf->top__DOT__xpixel_wire == vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue
              [0U]) & (vlSelf->top__DOT__ypixel_wire 
                       == vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue
                       [0U]))) {
            __Vdly__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__counter 
                = (0xfU & ((IData)(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__counter) 
                           - (IData)(1U)));
            vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_hba1e7bd2__0 
                = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue
                [1U];
            vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_hb8b57eae__0 
                = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue
                [1U];
            vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__unnamedblk3__DOT__i = 9U;
            vlSelf->top__DOT__colour_wire = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue
                [0U];
            vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0 
                = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue
                [1U];
            __Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue__v10 
                = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_hba1e7bd2__0;
            __Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue__v10 = 1U;
            __Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue__v10 
                = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_hb8b57eae__0;
            vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_hba1e7bd2__0 
                = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue
                [2U];
            vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_hb8b57eae__0 
                = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue
                [2U];
            __Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v10 
                = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0;
            __Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v10 = 1U;
            __Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue__v11 
                = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_hba1e7bd2__0;
            __Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue__v11 
                = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_hb8b57eae__0;
            vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0 
                = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue
                [2U];
            vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_hba1e7bd2__0 
                = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue
                [3U];
            vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_hb8b57eae__0 
                = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue
                [3U];
            __Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v11 
                = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0;
            __Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v11 = 1U;
            __Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue__v12 
                = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_hba1e7bd2__0;
            __Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue__v12 
                = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_hb8b57eae__0;
            vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0 
                = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue
                [3U];
            vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_hba1e7bd2__0 
                = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue
                [4U];
            vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_hb8b57eae__0 
                = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue
                [4U];
            __Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v12 
                = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0;
            __Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v12 = 1U;
            __Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue__v13 
                = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_hba1e7bd2__0;
            __Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue__v13 
                = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_hb8b57eae__0;
            vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0 
                = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue
                [4U];
            vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_hba1e7bd2__0 
                = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue
                [5U];
            vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_hb8b57eae__0 
                = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue
                [5U];
            __Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v13 
                = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0;
            __Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v13 = 1U;
            __Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue__v14 
                = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_hba1e7bd2__0;
            __Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue__v14 
                = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_hb8b57eae__0;
            vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0 
                = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue
                [5U];
            vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_hba1e7bd2__0 
                = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue
                [6U];
            vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_hb8b57eae__0 
                = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue
                [6U];
            __Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v14 
                = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0;
            __Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v14 = 1U;
            __Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue__v15 
                = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_hba1e7bd2__0;
            __Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue__v15 
                = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_hb8b57eae__0;
            vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0 
                = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue
                [6U];
            vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_hba1e7bd2__0 
                = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue
                [7U];
            vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_hb8b57eae__0 
                = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue
                [7U];
            __Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v15 
                = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0;
            __Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v15 = 1U;
            __Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue__v16 
                = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_hba1e7bd2__0;
            __Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue__v16 
                = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_hb8b57eae__0;
            vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0 
                = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue
                [7U];
            vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_hba1e7bd2__0 
                = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue
                [8U];
            vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_hb8b57eae__0 
                = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue
                [8U];
            __Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v16 
                = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0;
            __Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v16 = 1U;
            __Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue__v17 
                = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_hba1e7bd2__0;
            __Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue__v17 
                = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_hb8b57eae__0;
            vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0 
                = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue
                [8U];
            vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_hba1e7bd2__0 
                = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue
                [9U];
            vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_hb8b57eae__0 
                = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue
                [9U];
            __Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v17 
                = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0;
            __Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v17 = 1U;
            __Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue__v18 
                = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_hba1e7bd2__0;
            __Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue__v18 
                = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_hb8b57eae__0;
            vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0 
                = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue
                [9U];
            __Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v18 
                = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0;
            __Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v18 = 1U;
        } else if (((IData)(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__fin_wire) 
                    & (vlSelf->top__DOT__xpixel_bus
                       [5U] != vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__prev_xpixel))) {
            vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_he6b57a3a__0 
                = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_wire;
            vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__prev_xpixel 
                = vlSelf->top__DOT__xpixel_bus[5U];
            __Vdly__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__fin_wire = 0U;
            vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_h7940f0e4__0 
                = vlSelf->top__DOT__xpixel_bus[5U];
            vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_h794bab9c__0 
                = vlSelf->top__DOT__ypixel_bus[5U];
            if ((9U >= (IData)(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__counter))) {
                __Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v19 
                    = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_he6b57a3a__0;
                __Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v19 = 1U;
                __Vdlyvdim0__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v19 
                    = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__counter;
            }
            if ((9U >= (IData)(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__counter))) {
                __Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue__v19 
                    = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_h7940f0e4__0;
                __Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue__v19 = 1U;
                __Vdlyvdim0__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue__v19 
                    = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__counter;
            }
            if ((9U >= (IData)(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__counter))) {
                __Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue__v19 
                    = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_h794bab9c__0;
                __Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue__v19 = 1U;
                __Vdlyvdim0__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue__v19 
                    = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__counter;
            }
            __Vdly__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__counter 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__counter)));
        }
    }
    if (((0x3fU == (IData)(vlSelf->top__DOT__en_bus)) 
         & (IData)(vlSelf->ready))) {
        if ((0x2d0U <= vlSelf->top__DOT__combinator_block__DOT__ypixel)) {
            vlSelf->last_y = 1U;
            __Vdly__top__DOT__combinator_block__DOT__xpixel = 0U;
            __Vdly__top__DOT__combinator_block__DOT__ypixel = 0U;
        } else if ((0x4ffU == vlSelf->top__DOT__combinator_block__DOT__xpixel)) {
            __Vdly__top__DOT__combinator_block__DOT__ypixel 
                = ((IData)(1U) + vlSelf->top__DOT__combinator_block__DOT__ypixel);
            vlSelf->last_x = 1U;
            __Vdly__top__DOT__combinator_block__DOT__xpixel = 0U;
        } else {
            __Vdly__top__DOT__combinator_block__DOT__xpixel 
                = ((IData)(1U) + vlSelf->top__DOT__combinator_block__DOT__xpixel);
        }
        vlSelf->top__DOT__xpixel_wire = vlSelf->top__DOT__combinator_block__DOT__xpixel;
        vlSelf->top__DOT__ypixel_wire = vlSelf->top__DOT__combinator_block__DOT__ypixel;
    }
    if (vlSelf->top__DOT__reset_engine) {
        __Vdly__top__DOT__genblk1__BRA__5__KET____DOT__engine__DOT__state = 2U;
        vlSelf->top__DOT____Vcellout__genblk1__BRA__5__KET____DOT__engine__finished = 0U;
        __Vdly__top__DOT____Vcellout__genblk1__BRA__5__KET____DOT__engine__iterations = 0U;
        __Vdly__top__DOT__genblk1__BRA__5__KET____DOT__engine__DOT__x = 0U;
        __Vdly__top__DOT__genblk1__BRA__5__KET____DOT__engine__DOT__y = 0U;
        __Vdly__top__DOT__genblk1__BRA__5__KET____DOT__engine__DOT__y_tmp = 0ULL;
        __Vdly__top__DOT__genblk1__BRA__5__KET____DOT__engine__DOT__x2 = 0ULL;
        __Vdly__top__DOT__genblk1__BRA__5__KET____DOT__engine__DOT__y2 = 0ULL;
        __Vdly__top__DOT__genblk1__BRA__4__KET____DOT__engine__DOT__state = 2U;
        vlSelf->top__DOT____Vcellout__genblk1__BRA__4__KET____DOT__engine__finished = 0U;
        __Vdly__top__DOT____Vcellout__genblk1__BRA__4__KET____DOT__engine__iterations = 0U;
        __Vdly__top__DOT__genblk1__BRA__4__KET____DOT__engine__DOT__x = 0U;
        __Vdly__top__DOT__genblk1__BRA__4__KET____DOT__engine__DOT__y = 0U;
        __Vdly__top__DOT__genblk1__BRA__4__KET____DOT__engine__DOT__y_tmp = 0ULL;
        __Vdly__top__DOT__genblk1__BRA__4__KET____DOT__engine__DOT__x2 = 0ULL;
        __Vdly__top__DOT__genblk1__BRA__4__KET____DOT__engine__DOT__y2 = 0ULL;
        __Vdly__top__DOT__genblk1__BRA__3__KET____DOT__engine__DOT__state = 2U;
        vlSelf->top__DOT____Vcellout__genblk1__BRA__3__KET____DOT__engine__finished = 0U;
        __Vdly__top__DOT____Vcellout__genblk1__BRA__3__KET____DOT__engine__iterations = 0U;
        __Vdly__top__DOT__genblk1__BRA__3__KET____DOT__engine__DOT__x = 0U;
        __Vdly__top__DOT__genblk1__BRA__3__KET____DOT__engine__DOT__y = 0U;
        __Vdly__top__DOT__genblk1__BRA__3__KET____DOT__engine__DOT__y_tmp = 0ULL;
        __Vdly__top__DOT__genblk1__BRA__3__KET____DOT__engine__DOT__x2 = 0ULL;
        __Vdly__top__DOT__genblk1__BRA__3__KET____DOT__engine__DOT__y2 = 0ULL;
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
        if ((2U == vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__engine__DOT__state)) {
            vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__engine__DOT__x0_buff 
                = vlSelf->top__DOT__x[5U];
            vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__engine__DOT__y0_buff 
                = vlSelf->top__DOT__y[5U];
            __Vdly__top__DOT__genblk1__BRA__5__KET____DOT__engine__DOT__state = 0U;
        } else if ((0U == vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__engine__DOT__state)) {
            __Vdly__top__DOT__genblk1__BRA__5__KET____DOT__engine__DOT__x 
                = (((IData)((vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__engine__DOT__x2 
                             >> 0x18U)) - (IData)((vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__engine__DOT__y2 
                                                   >> 0x18U))) 
                   + (VL_RTOIROUND_I_D(((1.67772160000000000e+07 
                                         * (-640.0 
                                            + VL_ISTOR_D_I(32, vlSelf->x_offset))) 
                                        / VL_ISTOR_D_I(32, 
                                                       ((IData)(0x64U) 
                                                        * vlSelf->zoom)))) 
                      + VL_MULS_III(32, VL_DIVS_III(32, (IData)(0x1000000U), 
                                                    VL_MULS_III(32, (IData)(0x64U), vlSelf->zoom)), 
                                    vlSelf->top__DOT__x
                                    [5U])));
            if (((vlSelf->top__DOT____Vcellout__genblk1__BRA__5__KET____DOT__engine__iterations 
                  >= vlSelf->iterations_max) | (0x4000000U 
                                                <= 
                                                ((IData)(
                                                         (vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__engine__DOT__x2 
                                                          >> 0x18U)) 
                                                 + (IData)(
                                                           (vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__engine__DOT__y2 
                                                            >> 0x18U)))))) {
                __Vdly__top__DOT__genblk1__BRA__5__KET____DOT__engine__DOT__state = 1U;
            } else {
                __Vdly__top__DOT____Vcellout__genblk1__BRA__5__KET____DOT__engine__iterations 
                    = ((IData)(1U) + vlSelf->top__DOT____Vcellout__genblk1__BRA__5__KET____DOT__engine__iterations);
                __Vdly__top__DOT__genblk1__BRA__5__KET____DOT__engine__DOT__state = 0U;
            }
            __Vdly__top__DOT__genblk1__BRA__5__KET____DOT__engine__DOT__x2 
                = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__engine__DOT__x), 
                              VL_EXTENDS_QI(64,32, vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__engine__DOT__x));
            __Vdly__top__DOT__genblk1__BRA__5__KET____DOT__engine__DOT__y2 
                = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__engine__DOT__y), 
                              VL_EXTENDS_QI(64,32, vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__engine__DOT__y));
            __Vdly__top__DOT__genblk1__BRA__5__KET____DOT__engine__DOT__y 
                = ((IData)((vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__engine__DOT__y_tmp 
                            >> 0x18U)) + (VL_RTOIROUND_I_D(
                                                           ((1.67772160000000000e+07 
                                                             * 
                                                             (-360.0 
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
                                                        [5U])));
            __Vdly__top__DOT__genblk1__BRA__5__KET____DOT__engine__DOT__y_tmp 
                = ((1ULL & __Vdly__top__DOT__genblk1__BRA__5__KET____DOT__engine__DOT__y_tmp) 
                   | (VL_MULS_QQQ(63, (0x7fffffffffffffffULL 
                                       & VL_EXTENDS_QI(63,32, vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__engine__DOT__x)), 
                                  (0x7fffffffffffffffULL 
                                   & VL_EXTENDS_QI(63,32, vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__engine__DOT__y))) 
                      << 1U));
        } else if ((1U == vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__engine__DOT__state)) {
            vlSelf->top__DOT____Vcellout__genblk1__BRA__5__KET____DOT__engine__finished = 1U;
            vlSelf->top__DOT____Vcellout__genblk1__BRA__5__KET____DOT__engine__xpixel 
                = vlSelf->top__DOT__x[5U];
            vlSelf->top__DOT____Vcellout__genblk1__BRA__5__KET____DOT__engine__ypixel 
                = vlSelf->top__DOT__y[5U];
        }
        if ((2U == vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__engine__DOT__state)) {
            vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__engine__DOT__x0_buff 
                = vlSelf->top__DOT__x[4U];
            vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__engine__DOT__y0_buff 
                = vlSelf->top__DOT__y[4U];
            __Vdly__top__DOT__genblk1__BRA__4__KET____DOT__engine__DOT__state = 0U;
        } else if ((0U == vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__engine__DOT__state)) {
            __Vdly__top__DOT__genblk1__BRA__4__KET____DOT__engine__DOT__x 
                = (((IData)((vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__engine__DOT__x2 
                             >> 0x18U)) - (IData)((vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__engine__DOT__y2 
                                                   >> 0x18U))) 
                   + (VL_RTOIROUND_I_D(((1.67772160000000000e+07 
                                         * (-640.0 
                                            + VL_ISTOR_D_I(32, vlSelf->x_offset))) 
                                        / VL_ISTOR_D_I(32, 
                                                       ((IData)(0x64U) 
                                                        * vlSelf->zoom)))) 
                      + VL_MULS_III(32, VL_DIVS_III(32, (IData)(0x1000000U), 
                                                    VL_MULS_III(32, (IData)(0x64U), vlSelf->zoom)), 
                                    vlSelf->top__DOT__x
                                    [4U])));
            if (((vlSelf->top__DOT____Vcellout__genblk1__BRA__4__KET____DOT__engine__iterations 
                  >= vlSelf->iterations_max) | (0x4000000U 
                                                <= 
                                                ((IData)(
                                                         (vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__engine__DOT__x2 
                                                          >> 0x18U)) 
                                                 + (IData)(
                                                           (vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__engine__DOT__y2 
                                                            >> 0x18U)))))) {
                __Vdly__top__DOT__genblk1__BRA__4__KET____DOT__engine__DOT__state = 1U;
            } else {
                __Vdly__top__DOT____Vcellout__genblk1__BRA__4__KET____DOT__engine__iterations 
                    = ((IData)(1U) + vlSelf->top__DOT____Vcellout__genblk1__BRA__4__KET____DOT__engine__iterations);
                __Vdly__top__DOT__genblk1__BRA__4__KET____DOT__engine__DOT__state = 0U;
            }
            __Vdly__top__DOT__genblk1__BRA__4__KET____DOT__engine__DOT__x2 
                = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__engine__DOT__x), 
                              VL_EXTENDS_QI(64,32, vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__engine__DOT__x));
            __Vdly__top__DOT__genblk1__BRA__4__KET____DOT__engine__DOT__y2 
                = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__engine__DOT__y), 
                              VL_EXTENDS_QI(64,32, vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__engine__DOT__y));
            __Vdly__top__DOT__genblk1__BRA__4__KET____DOT__engine__DOT__y 
                = ((IData)((vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__engine__DOT__y_tmp 
                            >> 0x18U)) + (VL_RTOIROUND_I_D(
                                                           ((1.67772160000000000e+07 
                                                             * 
                                                             (-360.0 
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
                                                        [4U])));
            __Vdly__top__DOT__genblk1__BRA__4__KET____DOT__engine__DOT__y_tmp 
                = ((1ULL & __Vdly__top__DOT__genblk1__BRA__4__KET____DOT__engine__DOT__y_tmp) 
                   | (VL_MULS_QQQ(63, (0x7fffffffffffffffULL 
                                       & VL_EXTENDS_QI(63,32, vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__engine__DOT__x)), 
                                  (0x7fffffffffffffffULL 
                                   & VL_EXTENDS_QI(63,32, vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__engine__DOT__y))) 
                      << 1U));
        } else if ((1U == vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__engine__DOT__state)) {
            vlSelf->top__DOT____Vcellout__genblk1__BRA__4__KET____DOT__engine__finished = 1U;
            vlSelf->top__DOT____Vcellout__genblk1__BRA__4__KET____DOT__engine__xpixel 
                = vlSelf->top__DOT__x[4U];
            vlSelf->top__DOT____Vcellout__genblk1__BRA__4__KET____DOT__engine__ypixel 
                = vlSelf->top__DOT__y[4U];
        }
        if ((2U == vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__engine__DOT__state)) {
            vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__engine__DOT__x0_buff 
                = vlSelf->top__DOT__x[3U];
            vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__engine__DOT__y0_buff 
                = vlSelf->top__DOT__y[3U];
            __Vdly__top__DOT__genblk1__BRA__3__KET____DOT__engine__DOT__state = 0U;
        } else if ((0U == vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__engine__DOT__state)) {
            __Vdly__top__DOT__genblk1__BRA__3__KET____DOT__engine__DOT__x 
                = (((IData)((vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__engine__DOT__x2 
                             >> 0x18U)) - (IData)((vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__engine__DOT__y2 
                                                   >> 0x18U))) 
                   + (VL_RTOIROUND_I_D(((1.67772160000000000e+07 
                                         * (-640.0 
                                            + VL_ISTOR_D_I(32, vlSelf->x_offset))) 
                                        / VL_ISTOR_D_I(32, 
                                                       ((IData)(0x64U) 
                                                        * vlSelf->zoom)))) 
                      + VL_MULS_III(32, VL_DIVS_III(32, (IData)(0x1000000U), 
                                                    VL_MULS_III(32, (IData)(0x64U), vlSelf->zoom)), 
                                    vlSelf->top__DOT__x
                                    [3U])));
            if (((vlSelf->top__DOT____Vcellout__genblk1__BRA__3__KET____DOT__engine__iterations 
                  >= vlSelf->iterations_max) | (0x4000000U 
                                                <= 
                                                ((IData)(
                                                         (vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__engine__DOT__x2 
                                                          >> 0x18U)) 
                                                 + (IData)(
                                                           (vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__engine__DOT__y2 
                                                            >> 0x18U)))))) {
                __Vdly__top__DOT__genblk1__BRA__3__KET____DOT__engine__DOT__state = 1U;
            } else {
                __Vdly__top__DOT____Vcellout__genblk1__BRA__3__KET____DOT__engine__iterations 
                    = ((IData)(1U) + vlSelf->top__DOT____Vcellout__genblk1__BRA__3__KET____DOT__engine__iterations);
                __Vdly__top__DOT__genblk1__BRA__3__KET____DOT__engine__DOT__state = 0U;
            }
            __Vdly__top__DOT__genblk1__BRA__3__KET____DOT__engine__DOT__x2 
                = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__engine__DOT__x), 
                              VL_EXTENDS_QI(64,32, vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__engine__DOT__x));
            __Vdly__top__DOT__genblk1__BRA__3__KET____DOT__engine__DOT__y2 
                = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__engine__DOT__y), 
                              VL_EXTENDS_QI(64,32, vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__engine__DOT__y));
            __Vdly__top__DOT__genblk1__BRA__3__KET____DOT__engine__DOT__y 
                = ((IData)((vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__engine__DOT__y_tmp 
                            >> 0x18U)) + (VL_RTOIROUND_I_D(
                                                           ((1.67772160000000000e+07 
                                                             * 
                                                             (-360.0 
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
                                                        [3U])));
            __Vdly__top__DOT__genblk1__BRA__3__KET____DOT__engine__DOT__y_tmp 
                = ((1ULL & __Vdly__top__DOT__genblk1__BRA__3__KET____DOT__engine__DOT__y_tmp) 
                   | (VL_MULS_QQQ(63, (0x7fffffffffffffffULL 
                                       & VL_EXTENDS_QI(63,32, vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__engine__DOT__x)), 
                                  (0x7fffffffffffffffULL 
                                   & VL_EXTENDS_QI(63,32, vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__engine__DOT__y))) 
                      << 1U));
        } else if ((1U == vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__engine__DOT__state)) {
            vlSelf->top__DOT____Vcellout__genblk1__BRA__3__KET____DOT__engine__finished = 1U;
            vlSelf->top__DOT____Vcellout__genblk1__BRA__3__KET____DOT__engine__xpixel 
                = vlSelf->top__DOT__x[3U];
            vlSelf->top__DOT____Vcellout__genblk1__BRA__3__KET____DOT__engine__ypixel 
                = vlSelf->top__DOT__y[3U];
        }
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
                                         * (-640.0 
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
                                                             (-360.0 
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
                                         * (-640.0 
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
                                                             (-360.0 
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
                                         * (-640.0 
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
                                                             (-360.0 
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
    vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__engine__DOT__x 
        = __Vdly__top__DOT__genblk1__BRA__5__KET____DOT__engine__DOT__x;
    vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__engine__DOT__y 
        = __Vdly__top__DOT__genblk1__BRA__5__KET____DOT__engine__DOT__y;
    vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__engine__DOT__y_tmp 
        = __Vdly__top__DOT__genblk1__BRA__5__KET____DOT__engine__DOT__y_tmp;
    vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__engine__DOT__x2 
        = __Vdly__top__DOT__genblk1__BRA__5__KET____DOT__engine__DOT__x2;
    vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__engine__DOT__y2 
        = __Vdly__top__DOT__genblk1__BRA__5__KET____DOT__engine__DOT__y2;
    vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__engine__DOT__state 
        = __Vdly__top__DOT__genblk1__BRA__5__KET____DOT__engine__DOT__state;
    vlSelf->top__DOT____Vcellout__genblk1__BRA__5__KET____DOT__engine__iterations 
        = __Vdly__top__DOT____Vcellout__genblk1__BRA__5__KET____DOT__engine__iterations;
    vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__engine__DOT__x 
        = __Vdly__top__DOT__genblk1__BRA__4__KET____DOT__engine__DOT__x;
    vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__engine__DOT__y 
        = __Vdly__top__DOT__genblk1__BRA__4__KET____DOT__engine__DOT__y;
    vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__engine__DOT__y_tmp 
        = __Vdly__top__DOT__genblk1__BRA__4__KET____DOT__engine__DOT__y_tmp;
    vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__engine__DOT__x2 
        = __Vdly__top__DOT__genblk1__BRA__4__KET____DOT__engine__DOT__x2;
    vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__engine__DOT__y2 
        = __Vdly__top__DOT__genblk1__BRA__4__KET____DOT__engine__DOT__y2;
    vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__engine__DOT__state 
        = __Vdly__top__DOT__genblk1__BRA__4__KET____DOT__engine__DOT__state;
    vlSelf->top__DOT____Vcellout__genblk1__BRA__4__KET____DOT__engine__iterations 
        = __Vdly__top__DOT____Vcellout__genblk1__BRA__4__KET____DOT__engine__iterations;
    vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__engine__DOT__x 
        = __Vdly__top__DOT__genblk1__BRA__3__KET____DOT__engine__DOT__x;
    vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__engine__DOT__y 
        = __Vdly__top__DOT__genblk1__BRA__3__KET____DOT__engine__DOT__y;
    vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__engine__DOT__y_tmp 
        = __Vdly__top__DOT__genblk1__BRA__3__KET____DOT__engine__DOT__y_tmp;
    vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__engine__DOT__x2 
        = __Vdly__top__DOT__genblk1__BRA__3__KET____DOT__engine__DOT__x2;
    vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__engine__DOT__y2 
        = __Vdly__top__DOT__genblk1__BRA__3__KET____DOT__engine__DOT__y2;
    vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__engine__DOT__state 
        = __Vdly__top__DOT__genblk1__BRA__3__KET____DOT__engine__DOT__state;
    vlSelf->top__DOT____Vcellout__genblk1__BRA__3__KET____DOT__engine__iterations 
        = __Vdly__top__DOT____Vcellout__genblk1__BRA__3__KET____DOT__engine__iterations;
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
    vlSelf->r = (0xffU & vlSelf->top__DOT__colour_o_wire);
    vlSelf->g = (0xffU & (vlSelf->top__DOT__colour_o_wire 
                          >> 8U));
    vlSelf->b = (0xffU & (vlSelf->top__DOT__colour_o_wire 
                          >> 0x10U));
    vlSelf->top__DOT__iterations_bus[5U] = vlSelf->top__DOT____Vcellout__genblk1__BRA__5__KET____DOT__engine__iterations;
    vlSelf->top__DOT__iterations_bus[4U] = vlSelf->top__DOT____Vcellout__genblk1__BRA__4__KET____DOT__engine__iterations;
    vlSelf->top__DOT__iterations_bus[3U] = vlSelf->top__DOT____Vcellout__genblk1__BRA__3__KET____DOT__engine__iterations;
    vlSelf->top__DOT__iterations_bus[2U] = vlSelf->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__engine__iterations;
    vlSelf->top__DOT__iterations_bus[1U] = vlSelf->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__engine__iterations;
    vlSelf->top__DOT__iterations_bus[0U] = vlSelf->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__engine__iterations;
    vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__fin_wire 
        = __Vdly__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__fin_wire;
    vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_wire 
        = __Vdly__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_wire;
    vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__counter 
        = __Vdly__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__counter;
    if (__Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v0) {
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[0U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[1U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[2U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[3U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[4U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[5U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[6U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[7U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[8U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[9U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[0U] = 0U;
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[1U] = 0U;
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[2U] = 0U;
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[3U] = 0U;
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[4U] = 0U;
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[5U] = 0U;
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[6U] = 0U;
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[7U] = 0U;
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[8U] = 0U;
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[9U] = 0U;
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[0U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[1U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[2U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[3U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[4U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[5U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[6U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[7U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[8U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[9U] = 0xffffffffU;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v10) {
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[0U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue__v10;
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[0U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v10;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v10) {
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[1U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue__v11;
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[0U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v10;
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[1U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v11;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v11) {
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[2U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue__v12;
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[1U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v11;
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[2U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v12;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v12) {
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[3U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue__v13;
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[2U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v12;
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[3U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v13;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v13) {
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[4U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue__v14;
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[3U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v13;
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[4U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v14;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v14) {
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[5U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue__v15;
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[4U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v14;
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[5U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v15;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v15) {
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[6U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue__v16;
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[5U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v15;
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[6U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v16;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v16) {
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[7U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue__v17;
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[6U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v16;
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[7U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v17;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v17) {
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[8U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue__v18;
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[7U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v17;
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[8U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v18;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue__v19) {
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[__Vdlyvdim0__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue__v19] 
            = __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue__v19;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v18) {
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[8U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v18;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v19) {
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[__Vdlyvdim0__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v19] 
            = __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v19;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v19) {
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[__Vdlyvdim0__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v19] 
            = __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v19;
    }
    vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__fin_wire 
        = __Vdly__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__fin_wire;
    vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_wire 
        = __Vdly__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_wire;
    vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__counter 
        = __Vdly__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__counter;
    if (__Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v0) {
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[0U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[1U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[2U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[3U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[4U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[5U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[6U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[7U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[8U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[9U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[0U] = 0U;
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[1U] = 0U;
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[2U] = 0U;
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[3U] = 0U;
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[4U] = 0U;
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[5U] = 0U;
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[6U] = 0U;
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[7U] = 0U;
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[8U] = 0U;
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[9U] = 0U;
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[0U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[1U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[2U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[3U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[4U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[5U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[6U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[7U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[8U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[9U] = 0xffffffffU;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v10) {
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[0U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue__v10;
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[0U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v10;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v10) {
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[1U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue__v11;
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[0U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v10;
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[1U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v11;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v11) {
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[2U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue__v12;
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[1U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v11;
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[2U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v12;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v12) {
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[3U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue__v13;
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[2U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v12;
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[3U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v13;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v13) {
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[4U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue__v14;
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[3U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v13;
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[4U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v14;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v14) {
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[5U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue__v15;
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[4U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v14;
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[5U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v15;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v15) {
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[6U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue__v16;
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[5U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v15;
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[6U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v16;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v16) {
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[7U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue__v17;
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[6U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v16;
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[7U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v17;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v17) {
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[8U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue__v18;
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[7U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v17;
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[8U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v18;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue__v19) {
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[__Vdlyvdim0__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue__v19] 
            = __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue__v19;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v18) {
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[8U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v18;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v19) {
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[__Vdlyvdim0__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v19] 
            = __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v19;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v19) {
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[__Vdlyvdim0__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v19] 
            = __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v19;
    }
    vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__fin_wire 
        = __Vdly__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__fin_wire;
    vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_wire 
        = __Vdly__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_wire;
    vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__counter 
        = __Vdly__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__counter;
    if (__Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v0) {
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[0U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[1U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[2U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[3U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[4U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[5U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[6U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[7U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[8U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[9U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[0U] = 0U;
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[1U] = 0U;
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[2U] = 0U;
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[3U] = 0U;
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[4U] = 0U;
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[5U] = 0U;
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[6U] = 0U;
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[7U] = 0U;
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[8U] = 0U;
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[9U] = 0U;
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[0U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[1U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[2U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[3U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[4U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[5U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[6U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[7U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[8U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[9U] = 0xffffffffU;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v10) {
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[0U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue__v10;
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[0U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v10;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v10) {
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[1U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue__v11;
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[0U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v10;
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[1U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v11;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v11) {
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[2U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue__v12;
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[1U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v11;
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[2U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v12;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v12) {
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[3U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue__v13;
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[2U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v12;
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[3U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v13;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v13) {
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[4U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue__v14;
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[3U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v13;
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[4U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v14;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v14) {
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[5U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue__v15;
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[4U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v14;
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[5U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v15;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v15) {
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[6U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue__v16;
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[5U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v15;
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[6U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v16;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v16) {
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[7U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue__v17;
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[6U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v16;
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[7U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v17;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v17) {
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[8U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue__v18;
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[7U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v17;
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[8U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v18;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue__v19) {
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[__Vdlyvdim0__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue__v19] 
            = __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue__v19;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v18) {
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[8U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v18;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v19) {
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[__Vdlyvdim0__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v19] 
            = __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v19;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v19) {
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[__Vdlyvdim0__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v19] 
            = __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v19;
    }
    vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__fin_wire 
        = __Vdly__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__fin_wire;
    vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_wire 
        = __Vdly__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_wire;
    vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__counter 
        = __Vdly__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__counter;
    if (__Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v0) {
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue[0U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue[1U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue[2U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue[3U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue[4U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue[5U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue[6U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue[7U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue[8U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue[9U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue[0U] = 0U;
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue[1U] = 0U;
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue[2U] = 0U;
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue[3U] = 0U;
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue[4U] = 0U;
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue[5U] = 0U;
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue[6U] = 0U;
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue[7U] = 0U;
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue[8U] = 0U;
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue[9U] = 0U;
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue[0U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue[1U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue[2U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue[3U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue[4U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue[5U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue[6U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue[7U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue[8U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue[9U] = 0xffffffffU;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue__v10) {
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue[0U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue__v10;
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue[0U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue__v10;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v10) {
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue[1U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue__v11;
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue[0U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v10;
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue[1U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue__v11;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v11) {
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue[2U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue__v12;
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue[1U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v11;
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue[2U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue__v12;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v12) {
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue[3U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue__v13;
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue[2U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v12;
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue[3U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue__v13;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v13) {
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue[4U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue__v14;
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue[3U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v13;
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue[4U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue__v14;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v14) {
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue[5U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue__v15;
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue[4U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v14;
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue[5U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue__v15;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v15) {
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue[6U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue__v16;
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue[5U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v15;
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue[6U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue__v16;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v16) {
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue[7U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue__v17;
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue[6U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v16;
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue[7U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue__v17;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v17) {
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue[8U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue__v18;
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue[7U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v17;
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue[8U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue__v18;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue__v19) {
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue[__Vdlyvdim0__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue__v19] 
            = __Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue__v19;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v18) {
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue[8U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v18;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v19) {
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue[__Vdlyvdim0__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v19] 
            = __Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v19;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue__v19) {
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue[__Vdlyvdim0__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue__v19] 
            = __Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue__v19;
    }
    vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__fin_wire 
        = __Vdly__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__fin_wire;
    vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_wire 
        = __Vdly__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_wire;
    vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__counter 
        = __Vdly__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__counter;
    if (__Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v0) {
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue[0U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue[1U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue[2U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue[3U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue[4U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue[5U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue[6U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue[7U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue[8U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue[9U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue[0U] = 0U;
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue[1U] = 0U;
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue[2U] = 0U;
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue[3U] = 0U;
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue[4U] = 0U;
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue[5U] = 0U;
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue[6U] = 0U;
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue[7U] = 0U;
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue[8U] = 0U;
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue[9U] = 0U;
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue[0U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue[1U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue[2U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue[3U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue[4U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue[5U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue[6U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue[7U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue[8U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue[9U] = 0xffffffffU;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue__v10) {
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue[0U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue__v10;
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue[0U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue__v10;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v10) {
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue[1U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue__v11;
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue[0U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v10;
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue[1U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue__v11;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v11) {
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue[2U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue__v12;
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue[1U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v11;
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue[2U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue__v12;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v12) {
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue[3U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue__v13;
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue[2U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v12;
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue[3U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue__v13;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v13) {
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue[4U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue__v14;
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue[3U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v13;
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue[4U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue__v14;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v14) {
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue[5U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue__v15;
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue[4U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v14;
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue[5U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue__v15;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v15) {
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue[6U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue__v16;
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue[5U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v15;
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue[6U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue__v16;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v16) {
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue[7U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue__v17;
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue[6U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v16;
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue[7U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue__v17;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v17) {
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue[8U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue__v18;
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue[7U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v17;
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue[8U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue__v18;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue__v19) {
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue[__Vdlyvdim0__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue__v19] 
            = __Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue__v19;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v18) {
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue[8U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v18;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v19) {
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue[__Vdlyvdim0__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v19] 
            = __Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v19;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue__v19) {
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue[__Vdlyvdim0__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue__v19] 
            = __Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue__v19;
    }
    vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__fin_wire 
        = __Vdly__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__fin_wire;
    vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_wire 
        = __Vdly__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_wire;
    vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__counter 
        = __Vdly__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__counter;
    if (__Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v0) {
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue[0U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue[1U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue[2U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue[3U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue[4U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue[5U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue[6U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue[7U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue[8U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue[9U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue[0U] = 0U;
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue[1U] = 0U;
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue[2U] = 0U;
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue[3U] = 0U;
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue[4U] = 0U;
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue[5U] = 0U;
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue[6U] = 0U;
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue[7U] = 0U;
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue[8U] = 0U;
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue[9U] = 0U;
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue[0U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue[1U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue[2U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue[3U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue[4U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue[5U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue[6U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue[7U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue[8U] = 0xffffffffU;
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue[9U] = 0xffffffffU;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue__v10) {
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue[0U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue__v10;
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue[0U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue__v10;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v10) {
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue[1U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue__v11;
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue[0U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v10;
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue[1U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue__v11;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v11) {
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue[2U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue__v12;
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue[1U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v11;
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue[2U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue__v12;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v12) {
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue[3U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue__v13;
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue[2U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v12;
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue[3U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue__v13;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v13) {
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue[4U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue__v14;
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue[3U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v13;
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue[4U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue__v14;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v14) {
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue[5U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue__v15;
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue[4U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v14;
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue[5U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue__v15;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v15) {
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue[6U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue__v16;
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue[5U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v15;
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue[6U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue__v16;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v16) {
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue[7U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue__v17;
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue[6U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v16;
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue[7U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue__v17;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v17) {
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue[8U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue__v18;
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue[7U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v17;
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue[8U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue__v18;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue__v19) {
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue[__Vdlyvdim0__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue__v19] 
            = __Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue__v19;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v18) {
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue[8U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v18;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v19) {
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue[__Vdlyvdim0__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v19] 
            = __Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v19;
    }
    vlSelf->top__DOT__xpixel_bus[0U] = vlSelf->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__engine__xpixel;
    vlSelf->top__DOT__xpixel_bus[1U] = vlSelf->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__engine__xpixel;
    vlSelf->top__DOT__xpixel_bus[2U] = vlSelf->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__engine__xpixel;
    vlSelf->top__DOT__xpixel_bus[3U] = vlSelf->top__DOT____Vcellout__genblk1__BRA__3__KET____DOT__engine__xpixel;
    vlSelf->top__DOT__xpixel_bus[4U] = vlSelf->top__DOT____Vcellout__genblk1__BRA__4__KET____DOT__engine__xpixel;
    vlSelf->top__DOT__xpixel_bus[5U] = vlSelf->top__DOT____Vcellout__genblk1__BRA__5__KET____DOT__engine__xpixel;
    vlSelf->top__DOT__ypixel_bus[0U] = vlSelf->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__engine__ypixel;
    vlSelf->top__DOT__ypixel_bus[1U] = vlSelf->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__engine__ypixel;
    vlSelf->top__DOT__ypixel_bus[2U] = vlSelf->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__engine__ypixel;
    vlSelf->top__DOT__ypixel_bus[3U] = vlSelf->top__DOT____Vcellout__genblk1__BRA__3__KET____DOT__engine__ypixel;
    vlSelf->top__DOT__ypixel_bus[4U] = vlSelf->top__DOT____Vcellout__genblk1__BRA__4__KET____DOT__engine__ypixel;
    vlSelf->top__DOT__ypixel_bus[5U] = vlSelf->top__DOT____Vcellout__genblk1__BRA__5__KET____DOT__engine__ypixel;
    if (__Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue__v19) {
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue[__Vdlyvdim0__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue__v19] 
            = __Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue__v19;
    }
    vlSelf->top__DOT__fin_bus = ((0x30U & (IData)(vlSelf->top__DOT__fin_bus)) 
                                 | (((IData)(vlSelf->top__DOT____Vcellout__genblk1__BRA__3__KET____DOT__engine__finished) 
                                     << 3U) | (((IData)(vlSelf->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__engine__finished) 
                                                << 2U) 
                                               | (((IData)(vlSelf->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__engine__finished) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__engine__finished)))));
    vlSelf->top__DOT__fin_bus = ((0xfU & (IData)(vlSelf->top__DOT__fin_bus)) 
                                 | (((IData)(vlSelf->top__DOT____Vcellout__genblk1__BRA__5__KET____DOT__engine__finished) 
                                     << 5U) | ((IData)(vlSelf->top__DOT____Vcellout__genblk1__BRA__4__KET____DOT__engine__finished) 
                                               << 4U)));
    vlSelf->top__DOT____Vcellinp__lut_rom__iterations[5U] 
        = vlSelf->top__DOT__iterations_bus[5U];
    vlSelf->top__DOT____Vcellinp__lut_rom__iterations[4U] 
        = vlSelf->top__DOT__iterations_bus[4U];
    vlSelf->top__DOT____Vcellinp__lut_rom__iterations[3U] 
        = vlSelf->top__DOT__iterations_bus[3U];
    vlSelf->top__DOT____Vcellinp__lut_rom__iterations[2U] 
        = vlSelf->top__DOT__iterations_bus[2U];
    vlSelf->top__DOT____Vcellinp__lut_rom__iterations[1U] 
        = vlSelf->top__DOT__iterations_bus[1U];
    vlSelf->top__DOT____Vcellinp__lut_rom__iterations[0U] 
        = vlSelf->top__DOT__iterations_bus[0U];
    vlSelf->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__queue_block__full_queue 
        = (0xaU == (IData)(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__counter));
    vlSelf->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__queue_block__en 
        = (0xffffffffU != vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue
           [0U]);
    if ((0xaU != (IData)(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__counter))) {
        if ((0U == (IData)(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__counter))) {
            vlSelf->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__queue_block__en = 0U;
        }
    }
    vlSelf->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__queue_block__full_queue 
        = (0xaU == (IData)(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__counter));
    vlSelf->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__queue_block__en 
        = (0xffffffffU != vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue
           [0U]);
    if ((0xaU != (IData)(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__counter))) {
        if ((0U == (IData)(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__counter))) {
            vlSelf->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__queue_block__en = 0U;
        }
    }
    vlSelf->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__queue_block__full_queue 
        = (0xaU == (IData)(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__counter));
    vlSelf->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__queue_block__en 
        = (0xffffffffU != vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue
           [0U]);
    if ((0xaU != (IData)(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__counter))) {
        if ((0U == (IData)(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__counter))) {
            vlSelf->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__queue_block__en = 0U;
        }
    }
    vlSelf->top__DOT____Vcellout__genblk1__BRA__3__KET____DOT__queue_block__full_queue 
        = (0xaU == (IData)(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__counter));
    vlSelf->top__DOT____Vcellout__genblk1__BRA__3__KET____DOT__queue_block__en 
        = (0xffffffffU != vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue
           [0U]);
    if ((0xaU != (IData)(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__counter))) {
        if ((0U == (IData)(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__counter))) {
            vlSelf->top__DOT____Vcellout__genblk1__BRA__3__KET____DOT__queue_block__en = 0U;
        }
    }
    vlSelf->top__DOT____Vcellout__genblk1__BRA__4__KET____DOT__queue_block__full_queue 
        = (0xaU == (IData)(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__counter));
    vlSelf->top__DOT____Vcellout__genblk1__BRA__4__KET____DOT__queue_block__en 
        = (0xffffffffU != vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue
           [0U]);
    if ((0xaU != (IData)(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__counter))) {
        if ((0U == (IData)(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__counter))) {
            vlSelf->top__DOT____Vcellout__genblk1__BRA__4__KET____DOT__queue_block__en = 0U;
        }
    }
    vlSelf->top__DOT____Vcellout__genblk1__BRA__5__KET____DOT__queue_block__full_queue 
        = (0xaU == (IData)(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__counter));
    vlSelf->top__DOT____Vcellout__genblk1__BRA__5__KET____DOT__queue_block__en 
        = (0xffffffffU != vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue
           [0U]);
    if ((0xaU != (IData)(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__counter))) {
        if ((0U == (IData)(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__counter))) {
            vlSelf->top__DOT____Vcellout__genblk1__BRA__5__KET____DOT__queue_block__en = 0U;
        }
    }
    top__DOT__lut_rom__DOT____Vlvbound_h5eb2d243__0 
        = ((0x31U >= (0x3fU & vlSelf->top__DOT____Vcellinp__lut_rom__iterations
                      [0U])) ? vlSelf->top__DOT__lut_rom__DOT__lut_array
           [(0x3fU & vlSelf->top__DOT____Vcellinp__lut_rom__iterations
             [0U])] : 0U);
    vlSelf->top__DOT____Vcellout__lut_rom__rgb_val[0U] 
        = top__DOT__lut_rom__DOT____Vlvbound_h5eb2d243__0;
    top__DOT__lut_rom__DOT____Vlvbound_h5eb2d243__0 
        = ((0x31U >= (0x3fU & vlSelf->top__DOT____Vcellinp__lut_rom__iterations
                      [1U])) ? vlSelf->top__DOT__lut_rom__DOT__lut_array
           [(0x3fU & vlSelf->top__DOT____Vcellinp__lut_rom__iterations
             [1U])] : 0U);
    vlSelf->top__DOT____Vcellout__lut_rom__rgb_val[1U] 
        = top__DOT__lut_rom__DOT____Vlvbound_h5eb2d243__0;
    top__DOT__lut_rom__DOT____Vlvbound_h5eb2d243__0 
        = ((0x31U >= (0x3fU & vlSelf->top__DOT____Vcellinp__lut_rom__iterations
                      [2U])) ? vlSelf->top__DOT__lut_rom__DOT__lut_array
           [(0x3fU & vlSelf->top__DOT____Vcellinp__lut_rom__iterations
             [2U])] : 0U);
    vlSelf->top__DOT____Vcellout__lut_rom__rgb_val[2U] 
        = top__DOT__lut_rom__DOT____Vlvbound_h5eb2d243__0;
    top__DOT__lut_rom__DOT____Vlvbound_h5eb2d243__0 
        = ((0x31U >= (0x3fU & vlSelf->top__DOT____Vcellinp__lut_rom__iterations
                      [3U])) ? vlSelf->top__DOT__lut_rom__DOT__lut_array
           [(0x3fU & vlSelf->top__DOT____Vcellinp__lut_rom__iterations
             [3U])] : 0U);
    vlSelf->top__DOT____Vcellout__lut_rom__rgb_val[3U] 
        = top__DOT__lut_rom__DOT____Vlvbound_h5eb2d243__0;
    top__DOT__lut_rom__DOT____Vlvbound_h5eb2d243__0 
        = ((0x31U >= (0x3fU & vlSelf->top__DOT____Vcellinp__lut_rom__iterations
                      [4U])) ? vlSelf->top__DOT__lut_rom__DOT__lut_array
           [(0x3fU & vlSelf->top__DOT____Vcellinp__lut_rom__iterations
             [4U])] : 0U);
    vlSelf->top__DOT____Vcellout__lut_rom__rgb_val[4U] 
        = top__DOT__lut_rom__DOT____Vlvbound_h5eb2d243__0;
    top__DOT__lut_rom__DOT____Vlvbound_h5eb2d243__0 
        = ((0x31U >= (0x3fU & vlSelf->top__DOT____Vcellinp__lut_rom__iterations
                      [5U])) ? vlSelf->top__DOT__lut_rom__DOT__lut_array
           [(0x3fU & vlSelf->top__DOT____Vcellinp__lut_rom__iterations
             [5U])] : 0U);
    vlSelf->top__DOT____Vcellout__lut_rom__rgb_val[5U] 
        = top__DOT__lut_rom__DOT____Vlvbound_h5eb2d243__0;
    vlSelf->full_queue[0U] = vlSelf->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__queue_block__full_queue;
    vlSelf->full_queue[1U] = vlSelf->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__queue_block__full_queue;
    vlSelf->full_queue[2U] = vlSelf->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__queue_block__full_queue;
    vlSelf->full_queue[3U] = vlSelf->top__DOT____Vcellout__genblk1__BRA__3__KET____DOT__queue_block__full_queue;
    vlSelf->full_queue[4U] = vlSelf->top__DOT____Vcellout__genblk1__BRA__4__KET____DOT__queue_block__full_queue;
    vlSelf->full_queue[5U] = vlSelf->top__DOT____Vcellout__genblk1__BRA__5__KET____DOT__queue_block__full_queue;
    vlSelf->top__DOT__combinator_block__DOT__xpixel 
        = __Vdly__top__DOT__combinator_block__DOT__xpixel;
    vlSelf->top__DOT__combinator_block__DOT__ypixel 
        = __Vdly__top__DOT__combinator_block__DOT__ypixel;
    vlSelf->top__DOT__en_bus = ((0x30U & (IData)(vlSelf->top__DOT__en_bus)) 
                                | (((IData)(vlSelf->top__DOT____Vcellout__genblk1__BRA__3__KET____DOT__queue_block__en) 
                                    << 3U) | (((IData)(vlSelf->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__queue_block__en) 
                                               << 2U) 
                                              | (((IData)(vlSelf->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__queue_block__en) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__queue_block__en)))));
    vlSelf->top__DOT__en_bus = ((0xfU & (IData)(vlSelf->top__DOT__en_bus)) 
                                | (((IData)(vlSelf->top__DOT____Vcellout__genblk1__BRA__5__KET____DOT__queue_block__en) 
                                    << 5U) | ((IData)(vlSelf->top__DOT____Vcellout__genblk1__BRA__4__KET____DOT__queue_block__en) 
                                              << 4U)));
    vlSelf->top__DOT__colour_bus[5U] = vlSelf->top__DOT____Vcellout__lut_rom__rgb_val
        [5U];
    vlSelf->top__DOT__colour_bus[4U] = vlSelf->top__DOT____Vcellout__lut_rom__rgb_val
        [4U];
    vlSelf->top__DOT__colour_bus[3U] = vlSelf->top__DOT____Vcellout__lut_rom__rgb_val
        [3U];
    vlSelf->top__DOT__colour_bus[2U] = vlSelf->top__DOT____Vcellout__lut_rom__rgb_val
        [2U];
    vlSelf->top__DOT__colour_bus[1U] = vlSelf->top__DOT____Vcellout__lut_rom__rgb_val
        [1U];
    vlSelf->top__DOT__colour_bus[0U] = vlSelf->top__DOT____Vcellout__lut_rom__rgb_val
        [0U];
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__1\n"); );
    // Init
    IData/*31:0*/ top__DOT__distributor__DOT____Vlvbound_hc02b7fe6__0;
    IData/*31:0*/ top__DOT__distributor__DOT____Vlvbound_hc3b9a86b__0;
    IData/*31:0*/ __Vdly__top__DOT__distributor__DOT__x0;
    IData/*31:0*/ __Vdly__top__DOT__distributor__DOT__y0;
    // Body
    __Vdly__top__DOT__distributor__DOT__y0 = vlSelf->top__DOT__distributor__DOT__y0;
    __Vdly__top__DOT__distributor__DOT__x0 = vlSelf->top__DOT__distributor__DOT__x0;
    if (vlSelf->reset) {
        __Vdly__top__DOT__distributor__DOT__x0 = 0U;
        __Vdly__top__DOT__distributor__DOT__y0 = 0U;
    } else if (vlSelf->top__DOT__fin_wire) {
        __Vdly__top__DOT__distributor__DOT__x0 = VL_MODDIV_III(32, 
                                                               ((IData)(6U) 
                                                                + vlSelf->top__DOT__distributor__DOT__x0), (IData)(0x500U));
        __Vdly__top__DOT__distributor__DOT__y0 = VL_MODDIV_III(32, 
                                                               (vlSelf->top__DOT__distributor__DOT__y0 
                                                                + 
                                                                VL_DIV_III(32, 
                                                                           ((IData)(6U) 
                                                                            + vlSelf->top__DOT__distributor__DOT__x0), (IData)(0x500U))), (IData)(0x2d0U));
    }
    vlSelf->top__DOT__distributor__DOT__y0 = __Vdly__top__DOT__distributor__DOT__y0;
    vlSelf->top__DOT__distributor__DOT__x0 = __Vdly__top__DOT__distributor__DOT__x0;
    top__DOT__distributor__DOT____Vlvbound_hc02b7fe6__0 
        = VL_MODDIV_III(32, vlSelf->top__DOT__distributor__DOT__x0, (IData)(0x500U));
    vlSelf->top__DOT____Vcellout__distributor__x[0U] 
        = top__DOT__distributor__DOT____Vlvbound_hc02b7fe6__0;
    top__DOT__distributor__DOT____Vlvbound_hc02b7fe6__0 
        = VL_MODDIV_III(32, ((IData)(1U) + vlSelf->top__DOT__distributor__DOT__x0), (IData)(0x500U));
    vlSelf->top__DOT____Vcellout__distributor__x[1U] 
        = top__DOT__distributor__DOT____Vlvbound_hc02b7fe6__0;
    top__DOT__distributor__DOT____Vlvbound_hc02b7fe6__0 
        = VL_MODDIV_III(32, ((IData)(2U) + vlSelf->top__DOT__distributor__DOT__x0), (IData)(0x500U));
    vlSelf->top__DOT____Vcellout__distributor__x[2U] 
        = top__DOT__distributor__DOT____Vlvbound_hc02b7fe6__0;
    top__DOT__distributor__DOT____Vlvbound_hc02b7fe6__0 
        = VL_MODDIV_III(32, ((IData)(3U) + vlSelf->top__DOT__distributor__DOT__x0), (IData)(0x500U));
    vlSelf->top__DOT____Vcellout__distributor__x[3U] 
        = top__DOT__distributor__DOT____Vlvbound_hc02b7fe6__0;
    top__DOT__distributor__DOT____Vlvbound_hc02b7fe6__0 
        = VL_MODDIV_III(32, ((IData)(4U) + vlSelf->top__DOT__distributor__DOT__x0), (IData)(0x500U));
    vlSelf->top__DOT____Vcellout__distributor__x[4U] 
        = top__DOT__distributor__DOT____Vlvbound_hc02b7fe6__0;
    top__DOT__distributor__DOT____Vlvbound_hc02b7fe6__0 
        = VL_MODDIV_III(32, ((IData)(5U) + vlSelf->top__DOT__distributor__DOT__x0), (IData)(0x500U));
    vlSelf->top__DOT____Vcellout__distributor__x[5U] 
        = top__DOT__distributor__DOT____Vlvbound_hc02b7fe6__0;
    top__DOT__distributor__DOT____Vlvbound_hc3b9a86b__0 
        = VL_MODDIV_III(32, (vlSelf->top__DOT__distributor__DOT__y0 
                             + VL_DIV_III(32, vlSelf->top__DOT__distributor__DOT__x0, (IData)(0x500U))), (IData)(0x2d0U));
    vlSelf->top__DOT____Vcellout__distributor__y[0U] 
        = top__DOT__distributor__DOT____Vlvbound_hc3b9a86b__0;
    top__DOT__distributor__DOT____Vlvbound_hc3b9a86b__0 
        = VL_MODDIV_III(32, (vlSelf->top__DOT__distributor__DOT__y0 
                             + VL_DIV_III(32, ((IData)(1U) 
                                               + vlSelf->top__DOT__distributor__DOT__x0), (IData)(0x500U))), (IData)(0x2d0U));
    vlSelf->top__DOT____Vcellout__distributor__y[1U] 
        = top__DOT__distributor__DOT____Vlvbound_hc3b9a86b__0;
    top__DOT__distributor__DOT____Vlvbound_hc3b9a86b__0 
        = VL_MODDIV_III(32, (vlSelf->top__DOT__distributor__DOT__y0 
                             + VL_DIV_III(32, ((IData)(2U) 
                                               + vlSelf->top__DOT__distributor__DOT__x0), (IData)(0x500U))), (IData)(0x2d0U));
    vlSelf->top__DOT____Vcellout__distributor__y[2U] 
        = top__DOT__distributor__DOT____Vlvbound_hc3b9a86b__0;
    top__DOT__distributor__DOT____Vlvbound_hc3b9a86b__0 
        = VL_MODDIV_III(32, (vlSelf->top__DOT__distributor__DOT__y0 
                             + VL_DIV_III(32, ((IData)(3U) 
                                               + vlSelf->top__DOT__distributor__DOT__x0), (IData)(0x500U))), (IData)(0x2d0U));
    vlSelf->top__DOT____Vcellout__distributor__y[3U] 
        = top__DOT__distributor__DOT____Vlvbound_hc3b9a86b__0;
    top__DOT__distributor__DOT____Vlvbound_hc3b9a86b__0 
        = VL_MODDIV_III(32, (vlSelf->top__DOT__distributor__DOT__y0 
                             + VL_DIV_III(32, ((IData)(4U) 
                                               + vlSelf->top__DOT__distributor__DOT__x0), (IData)(0x500U))), (IData)(0x2d0U));
    vlSelf->top__DOT____Vcellout__distributor__y[4U] 
        = top__DOT__distributor__DOT____Vlvbound_hc3b9a86b__0;
    top__DOT__distributor__DOT____Vlvbound_hc3b9a86b__0 
        = VL_MODDIV_III(32, (vlSelf->top__DOT__distributor__DOT__y0 
                             + VL_DIV_III(32, ((IData)(5U) 
                                               + vlSelf->top__DOT__distributor__DOT__x0), (IData)(0x500U))), (IData)(0x2d0U));
    vlSelf->top__DOT____Vcellout__distributor__y[5U] 
        = top__DOT__distributor__DOT____Vlvbound_hc3b9a86b__0;
    vlSelf->top__DOT__x[5U] = vlSelf->top__DOT____Vcellout__distributor__x
        [5U];
    vlSelf->top__DOT__x[4U] = vlSelf->top__DOT____Vcellout__distributor__x
        [4U];
    vlSelf->top__DOT__x[3U] = vlSelf->top__DOT____Vcellout__distributor__x
        [3U];
    vlSelf->top__DOT__x[2U] = vlSelf->top__DOT____Vcellout__distributor__x
        [2U];
    vlSelf->top__DOT__x[1U] = vlSelf->top__DOT____Vcellout__distributor__x
        [1U];
    vlSelf->top__DOT__x[0U] = vlSelf->top__DOT____Vcellout__distributor__x
        [0U];
    vlSelf->top__DOT__y[5U] = vlSelf->top__DOT____Vcellout__distributor__y
        [5U];
    vlSelf->top__DOT__y[4U] = vlSelf->top__DOT____Vcellout__distributor__y
        [4U];
    vlSelf->top__DOT__y[3U] = vlSelf->top__DOT____Vcellout__distributor__y
        [3U];
    vlSelf->top__DOT__y[2U] = vlSelf->top__DOT____Vcellout__distributor__y
        [2U];
    vlSelf->top__DOT__y[1U] = vlSelf->top__DOT____Vcellout__distributor__y
        [1U];
    vlSelf->top__DOT__y[0U] = vlSelf->top__DOT____Vcellout__distributor__y
        [0U];
}

VL_INLINE_OPT void Vtop___024root___combo__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__reset_engine = ((0x3fU == (IData)(vlSelf->top__DOT__fin_bus)) 
                                      | (IData)(vlSelf->reset));
    vlSelf->top__DOT__fin_wire = ((0x3fU == (IData)(vlSelf->top__DOT__fin_bus)) 
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
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->reset) & (~ (IData)(vlSelf->__Vclklast__TOP__reset))))) {
        Vtop___024root___sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    Vtop___024root___combo__TOP__0(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__reset = vlSelf->reset;
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
