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
    SData/*9:0*/ top__DOT__distributor__DOT____Vlvbound_h9811159c__0;
    SData/*9:0*/ top__DOT__distributor__DOT____Vlvbound_h803dbe04__0;
    SData/*9:0*/ __Vdly__top__DOT__distributor__DOT__x0;
    SData/*9:0*/ __Vdly__top__DOT__distributor__DOT__y0;
    SData/*9:0*/ __Vdly__top__DOT__combinator_block__DOT__xpixel;
    SData/*9:0*/ __Vdly__top__DOT__combinator_block__DOT__ypixel;
    // Body
    __Vdly__top__DOT__combinator_block__DOT__ypixel 
        = vlSelf->top__DOT__combinator_block__DOT__ypixel;
    __Vdly__top__DOT__combinator_block__DOT__xpixel 
        = vlSelf->top__DOT__combinator_block__DOT__xpixel;
    __Vdly__top__DOT__distributor__DOT__y0 = vlSelf->top__DOT__distributor__DOT__y0;
    __Vdly__top__DOT__distributor__DOT__x0 = vlSelf->top__DOT__distributor__DOT__x0;
    if (vlSelf->reset) {
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__unnamedblk2__DOT__i = 0xaU;
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__unnamedblk2__DOT__i = 0xaU;
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__unnamedblk2__DOT__i = 0xaU;
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__unnamedblk2__DOT__i = 0xaU;
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__unnamedblk2__DOT__i = 0xaU;
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__unnamedblk2__DOT__i = 0xaU;
        vlSelf->first = 1U;
        __Vdly__top__DOT__combinator_block__DOT__xpixel = 0U;
        __Vdly__top__DOT__combinator_block__DOT__ypixel = 0U;
        __Vdly__top__DOT__distributor__DOT__x0 = 0U;
        __Vdly__top__DOT__distributor__DOT__y0 = 0U;
    } else if (((0x3fU == (IData)(vlSelf->top__DOT__fin_bus)) 
                | (IData)(vlSelf->reset))) {
        __Vdly__top__DOT__distributor__DOT__x0 = (0x3ffU 
                                                  & VL_MODDIV_III(32, 
                                                                  ((IData)(6U) 
                                                                   + (IData)(vlSelf->top__DOT__distributor__DOT__x0)), (IData)(0x280U)));
        __Vdly__top__DOT__distributor__DOT__y0 = (0x3ffU 
                                                  & VL_MODDIV_III(32, 
                                                                  ((IData)(vlSelf->top__DOT__distributor__DOT__y0) 
                                                                   + 
                                                                   VL_DIV_III(32, 
                                                                              ((IData)(6U) 
                                                                               + (IData)(vlSelf->top__DOT__distributor__DOT__x0)), (IData)(0x280U))), (IData)(0x1e0U)));
    }
    if (((0x3fU == (IData)(vlSelf->top__DOT__en_bus)) 
         & (IData)(vlSelf->ready))) {
        vlSelf->valid = 1U;
        vlSelf->top__DOT__colour_o_wire = ((5U >= (7U 
                                                   & vlSelf->top__DOT__j))
                                            ? vlSelf->top__DOT__colour_bus_o
                                           [(7U & vlSelf->top__DOT__j)]
                                            : 0U);
        if ((0x1e0U <= (IData)(vlSelf->top__DOT__combinator_block__DOT__ypixel))) {
            vlSelf->last_y = 1U;
            __Vdly__top__DOT__combinator_block__DOT__xpixel = 0U;
            __Vdly__top__DOT__combinator_block__DOT__ypixel = 0U;
        } else if ((0x27fU == (IData)(vlSelf->top__DOT__combinator_block__DOT__xpixel))) {
            __Vdly__top__DOT__combinator_block__DOT__ypixel 
                = (0x3ffU & ((IData)(1U) + (IData)(vlSelf->top__DOT__combinator_block__DOT__ypixel)));
            vlSelf->last_x = 1U;
            __Vdly__top__DOT__combinator_block__DOT__xpixel = 0U;
        } else {
            __Vdly__top__DOT__combinator_block__DOT__xpixel 
                = (0x3ffU & ((IData)(1U) + (IData)(vlSelf->top__DOT__combinator_block__DOT__xpixel)));
        }
        vlSelf->top__DOT__xpixel_wire = vlSelf->top__DOT__combinator_block__DOT__xpixel;
        vlSelf->top__DOT__ypixel_wire = vlSelf->top__DOT__combinator_block__DOT__ypixel;
    } else {
        vlSelf->valid = 0U;
    }
    vlSelf->top__DOT__combinator_block__DOT__xpixel 
        = __Vdly__top__DOT__combinator_block__DOT__xpixel;
    vlSelf->top__DOT__combinator_block__DOT__ypixel 
        = __Vdly__top__DOT__combinator_block__DOT__ypixel;
    vlSelf->top__DOT__distributor__DOT__y0 = __Vdly__top__DOT__distributor__DOT__y0;
    vlSelf->top__DOT__distributor__DOT__x0 = __Vdly__top__DOT__distributor__DOT__x0;
    vlSelf->r = (0xffU & vlSelf->top__DOT__colour_o_wire);
    vlSelf->g = (0xffU & (vlSelf->top__DOT__colour_o_wire 
                          >> 8U));
    vlSelf->b = (0xffU & (vlSelf->top__DOT__colour_o_wire 
                          >> 0x10U));
    top__DOT__distributor__DOT____Vlvbound_h9811159c__0 
        = (0x3ffU & VL_MODDIV_III(32, (IData)(vlSelf->top__DOT__distributor__DOT__x0), (IData)(0x280U)));
    vlSelf->top__DOT____Vcellout__distributor__x[0U] 
        = top__DOT__distributor__DOT____Vlvbound_h9811159c__0;
    top__DOT__distributor__DOT____Vlvbound_h9811159c__0 
        = (0x3ffU & VL_MODDIV_III(32, ((IData)(1U) 
                                       + (IData)(vlSelf->top__DOT__distributor__DOT__x0)), (IData)(0x280U)));
    vlSelf->top__DOT____Vcellout__distributor__x[1U] 
        = top__DOT__distributor__DOT____Vlvbound_h9811159c__0;
    top__DOT__distributor__DOT____Vlvbound_h9811159c__0 
        = (0x3ffU & VL_MODDIV_III(32, ((IData)(2U) 
                                       + (IData)(vlSelf->top__DOT__distributor__DOT__x0)), (IData)(0x280U)));
    vlSelf->top__DOT____Vcellout__distributor__x[2U] 
        = top__DOT__distributor__DOT____Vlvbound_h9811159c__0;
    top__DOT__distributor__DOT____Vlvbound_h9811159c__0 
        = (0x3ffU & VL_MODDIV_III(32, ((IData)(3U) 
                                       + (IData)(vlSelf->top__DOT__distributor__DOT__x0)), (IData)(0x280U)));
    vlSelf->top__DOT____Vcellout__distributor__x[3U] 
        = top__DOT__distributor__DOT____Vlvbound_h9811159c__0;
    top__DOT__distributor__DOT____Vlvbound_h9811159c__0 
        = (0x3ffU & VL_MODDIV_III(32, ((IData)(4U) 
                                       + (IData)(vlSelf->top__DOT__distributor__DOT__x0)), (IData)(0x280U)));
    vlSelf->top__DOT____Vcellout__distributor__x[4U] 
        = top__DOT__distributor__DOT____Vlvbound_h9811159c__0;
    top__DOT__distributor__DOT____Vlvbound_h9811159c__0 
        = (0x3ffU & VL_MODDIV_III(32, ((IData)(5U) 
                                       + (IData)(vlSelf->top__DOT__distributor__DOT__x0)), (IData)(0x280U)));
    vlSelf->top__DOT____Vcellout__distributor__x[5U] 
        = top__DOT__distributor__DOT____Vlvbound_h9811159c__0;
    top__DOT__distributor__DOT____Vlvbound_h803dbe04__0 
        = (0x3ffU & VL_MODDIV_III(32, ((IData)(vlSelf->top__DOT__distributor__DOT__y0) 
                                       + VL_DIV_III(32, (IData)(vlSelf->top__DOT__distributor__DOT__x0), (IData)(0x280U))), (IData)(0x1e0U)));
    vlSelf->top__DOT____Vcellout__distributor__y[0U] 
        = top__DOT__distributor__DOT____Vlvbound_h803dbe04__0;
    top__DOT__distributor__DOT____Vlvbound_h803dbe04__0 
        = (0x3ffU & VL_MODDIV_III(32, ((IData)(vlSelf->top__DOT__distributor__DOT__y0) 
                                       + VL_DIV_III(32, 
                                                    ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__distributor__DOT__x0)), (IData)(0x280U))), (IData)(0x1e0U)));
    vlSelf->top__DOT____Vcellout__distributor__y[1U] 
        = top__DOT__distributor__DOT____Vlvbound_h803dbe04__0;
    top__DOT__distributor__DOT____Vlvbound_h803dbe04__0 
        = (0x3ffU & VL_MODDIV_III(32, ((IData)(vlSelf->top__DOT__distributor__DOT__y0) 
                                       + VL_DIV_III(32, 
                                                    ((IData)(2U) 
                                                     + (IData)(vlSelf->top__DOT__distributor__DOT__x0)), (IData)(0x280U))), (IData)(0x1e0U)));
    vlSelf->top__DOT____Vcellout__distributor__y[2U] 
        = top__DOT__distributor__DOT____Vlvbound_h803dbe04__0;
    top__DOT__distributor__DOT____Vlvbound_h803dbe04__0 
        = (0x3ffU & VL_MODDIV_III(32, ((IData)(vlSelf->top__DOT__distributor__DOT__y0) 
                                       + VL_DIV_III(32, 
                                                    ((IData)(3U) 
                                                     + (IData)(vlSelf->top__DOT__distributor__DOT__x0)), (IData)(0x280U))), (IData)(0x1e0U)));
    vlSelf->top__DOT____Vcellout__distributor__y[3U] 
        = top__DOT__distributor__DOT____Vlvbound_h803dbe04__0;
    top__DOT__distributor__DOT____Vlvbound_h803dbe04__0 
        = (0x3ffU & VL_MODDIV_III(32, ((IData)(vlSelf->top__DOT__distributor__DOT__y0) 
                                       + VL_DIV_III(32, 
                                                    ((IData)(4U) 
                                                     + (IData)(vlSelf->top__DOT__distributor__DOT__x0)), (IData)(0x280U))), (IData)(0x1e0U)));
    vlSelf->top__DOT____Vcellout__distributor__y[4U] 
        = top__DOT__distributor__DOT____Vlvbound_h803dbe04__0;
    top__DOT__distributor__DOT____Vlvbound_h803dbe04__0 
        = (0x3ffU & VL_MODDIV_III(32, ((IData)(vlSelf->top__DOT__distributor__DOT__y0) 
                                       + VL_DIV_III(32, 
                                                    ((IData)(5U) 
                                                     + (IData)(vlSelf->top__DOT__distributor__DOT__x0)), (IData)(0x280U))), (IData)(0x1e0U)));
    vlSelf->top__DOT____Vcellout__distributor__y[5U] 
        = top__DOT__distributor__DOT____Vlvbound_h803dbe04__0;
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__2\n"); );
    // Body
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue__v10 = 0U;
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue__v10 = 0U;
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue__v10 = 0U;
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue__v10 = 0U;
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue__v10 = 0U;
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue__v10 = 0U;
    vlSelf->__Vdly__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__counter 
        = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__counter;
    vlSelf->__Vdly__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__counter 
        = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__counter;
    vlSelf->__Vdly__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__counter 
        = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__counter;
    vlSelf->__Vdly__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__counter 
        = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__counter;
    vlSelf->__Vdly__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__counter 
        = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__counter;
    vlSelf->__Vdly__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__counter 
        = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__counter;
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue__v10 = 0U;
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue__v11 = 0U;
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue__v20 = 0U;
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue__v10 = 0U;
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue__v11 = 0U;
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue__v20 = 0U;
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue__v10 = 0U;
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue__v11 = 0U;
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue__v20 = 0U;
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v10 = 0U;
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v11 = 0U;
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v20 = 0U;
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v10 = 0U;
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v11 = 0U;
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v20 = 0U;
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v10 = 0U;
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v11 = 0U;
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v20 = 0U;
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v10 = 0U;
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v0 = 0U;
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v11 = 0U;
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v12 = 0U;
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v13 = 0U;
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v14 = 0U;
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v15 = 0U;
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v16 = 0U;
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v17 = 0U;
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v18 = 0U;
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v10 = 0U;
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v0 = 0U;
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v11 = 0U;
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v12 = 0U;
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v13 = 0U;
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v14 = 0U;
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v15 = 0U;
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v16 = 0U;
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v17 = 0U;
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v18 = 0U;
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v10 = 0U;
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v0 = 0U;
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v11 = 0U;
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v12 = 0U;
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v13 = 0U;
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v14 = 0U;
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v15 = 0U;
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v16 = 0U;
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v17 = 0U;
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v18 = 0U;
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v10 = 0U;
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v0 = 0U;
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v11 = 0U;
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v12 = 0U;
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v13 = 0U;
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v14 = 0U;
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v15 = 0U;
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v16 = 0U;
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v17 = 0U;
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v18 = 0U;
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v10 = 0U;
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v0 = 0U;
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v11 = 0U;
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v12 = 0U;
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v13 = 0U;
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v14 = 0U;
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v15 = 0U;
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v16 = 0U;
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v17 = 0U;
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v18 = 0U;
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v10 = 0U;
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v0 = 0U;
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v11 = 0U;
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v12 = 0U;
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v13 = 0U;
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v14 = 0U;
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v15 = 0U;
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v16 = 0U;
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v17 = 0U;
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v18 = 0U;
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__3(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__3\n"); );
    // Body
    if ((((IData)(vlSelf->top__DOT__xpixel_wire) == 
          vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue
          [0U]) & ((IData)(vlSelf->top__DOT__ypixel_wire) 
                   == vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue
                   [0U]))) {
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_h66ba8f5e__0 
            = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue
            [1U];
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_h73829ee7__0 
            = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue
            [1U];
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__unnamedblk3__DOT__i = 9U;
        vlSelf->__Vdly__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__counter 
            = (0xfU & ((IData)(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__counter) 
                       - (IData)(1U)));
        vlSelf->top__DOT____Vcellout__genblk1__BRA__5__KET____DOT__queue_block__colour_o 
            = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue
            [0U];
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0 
            = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue
            [1U];
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue__v11 
            = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_h66ba8f5e__0;
        vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue__v11 = 1U;
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue__v11 
            = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_h73829ee7__0;
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_h66ba8f5e__0 
            = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue
            [2U];
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_h73829ee7__0 
            = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue
            [2U];
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v11 
            = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0;
        vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v11 = 1U;
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue__v12 
            = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_h66ba8f5e__0;
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue__v12 
            = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_h73829ee7__0;
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0 
            = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue
            [2U];
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_h66ba8f5e__0 
            = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue
            [3U];
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_h73829ee7__0 
            = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue
            [3U];
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v12 
            = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0;
        vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v12 = 1U;
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue__v13 
            = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_h66ba8f5e__0;
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue__v13 
            = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_h73829ee7__0;
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0 
            = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue
            [3U];
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_h66ba8f5e__0 
            = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue
            [4U];
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_h73829ee7__0 
            = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue
            [4U];
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v13 
            = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0;
        vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v13 = 1U;
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue__v14 
            = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_h66ba8f5e__0;
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue__v14 
            = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_h73829ee7__0;
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0 
            = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue
            [4U];
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_h66ba8f5e__0 
            = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue
            [5U];
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_h73829ee7__0 
            = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue
            [5U];
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v14 
            = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0;
        vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v14 = 1U;
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue__v15 
            = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_h66ba8f5e__0;
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue__v15 
            = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_h73829ee7__0;
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0 
            = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue
            [5U];
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_h66ba8f5e__0 
            = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue
            [6U];
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_h73829ee7__0 
            = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue
            [6U];
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v15 
            = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0;
        vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v15 = 1U;
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue__v16 
            = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_h66ba8f5e__0;
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue__v16 
            = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_h73829ee7__0;
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0 
            = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue
            [6U];
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_h66ba8f5e__0 
            = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue
            [7U];
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_h73829ee7__0 
            = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue
            [7U];
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v16 
            = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0;
        vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v16 = 1U;
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue__v17 
            = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_h66ba8f5e__0;
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue__v17 
            = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_h73829ee7__0;
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0 
            = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue
            [7U];
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_h66ba8f5e__0 
            = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue
            [8U];
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_h73829ee7__0 
            = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue
            [8U];
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v17 
            = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0;
        vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v17 = 1U;
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue__v18 
            = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_h66ba8f5e__0;
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue__v18 
            = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_h73829ee7__0;
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0 
            = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue
            [8U];
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_h66ba8f5e__0 
            = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue
            [9U];
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_h73829ee7__0 
            = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue
            [9U];
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v18 
            = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0;
        vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v18 = 1U;
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue__v19 
            = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_h66ba8f5e__0;
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue__v19 
            = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_h73829ee7__0;
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0 
            = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue
            [9U];
        vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue__v20 = 1U;
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v19 
            = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0;
    }
    if ((((IData)(vlSelf->top__DOT__xpixel_wire) == 
          vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue
          [0U]) & ((IData)(vlSelf->top__DOT__ypixel_wire) 
                   == vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue
                   [0U]))) {
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_h66ba8f5e__0 
            = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue
            [1U];
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_h73829ee7__0 
            = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue
            [1U];
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__unnamedblk3__DOT__i = 9U;
        vlSelf->__Vdly__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__counter 
            = (0xfU & ((IData)(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__counter) 
                       - (IData)(1U)));
        vlSelf->top__DOT____Vcellout__genblk1__BRA__4__KET____DOT__queue_block__colour_o 
            = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue
            [0U];
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0 
            = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue
            [1U];
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue__v11 
            = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_h66ba8f5e__0;
        vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue__v11 = 1U;
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue__v11 
            = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_h73829ee7__0;
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_h66ba8f5e__0 
            = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue
            [2U];
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_h73829ee7__0 
            = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue
            [2U];
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v11 
            = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0;
        vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v11 = 1U;
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue__v12 
            = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_h66ba8f5e__0;
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue__v12 
            = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_h73829ee7__0;
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0 
            = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue
            [2U];
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_h66ba8f5e__0 
            = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue
            [3U];
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_h73829ee7__0 
            = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue
            [3U];
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v12 
            = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0;
        vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v12 = 1U;
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue__v13 
            = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_h66ba8f5e__0;
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue__v13 
            = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_h73829ee7__0;
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0 
            = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue
            [3U];
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_h66ba8f5e__0 
            = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue
            [4U];
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_h73829ee7__0 
            = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue
            [4U];
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v13 
            = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0;
        vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v13 = 1U;
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue__v14 
            = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_h66ba8f5e__0;
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue__v14 
            = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_h73829ee7__0;
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0 
            = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue
            [4U];
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_h66ba8f5e__0 
            = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue
            [5U];
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_h73829ee7__0 
            = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue
            [5U];
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v14 
            = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0;
        vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v14 = 1U;
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue__v15 
            = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_h66ba8f5e__0;
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue__v15 
            = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_h73829ee7__0;
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0 
            = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue
            [5U];
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_h66ba8f5e__0 
            = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue
            [6U];
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_h73829ee7__0 
            = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue
            [6U];
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v15 
            = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0;
        vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v15 = 1U;
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue__v16 
            = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_h66ba8f5e__0;
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue__v16 
            = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_h73829ee7__0;
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0 
            = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue
            [6U];
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_h66ba8f5e__0 
            = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue
            [7U];
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_h73829ee7__0 
            = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue
            [7U];
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v16 
            = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0;
        vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v16 = 1U;
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue__v17 
            = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_h66ba8f5e__0;
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue__v17 
            = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_h73829ee7__0;
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0 
            = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue
            [7U];
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_h66ba8f5e__0 
            = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue
            [8U];
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_h73829ee7__0 
            = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue
            [8U];
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v17 
            = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0;
        vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v17 = 1U;
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue__v18 
            = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_h66ba8f5e__0;
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue__v18 
            = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_h73829ee7__0;
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0 
            = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue
            [8U];
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_h66ba8f5e__0 
            = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue
            [9U];
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_h73829ee7__0 
            = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue
            [9U];
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v18 
            = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0;
        vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v18 = 1U;
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue__v19 
            = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_h66ba8f5e__0;
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue__v19 
            = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_h73829ee7__0;
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0 
            = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue
            [9U];
        vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue__v20 = 1U;
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v19 
            = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0;
    }
    if ((((IData)(vlSelf->top__DOT__xpixel_wire) == 
          vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue
          [0U]) & ((IData)(vlSelf->top__DOT__ypixel_wire) 
                   == vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue
                   [0U]))) {
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_h66ba8f5e__0 
            = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue
            [1U];
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_h73829ee7__0 
            = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue
            [1U];
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__unnamedblk3__DOT__i = 9U;
        vlSelf->__Vdly__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__counter 
            = (0xfU & ((IData)(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__counter) 
                       - (IData)(1U)));
        vlSelf->top__DOT____Vcellout__genblk1__BRA__3__KET____DOT__queue_block__colour_o 
            = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue
            [0U];
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0 
            = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue
            [1U];
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue__v11 
            = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_h66ba8f5e__0;
        vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue__v11 = 1U;
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue__v11 
            = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_h73829ee7__0;
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_h66ba8f5e__0 
            = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue
            [2U];
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_h73829ee7__0 
            = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue
            [2U];
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v11 
            = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0;
        vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v11 = 1U;
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue__v12 
            = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_h66ba8f5e__0;
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue__v12 
            = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_h73829ee7__0;
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0 
            = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue
            [2U];
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_h66ba8f5e__0 
            = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue
            [3U];
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_h73829ee7__0 
            = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue
            [3U];
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v12 
            = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0;
        vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v12 = 1U;
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue__v13 
            = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_h66ba8f5e__0;
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue__v13 
            = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_h73829ee7__0;
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0 
            = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue
            [3U];
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_h66ba8f5e__0 
            = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue
            [4U];
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_h73829ee7__0 
            = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue
            [4U];
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v13 
            = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0;
        vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v13 = 1U;
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue__v14 
            = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_h66ba8f5e__0;
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue__v14 
            = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_h73829ee7__0;
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0 
            = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue
            [4U];
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_h66ba8f5e__0 
            = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue
            [5U];
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_h73829ee7__0 
            = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue
            [5U];
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v14 
            = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0;
        vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v14 = 1U;
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue__v15 
            = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_h66ba8f5e__0;
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue__v15 
            = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_h73829ee7__0;
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0 
            = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue
            [5U];
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_h66ba8f5e__0 
            = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue
            [6U];
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_h73829ee7__0 
            = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue
            [6U];
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v15 
            = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0;
        vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v15 = 1U;
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue__v16 
            = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_h66ba8f5e__0;
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue__v16 
            = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_h73829ee7__0;
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0 
            = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue
            [6U];
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_h66ba8f5e__0 
            = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue
            [7U];
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_h73829ee7__0 
            = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue
            [7U];
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v16 
            = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0;
        vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v16 = 1U;
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue__v17 
            = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_h66ba8f5e__0;
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue__v17 
            = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_h73829ee7__0;
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0 
            = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue
            [7U];
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_h66ba8f5e__0 
            = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue
            [8U];
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_h73829ee7__0 
            = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue
            [8U];
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v17 
            = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0;
        vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v17 = 1U;
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue__v18 
            = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_h66ba8f5e__0;
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue__v18 
            = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_h73829ee7__0;
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0 
            = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue
            [8U];
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_h66ba8f5e__0 
            = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue
            [9U];
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_h73829ee7__0 
            = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue
            [9U];
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v18 
            = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0;
        vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v18 = 1U;
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue__v19 
            = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_h66ba8f5e__0;
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue__v19 
            = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_h73829ee7__0;
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0 
            = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue
            [9U];
        vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue__v20 = 1U;
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v19 
            = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0;
    }
    if ((((IData)(vlSelf->top__DOT__xpixel_wire) == 
          vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue
          [0U]) & ((IData)(vlSelf->top__DOT__ypixel_wire) 
                   == vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue
                   [0U]))) {
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_h66ba8f5e__0 
            = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue
            [1U];
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_h73829ee7__0 
            = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue
            [1U];
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__unnamedblk3__DOT__i = 9U;
        vlSelf->__Vdly__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__counter 
            = (0xfU & ((IData)(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__counter) 
                       - (IData)(1U)));
        vlSelf->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__queue_block__colour_o 
            = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue
            [0U];
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0 
            = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue
            [1U];
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v11 
            = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_h66ba8f5e__0;
        vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v11 = 1U;
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue__v11 
            = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_h73829ee7__0;
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_h66ba8f5e__0 
            = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue
            [2U];
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_h73829ee7__0 
            = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue
            [2U];
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v11 
            = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0;
        vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v11 = 1U;
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v12 
            = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_h66ba8f5e__0;
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue__v12 
            = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_h73829ee7__0;
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0 
            = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue
            [2U];
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_h66ba8f5e__0 
            = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue
            [3U];
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_h73829ee7__0 
            = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue
            [3U];
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v12 
            = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0;
        vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v12 = 1U;
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v13 
            = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_h66ba8f5e__0;
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue__v13 
            = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_h73829ee7__0;
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0 
            = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue
            [3U];
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_h66ba8f5e__0 
            = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue
            [4U];
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_h73829ee7__0 
            = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue
            [4U];
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v13 
            = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0;
        vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v13 = 1U;
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v14 
            = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_h66ba8f5e__0;
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue__v14 
            = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_h73829ee7__0;
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0 
            = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue
            [4U];
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_h66ba8f5e__0 
            = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue
            [5U];
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_h73829ee7__0 
            = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue
            [5U];
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v14 
            = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0;
        vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v14 = 1U;
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v15 
            = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_h66ba8f5e__0;
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue__v15 
            = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_h73829ee7__0;
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0 
            = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue
            [5U];
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_h66ba8f5e__0 
            = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue
            [6U];
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_h73829ee7__0 
            = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue
            [6U];
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v15 
            = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0;
        vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v15 = 1U;
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v16 
            = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_h66ba8f5e__0;
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue__v16 
            = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_h73829ee7__0;
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0 
            = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue
            [6U];
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_h66ba8f5e__0 
            = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue
            [7U];
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_h73829ee7__0 
            = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue
            [7U];
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v16 
            = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0;
        vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v16 = 1U;
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v17 
            = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_h66ba8f5e__0;
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue__v17 
            = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_h73829ee7__0;
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0 
            = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue
            [7U];
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_h66ba8f5e__0 
            = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue
            [8U];
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_h73829ee7__0 
            = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue
            [8U];
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v17 
            = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0;
        vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v17 = 1U;
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v18 
            = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_h66ba8f5e__0;
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue__v18 
            = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_h73829ee7__0;
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0 
            = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue
            [8U];
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_h66ba8f5e__0 
            = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue
            [9U];
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_h73829ee7__0 
            = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue
            [9U];
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v18 
            = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0;
        vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v18 = 1U;
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v19 
            = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_h66ba8f5e__0;
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue__v19 
            = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_h73829ee7__0;
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0 
            = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue
            [9U];
        vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v20 = 1U;
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v19 
            = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0;
    }
    if ((((IData)(vlSelf->top__DOT__xpixel_wire) == 
          vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue
          [0U]) & ((IData)(vlSelf->top__DOT__ypixel_wire) 
                   == vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue
                   [0U]))) {
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_h66ba8f5e__0 
            = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue
            [1U];
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_h73829ee7__0 
            = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue
            [1U];
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__unnamedblk3__DOT__i = 9U;
        vlSelf->__Vdly__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__counter 
            = (0xfU & ((IData)(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__counter) 
                       - (IData)(1U)));
        vlSelf->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__queue_block__colour_o 
            = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue
            [0U];
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0 
            = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue
            [1U];
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v11 
            = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_h66ba8f5e__0;
        vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v11 = 1U;
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue__v11 
            = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_h73829ee7__0;
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_h66ba8f5e__0 
            = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue
            [2U];
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_h73829ee7__0 
            = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue
            [2U];
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v11 
            = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0;
        vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v11 = 1U;
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v12 
            = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_h66ba8f5e__0;
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue__v12 
            = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_h73829ee7__0;
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0 
            = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue
            [2U];
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_h66ba8f5e__0 
            = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue
            [3U];
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_h73829ee7__0 
            = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue
            [3U];
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v12 
            = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0;
        vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v12 = 1U;
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v13 
            = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_h66ba8f5e__0;
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue__v13 
            = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_h73829ee7__0;
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0 
            = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue
            [3U];
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_h66ba8f5e__0 
            = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue
            [4U];
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_h73829ee7__0 
            = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue
            [4U];
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v13 
            = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0;
        vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v13 = 1U;
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v14 
            = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_h66ba8f5e__0;
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue__v14 
            = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_h73829ee7__0;
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0 
            = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue
            [4U];
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_h66ba8f5e__0 
            = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue
            [5U];
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_h73829ee7__0 
            = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue
            [5U];
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v14 
            = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0;
        vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v14 = 1U;
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v15 
            = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_h66ba8f5e__0;
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue__v15 
            = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_h73829ee7__0;
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0 
            = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue
            [5U];
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_h66ba8f5e__0 
            = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue
            [6U];
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_h73829ee7__0 
            = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue
            [6U];
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v15 
            = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0;
        vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v15 = 1U;
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v16 
            = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_h66ba8f5e__0;
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue__v16 
            = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_h73829ee7__0;
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0 
            = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue
            [6U];
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_h66ba8f5e__0 
            = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue
            [7U];
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_h73829ee7__0 
            = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue
            [7U];
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v16 
            = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0;
        vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v16 = 1U;
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v17 
            = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_h66ba8f5e__0;
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue__v17 
            = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_h73829ee7__0;
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0 
            = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue
            [7U];
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_h66ba8f5e__0 
            = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue
            [8U];
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_h73829ee7__0 
            = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue
            [8U];
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v17 
            = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0;
        vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v17 = 1U;
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v18 
            = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_h66ba8f5e__0;
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue__v18 
            = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_h73829ee7__0;
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0 
            = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue
            [8U];
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_h66ba8f5e__0 
            = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue
            [9U];
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_h73829ee7__0 
            = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue
            [9U];
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v18 
            = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0;
        vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v18 = 1U;
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v19 
            = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_h66ba8f5e__0;
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue__v19 
            = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_h73829ee7__0;
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0 
            = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue
            [9U];
        vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v20 = 1U;
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v19 
            = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0;
    }
    if ((((IData)(vlSelf->top__DOT__xpixel_wire) == 
          vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue
          [0U]) & ((IData)(vlSelf->top__DOT__ypixel_wire) 
                   == vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue
                   [0U]))) {
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_h66ba8f5e__0 
            = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue
            [1U];
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_h73829ee7__0 
            = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue
            [1U];
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__unnamedblk3__DOT__i = 9U;
        vlSelf->__Vdly__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__counter 
            = (0xfU & ((IData)(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__counter) 
                       - (IData)(1U)));
        vlSelf->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__queue_block__colour_o 
            = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue
            [0U];
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0 
            = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue
            [1U];
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v11 
            = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_h66ba8f5e__0;
        vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v11 = 1U;
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue__v11 
            = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_h73829ee7__0;
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_h66ba8f5e__0 
            = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue
            [2U];
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_h73829ee7__0 
            = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue
            [2U];
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v11 
            = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0;
        vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v11 = 1U;
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v12 
            = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_h66ba8f5e__0;
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue__v12 
            = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_h73829ee7__0;
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0 
            = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue
            [2U];
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_h66ba8f5e__0 
            = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue
            [3U];
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_h73829ee7__0 
            = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue
            [3U];
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v12 
            = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0;
        vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v12 = 1U;
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v13 
            = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_h66ba8f5e__0;
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue__v13 
            = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_h73829ee7__0;
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0 
            = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue
            [3U];
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_h66ba8f5e__0 
            = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue
            [4U];
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_h73829ee7__0 
            = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue
            [4U];
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v13 
            = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0;
        vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v13 = 1U;
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v14 
            = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_h66ba8f5e__0;
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue__v14 
            = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_h73829ee7__0;
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0 
            = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue
            [4U];
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_h66ba8f5e__0 
            = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue
            [5U];
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_h73829ee7__0 
            = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue
            [5U];
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v14 
            = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0;
        vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v14 = 1U;
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v15 
            = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_h66ba8f5e__0;
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue__v15 
            = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_h73829ee7__0;
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0 
            = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue
            [5U];
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_h66ba8f5e__0 
            = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue
            [6U];
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_h73829ee7__0 
            = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue
            [6U];
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v15 
            = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0;
        vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v15 = 1U;
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v16 
            = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_h66ba8f5e__0;
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue__v16 
            = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_h73829ee7__0;
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0 
            = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue
            [6U];
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_h66ba8f5e__0 
            = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue
            [7U];
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_h73829ee7__0 
            = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue
            [7U];
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v16 
            = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0;
        vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v16 = 1U;
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v17 
            = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_h66ba8f5e__0;
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue__v17 
            = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_h73829ee7__0;
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0 
            = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue
            [7U];
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_h66ba8f5e__0 
            = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue
            [8U];
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_h73829ee7__0 
            = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue
            [8U];
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v17 
            = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0;
        vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v17 = 1U;
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v18 
            = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_h66ba8f5e__0;
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue__v18 
            = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_h73829ee7__0;
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0 
            = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue
            [8U];
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_h66ba8f5e__0 
            = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue
            [9U];
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_h73829ee7__0 
            = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue
            [9U];
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v18 
            = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0;
        vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v18 = 1U;
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v19 
            = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_h66ba8f5e__0;
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue__v19 
            = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_h73829ee7__0;
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0 
            = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue
            [9U];
        vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v20 = 1U;
        vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v19 
            = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0;
    }
    vlSelf->top__DOT__colour_bus_o[5U] = vlSelf->top__DOT____Vcellout__genblk1__BRA__5__KET____DOT__queue_block__colour_o;
    vlSelf->top__DOT__colour_bus_o[4U] = vlSelf->top__DOT____Vcellout__genblk1__BRA__4__KET____DOT__queue_block__colour_o;
    vlSelf->top__DOT__colour_bus_o[3U] = vlSelf->top__DOT____Vcellout__genblk1__BRA__3__KET____DOT__queue_block__colour_o;
    vlSelf->top__DOT__colour_bus_o[2U] = vlSelf->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__queue_block__colour_o;
    vlSelf->top__DOT__colour_bus_o[1U] = vlSelf->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__queue_block__colour_o;
    vlSelf->top__DOT__colour_bus_o[0U] = vlSelf->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__queue_block__colour_o;
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__5(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__5\n"); );
    // Body
    vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__counter 
        = vlSelf->__Vdly__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__counter;
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v0) {
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
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue[0U] = 0x3ffU;
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue[1U] = 0x3ffU;
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue[2U] = 0x3ffU;
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue[3U] = 0x3ffU;
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue[4U] = 0x3ffU;
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue[5U] = 0x3ffU;
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue[6U] = 0x3ffU;
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue[7U] = 0x3ffU;
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue[8U] = 0x3ffU;
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue[9U] = 0x3ffU;
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue[0U] = 0x3ffU;
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue[1U] = 0x3ffU;
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue[2U] = 0x3ffU;
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue[3U] = 0x3ffU;
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue[4U] = 0x3ffU;
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue[5U] = 0x3ffU;
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue[6U] = 0x3ffU;
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue[7U] = 0x3ffU;
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue[8U] = 0x3ffU;
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue[9U] = 0x3ffU;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v10) {
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue[vlSelf->__Vdlyvdim0__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v10] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v10;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v11) {
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue[0U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v11;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v12) {
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue[1U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v12;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v13) {
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue[2U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v13;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v14) {
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue[3U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v14;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v15) {
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue[4U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v15;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v16) {
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue[5U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v16;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v17) {
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue[6U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v17;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue__v10) {
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue[vlSelf->__Vdlyvdim0__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue__v10] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue__v10;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue__v11) {
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue[0U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue__v11;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v11) {
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue[1U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue__v12;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v12) {
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue[2U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue__v13;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v13) {
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue[3U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue__v14;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v14) {
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue[4U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue__v15;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v15) {
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue[5U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue__v16;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v16) {
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue[6U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue__v17;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v17) {
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue[7U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue__v18;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v18) {
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue[7U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v18;
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue[8U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue__v19;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue__v10) {
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue[vlSelf->__Vdlyvdim0__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue__v10] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue__v10;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue__v11) {
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue[0U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue__v11;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v11) {
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue[1U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue__v12;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v12) {
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue[2U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue__v13;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v13) {
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue[3U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue__v14;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v14) {
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue[4U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue__v15;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v15) {
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue[5U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue__v16;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v16) {
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue[6U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue__v17;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v17) {
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue[7U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue__v18;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v18) {
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue[8U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue__v19;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue__v20) {
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue[8U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v19;
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue[9U] = 0x3ffU;
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue[9U] = 0x3ffU;
    }
    vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__counter 
        = vlSelf->__Vdly__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__counter;
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v0) {
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
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue[0U] = 0x3ffU;
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue[1U] = 0x3ffU;
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue[2U] = 0x3ffU;
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue[3U] = 0x3ffU;
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue[4U] = 0x3ffU;
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue[5U] = 0x3ffU;
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue[6U] = 0x3ffU;
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue[7U] = 0x3ffU;
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue[8U] = 0x3ffU;
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue[9U] = 0x3ffU;
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue[0U] = 0x3ffU;
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue[1U] = 0x3ffU;
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue[2U] = 0x3ffU;
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue[3U] = 0x3ffU;
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue[4U] = 0x3ffU;
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue[5U] = 0x3ffU;
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue[6U] = 0x3ffU;
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue[7U] = 0x3ffU;
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue[8U] = 0x3ffU;
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue[9U] = 0x3ffU;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v10) {
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue[vlSelf->__Vdlyvdim0__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v10] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v10;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v11) {
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue[0U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v11;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v12) {
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue[1U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v12;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v13) {
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue[2U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v13;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v14) {
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue[3U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v14;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v15) {
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue[4U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v15;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v16) {
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue[5U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v16;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v17) {
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue[6U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v17;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue__v10) {
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue[vlSelf->__Vdlyvdim0__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue__v10] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue__v10;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue__v11) {
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue[0U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue__v11;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v11) {
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue[1U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue__v12;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v12) {
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue[2U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue__v13;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v13) {
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue[3U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue__v14;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v14) {
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue[4U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue__v15;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v15) {
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue[5U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue__v16;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v16) {
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue[6U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue__v17;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v17) {
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue[7U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue__v18;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v18) {
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue[7U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v18;
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue[8U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue__v19;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue__v10) {
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue[vlSelf->__Vdlyvdim0__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue__v10] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue__v10;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue__v11) {
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue[0U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue__v11;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v11) {
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue[1U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue__v12;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v12) {
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue[2U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue__v13;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v13) {
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue[3U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue__v14;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v14) {
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue[4U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue__v15;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v15) {
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue[5U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue__v16;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v16) {
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue[6U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue__v17;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v17) {
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue[7U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue__v18;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v18) {
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue[8U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue__v19;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue__v20) {
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue[8U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v19;
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue[9U] = 0x3ffU;
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue[9U] = 0x3ffU;
    }
    vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__counter 
        = vlSelf->__Vdly__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__counter;
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v0) {
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
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue[0U] = 0x3ffU;
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue[1U] = 0x3ffU;
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue[2U] = 0x3ffU;
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue[3U] = 0x3ffU;
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue[4U] = 0x3ffU;
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue[5U] = 0x3ffU;
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue[6U] = 0x3ffU;
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue[7U] = 0x3ffU;
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue[8U] = 0x3ffU;
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue[9U] = 0x3ffU;
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue[0U] = 0x3ffU;
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue[1U] = 0x3ffU;
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue[2U] = 0x3ffU;
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue[3U] = 0x3ffU;
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue[4U] = 0x3ffU;
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue[5U] = 0x3ffU;
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue[6U] = 0x3ffU;
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue[7U] = 0x3ffU;
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue[8U] = 0x3ffU;
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue[9U] = 0x3ffU;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v10) {
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue[vlSelf->__Vdlyvdim0__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v10] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v10;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v11) {
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue[0U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v11;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v12) {
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue[1U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v12;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v13) {
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue[2U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v13;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v14) {
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue[3U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v14;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v15) {
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue[4U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v15;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v16) {
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue[5U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v16;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v17) {
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue[6U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v17;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue__v10) {
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue[vlSelf->__Vdlyvdim0__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue__v10] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue__v10;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue__v11) {
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue[0U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue__v11;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v11) {
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue[1U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue__v12;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v12) {
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue[2U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue__v13;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v13) {
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue[3U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue__v14;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v14) {
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue[4U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue__v15;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v15) {
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue[5U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue__v16;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v16) {
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue[6U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue__v17;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v17) {
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue[7U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue__v18;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v18) {
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue[7U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v18;
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue[8U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue__v19;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue__v10) {
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue[vlSelf->__Vdlyvdim0__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue__v10] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue__v10;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue__v11) {
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue[0U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue__v11;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v11) {
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue[1U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue__v12;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v12) {
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue[2U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue__v13;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v13) {
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue[3U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue__v14;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v14) {
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue[4U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue__v15;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v15) {
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue[5U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue__v16;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v16) {
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue[6U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue__v17;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v17) {
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue[7U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue__v18;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v18) {
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue[8U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue__v19;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue__v20) {
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue[8U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v19;
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue[9U] = 0x3ffU;
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue[9U] = 0x3ffU;
    }
    vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__counter 
        = vlSelf->__Vdly__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__counter;
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v0) {
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
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[0U] = 0x3ffU;
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[1U] = 0x3ffU;
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[2U] = 0x3ffU;
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[3U] = 0x3ffU;
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[4U] = 0x3ffU;
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[5U] = 0x3ffU;
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[6U] = 0x3ffU;
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[7U] = 0x3ffU;
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[8U] = 0x3ffU;
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[9U] = 0x3ffU;
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[0U] = 0x3ffU;
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[1U] = 0x3ffU;
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[2U] = 0x3ffU;
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[3U] = 0x3ffU;
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[4U] = 0x3ffU;
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[5U] = 0x3ffU;
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[6U] = 0x3ffU;
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[7U] = 0x3ffU;
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[8U] = 0x3ffU;
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[9U] = 0x3ffU;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v10) {
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[vlSelf->__Vdlyvdim0__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v10] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v10;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v11) {
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[0U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v11;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v12) {
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[1U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v12;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v13) {
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[2U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v13;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v14) {
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[3U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v14;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v15) {
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[4U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v15;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v16) {
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[5U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v16;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v17) {
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[6U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v17;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue__v10) {
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[vlSelf->__Vdlyvdim0__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue__v10] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue__v10;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v11) {
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[0U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue__v11;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v11) {
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[1U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue__v12;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v12) {
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[2U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue__v13;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v13) {
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[3U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue__v14;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v14) {
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[4U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue__v15;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v15) {
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[5U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue__v16;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v16) {
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[6U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue__v17;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v17) {
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[7U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue__v18;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v18) {
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[7U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v18;
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[8U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue__v19;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v10) {
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[vlSelf->__Vdlyvdim0__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v10] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v10;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v11) {
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[0U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v11;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v11) {
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[1U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v12;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v12) {
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[2U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v13;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v13) {
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[3U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v14;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v14) {
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[4U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v15;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v15) {
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[5U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v16;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v16) {
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[6U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v17;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v17) {
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[7U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v18;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v18) {
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[8U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v19;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v20) {
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[8U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v19;
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[9U] = 0x3ffU;
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[9U] = 0x3ffU;
    }
    vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__counter 
        = vlSelf->__Vdly__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__counter;
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v0) {
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
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[0U] = 0x3ffU;
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[1U] = 0x3ffU;
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[2U] = 0x3ffU;
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[3U] = 0x3ffU;
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[4U] = 0x3ffU;
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[5U] = 0x3ffU;
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[6U] = 0x3ffU;
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[7U] = 0x3ffU;
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[8U] = 0x3ffU;
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[9U] = 0x3ffU;
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[0U] = 0x3ffU;
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[1U] = 0x3ffU;
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[2U] = 0x3ffU;
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[3U] = 0x3ffU;
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[4U] = 0x3ffU;
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[5U] = 0x3ffU;
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[6U] = 0x3ffU;
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[7U] = 0x3ffU;
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[8U] = 0x3ffU;
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[9U] = 0x3ffU;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v10) {
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[vlSelf->__Vdlyvdim0__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v10] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v10;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v11) {
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[0U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v11;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v12) {
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[1U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v12;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v13) {
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[2U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v13;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v14) {
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[3U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v14;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v15) {
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[4U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v15;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v16) {
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[5U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v16;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v17) {
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[6U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v17;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue__v10) {
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[vlSelf->__Vdlyvdim0__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue__v10] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue__v10;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v11) {
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[0U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue__v11;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v11) {
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[1U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue__v12;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v12) {
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[2U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue__v13;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v13) {
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[3U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue__v14;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v14) {
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[4U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue__v15;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v15) {
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[5U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue__v16;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v16) {
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[6U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue__v17;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v17) {
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[7U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue__v18;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v18) {
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[7U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v18;
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[8U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue__v19;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v10) {
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[vlSelf->__Vdlyvdim0__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v10] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v10;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v11) {
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[0U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v11;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v11) {
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[1U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v12;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v12) {
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[2U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v13;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v13) {
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[3U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v14;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v14) {
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[4U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v15;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v15) {
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[5U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v16;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v16) {
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[6U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v17;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v17) {
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[7U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v18;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v18) {
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[8U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v19;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v20) {
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[8U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v19;
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[9U] = 0x3ffU;
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[9U] = 0x3ffU;
    }
    vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__counter 
        = vlSelf->__Vdly__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__counter;
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v0) {
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
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[0U] = 0x3ffU;
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[1U] = 0x3ffU;
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[2U] = 0x3ffU;
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[3U] = 0x3ffU;
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[4U] = 0x3ffU;
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[5U] = 0x3ffU;
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[6U] = 0x3ffU;
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[7U] = 0x3ffU;
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[8U] = 0x3ffU;
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[9U] = 0x3ffU;
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[0U] = 0x3ffU;
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[1U] = 0x3ffU;
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[2U] = 0x3ffU;
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[3U] = 0x3ffU;
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[4U] = 0x3ffU;
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[5U] = 0x3ffU;
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[6U] = 0x3ffU;
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[7U] = 0x3ffU;
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[8U] = 0x3ffU;
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[9U] = 0x3ffU;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v10) {
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[vlSelf->__Vdlyvdim0__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v10] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v10;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v11) {
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[0U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v11;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v12) {
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[1U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v12;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v13) {
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[2U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v13;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v14) {
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[3U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v14;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v15) {
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[4U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v15;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v16) {
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[5U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v16;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v17) {
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[6U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v17;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue__v10) {
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[vlSelf->__Vdlyvdim0__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue__v10] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue__v10;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v11) {
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[0U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue__v11;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v11) {
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[1U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue__v12;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v12) {
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[2U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue__v13;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v13) {
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[3U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue__v14;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v14) {
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[4U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue__v15;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v15) {
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[5U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue__v16;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v16) {
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[6U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue__v17;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v17) {
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[7U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue__v18;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v18) {
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[7U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v18;
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[8U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue__v19;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v10) {
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[vlSelf->__Vdlyvdim0__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v10] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v10;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v11) {
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[0U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v11;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v11) {
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[1U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v12;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v12) {
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[2U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v13;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v13) {
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[3U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v14;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v14) {
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[4U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v15;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v15) {
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[5U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v16;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v16) {
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[6U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v17;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v17) {
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[7U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v18;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v18) {
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[8U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v19;
    }
    if (vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v20) {
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[8U] 
            = vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v19;
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[9U] = 0x3ffU;
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[9U] = 0x3ffU;
    }
    vlSelf->top__DOT____Vcellout__genblk1__BRA__5__KET____DOT__queue_block__full_queue 
        = (0xaU == (IData)(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__counter));
    vlSelf->top__DOT____Vcellout__genblk1__BRA__5__KET____DOT__queue_block__en = 1U;
    if ((0xaU != (IData)(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__counter))) {
        if ((0U == (IData)(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__counter))) {
            vlSelf->top__DOT____Vcellout__genblk1__BRA__5__KET____DOT__queue_block__en = 0U;
        }
    }
    vlSelf->top__DOT____Vcellout__genblk1__BRA__5__KET____DOT__queue_block__match 
        = (((IData)(vlSelf->top__DOT__xpixel_wire) 
            == vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue
            [0U]) & ((IData)(vlSelf->top__DOT__ypixel_wire) 
                     == vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue
                     [0U]));
    vlSelf->top__DOT____Vcellout__genblk1__BRA__4__KET____DOT__queue_block__full_queue 
        = (0xaU == (IData)(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__counter));
    vlSelf->top__DOT____Vcellout__genblk1__BRA__4__KET____DOT__queue_block__en = 1U;
    if ((0xaU != (IData)(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__counter))) {
        if ((0U == (IData)(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__counter))) {
            vlSelf->top__DOT____Vcellout__genblk1__BRA__4__KET____DOT__queue_block__en = 0U;
        }
    }
    vlSelf->top__DOT____Vcellout__genblk1__BRA__4__KET____DOT__queue_block__match 
        = (((IData)(vlSelf->top__DOT__xpixel_wire) 
            == vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue
            [0U]) & ((IData)(vlSelf->top__DOT__ypixel_wire) 
                     == vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue
                     [0U]));
    vlSelf->top__DOT____Vcellout__genblk1__BRA__3__KET____DOT__queue_block__full_queue 
        = (0xaU == (IData)(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__counter));
    vlSelf->top__DOT____Vcellout__genblk1__BRA__3__KET____DOT__queue_block__en = 1U;
    if ((0xaU != (IData)(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__counter))) {
        if ((0U == (IData)(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__counter))) {
            vlSelf->top__DOT____Vcellout__genblk1__BRA__3__KET____DOT__queue_block__en = 0U;
        }
    }
    vlSelf->top__DOT____Vcellout__genblk1__BRA__3__KET____DOT__queue_block__match 
        = (((IData)(vlSelf->top__DOT__xpixel_wire) 
            == vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue
            [0U]) & ((IData)(vlSelf->top__DOT__ypixel_wire) 
                     == vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue
                     [0U]));
    vlSelf->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__queue_block__full_queue 
        = (0xaU == (IData)(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__counter));
    vlSelf->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__queue_block__en = 1U;
    if ((0xaU != (IData)(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__counter))) {
        if ((0U == (IData)(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__counter))) {
            vlSelf->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__queue_block__en = 0U;
        }
    }
    vlSelf->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__queue_block__match 
        = (((IData)(vlSelf->top__DOT__xpixel_wire) 
            == vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue
            [0U]) & ((IData)(vlSelf->top__DOT__ypixel_wire) 
                     == vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue
                     [0U]));
    vlSelf->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__queue_block__full_queue 
        = (0xaU == (IData)(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__counter));
    vlSelf->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__queue_block__en = 1U;
    if ((0xaU != (IData)(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__counter))) {
        if ((0U == (IData)(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__counter))) {
            vlSelf->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__queue_block__en = 0U;
        }
    }
    vlSelf->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__queue_block__match 
        = (((IData)(vlSelf->top__DOT__xpixel_wire) 
            == vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue
            [0U]) & ((IData)(vlSelf->top__DOT__ypixel_wire) 
                     == vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue
                     [0U]));
    vlSelf->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__queue_block__full_queue 
        = (0xaU == (IData)(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__counter));
    vlSelf->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__queue_block__en = 1U;
    if ((0xaU != (IData)(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__counter))) {
        if ((0U == (IData)(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__counter))) {
            vlSelf->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__queue_block__en = 0U;
        }
    }
    vlSelf->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__queue_block__match 
        = (((IData)(vlSelf->top__DOT__xpixel_wire) 
            == vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue
            [0U]) & ((IData)(vlSelf->top__DOT__ypixel_wire) 
                     == vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue
                     [0U]));
    vlSelf->top__DOT__full_queue_bus = ((0x1fU & (IData)(vlSelf->top__DOT__full_queue_bus)) 
                                        | ((IData)(vlSelf->top__DOT____Vcellout__genblk1__BRA__5__KET____DOT__queue_block__full_queue) 
                                           << 5U));
    vlSelf->top__DOT__en_bus = ((0x1fU & (IData)(vlSelf->top__DOT__en_bus)) 
                                | ((IData)(vlSelf->top__DOT____Vcellout__genblk1__BRA__5__KET____DOT__queue_block__en) 
                                   << 5U));
    vlSelf->top__DOT__match_bus = ((0x1fU & (IData)(vlSelf->top__DOT__match_bus)) 
                                   | ((IData)(vlSelf->top__DOT____Vcellout__genblk1__BRA__5__KET____DOT__queue_block__match) 
                                      << 5U));
    vlSelf->top__DOT__full_queue_bus = ((0x2fU & (IData)(vlSelf->top__DOT__full_queue_bus)) 
                                        | ((IData)(vlSelf->top__DOT____Vcellout__genblk1__BRA__4__KET____DOT__queue_block__full_queue) 
                                           << 4U));
    vlSelf->top__DOT__en_bus = ((0x2fU & (IData)(vlSelf->top__DOT__en_bus)) 
                                | ((IData)(vlSelf->top__DOT____Vcellout__genblk1__BRA__4__KET____DOT__queue_block__en) 
                                   << 4U));
    vlSelf->top__DOT__match_bus = ((0x2fU & (IData)(vlSelf->top__DOT__match_bus)) 
                                   | ((IData)(vlSelf->top__DOT____Vcellout__genblk1__BRA__4__KET____DOT__queue_block__match) 
                                      << 4U));
    vlSelf->top__DOT__full_queue_bus = ((0x37U & (IData)(vlSelf->top__DOT__full_queue_bus)) 
                                        | ((IData)(vlSelf->top__DOT____Vcellout__genblk1__BRA__3__KET____DOT__queue_block__full_queue) 
                                           << 3U));
    vlSelf->top__DOT__en_bus = ((0x37U & (IData)(vlSelf->top__DOT__en_bus)) 
                                | ((IData)(vlSelf->top__DOT____Vcellout__genblk1__BRA__3__KET____DOT__queue_block__en) 
                                   << 3U));
    vlSelf->top__DOT__match_bus = ((0x37U & (IData)(vlSelf->top__DOT__match_bus)) 
                                   | ((IData)(vlSelf->top__DOT____Vcellout__genblk1__BRA__3__KET____DOT__queue_block__match) 
                                      << 3U));
    vlSelf->top__DOT__full_queue_bus = ((0x3bU & (IData)(vlSelf->top__DOT__full_queue_bus)) 
                                        | ((IData)(vlSelf->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__queue_block__full_queue) 
                                           << 2U));
    vlSelf->top__DOT__en_bus = ((0x3bU & (IData)(vlSelf->top__DOT__en_bus)) 
                                | ((IData)(vlSelf->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__queue_block__en) 
                                   << 2U));
    vlSelf->top__DOT__match_bus = ((0x3bU & (IData)(vlSelf->top__DOT__match_bus)) 
                                   | ((IData)(vlSelf->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__queue_block__match) 
                                      << 2U));
    vlSelf->top__DOT__full_queue_bus = ((0x3dU & (IData)(vlSelf->top__DOT__full_queue_bus)) 
                                        | ((IData)(vlSelf->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__queue_block__full_queue) 
                                           << 1U));
    vlSelf->top__DOT__en_bus = ((0x3dU & (IData)(vlSelf->top__DOT__en_bus)) 
                                | ((IData)(vlSelf->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__queue_block__en) 
                                   << 1U));
    vlSelf->top__DOT__match_bus = ((0x3dU & (IData)(vlSelf->top__DOT__match_bus)) 
                                   | ((IData)(vlSelf->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__queue_block__match) 
                                      << 1U));
    vlSelf->top__DOT__full_queue_bus = ((0x3eU & (IData)(vlSelf->top__DOT__full_queue_bus)) 
                                        | (IData)(vlSelf->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__queue_block__full_queue));
    vlSelf->top__DOT__en_bus = ((0x3eU & (IData)(vlSelf->top__DOT__en_bus)) 
                                | (IData)(vlSelf->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__queue_block__en));
    vlSelf->top__DOT__match_bus = ((0x3eU & (IData)(vlSelf->top__DOT__match_bus)) 
                                   | (IData)(vlSelf->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__queue_block__match));
    if ((1U & (IData)(vlSelf->top__DOT__match_bus))) {
        vlSelf->top__DOT__j = 0U;
    }
    if ((2U & (IData)(vlSelf->top__DOT__match_bus))) {
        vlSelf->top__DOT__j = 1U;
    }
    if ((4U & (IData)(vlSelf->top__DOT__match_bus))) {
        vlSelf->top__DOT__j = 2U;
    }
    if ((8U & (IData)(vlSelf->top__DOT__match_bus))) {
        vlSelf->top__DOT__j = 3U;
    }
    if ((0x10U & (IData)(vlSelf->top__DOT__match_bus))) {
        vlSelf->top__DOT__j = 4U;
    }
    if ((0x20U & (IData)(vlSelf->top__DOT__match_bus))) {
        vlSelf->top__DOT__j = 5U;
    }
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
    if (VL_UNLIKELY((vlSelf->zoom & 0xfc00U))) {
        Verilated::overWidthError("zoom");}
    if (VL_UNLIKELY((vlSelf->x_offset & 0xfc00U))) {
        Verilated::overWidthError("x_offset");}
    if (VL_UNLIKELY((vlSelf->y_offset & 0xfc00U))) {
        Verilated::overWidthError("y_offset");}
}
#endif  // VL_DEBUG
