// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop__Syms.h"
#include "Vtop_mandelbrot_engine.h"

VL_INLINE_OPT void Vtop_mandelbrot_engine___sequent__TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine__0(Vtop_mandelbrot_engine* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_mandelbrot_engine___sequent__TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine__0\n"); );
    // Init
    IData/*24:0*/ __Vdly__zr;
    // Body
    __Vdly__zr = vlSelf->__PVT__zr;
    if ((1U & ((~ (IData)(vlSymsp->TOP.top__DOT__full_queue_bus)) 
               & (~ (((IData)(vlSelf->en_pixel_map) 
                      & (vlSymsp->TOP.top__DOT__x[0U] 
                         == (IData)(vlSelf->xpixel))) 
                     & (vlSymsp->TOP.top__DOT__y[0U] 
                        == (IData)(vlSelf->ypixel))))))) {
        vlSelf->__PVT__SM__DOT__state = vlSelf->__PVT__SM__DOT__next;
    }
    if (vlSelf->__PVT__init) {
        __Vdly__zr = 0U;
        vlSelf->__PVT__curr_iterations = 0U;
        vlSelf->__PVT__zr2 = 0U;
        vlSelf->__PVT__zi2 = 0U;
        vlSelf->__PVT__zi = 0U;
    } else {
        if (vlSelf->__PVT__en_stage_2) {
            vlSelf->__PVT__curr_iterations = vlSelf->__Vcellinp__R0__in;
        }
        if (vlSelf->__PVT__en_stage_1) {
            __Vdly__zr = (0x1ffffffU & ((vlSelf->__PVT__zr2 
                                         - vlSelf->__PVT__zi2) 
                                        + vlSelf->__PVT__x));
        }
        if (vlSelf->__PVT__en_stage_2) {
            if (vlSelf->__PVT__init) {
                vlSelf->__PVT__zr2 = 0U;
                vlSelf->__PVT__zi2 = 0U;
            } else {
                vlSelf->__PVT__zr2 = (0x1ffffffU & (IData)(
                                                           (0x3fffffffULL 
                                                            & (VL_MULS_QQQ(50, 
                                                                           (0x3ffffffffffffULL 
                                                                            & VL_EXTENDS_QI(50,25, vlSelf->__PVT__zr)), 
                                                                           (0x3ffffffffffffULL 
                                                                            & VL_EXTENDS_QI(50,25, vlSelf->__PVT__zr))) 
                                                               >> 0x14U))));
                vlSelf->__PVT__zi2 = (0x1ffffffU & (IData)(
                                                           (0x3fffffffULL 
                                                            & (VL_MULS_QQQ(50, 
                                                                           (0x3ffffffffffffULL 
                                                                            & VL_EXTENDS_QI(50,25, vlSelf->__PVT__zi)), 
                                                                           (0x3ffffffffffffULL 
                                                                            & VL_EXTENDS_QI(50,25, vlSelf->__PVT__zi))) 
                                                               >> 0x14U))));
            }
        }
        if (vlSelf->__PVT__en_stage_1) {
            vlSelf->__PVT__zi = (0x1ffffffU & ((((IData)(vlSelf->__PVT__init)
                                                  ? 0U
                                                  : 
                                                 (0x1ffffffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__M7__DOT__product 
                                                             >> 0x14U)))) 
                                                << 1U) 
                                               + vlSelf->__PVT__y));
        }
    }
    if (vlSelf->en_pixel_map) {
        vlSelf->xpixel = vlSymsp->TOP.top__DOT__x[0U];
        vlSelf->ypixel = vlSymsp->TOP.top__DOT__y[0U];
        vlSelf->__PVT__x = (0x1ffffffU & ((IData)(0x1e00000U) 
                                          + ((IData)(vlSymsp->TOP.x_offset) 
                                             + ((IData)(
                                                        (0x3fffffffULL 
                                                         & (VL_MULS_QQQ(50, 0x199aULL, 
                                                                        (0x3ffffffffffffULL 
                                                                         & VL_EXTENDS_QI(50,25, 
                                                                                (0x1ffffffU 
                                                                                & (vlSymsp->TOP.top__DOT__x
                                                                                [0U] 
                                                                                << 0xeU))))) 
                                                            >> 0x14U))) 
                                                << 6U))));
        vlSelf->__PVT__y = (0x1ffffffU & ((IData)(0x1e80000U) 
                                          + ((IData)(vlSymsp->TOP.y_offset) 
                                             + ((IData)(
                                                        (0x3fffffffULL 
                                                         & (VL_MULS_QQQ(50, 0x199aULL, 
                                                                        (0x3ffffffffffffULL 
                                                                         & VL_EXTENDS_QI(50,25, 
                                                                                (0x1ffffffU 
                                                                                & (vlSymsp->TOP.top__DOT__y
                                                                                [0U] 
                                                                                << 0xeU))))) 
                                                            >> 0x14U))) 
                                                << 6U))));
    }
    vlSelf->__Vcellinp__R0__in = (0x3fU & ((IData)(1U) 
                                           + (IData)(vlSelf->__PVT__curr_iterations)));
    vlSelf->__PVT__zr = __Vdly__zr;
    vlSelf->__PVT__distance = (0x1ffffffU & (vlSelf->__PVT__zr2 
                                             + vlSelf->__PVT__zi2));
    vlSelf->__PVT__M7__DOT__product = (0x3ffffffffffffULL 
                                       & VL_MULS_QQQ(50, 
                                                     (0x3ffffffffffffULL 
                                                      & VL_EXTENDS_QI(50,25, vlSelf->__PVT__zr)), 
                                                     (0x3ffffffffffffULL 
                                                      & VL_EXTENDS_QI(50,25, vlSelf->__PVT__zi))));
}

