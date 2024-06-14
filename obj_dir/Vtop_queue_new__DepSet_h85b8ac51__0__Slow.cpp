// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop_queue_new.h"

VL_ATTR_COLD void Vtop_queue_new___initial__TOP__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__0(Vtop_queue_new* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_queue_new___initial__TOP__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__0\n"); );
    // Body
    vlSelf->__PVT__prev_xpixel = 0x3ffU;
    vlSelf->en = 0U;
    vlSelf->match = 0U;
    vlSelf->__PVT__colour_queue[0U] = 0U;
    vlSelf->__PVT__xqueue[0U] = 0x3ffU;
    vlSelf->__PVT__yqueue[0U] = 0x3ffU;
    vlSelf->__PVT__colour_queue[1U] = 0U;
    vlSelf->__PVT__xqueue[1U] = 0x3ffU;
    vlSelf->__PVT__yqueue[1U] = 0x3ffU;
    vlSelf->__PVT__colour_queue[2U] = 0U;
    vlSelf->__PVT__xqueue[2U] = 0x3ffU;
    vlSelf->__PVT__yqueue[2U] = 0x3ffU;
    vlSelf->__PVT__colour_queue[3U] = 0U;
    vlSelf->__PVT__xqueue[3U] = 0x3ffU;
    vlSelf->__PVT__yqueue[3U] = 0x3ffU;
    vlSelf->__PVT__colour_queue[4U] = 0U;
    vlSelf->__PVT__xqueue[4U] = 0x3ffU;
    vlSelf->__PVT__yqueue[4U] = 0x3ffU;
    vlSelf->__PVT__colour_queue[5U] = 0U;
    vlSelf->__PVT__xqueue[5U] = 0x3ffU;
    vlSelf->__PVT__yqueue[5U] = 0x3ffU;
    vlSelf->__PVT__colour_queue[6U] = 0U;
    vlSelf->__PVT__xqueue[6U] = 0x3ffU;
    vlSelf->__PVT__yqueue[6U] = 0x3ffU;
    vlSelf->__PVT__colour_queue[7U] = 0U;
    vlSelf->__PVT__xqueue[7U] = 0x3ffU;
    vlSelf->__PVT__yqueue[7U] = 0x3ffU;
    vlSelf->__PVT__colour_queue[8U] = 0U;
    vlSelf->__PVT__xqueue[8U] = 0x3ffU;
    vlSelf->__PVT__yqueue[8U] = 0x3ffU;
    vlSelf->__PVT__colour_queue[9U] = 0U;
    vlSelf->__PVT__xqueue[9U] = 0x3ffU;
    vlSelf->__PVT__yqueue[9U] = 0x3ffU;
    vlSelf->__PVT__unnamedblk1__DOT__i = 0xaU;
}

