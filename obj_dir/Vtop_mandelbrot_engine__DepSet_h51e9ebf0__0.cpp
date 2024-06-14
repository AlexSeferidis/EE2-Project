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
    if ((1U & ((~ vlSymsp->TOP.top__DOT__full_queue_bus) 
               & (~ (IData)(vlSelf->__PVT__distributor_ready))))) {
        vlSelf->__PVT__SM__DOT__state = vlSelf->__PVT__SM__DOT__next;
    }
    if (vlSelf->__PVT__init) {
        __Vdly__zr = 0U;
        vlSelf->__PVT__curr_iterations = 0U;
        vlSelf->__PVT__zr2 = 0U;
        vlSelf->__PVT__zi2 = 0U;
        vlSelf->__PVT__zi = 0U;
    } else {
        if ((((IData)(vlSelf->__PVT__en_stage_2) & 
              (~ vlSymsp->TOP.top__DOT__full_queue_bus)) 
             & (~ (IData)(vlSelf->__PVT__distributor_ready)))) {
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
    if ((((IData)(vlSelf->en_pixel_map) & (~ vlSymsp->TOP.top__DOT__full_queue_bus)) 
         & (~ (IData)(vlSelf->__PVT__distributor_ready)))) {
        vlSelf->ypixel = vlSymsp->TOP.top__DOT__y[0U];
        vlSelf->xpixel = vlSymsp->TOP.top__DOT__x[0U];
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
                          == (0x3fU & (IData)(vlSymsp->TOP.iterations_max)))) 
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
    vlSelf->__PVT__distributor_ready = (((IData)(vlSelf->en_pixel_map) 
                                         & (vlSymsp->TOP.top__DOT__x
                                            [0U] == (IData)(vlSelf->xpixel))) 
                                        & (vlSymsp->TOP.top__DOT__y
                                           [0U] == (IData)(vlSelf->ypixel)));
}

