// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop_mandelbrot_engine.h"
#include "Vtop__Syms.h"

//==========

VL_INLINE_OPT void Vtop_mandelbrot_engine::_sequent__TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine__1(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_mandelbrot_engine::_sequent__TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine__1\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vdly__zr = this->__PVT__zr;
    if ((1U & ((~ (IData)(vlTOPp->top__DOT__full_queue_bus)) 
               & (~ (((IData)(this->en_pixel_map) & 
                      (vlTOPp->top__DOT__x[0U] == (IData)(this->xpixel))) 
                     & (vlTOPp->top__DOT__y[0U] == (IData)(this->ypixel))))))) {
        this->__PVT__SM__DOT__state = this->__PVT__SM__DOT__next;
    }
    if (this->__PVT__init) {
        this->__Vdly__zr = 0U;
    } else {
        if (this->__PVT__en_stage_1) {
            this->__Vdly__zr = (0x1ffffffU & ((this->__PVT__zr2 
                                               - this->__PVT__zi2) 
                                              + this->__PVT__x));
        }
    }
    if (this->__PVT__init) {
        this->__PVT__curr_iterations = 0U;
    } else {
        if (this->__PVT__en_stage_2) {
            this->__PVT__curr_iterations = this->__Vcellinp__R0__in;
        }
    }
    if (this->en_pixel_map) {
        this->xpixel = vlTOPp->top__DOT__x[0U];
    }
    if (this->en_pixel_map) {
        this->ypixel = vlTOPp->top__DOT__y[0U];
    }
    if (this->en_pixel_map) {
        this->__PVT__x = (0x1ffffffU & ((IData)(0x1e00000U) 
                                        + ((IData)(vlTOPp->x_offset) 
                                           + ((IData)(
                                                      (0x3fffffffULL 
                                                       & (VL_MULS_QQQ(50,50,50, 0x199aULL, 
                                                                      (0x3ffffffffffffULL 
                                                                       & VL_EXTENDS_QI(50,25, 
                                                                                (0x1ffffffU 
                                                                                & (vlTOPp->top__DOT__x
                                                                                [0U] 
                                                                                << 0xeU))))) 
                                                          >> 0x14U))) 
                                              << 6U))));
    }
    if (this->__PVT__init) {
        this->__PVT__zr2 = 0U;
    } else {
        if (this->__PVT__en_stage_2) {
            this->__PVT__zr2 = ((IData)(this->__PVT__init)
                                 ? 0U : (0x1ffffffU 
                                         & (IData)(
                                                   (0x3fffffffULL 
                                                    & (VL_MULS_QQQ(50,50,50, 
                                                                   (0x3ffffffffffffULL 
                                                                    & VL_EXTENDS_QI(50,25, this->__PVT__zr)), 
                                                                   (0x3ffffffffffffULL 
                                                                    & VL_EXTENDS_QI(50,25, this->__PVT__zr))) 
                                                       >> 0x14U)))));
        }
    }
    if (this->__PVT__init) {
        this->__PVT__zi2 = 0U;
    } else {
        if (this->__PVT__en_stage_2) {
            this->__PVT__zi2 = ((IData)(this->__PVT__init)
                                 ? 0U : (0x1ffffffU 
                                         & (IData)(
                                                   (0x3fffffffULL 
                                                    & (VL_MULS_QQQ(50,50,50, 
                                                                   (0x3ffffffffffffULL 
                                                                    & VL_EXTENDS_QI(50,25, this->__PVT__zi)), 
                                                                   (0x3ffffffffffffULL 
                                                                    & VL_EXTENDS_QI(50,25, this->__PVT__zi))) 
                                                       >> 0x14U)))));
        }
    }
    this->__Vcellinp__R0__in = (0x3fU & ((IData)(1U) 
                                         + (IData)(this->__PVT__curr_iterations)));
    this->__PVT__zr = this->__Vdly__zr;
    this->__PVT__distance = (0x1ffffffU & (this->__PVT__zr2 
                                           + this->__PVT__zi2));
    if (this->__PVT__init) {
        this->__PVT__zi = 0U;
    } else {
        if (this->__PVT__en_stage_1) {
            this->__PVT__zi = (0x1ffffffU & ((((IData)(this->__PVT__init)
                                                ? 0U
                                                : (0x1ffffffU 
                                                   & (IData)(
                                                             (this->__PVT__M7__DOT__product 
                                                              >> 0x14U)))) 
                                              << 1U) 
                                             + this->__PVT__y));
        }
    }
    this->__PVT__M7__DOT__product = (0x3ffffffffffffULL 
                                     & VL_MULS_QQQ(50,50,50, 
                                                   (0x3ffffffffffffULL 
                                                    & VL_EXTENDS_QI(50,25, this->__PVT__zr)), 
                                                   (0x3ffffffffffffULL 
                                                    & VL_EXTENDS_QI(50,25, this->__PVT__zi))));
    if (this->en_pixel_map) {
        this->__PVT__y = (0x1ffffffU & ((IData)(0x1e80000U) 
                                        + ((IData)(vlTOPp->y_offset) 
                                           + ((IData)(
                                                      (0x3fffffffULL 
                                                       & (VL_MULS_QQQ(50,50,50, 0x199aULL, 
                                                                      (0x3ffffffffffffULL 
                                                                       & VL_EXTENDS_QI(50,25, 
                                                                                (0x1ffffffU 
                                                                                & (vlTOPp->top__DOT__y
                                                                                [0U] 
                                                                                << 0xeU))))) 
                                                          >> 0x14U))) 
                                              << 6U))));
    }
}