extern const VlUnpacked<CData/*1:0*/, 8> Vtop__ConstPool__TABLE_hfad45a5e_0;
extern const VlUnpacked<CData/*0:0*/, 8> Vtop__ConstPool__TABLE_hee55b61e_0;
extern const VlUnpacked<CData/*0:0*/, 8> Vtop__ConstPool__TABLE_h73dc3151_0;
extern const VlUnpacked<CData/*0:0*/, 8> Vtop__ConstPool__TABLE_h0933c3c1_0;

VL_INLINE_OPT void Vtop_mandelbrot_engine___combo__TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine__0(Vtop_mandelbrot_engine* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_mandelbrot_engine___combo__TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine__0\n"); );
    // Init
    CData/*2:0*/ __Vtableidx1;
    // Body
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

VL_INLINE_OPT void Vtop_mandelbrot_engine___sequent__TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine__0(Vtop_mandelbrot_engine* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_mandelbrot_engine___sequent__TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine__0\n"); );
    // Init
    IData/*24:0*/ __Vdly__zr;
    // Body
    __Vdly__zr = vlSelf->__PVT__zr;
    if ((1U & ((~ ((IData)(vlSymsp->TOP.top__DOT__full_queue_bus) 
                   >> 1U)) & (~ (((IData)(vlSelf->en_pixel_map) 
                                  & (vlSymsp->TOP.top__DOT__x
                                     [1U] == (IData)(vlSelf->xpixel))) 
                                 & (vlSymsp->TOP.top__DOT__y
                                    [1U] == (IData)(vlSelf->ypixel))))))) {
        vlSelf->__PVT__SM__DOT__state = vlSelf->__PVT__SM__DOT__next;
    }
    if (vlSelf->__PVT__init) {
        __Vdly__zr = 0U;
        vlSelf->__PVT__curr_iterations = 0U;
        vlSelf->__PVT__zr2 = 0U;
        vlSelf->__PVT__zi2 = 0U;
        vlSelf->__PVT__zi = 0U;
    } else {
        if (vlSelf->__PVT__en_stage_2) {
            vlSelf->__PVT__curr_iterations = vlSelf->__Vcellinp__R0__in;
        }
        if (vlSelf->__PVT__en_stage_1) {
            __Vdly__zr = (0x1ffffffU & ((vlSelf->__PVT__zr2 
                                         - vlSelf->__PVT__zi2) 
                                        + vlSelf->__PVT__x));
        }
        if (vlSelf->__PVT__en_stage_2) {
            if (vlSelf->__PVT__init) {
                vlSelf->__PVT__zr2 = 0U;
                vlSelf->__PVT__zi2 = 0U;
            } else {
                vlSelf->__PVT__zr2 = (0x1ffffffU & (IData)(
                                                           (0x3fffffffULL 
                                                            & (VL_MULS_QQQ(50, 
                                                                           (0x3ffffffffffffULL 
                                                                            & VL_EXTENDS_QI(50,25, vlSelf->__PVT__zr)), 
                                                                           (0x3ffffffffffffULL 
                                                                            & VL_EXTENDS_QI(50,25, vlSelf->__PVT__zr))) 
                                                               >> 0x14U))));
                vlSelf->__PVT__zi2 = (0x1ffffffU & (IData)(
                                                           (0x3fffffffULL 
                                                            & (VL_MULS_QQQ(50, 
                                                                           (0x3ffffffffffffULL 
                                                                            & VL_EXTENDS_QI(50,25, vlSelf->__PVT__zi)), 
                                                                           (0x3ffffffffffffULL 
                                                                            & VL_EXTENDS_QI(50,25, vlSelf->__PVT__zi))) 
                                                               >> 0x14U))));
            }
        }
        if (vlSelf->__PVT__en_stage_1) {
            vlSelf->__PVT__zi = (0x1ffffffU & ((((IData)(vlSelf->__PVT__init)
                                                  ? 0U
                                                  : 
                                                 (0x1ffffffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__M7__DOT__product 
                                                             >> 0x14U)))) 
                                                << 1U) 
                                               + vlSelf->__PVT__y));
        }
    }
    if (vlSelf->en_pixel_map) {
        vlSelf->xpixel = vlSymsp->TOP.top__DOT__x[1U];
        vlSelf->ypixel = vlSymsp->TOP.top__DOT__y[1U];
        vlSelf->__PVT__x = (0x1ffffffU & ((IData)(0x1e00000U) 
                                          + ((IData)(vlSymsp->TOP.x_offset) 
                                             + ((IData)(
                                                        (0x3fffffffULL 
                                                         & (VL_MULS_QQQ(50, 0x199aULL, 
                                                                        (0x3ffffffffffffULL 
                                                                         & VL_EXTENDS_QI(50,25, 
                                                                                (0x1ffffffU 
                                                                                & (vlSymsp->TOP.top__DOT__x
                                                                                [1U] 
                                                                                << 0xeU))))) 
                                                            >> 0x14U))) 
                                                << 6U))));
        vlSelf->__PVT__y = (0x1ffffffU & ((IData)(0x1e80000U) 
                                          + ((IData)(vlSymsp->TOP.y_offset) 
                                             + ((IData)(
                                                        (0x3fffffffULL 
                                                         & (VL_MULS_QQQ(50, 0x199aULL, 
                                                                        (0x3ffffffffffffULL 
                                                                         & VL_EXTENDS_QI(50,25, 
                                                                                (0x1ffffffU 
                                                                                & (vlSymsp->TOP.top__DOT__y
                                                                                [1U] 
                                                                                << 0xeU))))) 
                                                            >> 0x14U))) 
                                                << 6U))));
    }
    vlSelf->__Vcellinp__R0__in = (0x3fU & ((IData)(1U) 
                                           + (IData)(vlSelf->__PVT__curr_iterations)));
    vlSelf->__PVT__zr = __Vdly__zr;
    vlSelf->__PVT__distance = (0x1ffffffU & (vlSelf->__PVT__zr2 
                                             + vlSelf->__PVT__zi2));
    vlSelf->__PVT__M7__DOT__product = (0x3ffffffffffffULL 
                                       & VL_MULS_QQQ(50, 
                                                     (0x3ffffffffffffULL 
                                                      & VL_EXTENDS_QI(50,25, vlSelf->__PVT__zr)), 
                                                     (0x3ffffffffffffULL 
                                                      & VL_EXTENDS_QI(50,25, vlSelf->__PVT__zi))));
}

