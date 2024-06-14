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
    SData/*9:0*/ top__DOT__distributor__DOT____Vlvbound_h252f5705__0;
    SData/*9:0*/ top__DOT__distributor__DOT____Vlvbound_hb286bc67__0;
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
        vlSelf->first = 1U;
        __Vdly__top__DOT__combinator_block__DOT__xpixel = 0U;
        __Vdly__top__DOT__combinator_block__DOT__ypixel = 0U;
        __Vdly__top__DOT__distributor__DOT__x0 = 0U;
        __Vdly__top__DOT__distributor__DOT__y0 = 0U;
    } else if (((0xfffU == (IData)(vlSelf->top__DOT__fin_bus)) 
                | (IData)(vlSelf->reset))) {
        __Vdly__top__DOT__distributor__DOT__x0 = (0x3ffU 
                                                  & VL_MODDIV_III(32, 
                                                                  ((IData)(0xcU) 
                                                                   + (IData)(vlSelf->top__DOT__distributor__DOT__x0)), (IData)(0x280U)));
        __Vdly__top__DOT__distributor__DOT__y0 = (0x3ffU 
                                                  & VL_MODDIV_III(32, 
                                                                  ((IData)(vlSelf->top__DOT__distributor__DOT__y0) 
                                                                   + 
                                                                   VL_DIV_III(32, 
                                                                              ((IData)(0xcU) 
                                                                               + (IData)(vlSelf->top__DOT__distributor__DOT__x0)), (IData)(0x280U))), (IData)(0x1e0U)));
    }
    if (((0xfffU == (IData)(vlSelf->top__DOT__en_bus)) 
         & (IData)(vlSelf->ready))) {
        vlSelf->valid = 1U;
        vlSelf->top__DOT__colour_o_wire = ((0xbU >= 
                                            (0xfU & vlSelf->top__DOT__j))
                                            ? vlSelf->top__DOT__colour_bus_o
                                           [(0xfU & vlSelf->top__DOT__j)]
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
    vlSelf->b = (0xffU & (vlSelf->top__DOT__colour_o_wire 
                          >> 0x10U));
    vlSelf->g = (0xffU & (vlSelf->top__DOT__colour_o_wire 
                          >> 8U));
    vlSelf->r = (0xffU & vlSelf->top__DOT__colour_o_wire);
    top__DOT__distributor__DOT____Vlvbound_h252f5705__0 
        = (0x3ffU & VL_MODDIV_III(32, (IData)(vlSelf->top__DOT__distributor__DOT__x0), (IData)(0x280U)));
    vlSelf->top__DOT____Vcellout__distributor__x[0U] 
        = top__DOT__distributor__DOT____Vlvbound_h252f5705__0;
    top__DOT__distributor__DOT____Vlvbound_h252f5705__0 
        = (0x3ffU & VL_MODDIV_III(32, ((IData)(1U) 
                                       + (IData)(vlSelf->top__DOT__distributor__DOT__x0)), (IData)(0x280U)));
    vlSelf->top__DOT____Vcellout__distributor__x[1U] 
        = top__DOT__distributor__DOT____Vlvbound_h252f5705__0;
    top__DOT__distributor__DOT____Vlvbound_h252f5705__0 
        = (0x3ffU & VL_MODDIV_III(32, ((IData)(2U) 
                                       + (IData)(vlSelf->top__DOT__distributor__DOT__x0)), (IData)(0x280U)));
    vlSelf->top__DOT____Vcellout__distributor__x[2U] 
        = top__DOT__distributor__DOT____Vlvbound_h252f5705__0;
    top__DOT__distributor__DOT____Vlvbound_h252f5705__0 
        = (0x3ffU & VL_MODDIV_III(32, ((IData)(3U) 
                                       + (IData)(vlSelf->top__DOT__distributor__DOT__x0)), (IData)(0x280U)));
    vlSelf->top__DOT____Vcellout__distributor__x[3U] 
        = top__DOT__distributor__DOT____Vlvbound_h252f5705__0;
    top__DOT__distributor__DOT____Vlvbound_h252f5705__0 
        = (0x3ffU & VL_MODDIV_III(32, ((IData)(4U) 
                                       + (IData)(vlSelf->top__DOT__distributor__DOT__x0)), (IData)(0x280U)));
    vlSelf->top__DOT____Vcellout__distributor__x[4U] 
        = top__DOT__distributor__DOT____Vlvbound_h252f5705__0;
    top__DOT__distributor__DOT____Vlvbound_h252f5705__0 
        = (0x3ffU & VL_MODDIV_III(32, ((IData)(5U) 
                                       + (IData)(vlSelf->top__DOT__distributor__DOT__x0)), (IData)(0x280U)));
    vlSelf->top__DOT____Vcellout__distributor__x[5U] 
        = top__DOT__distributor__DOT____Vlvbound_h252f5705__0;
    top__DOT__distributor__DOT____Vlvbound_h252f5705__0 
        = (0x3ffU & VL_MODDIV_III(32, ((IData)(6U) 
                                       + (IData)(vlSelf->top__DOT__distributor__DOT__x0)), (IData)(0x280U)));
    vlSelf->top__DOT____Vcellout__distributor__x[6U] 
        = top__DOT__distributor__DOT____Vlvbound_h252f5705__0;
    top__DOT__distributor__DOT____Vlvbound_h252f5705__0 
        = (0x3ffU & VL_MODDIV_III(32, ((IData)(7U) 
                                       + (IData)(vlSelf->top__DOT__distributor__DOT__x0)), (IData)(0x280U)));
    vlSelf->top__DOT____Vcellout__distributor__x[7U] 
        = top__DOT__distributor__DOT____Vlvbound_h252f5705__0;
    top__DOT__distributor__DOT____Vlvbound_h252f5705__0 
        = (0x3ffU & VL_MODDIV_III(32, ((IData)(8U) 
                                       + (IData)(vlSelf->top__DOT__distributor__DOT__x0)), (IData)(0x280U)));
    vlSelf->top__DOT____Vcellout__distributor__x[8U] 
        = top__DOT__distributor__DOT____Vlvbound_h252f5705__0;
    top__DOT__distributor__DOT____Vlvbound_h252f5705__0 
        = (0x3ffU & VL_MODDIV_III(32, ((IData)(9U) 
                                       + (IData)(vlSelf->top__DOT__distributor__DOT__x0)), (IData)(0x280U)));
    vlSelf->top__DOT____Vcellout__distributor__x[9U] 
        = top__DOT__distributor__DOT____Vlvbound_h252f5705__0;
    top__DOT__distributor__DOT____Vlvbound_h252f5705__0 
        = (0x3ffU & VL_MODDIV_III(32, ((IData)(0xaU) 
                                       + (IData)(vlSelf->top__DOT__distributor__DOT__x0)), (IData)(0x280U)));
    vlSelf->top__DOT____Vcellout__distributor__x[0xaU] 
        = top__DOT__distributor__DOT____Vlvbound_h252f5705__0;
    top__DOT__distributor__DOT____Vlvbound_h252f5705__0 
        = (0x3ffU & VL_MODDIV_III(32, ((IData)(0xbU) 
                                       + (IData)(vlSelf->top__DOT__distributor__DOT__x0)), (IData)(0x280U)));
    vlSelf->top__DOT____Vcellout__distributor__x[0xbU] 
        = top__DOT__distributor__DOT____Vlvbound_h252f5705__0;
    top__DOT__distributor__DOT____Vlvbound_hb286bc67__0 
        = (0x3ffU & VL_MODDIV_III(32, ((IData)(vlSelf->top__DOT__distributor__DOT__y0) 
                                       + VL_DIV_III(32, (IData)(vlSelf->top__DOT__distributor__DOT__x0), (IData)(0x280U))), (IData)(0x1e0U)));
    vlSelf->top__DOT____Vcellout__distributor__y[0U] 
        = top__DOT__distributor__DOT____Vlvbound_hb286bc67__0;
    top__DOT__distributor__DOT____Vlvbound_hb286bc67__0 
        = (0x3ffU & VL_MODDIV_III(32, ((IData)(vlSelf->top__DOT__distributor__DOT__y0) 
                                       + VL_DIV_III(32, 
                                                    ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__distributor__DOT__x0)), (IData)(0x280U))), (IData)(0x1e0U)));
    vlSelf->top__DOT____Vcellout__distributor__y[1U] 
        = top__DOT__distributor__DOT____Vlvbound_hb286bc67__0;
    top__DOT__distributor__DOT____Vlvbound_hb286bc67__0 
        = (0x3ffU & VL_MODDIV_III(32, ((IData)(vlSelf->top__DOT__distributor__DOT__y0) 
                                       + VL_DIV_III(32, 
                                                    ((IData)(2U) 
                                                     + (IData)(vlSelf->top__DOT__distributor__DOT__x0)), (IData)(0x280U))), (IData)(0x1e0U)));
    vlSelf->top__DOT____Vcellout__distributor__y[2U] 
        = top__DOT__distributor__DOT____Vlvbound_hb286bc67__0;
    top__DOT__distributor__DOT____Vlvbound_hb286bc67__0 
        = (0x3ffU & VL_MODDIV_III(32, ((IData)(vlSelf->top__DOT__distributor__DOT__y0) 
                                       + VL_DIV_III(32, 
                                                    ((IData)(3U) 
                                                     + (IData)(vlSelf->top__DOT__distributor__DOT__x0)), (IData)(0x280U))), (IData)(0x1e0U)));
    vlSelf->top__DOT____Vcellout__distributor__y[3U] 
        = top__DOT__distributor__DOT____Vlvbound_hb286bc67__0;
    top__DOT__distributor__DOT____Vlvbound_hb286bc67__0 
        = (0x3ffU & VL_MODDIV_III(32, ((IData)(vlSelf->top__DOT__distributor__DOT__y0) 
                                       + VL_DIV_III(32, 
                                                    ((IData)(4U) 
                                                     + (IData)(vlSelf->top__DOT__distributor__DOT__x0)), (IData)(0x280U))), (IData)(0x1e0U)));
    vlSelf->top__DOT____Vcellout__distributor__y[4U] 
        = top__DOT__distributor__DOT____Vlvbound_hb286bc67__0;
    top__DOT__distributor__DOT____Vlvbound_hb286bc67__0 
        = (0x3ffU & VL_MODDIV_III(32, ((IData)(vlSelf->top__DOT__distributor__DOT__y0) 
                                       + VL_DIV_III(32, 
                                                    ((IData)(5U) 
                                                     + (IData)(vlSelf->top__DOT__distributor__DOT__x0)), (IData)(0x280U))), (IData)(0x1e0U)));
    vlSelf->top__DOT____Vcellout__distributor__y[5U] 
        = top__DOT__distributor__DOT____Vlvbound_hb286bc67__0;
    top__DOT__distributor__DOT____Vlvbound_hb286bc67__0 
        = (0x3ffU & VL_MODDIV_III(32, ((IData)(vlSelf->top__DOT__distributor__DOT__y0) 
                                       + VL_DIV_III(32, 
                                                    ((IData)(6U) 
                                                     + (IData)(vlSelf->top__DOT__distributor__DOT__x0)), (IData)(0x280U))), (IData)(0x1e0U)));
    vlSelf->top__DOT____Vcellout__distributor__y[6U] 
        = top__DOT__distributor__DOT____Vlvbound_hb286bc67__0;
    top__DOT__distributor__DOT____Vlvbound_hb286bc67__0 
        = (0x3ffU & VL_MODDIV_III(32, ((IData)(vlSelf->top__DOT__distributor__DOT__y0) 
                                       + VL_DIV_III(32, 
                                                    ((IData)(7U) 
                                                     + (IData)(vlSelf->top__DOT__distributor__DOT__x0)), (IData)(0x280U))), (IData)(0x1e0U)));
    vlSelf->top__DOT____Vcellout__distributor__y[7U] 
        = top__DOT__distributor__DOT____Vlvbound_hb286bc67__0;
    top__DOT__distributor__DOT____Vlvbound_hb286bc67__0 
        = (0x3ffU & VL_MODDIV_III(32, ((IData)(vlSelf->top__DOT__distributor__DOT__y0) 
                                       + VL_DIV_III(32, 
                                                    ((IData)(8U) 
                                                     + (IData)(vlSelf->top__DOT__distributor__DOT__x0)), (IData)(0x280U))), (IData)(0x1e0U)));
    vlSelf->top__DOT____Vcellout__distributor__y[8U] 
        = top__DOT__distributor__DOT____Vlvbound_hb286bc67__0;
    top__DOT__distributor__DOT____Vlvbound_hb286bc67__0 
        = (0x3ffU & VL_MODDIV_III(32, ((IData)(vlSelf->top__DOT__distributor__DOT__y0) 
                                       + VL_DIV_III(32, 
                                                    ((IData)(9U) 
                                                     + (IData)(vlSelf->top__DOT__distributor__DOT__x0)), (IData)(0x280U))), (IData)(0x1e0U)));
    vlSelf->top__DOT____Vcellout__distributor__y[9U] 
        = top__DOT__distributor__DOT____Vlvbound_hb286bc67__0;
    top__DOT__distributor__DOT____Vlvbound_hb286bc67__0 
        = (0x3ffU & VL_MODDIV_III(32, ((IData)(vlSelf->top__DOT__distributor__DOT__y0) 
                                       + VL_DIV_III(32, 
                                                    ((IData)(0xaU) 
                                                     + (IData)(vlSelf->top__DOT__distributor__DOT__x0)), (IData)(0x280U))), (IData)(0x1e0U)));
    vlSelf->top__DOT____Vcellout__distributor__y[0xaU] 
        = top__DOT__distributor__DOT____Vlvbound_hb286bc67__0;
    top__DOT__distributor__DOT____Vlvbound_hb286bc67__0 
        = (0x3ffU & VL_MODDIV_III(32, ((IData)(vlSelf->top__DOT__distributor__DOT__y0) 
                                       + VL_DIV_III(32, 
                                                    ((IData)(0xbU) 
                                                     + (IData)(vlSelf->top__DOT__distributor__DOT__x0)), (IData)(0x280U))), (IData)(0x1e0U)));
    vlSelf->top__DOT____Vcellout__distributor__y[0xbU] 
        = top__DOT__distributor__DOT____Vlvbound_hb286bc67__0;
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
    if (VL_UNLIKELY((vlSelf->iterations_max & 0xfc00U))) {
        Verilated::overWidthError("iterations_max");}
    if (VL_UNLIKELY((vlSelf->zoom & 0xfc00U))) {
        Verilated::overWidthError("zoom");}
    if (VL_UNLIKELY((vlSelf->x_offset & 0xfc00U))) {
        Verilated::overWidthError("x_offset");}
    if (VL_UNLIKELY((vlSelf->y_offset & 0xfc00U))) {
        Verilated::overWidthError("y_offset");}
}
#endif  // VL_DEBUG