VL_INLINE_OPT void Vtop_mandelbrot_engine::_combo__TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine__13(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_mandelbrot_engine::_combo__TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine__13\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vtableidx1 = ((((VL_LTS_III(1,25,25, 0x400000U, this->__PVT__distance) 
                             | ((IData)(this->__PVT__curr_iterations) 
                                == (0x3fU & vlTOPp->iterations_max))) 
                            | VL_GTS_III(1,32,32, 0U, 
                                         VL_EXTENDS_II(32,25, this->__PVT__distance))) 
                           << 2U) | (IData)(this->__PVT__SM__DOT__state));
    this->__PVT__SM__DOT__next = this->__Vtable1___PVT__SM__DOT__next
        [this->__Vtableidx1];
    this->__PVT__init = this->__Vtable1___PVT__init
        [this->__Vtableidx1];
    this->en_pixel_map = this->__Vtable1_en_pixel_map
        [this->__Vtableidx1];
    this->__PVT__en_stage_1 = this->__Vtable1___PVT__en_stage_1
        [this->__Vtableidx1];
    this->__PVT__en_stage_2 = this->__Vtable1___PVT__en_stage_2
        [this->__Vtableidx1];
}

VL_INLINE_OPT void Vtop_mandelbrot_engine::_sequent__TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine__2(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_mandelbrot_engine::_sequent__TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine__2\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vdly__zr = this->__PVT__zr;
    if ((1U & ((~ ((IData)(vlTOPp->top__DOT__full_queue_bus) 
                   >> 1U)) & (~ (((IData)(this->en_pixel_map) 
                                  & (vlTOPp->top__DOT__x
                                     [1U] == (IData)(this->xpixel))) 
                                 & (vlTOPp->top__DOT__y
                                    [1U] == (IData)(this->ypixel))))))) {
        this->__PVT__SM__DOT__state = this->__PVT__SM__DOT__next;
    }
    if (this->__PVT__init) {
        this->__Vdly__zr = 0U;
    } else {
        if (this->__PVT__en_stage_1) {
            this->__Vdly__zr = (0x1ffffffU & ((this->__PVT__zr2 
                                               - this->__PVT__zi2) 
                                              + this->__PVT__x));
        }
    }
    if (this->__PVT__init) {
        this->__PVT__curr_iterations = 0U;
    } else {
        if (this->__PVT__en_stage_2) {
            this->__PVT__curr_iterations = this->__Vcellinp__R0__in;
        }
    }
    if (this->en_pixel_map) {
        this->xpixel = vlTOPp->top__DOT__x[1U];
    }
    if (this->en_pixel_map) {
        this->ypixel = vlTOPp->top__DOT__y[1U];
    }
    if (this->en_pixel_map) {
        this->__PVT__x = (0x1ffffffU & ((IData)(0x1e00000U) 
                                        + ((IData)(vlTOPp->x_offset) 
                                           + ((IData)(
                                                      (0x3fffffffULL 
                                                       & (VL_MULS_QQQ(50,50,50, 0x199aULL, 
                                                                      (0x3ffffffffffffULL 
                                                                       & VL_EXTENDS_QI(50,25, 
                                                                                (0x1ffffffU 
                                                                                & (vlTOPp->top__DOT__x
                                                                                [1U] 
                                                                                << 0xeU))))) 
                                                          >> 0x14U))) 
                                              << 6U))));
    }
    if (this->__PVT__init) {
        this->__PVT__zr2 = 0U;
    } else {
        if (this->__PVT__en_stage_2) {
            this->__PVT__zr2 = ((IData)(this->__PVT__init)
                                 ? 0U : (0x1ffffffU 
                                         & (IData)(
                                                   (0x3fffffffULL 
                                                    & (VL_MULS_QQQ(50,50,50, 
                                                                   (0x3ffffffffffffULL 
                                                                    & VL_EXTENDS_QI(50,25, this->__PVT__zr)), 
                                                                   (0x3ffffffffffffULL 
                                                                    & VL_EXTENDS_QI(50,25, this->__PVT__zr))) 
                                                       >> 0x14U)))));
        }
    }
    if (this->__PVT__init) {
        this->__PVT__zi2 = 0U;
    } else {
        if (this->__PVT__en_stage_2) {
            this->__PVT__zi2 = ((IData)(this->__PVT__init)
                                 ? 0U : (0x1ffffffU 
                                         & (IData)(
                                                   (0x3fffffffULL 
                                                    & (VL_MULS_QQQ(50,50,50, 
                                                                   (0x3ffffffffffffULL 
                                                                    & VL_EXTENDS_QI(50,25, this->__PVT__zi)), 
                                                                   (0x3ffffffffffffULL 
                                                                    & VL_EXTENDS_QI(50,25, this->__PVT__zi))) 
                                                       >> 0x14U)))));
        }
    }
    this->__Vcellinp__R0__in = (0x3fU & ((IData)(1U) 
                                         + (IData)(this->__PVT__curr_iterations)));
    this->__PVT__zr = this->__Vdly__zr;
    this->__PVT__distance = (0x1ffffffU & (this->__PVT__zr2 
                                           + this->__PVT__zi2));
    if (this->__PVT__init) {
        this->__PVT__zi = 0U;
    } else {
        if (this->__PVT__en_stage_1) {
            this->__PVT__zi = (0x1ffffffU & ((((IData)(this->__PVT__init)
                                                ? 0U
                                                : (0x1ffffffU 
                                                   & (IData)(
                                                             (this->__PVT__M7__DOT__product 
                                                              >> 0x14U)))) 
                                              << 1U) 
                                             + this->__PVT__y));
        }
    }
    this->__PVT__M7__DOT__product = (0x3ffffffffffffULL 
                                     & VL_MULS_QQQ(50,50,50, 
                                                   (0x3ffffffffffffULL 
                                                    & VL_EXTENDS_QI(50,25, this->__PVT__zr)), 
                                                   (0x3ffffffffffffULL 
                                                    & VL_EXTENDS_QI(50,25, this->__PVT__zi))));
    if (this->en_pixel_map) {
        this->__PVT__y = (0x1ffffffU & ((IData)(0x1e80000U) 
                                        + ((IData)(vlTOPp->y_offset) 
                                           + ((IData)(
                                                      (0x3fffffffULL 
                                                       & (VL_MULS_QQQ(50,50,50, 0x199aULL, 
                                                                      (0x3ffffffffffffULL 
                                                                       & VL_EXTENDS_QI(50,25, 
                                                                                (0x1ffffffU 
                                                                                & (vlTOPp->top__DOT__y
                                                                                [1U] 
                                                                                << 0xeU))))) 
                                                          >> 0x14U))) 
                                              << 6U))));
    }
}

