// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop_mandelbrot_engine.h"

VL_ATTR_COLD void Vtop_mandelbrot_engine___ctor_var_reset(Vtop_mandelbrot_engine* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_mandelbrot_engine___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->iterations_max = VL_RAND_RESET_I(6);
    vlSelf->x0_ = VL_RAND_RESET_I(10);
    vlSelf->y0_ = VL_RAND_RESET_I(10);
    vlSelf->zoom = VL_RAND_RESET_I(3);
    vlSelf->x_offset = VL_RAND_RESET_I(25);
    vlSelf->y_offset = VL_RAND_RESET_I(25);
    vlSelf->full_queue = VL_RAND_RESET_I(1);
    vlSelf->en_pixel_map = VL_RAND_RESET_I(1);
    vlSelf->iterations = VL_RAND_RESET_I(6);
    vlSelf->xpixel = VL_RAND_RESET_I(10);
    vlSelf->ypixel = VL_RAND_RESET_I(10);
    vlSelf->__PVT__x = VL_RAND_RESET_I(25);
    vlSelf->__PVT__y = VL_RAND_RESET_I(25);
    vlSelf->__PVT__distributor_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__curr_iterations = VL_RAND_RESET_I(6);
    vlSelf->__PVT__zr = VL_RAND_RESET_I(25);
    vlSelf->__PVT__zi = VL_RAND_RESET_I(25);
    vlSelf->__PVT__zr2 = VL_RAND_RESET_I(25);
    vlSelf->__PVT__zi2 = VL_RAND_RESET_I(25);
    vlSelf->__PVT__en_stage_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__en_stage_2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__init = VL_RAND_RESET_I(1);
    vlSelf->__PVT__distance = VL_RAND_RESET_I(25);
    vlSelf->__Vcellinp__R0__in = VL_RAND_RESET_I(6);
    vlSelf->__PVT__M7__DOT__product = VL_RAND_RESET_Q(50);
    vlSelf->__PVT__SM__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->__PVT__SM__DOT__next = VL_RAND_RESET_I(2);
}
