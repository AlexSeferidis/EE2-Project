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
    SData/*9:0*/ top__DOT__distributor__DOT____Vlvbound_h252f5705__0;
    SData/*9:0*/ top__DOT__distributor__DOT____Vlvbound_hb286bc67__0;
    IData/*23:0*/ top__DOT__lut_rom__DOT____Vlvbound_hb9f7cf49__0;
    // Body
    vlSelf->b = (0xffU & (vlSelf->top__DOT__colour_o_wire 
                          >> 0x10U));
    vlSelf->g = (0xffU & (vlSelf->top__DOT__colour_o_wire 
                          >> 8U));
    vlSelf->r = (0xffU & vlSelf->top__DOT__colour_o_wire);
    vlSelf->top__DOT__ypixel_bus[0U] = vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.ypixel;
    vlSelf->top__DOT__colour_bus_o[0U] = vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__queue_block.colour_o;
    vlSelf->top__DOT__ypixel_bus[1U] = vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.ypixel;
    vlSelf->top__DOT__colour_bus_o[1U] = vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__queue_block.colour_o;
    vlSelf->top__DOT__ypixel_bus[2U] = vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.ypixel;
    vlSelf->top__DOT__colour_bus_o[2U] = vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__queue_block.colour_o;
    vlSelf->top__DOT__ypixel_bus[3U] = vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.ypixel;
    vlSelf->top__DOT__colour_bus_o[3U] = vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__queue_block.colour_o;
    vlSelf->top__DOT__ypixel_bus[4U] = vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.ypixel;
    vlSelf->top__DOT__colour_bus_o[4U] = vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__queue_block.colour_o;
    vlSelf->top__DOT__ypixel_bus[5U] = vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.ypixel;
    vlSelf->top__DOT__colour_bus_o[5U] = vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__queue_block.colour_o;
    vlSelf->top__DOT__ypixel_bus[6U] = vlSymsp->TOP__top__DOT__genblk1__BRA__6__KET____DOT__engine.ypixel;
    vlSelf->top__DOT__colour_bus_o[6U] = vlSymsp->TOP__top__DOT__genblk1__BRA__6__KET____DOT__queue_block.colour_o;
    vlSelf->top__DOT__ypixel_bus[7U] = vlSymsp->TOP__top__DOT__genblk1__BRA__7__KET____DOT__engine.ypixel;
    vlSelf->top__DOT__colour_bus_o[7U] = vlSymsp->TOP__top__DOT__genblk1__BRA__7__KET____DOT__queue_block.colour_o;
    vlSelf->top__DOT__ypixel_bus[8U] = vlSymsp->TOP__top__DOT__genblk1__BRA__8__KET____DOT__engine.ypixel;
    vlSelf->top__DOT__colour_bus_o[8U] = vlSymsp->TOP__top__DOT__genblk1__BRA__8__KET____DOT__queue_block.colour_o;
    vlSelf->top__DOT__ypixel_bus[9U] = vlSymsp->TOP__top__DOT__genblk1__BRA__9__KET____DOT__engine.ypixel;
    vlSelf->top__DOT__colour_bus_o[9U] = vlSymsp->TOP__top__DOT__genblk1__BRA__9__KET____DOT__queue_block.colour_o;
    vlSelf->top__DOT__ypixel_bus[0xaU] = vlSymsp->TOP__top__DOT__genblk1__BRA__10__KET____DOT__engine.ypixel;
    vlSelf->top__DOT__colour_bus_o[0xaU] = vlSymsp->TOP__top__DOT__genblk1__BRA__10__KET____DOT__queue_block.colour_o;
    vlSelf->top__DOT__ypixel_bus[0xbU] = vlSymsp->TOP__top__DOT__genblk1__BRA__11__KET____DOT__engine.ypixel;
    vlSelf->top__DOT__colour_bus_o[0xbU] = vlSymsp->TOP__top__DOT__genblk1__BRA__11__KET____DOT__queue_block.colour_o;
    vlSelf->top__DOT__iterations_bus[0U] = vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__curr_iterations;
    vlSelf->top__DOT__iterations_bus[1U] = vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__curr_iterations;
    vlSelf->top__DOT__iterations_bus[2U] = vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__curr_iterations;
    vlSelf->top__DOT__iterations_bus[3U] = vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__curr_iterations;
    vlSelf->top__DOT__iterations_bus[4U] = vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__curr_iterations;
    vlSelf->top__DOT__iterations_bus[5U] = vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__curr_iterations;
    vlSelf->top__DOT__iterations_bus[6U] = vlSymsp->TOP__top__DOT__genblk1__BRA__6__KET____DOT__engine.__PVT__curr_iterations;
    vlSelf->top__DOT__iterations_bus[7U] = vlSymsp->TOP__top__DOT__genblk1__BRA__7__KET____DOT__engine.__PVT__curr_iterations;
    vlSelf->top__DOT__iterations_bus[8U] = vlSymsp->TOP__top__DOT__genblk1__BRA__8__KET____DOT__engine.__PVT__curr_iterations;
    vlSelf->top__DOT__iterations_bus[9U] = vlSymsp->TOP__top__DOT__genblk1__BRA__9__KET____DOT__engine.__PVT__curr_iterations;
    vlSelf->top__DOT__iterations_bus[0xaU] = vlSymsp->TOP__top__DOT__genblk1__BRA__10__KET____DOT__engine.__PVT__curr_iterations;
    vlSelf->top__DOT__iterations_bus[0xbU] = vlSymsp->TOP__top__DOT__genblk1__BRA__11__KET____DOT__engine.__PVT__curr_iterations;
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
    vlSelf->top__DOT__xpixel_bus[0U] = vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.xpixel;
    vlSelf->top__DOT__xpixel_bus[1U] = vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.xpixel;
    vlSelf->top__DOT__xpixel_bus[2U] = vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.xpixel;
    vlSelf->top__DOT__xpixel_bus[3U] = vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.xpixel;
    vlSelf->top__DOT__xpixel_bus[4U] = vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.xpixel;
    vlSelf->top__DOT__xpixel_bus[5U] = vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.xpixel;
    vlSelf->top__DOT__xpixel_bus[6U] = vlSymsp->TOP__top__DOT__genblk1__BRA__6__KET____DOT__engine.xpixel;
    vlSelf->top__DOT__xpixel_bus[7U] = vlSymsp->TOP__top__DOT__genblk1__BRA__7__KET____DOT__engine.xpixel;
    vlSelf->top__DOT__xpixel_bus[8U] = vlSymsp->TOP__top__DOT__genblk1__BRA__8__KET____DOT__engine.xpixel;
    vlSelf->top__DOT__xpixel_bus[9U] = vlSymsp->TOP__top__DOT__genblk1__BRA__9__KET____DOT__engine.xpixel;
    vlSelf->top__DOT__xpixel_bus[0xaU] = vlSymsp->TOP__top__DOT__genblk1__BRA__10__KET____DOT__engine.xpixel;
    vlSelf->top__DOT__xpixel_bus[0xbU] = vlSymsp->TOP__top__DOT__genblk1__BRA__11__KET____DOT__engine.xpixel;
    vlSelf->top__DOT____Vcellinp__lut_rom__iterations[0xbU] 
        = vlSelf->top__DOT__iterations_bus[0xbU];
    vlSelf->top__DOT____Vcellinp__lut_rom__iterations[0xaU] 
        = vlSelf->top__DOT__iterations_bus[0xaU];
    vlSelf->top__DOT____Vcellinp__lut_rom__iterations[9U] 
        = vlSelf->top__DOT__iterations_bus[9U];
    vlSelf->top__DOT____Vcellinp__lut_rom__iterations[8U] 
        = vlSelf->top__DOT__iterations_bus[8U];
    vlSelf->top__DOT____Vcellinp__lut_rom__iterations[7U] 
        = vlSelf->top__DOT__iterations_bus[7U];
    vlSelf->top__DOT____Vcellinp__lut_rom__iterations[6U] 
        = vlSelf->top__DOT__iterations_bus[6U];
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
    vlSelf->top__DOT__x[0xbU] = vlSelf->top__DOT____Vcellout__distributor__x
        [0xbU];
    vlSelf->top__DOT__x[0xaU] = vlSelf->top__DOT____Vcellout__distributor__x
        [0xaU];
    vlSelf->top__DOT__x[9U] = vlSelf->top__DOT____Vcellout__distributor__x
        [9U];
    vlSelf->top__DOT__x[8U] = vlSelf->top__DOT____Vcellout__distributor__x
        [8U];
    vlSelf->top__DOT__x[7U] = vlSelf->top__DOT____Vcellout__distributor__x
        [7U];
    vlSelf->top__DOT__x[6U] = vlSelf->top__DOT____Vcellout__distributor__x
        [6U];
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
    vlSelf->top__DOT__y[0xbU] = vlSelf->top__DOT____Vcellout__distributor__y
        [0xbU];
    vlSelf->top__DOT__y[0xaU] = vlSelf->top__DOT____Vcellout__distributor__y
        [0xaU];
    vlSelf->top__DOT__y[9U] = vlSelf->top__DOT____Vcellout__distributor__y
        [9U];
    vlSelf->top__DOT__y[8U] = vlSelf->top__DOT____Vcellout__distributor__y
        [8U];
    vlSelf->top__DOT__y[7U] = vlSelf->top__DOT____Vcellout__distributor__y
        [7U];
    vlSelf->top__DOT__y[6U] = vlSelf->top__DOT____Vcellout__distributor__y
        [6U];
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
    top__DOT__lut_rom__DOT____Vlvbound_hb9f7cf49__0 
        = ((0x31U >= (0x3fU & vlSelf->top__DOT____Vcellinp__lut_rom__iterations
                      [0U])) ? vlSelf->top__DOT__lut_rom__DOT__lut_array
           [(0x3fU & vlSelf->top__DOT____Vcellinp__lut_rom__iterations
             [0U])] : 0U);
    vlSelf->top__DOT____Vcellout__lut_rom__rgb_val[0U] 
        = top__DOT__lut_rom__DOT____Vlvbound_hb9f7cf49__0;
    top__DOT__lut_rom__DOT____Vlvbound_hb9f7cf49__0 
        = ((0x31U >= (0x3fU & vlSelf->top__DOT____Vcellinp__lut_rom__iterations
                      [1U])) ? vlSelf->top__DOT__lut_rom__DOT__lut_array
           [(0x3fU & vlSelf->top__DOT____Vcellinp__lut_rom__iterations
             [1U])] : 0U);
    vlSelf->top__DOT____Vcellout__lut_rom__rgb_val[1U] 
        = top__DOT__lut_rom__DOT____Vlvbound_hb9f7cf49__0;
    top__DOT__lut_rom__DOT____Vlvbound_hb9f7cf49__0 
        = ((0x31U >= (0x3fU & vlSelf->top__DOT____Vcellinp__lut_rom__iterations
                      [2U])) ? vlSelf->top__DOT__lut_rom__DOT__lut_array
           [(0x3fU & vlSelf->top__DOT____Vcellinp__lut_rom__iterations
             [2U])] : 0U);
    vlSelf->top__DOT____Vcellout__lut_rom__rgb_val[2U] 
        = top__DOT__lut_rom__DOT____Vlvbound_hb9f7cf49__0;
    top__DOT__lut_rom__DOT____Vlvbound_hb9f7cf49__0 
        = ((0x31U >= (0x3fU & vlSelf->top__DOT____Vcellinp__lut_rom__iterations
                      [3U])) ? vlSelf->top__DOT__lut_rom__DOT__lut_array
           [(0x3fU & vlSelf->top__DOT____Vcellinp__lut_rom__iterations
             [3U])] : 0U);
    vlSelf->top__DOT____Vcellout__lut_rom__rgb_val[3U] 
        = top__DOT__lut_rom__DOT____Vlvbound_hb9f7cf49__0;
    top__DOT__lut_rom__DOT____Vlvbound_hb9f7cf49__0 
        = ((0x31U >= (0x3fU & vlSelf->top__DOT____Vcellinp__lut_rom__iterations
                      [4U])) ? vlSelf->top__DOT__lut_rom__DOT__lut_array
           [(0x3fU & vlSelf->top__DOT____Vcellinp__lut_rom__iterations
             [4U])] : 0U);
    vlSelf->top__DOT____Vcellout__lut_rom__rgb_val[4U] 
        = top__DOT__lut_rom__DOT____Vlvbound_hb9f7cf49__0;
    top__DOT__lut_rom__DOT____Vlvbound_hb9f7cf49__0 
        = ((0x31U >= (0x3fU & vlSelf->top__DOT____Vcellinp__lut_rom__iterations
                      [5U])) ? vlSelf->top__DOT__lut_rom__DOT__lut_array
           [(0x3fU & vlSelf->top__DOT____Vcellinp__lut_rom__iterations
             [5U])] : 0U);
    vlSelf->top__DOT____Vcellout__lut_rom__rgb_val[5U] 
        = top__DOT__lut_rom__DOT____Vlvbound_hb9f7cf49__0;
    top__DOT__lut_rom__DOT____Vlvbound_hb9f7cf49__0 
        = ((0x31U >= (0x3fU & vlSelf->top__DOT____Vcellinp__lut_rom__iterations
                      [6U])) ? vlSelf->top__DOT__lut_rom__DOT__lut_array
           [(0x3fU & vlSelf->top__DOT____Vcellinp__lut_rom__iterations
             [6U])] : 0U);
    vlSelf->top__DOT____Vcellout__lut_rom__rgb_val[6U] 
        = top__DOT__lut_rom__DOT____Vlvbound_hb9f7cf49__0;
    top__DOT__lut_rom__DOT____Vlvbound_hb9f7cf49__0 
        = ((0x31U >= (0x3fU & vlSelf->top__DOT____Vcellinp__lut_rom__iterations
                      [7U])) ? vlSelf->top__DOT__lut_rom__DOT__lut_array
           [(0x3fU & vlSelf->top__DOT____Vcellinp__lut_rom__iterations
             [7U])] : 0U);
    vlSelf->top__DOT____Vcellout__lut_rom__rgb_val[7U] 
        = top__DOT__lut_rom__DOT____Vlvbound_hb9f7cf49__0;
    top__DOT__lut_rom__DOT____Vlvbound_hb9f7cf49__0 
        = ((0x31U >= (0x3fU & vlSelf->top__DOT____Vcellinp__lut_rom__iterations
                      [8U])) ? vlSelf->top__DOT__lut_rom__DOT__lut_array
           [(0x3fU & vlSelf->top__DOT____Vcellinp__lut_rom__iterations
             [8U])] : 0U);
    vlSelf->top__DOT____Vcellout__lut_rom__rgb_val[8U] 
        = top__DOT__lut_rom__DOT____Vlvbound_hb9f7cf49__0;
    top__DOT__lut_rom__DOT____Vlvbound_hb9f7cf49__0 
        = ((0x31U >= (0x3fU & vlSelf->top__DOT____Vcellinp__lut_rom__iterations
                      [9U])) ? vlSelf->top__DOT__lut_rom__DOT__lut_array
           [(0x3fU & vlSelf->top__DOT____Vcellinp__lut_rom__iterations
             [9U])] : 0U);
    vlSelf->top__DOT____Vcellout__lut_rom__rgb_val[9U] 
        = top__DOT__lut_rom__DOT____Vlvbound_hb9f7cf49__0;
    top__DOT__lut_rom__DOT____Vlvbound_hb9f7cf49__0 
        = ((0x31U >= (0x3fU & vlSelf->top__DOT____Vcellinp__lut_rom__iterations
                      [0xaU])) ? vlSelf->top__DOT__lut_rom__DOT__lut_array
           [(0x3fU & vlSelf->top__DOT____Vcellinp__lut_rom__iterations
             [0xaU])] : 0U);
    vlSelf->top__DOT____Vcellout__lut_rom__rgb_val[0xaU] 
        = top__DOT__lut_rom__DOT____Vlvbound_hb9f7cf49__0;
    top__DOT__lut_rom__DOT____Vlvbound_hb9f7cf49__0 
        = ((0x31U >= (0x3fU & vlSelf->top__DOT____Vcellinp__lut_rom__iterations
                      [0xbU])) ? vlSelf->top__DOT__lut_rom__DOT__lut_array
           [(0x3fU & vlSelf->top__DOT____Vcellinp__lut_rom__iterations
             [0xbU])] : 0U);
    vlSelf->top__DOT____Vcellout__lut_rom__rgb_val[0xbU] 
        = top__DOT__lut_rom__DOT____Vlvbound_hb9f7cf49__0;
    vlSelf->top__DOT__colour_bus_i[0xbU] = vlSelf->top__DOT____Vcellout__lut_rom__rgb_val
        [0xbU];
    vlSelf->top__DOT__colour_bus_i[0xaU] = vlSelf->top__DOT____Vcellout__lut_rom__rgb_val
        [0xaU];
    vlSelf->top__DOT__colour_bus_i[9U] = vlSelf->top__DOT____Vcellout__lut_rom__rgb_val
        [9U];
    vlSelf->top__DOT__colour_bus_i[8U] = vlSelf->top__DOT____Vcellout__lut_rom__rgb_val
        [8U];
    vlSelf->top__DOT__colour_bus_i[7U] = vlSelf->top__DOT____Vcellout__lut_rom__rgb_val
        [7U];
    vlSelf->top__DOT__colour_bus_i[6U] = vlSelf->top__DOT____Vcellout__lut_rom__rgb_val
        [6U];
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