VL_ATTR_COLD void Vtop_queue_new___ctor_var_reset(Vtop_queue_new* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_queue_new___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->fin_flag = VL_RAND_RESET_I(1);
    vlSelf->colour_i = VL_RAND_RESET_I(24);
    vlSelf->xpixel_i = VL_RAND_RESET_I(10);
    vlSelf->ypixel_i = VL_RAND_RESET_I(10);
    vlSelf->xpixel_check = VL_RAND_RESET_I(10);
    vlSelf->ypixel_check = VL_RAND_RESET_I(10);
    vlSelf->colour_o = VL_RAND_RESET_I(24);
    vlSelf->full_queue = VL_RAND_RESET_I(1);
    vlSelf->en = VL_RAND_RESET_I(1);
    vlSelf->match = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<10; ++__Vi0) {
        vlSelf->__PVT__colour_queue[__Vi0] = VL_RAND_RESET_I(24);
    }
    for (int __Vi0=0; __Vi0<10; ++__Vi0) {
        vlSelf->__PVT__xqueue[__Vi0] = VL_RAND_RESET_I(10);
    }
    for (int __Vi0=0; __Vi0<10; ++__Vi0) {
        vlSelf->__PVT__yqueue[__Vi0] = VL_RAND_RESET_I(10);
    }
    vlSelf->__PVT__counter = VL_RAND_RESET_I(4);
    vlSelf->__PVT__prev_xpixel = VL_RAND_RESET_I(10);
    vlSelf->__PVT__unnamedblk1__DOT__i = 0;
    vlSelf->__PVT__unnamedblk2__DOT__i = 0;
    vlSelf->__PVT__unnamedblk3__DOT__i = 0;
    vlSelf->__Vlvbound_he6b57a3a__0 = VL_RAND_RESET_I(24);
    vlSelf->__Vlvbound_ha6a48450__0 = VL_RAND_RESET_I(10);
    vlSelf->__Vlvbound_hb8aa41f5__0 = VL_RAND_RESET_I(10);
    vlSelf->__Vlvbound_ha987a96c__0 = VL_RAND_RESET_I(24);
    vlSelf->__Vlvbound_h66ba8f5e__0 = VL_RAND_RESET_I(10);
    vlSelf->__Vlvbound_h73829ee7__0 = VL_RAND_RESET_I(10);
    vlSelf->__Vdly__counter = VL_RAND_RESET_I(4);
    vlSelf->__Vdlyvset__colour_queue__v0 = 0;
    vlSelf->__Vdlyvdim0__colour_queue__v10 = 0;
    vlSelf->__Vdlyvval__colour_queue__v10 = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvset__colour_queue__v10 = 0;
    vlSelf->__Vdlyvdim0__xqueue__v10 = 0;
    vlSelf->__Vdlyvval__xqueue__v10 = VL_RAND_RESET_I(10);
    vlSelf->__Vdlyvset__xqueue__v10 = 0;
    vlSelf->__Vdlyvdim0__yqueue__v10 = 0;
    vlSelf->__Vdlyvval__yqueue__v10 = VL_RAND_RESET_I(10);
    vlSelf->__Vdlyvset__yqueue__v10 = 0;
    vlSelf->__Vdlyvval__xqueue__v11 = VL_RAND_RESET_I(10);
    vlSelf->__Vdlyvset__xqueue__v11 = 0;
    vlSelf->__Vdlyvval__yqueue__v11 = VL_RAND_RESET_I(10);
    vlSelf->__Vdlyvval__colour_queue__v11 = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvset__colour_queue__v11 = 0;
    vlSelf->__Vdlyvval__xqueue__v12 = VL_RAND_RESET_I(10);
    vlSelf->__Vdlyvval__yqueue__v12 = VL_RAND_RESET_I(10);
    vlSelf->__Vdlyvval__colour_queue__v12 = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvset__colour_queue__v12 = 0;
    vlSelf->__Vdlyvval__xqueue__v13 = VL_RAND_RESET_I(10);
    vlSelf->__Vdlyvval__yqueue__v13 = VL_RAND_RESET_I(10);
    vlSelf->__Vdlyvval__colour_queue__v13 = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvset__colour_queue__v13 = 0;
    vlSelf->__Vdlyvval__xqueue__v14 = VL_RAND_RESET_I(10);
    vlSelf->__Vdlyvval__yqueue__v14 = VL_RAND_RESET_I(10);
    vlSelf->__Vdlyvval__colour_queue__v14 = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvset__colour_queue__v14 = 0;
    vlSelf->__Vdlyvval__xqueue__v15 = VL_RAND_RESET_I(10);
    vlSelf->__Vdlyvval__yqueue__v15 = VL_RAND_RESET_I(10);
    vlSelf->__Vdlyvval__colour_queue__v15 = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvset__colour_queue__v15 = 0;
    vlSelf->__Vdlyvval__xqueue__v16 = VL_RAND_RESET_I(10);
    vlSelf->__Vdlyvval__yqueue__v16 = VL_RAND_RESET_I(10);
    vlSelf->__Vdlyvval__colour_queue__v16 = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvset__colour_queue__v16 = 0;
    vlSelf->__Vdlyvval__xqueue__v17 = VL_RAND_RESET_I(10);
    vlSelf->__Vdlyvval__yqueue__v17 = VL_RAND_RESET_I(10);
    vlSelf->__Vdlyvval__colour_queue__v17 = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvset__colour_queue__v17 = 0;
    vlSelf->__Vdlyvval__xqueue__v18 = VL_RAND_RESET_I(10);
    vlSelf->__Vdlyvval__yqueue__v18 = VL_RAND_RESET_I(10);
    vlSelf->__Vdlyvval__colour_queue__v18 = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvset__colour_queue__v18 = 0;
    vlSelf->__Vdlyvval__xqueue__v19 = VL_RAND_RESET_I(10);
    vlSelf->__Vdlyvval__yqueue__v19 = VL_RAND_RESET_I(10);
    vlSelf->__Vdlyvset__xqueue__v20 = 0;
    vlSelf->__Vdlyvval__colour_queue__v19 = VL_RAND_RESET_I(24);
}