VL_INLINE_OPT void Vtop_mandelbrot_engine___combo__TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine__0(Vtop_mandelbrot_engine* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_mandelbrot_engine___combo__TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine__0\n"); );
    // Init
    CData/*2:0*/ __Vtableidx2;
    // Body
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

VL_INLINE_OPT void Vtop_mandelbrot_engine___sequent__TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine__0(Vtop_mandelbrot_engine* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_mandelbrot_engine___sequent__TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine__0\n"); );
    // Init
    IData/*24:0*/ __Vdly__zr;
    // Body
    __Vdly__zr = vlSelf->__PVT__zr;
    if ((1U & ((~ ((IData)(vlSymsp->TOP.top__DOT__full_queue_bus) 
                   >> 2U)) & (~ (((IData)(vlSelf->en_pixel_map) 
                                  & (vlSymsp->TOP.top__DOT__x
                                     [2U] == (IData)(vlSelf->xpixel))) 
                                 & (vlSymsp->TOP.top__DOT__y
                                    [2U] == (IData)(vlSelf->ypixel))))))) {
        vlSelf->__PVT__SM__DOT__state = vlSelf->__PVT__SM__DOT__next;
    }
    if (vlSelf->__PVT__init) {
        __Vdly__zr = 0U;
        vlSelf->__PVT__curr_iterations = 0U;
        vlSelf->__PVT__zr2 = 0U;
        vlSelf->__PVT__zi2 = 0U;
        vlSelf->__PVT__zi = 0U;
    } else {
        if (vlSelf->__PVT__en_stage_2) {
            vlSelf->__PVT__curr_iterations = vlSelf->__Vcellinp__R0__in;
        }
        if (vlSelf->__PVT__en_stage_1) {
            __Vdly__zr = (0x1ffffffU & ((vlSelf->__PVT__zr2 
                                         - vlSelf->__PVT__zi2) 
                                        + vlSelf->__PVT__x));
        }
        if (vlSelf->__PVT__en_stage_2) {
            if (vlSelf->__PVT__init) {
                vlSelf->__PVT__zr2 = 0U;
                vlSelf->__PVT__zi2 = 0U;
            } else {
                vlSelf->__PVT__zr2 = (0x1ffffffU & (IData)(
                                                           (0x3fffffffULL 
                                                            & (VL_MULS_QQQ(50, 
                                                                           (0x3ffffffffffffULL 
                                                                            & VL_EXTENDS_QI(50,25, vlSelf->__PVT__zr)), 
                                                                           (0x3ffffffffffffULL 
                                                                            & VL_EXTENDS_QI(50,25, vlSelf->__PVT__zr))) 
                                                               >> 0x14U))));
                vlSelf->__PVT__zi2 = (0x1ffffffU & (IData)(
                                                           (0x3fffffffULL 
                                                            & (VL_MULS_QQQ(50, 
                                                                           (0x3ffffffffffffULL 
                                                                            & VL_EXTENDS_QI(50,25, vlSelf->__PVT__zi)), 
                                                                           (0x3ffffffffffffULL 
                                                                            & VL_EXTENDS_QI(50,25, vlSelf->__PVT__zi))) 
                                                               >> 0x14U))));
            }
        }
        if (vlSelf->__PVT__en_stage_1) {
            vlSelf->__PVT__zi = (0x1ffffffU & ((((IData)(vlSelf->__PVT__init)
                                                  ? 0U
                                                  : 
                                                 (0x1ffffffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__M7__DOT__product 
                                                             >> 0x14U)))) 
                                                << 1U) 
                                               + vlSelf->__PVT__y));
        }
    }
    if (vlSelf->en_pixel_map) {
        vlSelf->xpixel = vlSymsp->TOP.top__DOT__x[2U];
        vlSelf->ypixel = vlSymsp->TOP.top__DOT__y[2U];
        vlSelf->__PVT__x = (0x1ffffffU & ((IData)(0x1e00000U) 
                                          + ((IData)(vlSymsp->TOP.x_offset) 
                                             + ((IData)(
                                                        (0x3fffffffULL 
                                                         & (VL_MULS_QQQ(50, 0x199aULL, 
                                                                        (0x3ffffffffffffULL 
                                                                         & VL_EXTENDS_QI(50,25, 
                                                                                (0x1ffffffU 
                                                                                & (vlSymsp->TOP.top__DOT__x
                                                                                [2U] 
                                                                                << 0xeU))))) 
                                                            >> 0x14U))) 
                                                << 6U))));
        vlSelf->__PVT__y = (0x1ffffffU & ((IData)(0x1e80000U) 
                                          + ((IData)(vlSymsp->TOP.y_offset) 
                                             + ((IData)(
                                                        (0x3fffffffULL 
                                                         & (VL_MULS_QQQ(50, 0x199aULL, 
                                                                        (0x3ffffffffffffULL 
                                                                         & VL_EXTENDS_QI(50,25, 
                                                                                (0x1ffffffU 
                                                                                & (vlSymsp->TOP.top__DOT__y
                                                                                [2U] 
                                                                                << 0xeU))))) 
                                                            >> 0x14U))) 
                                                << 6U))));
    }
    vlSelf->__Vcellinp__R0__in = (0x3fU & ((IData)(1U) 
                                           + (IData)(vlSelf->__PVT__curr_iterations)));
    vlSelf->__PVT__zr = __Vdly__zr;
    vlSelf->__PVT__distance = (0x1ffffffU & (vlSelf->__PVT__zr2 
                                             + vlSelf->__PVT__zi2));
    vlSelf->__PVT__M7__DOT__product = (0x3ffffffffffffULL 
                                       & VL_MULS_QQQ(50, 
                                                     (0x3ffffffffffffULL 
                                                      & VL_EXTENDS_QI(50,25, vlSelf->__PVT__zr)), 
                                                     (0x3ffffffffffffULL 
                                                      & VL_EXTENDS_QI(50,25, vlSelf->__PVT__zi))));
}