VL_INLINE_OPT void Vtop_mandelbrot_engine::_combo__TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine__14(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_mandelbrot_engine::_combo__TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine__14\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vtableidx2 = ((((VL_LTS_III(1,25,25, 0x400000U, this->__PVT__distance) 
                             | ((IData)(this->__PVT__curr_iterations) 
                                == (0x3fU & vlTOPp->iterations_max))) 
                            | VL_GTS_III(1,32,32, 0U, 
                                         VL_EXTENDS_II(32,25, this->__PVT__distance))) 
                           << 2U) | (IData)(this->__PVT__SM__DOT__state));
    this->__PVT__SM__DOT__next = this->__Vtable2___PVT__SM__DOT__next
        [this->__Vtableidx2];
    this->__PVT__init = this->__Vtable2___PVT__init
        [this->__Vtableidx2];
    this->en_pixel_map = this->__Vtable2_en_pixel_map
        [this->__Vtableidx2];
    this->__PVT__en_stage_1 = this->__Vtable2___PVT__en_stage_1
        [this->__Vtableidx2];
    this->__PVT__en_stage_2 = this->__Vtable2___PVT__en_stage_2
        [this->__Vtableidx2];
}

VL_INLINE_OPT void Vtop_mandelbrot_engine::_sequent__TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine__3(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_mandelbrot_engine::_sequent__TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine__3\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vdly__zr = this->__PVT__zr;
    if ((1U & ((~ ((IData)(vlTOPp->top__DOT__full_queue_bus) 
                   >> 2U)) & (~ (((IData)(this->en_pixel_map) 
                                  & (vlTOPp->top__DOT__x
                                     [2U] == (IData)(this->xpixel))) 
                                 & (vlTOPp->top__DOT__y
                                    [2U] == (IData)(this->ypixel))))))) {
        this->__PVT__SM__DOT__state = this->__PVT__SM__DOT__next;
    }
    if (this->__PVT__init) {
        this->__Vdly__zr = 0U;
    } else {
        if (this->__PVT__en_stage_1) {
            this->__Vdly__zr = (0x1ffffffU & ((this->__PVT__zr2 
                                               - this->__PVT__zi2) 
                                              + this->__PVT__x));
        }
    }
    if (this->__PVT__init) {
        this->__PVT__curr_iterations = 0U;
    } else {
        if (this->__PVT__en_stage_2) {
            this->__PVT__curr_iterations = this->__Vcellinp__R0__in;
        }
    }
    if (this->en_pixel_map) {
        this->xpixel = vlTOPp->top__DOT__x[2U];
    }
    if (this->en_pixel_map) {
        this->ypixel = vlTOPp->top__DOT__y[2U];
    }
    if (this->en_pixel_map) {
        this->__PVT__x = (0x1ffffffU & ((IData)(0x1e00000U) 
                                        + ((IData)(vlTOPp->x_offset) 
                                           + ((IData)(
                                                      (0x3fffffffULL 
                                                       & (VL_MULS_QQQ(50,50,50, 0x199aULL, 
                                                                      (0x3ffffffffffffULL 
                                                                       & VL_EXTENDS_QI(50,25, 
                                                                                (0x1ffffffU 
                                                                                & (vlTOPp->top__DOT__x
                                                                                [2U] 
                                                                                << 0xeU))))) 
                                                          >> 0x14U))) 
                                              << 6U))));
    }
    if (this->__PVT__init) {
        this->__PVT__zr2 = 0U;
    } else {
        if (this->__PVT__en_stage_2) {
            this->__PVT__zr2 = ((IData)(this->__PVT__init)
                                 ? 0U : (0x1ffffffU 
                                         & (IData)(
                                                   (0x3fffffffULL 
                                                    & (VL_MULS_QQQ(50,50,50, 
                                                                   (0x3ffffffffffffULL 
                                                                    & VL_EXTENDS_QI(50,25, this->__PVT__zr)), 
                                                                   (0x3ffffffffffffULL 
                                                                    & VL_EXTENDS_QI(50,25, this->__PVT__zr))) 
                                                       >> 0x14U)))));
        }
    }
    if (this->__PVT__init) {
        this->__PVT__zi2 = 0U;
    } else {
        if (this->__PVT__en_stage_2) {
            this->__PVT__zi2 = ((IData)(this->__PVT__init)
                                 ? 0U : (0x1ffffffU 
                                         & (IData)(
                                                   (0x3fffffffULL 
                                                    & (VL_MULS_QQQ(50,50,50, 
                                                                   (0x3ffffffffffffULL 
                                                                    & VL_EXTENDS_QI(50,25, this->__PVT__zi)), 
                                                                   (0x3ffffffffffffULL 
                                                                    & VL_EXTENDS_QI(50,25, this->__PVT__zi))) 
                                                       >> 0x14U)))));
        }
    }
    this->__Vcellinp__R0__in = (0x3fU & ((IData)(1U) 
                                         + (IData)(this->__PVT__curr_iterations)));
    this->__PVT__zr = this->__Vdly__zr;
    this->__PVT__distance = (0x1ffffffU & (this->__PVT__zr2 
                                           + this->__PVT__zi2));
    if (this->__PVT__init) {
        this->__PVT__zi = 0U;
    } else {
        if (this->__PVT__en_stage_1) {
            this->__PVT__zi = (0x1ffffffU & ((((IData)(this->__PVT__init)
                                                ? 0U
                                                : (0x1ffffffU 
                                                   & (IData)(
                                                             (this->__PVT__M7__DOT__product 
                                                              >> 0x14U)))) 
                                              << 1U) 
                                             + this->__PVT__y));
        }
    }
    this->__PVT__M7__DOT__product = (0x3ffffffffffffULL 
                                     & VL_MULS_QQQ(50,50,50, 
                                                   (0x3ffffffffffffULL 
                                                    & VL_EXTENDS_QI(50,25, this->__PVT__zr)), 
                                                   (0x3ffffffffffffULL 
                                                    & VL_EXTENDS_QI(50,25, this->__PVT__zi))));
    if (this->en_pixel_map) {
        this->__PVT__y = (0x1ffffffU & ((IData)(0x1e80000U) 
                                        + ((IData)(vlTOPp->y_offset) 
                                           + ((IData)(
                                                      (0x3fffffffULL 
                                                       & (VL_MULS_QQQ(50,50,50, 0x199aULL, 
                                                                      (0x3ffffffffffffULL 
                                                                       & VL_EXTENDS_QI(50,25, 
                                                                                (0x1ffffffU 
                                                                                & (vlTOPp->top__DOT__y
                                                                                [2U] 
                                                                                << 0xeU))))) 
                                                          >> 0x14U))) 
                                              << 6U))));
    }
}