VL_ATTR_COLD void Vtop___024root___settle__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__1\n"); );
    // Body
    vlSelf->top__DOT__fin_bus = ((0xff0U & (IData)(vlSelf->top__DOT__fin_bus)) 
                                 | (((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.en_pixel_map) 
                                     << 3U) | (((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.en_pixel_map) 
                                                << 2U) 
                                               | (((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.en_pixel_map) 
                                                   << 1U) 
                                                  | (IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.en_pixel_map)))));
    vlSelf->top__DOT__fin_bus = ((0xf0fU & (IData)(vlSelf->top__DOT__fin_bus)) 
                                 | (((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__7__KET____DOT__engine.en_pixel_map) 
                                     << 7U) | (((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__6__KET____DOT__engine.en_pixel_map) 
                                                << 6U) 
                                               | (((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.en_pixel_map) 
                                                   << 5U) 
                                                  | ((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.en_pixel_map) 
                                                     << 4U)))));
    vlSelf->top__DOT__fin_bus = ((0xffU & (IData)(vlSelf->top__DOT__fin_bus)) 
                                 | (((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__11__KET____DOT__engine.en_pixel_map) 
                                     << 0xbU) | (((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__10__KET____DOT__engine.en_pixel_map) 
                                                  << 0xaU) 
                                                 | (((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__9__KET____DOT__engine.en_pixel_map) 
                                                     << 9U) 
                                                    | ((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__8__KET____DOT__engine.en_pixel_map) 
                                                       << 8U)))));
    vlSelf->top__DOT__full_queue_bus = ((0xffeU & (IData)(vlSelf->top__DOT__full_queue_bus)) 
                                        | (IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__queue_block.full_queue));
    vlSelf->top__DOT__en_bus = ((0xffeU & (IData)(vlSelf->top__DOT__en_bus)) 
                                | (IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__queue_block.en));
    vlSelf->top__DOT__match_bus = ((0xffeU & (IData)(vlSelf->top__DOT__match_bus)) 
                                   | (IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__queue_block.match));
    vlSelf->top__DOT__full_queue_bus = ((0xffdU & (IData)(vlSelf->top__DOT__full_queue_bus)) 
                                        | ((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__queue_block.full_queue) 
                                           << 1U));
    vlSelf->top__DOT__en_bus = ((0xffdU & (IData)(vlSelf->top__DOT__en_bus)) 
                                | ((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__queue_block.en) 
                                   << 1U));
    vlSelf->top__DOT__match_bus = ((0xffdU & (IData)(vlSelf->top__DOT__match_bus)) 
                                   | ((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__queue_block.match) 
                                      << 1U));
    vlSelf->top__DOT__full_queue_bus = ((0xffbU & (IData)(vlSelf->top__DOT__full_queue_bus)) 
                                        | ((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__queue_block.full_queue) 
                                           << 2U));
    vlSelf->top__DOT__en_bus = ((0xffbU & (IData)(vlSelf->top__DOT__en_bus)) 
                                | ((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__queue_block.en) 
                                   << 2U));
    vlSelf->top__DOT__match_bus = ((0xffbU & (IData)(vlSelf->top__DOT__match_bus)) 
                                   | ((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__queue_block.match) 
                                      << 2U));
    vlSelf->top__DOT__full_queue_bus = ((0xff7U & (IData)(vlSelf->top__DOT__full_queue_bus)) 
                                        | ((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__queue_block.full_queue) 
                                           << 3U));
    vlSelf->top__DOT__en_bus = ((0xff7U & (IData)(vlSelf->top__DOT__en_bus)) 
                                | ((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__queue_block.en) 
                                   << 3U));
    vlSelf->top__DOT__match_bus = ((0xff7U & (IData)(vlSelf->top__DOT__match_bus)) 
                                   | ((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__queue_block.match) 
                                      << 3U));
    vlSelf->top__DOT__full_queue_bus = ((0xfefU & (IData)(vlSelf->top__DOT__full_queue_bus)) 
                                        | ((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__queue_block.full_queue) 
                                           << 4U));
    vlSelf->top__DOT__en_bus = ((0xfefU & (IData)(vlSelf->top__DOT__en_bus)) 
                                | ((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__queue_block.en) 
                                   << 4U));
    vlSelf->top__DOT__match_bus = ((0xfefU & (IData)(vlSelf->top__DOT__match_bus)) 
                                   | ((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__queue_block.match) 
                                      << 4U));
    vlSelf->top__DOT__full_queue_bus = ((0xfdfU & (IData)(vlSelf->top__DOT__full_queue_bus)) 
                                        | ((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__queue_block.full_queue) 
                                           << 5U));
    vlSelf->top__DOT__en_bus = ((0xfdfU & (IData)(vlSelf->top__DOT__en_bus)) 
                                | ((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__queue_block.en) 
                                   << 5U));
    vlSelf->top__DOT__match_bus = ((0xfdfU & (IData)(vlSelf->top__DOT__match_bus)) 
                                   | ((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__queue_block.match) 
                                      << 5U));
    vlSelf->top__DOT__full_queue_bus = ((0xfbfU & (IData)(vlSelf->top__DOT__full_queue_bus)) 
                                        | ((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__6__KET____DOT__queue_block.full_queue) 
                                           << 6U));
    vlSelf->top__DOT__en_bus = ((0xfbfU & (IData)(vlSelf->top__DOT__en_bus)) 
                                | ((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__6__KET____DOT__queue_block.en) 
                                   << 6U));
    vlSelf->top__DOT__match_bus = ((0xfbfU & (IData)(vlSelf->top__DOT__match_bus)) 
                                   | ((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__6__KET____DOT__queue_block.match) 
                                      << 6U));
    vlSelf->top__DOT__full_queue_bus = ((0xf7fU & (IData)(vlSelf->top__DOT__full_queue_bus)) 
                                        | ((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__7__KET____DOT__queue_block.full_queue) 
                                           << 7U));
    vlSelf->top__DOT__en_bus = ((0xf7fU & (IData)(vlSelf->top__DOT__en_bus)) 
                                | ((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__7__KET____DOT__queue_block.en) 
                                   << 7U));
    vlSelf->top__DOT__match_bus = ((0xf7fU & (IData)(vlSelf->top__DOT__match_bus)) 
                                   | ((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__7__KET____DOT__queue_block.match) 
                                      << 7U));
    vlSelf->top__DOT__full_queue_bus = ((0xeffU & (IData)(vlSelf->top__DOT__full_queue_bus)) 
                                        | ((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__8__KET____DOT__queue_block.full_queue) 
                                           << 8U));
    vlSelf->top__DOT__en_bus = ((0xeffU & (IData)(vlSelf->top__DOT__en_bus)) 
                                | ((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__8__KET____DOT__queue_block.en) 
                                   << 8U));
    vlSelf->top__DOT__match_bus = ((0xeffU & (IData)(vlSelf->top__DOT__match_bus)) 
                                   | ((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__8__KET____DOT__queue_block.match) 
                                      << 8U));
    vlSelf->top__DOT__full_queue_bus = ((0xdffU & (IData)(vlSelf->top__DOT__full_queue_bus)) 
                                        | ((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__9__KET____DOT__queue_block.full_queue) 
                                           << 9U));
    vlSelf->top__DOT__en_bus = ((0xdffU & (IData)(vlSelf->top__DOT__en_bus)) 
                                | ((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__9__KET____DOT__queue_block.en) 
                                   << 9U));
    vlSelf->top__DOT__match_bus = ((0xdffU & (IData)(vlSelf->top__DOT__match_bus)) 
                                   | ((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__9__KET____DOT__queue_block.match) 
                                      << 9U));
    vlSelf->top__DOT__full_queue_bus = ((0xbffU & (IData)(vlSelf->top__DOT__full_queue_bus)) 
                                        | ((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__10__KET____DOT__queue_block.full_queue) 
                                           << 0xaU));
    vlSelf->top__DOT__en_bus = ((0xbffU & (IData)(vlSelf->top__DOT__en_bus)) 
                                | ((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__10__KET____DOT__queue_block.en) 
                                   << 0xaU));
    vlSelf->top__DOT__match_bus = ((0xbffU & (IData)(vlSelf->top__DOT__match_bus)) 
                                   | ((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__10__KET____DOT__queue_block.match) 
                                      << 0xaU));
    vlSelf->top__DOT__full_queue_bus = ((0x7ffU & (IData)(vlSelf->top__DOT__full_queue_bus)) 
                                        | ((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__11__KET____DOT__queue_block.full_queue) 
                                           << 0xbU));
    vlSelf->top__DOT__en_bus = ((0x7ffU & (IData)(vlSelf->top__DOT__en_bus)) 
                                | ((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__11__KET____DOT__queue_block.en) 
                                   << 0xbU));
    vlSelf->top__DOT__match_bus = ((0x7ffU & (IData)(vlSelf->top__DOT__match_bus)) 
                                   | ((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__11__KET____DOT__queue_block.match) 
                                      << 0xbU));
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
    if ((0x40U & (IData)(vlSelf->top__DOT__match_bus))) {
        vlSelf->top__DOT__j = 6U;
    }
    if ((0x80U & (IData)(vlSelf->top__DOT__match_bus))) {
        vlSelf->top__DOT__j = 7U;
    }
    if ((0x100U & (IData)(vlSelf->top__DOT__match_bus))) {
        vlSelf->top__DOT__j = 8U;
    }
    if ((0x200U & (IData)(vlSelf->top__DOT__match_bus))) {
        vlSelf->top__DOT__j = 9U;
    }
    if ((0x400U & (IData)(vlSelf->top__DOT__match_bus))) {
        vlSelf->top__DOT__j = 0xaU;
    }
    if ((0x800U & (IData)(vlSelf->top__DOT__match_bus))) {
        vlSelf->top__DOT__j = 0xbU;
    }
}