VL_INLINE_OPT void Vtop_mandelbrot_engine___sequent__TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine__0(Vtop_mandelbrot_engine* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_mandelbrot_engine___sequent__TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine__0\n"); );
    // Init
    IData/*24:0*/ __Vdly__zr;
    // Body
    __Vdly__zr = vlSelf->__PVT__zr;
    if ((1U & ((~ (vlSymsp->TOP.top__DOT__full_queue_bus 
                   >> 1U)) & (~ (IData)(vlSelf->__PVT__distributor_ready))))) {
        vlSelf->__PVT__SM__DOT__state = vlSelf->__PVT__SM__DOT__next;
    }
    if (vlSelf->__PVT__init) {
        __Vdly__zr = 0U;
        vlSelf->__PVT__curr_iterations = 0U;
        vlSelf->__PVT__zr2 = 0U;
        vlSelf->__PVT__zi2 = 0U;
        vlSelf->__PVT__zi = 0U;
    } else {
        if ((((IData)(vlSelf->__PVT__en_stage_2) & 
              (~ (vlSymsp->TOP.top__DOT__full_queue_bus 
                  >> 1U))) & (~ (IData)(vlSelf->__PVT__distributor_ready)))) {
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
    if ((((IData)(vlSelf->en_pixel_map) & (~ (vlSymsp->TOP.top__DOT__full_queue_bus 
                                              >> 1U))) 
         & (~ (IData)(vlSelf->__PVT__distributor_ready)))) {
        vlSelf->ypixel = vlSymsp->TOP.top__DOT__y[1U];
        vlSelf->xpixel = vlSymsp->TOP.top__DOT__x[1U];
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
                          == (0x3fU & (IData)(vlSymsp->TOP.iterations_max)))) 
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
    vlSelf->__PVT__distributor_ready = (((IData)(vlSelf->en_pixel_map) 
                                         & (vlSymsp->TOP.top__DOT__x
                                            [1U] == (IData)(vlSelf->xpixel))) 
                                        & (vlSymsp->TOP.top__DOT__y
                                           [1U] == (IData)(vlSelf->ypixel)));
}

VL_INLINE_OPT void Vtop_mandelbrot_engine___sequent__TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine__0(Vtop_mandelbrot_engine* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_mandelbrot_engine___sequent__TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine__0\n"); );
    // Init
    IData/*24:0*/ __Vdly__zr;
    // Body
    __Vdly__zr = vlSelf->__PVT__zr;
    if ((1U & ((~ (vlSymsp->TOP.top__DOT__full_queue_bus 
                   >> 2U)) & (~ (IData)(vlSelf->__PVT__distributor_ready))))) {
        vlSelf->__PVT__SM__DOT__state = vlSelf->__PVT__SM__DOT__next;
    }
    if (vlSelf->__PVT__init) {
        __Vdly__zr = 0U;
        vlSelf->__PVT__curr_iterations = 0U;
        vlSelf->__PVT__zr2 = 0U;
        vlSelf->__PVT__zi2 = 0U;
        vlSelf->__PVT__zi = 0U;
    } else {
        if ((((IData)(vlSelf->__PVT__en_stage_2) & 
              (~ (vlSymsp->TOP.top__DOT__full_queue_bus 
                  >> 2U))) & (~ (IData)(vlSelf->__PVT__distributor_ready)))) {
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
    if ((((IData)(vlSelf->en_pixel_map) & (~ (vlSymsp->TOP.top__DOT__full_queue_bus 
                                              >> 2U))) 
         & (~ (IData)(vlSelf->__PVT__distributor_ready)))) {
        vlSelf->ypixel = vlSymsp->TOP.top__DOT__y[2U];
        vlSelf->xpixel = vlSymsp->TOP.top__DOT__x[2U];
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
                          == (0x3fU & (IData)(vlSymsp->TOP.iterations_max)))) 
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
    vlSelf->__PVT__distributor_ready = (((IData)(vlSelf->en_pixel_map) 
                                         & (vlSymsp->TOP.top__DOT__x
                                            [2U] == (IData)(vlSelf->xpixel))) 
                                        & (vlSymsp->TOP.top__DOT__y
                                           [2U] == (IData)(vlSelf->ypixel)));
}

VL_INLINE_OPT void Vtop_mandelbrot_engine___sequent__TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine__0(Vtop_mandelbrot_engine* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_mandelbrot_engine___sequent__TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine__0\n"); );
    // Init
    IData/*24:0*/ __Vdly__zr;
    // Body
    __Vdly__zr = vlSelf->__PVT__zr;
    if ((1U & ((~ (vlSymsp->TOP.top__DOT__full_queue_bus 
                   >> 3U)) & (~ (IData)(vlSelf->__PVT__distributor_ready))))) {
        vlSelf->__PVT__SM__DOT__state = vlSelf->__PVT__SM__DOT__next;
    }
    if (vlSelf->__PVT__init) {
        __Vdly__zr = 0U;
        vlSelf->__PVT__curr_iterations = 0U;
        vlSelf->__PVT__zr2 = 0U;
        vlSelf->__PVT__zi2 = 0U;
        vlSelf->__PVT__zi = 0U;
    } else {
        if ((((IData)(vlSelf->__PVT__en_stage_2) & 
              (~ (vlSymsp->TOP.top__DOT__full_queue_bus 
                  >> 3U))) & (~ (IData)(vlSelf->__PVT__distributor_ready)))) {
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
    if ((((IData)(vlSelf->en_pixel_map) & (~ (vlSymsp->TOP.top__DOT__full_queue_bus 
                                              >> 3U))) 
         & (~ (IData)(vlSelf->__PVT__distributor_ready)))) {
        vlSelf->ypixel = vlSymsp->TOP.top__DOT__y[3U];
        vlSelf->xpixel = vlSymsp->TOP.top__DOT__x[3U];
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
                          == (0x3fU & (IData)(vlSymsp->TOP.iterations_max)))) 
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
    vlSelf->__PVT__distributor_ready = (((IData)(vlSelf->en_pixel_map) 
                                         & (vlSymsp->TOP.top__DOT__x
                                            [3U] == (IData)(vlSelf->xpixel))) 
                                        & (vlSymsp->TOP.top__DOT__y
                                           [3U] == (IData)(vlSelf->ypixel)));
}

VL_INLINE_OPT void Vtop_mandelbrot_engine___sequent__TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine__0(Vtop_mandelbrot_engine* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_mandelbrot_engine___sequent__TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine__0\n"); );
    // Init
    IData/*24:0*/ __Vdly__zr;
    // Body
    __Vdly__zr = vlSelf->__PVT__zr;
    if ((1U & ((~ (vlSymsp->TOP.top__DOT__full_queue_bus 
                   >> 4U)) & (~ (IData)(vlSelf->__PVT__distributor_ready))))) {
        vlSelf->__PVT__SM__DOT__state = vlSelf->__PVT__SM__DOT__next;
    }
    if (vlSelf->__PVT__init) {
        __Vdly__zr = 0U;
        vlSelf->__PVT__curr_iterations = 0U;
        vlSelf->__PVT__zr2 = 0U;
        vlSelf->__PVT__zi2 = 0U;
        vlSelf->__PVT__zi = 0U;
    } else {
        if ((((IData)(vlSelf->__PVT__en_stage_2) & 
              (~ (vlSymsp->TOP.top__DOT__full_queue_bus 
                  >> 4U))) & (~ (IData)(vlSelf->__PVT__distributor_ready)))) {
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
    if ((((IData)(vlSelf->en_pixel_map) & (~ (vlSymsp->TOP.top__DOT__full_queue_bus 
                                              >> 4U))) 
         & (~ (IData)(vlSelf->__PVT__distributor_ready)))) {
        vlSelf->ypixel = vlSymsp->TOP.top__DOT__y[4U];
        vlSelf->xpixel = vlSymsp->TOP.top__DOT__x[4U];
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
                          == (0x3fU & (IData)(vlSymsp->TOP.iterations_max)))) 
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
    vlSelf->__PVT__distributor_ready = (((IData)(vlSelf->en_pixel_map) 
                                         & (vlSymsp->TOP.top__DOT__x
                                            [4U] == (IData)(vlSelf->xpixel))) 
                                        & (vlSymsp->TOP.top__DOT__y
                                           [4U] == (IData)(vlSelf->ypixel)));
}

VL_INLINE_OPT void Vtop_mandelbrot_engine___sequent__TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine__0(Vtop_mandelbrot_engine* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_mandelbrot_engine___sequent__TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine__0\n"); );
    // Init
    IData/*24:0*/ __Vdly__zr;
    // Body
    __Vdly__zr = vlSelf->__PVT__zr;
    if ((1U & ((~ (vlSymsp->TOP.top__DOT__full_queue_bus 
                   >> 5U)) & (~ (IData)(vlSelf->__PVT__distributor_ready))))) {
        vlSelf->__PVT__SM__DOT__state = vlSelf->__PVT__SM__DOT__next;
    }
    if (vlSelf->__PVT__init) {
        __Vdly__zr = 0U;
        vlSelf->__PVT__curr_iterations = 0U;
        vlSelf->__PVT__zr2 = 0U;
        vlSelf->__PVT__zi2 = 0U;
        vlSelf->__PVT__zi = 0U;
    } else {
        if ((((IData)(vlSelf->__PVT__en_stage_2) & 
              (~ (vlSymsp->TOP.top__DOT__full_queue_bus 
                  >> 5U))) & (~ (IData)(vlSelf->__PVT__distributor_ready)))) {
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
    if ((((IData)(vlSelf->en_pixel_map) & (~ (vlSymsp->TOP.top__DOT__full_queue_bus 
                                              >> 5U))) 
         & (~ (IData)(vlSelf->__PVT__distributor_ready)))) {
        vlSelf->ypixel = vlSymsp->TOP.top__DOT__y[5U];
        vlSelf->xpixel = vlSymsp->TOP.top__DOT__x[5U];
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
                          == (0x3fU & (IData)(vlSymsp->TOP.iterations_max)))) 
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
    vlSelf->__PVT__distributor_ready = (((IData)(vlSelf->en_pixel_map) 
                                         & (vlSymsp->TOP.top__DOT__x
                                            [5U] == (IData)(vlSelf->xpixel))) 
                                        & (vlSymsp->TOP.top__DOT__y
                                           [5U] == (IData)(vlSelf->ypixel)));
}

VL_INLINE_OPT void Vtop_mandelbrot_engine___sequent__TOP__top__DOT__genblk1__BRA__6__KET____DOT__engine__0(Vtop_mandelbrot_engine* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_mandelbrot_engine___sequent__TOP__top__DOT__genblk1__BRA__6__KET____DOT__engine__0\n"); );
    // Init
    IData/*24:0*/ __Vdly__zr;
    // Body
    __Vdly__zr = vlSelf->__PVT__zr;
    if ((1U & ((~ (vlSymsp->TOP.top__DOT__full_queue_bus 
                   >> 6U)) & (~ (IData)(vlSelf->__PVT__distributor_ready))))) {
        vlSelf->__PVT__SM__DOT__state = vlSelf->__PVT__SM__DOT__next;
    }
    if (vlSelf->__PVT__init) {
        __Vdly__zr = 0U;
        vlSelf->__PVT__curr_iterations = 0U;
        vlSelf->__PVT__zr2 = 0U;
        vlSelf->__PVT__zi2 = 0U;
        vlSelf->__PVT__zi = 0U;
    } else {
        if ((((IData)(vlSelf->__PVT__en_stage_2) & 
              (~ (vlSymsp->TOP.top__DOT__full_queue_bus 
                  >> 6U))) & (~ (IData)(vlSelf->__PVT__distributor_ready)))) {
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
    if ((((IData)(vlSelf->en_pixel_map) & (~ (vlSymsp->TOP.top__DOT__full_queue_bus 
                                              >> 6U))) 
         & (~ (IData)(vlSelf->__PVT__distributor_ready)))) {
        vlSelf->ypixel = vlSymsp->TOP.top__DOT__y[6U];
        vlSelf->xpixel = vlSymsp->TOP.top__DOT__x[6U];
        vlSelf->__PVT__x = (0x1ffffffU & ((IData)(0x1e00000U) 
                                          + ((IData)(vlSymsp->TOP.x_offset) 
                                             + ((IData)(
                                                        (0x3fffffffULL 
                                                         & (VL_MULS_QQQ(50, 0x199aULL, 
                                                                        (0x3ffffffffffffULL 
                                                                         & VL_EXTENDS_QI(50,25, 
                                                                                (0x1ffffffU 
                                                                                & (vlSymsp->TOP.top__DOT__x
                                                                                [6U] 
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
                                                                                [6U] 
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

VL_INLINE_OPT void Vtop_mandelbrot_engine___combo__TOP__top__DOT__genblk1__BRA__6__KET____DOT__engine__0(Vtop_mandelbrot_engine* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_mandelbrot_engine___combo__TOP__top__DOT__genblk1__BRA__6__KET____DOT__engine__0\n"); );
    // Init
    CData/*2:0*/ __Vtableidx7;
    // Body
    __Vtableidx7 = ((((VL_LTS_III(25, 0x400000U, vlSelf->__PVT__distance) 
                       | ((IData)(vlSelf->__PVT__curr_iterations) 
                          == (0x3fU & (IData)(vlSymsp->TOP.iterations_max)))) 
                      | VL_GTS_III(32, 0U, VL_EXTENDS_II(32,25, vlSelf->__PVT__distance))) 
                     << 2U) | (IData)(vlSelf->__PVT__SM__DOT__state));
    vlSelf->__PVT__SM__DOT__next = Vtop__ConstPool__TABLE_hfad45a5e_0
        [__Vtableidx7];
    vlSelf->__PVT__init = Vtop__ConstPool__TABLE_hee55b61e_0
        [__Vtableidx7];
    vlSelf->en_pixel_map = Vtop__ConstPool__TABLE_hee55b61e_0
        [__Vtableidx7];
    vlSelf->__PVT__en_stage_1 = Vtop__ConstPool__TABLE_h73dc3151_0
        [__Vtableidx7];
    vlSelf->__PVT__en_stage_2 = Vtop__ConstPool__TABLE_h0933c3c1_0
        [__Vtableidx7];
    vlSelf->__PVT__distributor_ready = (((IData)(vlSelf->en_pixel_map) 
                                         & (vlSymsp->TOP.top__DOT__x
                                            [6U] == (IData)(vlSelf->xpixel))) 
                                        & (vlSymsp->TOP.top__DOT__y
                                           [6U] == (IData)(vlSelf->ypixel)));
}

VL_INLINE_OPT void Vtop_mandelbrot_engine___sequent__TOP__top__DOT__genblk1__BRA__7__KET____DOT__engine__0(Vtop_mandelbrot_engine* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_mandelbrot_engine___sequent__TOP__top__DOT__genblk1__BRA__7__KET____DOT__engine__0\n"); );
    // Init
    IData/*24:0*/ __Vdly__zr;
    // Body
    __Vdly__zr = vlSelf->__PVT__zr;
    if ((1U & ((~ (vlSymsp->TOP.top__DOT__full_queue_bus 
                   >> 7U)) & (~ (IData)(vlSelf->__PVT__distributor_ready))))) {
        vlSelf->__PVT__SM__DOT__state = vlSelf->__PVT__SM__DOT__next;
    }
    if (vlSelf->__PVT__init) {
        __Vdly__zr = 0U;
        vlSelf->__PVT__curr_iterations = 0U;
        vlSelf->__PVT__zr2 = 0U;
        vlSelf->__PVT__zi2 = 0U;
        vlSelf->__PVT__zi = 0U;
    } else {
        if ((((IData)(vlSelf->__PVT__en_stage_2) & 
              (~ (vlSymsp->TOP.top__DOT__full_queue_bus 
                  >> 7U))) & (~ (IData)(vlSelf->__PVT__distributor_ready)))) {
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
    if ((((IData)(vlSelf->en_pixel_map) & (~ (vlSymsp->TOP.top__DOT__full_queue_bus 
                                              >> 7U))) 
         & (~ (IData)(vlSelf->__PVT__distributor_ready)))) {
        vlSelf->ypixel = vlSymsp->TOP.top__DOT__y[7U];
        vlSelf->xpixel = vlSymsp->TOP.top__DOT__x[7U];
        vlSelf->__PVT__x = (0x1ffffffU & ((IData)(0x1e00000U) 
                                          + ((IData)(vlSymsp->TOP.x_offset) 
                                             + ((IData)(
                                                        (0x3fffffffULL 
                                                         & (VL_MULS_QQQ(50, 0x199aULL, 
                                                                        (0x3ffffffffffffULL 
                                                                         & VL_EXTENDS_QI(50,25, 
                                                                                (0x1ffffffU 
                                                                                & (vlSymsp->TOP.top__DOT__x
                                                                                [7U] 
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
                                                                                [7U] 
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

VL_INLINE_OPT void Vtop_mandelbrot_engine___combo__TOP__top__DOT__genblk1__BRA__7__KET____DOT__engine__0(Vtop_mandelbrot_engine* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_mandelbrot_engine___combo__TOP__top__DOT__genblk1__BRA__7__KET____DOT__engine__0\n"); );
    // Init
    CData/*2:0*/ __Vtableidx8;
    // Body
    __Vtableidx8 = ((((VL_LTS_III(25, 0x400000U, vlSelf->__PVT__distance) 
                       | ((IData)(vlSelf->__PVT__curr_iterations) 
                          == (0x3fU & (IData)(vlSymsp->TOP.iterations_max)))) 
                      | VL_GTS_III(32, 0U, VL_EXTENDS_II(32,25, vlSelf->__PVT__distance))) 
                     << 2U) | (IData)(vlSelf->__PVT__SM__DOT__state));
    vlSelf->__PVT__SM__DOT__next = Vtop__ConstPool__TABLE_hfad45a5e_0
        [__Vtableidx8];
    vlSelf->__PVT__init = Vtop__ConstPool__TABLE_hee55b61e_0
        [__Vtableidx8];
    vlSelf->en_pixel_map = Vtop__ConstPool__TABLE_hee55b61e_0
        [__Vtableidx8];
    vlSelf->__PVT__en_stage_1 = Vtop__ConstPool__TABLE_h73dc3151_0
        [__Vtableidx8];
    vlSelf->__PVT__en_stage_2 = Vtop__ConstPool__TABLE_h0933c3c1_0
        [__Vtableidx8];
    vlSelf->__PVT__distributor_ready = (((IData)(vlSelf->en_pixel_map) 
                                         & (vlSymsp->TOP.top__DOT__x
                                            [7U] == (IData)(vlSelf->xpixel))) 
                                        & (vlSymsp->TOP.top__DOT__y
                                           [7U] == (IData)(vlSelf->ypixel)));
}

VL_INLINE_OPT void Vtop_mandelbrot_engine___sequent__TOP__top__DOT__genblk1__BRA__8__KET____DOT__engine__0(Vtop_mandelbrot_engine* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_mandelbrot_engine___sequent__TOP__top__DOT__genblk1__BRA__8__KET____DOT__engine__0\n"); );
    // Init
    IData/*24:0*/ __Vdly__zr;
    // Body
    __Vdly__zr = vlSelf->__PVT__zr;
    if ((1U & ((~ (vlSymsp->TOP.top__DOT__full_queue_bus 
                   >> 8U)) & (~ (IData)(vlSelf->__PVT__distributor_ready))))) {
        vlSelf->__PVT__SM__DOT__state = vlSelf->__PVT__SM__DOT__next;
    }
    if (vlSelf->__PVT__init) {
        __Vdly__zr = 0U;
        vlSelf->__PVT__curr_iterations = 0U;
        vlSelf->__PVT__zr2 = 0U;
        vlSelf->__PVT__zi2 = 0U;
        vlSelf->__PVT__zi = 0U;
    } else {
        if ((((IData)(vlSelf->__PVT__en_stage_2) & 
              (~ (vlSymsp->TOP.top__DOT__full_queue_bus 
                  >> 8U))) & (~ (IData)(vlSelf->__PVT__distributor_ready)))) {
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
    if ((((IData)(vlSelf->en_pixel_map) & (~ (vlSymsp->TOP.top__DOT__full_queue_bus 
                                              >> 8U))) 
         & (~ (IData)(vlSelf->__PVT__distributor_ready)))) {
        vlSelf->ypixel = vlSymsp->TOP.top__DOT__y[8U];
        vlSelf->xpixel = vlSymsp->TOP.top__DOT__x[8U];
        vlSelf->__PVT__x = (0x1ffffffU & ((IData)(0x1e00000U) 
                                          + ((IData)(vlSymsp->TOP.x_offset) 
                                             + ((IData)(
                                                        (0x3fffffffULL 
                                                         & (VL_MULS_QQQ(50, 0x199aULL, 
                                                                        (0x3ffffffffffffULL 
                                                                         & VL_EXTENDS_QI(50,25, 
                                                                                (0x1ffffffU 
                                                                                & (vlSymsp->TOP.top__DOT__x
                                                                                [8U] 
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
                                                                                [8U] 
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

VL_INLINE_OPT void Vtop_mandelbrot_engine___combo__TOP__top__DOT__genblk1__BRA__8__KET____DOT__engine__0(Vtop_mandelbrot_engine* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_mandelbrot_engine___combo__TOP__top__DOT__genblk1__BRA__8__KET____DOT__engine__0\n"); );
    // Init
    CData/*2:0*/ __Vtableidx9;
    // Body
    __Vtableidx9 = ((((VL_LTS_III(25, 0x400000U, vlSelf->__PVT__distance) 
                       | ((IData)(vlSelf->__PVT__curr_iterations) 
                          == (0x3fU & (IData)(vlSymsp->TOP.iterations_max)))) 
                      | VL_GTS_III(32, 0U, VL_EXTENDS_II(32,25, vlSelf->__PVT__distance))) 
                     << 2U) | (IData)(vlSelf->__PVT__SM__DOT__state));
    vlSelf->__PVT__SM__DOT__next = Vtop__ConstPool__TABLE_hfad45a5e_0
        [__Vtableidx9];
    vlSelf->__PVT__init = Vtop__ConstPool__TABLE_hee55b61e_0
        [__Vtableidx9];
    vlSelf->en_pixel_map = Vtop__ConstPool__TABLE_hee55b61e_0
        [__Vtableidx9];
    vlSelf->__PVT__en_stage_1 = Vtop__ConstPool__TABLE_h73dc3151_0
        [__Vtableidx9];
    vlSelf->__PVT__en_stage_2 = Vtop__ConstPool__TABLE_h0933c3c1_0
        [__Vtableidx9];
    vlSelf->__PVT__distributor_ready = (((IData)(vlSelf->en_pixel_map) 
                                         & (vlSymsp->TOP.top__DOT__x
                                            [8U] == (IData)(vlSelf->xpixel))) 
                                        & (vlSymsp->TOP.top__DOT__y
                                           [8U] == (IData)(vlSelf->ypixel)));
}

VL_INLINE_OPT void Vtop_mandelbrot_engine___sequent__TOP__top__DOT__genblk1__BRA__9__KET____DOT__engine__0(Vtop_mandelbrot_engine* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_mandelbrot_engine___sequent__TOP__top__DOT__genblk1__BRA__9__KET____DOT__engine__0\n"); );
    // Init
    IData/*24:0*/ __Vdly__zr;
    // Body
    __Vdly__zr = vlSelf->__PVT__zr;
    if ((1U & ((~ (vlSymsp->TOP.top__DOT__full_queue_bus 
                   >> 9U)) & (~ (IData)(vlSelf->__PVT__distributor_ready))))) {
        vlSelf->__PVT__SM__DOT__state = vlSelf->__PVT__SM__DOT__next;
    }
    if (vlSelf->__PVT__init) {
        __Vdly__zr = 0U;
        vlSelf->__PVT__curr_iterations = 0U;
        vlSelf->__PVT__zr2 = 0U;
        vlSelf->__PVT__zi2 = 0U;
        vlSelf->__PVT__zi = 0U;
    } else {
        if ((((IData)(vlSelf->__PVT__en_stage_2) & 
              (~ (vlSymsp->TOP.top__DOT__full_queue_bus 
                  >> 9U))) & (~ (IData)(vlSelf->__PVT__distributor_ready)))) {
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
    if ((((IData)(vlSelf->en_pixel_map) & (~ (vlSymsp->TOP.top__DOT__full_queue_bus 
                                              >> 9U))) 
         & (~ (IData)(vlSelf->__PVT__distributor_ready)))) {
        vlSelf->ypixel = vlSymsp->TOP.top__DOT__y[9U];
        vlSelf->xpixel = vlSymsp->TOP.top__DOT__x[9U];
        vlSelf->__PVT__x = (0x1ffffffU & ((IData)(0x1e00000U) 
                                          + ((IData)(vlSymsp->TOP.x_offset) 
                                             + ((IData)(
                                                        (0x3fffffffULL 
                                                         & (VL_MULS_QQQ(50, 0x199aULL, 
                                                                        (0x3ffffffffffffULL 
                                                                         & VL_EXTENDS_QI(50,25, 
                                                                                (0x1ffffffU 
                                                                                & (vlSymsp->TOP.top__DOT__x
                                                                                [9U] 
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
                                                                                [9U] 
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

VL_INLINE_OPT void Vtop_mandelbrot_engine___combo__TOP__top__DOT__genblk1__BRA__9__KET____DOT__engine__0(Vtop_mandelbrot_engine* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_mandelbrot_engine___combo__TOP__top__DOT__genblk1__BRA__9__KET____DOT__engine__0\n"); );
    // Init
    CData/*2:0*/ __Vtableidx10;
    // Body
    __Vtableidx10 = ((((VL_LTS_III(25, 0x400000U, vlSelf->__PVT__distance) 
                        | ((IData)(vlSelf->__PVT__curr_iterations) 
                           == (0x3fU & (IData)(vlSymsp->TOP.iterations_max)))) 
                       | VL_GTS_III(32, 0U, VL_EXTENDS_II(32,25, vlSelf->__PVT__distance))) 
                      << 2U) | (IData)(vlSelf->__PVT__SM__DOT__state));
    vlSelf->__PVT__SM__DOT__next = Vtop__ConstPool__TABLE_hfad45a5e_0
        [__Vtableidx10];
    vlSelf->__PVT__init = Vtop__ConstPool__TABLE_hee55b61e_0
        [__Vtableidx10];
    vlSelf->en_pixel_map = Vtop__ConstPool__TABLE_hee55b61e_0
        [__Vtableidx10];
    vlSelf->__PVT__en_stage_1 = Vtop__ConstPool__TABLE_h73dc3151_0
        [__Vtableidx10];
    vlSelf->__PVT__en_stage_2 = Vtop__ConstPool__TABLE_h0933c3c1_0
        [__Vtableidx10];
    vlSelf->__PVT__distributor_ready = (((IData)(vlSelf->en_pixel_map) 
                                         & (vlSymsp->TOP.top__DOT__x
                                            [9U] == (IData)(vlSelf->xpixel))) 
                                        & (vlSymsp->TOP.top__DOT__y
                                           [9U] == (IData)(vlSelf->ypixel)));
}

VL_INLINE_OPT void Vtop_mandelbrot_engine___sequent__TOP__top__DOT__genblk1__BRA__10__KET____DOT__engine__0(Vtop_mandelbrot_engine* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_mandelbrot_engine___sequent__TOP__top__DOT__genblk1__BRA__10__KET____DOT__engine__0\n"); );
    // Init
    IData/*24:0*/ __Vdly__zr;
    // Body
    __Vdly__zr = vlSelf->__PVT__zr;
    if ((1U & ((~ (vlSymsp->TOP.top__DOT__full_queue_bus 
                   >> 0xaU)) & (~ (IData)(vlSelf->__PVT__distributor_ready))))) {
        vlSelf->__PVT__SM__DOT__state = vlSelf->__PVT__SM__DOT__next;
    }
    if (vlSelf->__PVT__init) {
        __Vdly__zr = 0U;
        vlSelf->__PVT__curr_iterations = 0U;
        vlSelf->__PVT__zr2 = 0U;
        vlSelf->__PVT__zi2 = 0U;
        vlSelf->__PVT__zi = 0U;
    } else {
        if ((((IData)(vlSelf->__PVT__en_stage_2) & 
              (~ (vlSymsp->TOP.top__DOT__full_queue_bus 
                  >> 0xaU))) & (~ (IData)(vlSelf->__PVT__distributor_ready)))) {
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
    if ((((IData)(vlSelf->en_pixel_map) & (~ (vlSymsp->TOP.top__DOT__full_queue_bus 
                                              >> 0xaU))) 
         & (~ (IData)(vlSelf->__PVT__distributor_ready)))) {
        vlSelf->ypixel = vlSymsp->TOP.top__DOT__y[0xaU];
        vlSelf->xpixel = vlSymsp->TOP.top__DOT__x[0xaU];
        vlSelf->__PVT__x = (0x1ffffffU & ((IData)(0x1e00000U) 
                                          + ((IData)(vlSymsp->TOP.x_offset) 
                                             + ((IData)(
                                                        (0x3fffffffULL 
                                                         & (VL_MULS_QQQ(50, 0x199aULL, 
                                                                        (0x3ffffffffffffULL 
                                                                         & VL_EXTENDS_QI(50,25, 
                                                                                (0x1ffffffU 
                                                                                & (vlSymsp->TOP.top__DOT__x
                                                                                [0xaU] 
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
                                                                                [0xaU] 
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

VL_INLINE_OPT void Vtop_mandelbrot_engine___combo__TOP__top__DOT__genblk1__BRA__10__KET____DOT__engine__0(Vtop_mandelbrot_engine* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_mandelbrot_engine___combo__TOP__top__DOT__genblk1__BRA__10__KET____DOT__engine__0\n"); );
    // Init
    CData/*2:0*/ __Vtableidx11;
    // Body
    __Vtableidx11 = ((((VL_LTS_III(25, 0x400000U, vlSelf->__PVT__distance) 
                        | ((IData)(vlSelf->__PVT__curr_iterations) 
                           == (0x3fU & (IData)(vlSymsp->TOP.iterations_max)))) 
                       | VL_GTS_III(32, 0U, VL_EXTENDS_II(32,25, vlSelf->__PVT__distance))) 
                      << 2U) | (IData)(vlSelf->__PVT__SM__DOT__state));
    vlSelf->__PVT__SM__DOT__next = Vtop__ConstPool__TABLE_hfad45a5e_0
        [__Vtableidx11];
    vlSelf->__PVT__init = Vtop__ConstPool__TABLE_hee55b61e_0
        [__Vtableidx11];
    vlSelf->en_pixel_map = Vtop__ConstPool__TABLE_hee55b61e_0
        [__Vtableidx11];
    vlSelf->__PVT__en_stage_1 = Vtop__ConstPool__TABLE_h73dc3151_0
        [__Vtableidx11];
    vlSelf->__PVT__en_stage_2 = Vtop__ConstPool__TABLE_h0933c3c1_0
        [__Vtableidx11];
    vlSelf->__PVT__distributor_ready = (((IData)(vlSelf->en_pixel_map) 
                                         & (vlSymsp->TOP.top__DOT__x
                                            [0xaU] 
                                            == (IData)(vlSelf->xpixel))) 
                                        & (vlSymsp->TOP.top__DOT__y
                                           [0xaU] == (IData)(vlSelf->ypixel)));
}

VL_INLINE_OPT void Vtop_mandelbrot_engine___sequent__TOP__top__DOT__genblk1__BRA__11__KET____DOT__engine__0(Vtop_mandelbrot_engine* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_mandelbrot_engine___sequent__TOP__top__DOT__genblk1__BRA__11__KET____DOT__engine__0\n"); );
    // Init
    IData/*24:0*/ __Vdly__zr;
    // Body
    __Vdly__zr = vlSelf->__PVT__zr;
    if ((1U & ((~ (vlSymsp->TOP.top__DOT__full_queue_bus 
                   >> 0xbU)) & (~ (IData)(vlSelf->__PVT__distributor_ready))))) {
        vlSelf->__PVT__SM__DOT__state = vlSelf->__PVT__SM__DOT__next;
    }
    if (vlSelf->__PVT__init) {
        __Vdly__zr = 0U;
        vlSelf->__PVT__curr_iterations = 0U;
        vlSelf->__PVT__zr2 = 0U;
        vlSelf->__PVT__zi2 = 0U;
        vlSelf->__PVT__zi = 0U;
    } else {
        if ((((IData)(vlSelf->__PVT__en_stage_2) & 
              (~ (vlSymsp->TOP.top__DOT__full_queue_bus 
                  >> 0xbU))) & (~ (IData)(vlSelf->__PVT__distributor_ready)))) {
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
    if ((((IData)(vlSelf->en_pixel_map) & (~ (vlSymsp->TOP.top__DOT__full_queue_bus 
                                              >> 0xbU))) 
         & (~ (IData)(vlSelf->__PVT__distributor_ready)))) {
        vlSelf->ypixel = vlSymsp->TOP.top__DOT__y[0xbU];
        vlSelf->xpixel = vlSymsp->TOP.top__DOT__x[0xbU];
        vlSelf->__PVT__x = (0x1ffffffU & ((IData)(0x1e00000U) 
                                          + ((IData)(vlSymsp->TOP.x_offset) 
                                             + ((IData)(
                                                        (0x3fffffffULL 
                                                         & (VL_MULS_QQQ(50, 0x199aULL, 
                                                                        (0x3ffffffffffffULL 
                                                                         & VL_EXTENDS_QI(50,25, 
                                                                                (0x1ffffffU 
                                                                                & (vlSymsp->TOP.top__DOT__x
                                                                                [0xbU] 
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
                                                                                [0xbU] 
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

VL_INLINE_OPT void Vtop_mandelbrot_engine___combo__TOP__top__DOT__genblk1__BRA__11__KET____DOT__engine__0(Vtop_mandelbrot_engine* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_mandelbrot_engine___combo__TOP__top__DOT__genblk1__BRA__11__KET____DOT__engine__0\n"); );
    // Init
    CData/*2:0*/ __Vtableidx12;
    // Body
    __Vtableidx12 = ((((VL_LTS_III(25, 0x400000U, vlSelf->__PVT__distance) 
                        | ((IData)(vlSelf->__PVT__curr_iterations) 
                           == (0x3fU & (IData)(vlSymsp->TOP.iterations_max)))) 
                       | VL_GTS_III(32, 0U, VL_EXTENDS_II(32,25, vlSelf->__PVT__distance))) 
                      << 2U) | (IData)(vlSelf->__PVT__SM__DOT__state));
    vlSelf->__PVT__SM__DOT__next = Vtop__ConstPool__TABLE_hfad45a5e_0
        [__Vtableidx12];
    vlSelf->__PVT__init = Vtop__ConstPool__TABLE_hee55b61e_0
        [__Vtableidx12];
    vlSelf->en_pixel_map = Vtop__ConstPool__TABLE_hee55b61e_0
        [__Vtableidx12];
    vlSelf->__PVT__en_stage_1 = Vtop__ConstPool__TABLE_h73dc3151_0
        [__Vtableidx12];
    vlSelf->__PVT__en_stage_2 = Vtop__ConstPool__TABLE_h0933c3c1_0
        [__Vtableidx12];
    vlSelf->__PVT__distributor_ready = (((IData)(vlSelf->en_pixel_map) 
                                         & (vlSymsp->TOP.top__DOT__x
                                            [0xbU] 
                                            == (IData)(vlSelf->xpixel))) 
                                        & (vlSymsp->TOP.top__DOT__y
                                           [0xbU] == (IData)(vlSelf->ypixel)));
}

VL_INLINE_OPT void Vtop_mandelbrot_engine___sequent__TOP__top__DOT__genblk1__BRA__12__KET____DOT__engine__0(Vtop_mandelbrot_engine* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_mandelbrot_engine___sequent__TOP__top__DOT__genblk1__BRA__12__KET____DOT__engine__0\n"); );
    // Init
    IData/*24:0*/ __Vdly__zr;
    // Body
    __Vdly__zr = vlSelf->__PVT__zr;
    if ((1U & ((~ (vlSymsp->TOP.top__DOT__full_queue_bus 
                   >> 0xcU)) & (~ (IData)(vlSelf->__PVT__distributor_ready))))) {
        vlSelf->__PVT__SM__DOT__state = vlSelf->__PVT__SM__DOT__next;
    }
    if (vlSelf->__PVT__init) {
        __Vdly__zr = 0U;
        vlSelf->__PVT__curr_iterations = 0U;
        vlSelf->__PVT__zr2 = 0U;
        vlSelf->__PVT__zi2 = 0U;
        vlSelf->__PVT__zi = 0U;
    } else {
        if ((((IData)(vlSelf->__PVT__en_stage_2) & 
              (~ (vlSymsp->TOP.top__DOT__full_queue_bus 
                  >> 0xcU))) & (~ (IData)(vlSelf->__PVT__distributor_ready)))) {
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
    if ((((IData)(vlSelf->en_pixel_map) & (~ (vlSymsp->TOP.top__DOT__full_queue_bus 
                                              >> 0xcU))) 
         & (~ (IData)(vlSelf->__PVT__distributor_ready)))) {
        vlSelf->ypixel = vlSymsp->TOP.top__DOT__y[0xcU];
        vlSelf->xpixel = vlSymsp->TOP.top__DOT__x[0xcU];
        vlSelf->__PVT__x = (0x1ffffffU & ((IData)(0x1e00000U) 
                                          + ((IData)(vlSymsp->TOP.x_offset) 
                                             + ((IData)(
                                                        (0x3fffffffULL 
                                                         & (VL_MULS_QQQ(50, 0x199aULL, 
                                                                        (0x3ffffffffffffULL 
                                                                         & VL_EXTENDS_QI(50,25, 
                                                                                (0x1ffffffU 
                                                                                & (vlSymsp->TOP.top__DOT__x
                                                                                [0xcU] 
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
                                                                                [0xcU] 
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

VL_INLINE_OPT void Vtop_mandelbrot_engine___combo__TOP__top__DOT__genblk1__BRA__12__KET____DOT__engine__0(Vtop_mandelbrot_engine* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_mandelbrot_engine___combo__TOP__top__DOT__genblk1__BRA__12__KET____DOT__engine__0\n"); );
    // Init
    CData/*2:0*/ __Vtableidx13;
    // Body
    __Vtableidx13 = ((((VL_LTS_III(25, 0x400000U, vlSelf->__PVT__distance) 
                        | ((IData)(vlSelf->__PVT__curr_iterations) 
                           == (0x3fU & (IData)(vlSymsp->TOP.iterations_max)))) 
                       | VL_GTS_III(32, 0U, VL_EXTENDS_II(32,25, vlSelf->__PVT__distance))) 
                      << 2U) | (IData)(vlSelf->__PVT__SM__DOT__state));
    vlSelf->__PVT__SM__DOT__next = Vtop__ConstPool__TABLE_hfad45a5e_0
        [__Vtableidx13];
    vlSelf->__PVT__init = Vtop__ConstPool__TABLE_hee55b61e_0
        [__Vtableidx13];
    vlSelf->en_pixel_map = Vtop__ConstPool__TABLE_hee55b61e_0
        [__Vtableidx13];
    vlSelf->__PVT__en_stage_1 = Vtop__ConstPool__TABLE_h73dc3151_0
        [__Vtableidx13];
    vlSelf->__PVT__en_stage_2 = Vtop__ConstPool__TABLE_h0933c3c1_0
        [__Vtableidx13];
    vlSelf->__PVT__distributor_ready = (((IData)(vlSelf->en_pixel_map) 
                                         & (vlSymsp->TOP.top__DOT__x
                                            [0xcU] 
                                            == (IData)(vlSelf->xpixel))) 
                                        & (vlSymsp->TOP.top__DOT__y
                                           [0xcU] == (IData)(vlSelf->ypixel)));
}

VL_INLINE_OPT void Vtop_mandelbrot_engine___sequent__TOP__top__DOT__genblk1__BRA__13__KET____DOT__engine__0(Vtop_mandelbrot_engine* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_mandelbrot_engine___sequent__TOP__top__DOT__genblk1__BRA__13__KET____DOT__engine__0\n"); );
    // Init
    IData/*24:0*/ __Vdly__zr;
    // Body
    __Vdly__zr = vlSelf->__PVT__zr;
    if ((1U & ((~ (vlSymsp->TOP.top__DOT__full_queue_bus 
                   >> 0xdU)) & (~ (IData)(vlSelf->__PVT__distributor_ready))))) {
        vlSelf->__PVT__SM__DOT__state = vlSelf->__PVT__SM__DOT__next;
    }
    if (vlSelf->__PVT__init) {
        __Vdly__zr = 0U;
        vlSelf->__PVT__curr_iterations = 0U;
        vlSelf->__PVT__zr2 = 0U;
        vlSelf->__PVT__zi2 = 0U;
        vlSelf->__PVT__zi = 0U;
    } else {
        if ((((IData)(vlSelf->__PVT__en_stage_2) & 
              (~ (vlSymsp->TOP.top__DOT__full_queue_bus 
                  >> 0xdU))) & (~ (IData)(vlSelf->__PVT__distributor_ready)))) {
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
    if ((((IData)(vlSelf->en_pixel_map) & (~ (vlSymsp->TOP.top__DOT__full_queue_bus 
                                              >> 0xdU))) 
         & (~ (IData)(vlSelf->__PVT__distributor_ready)))) {
        vlSelf->ypixel = vlSymsp->TOP.top__DOT__y[0xdU];
        vlSelf->xpixel = vlSymsp->TOP.top__DOT__x[0xdU];
        vlSelf->__PVT__x = (0x1ffffffU & ((IData)(0x1e00000U) 
                                          + ((IData)(vlSymsp->TOP.x_offset) 
                                             + ((IData)(
                                                        (0x3fffffffULL 
                                                         & (VL_MULS_QQQ(50, 0x199aULL, 
                                                                        (0x3ffffffffffffULL 
                                                                         & VL_EXTENDS_QI(50,25, 
                                                                                (0x1ffffffU 
                                                                                & (vlSymsp->TOP.top__DOT__x
                                                                                [0xdU] 
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
                                                                                [0xdU] 
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

VL_INLINE_OPT void Vtop_mandelbrot_engine___combo__TOP__top__DOT__genblk1__BRA__13__KET____DOT__engine__0(Vtop_mandelbrot_engine* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_mandelbrot_engine___combo__TOP__top__DOT__genblk1__BRA__13__KET____DOT__engine__0\n"); );
    // Init
    CData/*2:0*/ __Vtableidx14;
    // Body
    __Vtableidx14 = ((((VL_LTS_III(25, 0x400000U, vlSelf->__PVT__distance) 
                        | ((IData)(vlSelf->__PVT__curr_iterations) 
                           == (0x3fU & (IData)(vlSymsp->TOP.iterations_max)))) 
                       | VL_GTS_III(32, 0U, VL_EXTENDS_II(32,25, vlSelf->__PVT__distance))) 
                      << 2U) | (IData)(vlSelf->__PVT__SM__DOT__state));
    vlSelf->__PVT__SM__DOT__next = Vtop__ConstPool__TABLE_hfad45a5e_0
        [__Vtableidx14];
    vlSelf->__PVT__init = Vtop__ConstPool__TABLE_hee55b61e_0
        [__Vtableidx14];
    vlSelf->en_pixel_map = Vtop__ConstPool__TABLE_hee55b61e_0
        [__Vtableidx14];
    vlSelf->__PVT__en_stage_1 = Vtop__ConstPool__TABLE_h73dc3151_0
        [__Vtableidx14];
    vlSelf->__PVT__en_stage_2 = Vtop__ConstPool__TABLE_h0933c3c1_0
        [__Vtableidx14];
    vlSelf->__PVT__distributor_ready = (((IData)(vlSelf->en_pixel_map) 
                                         & (vlSymsp->TOP.top__DOT__x
                                            [0xdU] 
                                            == (IData)(vlSelf->xpixel))) 
                                        & (vlSymsp->TOP.top__DOT__y
                                           [0xdU] == (IData)(vlSelf->ypixel)));
}

VL_INLINE_OPT void Vtop_mandelbrot_engine___sequent__TOP__top__DOT__genblk1__BRA__14__KET____DOT__engine__0(Vtop_mandelbrot_engine* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_mandelbrot_engine___sequent__TOP__top__DOT__genblk1__BRA__14__KET____DOT__engine__0\n"); );
    // Init
    IData/*24:0*/ __Vdly__zr;
    // Body
    __Vdly__zr = vlSelf->__PVT__zr;
    if ((1U & ((~ (vlSymsp->TOP.top__DOT__full_queue_bus 
                   >> 0xeU)) & (~ (IData)(vlSelf->__PVT__distributor_ready))))) {
        vlSelf->__PVT__SM__DOT__state = vlSelf->__PVT__SM__DOT__next;
    }
    if (vlSelf->__PVT__init) {
        __Vdly__zr = 0U;
        vlSelf->__PVT__curr_iterations = 0U;
        vlSelf->__PVT__zr2 = 0U;
        vlSelf->__PVT__zi2 = 0U;
        vlSelf->__PVT__zi = 0U;
    } else {
        if ((((IData)(vlSelf->__PVT__en_stage_2) & 
              (~ (vlSymsp->TOP.top__DOT__full_queue_bus 
                  >> 0xeU))) & (~ (IData)(vlSelf->__PVT__distributor_ready)))) {
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
    if ((((IData)(vlSelf->en_pixel_map) & (~ (vlSymsp->TOP.top__DOT__full_queue_bus 
                                              >> 0xeU))) 
         & (~ (IData)(vlSelf->__PVT__distributor_ready)))) {
        vlSelf->ypixel = vlSymsp->TOP.top__DOT__y[0xeU];
        vlSelf->xpixel = vlSymsp->TOP.top__DOT__x[0xeU];
        vlSelf->__PVT__x = (0x1ffffffU & ((IData)(0x1e00000U) 
                                          + ((IData)(vlSymsp->TOP.x_offset) 
                                             + ((IData)(
                                                        (0x3fffffffULL 
                                                         & (VL_MULS_QQQ(50, 0x199aULL, 
                                                                        (0x3ffffffffffffULL 
                                                                         & VL_EXTENDS_QI(50,25, 
                                                                                (0x1ffffffU 
                                                                                & (vlSymsp->TOP.top__DOT__x
                                                                                [0xeU] 
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
                                                                                [0xeU] 
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

VL_INLINE_OPT void Vtop_mandelbrot_engine___combo__TOP__top__DOT__genblk1__BRA__14__KET____DOT__engine__0(Vtop_mandelbrot_engine* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_mandelbrot_engine___combo__TOP__top__DOT__genblk1__BRA__14__KET____DOT__engine__0\n"); );
    // Init
    CData/*2:0*/ __Vtableidx15;
    // Body
    __Vtableidx15 = ((((VL_LTS_III(25, 0x400000U, vlSelf->__PVT__distance) 
                        | ((IData)(vlSelf->__PVT__curr_iterations) 
                           == (0x3fU & (IData)(vlSymsp->TOP.iterations_max)))) 
                       | VL_GTS_III(32, 0U, VL_EXTENDS_II(32,25, vlSelf->__PVT__distance))) 
                      << 2U) | (IData)(vlSelf->__PVT__SM__DOT__state));
    vlSelf->__PVT__SM__DOT__next = Vtop__ConstPool__TABLE_hfad45a5e_0
        [__Vtableidx15];
    vlSelf->__PVT__init = Vtop__ConstPool__TABLE_hee55b61e_0
        [__Vtableidx15];
    vlSelf->en_pixel_map = Vtop__ConstPool__TABLE_hee55b61e_0
        [__Vtableidx15];
    vlSelf->__PVT__en_stage_1 = Vtop__ConstPool__TABLE_h73dc3151_0
        [__Vtableidx15];
    vlSelf->__PVT__en_stage_2 = Vtop__ConstPool__TABLE_h0933c3c1_0
        [__Vtableidx15];
    vlSelf->__PVT__distributor_ready = (((IData)(vlSelf->en_pixel_map) 
                                         & (vlSymsp->TOP.top__DOT__x
                                            [0xeU] 
                                            == (IData)(vlSelf->xpixel))) 
                                        & (vlSymsp->TOP.top__DOT__y
                                           [0xeU] == (IData)(vlSelf->ypixel)));
}

VL_INLINE_OPT void Vtop_mandelbrot_engine___sequent__TOP__top__DOT__genblk1__BRA__15__KET____DOT__engine__0(Vtop_mandelbrot_engine* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_mandelbrot_engine___sequent__TOP__top__DOT__genblk1__BRA__15__KET____DOT__engine__0\n"); );
    // Init
    IData/*24:0*/ __Vdly__zr;
    // Body
    __Vdly__zr = vlSelf->__PVT__zr;
    if ((1U & ((~ (vlSymsp->TOP.top__DOT__full_queue_bus 
                   >> 0xfU)) & (~ (IData)(vlSelf->__PVT__distributor_ready))))) {
        vlSelf->__PVT__SM__DOT__state = vlSelf->__PVT__SM__DOT__next;
    }
    if (vlSelf->__PVT__init) {
        __Vdly__zr = 0U;
        vlSelf->__PVT__curr_iterations = 0U;
        vlSelf->__PVT__zr2 = 0U;
        vlSelf->__PVT__zi2 = 0U;
        vlSelf->__PVT__zi = 0U;
    } else {
        if ((((IData)(vlSelf->__PVT__en_stage_2) & 
              (~ (vlSymsp->TOP.top__DOT__full_queue_bus 
                  >> 0xfU))) & (~ (IData)(vlSelf->__PVT__distributor_ready)))) {
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
    if ((((IData)(vlSelf->en_pixel_map) & (~ (vlSymsp->TOP.top__DOT__full_queue_bus 
                                              >> 0xfU))) 
         & (~ (IData)(vlSelf->__PVT__distributor_ready)))) {
        vlSelf->ypixel = vlSymsp->TOP.top__DOT__y[0xfU];
        vlSelf->xpixel = vlSymsp->TOP.top__DOT__x[0xfU];
        vlSelf->__PVT__x = (0x1ffffffU & ((IData)(0x1e00000U) 
                                          + ((IData)(vlSymsp->TOP.x_offset) 
                                             + ((IData)(
                                                        (0x3fffffffULL 
                                                         & (VL_MULS_QQQ(50, 0x199aULL, 
                                                                        (0x3ffffffffffffULL 
                                                                         & VL_EXTENDS_QI(50,25, 
                                                                                (0x1ffffffU 
                                                                                & (vlSymsp->TOP.top__DOT__x
                                                                                [0xfU] 
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
                                                                                [0xfU] 
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

VL_INLINE_OPT void Vtop_mandelbrot_engine___combo__TOP__top__DOT__genblk1__BRA__15__KET____DOT__engine__0(Vtop_mandelbrot_engine* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_mandelbrot_engine___combo__TOP__top__DOT__genblk1__BRA__15__KET____DOT__engine__0\n"); );
    // Init
    CData/*2:0*/ __Vtableidx16;
    // Body
    __Vtableidx16 = ((((VL_LTS_III(25, 0x400000U, vlSelf->__PVT__distance) 
                        | ((IData)(vlSelf->__PVT__curr_iterations) 
                           == (0x3fU & (IData)(vlSymsp->TOP.iterations_max)))) 
                       | VL_GTS_III(32, 0U, VL_EXTENDS_II(32,25, vlSelf->__PVT__distance))) 
                      << 2U) | (IData)(vlSelf->__PVT__SM__DOT__state));
    vlSelf->__PVT__SM__DOT__next = Vtop__ConstPool__TABLE_hfad45a5e_0
        [__Vtableidx16];
    vlSelf->__PVT__init = Vtop__ConstPool__TABLE_hee55b61e_0
        [__Vtableidx16];
    vlSelf->en_pixel_map = Vtop__ConstPool__TABLE_hee55b61e_0
        [__Vtableidx16];
    vlSelf->__PVT__en_stage_1 = Vtop__ConstPool__TABLE_h73dc3151_0
        [__Vtableidx16];
    vlSelf->__PVT__en_stage_2 = Vtop__ConstPool__TABLE_h0933c3c1_0
        [__Vtableidx16];
    vlSelf->__PVT__distributor_ready = (((IData)(vlSelf->en_pixel_map) 
                                         & (vlSymsp->TOP.top__DOT__x
                                            [0xfU] 
                                            == (IData)(vlSelf->xpixel))) 
                                        & (vlSymsp->TOP.top__DOT__y
                                           [0xfU] == (IData)(vlSelf->ypixel)));
}

VL_INLINE_OPT void Vtop_mandelbrot_engine___sequent__TOP__top__DOT__genblk1__BRA__16__KET____DOT__engine__0(Vtop_mandelbrot_engine* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_mandelbrot_engine___sequent__TOP__top__DOT__genblk1__BRA__16__KET____DOT__engine__0\n"); );
    // Init
    IData/*24:0*/ __Vdly__zr;
    // Body
    __Vdly__zr = vlSelf->__PVT__zr;
    if ((1U & ((~ (vlSymsp->TOP.top__DOT__full_queue_bus 
                   >> 0x10U)) & (~ (IData)(vlSelf->__PVT__distributor_ready))))) {
        vlSelf->__PVT__SM__DOT__state = vlSelf->__PVT__SM__DOT__next;
    }
    if (vlSelf->__PVT__init) {
        __Vdly__zr = 0U;
        vlSelf->__PVT__curr_iterations = 0U;
        vlSelf->__PVT__zr2 = 0U;
        vlSelf->__PVT__zi2 = 0U;
        vlSelf->__PVT__zi = 0U;
    } else {
        if ((((IData)(vlSelf->__PVT__en_stage_2) & 
              (~ (vlSymsp->TOP.top__DOT__full_queue_bus 
                  >> 0x10U))) & (~ (IData)(vlSelf->__PVT__distributor_ready)))) {
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
    if ((((IData)(vlSelf->en_pixel_map) & (~ (vlSymsp->TOP.top__DOT__full_queue_bus 
                                              >> 0x10U))) 
         & (~ (IData)(vlSelf->__PVT__distributor_ready)))) {
        vlSelf->ypixel = vlSymsp->TOP.top__DOT__y[0x10U];
        vlSelf->xpixel = vlSymsp->TOP.top__DOT__x[0x10U];
        vlSelf->__PVT__x = (0x1ffffffU & ((IData)(0x1e00000U) 
                                          + ((IData)(vlSymsp->TOP.x_offset) 
                                             + ((IData)(
                                                        (0x3fffffffULL 
                                                         & (VL_MULS_QQQ(50, 0x199aULL, 
                                                                        (0x3ffffffffffffULL 
                                                                         & VL_EXTENDS_QI(50,25, 
                                                                                (0x1ffffffU 
                                                                                & (vlSymsp->TOP.top__DOT__x
                                                                                [0x10U] 
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
                                                                                [0x10U] 
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

VL_INLINE_OPT void Vtop_mandelbrot_engine___combo__TOP__top__DOT__genblk1__BRA__16__KET____DOT__engine__0(Vtop_mandelbrot_engine* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_mandelbrot_engine___combo__TOP__top__DOT__genblk1__BRA__16__KET____DOT__engine__0\n"); );
    // Init
    CData/*2:0*/ __Vtableidx17;
    // Body
    __Vtableidx17 = ((((VL_LTS_III(25, 0x400000U, vlSelf->__PVT__distance) 
                        | ((IData)(vlSelf->__PVT__curr_iterations) 
                           == (0x3fU & (IData)(vlSymsp->TOP.iterations_max)))) 
                       | VL_GTS_III(32, 0U, VL_EXTENDS_II(32,25, vlSelf->__PVT__distance))) 
                      << 2U) | (IData)(vlSelf->__PVT__SM__DOT__state));
    vlSelf->__PVT__SM__DOT__next = Vtop__ConstPool__TABLE_hfad45a5e_0
        [__Vtableidx17];
    vlSelf->__PVT__init = Vtop__ConstPool__TABLE_hee55b61e_0
        [__Vtableidx17];
    vlSelf->en_pixel_map = Vtop__ConstPool__TABLE_hee55b61e_0
        [__Vtableidx17];
    vlSelf->__PVT__en_stage_1 = Vtop__ConstPool__TABLE_h73dc3151_0
        [__Vtableidx17];
    vlSelf->__PVT__en_stage_2 = Vtop__ConstPool__TABLE_h0933c3c1_0
        [__Vtableidx17];
    vlSelf->__PVT__distributor_ready = (((IData)(vlSelf->en_pixel_map) 
                                         & (vlSymsp->TOP.top__DOT__x
                                            [0x10U] 
                                            == (IData)(vlSelf->xpixel))) 
                                        & (vlSymsp->TOP.top__DOT__y
                                           [0x10U] 
                                           == (IData)(vlSelf->ypixel)));
}

VL_INLINE_OPT void Vtop_mandelbrot_engine___sequent__TOP__top__DOT__genblk1__BRA__17__KET____DOT__engine__0(Vtop_mandelbrot_engine* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_mandelbrot_engine___sequent__TOP__top__DOT__genblk1__BRA__17__KET____DOT__engine__0\n"); );
    // Init
    IData/*24:0*/ __Vdly__zr;
    // Body
    __Vdly__zr = vlSelf->__PVT__zr;
    if ((1U & ((~ (vlSymsp->TOP.top__DOT__full_queue_bus 
                   >> 0x11U)) & (~ (IData)(vlSelf->__PVT__distributor_ready))))) {
        vlSelf->__PVT__SM__DOT__state = vlSelf->__PVT__SM__DOT__next;
    }
    if (vlSelf->__PVT__init) {
        __Vdly__zr = 0U;
        vlSelf->__PVT__curr_iterations = 0U;
        vlSelf->__PVT__zr2 = 0U;
        vlSelf->__PVT__zi2 = 0U;
        vlSelf->__PVT__zi = 0U;
    } else {
        if ((((IData)(vlSelf->__PVT__en_stage_2) & 
              (~ (vlSymsp->TOP.top__DOT__full_queue_bus 
                  >> 0x11U))) & (~ (IData)(vlSelf->__PVT__distributor_ready)))) {
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
    if ((((IData)(vlSelf->en_pixel_map) & (~ (vlSymsp->TOP.top__DOT__full_queue_bus 
                                              >> 0x11U))) 
         & (~ (IData)(vlSelf->__PVT__distributor_ready)))) {
        vlSelf->ypixel = vlSymsp->TOP.top__DOT__y[0x11U];
        vlSelf->xpixel = vlSymsp->TOP.top__DOT__x[0x11U];
        vlSelf->__PVT__x = (0x1ffffffU & ((IData)(0x1e00000U) 
                                          + ((IData)(vlSymsp->TOP.x_offset) 
                                             + ((IData)(
                                                        (0x3fffffffULL 
                                                         & (VL_MULS_QQQ(50, 0x199aULL, 
                                                                        (0x3ffffffffffffULL 
                                                                         & VL_EXTENDS_QI(50,25, 
                                                                                (0x1ffffffU 
                                                                                & (vlSymsp->TOP.top__DOT__x
                                                                                [0x11U] 
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
                                                                                [0x11U] 
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

VL_INLINE_OPT void Vtop_mandelbrot_engine___combo__TOP__top__DOT__genblk1__BRA__17__KET____DOT__engine__0(Vtop_mandelbrot_engine* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_mandelbrot_engine___combo__TOP__top__DOT__genblk1__BRA__17__KET____DOT__engine__0\n"); );
    // Init
    CData/*2:0*/ __Vtableidx18;
    // Body
    __Vtableidx18 = ((((VL_LTS_III(25, 0x400000U, vlSelf->__PVT__distance) 
                        | ((IData)(vlSelf->__PVT__curr_iterations) 
                           == (0x3fU & (IData)(vlSymsp->TOP.iterations_max)))) 
                       | VL_GTS_III(32, 0U, VL_EXTENDS_II(32,25, vlSelf->__PVT__distance))) 
                      << 2U) | (IData)(vlSelf->__PVT__SM__DOT__state));
    vlSelf->__PVT__SM__DOT__next = Vtop__ConstPool__TABLE_hfad45a5e_0
        [__Vtableidx18];
    vlSelf->__PVT__init = Vtop__ConstPool__TABLE_hee55b61e_0
        [__Vtableidx18];
    vlSelf->en_pixel_map = Vtop__ConstPool__TABLE_hee55b61e_0
        [__Vtableidx18];
    vlSelf->__PVT__en_stage_1 = Vtop__ConstPool__TABLE_h73dc3151_0
        [__Vtableidx18];
    vlSelf->__PVT__en_stage_2 = Vtop__ConstPool__TABLE_h0933c3c1_0
        [__Vtableidx18];
    vlSelf->__PVT__distributor_ready = (((IData)(vlSelf->en_pixel_map) 
                                         & (vlSymsp->TOP.top__DOT__x
                                            [0x11U] 
                                            == (IData)(vlSelf->xpixel))) 
                                        & (vlSymsp->TOP.top__DOT__y
                                           [0x11U] 
                                           == (IData)(vlSelf->ypixel)));
}

VL_INLINE_OPT void Vtop_mandelbrot_engine___sequent__TOP__top__DOT__genblk1__BRA__18__KET____DOT__engine__0(Vtop_mandelbrot_engine* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_mandelbrot_engine___sequent__TOP__top__DOT__genblk1__BRA__18__KET____DOT__engine__0\n"); );
    // Init
    IData/*24:0*/ __Vdly__zr;
    // Body
    __Vdly__zr = vlSelf->__PVT__zr;
    if ((1U & ((~ (vlSymsp->TOP.top__DOT__full_queue_bus 
                   >> 0x12U)) & (~ (IData)(vlSelf->__PVT__distributor_ready))))) {
        vlSelf->__PVT__SM__DOT__state = vlSelf->__PVT__SM__DOT__next;
    }
    if (vlSelf->__PVT__init) {
        __Vdly__zr = 0U;
        vlSelf->__PVT__curr_iterations = 0U;
        vlSelf->__PVT__zr2 = 0U;
        vlSelf->__PVT__zi2 = 0U;
        vlSelf->__PVT__zi = 0U;
    } else {
        if ((((IData)(vlSelf->__PVT__en_stage_2) & 
              (~ (vlSymsp->TOP.top__DOT__full_queue_bus 
                  >> 0x12U))) & (~ (IData)(vlSelf->__PVT__distributor_ready)))) {
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
    if ((((IData)(vlSelf->en_pixel_map) & (~ (vlSymsp->TOP.top__DOT__full_queue_bus 
                                              >> 0x12U))) 
         & (~ (IData)(vlSelf->__PVT__distributor_ready)))) {
        vlSelf->ypixel = vlSymsp->TOP.top__DOT__y[0x12U];
        vlSelf->xpixel = vlSymsp->TOP.top__DOT__x[0x12U];
        vlSelf->__PVT__x = (0x1ffffffU & ((IData)(0x1e00000U) 
                                          + ((IData)(vlSymsp->TOP.x_offset) 
                                             + ((IData)(
                                                        (0x3fffffffULL 
                                                         & (VL_MULS_QQQ(50, 0x199aULL, 
                                                                        (0x3ffffffffffffULL 
                                                                         & VL_EXTENDS_QI(50,25, 
                                                                                (0x1ffffffU 
                                                                                & (vlSymsp->TOP.top__DOT__x
                                                                                [0x12U] 
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
                                                                                [0x12U] 
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

VL_INLINE_OPT void Vtop_mandelbrot_engine___combo__TOP__top__DOT__genblk1__BRA__18__KET____DOT__engine__0(Vtop_mandelbrot_engine* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_mandelbrot_engine___combo__TOP__top__DOT__genblk1__BRA__18__KET____DOT__engine__0\n"); );
    // Init
    CData/*2:0*/ __Vtableidx19;
    // Body
    __Vtableidx19 = ((((VL_LTS_III(25, 0x400000U, vlSelf->__PVT__distance) 
                        | ((IData)(vlSelf->__PVT__curr_iterations) 
                           == (0x3fU & (IData)(vlSymsp->TOP.iterations_max)))) 
                       | VL_GTS_III(32, 0U, VL_EXTENDS_II(32,25, vlSelf->__PVT__distance))) 
                      << 2U) | (IData)(vlSelf->__PVT__SM__DOT__state));
    vlSelf->__PVT__SM__DOT__next = Vtop__ConstPool__TABLE_hfad45a5e_0
        [__Vtableidx19];
    vlSelf->__PVT__init = Vtop__ConstPool__TABLE_hee55b61e_0
        [__Vtableidx19];
    vlSelf->en_pixel_map = Vtop__ConstPool__TABLE_hee55b61e_0
        [__Vtableidx19];
    vlSelf->__PVT__en_stage_1 = Vtop__ConstPool__TABLE_h73dc3151_0
        [__Vtableidx19];
    vlSelf->__PVT__en_stage_2 = Vtop__ConstPool__TABLE_h0933c3c1_0
        [__Vtableidx19];
    vlSelf->__PVT__distributor_ready = (((IData)(vlSelf->en_pixel_map) 
                                         & (vlSymsp->TOP.top__DOT__x
                                            [0x12U] 
                                            == (IData)(vlSelf->xpixel))) 
                                        & (vlSymsp->TOP.top__DOT__y
                                           [0x12U] 
                                           == (IData)(vlSelf->ypixel)));
}

VL_INLINE_OPT void Vtop_mandelbrot_engine___sequent__TOP__top__DOT__genblk1__BRA__19__KET____DOT__engine__0(Vtop_mandelbrot_engine* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_mandelbrot_engine___sequent__TOP__top__DOT__genblk1__BRA__19__KET____DOT__engine__0\n"); );
    // Init
    IData/*24:0*/ __Vdly__zr;
    // Body
    __Vdly__zr = vlSelf->__PVT__zr;
    if ((1U & ((~ (vlSymsp->TOP.top__DOT__full_queue_bus 
                   >> 0x13U)) & (~ (IData)(vlSelf->__PVT__distributor_ready))))) {
        vlSelf->__PVT__SM__DOT__state = vlSelf->__PVT__SM__DOT__next;
    }
    if (vlSelf->__PVT__init) {
        __Vdly__zr = 0U;
        vlSelf->__PVT__curr_iterations = 0U;
        vlSelf->__PVT__zr2 = 0U;
        vlSelf->__PVT__zi2 = 0U;
        vlSelf->__PVT__zi = 0U;
    } else {
        if ((((IData)(vlSelf->__PVT__en_stage_2) & 
              (~ (vlSymsp->TOP.top__DOT__full_queue_bus 
                  >> 0x13U))) & (~ (IData)(vlSelf->__PVT__distributor_ready)))) {
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
    if ((((IData)(vlSelf->en_pixel_map) & (~ (vlSymsp->TOP.top__DOT__full_queue_bus 
                                              >> 0x13U))) 
         & (~ (IData)(vlSelf->__PVT__distributor_ready)))) {
        vlSelf->ypixel = vlSymsp->TOP.top__DOT__y[0x13U];
        vlSelf->xpixel = vlSymsp->TOP.top__DOT__x[0x13U];
        vlSelf->__PVT__x = (0x1ffffffU & ((IData)(0x1e00000U) 
                                          + ((IData)(vlSymsp->TOP.x_offset) 
                                             + ((IData)(
                                                        (0x3fffffffULL 
                                                         & (VL_MULS_QQQ(50, 0x199aULL, 
                                                                        (0x3ffffffffffffULL 
                                                                         & VL_EXTENDS_QI(50,25, 
                                                                                (0x1ffffffU 
                                                                                & (vlSymsp->TOP.top__DOT__x
                                                                                [0x13U] 
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
                                                                                [0x13U] 
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

VL_INLINE_OPT void Vtop_mandelbrot_engine___combo__TOP__top__DOT__genblk1__BRA__19__KET____DOT__engine__0(Vtop_mandelbrot_engine* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_mandelbrot_engine___combo__TOP__top__DOT__genblk1__BRA__19__KET____DOT__engine__0\n"); );
    // Init
    CData/*2:0*/ __Vtableidx20;
    // Body
    __Vtableidx20 = ((((VL_LTS_III(25, 0x400000U, vlSelf->__PVT__distance) 
                        | ((IData)(vlSelf->__PVT__curr_iterations) 
                           == (0x3fU & (IData)(vlSymsp->TOP.iterations_max)))) 
                       | VL_GTS_III(32, 0U, VL_EXTENDS_II(32,25, vlSelf->__PVT__distance))) 
                      << 2U) | (IData)(vlSelf->__PVT__SM__DOT__state));
    vlSelf->__PVT__SM__DOT__next = Vtop__ConstPool__TABLE_hfad45a5e_0
        [__Vtableidx20];
    vlSelf->__PVT__init = Vtop__ConstPool__TABLE_hee55b61e_0
        [__Vtableidx20];
    vlSelf->en_pixel_map = Vtop__ConstPool__TABLE_hee55b61e_0
        [__Vtableidx20];
    vlSelf->__PVT__en_stage_1 = Vtop__ConstPool__TABLE_h73dc3151_0
        [__Vtableidx20];
    vlSelf->__PVT__en_stage_2 = Vtop__ConstPool__TABLE_h0933c3c1_0
        [__Vtableidx20];
    vlSelf->__PVT__distributor_ready = (((IData)(vlSelf->en_pixel_map) 
                                         & (vlSymsp->TOP.top__DOT__x
                                            [0x13U] 
                                            == (IData)(vlSelf->xpixel))) 
                                        & (vlSymsp->TOP.top__DOT__y
                                           [0x13U] 
                                           == (IData)(vlSelf->ypixel)));
}

VL_INLINE_OPT void Vtop_mandelbrot_engine___sequent__TOP__top__DOT__genblk1__BRA__20__KET____DOT__engine__0(Vtop_mandelbrot_engine* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_mandelbrot_engine___sequent__TOP__top__DOT__genblk1__BRA__20__KET____DOT__engine__0\n"); );
    // Init
    IData/*24:0*/ __Vdly__zr;
    // Body
    __Vdly__zr = vlSelf->__PVT__zr;
    if ((1U & ((~ (vlSymsp->TOP.top__DOT__full_queue_bus 
                   >> 0x14U)) & (~ (IData)(vlSelf->__PVT__distributor_ready))))) {
        vlSelf->__PVT__SM__DOT__state = vlSelf->__PVT__SM__DOT__next;
    }
    if (vlSelf->__PVT__init) {
        __Vdly__zr = 0U;
        vlSelf->__PVT__curr_iterations = 0U;
        vlSelf->__PVT__zr2 = 0U;
        vlSelf->__PVT__zi2 = 0U;
        vlSelf->__PVT__zi = 0U;
    } else {
        if ((((IData)(vlSelf->__PVT__en_stage_2) & 
              (~ (vlSymsp->TOP.top__DOT__full_queue_bus 
                  >> 0x14U))) & (~ (IData)(vlSelf->__PVT__distributor_ready)))) {
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
    if ((((IData)(vlSelf->en_pixel_map) & (~ (vlSymsp->TOP.top__DOT__full_queue_bus 
                                              >> 0x14U))) 
         & (~ (IData)(vlSelf->__PVT__distributor_ready)))) {
        vlSelf->ypixel = vlSymsp->TOP.top__DOT__y[0x14U];
        vlSelf->xpixel = vlSymsp->TOP.top__DOT__x[0x14U];
        vlSelf->__PVT__x = (0x1ffffffU & ((IData)(0x1e00000U) 
                                          + ((IData)(vlSymsp->TOP.x_offset) 
                                             + ((IData)(
                                                        (0x3fffffffULL 
                                                         & (VL_MULS_QQQ(50, 0x199aULL, 
                                                                        (0x3ffffffffffffULL 
                                                                         & VL_EXTENDS_QI(50,25, 
                                                                                (0x1ffffffU 
                                                                                & (vlSymsp->TOP.top__DOT__x
                                                                                [0x14U] 
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
                                                                                [0x14U] 
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

VL_INLINE_OPT void Vtop_mandelbrot_engine___combo__TOP__top__DOT__genblk1__BRA__20__KET____DOT__engine__0(Vtop_mandelbrot_engine* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_mandelbrot_engine___combo__TOP__top__DOT__genblk1__BRA__20__KET____DOT__engine__0\n"); );
    // Init
    CData/*2:0*/ __Vtableidx21;
    // Body
    __Vtableidx21 = ((((VL_LTS_III(25, 0x400000U, vlSelf->__PVT__distance) 
                        | ((IData)(vlSelf->__PVT__curr_iterations) 
                           == (0x3fU & (IData)(vlSymsp->TOP.iterations_max)))) 
                       | VL_GTS_III(32, 0U, VL_EXTENDS_II(32,25, vlSelf->__PVT__distance))) 
                      << 2U) | (IData)(vlSelf->__PVT__SM__DOT__state));
    vlSelf->__PVT__SM__DOT__next = Vtop__ConstPool__TABLE_hfad45a5e_0
        [__Vtableidx21];
    vlSelf->__PVT__init = Vtop__ConstPool__TABLE_hee55b61e_0
        [__Vtableidx21];
    vlSelf->en_pixel_map = Vtop__ConstPool__TABLE_hee55b61e_0
        [__Vtableidx21];
    vlSelf->__PVT__en_stage_1 = Vtop__ConstPool__TABLE_h73dc3151_0
        [__Vtableidx21];
    vlSelf->__PVT__en_stage_2 = Vtop__ConstPool__TABLE_h0933c3c1_0
        [__Vtableidx21];
    vlSelf->__PVT__distributor_ready = (((IData)(vlSelf->en_pixel_map) 
                                         & (vlSymsp->TOP.top__DOT__x
                                            [0x14U] 
                                            == (IData)(vlSelf->xpixel))) 
                                        & (vlSymsp->TOP.top__DOT__y
                                           [0x14U] 
                                           == (IData)(vlSelf->ypixel)));
}

VL_INLINE_OPT void Vtop_mandelbrot_engine___sequent__TOP__top__DOT__genblk1__BRA__21__KET____DOT__engine__0(Vtop_mandelbrot_engine* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_mandelbrot_engine___sequent__TOP__top__DOT__genblk1__BRA__21__KET____DOT__engine__0\n"); );
    // Init
    IData/*24:0*/ __Vdly__zr;
    // Body
    __Vdly__zr = vlSelf->__PVT__zr;
    if ((1U & ((~ (vlSymsp->TOP.top__DOT__full_queue_bus 
                   >> 0x15U)) & (~ (IData)(vlSelf->__PVT__distributor_ready))))) {
        vlSelf->__PVT__SM__DOT__state = vlSelf->__PVT__SM__DOT__next;
    }
    if (vlSelf->__PVT__init) {
        __Vdly__zr = 0U;
        vlSelf->__PVT__curr_iterations = 0U;
        vlSelf->__PVT__zr2 = 0U;
        vlSelf->__PVT__zi2 = 0U;
        vlSelf->__PVT__zi = 0U;
    } else {
        if ((((IData)(vlSelf->__PVT__en_stage_2) & 
              (~ (vlSymsp->TOP.top__DOT__full_queue_bus 
                  >> 0x15U))) & (~ (IData)(vlSelf->__PVT__distributor_ready)))) {
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
    if ((((IData)(vlSelf->en_pixel_map) & (~ (vlSymsp->TOP.top__DOT__full_queue_bus 
                                              >> 0x15U))) 
         & (~ (IData)(vlSelf->__PVT__distributor_ready)))) {
        vlSelf->ypixel = vlSymsp->TOP.top__DOT__y[0x15U];
        vlSelf->xpixel = vlSymsp->TOP.top__DOT__x[0x15U];
        vlSelf->__PVT__x = (0x1ffffffU & ((IData)(0x1e00000U) 
                                          + ((IData)(vlSymsp->TOP.x_offset) 
                                             + ((IData)(
                                                        (0x3fffffffULL 
                                                         & (VL_MULS_QQQ(50, 0x199aULL, 
                                                                        (0x3ffffffffffffULL 
                                                                         & VL_EXTENDS_QI(50,25, 
                                                                                (0x1ffffffU 
                                                                                & (vlSymsp->TOP.top__DOT__x
                                                                                [0x15U] 
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
                                                                                [0x15U] 
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

VL_INLINE_OPT void Vtop_mandelbrot_engine___combo__TOP__top__DOT__genblk1__BRA__21__KET____DOT__engine__0(Vtop_mandelbrot_engine* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_mandelbrot_engine___combo__TOP__top__DOT__genblk1__BRA__21__KET____DOT__engine__0\n"); );
    // Init
    CData/*2:0*/ __Vtableidx22;
    // Body
    __Vtableidx22 = ((((VL_LTS_III(25, 0x400000U, vlSelf->__PVT__distance) 
                        | ((IData)(vlSelf->__PVT__curr_iterations) 
                           == (0x3fU & (IData)(vlSymsp->TOP.iterations_max)))) 
                       | VL_GTS_III(32, 0U, VL_EXTENDS_II(32,25, vlSelf->__PVT__distance))) 
                      << 2U) | (IData)(vlSelf->__PVT__SM__DOT__state));
    vlSelf->__PVT__SM__DOT__next = Vtop__ConstPool__TABLE_hfad45a5e_0
        [__Vtableidx22];
    vlSelf->__PVT__init = Vtop__ConstPool__TABLE_hee55b61e_0
        [__Vtableidx22];
    vlSelf->en_pixel_map = Vtop__ConstPool__TABLE_hee55b61e_0
        [__Vtableidx22];
    vlSelf->__PVT__en_stage_1 = Vtop__ConstPool__TABLE_h73dc3151_0
        [__Vtableidx22];
    vlSelf->__PVT__en_stage_2 = Vtop__ConstPool__TABLE_h0933c3c1_0
        [__Vtableidx22];
    vlSelf->__PVT__distributor_ready = (((IData)(vlSelf->en_pixel_map) 
                                         & (vlSymsp->TOP.top__DOT__x
                                            [0x15U] 
                                            == (IData)(vlSelf->xpixel))) 
                                        & (vlSymsp->TOP.top__DOT__y
                                           [0x15U] 
                                           == (IData)(vlSelf->ypixel)));
}

VL_INLINE_OPT void Vtop_mandelbrot_engine___sequent__TOP__top__DOT__genblk1__BRA__22__KET____DOT__engine__0(Vtop_mandelbrot_engine* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_mandelbrot_engine___sequent__TOP__top__DOT__genblk1__BRA__22__KET____DOT__engine__0\n"); );
    // Init
    IData/*24:0*/ __Vdly__zr;
    // Body
    __Vdly__zr = vlSelf->__PVT__zr;
    if ((1U & ((~ (vlSymsp->TOP.top__DOT__full_queue_bus 
                   >> 0x16U)) & (~ (IData)(vlSelf->__PVT__distributor_ready))))) {
        vlSelf->__PVT__SM__DOT__state = vlSelf->__PVT__SM__DOT__next;
    }
    if (vlSelf->__PVT__init) {
        __Vdly__zr = 0U;
        vlSelf->__PVT__curr_iterations = 0U;
        vlSelf->__PVT__zr2 = 0U;
        vlSelf->__PVT__zi2 = 0U;
        vlSelf->__PVT__zi = 0U;
    } else {
        if ((((IData)(vlSelf->__PVT__en_stage_2) & 
              (~ (vlSymsp->TOP.top__DOT__full_queue_bus 
                  >> 0x16U))) & (~ (IData)(vlSelf->__PVT__distributor_ready)))) {
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
    if ((((IData)(vlSelf->en_pixel_map) & (~ (vlSymsp->TOP.top__DOT__full_queue_bus 
                                              >> 0x16U))) 
         & (~ (IData)(vlSelf->__PVT__distributor_ready)))) {
        vlSelf->ypixel = vlSymsp->TOP.top__DOT__y[0x16U];
        vlSelf->xpixel = vlSymsp->TOP.top__DOT__x[0x16U];
        vlSelf->__PVT__x = (0x1ffffffU & ((IData)(0x1e00000U) 
                                          + ((IData)(vlSymsp->TOP.x_offset) 
                                             + ((IData)(
                                                        (0x3fffffffULL 
                                                         & (VL_MULS_QQQ(50, 0x199aULL, 
                                                                        (0x3ffffffffffffULL 
                                                                         & VL_EXTENDS_QI(50,25, 
                                                                                (0x1ffffffU 
                                                                                & (vlSymsp->TOP.top__DOT__x
                                                                                [0x16U] 
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
                                                                                [0x16U] 
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

VL_INLINE_OPT void Vtop_mandelbrot_engine___combo__TOP__top__DOT__genblk1__BRA__22__KET____DOT__engine__0(Vtop_mandelbrot_engine* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_mandelbrot_engine___combo__TOP__top__DOT__genblk1__BRA__22__KET____DOT__engine__0\n"); );
    // Init
    CData/*2:0*/ __Vtableidx23;
    // Body
    __Vtableidx23 = ((((VL_LTS_III(25, 0x400000U, vlSelf->__PVT__distance) 
                        | ((IData)(vlSelf->__PVT__curr_iterations) 
                           == (0x3fU & (IData)(vlSymsp->TOP.iterations_max)))) 
                       | VL_GTS_III(32, 0U, VL_EXTENDS_II(32,25, vlSelf->__PVT__distance))) 
                      << 2U) | (IData)(vlSelf->__PVT__SM__DOT__state));
    vlSelf->__PVT__SM__DOT__next = Vtop__ConstPool__TABLE_hfad45a5e_0
        [__Vtableidx23];
    vlSelf->__PVT__init = Vtop__ConstPool__TABLE_hee55b61e_0
        [__Vtableidx23];
    vlSelf->en_pixel_map = Vtop__ConstPool__TABLE_hee55b61e_0
        [__Vtableidx23];
    vlSelf->__PVT__en_stage_1 = Vtop__ConstPool__TABLE_h73dc3151_0
        [__Vtableidx23];
    vlSelf->__PVT__en_stage_2 = Vtop__ConstPool__TABLE_h0933c3c1_0
        [__Vtableidx23];
    vlSelf->__PVT__distributor_ready = (((IData)(vlSelf->en_pixel_map) 
                                         & (vlSymsp->TOP.top__DOT__x
                                            [0x16U] 
                                            == (IData)(vlSelf->xpixel))) 
                                        & (vlSymsp->TOP.top__DOT__y
                                           [0x16U] 
                                           == (IData)(vlSelf->ypixel)));
}

VL_INLINE_OPT void Vtop_mandelbrot_engine___sequent__TOP__top__DOT__genblk1__BRA__23__KET____DOT__engine__0(Vtop_mandelbrot_engine* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_mandelbrot_engine___sequent__TOP__top__DOT__genblk1__BRA__23__KET____DOT__engine__0\n"); );
    // Init
    IData/*24:0*/ __Vdly__zr;
    // Body
    __Vdly__zr = vlSelf->__PVT__zr;
    if ((1U & ((~ (vlSymsp->TOP.top__DOT__full_queue_bus 
                   >> 0x17U)) & (~ (IData)(vlSelf->__PVT__distributor_ready))))) {
        vlSelf->__PVT__SM__DOT__state = vlSelf->__PVT__SM__DOT__next;
    }
    if (vlSelf->__PVT__init) {
        __Vdly__zr = 0U;
        vlSelf->__PVT__curr_iterations = 0U;
        vlSelf->__PVT__zr2 = 0U;
        vlSelf->__PVT__zi2 = 0U;
        vlSelf->__PVT__zi = 0U;
    } else {
        if ((((IData)(vlSelf->__PVT__en_stage_2) & 
              (~ (vlSymsp->TOP.top__DOT__full_queue_bus 
                  >> 0x17U))) & (~ (IData)(vlSelf->__PVT__distributor_ready)))) {
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
    if ((((IData)(vlSelf->en_pixel_map) & (~ (vlSymsp->TOP.top__DOT__full_queue_bus 
                                              >> 0x17U))) 
         & (~ (IData)(vlSelf->__PVT__distributor_ready)))) {
        vlSelf->ypixel = vlSymsp->TOP.top__DOT__y[0x17U];
        vlSelf->xpixel = vlSymsp->TOP.top__DOT__x[0x17U];
        vlSelf->__PVT__x = (0x1ffffffU & ((IData)(0x1e00000U) 
                                          + ((IData)(vlSymsp->TOP.x_offset) 
                                             + ((IData)(
                                                        (0x3fffffffULL 
                                                         & (VL_MULS_QQQ(50, 0x199aULL, 
                                                                        (0x3ffffffffffffULL 
                                                                         & VL_EXTENDS_QI(50,25, 
                                                                                (0x1ffffffU 
                                                                                & (vlSymsp->TOP.top__DOT__x
                                                                                [0x17U] 
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
                                                                                [0x17U] 
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

VL_INLINE_OPT void Vtop_mandelbrot_engine___combo__TOP__top__DOT__genblk1__BRA__23__KET____DOT__engine__0(Vtop_mandelbrot_engine* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_mandelbrot_engine___combo__TOP__top__DOT__genblk1__BRA__23__KET____DOT__engine__0\n"); );
    // Init
    CData/*2:0*/ __Vtableidx24;
    // Body
    __Vtableidx24 = ((((VL_LTS_III(25, 0x400000U, vlSelf->__PVT__distance) 
                        | ((IData)(vlSelf->__PVT__curr_iterations) 
                           == (0x3fU & (IData)(vlSymsp->TOP.iterations_max)))) 
                       | VL_GTS_III(32, 0U, VL_EXTENDS_II(32,25, vlSelf->__PVT__distance))) 
                      << 2U) | (IData)(vlSelf->__PVT__SM__DOT__state));
    vlSelf->__PVT__SM__DOT__next = Vtop__ConstPool__TABLE_hfad45a5e_0
        [__Vtableidx24];
    vlSelf->__PVT__init = Vtop__ConstPool__TABLE_hee55b61e_0
        [__Vtableidx24];
    vlSelf->en_pixel_map = Vtop__ConstPool__TABLE_hee55b61e_0
        [__Vtableidx24];
    vlSelf->__PVT__en_stage_1 = Vtop__ConstPool__TABLE_h73dc3151_0
        [__Vtableidx24];
    vlSelf->__PVT__en_stage_2 = Vtop__ConstPool__TABLE_h0933c3c1_0
        [__Vtableidx24];
    vlSelf->__PVT__distributor_ready = (((IData)(vlSelf->en_pixel_map) 
                                         & (vlSymsp->TOP.top__DOT__x
                                            [0x17U] 
                                            == (IData)(vlSelf->xpixel))) 
                                        & (vlSymsp->TOP.top__DOT__y
                                           [0x17U] 
                                           == (IData)(vlSelf->ypixel)));
}

VL_INLINE_OPT void Vtop_mandelbrot_engine___sequent__TOP__top__DOT__genblk1__BRA__24__KET____DOT__engine__0(Vtop_mandelbrot_engine* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_mandelbrot_engine___sequent__TOP__top__DOT__genblk1__BRA__24__KET____DOT__engine__0\n"); );
    // Init
    IData/*24:0*/ __Vdly__zr;
    // Body
    __Vdly__zr = vlSelf->__PVT__zr;
    if ((1U & ((~ (vlSymsp->TOP.top__DOT__full_queue_bus 
                   >> 0x18U)) & (~ (IData)(vlSelf->__PVT__distributor_ready))))) {
        vlSelf->__PVT__SM__DOT__state = vlSelf->__PVT__SM__DOT__next;
    }
    if (vlSelf->__PVT__init) {
        __Vdly__zr = 0U;
        vlSelf->__PVT__curr_iterations = 0U;
        vlSelf->__PVT__zr2 = 0U;
        vlSelf->__PVT__zi2 = 0U;
        vlSelf->__PVT__zi = 0U;
    } else {
        if ((((IData)(vlSelf->__PVT__en_stage_2) & 
              (~ (vlSymsp->TOP.top__DOT__full_queue_bus 
                  >> 0x18U))) & (~ (IData)(vlSelf->__PVT__distributor_ready)))) {
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
    if ((((IData)(vlSelf->en_pixel_map) & (~ (vlSymsp->TOP.top__DOT__full_queue_bus 
                                              >> 0x18U))) 
         & (~ (IData)(vlSelf->__PVT__distributor_ready)))) {
        vlSelf->ypixel = vlSymsp->TOP.top__DOT__y[0x18U];
        vlSelf->xpixel = vlSymsp->TOP.top__DOT__x[0x18U];
        vlSelf->__PVT__x = (0x1ffffffU & ((IData)(0x1e00000U) 
                                          + ((IData)(vlSymsp->TOP.x_offset) 
                                             + ((IData)(
                                                        (0x3fffffffULL 
                                                         & (VL_MULS_QQQ(50, 0x199aULL, 
                                                                        (0x3ffffffffffffULL 
                                                                         & VL_EXTENDS_QI(50,25, 
                                                                                (0x1ffffffU 
                                                                                & (vlSymsp->TOP.top__DOT__x
                                                                                [0x18U] 
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
                                                                                [0x18U] 
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

VL_INLINE_OPT void Vtop_mandelbrot_engine___combo__TOP__top__DOT__genblk1__BRA__24__KET____DOT__engine__0(Vtop_mandelbrot_engine* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_mandelbrot_engine___combo__TOP__top__DOT__genblk1__BRA__24__KET____DOT__engine__0\n"); );
    // Init
    CData/*2:0*/ __Vtableidx25;
    // Body
    __Vtableidx25 = ((((VL_LTS_III(25, 0x400000U, vlSelf->__PVT__distance) 
                        | ((IData)(vlSelf->__PVT__curr_iterations) 
                           == (0x3fU & (IData)(vlSymsp->TOP.iterations_max)))) 
                       | VL_GTS_III(32, 0U, VL_EXTENDS_II(32,25, vlSelf->__PVT__distance))) 
                      << 2U) | (IData)(vlSelf->__PVT__SM__DOT__state));
    vlSelf->__PVT__SM__DOT__next = Vtop__ConstPool__TABLE_hfad45a5e_0
        [__Vtableidx25];
    vlSelf->__PVT__init = Vtop__ConstPool__TABLE_hee55b61e_0
        [__Vtableidx25];
    vlSelf->en_pixel_map = Vtop__ConstPool__TABLE_hee55b61e_0
        [__Vtableidx25];
    vlSelf->__PVT__en_stage_1 = Vtop__ConstPool__TABLE_h73dc3151_0
        [__Vtableidx25];
    vlSelf->__PVT__en_stage_2 = Vtop__ConstPool__TABLE_h0933c3c1_0
        [__Vtableidx25];
    vlSelf->__PVT__distributor_ready = (((IData)(vlSelf->en_pixel_map) 
                                         & (vlSymsp->TOP.top__DOT__x
                                            [0x18U] 
                                            == (IData)(vlSelf->xpixel))) 
                                        & (vlSymsp->TOP.top__DOT__y
                                           [0x18U] 
                                           == (IData)(vlSelf->ypixel)));
}

VL_INLINE_OPT void Vtop_mandelbrot_engine___sequent__TOP__top__DOT__genblk1__BRA__25__KET____DOT__engine__0(Vtop_mandelbrot_engine* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_mandelbrot_engine___sequent__TOP__top__DOT__genblk1__BRA__25__KET____DOT__engine__0\n"); );
    // Init
    IData/*24:0*/ __Vdly__zr;
    // Body
    __Vdly__zr = vlSelf->__PVT__zr;
    if ((1U & ((~ (vlSymsp->TOP.top__DOT__full_queue_bus 
                   >> 0x19U)) & (~ (IData)(vlSelf->__PVT__distributor_ready))))) {
        vlSelf->__PVT__SM__DOT__state = vlSelf->__PVT__SM__DOT__next;
    }
    if (vlSelf->__PVT__init) {
        __Vdly__zr = 0U;
        vlSelf->__PVT__curr_iterations = 0U;
        vlSelf->__PVT__zr2 = 0U;
        vlSelf->__PVT__zi2 = 0U;
        vlSelf->__PVT__zi = 0U;
    } else {
        if ((((IData)(vlSelf->__PVT__en_stage_2) & 
              (~ (vlSymsp->TOP.top__DOT__full_queue_bus 
                  >> 0x19U))) & (~ (IData)(vlSelf->__PVT__distributor_ready)))) {
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
    if ((((IData)(vlSelf->en_pixel_map) & (~ (vlSymsp->TOP.top__DOT__full_queue_bus 
                                              >> 0x19U))) 
         & (~ (IData)(vlSelf->__PVT__distributor_ready)))) {
        vlSelf->ypixel = vlSymsp->TOP.top__DOT__y[0x19U];
        vlSelf->xpixel = vlSymsp->TOP.top__DOT__x[0x19U];
        vlSelf->__PVT__x = (0x1ffffffU & ((IData)(0x1e00000U) 
                                          + ((IData)(vlSymsp->TOP.x_offset) 
                                             + ((IData)(
                                                        (0x3fffffffULL 
                                                         & (VL_MULS_QQQ(50, 0x199aULL, 
                                                                        (0x3ffffffffffffULL 
                                                                         & VL_EXTENDS_QI(50,25, 
                                                                                (0x1ffffffU 
                                                                                & (vlSymsp->TOP.top__DOT__x
                                                                                [0x19U] 
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
                                                                                [0x19U] 
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

VL_INLINE_OPT void Vtop_mandelbrot_engine___combo__TOP__top__DOT__genblk1__BRA__25__KET____DOT__engine__0(Vtop_mandelbrot_engine* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_mandelbrot_engine___combo__TOP__top__DOT__genblk1__BRA__25__KET____DOT__engine__0\n"); );
    // Init
    CData/*2:0*/ __Vtableidx26;
    // Body
    __Vtableidx26 = ((((VL_LTS_III(25, 0x400000U, vlSelf->__PVT__distance) 
                        | ((IData)(vlSelf->__PVT__curr_iterations) 
                           == (0x3fU & (IData)(vlSymsp->TOP.iterations_max)))) 
                       | VL_GTS_III(32, 0U, VL_EXTENDS_II(32,25, vlSelf->__PVT__distance))) 
                      << 2U) | (IData)(vlSelf->__PVT__SM__DOT__state));
    vlSelf->__PVT__SM__DOT__next = Vtop__ConstPool__TABLE_hfad45a5e_0
        [__Vtableidx26];
    vlSelf->__PVT__init = Vtop__ConstPool__TABLE_hee55b61e_0
        [__Vtableidx26];
    vlSelf->en_pixel_map = Vtop__ConstPool__TABLE_hee55b61e_0
        [__Vtableidx26];
    vlSelf->__PVT__en_stage_1 = Vtop__ConstPool__TABLE_h73dc3151_0
        [__Vtableidx26];
    vlSelf->__PVT__en_stage_2 = Vtop__ConstPool__TABLE_h0933c3c1_0
        [__Vtableidx26];
    vlSelf->__PVT__distributor_ready = (((IData)(vlSelf->en_pixel_map) 
                                         & (vlSymsp->TOP.top__DOT__x
                                            [0x19U] 
                                            == (IData)(vlSelf->xpixel))) 
                                        & (vlSymsp->TOP.top__DOT__y
                                           [0x19U] 
                                           == (IData)(vlSelf->ypixel)));
}

VL_INLINE_OPT void Vtop_mandelbrot_engine___sequent__TOP__top__DOT__genblk1__BRA__26__KET____DOT__engine__0(Vtop_mandelbrot_engine* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_mandelbrot_engine___sequent__TOP__top__DOT__genblk1__BRA__26__KET____DOT__engine__0\n"); );
    // Init
    IData/*24:0*/ __Vdly__zr;
    // Body
    __Vdly__zr = vlSelf->__PVT__zr;
    if ((1U & ((~ (vlSymsp->TOP.top__DOT__full_queue_bus 
                   >> 0x1aU)) & (~ (IData)(vlSelf->__PVT__distributor_ready))))) {
        vlSelf->__PVT__SM__DOT__state = vlSelf->__PVT__SM__DOT__next;
    }
    if (vlSelf->__PVT__init) {
        __Vdly__zr = 0U;
        vlSelf->__PVT__curr_iterations = 0U;
        vlSelf->__PVT__zr2 = 0U;
        vlSelf->__PVT__zi2 = 0U;
        vlSelf->__PVT__zi = 0U;
    } else {
        if ((((IData)(vlSelf->__PVT__en_stage_2) & 
              (~ (vlSymsp->TOP.top__DOT__full_queue_bus 
                  >> 0x1aU))) & (~ (IData)(vlSelf->__PVT__distributor_ready)))) {
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
    if ((((IData)(vlSelf->en_pixel_map) & (~ (vlSymsp->TOP.top__DOT__full_queue_bus 
                                              >> 0x1aU))) 
         & (~ (IData)(vlSelf->__PVT__distributor_ready)))) {
        vlSelf->ypixel = vlSymsp->TOP.top__DOT__y[0x1aU];
        vlSelf->xpixel = vlSymsp->TOP.top__DOT__x[0x1aU];
        vlSelf->__PVT__x = (0x1ffffffU & ((IData)(0x1e00000U) 
                                          + ((IData)(vlSymsp->TOP.x_offset) 
                                             + ((IData)(
                                                        (0x3fffffffULL 
                                                         & (VL_MULS_QQQ(50, 0x199aULL, 
                                                                        (0x3ffffffffffffULL 
                                                                         & VL_EXTENDS_QI(50,25, 
                                                                                (0x1ffffffU 
                                                                                & (vlSymsp->TOP.top__DOT__x
                                                                                [0x1aU] 
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
                                                                                [0x1aU] 
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

VL_INLINE_OPT void Vtop_mandelbrot_engine___combo__TOP__top__DOT__genblk1__BRA__26__KET____DOT__engine__0(Vtop_mandelbrot_engine* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_mandelbrot_engine___combo__TOP__top__DOT__genblk1__BRA__26__KET____DOT__engine__0\n"); );
    // Init
    CData/*2:0*/ __Vtableidx27;
    // Body
    __Vtableidx27 = ((((VL_LTS_III(25, 0x400000U, vlSelf->__PVT__distance) 
                        | ((IData)(vlSelf->__PVT__curr_iterations) 
                           == (0x3fU & (IData)(vlSymsp->TOP.iterations_max)))) 
                       | VL_GTS_III(32, 0U, VL_EXTENDS_II(32,25, vlSelf->__PVT__distance))) 
                      << 2U) | (IData)(vlSelf->__PVT__SM__DOT__state));
    vlSelf->__PVT__SM__DOT__next = Vtop__ConstPool__TABLE_hfad45a5e_0
        [__Vtableidx27];
    vlSelf->__PVT__init = Vtop__ConstPool__TABLE_hee55b61e_0
        [__Vtableidx27];
    vlSelf->en_pixel_map = Vtop__ConstPool__TABLE_hee55b61e_0
        [__Vtableidx27];
    vlSelf->__PVT__en_stage_1 = Vtop__ConstPool__TABLE_h73dc3151_0
        [__Vtableidx27];
    vlSelf->__PVT__en_stage_2 = Vtop__ConstPool__TABLE_h0933c3c1_0
        [__Vtableidx27];
    vlSelf->__PVT__distributor_ready = (((IData)(vlSelf->en_pixel_map) 
                                         & (vlSymsp->TOP.top__DOT__x
                                            [0x1aU] 
                                            == (IData)(vlSelf->xpixel))) 
                                        & (vlSymsp->TOP.top__DOT__y
                                           [0x1aU] 
                                           == (IData)(vlSelf->ypixel)));
}

VL_INLINE_OPT void Vtop_mandelbrot_engine___sequent__TOP__top__DOT__genblk1__BRA__27__KET____DOT__engine__0(Vtop_mandelbrot_engine* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_mandelbrot_engine___sequent__TOP__top__DOT__genblk1__BRA__27__KET____DOT__engine__0\n"); );
    // Init
    IData/*24:0*/ __Vdly__zr;
    // Body
    __Vdly__zr = vlSelf->__PVT__zr;
    if ((1U & ((~ (vlSymsp->TOP.top__DOT__full_queue_bus 
                   >> 0x1bU)) & (~ (IData)(vlSelf->__PVT__distributor_ready))))) {
        vlSelf->__PVT__SM__DOT__state = vlSelf->__PVT__SM__DOT__next;
    }
    if (vlSelf->__PVT__init) {
        __Vdly__zr = 0U;
        vlSelf->__PVT__curr_iterations = 0U;
        vlSelf->__PVT__zr2 = 0U;
        vlSelf->__PVT__zi2 = 0U;
        vlSelf->__PVT__zi = 0U;
    } else {
        if ((((IData)(vlSelf->__PVT__en_stage_2) & 
              (~ (vlSymsp->TOP.top__DOT__full_queue_bus 
                  >> 0x1bU))) & (~ (IData)(vlSelf->__PVT__distributor_ready)))) {
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
    if ((((IData)(vlSelf->en_pixel_map) & (~ (vlSymsp->TOP.top__DOT__full_queue_bus 
                                              >> 0x1bU))) 
         & (~ (IData)(vlSelf->__PVT__distributor_ready)))) {
        vlSelf->ypixel = vlSymsp->TOP.top__DOT__y[0x1bU];
        vlSelf->xpixel = vlSymsp->TOP.top__DOT__x[0x1bU];
        vlSelf->__PVT__x = (0x1ffffffU & ((IData)(0x1e00000U) 
                                          + ((IData)(vlSymsp->TOP.x_offset) 
                                             + ((IData)(
                                                        (0x3fffffffULL 
                                                         & (VL_MULS_QQQ(50, 0x199aULL, 
                                                                        (0x3ffffffffffffULL 
                                                                         & VL_EXTENDS_QI(50,25, 
                                                                                (0x1ffffffU 
                                                                                & (vlSymsp->TOP.top__DOT__x
                                                                                [0x1bU] 
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
                                                                                [0x1bU] 
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

VL_INLINE_OPT void Vtop_mandelbrot_engine___combo__TOP__top__DOT__genblk1__BRA__27__KET____DOT__engine__0(Vtop_mandelbrot_engine* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_mandelbrot_engine___combo__TOP__top__DOT__genblk1__BRA__27__KET____DOT__engine__0\n"); );
    // Init
    CData/*2:0*/ __Vtableidx28;
    // Body
    __Vtableidx28 = ((((VL_LTS_III(25, 0x400000U, vlSelf->__PVT__distance) 
                        | ((IData)(vlSelf->__PVT__curr_iterations) 
                           == (0x3fU & (IData)(vlSymsp->TOP.iterations_max)))) 
                       | VL_GTS_III(32, 0U, VL_EXTENDS_II(32,25, vlSelf->__PVT__distance))) 
                      << 2U) | (IData)(vlSelf->__PVT__SM__DOT__state));
    vlSelf->__PVT__SM__DOT__next = Vtop__ConstPool__TABLE_hfad45a5e_0
        [__Vtableidx28];
    vlSelf->__PVT__init = Vtop__ConstPool__TABLE_hee55b61e_0
        [__Vtableidx28];
    vlSelf->en_pixel_map = Vtop__ConstPool__TABLE_hee55b61e_0
        [__Vtableidx28];
    vlSelf->__PVT__en_stage_1 = Vtop__ConstPool__TABLE_h73dc3151_0
        [__Vtableidx28];
    vlSelf->__PVT__en_stage_2 = Vtop__ConstPool__TABLE_h0933c3c1_0
        [__Vtableidx28];
    vlSelf->__PVT__distributor_ready = (((IData)(vlSelf->en_pixel_map) 
                                         & (vlSymsp->TOP.top__DOT__x
                                            [0x1bU] 
                                            == (IData)(vlSelf->xpixel))) 
                                        & (vlSymsp->TOP.top__DOT__y
                                           [0x1bU] 
                                           == (IData)(vlSelf->ypixel)));
}

VL_INLINE_OPT void Vtop_mandelbrot_engine___sequent__TOP__top__DOT__genblk1__BRA__28__KET____DOT__engine__0(Vtop_mandelbrot_engine* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_mandelbrot_engine___sequent__TOP__top__DOT__genblk1__BRA__28__KET____DOT__engine__0\n"); );
    // Init
    IData/*24:0*/ __Vdly__zr;
    // Body
    __Vdly__zr = vlSelf->__PVT__zr;
    if ((1U & ((~ (vlSymsp->TOP.top__DOT__full_queue_bus 
                   >> 0x1cU)) & (~ (IData)(vlSelf->__PVT__distributor_ready))))) {
        vlSelf->__PVT__SM__DOT__state = vlSelf->__PVT__SM__DOT__next;
    }
    if (vlSelf->__PVT__init) {
        __Vdly__zr = 0U;
        vlSelf->__PVT__curr_iterations = 0U;
        vlSelf->__PVT__zr2 = 0U;
        vlSelf->__PVT__zi2 = 0U;
        vlSelf->__PVT__zi = 0U;
    } else {
        if ((((IData)(vlSelf->__PVT__en_stage_2) & 
              (~ (vlSymsp->TOP.top__DOT__full_queue_bus 
                  >> 0x1cU))) & (~ (IData)(vlSelf->__PVT__distributor_ready)))) {
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
    if ((((IData)(vlSelf->en_pixel_map) & (~ (vlSymsp->TOP.top__DOT__full_queue_bus 
                                              >> 0x1cU))) 
         & (~ (IData)(vlSelf->__PVT__distributor_ready)))) {
        vlSelf->ypixel = vlSymsp->TOP.top__DOT__y[0x1cU];
        vlSelf->xpixel = vlSymsp->TOP.top__DOT__x[0x1cU];
        vlSelf->__PVT__x = (0x1ffffffU & ((IData)(0x1e00000U) 
                                          + ((IData)(vlSymsp->TOP.x_offset) 
                                             + ((IData)(
                                                        (0x3fffffffULL 
                                                         & (VL_MULS_QQQ(50, 0x199aULL, 
                                                                        (0x3ffffffffffffULL 
                                                                         & VL_EXTENDS_QI(50,25, 
                                                                                (0x1ffffffU 
                                                                                & (vlSymsp->TOP.top__DOT__x
                                                                                [0x1cU] 
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
                                                                                [0x1cU] 
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

VL_INLINE_OPT void Vtop_mandelbrot_engine___combo__TOP__top__DOT__genblk1__BRA__28__KET____DOT__engine__0(Vtop_mandelbrot_engine* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_mandelbrot_engine___combo__TOP__top__DOT__genblk1__BRA__28__KET____DOT__engine__0\n"); );
    // Init
    CData/*2:0*/ __Vtableidx29;
    // Body
    __Vtableidx29 = ((((VL_LTS_III(25, 0x400000U, vlSelf->__PVT__distance) 
                        | ((IData)(vlSelf->__PVT__curr_iterations) 
                           == (0x3fU & (IData)(vlSymsp->TOP.iterations_max)))) 
                       | VL_GTS_III(32, 0U, VL_EXTENDS_II(32,25, vlSelf->__PVT__distance))) 
                      << 2U) | (IData)(vlSelf->__PVT__SM__DOT__state));
    vlSelf->__PVT__SM__DOT__next = Vtop__ConstPool__TABLE_hfad45a5e_0
        [__Vtableidx29];
    vlSelf->__PVT__init = Vtop__ConstPool__TABLE_hee55b61e_0
        [__Vtableidx29];
    vlSelf->en_pixel_map = Vtop__ConstPool__TABLE_hee55b61e_0
        [__Vtableidx29];
    vlSelf->__PVT__en_stage_1 = Vtop__ConstPool__TABLE_h73dc3151_0
        [__Vtableidx29];
    vlSelf->__PVT__en_stage_2 = Vtop__ConstPool__TABLE_h0933c3c1_0
        [__Vtableidx29];
    vlSelf->__PVT__distributor_ready = (((IData)(vlSelf->en_pixel_map) 
                                         & (vlSymsp->TOP.top__DOT__x
                                            [0x1cU] 
                                            == (IData)(vlSelf->xpixel))) 
                                        & (vlSymsp->TOP.top__DOT__y
                                           [0x1cU] 
                                           == (IData)(vlSelf->ypixel)));
}

VL_INLINE_OPT void Vtop_mandelbrot_engine___sequent__TOP__top__DOT__genblk1__BRA__29__KET____DOT__engine__0(Vtop_mandelbrot_engine* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_mandelbrot_engine___sequent__TOP__top__DOT__genblk1__BRA__29__KET____DOT__engine__0\n"); );
    // Init
    IData/*24:0*/ __Vdly__zr;
    // Body
    __Vdly__zr = vlSelf->__PVT__zr;
    if ((1U & ((~ (vlSymsp->TOP.top__DOT__full_queue_bus 
                   >> 0x1dU)) & (~ (IData)(vlSelf->__PVT__distributor_ready))))) {
        vlSelf->__PVT__SM__DOT__state = vlSelf->__PVT__SM__DOT__next;
    }
    if (vlSelf->__PVT__init) {
        __Vdly__zr = 0U;
        vlSelf->__PVT__curr_iterations = 0U;
        vlSelf->__PVT__zr2 = 0U;
        vlSelf->__PVT__zi2 = 0U;
        vlSelf->__PVT__zi = 0U;
    } else {
        if ((((IData)(vlSelf->__PVT__en_stage_2) & 
              (~ (vlSymsp->TOP.top__DOT__full_queue_bus 
                  >> 0x1dU))) & (~ (IData)(vlSelf->__PVT__distributor_ready)))) {
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
    if ((((IData)(vlSelf->en_pixel_map) & (~ (vlSymsp->TOP.top__DOT__full_queue_bus 
                                              >> 0x1dU))) 
         & (~ (IData)(vlSelf->__PVT__distributor_ready)))) {
        vlSelf->ypixel = vlSymsp->TOP.top__DOT__y[0x1dU];
        vlSelf->xpixel = vlSymsp->TOP.top__DOT__x[0x1dU];
        vlSelf->__PVT__x = (0x1ffffffU & ((IData)(0x1e00000U) 
                                          + ((IData)(vlSymsp->TOP.x_offset) 
                                             + ((IData)(
                                                        (0x3fffffffULL 
                                                         & (VL_MULS_QQQ(50, 0x199aULL, 
                                                                        (0x3ffffffffffffULL 
                                                                         & VL_EXTENDS_QI(50,25, 
                                                                                (0x1ffffffU 
                                                                                & (vlSymsp->TOP.top__DOT__x
                                                                                [0x1dU] 
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
                                                                                [0x1dU] 
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

VL_INLINE_OPT void Vtop_mandelbrot_engine___combo__TOP__top__DOT__genblk1__BRA__29__KET____DOT__engine__0(Vtop_mandelbrot_engine* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_mandelbrot_engine___combo__TOP__top__DOT__genblk1__BRA__29__KET____DOT__engine__0\n"); );
    // Init
    CData/*2:0*/ __Vtableidx30;
    // Body
    __Vtableidx30 = ((((VL_LTS_III(25, 0x400000U, vlSelf->__PVT__distance) 
                        | ((IData)(vlSelf->__PVT__curr_iterations) 
                           == (0x3fU & (IData)(vlSymsp->TOP.iterations_max)))) 
                       | VL_GTS_III(32, 0U, VL_EXTENDS_II(32,25, vlSelf->__PVT__distance))) 
                      << 2U) | (IData)(vlSelf->__PVT__SM__DOT__state));
    vlSelf->__PVT__SM__DOT__next = Vtop__ConstPool__TABLE_hfad45a5e_0
        [__Vtableidx30];
    vlSelf->__PVT__init = Vtop__ConstPool__TABLE_hee55b61e_0
        [__Vtableidx30];
    vlSelf->en_pixel_map = Vtop__ConstPool__TABLE_hee55b61e_0
        [__Vtableidx30];
    vlSelf->__PVT__en_stage_1 = Vtop__ConstPool__TABLE_h73dc3151_0
        [__Vtableidx30];
    vlSelf->__PVT__en_stage_2 = Vtop__ConstPool__TABLE_h0933c3c1_0
        [__Vtableidx30];
    vlSelf->__PVT__distributor_ready = (((IData)(vlSelf->en_pixel_map) 
                                         & (vlSymsp->TOP.top__DOT__x
                                            [0x1dU] 
                                            == (IData)(vlSelf->xpixel))) 
                                        & (vlSymsp->TOP.top__DOT__y
                                           [0x1dU] 
                                           == (IData)(vlSelf->ypixel)));
}