VL_INLINE_OPT void Vtop_mandelbrot_engine::_combo__TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine__15(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_mandelbrot_engine::_combo__TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine__15\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vtableidx3 = ((((VL_LTS_III(1,25,25, 0x400000U, this->__PVT__distance) 
                             | ((IData)(this->__PVT__curr_iterations) 
                                == (0x3fU & vlTOPp->iterations_max))) 
                            | VL_GTS_III(1,32,32, 0U, 
                                         VL_EXTENDS_II(32,25, this->__PVT__distance))) 
                           << 2U) | (IData)(this->__PVT__SM__DOT__state));
    this->__PVT__SM__DOT__next = this->__Vtable3___PVT__SM__DOT__next
        [this->__Vtableidx3];
    this->__PVT__init = this->__Vtable3___PVT__init
        [this->__Vtableidx3];
    this->en_pixel_map = this->__Vtable3_en_pixel_map
        [this->__Vtableidx3];
    this->__PVT__en_stage_1 = this->__Vtable3___PVT__en_stage_1
        [this->__Vtableidx3];
    this->__PVT__en_stage_2 = this->__Vtable3___PVT__en_stage_2
        [this->__Vtableidx3];
}

VL_INLINE_OPT void Vtop_mandelbrot_engine::_sequent__TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine__4(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_mandelbrot_engine::_sequent__TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine__4\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vdly__zr = this->__PVT__zr;
    if ((1U & ((~ ((IData)(vlTOPp->top__DOT__full_queue_bus) 
                   >> 3U)) & (~ (((IData)(this->en_pixel_map) 
                                  & (vlTOPp->top__DOT__x
                                     [3U] == (IData)(this->xpixel))) 
                                 & (vlTOPp->top__DOT__y
                                    [3U] == (IData)(this->ypixel))))))) {
        this->__PVT__SM__DOT__state = this->__PVT__SM__DOT__next;
    }
    if (this->__PVT__init) {
        this->__Vdly__zr = 0U;
    } else {
        if (this->__PVT__en_stage_1) {
            this->__Vdly__zr = (0x1ffffffU & ((this->__PVT__zr2 
                                               - this->__PVT__zi2) 
                                              + this->__PVT__x));
        }
    }
    if (this->__PVT__init) {
        this->__PVT__curr_iterations = 0U;
    } else {
        if (this->__PVT__en_stage_2) {
            this->__PVT__curr_iterations = this->__Vcellinp__R0__in;
        }
    }
    if (this->en_pixel_map) {
        this->xpixel = vlTOPp->top__DOT__x[3U];
    }
    if (this->en_pixel_map) {
        this->ypixel = vlTOPp->top__DOT__y[3U];
    }
    if (this->en_pixel_map) {
        this->__PVT__x = (0x1ffffffU & ((IData)(0x1e00000U) 
                                        + ((IData)(vlTOPp->x_offset) 
                                           + ((IData)(
                                                      (0x3fffffffULL 
                                                       & (VL_MULS_QQQ(50,50,50, 0x199aULL, 
                                                                      (0x3ffffffffffffULL 
                                                                       & VL_EXTENDS_QI(50,25, 
                                                                                (0x1ffffffU 
                                                                                & (vlTOPp->top__DOT__x
                                                                                [3U] 
                                                                                << 0xeU))))) 
                                                          >> 0x14U))) 
                                              << 6U))));
    }
    if (this->__PVT__init) {
        this->__PVT__zr2 = 0U;
    } else {
        if (this->__PVT__en_stage_2) {
            this->__PVT__zr2 = ((IData)(this->__PVT__init)
                                 ? 0U : (0x1ffffffU 
                                         & (IData)(
                                                   (0x3fffffffULL 
                                                    & (VL_MULS_QQQ(50,50,50, 
                                                                   (0x3ffffffffffffULL 
                                                                    & VL_EXTENDS_QI(50,25, this->__PVT__zr)), 
                                                                   (0x3ffffffffffffULL 
                                                                    & VL_EXTENDS_QI(50,25, this->__PVT__zr))) 
                                                       >> 0x14U)))));
        }
    }
    if (this->__PVT__init) {
        this->__PVT__zi2 = 0U;
    } else {
        if (this->__PVT__en_stage_2) {
            this->__PVT__zi2 = ((IData)(this->__PVT__init)
                                 ? 0U : (0x1ffffffU 
                                         & (IData)(
                                                   (0x3fffffffULL 
                                                    & (VL_MULS_QQQ(50,50,50, 
                                                                   (0x3ffffffffffffULL 
                                                                    & VL_EXTENDS_QI(50,25, this->__PVT__zi)), 
                                                                   (0x3ffffffffffffULL 
                                                                    & VL_EXTENDS_QI(50,25, this->__PVT__zi))) 
                                                       >> 0x14U)))));
        }
    }
    this->__Vcellinp__R0__in = (0x3fU & ((IData)(1U) 
                                         + (IData)(this->__PVT__curr_iterations)));
    this->__PVT__zr = this->__Vdly__zr;
    this->__PVT__distance = (0x1ffffffU & (this->__PVT__zr2 
                                           + this->__PVT__zi2));
    if (this->__PVT__init) {
        this->__PVT__zi = 0U;
    } else {
        if (this->__PVT__en_stage_1) {
            this->__PVT__zi = (0x1ffffffU & ((((IData)(this->__PVT__init)
                                                ? 0U
                                                : (0x1ffffffU 
                                                   & (IData)(
                                                             (this->__PVT__M7__DOT__product 
                                                              >> 0x14U)))) 
                                              << 1U) 
                                             + this->__PVT__y));
        }
    }
    this->__PVT__M7__DOT__product = (0x3ffffffffffffULL 
                                     & VL_MULS_QQQ(50,50,50, 
                                                   (0x3ffffffffffffULL 
                                                    & VL_EXTENDS_QI(50,25, this->__PVT__zr)), 
                                                   (0x3ffffffffffffULL 
                                                    & VL_EXTENDS_QI(50,25, this->__PVT__zi))));
    if (this->en_pixel_map) {
        this->__PVT__y = (0x1ffffffU & ((IData)(0x1e80000U) 
                                        + ((IData)(vlTOPp->y_offset) 
                                           + ((IData)(
                                                      (0x3fffffffULL 
                                                       & (VL_MULS_QQQ(50,50,50, 0x199aULL, 
                                                                      (0x3ffffffffffffULL 
                                                                       & VL_EXTENDS_QI(50,25, 
                                                                                (0x1ffffffU 
                                                                                & (vlTOPp->top__DOT__y
                                                                                [3U] 
                                                                                << 0xeU))))) 
                                                          >> 0x14U))) 
                                              << 6U))));
    }
}

