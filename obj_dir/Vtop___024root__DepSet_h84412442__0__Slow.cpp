// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___settle__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__0\n"); );
    // Init
    SData/*9:0*/ top__DOT__distributor__DOT____Vlvbound_h9811159c__0;
    SData/*9:0*/ top__DOT__distributor__DOT____Vlvbound_h803dbe04__0;
    IData/*23:0*/ top__DOT__lut_rom__DOT____Vlvbound_h5eb2d243__0;
    // Body
    vlSelf->r = (0xffU & vlSelf->top__DOT__colour_o_wire);
    vlSelf->g = (0xffU & (vlSelf->top__DOT__colour_o_wire 
                          >> 8U));
    vlSelf->b = (0xffU & (vlSelf->top__DOT__colour_o_wire 
                          >> 0x10U));
    vlSelf->top__DOT__colour_bus_o[0U] = vlSelf->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__queue_block__colour_o;
    vlSelf->top__DOT__colour_bus_o[1U] = vlSelf->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__queue_block__colour_o;
    vlSelf->top__DOT__colour_bus_o[2U] = vlSelf->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__queue_block__colour_o;
    vlSelf->top__DOT__colour_bus_o[3U] = vlSelf->top__DOT____Vcellout__genblk1__BRA__3__KET____DOT__queue_block__colour_o;
    vlSelf->top__DOT__colour_bus_o[4U] = vlSelf->top__DOT____Vcellout__genblk1__BRA__4__KET____DOT__queue_block__colour_o;
    vlSelf->top__DOT__colour_bus_o[5U] = vlSelf->top__DOT____Vcellout__genblk1__BRA__5__KET____DOT__queue_block__colour_o;
    vlSelf->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__queue_block__full_queue 
        = (0xaU == (IData)(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__counter));
    vlSelf->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__queue_block__full_queue 
        = (0xaU == (IData)(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__counter));
    vlSelf->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__queue_block__full_queue 
        = (0xaU == (IData)(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__counter));
    vlSelf->top__DOT____Vcellout__genblk1__BRA__3__KET____DOT__queue_block__full_queue 
        = (0xaU == (IData)(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__counter));
    vlSelf->top__DOT____Vcellout__genblk1__BRA__4__KET____DOT__queue_block__full_queue 
        = (0xaU == (IData)(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__counter));
    vlSelf->top__DOT____Vcellout__genblk1__BRA__5__KET____DOT__queue_block__full_queue 
        = (0xaU == (IData)(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__counter));
    vlSelf->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__queue_block__en = 1U;
    if ((0xaU != (IData)(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__counter))) {
        if ((0U == (IData)(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__counter))) {
            vlSelf->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__queue_block__en = 0U;
        }
    }
    vlSelf->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__queue_block__en = 1U;
    if ((0xaU != (IData)(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__counter))) {
        if ((0U == (IData)(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__counter))) {
            vlSelf->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__queue_block__en = 0U;
        }
    }
    vlSelf->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__queue_block__en = 1U;
    if ((0xaU != (IData)(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__counter))) {
        if ((0U == (IData)(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__counter))) {
            vlSelf->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__queue_block__en = 0U;
        }
    }
    vlSelf->top__DOT____Vcellout__genblk1__BRA__3__KET____DOT__queue_block__en = 1U;
    if ((0xaU != (IData)(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__counter))) {
        if ((0U == (IData)(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__counter))) {
            vlSelf->top__DOT____Vcellout__genblk1__BRA__3__KET____DOT__queue_block__en = 0U;
        }
    }
    vlSelf->top__DOT____Vcellout__genblk1__BRA__4__KET____DOT__queue_block__en = 1U;
    if ((0xaU != (IData)(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__counter))) {
        if ((0U == (IData)(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__counter))) {
            vlSelf->top__DOT____Vcellout__genblk1__BRA__4__KET____DOT__queue_block__en = 0U;
        }
    }
    vlSelf->top__DOT____Vcellout__genblk1__BRA__5__KET____DOT__queue_block__en = 1U;
    if ((0xaU != (IData)(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__counter))) {
        if ((0U == (IData)(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__counter))) {
            vlSelf->top__DOT____Vcellout__genblk1__BRA__5__KET____DOT__queue_block__en = 0U;
        }
    }
    vlSelf->top__DOT__iterations_bus[0U] = vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__curr_iterations;
    vlSelf->top__DOT__iterations_bus[1U] = vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__curr_iterations;
    vlSelf->top__DOT__iterations_bus[2U] = vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__curr_iterations;
    vlSelf->top__DOT__iterations_bus[3U] = vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__curr_iterations;
    vlSelf->top__DOT__iterations_bus[4U] = vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__curr_iterations;
    vlSelf->top__DOT__iterations_bus[5U] = vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__curr_iterations;
    vlSelf->top__DOT__ypixel_bus[0U] = vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.ypixel;
    vlSelf->top__DOT__xpixel_bus[0U] = vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.xpixel;
    vlSelf->top__DOT__ypixel_bus[1U] = vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.ypixel;
    vlSelf->top__DOT__xpixel_bus[1U] = vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.xpixel;
    vlSelf->top__DOT__ypixel_bus[2U] = vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.ypixel;
    vlSelf->top__DOT__xpixel_bus[2U] = vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.xpixel;
    vlSelf->top__DOT__ypixel_bus[3U] = vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.ypixel;
    vlSelf->top__DOT__xpixel_bus[3U] = vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.xpixel;
    vlSelf->top__DOT__ypixel_bus[4U] = vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.ypixel;
    vlSelf->top__DOT__xpixel_bus[4U] = vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.xpixel;
    vlSelf->top__DOT__ypixel_bus[5U] = vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.ypixel;
    vlSelf->top__DOT__xpixel_bus[5U] = vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.xpixel;
    vlSelf->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__queue_block__match 
        = (((IData)(vlSelf->top__DOT__xpixel_wire) 
            == vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue
            [0U]) & ((IData)(vlSelf->top__DOT__ypixel_wire) 
                     == vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue
                     [0U]));
    vlSelf->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__queue_block__match 
        = (((IData)(vlSelf->top__DOT__xpixel_wire) 
            == vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue
            [0U]) & ((IData)(vlSelf->top__DOT__ypixel_wire) 
                     == vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue
                     [0U]));
    vlSelf->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__queue_block__match 
        = (((IData)(vlSelf->top__DOT__xpixel_wire) 
            == vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue
            [0U]) & ((IData)(vlSelf->top__DOT__ypixel_wire) 
                     == vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue
                     [0U]));
    vlSelf->top__DOT____Vcellout__genblk1__BRA__3__KET____DOT__queue_block__match 
        = (((IData)(vlSelf->top__DOT__xpixel_wire) 
            == vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue
            [0U]) & ((IData)(vlSelf->top__DOT__ypixel_wire) 
                     == vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue
                     [0U]));
    vlSelf->top__DOT____Vcellout__genblk1__BRA__4__KET____DOT__queue_block__match 
        = (((IData)(vlSelf->top__DOT__xpixel_wire) 
            == vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue
            [0U]) & ((IData)(vlSelf->top__DOT__ypixel_wire) 
                     == vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue
                     [0U]));
    vlSelf->top__DOT____Vcellout__genblk1__BRA__5__KET____DOT__queue_block__match 
        = (((IData)(vlSelf->top__DOT__xpixel_wire) 
            == vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue
            [0U]) & ((IData)(vlSelf->top__DOT__ypixel_wire) 
                     == vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue
                     [0U]));
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
    vlSelf->top__DOT__full_queue_bus = ((0x30U & (IData)(vlSelf->top__DOT__full_queue_bus)) 
                                        | (((IData)(vlSelf->top__DOT____Vcellout__genblk1__BRA__3__KET____DOT__queue_block__full_queue) 
                                            << 3U) 
                                           | (((IData)(vlSelf->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__queue_block__full_queue) 
                                               << 2U) 
                                              | (((IData)(vlSelf->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__queue_block__full_queue) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__queue_block__full_queue)))));
    vlSelf->top__DOT__full_queue_bus = ((0xfU & (IData)(vlSelf->top__DOT__full_queue_bus)) 
                                        | (((IData)(vlSelf->top__DOT____Vcellout__genblk1__BRA__5__KET____DOT__queue_block__full_queue) 
                                            << 5U) 
                                           | ((IData)(vlSelf->top__DOT____Vcellout__genblk1__BRA__4__KET____DOT__queue_block__full_queue) 
                                              << 4U)));
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
    vlSelf->top__DOT__match_bus = ((0x30U & (IData)(vlSelf->top__DOT__match_bus)) 
                                   | (((IData)(vlSelf->top__DOT____Vcellout__genblk1__BRA__3__KET____DOT__queue_block__match) 
                                       << 3U) | (((IData)(vlSelf->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__queue_block__match) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__queue_block__match) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__queue_block__match)))));
    vlSelf->top__DOT__match_bus = ((0xfU & (IData)(vlSelf->top__DOT__match_bus)) 
                                   | (((IData)(vlSelf->top__DOT____Vcellout__genblk1__BRA__5__KET____DOT__queue_block__match) 
                                       << 5U) | ((IData)(vlSelf->top__DOT____Vcellout__genblk1__BRA__4__KET____DOT__queue_block__match) 
                                                 << 4U)));
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
    vlSelf->top__DOT__colour_bus_i[5U] = vlSelf->top__DOT____Vcellout__lut_rom__rgb_val
        [5U];
    vlSelf->top__DOT__colour_bus_i[4U] = vlSelf->top__DOT____Vcellout__lut_rom__rgb_val
        [4U];
    vlSelf->top__DOT__colour_bus_i[3U] = vlSelf->top__DOT____Vcellout__lut_rom__rgb_val
        [3U];
    vlSelf->top__DOT__colour_bus_i[2U] = vlSelf->top__DOT____Vcellout__lut_rom__rgb_val
        [2U];
    vlSelf->top__DOT__colour_bus_i[1U] = vlSelf->top__DOT____Vcellout__lut_rom__rgb_val
        [1U];
    vlSelf->top__DOT__colour_bus_i[0U] = vlSelf->top__DOT____Vcellout__lut_rom__rgb_val
        [0U];
}