VL_ATTR_COLD void Vtop___024root___initial__TOP__0(Vtop___024root* vlSelf);
VL_ATTR_COLD void Vtop_mandelbrot_engine___initial__TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine__0(Vtop_mandelbrot_engine* vlSelf);
VL_ATTR_COLD void Vtop_queue_new___initial__TOP__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__0(Vtop_queue_new* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[5U] = 1U;
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    Vtop_mandelbrot_engine___initial__TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine__0((&vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine));
    Vtop_mandelbrot_engine___initial__TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine__0((&vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine));
    Vtop_mandelbrot_engine___initial__TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine__0((&vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine));
    Vtop_mandelbrot_engine___initial__TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine__0((&vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine));
    Vtop_mandelbrot_engine___initial__TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine__0((&vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine));
    Vtop_mandelbrot_engine___initial__TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine__0((&vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine));
    Vtop_mandelbrot_engine___initial__TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine__0((&vlSymsp->TOP__top__DOT__genblk1__BRA__6__KET____DOT__engine));
    Vtop_mandelbrot_engine___initial__TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine__0((&vlSymsp->TOP__top__DOT__genblk1__BRA__7__KET____DOT__engine));
    Vtop_mandelbrot_engine___initial__TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine__0((&vlSymsp->TOP__top__DOT__genblk1__BRA__8__KET____DOT__engine));
    Vtop_mandelbrot_engine___initial__TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine__0((&vlSymsp->TOP__top__DOT__genblk1__BRA__9__KET____DOT__engine));
    Vtop_mandelbrot_engine___initial__TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine__0((&vlSymsp->TOP__top__DOT__genblk1__BRA__10__KET____DOT__engine));
    Vtop_mandelbrot_engine___initial__TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine__0((&vlSymsp->TOP__top__DOT__genblk1__BRA__11__KET____DOT__engine));
    Vtop_queue_new___initial__TOP__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__0((&vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__queue_block));
    Vtop_queue_new___initial__TOP__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__0((&vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__queue_block));
    Vtop_queue_new___initial__TOP__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__0((&vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__queue_block));
    Vtop_queue_new___initial__TOP__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__0((&vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__queue_block));
    Vtop_queue_new___initial__TOP__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__0((&vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__queue_block));
    Vtop_queue_new___initial__TOP__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__0((&vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__queue_block));
    Vtop_queue_new___initial__TOP__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__0((&vlSymsp->TOP__top__DOT__genblk1__BRA__6__KET____DOT__queue_block));
    Vtop_queue_new___initial__TOP__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__0((&vlSymsp->TOP__top__DOT__genblk1__BRA__7__KET____DOT__queue_block));
    Vtop_queue_new___initial__TOP__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__0((&vlSymsp->TOP__top__DOT__genblk1__BRA__8__KET____DOT__queue_block));
    Vtop_queue_new___initial__TOP__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__0((&vlSymsp->TOP__top__DOT__genblk1__BRA__9__KET____DOT__queue_block));
    Vtop_queue_new___initial__TOP__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__0((&vlSymsp->TOP__top__DOT__genblk1__BRA__10__KET____DOT__queue_block));
    Vtop_queue_new___initial__TOP__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__0((&vlSymsp->TOP__top__DOT__genblk1__BRA__11__KET____DOT__queue_block));
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vtop_mandelbrot_engine___settle__TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine__0(Vtop_mandelbrot_engine* vlSelf);
VL_ATTR_COLD void Vtop_mandelbrot_engine___settle__TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine__0(Vtop_mandelbrot_engine* vlSelf);
VL_ATTR_COLD void Vtop_mandelbrot_engine___settle__TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine__0(Vtop_mandelbrot_engine* vlSelf);
VL_ATTR_COLD void Vtop_mandelbrot_engine___settle__TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine__0(Vtop_mandelbrot_engine* vlSelf);
VL_ATTR_COLD void Vtop_mandelbrot_engine___settle__TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine__0(Vtop_mandelbrot_engine* vlSelf);
VL_ATTR_COLD void Vtop_mandelbrot_engine___settle__TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine__0(Vtop_mandelbrot_engine* vlSelf);
VL_ATTR_COLD void Vtop_mandelbrot_engine___settle__TOP__top__DOT__genblk1__BRA__6__KET____DOT__engine__0(Vtop_mandelbrot_engine* vlSelf);
VL_ATTR_COLD void Vtop_mandelbrot_engine___settle__TOP__top__DOT__genblk1__BRA__7__KET____DOT__engine__0(Vtop_mandelbrot_engine* vlSelf);
VL_ATTR_COLD void Vtop_mandelbrot_engine___settle__TOP__top__DOT__genblk1__BRA__8__KET____DOT__engine__0(Vtop_mandelbrot_engine* vlSelf);
VL_ATTR_COLD void Vtop_mandelbrot_engine___settle__TOP__top__DOT__genblk1__BRA__9__KET____DOT__engine__0(Vtop_mandelbrot_engine* vlSelf);
VL_ATTR_COLD void Vtop_mandelbrot_engine___settle__TOP__top__DOT__genblk1__BRA__10__KET____DOT__engine__0(Vtop_mandelbrot_engine* vlSelf);
VL_ATTR_COLD void Vtop_mandelbrot_engine___settle__TOP__top__DOT__genblk1__BRA__11__KET____DOT__engine__0(Vtop_mandelbrot_engine* vlSelf);
VL_ATTR_COLD void Vtop_queue_new___settle__TOP__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__0(Vtop_queue_new* vlSelf);

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
    Vtop_mandelbrot_engine___settle__TOP__top__DOT__genblk1__BRA__6__KET____DOT__engine__0((&vlSymsp->TOP__top__DOT__genblk1__BRA__6__KET____DOT__engine));
    Vtop_mandelbrot_engine___settle__TOP__top__DOT__genblk1__BRA__7__KET____DOT__engine__0((&vlSymsp->TOP__top__DOT__genblk1__BRA__7__KET____DOT__engine));
    Vtop_mandelbrot_engine___settle__TOP__top__DOT__genblk1__BRA__8__KET____DOT__engine__0((&vlSymsp->TOP__top__DOT__genblk1__BRA__8__KET____DOT__engine));
    Vtop_mandelbrot_engine___settle__TOP__top__DOT__genblk1__BRA__9__KET____DOT__engine__0((&vlSymsp->TOP__top__DOT__genblk1__BRA__9__KET____DOT__engine));
    Vtop_mandelbrot_engine___settle__TOP__top__DOT__genblk1__BRA__10__KET____DOT__engine__0((&vlSymsp->TOP__top__DOT__genblk1__BRA__10__KET____DOT__engine));
    Vtop_mandelbrot_engine___settle__TOP__top__DOT__genblk1__BRA__11__KET____DOT__engine__0((&vlSymsp->TOP__top__DOT__genblk1__BRA__11__KET____DOT__engine));
    Vtop_queue_new___settle__TOP__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__0((&vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__queue_block));
    Vtop_queue_new___settle__TOP__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__0((&vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__queue_block));
    Vtop_queue_new___settle__TOP__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__0((&vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__queue_block));
    Vtop_queue_new___settle__TOP__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__0((&vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__queue_block));
    Vtop_queue_new___settle__TOP__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__0((&vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__queue_block));
    Vtop_queue_new___settle__TOP__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__0((&vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__queue_block));
    Vtop_queue_new___settle__TOP__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__0((&vlSymsp->TOP__top__DOT__genblk1__BRA__6__KET____DOT__queue_block));
    Vtop_queue_new___settle__TOP__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__0((&vlSymsp->TOP__top__DOT__genblk1__BRA__7__KET____DOT__queue_block));
    Vtop_queue_new___settle__TOP__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__0((&vlSymsp->TOP__top__DOT__genblk1__BRA__8__KET____DOT__queue_block));
    Vtop_queue_new___settle__TOP__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__0((&vlSymsp->TOP__top__DOT__genblk1__BRA__9__KET____DOT__queue_block));
    Vtop_queue_new___settle__TOP__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__0((&vlSymsp->TOP__top__DOT__genblk1__BRA__10__KET____DOT__queue_block));
    Vtop_queue_new___settle__TOP__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__0((&vlSymsp->TOP__top__DOT__genblk1__BRA__11__KET____DOT__queue_block));
    Vtop___024root___settle__TOP__1(vlSelf);
}