VL_INLINE_OPT void Vtop_mandelbrot_engine::_combo__TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine__16(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_mandelbrot_engine::_combo__TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine__16\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vtableidx4 = ((((VL_LTS_III(1,25,25, 0x400000U, this->__PVT__distance) 
                             | ((IData)(this->__PVT__curr_iterations) 
                                == (0x3fU & vlTOPp->iterations_max))) 
                            | VL_GTS_III(1,32,32, 0U, 
                                         VL_EXTENDS_II(32,25, this->__PVT__distance))) 
                           << 2U) | (IData)(this->__PVT__SM__DOT__state));
    this->__PVT__SM__DOT__next = this->__Vtable4___PVT__SM__DOT__next
        [this->__Vtableidx4];
    this->__PVT__init = this->__Vtable4___PVT__init
        [this->__Vtableidx4];
    this->en_pixel_map = this->__Vtable4_en_pixel_map
        [this->__Vtableidx4];
    this->__PVT__en_stage_1 = this->__Vtable4___PVT__en_stage_1
        [this->__Vtableidx4];
    this->__PVT__en_stage_2 = this->__Vtable4___PVT__en_stage_2
        [this->__Vtableidx4];
}

VL_INLINE_OPT void Vtop_mandelbrot_engine::_sequent__TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine__5(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_mandelbrot_engine::_sequent__TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine__5\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vdly__zr = this->__PVT__zr;
    if ((1U & ((~ ((IData)(vlTOPp->top__DOT__full_queue_bus) 
                   >> 4U)) & (~ (((IData)(this->en_pixel_map) 
                                  & (vlTOPp->top__DOT__x
                                     [4U] == (IData)(this->xpixel))) 
                                 & (vlTOPp->top__DOT__y
                                    [4U] == (IData)(this->ypixel))))))) {
        this->__PVT__SM__DOT__state = this->__PVT__SM__DOT__next;
    }
    if (this->__PVT__init) {
        this->__Vdly__zr = 0U;
    } else {
        if (this->__PVT__en_stage_1) {
            this->__Vdly__zr = (0x1ffffffU & ((this->__PVT__zr2 
                                               - this->__PVT__zi2) 
                                              + this->__PVT__x));
        }
    }
    if (this->__PVT__init) {
        this->__PVT__curr_iterations = 0U;
    } else {
        if (this->__PVT__en_stage_2) {
            this->__PVT__curr_iterations = this->__Vcellinp__R0__in;
        }
    }
    if (this->en_pixel_map) {
        this->xpixel = vlTOPp->top__DOT__x[4U];
    }
    if (this->en_pixel_map) {
        this->ypixel = vlTOPp->top__DOT__y[4U];
    }
    if (this->en_pixel_map) {
        this->__PVT__x = (0x1ffffffU & ((IData)(0x1e00000U) 
                                        + ((IData)(vlTOPp->x_offset) 
                                           + ((IData)(
                                                      (0x3fffffffULL 
                                                       & (VL_MULS_QQQ(50,50,50, 0x199aULL, 
                                                                      (0x3ffffffffffffULL 
                                                                       & VL_EXTENDS_QI(50,25, 
                                                                                (0x1ffffffU 
                                                                                & (vlTOPp->top__DOT__x
                                                                                [4U] 
                                                                                << 0xeU))))) 
                                                          >> 0x14U))) 
                                              << 6U))));
    }
    if (this->__PVT__init) {
        this->__PVT__zr2 = 0U;
    } else {
        if (this->__PVT__en_stage_2) {
            this->__PVT__zr2 = ((IData)(this->__PVT__init)
                                 ? 0U : (0x1ffffffU 
                                         & (IData)(
                                                   (0x3fffffffULL 
                                                    & (VL_MULS_QQQ(50,50,50, 
                                                                   (0x3ffffffffffffULL 
                                                                    & VL_EXTENDS_QI(50,25, this->__PVT__zr)), 
                                                                   (0x3ffffffffffffULL 
                                                                    & VL_EXTENDS_QI(50,25, this->__PVT__zr))) 
                                                       >> 0x14U)))));
        }
    }
    if (this->__PVT__init) {
        this->__PVT__zi2 = 0U;
    } else {
        if (this->__PVT__en_stage_2) {
            this->__PVT__zi2 = ((IData)(this->__PVT__init)
                                 ? 0U : (0x1ffffffU 
                                         & (IData)(
                                                   (0x3fffffffULL 
                                                    & (VL_MULS_QQQ(50,50,50, 
                                                                   (0x3ffffffffffffULL 
                                                                    & VL_EXTENDS_QI(50,25, this->__PVT__zi)), 
                                                                   (0x3ffffffffffffULL 
                                                                    & VL_EXTENDS_QI(50,25, this->__PVT__zi))) 
                                                       >> 0x14U)))));
        }
    }
    this->__Vcellinp__R0__in = (0x3fU & ((IData)(1U) 
                                         + (IData)(this->__PVT__curr_iterations)));
    this->__PVT__zr = this->__Vdly__zr;
    this->__PVT__distance = (0x1ffffffU & (this->__PVT__zr2 
                                           + this->__PVT__zi2));
    if (this->__PVT__init) {
        this->__PVT__zi = 0U;
    } else {
        if (this->__PVT__en_stage_1) {
            this->__PVT__zi = (0x1ffffffU & ((((IData)(this->__PVT__init)
                                                ? 0U
                                                : (0x1ffffffU 
                                                   & (IData)(
                                                             (this->__PVT__M7__DOT__product 
                                                              >> 0x14U)))) 
                                              << 1U) 
                                             + this->__PVT__y));
        }
    }
    this->__PVT__M7__DOT__product = (0x3ffffffffffffULL 
                                     & VL_MULS_QQQ(50,50,50, 
                                                   (0x3ffffffffffffULL 
                                                    & VL_EXTENDS_QI(50,25, this->__PVT__zr)), 
                                                   (0x3ffffffffffffULL 
                                                    & VL_EXTENDS_QI(50,25, this->__PVT__zi))));
    if (this->en_pixel_map) {
        this->__PVT__y = (0x1ffffffU & ((IData)(0x1e80000U) 
                                        + ((IData)(vlTOPp->y_offset) 
                                           + ((IData)(
                                                      (0x3fffffffULL 
                                                       & (VL_MULS_QQQ(50,50,50, 0x199aULL, 
                                                                      (0x3ffffffffffffULL 
                                                                       & VL_EXTENDS_QI(50,25, 
                                                                                (0x1ffffffU 
                                                                                & (vlTOPp->top__DOT__y
                                                                                [4U] 
                                                                                << 0xeU))))) 
                                                          >> 0x14U))) 
                                              << 6U))));
    }
}

