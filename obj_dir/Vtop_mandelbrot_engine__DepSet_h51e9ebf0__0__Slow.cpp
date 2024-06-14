// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop__Syms.h"
#include "Vtop_mandelbrot_engine.h"

extern const VlUnpacked<CData/*1:0*/, 8> Vtop__ConstPool__TABLE_hfad45a5e_0;
extern const VlUnpacked<CData/*0:0*/, 8> Vtop__ConstPool__TABLE_hee55b61e_0;
extern const VlUnpacked<CData/*0:0*/, 8> Vtop__ConstPool__TABLE_h73dc3151_0;
extern const VlUnpacked<CData/*0:0*/, 8> Vtop__ConstPool__TABLE_h0933c3c1_0;

VL_ATTR_COLD void Vtop_mandelbrot_engine___settle__TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine__0(Vtop_mandelbrot_engine* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_mandelbrot_engine___settle__TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine__0\n"); );
    // Init
    CData/*2:0*/ __Vtableidx1;
    // Body
    vlSelf->__Vcellinp__R0__in = (0x3fU & ((IData)(1U) 
                                           + (IData)(vlSelf->__PVT__curr_iterations)));
    vlSelf->__PVT__distance = (0x1ffffffU & (vlSelf->__PVT__zr2 
                                             + vlSelf->__PVT__zi2));
    vlSelf->__PVT__M7__DOT__product = (0x3ffffffffffffULL 
                                       & VL_MULS_QQQ(50, 
                                                     (0x3ffffffffffffULL 
                                                      & VL_EXTENDS_QI(50,25, vlSelf->__PVT__zr)), 
                                                     (0x3ffffffffffffULL 
                                                      & VL_EXTENDS_QI(50,25, vlSelf->__PVT__zi))));
    __Vtableidx1 = ((((VL_LTS_III(25, 0x400000U, vlSelf->__PVT__distance) 
                       | ((IData)(vlSelf->__PVT__curr_iterations) 
                          == (0x3fU & vlSymsp->TOP.iterations_max))) 
                      | VL_GTS_III(32, 0U, VL_EXTENDS_II(32,25, vlSelf->__PVT__distance))) 
                     << 2U) | (IData)(vlSelf->__PVT__SM__DOT__state));
    vlSelf->__PVT__SM__DOT__next = Vtop__ConstPool__TABLE_hfad45a5e_0
        [__Vtableidx1];
    vlSelf->__PVT__init = Vtop__ConstPool__TABLE_hee55b61e_0
        [__Vtableidx1];
    vlSelf->en_pixel_map = Vtop__ConstPool__TABLE_hee55b61e_0
        [__Vtableidx1];
    vlSelf->__PVT__en_stage_1 = Vtop__ConstPool__TABLE_h73dc3151_0
        [__Vtableidx1];
    vlSelf->__PVT__en_stage_2 = Vtop__ConstPool__TABLE_h0933c3c1_0
        [__Vtableidx1];
}

VL_ATTR_COLD void Vtop_mandelbrot_engine___settle__TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine__0(Vtop_mandelbrot_engine* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_mandelbrot_engine___settle__TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine__0\n"); );
    // Init
    CData/*2:0*/ __Vtableidx2;
    // Body
    vlSelf->__Vcellinp__R0__in = (0x3fU & ((IData)(1U) 
                                           + (IData)(vlSelf->__PVT__curr_iterations)));
    vlSelf->__PVT__distance = (0x1ffffffU & (vlSelf->__PVT__zr2 
                                             + vlSelf->__PVT__zi2));
    vlSelf->__PVT__M7__DOT__product = (0x3ffffffffffffULL 
                                       & VL_MULS_QQQ(50, 
                                                     (0x3ffffffffffffULL 
                                                      & VL_EXTENDS_QI(50,25, vlSelf->__PVT__zr)), 
                                                     (0x3ffffffffffffULL 
                                                      & VL_EXTENDS_QI(50,25, vlSelf->__PVT__zi))));
    __Vtableidx2 = ((((VL_LTS_III(25, 0x400000U, vlSelf->__PVT__distance) 
                       | ((IData)(vlSelf->__PVT__curr_iterations) 
                          == (0x3fU & vlSymsp->TOP.iterations_max))) 
                      | VL_GTS_III(32, 0U, VL_EXTENDS_II(32,25, vlSelf->__PVT__distance))) 
                     << 2U) | (IData)(vlSelf->__PVT__SM__DOT__state));
    vlSelf->__PVT__SM__DOT__next = Vtop__ConstPool__TABLE_hfad45a5e_0
        [__Vtableidx2];
    vlSelf->__PVT__init = Vtop__ConstPool__TABLE_hee55b61e_0
        [__Vtableidx2];
    vlSelf->en_pixel_map = Vtop__ConstPool__TABLE_hee55b61e_0
        [__Vtableidx2];
    vlSelf->__PVT__en_stage_1 = Vtop__ConstPool__TABLE_h73dc3151_0
        [__Vtableidx2];
    vlSelf->__PVT__en_stage_2 = Vtop__ConstPool__TABLE_h0933c3c1_0
        [__Vtableidx2];
}