VL_INLINE_OPT void Vtop_mandelbrot_engine___combo__TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine__0(Vtop_mandelbrot_engine* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_mandelbrot_engine___combo__TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine__0\n"); );
    // Init
    CData/*2:0*/ __Vtableidx3;
    // Body
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

VL_INLINE_OPT void Vtop_mandelbrot_engine___sequent__TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine__0(Vtop_mandelbrot_engine* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_mandelbrot_engine___sequent__TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine__0\n"); );
    // Init
    IData/*24:0*/ __Vdly__zr;
    // Body
    __Vdly__zr = vlSelf->__PVT__zr;
    if ((1U & ((~ ((IData)(vlSymsp->TOP.top__DOT__full_queue_bus) 
                   >> 3U)) & (~ (((IData)(vlSelf->en_pixel_map) 
                                  & (vlSymsp->TOP.top__DOT__x
                                     [3U] == (IData)(vlSelf->xpixel))) 
                                 & (vlSymsp->TOP.top__DOT__y
                                    [3U] == (IData)(vlSelf->ypixel))))))) {
        vlSelf->__PVT__SM__DOT__state = vlSelf->__PVT__SM__DOT__next;
    }
    if (vlSelf->__PVT__init) {
        __Vdly__zr = 0U;
        vlSelf->__PVT__curr_iterations = 0U;
        vlSelf->__PVT__zr2 = 0U;
        vlSelf->__PVT__zi2 = 0U;
        vlSelf->__PVT__zi = 0U;
    } else {
        if (vlSelf->__PVT__en_stage_2) {
            vlSelf->__PVT__curr_iterations = vlSelf->__Vcellinp__R0__in;
        }
        if (vlSelf->__PVT__en_stage_1) {
            __Vdly__zr = (0x1ffffffU & ((vlSelf->__PVT__zr2 
                                         - vlSelf->__PVT__zi2) 
                                        + vlSelf->__PVT__x));
        }
        if (vlSelf->__PVT__en_stage_2) {
            if (vlSelf->__PVT__init) {
                vlSelf->__PVT__zr2 = 0U;
                vlSelf->__PVT__zi2 = 0U;
            } else {
                vlSelf->__PVT__zr2 = (0x1ffffffU & (IData)(
                                                           (0x3fffffffULL 
                                                            & (VL_MULS_QQQ(50, 
                                                                           (0x3ffffffffffffULL 
                                                                            & VL_EXTENDS_QI(50,25, vlSelf->__PVT__zr)), 
                                                                           (0x3ffffffffffffULL 
                                                                            & VL_EXTENDS_QI(50,25, vlSelf->__PVT__zr))) 
                                                               >> 0x14U))));
                vlSelf->__PVT__zi2 = (0x1ffffffU & (IData)(
                                                           (0x3fffffffULL 
                                                            & (VL_MULS_QQQ(50, 
                                                                           (0x3ffffffffffffULL 
                                                                            & VL_EXTENDS_QI(50,25, vlSelf->__PVT__zi)), 
                                                                           (0x3ffffffffffffULL 
                                                                            & VL_EXTENDS_QI(50,25, vlSelf->__PVT__zi))) 
                                                               >> 0x14U))));
            }
        }
        if (vlSelf->__PVT__en_stage_1) {
            vlSelf->__PVT__zi = (0x1ffffffU & ((((IData)(vlSelf->__PVT__init)
                                                  ? 0U
                                                  : 
                                                 (0x1ffffffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__M7__DOT__product 
                                                             >> 0x14U)))) 
                                                << 1U) 
                                               + vlSelf->__PVT__y));
        }
    }
    if (vlSelf->en_pixel_map) {
        vlSelf->xpixel = vlSymsp->TOP.top__DOT__x[3U];
        vlSelf->ypixel = vlSymsp->TOP.top__DOT__y[3U];
        vlSelf->__PVT__x = (0x1ffffffU & ((IData)(0x1e00000U) 
                                          + ((IData)(vlSymsp->TOP.x_offset) 
                                             + ((IData)(
                                                        (0x3fffffffULL 
                                                         & (VL_MULS_QQQ(50, 0x199aULL, 
                                                                        (0x3ffffffffffffULL 
                                                                         & VL_EXTENDS_QI(50,25, 
                                                                                (0x1ffffffU 
                                                                                & (vlSymsp->TOP.top__DOT__x
                                                                                [3U] 
                                                                                << 0xeU))))) 
                                                            >> 0x14U))) 
                                                << 6U))));
        vlSelf->__PVT__y = (0x1ffffffU & ((IData)(0x1e80000U) 
                                          + ((IData)(vlSymsp->TOP.y_offset) 
                                             + ((IData)(
                                                        (0x3fffffffULL 
                                                         & (VL_MULS_QQQ(50, 0x199aULL, 
                                                                        (0x3ffffffffffffULL 
                                                                         & VL_EXTENDS_QI(50,25, 
                                                                                (0x1ffffffU 
                                                                                & (vlSymsp->TOP.top__DOT__y
                                                                                [3U] 
                                                                                << 0xeU))))) 
                                                            >> 0x14U))) 
                                                << 6U))));
    }
    vlSelf->__Vcellinp__R0__in = (0x3fU & ((IData)(1U) 
                                           + (IData)(vlSelf->__PVT__curr_iterations)));
    vlSelf->__PVT__zr = __Vdly__zr;
    vlSelf->__PVT__distance = (0x1ffffffU & (vlSelf->__PVT__zr2 
                                             + vlSelf->__PVT__zi2));
    vlSelf->__PVT__M7__DOT__product = (0x3ffffffffffffULL 
                                       & VL_MULS_QQQ(50, 
                                                     (0x3ffffffffffffULL 
                                                      & VL_EXTENDS_QI(50,25, vlSelf->__PVT__zr)), 
                                                     (0x3ffffffffffffULL 
                                                      & VL_EXTENDS_QI(50,25, vlSelf->__PVT__zi))));
}