VL_INLINE_OPT void Vtop_mandelbrot_engine::_combo__TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine__17(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_mandelbrot_engine::_combo__TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine__17\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vtableidx5 = ((((VL_LTS_III(1,25,25, 0x400000U, this->__PVT__distance) 
                             | ((IData)(this->__PVT__curr_iterations) 
                                == (0x3fU & vlTOPp->iterations_max))) 
                            | VL_GTS_III(1,32,32, 0U, 
                                         VL_EXTENDS_II(32,25, this->__PVT__distance))) 
                           << 2U) | (IData)(this->__PVT__SM__DOT__state));
    this->__PVT__SM__DOT__next = this->__Vtable5___PVT__SM__DOT__next
        [this->__Vtableidx5];
    this->__PVT__init = this->__Vtable5___PVT__init
        [this->__Vtableidx5];
    this->en_pixel_map = this->__Vtable5_en_pixel_map
        [this->__Vtableidx5];
    this->__PVT__en_stage_1 = this->__Vtable5___PVT__en_stage_1
        [this->__Vtableidx5];
    this->__PVT__en_stage_2 = this->__Vtable5___PVT__en_stage_2
        [this->__Vtableidx5];
}

VL_INLINE_OPT void Vtop_mandelbrot_engine::_sequent__TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine__6(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_mandelbrot_engine::_sequent__TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine__6\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vdly__zr = this->__PVT__zr;
    if ((1U & ((~ ((IData)(vlTOPp->top__DOT__full_queue_bus) 
                   >> 5U)) & (~ (((IData)(this->en_pixel_map) 
                                  & (vlTOPp->top__DOT__x
                                     [5U] == (IData)(this->xpixel))) 
                                 & (vlTOPp->top__DOT__y
                                    [5U] == (IData)(this->ypixel))))))) {
        this->__PVT__SM__DOT__state = this->__PVT__SM__DOT__next;
    }
    if (this->__PVT__init) {
        this->__Vdly__zr = 0U;
    } else {
        if (this->__PVT__en_stage_1) {
            this->__Vdly__zr = (0x1ffffffU & ((this->__PVT__zr2 
                                               - this->__PVT__zi2) 
                                              + this->__PVT__x));
        }
    }
    if (this->__PVT__init) {
        this->__PVT__curr_iterations = 0U;
    } else {
        if (this->__PVT__en_stage_2) {
            this->__PVT__curr_iterations = this->__Vcellinp__R0__in;
        }
    }
    if (this->en_pixel_map) {
        this->xpixel = vlTOPp->top__DOT__x[5U];
    }
    if (this->en_pixel_map) {
        this->ypixel = vlTOPp->top__DOT__y[5U];
    }
    if (this->en_pixel_map) {
        this->__PVT__x = (0x1ffffffU & ((IData)(0x1e00000U) 
                                        + ((IData)(vlTOPp->x_offset) 
                                           + ((IData)(
                                                      (0x3fffffffULL 
                                                       & (VL_MULS_QQQ(50,50,50, 0x199aULL, 
                                                                      (0x3ffffffffffffULL 
                                                                       & VL_EXTENDS_QI(50,25, 
                                                                                (0x1ffffffU 
                                                                                & (vlTOPp->top__DOT__x
                                                                                [5U] 
                                                                                << 0xeU))))) 
                                                          >> 0x14U))) 
                                              << 6U))));
    }
    if (this->__PVT__init) {
        this->__PVT__zr2 = 0U;
    } else {
        if (this->__PVT__en_stage_2) {
            this->__PVT__zr2 = ((IData)(this->__PVT__init)
                                 ? 0U : (0x1ffffffU 
                                         & (IData)(
                                                   (0x3fffffffULL 
                                                    & (VL_MULS_QQQ(50,50,50, 
                                                                   (0x3ffffffffffffULL 
                                                                    & VL_EXTENDS_QI(50,25, this->__PVT__zr)), 
                                                                   (0x3ffffffffffffULL 
                                                                    & VL_EXTENDS_QI(50,25, this->__PVT__zr))) 
                                                       >> 0x14U)))));
        }
    }
    if (this->__PVT__init) {
        this->__PVT__zi2 = 0U;
    } else {
        if (this->__PVT__en_stage_2) {
            this->__PVT__zi2 = ((IData)(this->__PVT__init)
                                 ? 0U : (0x1ffffffU 
                                         & (IData)(
                                                   (0x3fffffffULL 
                                                    & (VL_MULS_QQQ(50,50,50, 
                                                                   (0x3ffffffffffffULL 
                                                                    & VL_EXTENDS_QI(50,25, this->__PVT__zi)), 
                                                                   (0x3ffffffffffffULL 
                                                                    & VL_EXTENDS_QI(50,25, this->__PVT__zi))) 
                                                       >> 0x14U)))));
        }
    }
    this->__Vcellinp__R0__in = (0x3fU & ((IData)(1U) 
                                         + (IData)(this->__PVT__curr_iterations)));
    this->__PVT__zr = this->__Vdly__zr;
    this->__PVT__distance = (0x1ffffffU & (this->__PVT__zr2 
                                           + this->__PVT__zi2));
    if (this->__PVT__init) {
        this->__PVT__zi = 0U;
    } else {
        if (this->__PVT__en_stage_1) {
            this->__PVT__zi = (0x1ffffffU & ((((IData)(this->__PVT__init)
                                                ? 0U
                                                : (0x1ffffffU 
                                                   & (IData)(
                                                             (this->__PVT__M7__DOT__product 
                                                              >> 0x14U)))) 
                                              << 1U) 
                                             + this->__PVT__y));
        }
    }
    this->__PVT__M7__DOT__product = (0x3ffffffffffffULL 
                                     & VL_MULS_QQQ(50,50,50, 
                                                   (0x3ffffffffffffULL 
                                                    & VL_EXTENDS_QI(50,25, this->__PVT__zr)), 
                                                   (0x3ffffffffffffULL 
                                                    & VL_EXTENDS_QI(50,25, this->__PVT__zi))));
    if (this->en_pixel_map) {
        this->__PVT__y = (0x1ffffffU & ((IData)(0x1e80000U) 
                                        + ((IData)(vlTOPp->y_offset) 
                                           + ((IData)(
                                                      (0x3fffffffULL 
                                                       & (VL_MULS_QQQ(50,50,50, 0x199aULL, 
                                                                      (0x3ffffffffffffULL 
                                                                       & VL_EXTENDS_QI(50,25, 
                                                                                (0x1ffffffU 
                                                                                & (vlTOPp->top__DOT__y
                                                                                [5U] 
                                                                                << 0xeU))))) 
                                                          >> 0x14U))) 
                                              << 6U))));
    }
}

VL_INLINE_OPT void Vtop_mandelbrot_engine::_combo__TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine__18(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_mandelbrot_engine::_combo__TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine__18\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vtableidx6 = ((((VL_LTS_III(1,25,25, 0x400000U, this->__PVT__distance) 
                             | ((IData)(this->__PVT__curr_iterations) 
                                == (0x3fU & vlTOPp->iterations_max))) 
                            | VL_GTS_III(1,32,32, 0U, 
                                         VL_EXTENDS_II(32,25, this->__PVT__distance))) 
                           << 2U) | (IData)(this->__PVT__SM__DOT__state));
    this->__PVT__SM__DOT__next = this->__Vtable6___PVT__SM__DOT__next
        [this->__Vtableidx6];
    this->__PVT__init = this->__Vtable6___PVT__init
        [this->__Vtableidx6];
    this->en_pixel_map = this->__Vtable6_en_pixel_map
        [this->__Vtableidx6];
    this->__PVT__en_stage_1 = this->__Vtable6___PVT__en_stage_1
        [this->__Vtableidx6];
    this->__PVT__en_stage_2 = this->__Vtable6___PVT__en_stage_2
        [this->__Vtableidx6];
}