VL_ATTR_COLD void Vtop_mandelbrot_engine___settle__TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine__0(Vtop_mandelbrot_engine* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_mandelbrot_engine___settle__TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine__0\n"); );
    // Init
    CData/*2:0*/ __Vtableidx3;
    // Body
    vlSelf->__Vcellinp__R0__in = (0x3fU & ((IData)(1U) 
                                           + (IData)(vlSelf->__PVT__curr_iterations)));
    vlSelf->__PVT__distance = (0x1ffffffU & (vlSelf->__PVT__zr2 
                                             + vlSelf->__PVT__zi2));
    vlSelf->__PVT__M7__DOT__product = (0x3ffffffffffffULL 
                                       & VL_MULS_QQQ(50, 
                                                     (0x3ffffffffffffULL 
                                                      & VL_EXTENDS_QI(50,25, vlSelf->__PVT__zr)), 
                                                     (0x3ffffffffffffULL 
                                                      & VL_EXTENDS_QI(50,25, vlSelf->__PVT__zi))));
    __Vtableidx3 = ((((VL_LTS_III(25, 0x400000U, vlSelf->__PVT__distance) 
                       | ((IData)(vlSelf->__PVT__curr_iterations) 
                          == (0x3fU & vlSymsp->TOP.iterations_max))) 
                      | VL_GTS_III(32, 0U, VL_EXTENDS_II(32,25, vlSelf->__PVT__distance))) 
                     << 2U) | (IData)(vlSelf->__PVT__SM__DOT__state));
    vlSelf->__PVT__SM__DOT__next = Vtop__ConstPool__TABLE_hfad45a5e_0
        [__Vtableidx3];
    vlSelf->__PVT__init = Vtop__ConstPool__TABLE_hee55b61e_0
        [__Vtableidx3];
    vlSelf->en_pixel_map = Vtop__ConstPool__TABLE_hee55b61e_0
        [__Vtableidx3];
    vlSelf->__PVT__en_stage_1 = Vtop__ConstPool__TABLE_h73dc3151_0
        [__Vtableidx3];
    vlSelf->__PVT__en_stage_2 = Vtop__ConstPool__TABLE_h0933c3c1_0
        [__Vtableidx3];
}

VL_ATTR_COLD void Vtop_mandelbrot_engine___settle__TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine__0(Vtop_mandelbrot_engine* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_mandelbrot_engine___settle__TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine__0\n"); );
    // Init
    CData/*2:0*/ __Vtableidx4;
    // Body
    vlSelf->__Vcellinp__R0__in = (0x3fU & ((IData)(1U) 
                                           + (IData)(vlSelf->__PVT__curr_iterations)));
    vlSelf->__PVT__distance = (0x1ffffffU & (vlSelf->__PVT__zr2 
                                             + vlSelf->__PVT__zi2));
    vlSelf->__PVT__M7__DOT__product = (0x3ffffffffffffULL 
                                       & VL_MULS_QQQ(50, 
                                                     (0x3ffffffffffffULL 
                                                      & VL_EXTENDS_QI(50,25, vlSelf->__PVT__zr)), 
                                                     (0x3ffffffffffffULL 
                                                      & VL_EXTENDS_QI(50,25, vlSelf->__PVT__zi))));
    __Vtableidx4 = ((((VL_LTS_III(25, 0x400000U, vlSelf->__PVT__distance) 
                       | ((IData)(vlSelf->__PVT__curr_iterations) 
                          == (0x3fU & vlSymsp->TOP.iterations_max))) 
                      | VL_GTS_III(32, 0U, VL_EXTENDS_II(32,25, vlSelf->__PVT__distance))) 
                     << 2U) | (IData)(vlSelf->__PVT__SM__DOT__state));
    vlSelf->__PVT__SM__DOT__next = Vtop__ConstPool__TABLE_hfad45a5e_0
        [__Vtableidx4];
    vlSelf->__PVT__init = Vtop__ConstPool__TABLE_hee55b61e_0
        [__Vtableidx4];
    vlSelf->en_pixel_map = Vtop__ConstPool__TABLE_hee55b61e_0
        [__Vtableidx4];
    vlSelf->__PVT__en_stage_1 = Vtop__ConstPool__TABLE_h73dc3151_0
        [__Vtableidx4];
    vlSelf->__PVT__en_stage_2 = Vtop__ConstPool__TABLE_h0933c3c1_0
        [__Vtableidx4];
}