VL_INLINE_OPT void Vtop_mandelbrot_engine___combo__TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine__0(Vtop_mandelbrot_engine* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_mandelbrot_engine___combo__TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine__0\n"); );
    // Init
    CData/*2:0*/ __Vtableidx4;
    // Body
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

VL_INLINE_OPT void Vtop_mandelbrot_engine___sequent__TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine__0(Vtop_mandelbrot_engine* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_mandelbrot_engine___sequent__TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine__0\n"); );
    // Init
    IData/*24:0*/ __Vdly__zr;
    // Body
    __Vdly__zr = vlSelf->__PVT__zr;
    if ((1U & ((~ ((IData)(vlSymsp->TOP.top__DOT__full_queue_bus) 
                   >> 4U)) & (~ (((IData)(vlSelf->en_pixel_map) 
                                  & (vlSymsp->TOP.top__DOT__x
                                     [4U] == (IData)(vlSelf->xpixel))) 
                                 & (vlSymsp->TOP.top__DOT__y
                                    [4U] == (IData)(vlSelf->ypixel))))))) {
        vlSelf->__PVT__SM__DOT__state = vlSelf->__PVT__SM__DOT__next;
    }
    if (vlSelf->__PVT__init) {
        __Vdly__zr = 0U;
        vlSelf->__PVT__curr_iterations = 0U;
        vlSelf->__PVT__zr2 = 0U;
        vlSelf->__PVT__zi2 = 0U;
        vlSelf->__PVT__zi = 0U;
    } else {
        if (vlSelf->__PVT__en_stage_2) {
            vlSelf->__PVT__curr_iterations = vlSelf->__Vcellinp__R0__in;
        }
        if (vlSelf->__PVT__en_stage_1) {
            __Vdly__zr = (0x1ffffffU & ((vlSelf->__PVT__zr2 
                                         - vlSelf->__PVT__zi2) 
                                        + vlSelf->__PVT__x));
        }
        if (vlSelf->__PVT__en_stage_2) {
            if (vlSelf->__PVT__init) {
                vlSelf->__PVT__zr2 = 0U;
                vlSelf->__PVT__zi2 = 0U;
            } else {
                vlSelf->__PVT__zr2 = (0x1ffffffU & (IData)(
                                                           (0x3fffffffULL 
                                                            & (VL_MULS_QQQ(50, 
                                                                           (0x3ffffffffffffULL 
                                                                            & VL_EXTENDS_QI(50,25, vlSelf->__PVT__zr)), 
                                                                           (0x3ffffffffffffULL 
                                                                            & VL_EXTENDS_QI(50,25, vlSelf->__PVT__zr))) 
                                                               >> 0x14U))));
                vlSelf->__PVT__zi2 = (0x1ffffffU & (IData)(
                                                           (0x3fffffffULL 
                                                            & (VL_MULS_QQQ(50, 
                                                                           (0x3ffffffffffffULL 
                                                                            & VL_EXTENDS_QI(50,25, vlSelf->__PVT__zi)), 
                                                                           (0x3ffffffffffffULL 
                                                                            & VL_EXTENDS_QI(50,25, vlSelf->__PVT__zi))) 
                                                               >> 0x14U))));
            }
        }
        if (vlSelf->__PVT__en_stage_1) {
            vlSelf->__PVT__zi = (0x1ffffffU & ((((IData)(vlSelf->__PVT__init)
                                                  ? 0U
                                                  : 
                                                 (0x1ffffffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__M7__DOT__product 
                                                             >> 0x14U)))) 
                                                << 1U) 
                                               + vlSelf->__PVT__y));
        }
    }
    if (vlSelf->en_pixel_map) {
        vlSelf->xpixel = vlSymsp->TOP.top__DOT__x[4U];
        vlSelf->ypixel = vlSymsp->TOP.top__DOT__y[4U];
        vlSelf->__PVT__x = (0x1ffffffU & ((IData)(0x1e00000U) 
                                          + ((IData)(vlSymsp->TOP.x_offset) 
                                             + ((IData)(
                                                        (0x3fffffffULL 
                                                         & (VL_MULS_QQQ(50, 0x199aULL, 
                                                                        (0x3ffffffffffffULL 
                                                                         & VL_EXTENDS_QI(50,25, 
                                                                                (0x1ffffffU 
                                                                                & (vlSymsp->TOP.top__DOT__x
                                                                                [4U] 
                                                                                << 0xeU))))) 
                                                            >> 0x14U))) 
                                                << 6U))));
        vlSelf->__PVT__y = (0x1ffffffU & ((IData)(0x1e80000U) 
                                          + ((IData)(vlSymsp->TOP.y_offset) 
                                             + ((IData)(
                                                        (0x3fffffffULL 
                                                         & (VL_MULS_QQQ(50, 0x199aULL, 
                                                                        (0x3ffffffffffffULL 
                                                                         & VL_EXTENDS_QI(50,25, 
                                                                                (0x1ffffffU 
                                                                                & (vlSymsp->TOP.top__DOT__y
                                                                                [4U] 
                                                                                << 0xeU))))) 
                                                            >> 0x14U))) 
                                                << 6U))));
    }
    vlSelf->__Vcellinp__R0__in = (0x3fU & ((IData)(1U) 
                                           + (IData)(vlSelf->__PVT__curr_iterations)));
    vlSelf->__PVT__zr = __Vdly__zr;
    vlSelf->__PVT__distance = (0x1ffffffU & (vlSelf->__PVT__zr2 
                                             + vlSelf->__PVT__zi2));
    vlSelf->__PVT__M7__DOT__product = (0x3ffffffffffffULL 
                                       & VL_MULS_QQQ(50, 
                                                     (0x3ffffffffffffULL 
                                                      & VL_EXTENDS_QI(50,25, vlSelf->__PVT__zr)), 
                                                     (0x3ffffffffffffULL 
                                                      & VL_EXTENDS_QI(50,25, vlSelf->__PVT__zi))));
}