VL_ATTR_COLD void Vtop_mandelbrot_engine___settle__TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine__0(Vtop_mandelbrot_engine* vlSelf);
VL_ATTR_COLD void Vtop_mandelbrot_engine___settle__TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine__0(Vtop_mandelbrot_engine* vlSelf);
VL_ATTR_COLD void Vtop_mandelbrot_engine___settle__TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine__0(Vtop_mandelbrot_engine* vlSelf);
VL_ATTR_COLD void Vtop_mandelbrot_engine___settle__TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine__0(Vtop_mandelbrot_engine* vlSelf);
VL_ATTR_COLD void Vtop_mandelbrot_engine___settle__TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine__0(Vtop_mandelbrot_engine* vlSelf);
VL_ATTR_COLD void Vtop_mandelbrot_engine___settle__TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine__0(Vtop_mandelbrot_engine* vlSelf);
void Vtop___024root___combo__TOP__0(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[5U] = 1U;
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    Vtop_mandelbrot_engine___settle__TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine__0((&vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine));
    Vtop_mandelbrot_engine___settle__TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine__0((&vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine));
    Vtop_mandelbrot_engine___settle__TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine__0((&vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine));
    Vtop_mandelbrot_engine___settle__TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine__0((&vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine));
    Vtop_mandelbrot_engine___settle__TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine__0((&vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine));
    Vtop_mandelbrot_engine___settle__TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine__0((&vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine));
    Vtop___024root___combo__TOP__0(vlSelf);
}