VL_ATTR_COLD void Vtop_mandelbrot_engine___settle__TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine__0(Vtop_mandelbrot_engine* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_mandelbrot_engine___settle__TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine__0\n"); );
    // Init
    CData/*2:0*/ __Vtableidx5;
    // Body
    vlSelf->__Vcellinp__R0__in = (0x3fU & ((IData)(1U) 
                                           + (IData)(vlSelf->__PVT__curr_iterations)));
    vlSelf->__PVT__distance = (0x1ffffffU & (vlSelf->__PVT__zr2 
                                             + vlSelf->__PVT__zi2));
    vlSelf->__PVT__M7__DOT__product = (0x3ffffffffffffULL 
                                       & VL_MULS_QQQ(50, 
                                                     (0x3ffffffffffffULL 
                                                      & VL_EXTENDS_QI(50,25, vlSelf->__PVT__zr)), 
                                                     (0x3ffffffffffffULL 
                                                      & VL_EXTENDS_QI(50,25, vlSelf->__PVT__zi))));
    __Vtableidx5 = ((((VL_LTS_III(25, 0x400000U, vlSelf->__PVT__distance) 
                       | ((IData)(vlSelf->__PVT__curr_iterations) 
                          == (0x3fU & vlSymsp->TOP.iterations_max))) 
                      | VL_GTS_III(32, 0U, VL_EXTENDS_II(32,25, vlSelf->__PVT__distance))) 
                     << 2U) | (IData)(vlSelf->__PVT__SM__DOT__state));
    vlSelf->__PVT__SM__DOT__next = Vtop__ConstPool__TABLE_hfad45a5e_0
        [__Vtableidx5];
    vlSelf->__PVT__init = Vtop__ConstPool__TABLE_hee55b61e_0
        [__Vtableidx5];
    vlSelf->en_pixel_map = Vtop__ConstPool__TABLE_hee55b61e_0
        [__Vtableidx5];
    vlSelf->__PVT__en_stage_1 = Vtop__ConstPool__TABLE_h73dc3151_0
        [__Vtableidx5];
    vlSelf->__PVT__en_stage_2 = Vtop__ConstPool__TABLE_h0933c3c1_0
        [__Vtableidx5];
}

VL_ATTR_COLD void Vtop_mandelbrot_engine___settle__TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine__0(Vtop_mandelbrot_engine* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_mandelbrot_engine___settle__TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine__0\n"); );
    // Init
    CData/*2:0*/ __Vtableidx6;
    // Body
    vlSelf->__Vcellinp__R0__in = (0x3fU & ((IData)(1U) 
                                           + (IData)(vlSelf->__PVT__curr_iterations)));
    vlSelf->__PVT__distance = (0x1ffffffU & (vlSelf->__PVT__zr2 
                                             + vlSelf->__PVT__zi2));
    vlSelf->__PVT__M7__DOT__product = (0x3ffffffffffffULL 
                                       & VL_MULS_QQQ(50, 
                                                     (0x3ffffffffffffULL 
                                                      & VL_EXTENDS_QI(50,25, vlSelf->__PVT__zr)), 
                                                     (0x3ffffffffffffULL 
                                                      & VL_EXTENDS_QI(50,25, vlSelf->__PVT__zi))));
    __Vtableidx6 = ((((VL_LTS_III(25, 0x400000U, vlSelf->__PVT__distance) 
                       | ((IData)(vlSelf->__PVT__curr_iterations) 
                          == (0x3fU & vlSymsp->TOP.iterations_max))) 
                      | VL_GTS_III(32, 0U, VL_EXTENDS_II(32,25, vlSelf->__PVT__distance))) 
                     << 2U) | (IData)(vlSelf->__PVT__SM__DOT__state));
    vlSelf->__PVT__SM__DOT__next = Vtop__ConstPool__TABLE_hfad45a5e_0
        [__Vtableidx6];
    vlSelf->__PVT__init = Vtop__ConstPool__TABLE_hee55b61e_0
        [__Vtableidx6];
    vlSelf->en_pixel_map = Vtop__ConstPool__TABLE_hee55b61e_0
        [__Vtableidx6];
    vlSelf->__PVT__en_stage_1 = Vtop__ConstPool__TABLE_h73dc3151_0
        [__Vtableidx6];
    vlSelf->__PVT__en_stage_2 = Vtop__ConstPool__TABLE_h0933c3c1_0
        [__Vtableidx6];
}