VL_INLINE_OPT void Vtop_mandelbrot_engine___combo__TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine__0(Vtop_mandelbrot_engine* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_mandelbrot_engine___combo__TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine__0\n"); );
    // Init
    CData/*2:0*/ __Vtableidx5;
    // Body
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

VL_INLINE_OPT void Vtop_mandelbrot_engine___sequent__TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine__0(Vtop_mandelbrot_engine* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_mandelbrot_engine___sequent__TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine__0\n"); );
    // Init
    IData/*24:0*/ __Vdly__zr;
    // Body
    __Vdly__zr = vlSelf->__PVT__zr;
    if ((1U & ((~ ((IData)(vlSymsp->TOP.top__DOT__full_queue_bus) 
                   >> 5U)) & (~ (((IData)(vlSelf->en_pixel_map) 
                                  & (vlSymsp->TOP.top__DOT__x
                                     [5U] == (IData)(vlSelf->xpixel))) 
                                 & (vlSymsp->TOP.top__DOT__y
                                    [5U] == (IData)(vlSelf->ypixel))))))) {
        vlSelf->__PVT__SM__DOT__state = vlSelf->__PVT__SM__DOT__next;
    }
    if (vlSelf->__PVT__init) {
        __Vdly__zr = 0U;
        vlSelf->__PVT__curr_iterations = 0U;
        vlSelf->__PVT__zr2 = 0U;
        vlSelf->__PVT__zi2 = 0U;
        vlSelf->__PVT__zi = 0U;
    } else {
        if (vlSelf->__PVT__en_stage_2) {
            vlSelf->__PVT__curr_iterations = vlSelf->__Vcellinp__R0__in;
        }
        if (vlSelf->__PVT__en_stage_1) {
            __Vdly__zr = (0x1ffffffU & ((vlSelf->__PVT__zr2 
                                         - vlSelf->__PVT__zi2) 
                                        + vlSelf->__PVT__x));
        }
        if (vlSelf->__PVT__en_stage_2) {
            if (vlSelf->__PVT__init) {
                vlSelf->__PVT__zr2 = 0U;
                vlSelf->__PVT__zi2 = 0U;
            } else {
                vlSelf->__PVT__zr2 = (0x1ffffffU & (IData)(
                                                           (0x3fffffffULL 
                                                            & (VL_MULS_QQQ(50, 
                                                                           (0x3ffffffffffffULL 
                                                                            & VL_EXTENDS_QI(50,25, vlSelf->__PVT__zr)), 
                                                                           (0x3ffffffffffffULL 
                                                                            & VL_EXTENDS_QI(50,25, vlSelf->__PVT__zr))) 
                                                               >> 0x14U))));
                vlSelf->__PVT__zi2 = (0x1ffffffU & (IData)(
                                                           (0x3fffffffULL 
                                                            & (VL_MULS_QQQ(50, 
                                                                           (0x3ffffffffffffULL 
                                                                            & VL_EXTENDS_QI(50,25, vlSelf->__PVT__zi)), 
                                                                           (0x3ffffffffffffULL 
                                                                            & VL_EXTENDS_QI(50,25, vlSelf->__PVT__zi))) 
                                                               >> 0x14U))));
            }
        }
        if (vlSelf->__PVT__en_stage_1) {
            vlSelf->__PVT__zi = (0x1ffffffU & ((((IData)(vlSelf->__PVT__init)
                                                  ? 0U
                                                  : 
                                                 (0x1ffffffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__M7__DOT__product 
                                                             >> 0x14U)))) 
                                                << 1U) 
                                               + vlSelf->__PVT__y));
        }
    }
    if (vlSelf->en_pixel_map) {
        vlSelf->xpixel = vlSymsp->TOP.top__DOT__x[5U];
        vlSelf->ypixel = vlSymsp->TOP.top__DOT__y[5U];
        vlSelf->__PVT__x = (0x1ffffffU & ((IData)(0x1e00000U) 
                                          + ((IData)(vlSymsp->TOP.x_offset) 
                                             + ((IData)(
                                                        (0x3fffffffULL 
                                                         & (VL_MULS_QQQ(50, 0x199aULL, 
                                                                        (0x3ffffffffffffULL 
                                                                         & VL_EXTENDS_QI(50,25, 
                                                                                (0x1ffffffU 
                                                                                & (vlSymsp->TOP.top__DOT__x
                                                                                [5U] 
                                                                                << 0xeU))))) 
                                                            >> 0x14U))) 
                                                << 6U))));
        vlSelf->__PVT__y = (0x1ffffffU & ((IData)(0x1e80000U) 
                                          + ((IData)(vlSymsp->TOP.y_offset) 
                                             + ((IData)(
                                                        (0x3fffffffULL 
                                                         & (VL_MULS_QQQ(50, 0x199aULL, 
                                                                        (0x3ffffffffffffULL 
                                                                         & VL_EXTENDS_QI(50,25, 
                                                                                (0x1ffffffU 
                                                                                & (vlSymsp->TOP.top__DOT__y
                                                                                [5U] 
                                                                                << 0xeU))))) 
                                                            >> 0x14U))) 
                                                << 6U))));
    }
    vlSelf->__Vcellinp__R0__in = (0x3fU & ((IData)(1U) 
                                           + (IData)(vlSelf->__PVT__curr_iterations)));
    vlSelf->__PVT__zr = __Vdly__zr;
    vlSelf->__PVT__distance = (0x1ffffffU & (vlSelf->__PVT__zr2 
                                             + vlSelf->__PVT__zi2));
    vlSelf->__PVT__M7__DOT__product = (0x3ffffffffffffULL 
                                       & VL_MULS_QQQ(50, 
                                                     (0x3ffffffffffffULL 
                                                      & VL_EXTENDS_QI(50,25, vlSelf->__PVT__zr)), 
                                                     (0x3ffffffffffffULL 
                                                      & VL_EXTENDS_QI(50,25, vlSelf->__PVT__zi))));
}

VL_INLINE_OPT void Vtop_mandelbrot_engine___combo__TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine__0(Vtop_mandelbrot_engine* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_mandelbrot_engine___combo__TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine__0\n"); );
    // Init
    CData/*2:0*/ __Vtableidx6;
    // Body
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
