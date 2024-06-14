// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop__Syms.h"
#include "Vtop_queue_new.h"

VL_INLINE_OPT void Vtop_queue_new___sequent__TOP__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__0(Vtop_queue_new* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_queue_new___sequent__TOP__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__0\n"); );
    // Body
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__unnamedblk2__DOT__i = 0xaU;
    }
}

VL_INLINE_OPT void Vtop_queue_new___sequent__TOP__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__2(Vtop_queue_new* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_queue_new___sequent__TOP__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__2\n"); );
    // Body
    if ((((IData)(vlSymsp->TOP.top__DOT__xpixel_wire) 
          == vlSelf->__PVT__xqueue[0U]) & ((IData)(vlSymsp->TOP.top__DOT__ypixel_wire) 
                                           == vlSelf->__PVT__yqueue
                                           [0U]))) {
        vlSelf->__Vlvbound_h66ba8f5e__0 = vlSelf->__PVT__xqueue
            [1U];
        vlSelf->__Vlvbound_h73829ee7__0 = vlSelf->__PVT__yqueue
            [1U];
        vlSelf->__PVT__unnamedblk3__DOT__i = 9U;
        vlSelf->__Vdly__counter = (0xfU & ((IData)(vlSelf->__PVT__counter) 
                                           - (IData)(1U)));
        vlSelf->colour_o = vlSelf->__PVT__colour_queue
            [0U];
        vlSelf->__Vlvbound_ha987a96c__0 = vlSelf->__PVT__colour_queue
            [1U];
        vlSelf->__Vdlyvval__xqueue__v11 = vlSelf->__Vlvbound_h66ba8f5e__0;
        vlSelf->__Vdlyvset__xqueue__v11 = 1U;
        vlSelf->__Vdlyvval__yqueue__v11 = vlSelf->__Vlvbound_h73829ee7__0;
        vlSelf->__Vlvbound_h66ba8f5e__0 = vlSelf->__PVT__xqueue
            [2U];
        vlSelf->__Vlvbound_h73829ee7__0 = vlSelf->__PVT__yqueue
            [2U];
        vlSelf->__Vdlyvval__colour_queue__v11 = vlSelf->__Vlvbound_ha987a96c__0;
        vlSelf->__Vdlyvset__colour_queue__v11 = 1U;
        vlSelf->__Vdlyvval__xqueue__v12 = vlSelf->__Vlvbound_h66ba8f5e__0;
        vlSelf->__Vdlyvval__yqueue__v12 = vlSelf->__Vlvbound_h73829ee7__0;
        vlSelf->__Vlvbound_ha987a96c__0 = vlSelf->__PVT__colour_queue
            [2U];
        vlSelf->__Vlvbound_h66ba8f5e__0 = vlSelf->__PVT__xqueue
            [3U];
        vlSelf->__Vlvbound_h73829ee7__0 = vlSelf->__PVT__yqueue
            [3U];
        vlSelf->__Vdlyvval__colour_queue__v12 = vlSelf->__Vlvbound_ha987a96c__0;
        vlSelf->__Vdlyvset__colour_queue__v12 = 1U;
        vlSelf->__Vdlyvval__xqueue__v13 = vlSelf->__Vlvbound_h66ba8f5e__0;
        vlSelf->__Vdlyvval__yqueue__v13 = vlSelf->__Vlvbound_h73829ee7__0;
        vlSelf->__Vlvbound_ha987a96c__0 = vlSelf->__PVT__colour_queue
            [3U];
        vlSelf->__Vlvbound_h66ba8f5e__0 = vlSelf->__PVT__xqueue
            [4U];
        vlSelf->__Vlvbound_h73829ee7__0 = vlSelf->__PVT__yqueue
            [4U];
        vlSelf->__Vdlyvval__colour_queue__v13 = vlSelf->__Vlvbound_ha987a96c__0;
        vlSelf->__Vdlyvset__colour_queue__v13 = 1U;
        vlSelf->__Vdlyvval__xqueue__v14 = vlSelf->__Vlvbound_h66ba8f5e__0;
        vlSelf->__Vdlyvval__yqueue__v14 = vlSelf->__Vlvbound_h73829ee7__0;
        vlSelf->__Vlvbound_ha987a96c__0 = vlSelf->__PVT__colour_queue
            [4U];
        vlSelf->__Vlvbound_h66ba8f5e__0 = vlSelf->__PVT__xqueue
            [5U];
        vlSelf->__Vlvbound_h73829ee7__0 = vlSelf->__PVT__yqueue
            [5U];
        vlSelf->__Vdlyvval__colour_queue__v14 = vlSelf->__Vlvbound_ha987a96c__0;
        vlSelf->__Vdlyvset__colour_queue__v14 = 1U;
        vlSelf->__Vdlyvval__xqueue__v15 = vlSelf->__Vlvbound_h66ba8f5e__0;
        vlSelf->__Vdlyvval__yqueue__v15 = vlSelf->__Vlvbound_h73829ee7__0;
        vlSelf->__Vlvbound_ha987a96c__0 = vlSelf->__PVT__colour_queue
            [5U];
        vlSelf->__Vlvbound_h66ba8f5e__0 = vlSelf->__PVT__xqueue
            [6U];
        vlSelf->__Vlvbound_h73829ee7__0 = vlSelf->__PVT__yqueue
            [6U];
        vlSelf->__Vdlyvval__colour_queue__v15 = vlSelf->__Vlvbound_ha987a96c__0;
        vlSelf->__Vdlyvset__colour_queue__v15 = 1U;
        vlSelf->__Vdlyvval__xqueue__v16 = vlSelf->__Vlvbound_h66ba8f5e__0;
        vlSelf->__Vdlyvval__yqueue__v16 = vlSelf->__Vlvbound_h73829ee7__0;
        vlSelf->__Vlvbound_ha987a96c__0 = vlSelf->__PVT__colour_queue
            [6U];
        vlSelf->__Vlvbound_h66ba8f5e__0 = vlSelf->__PVT__xqueue
            [7U];
        vlSelf->__Vlvbound_h73829ee7__0 = vlSelf->__PVT__yqueue
            [7U];
        vlSelf->__Vdlyvval__colour_queue__v16 = vlSelf->__Vlvbound_ha987a96c__0;
        vlSelf->__Vdlyvset__colour_queue__v16 = 1U;
        vlSelf->__Vdlyvval__xqueue__v17 = vlSelf->__Vlvbound_h66ba8f5e__0;
        vlSelf->__Vdlyvval__yqueue__v17 = vlSelf->__Vlvbound_h73829ee7__0;
        vlSelf->__Vlvbound_ha987a96c__0 = vlSelf->__PVT__colour_queue
            [7U];
        vlSelf->__Vlvbound_h66ba8f5e__0 = vlSelf->__PVT__xqueue
            [8U];
        vlSelf->__Vlvbound_h73829ee7__0 = vlSelf->__PVT__yqueue
            [8U];
        vlSelf->__Vdlyvval__colour_queue__v17 = vlSelf->__Vlvbound_ha987a96c__0;
        vlSelf->__Vdlyvset__colour_queue__v17 = 1U;
        vlSelf->__Vdlyvval__xqueue__v18 = vlSelf->__Vlvbound_h66ba8f5e__0;
        vlSelf->__Vdlyvval__yqueue__v18 = vlSelf->__Vlvbound_h73829ee7__0;
        vlSelf->__Vlvbound_ha987a96c__0 = vlSelf->__PVT__colour_queue
            [8U];
        vlSelf->__Vlvbound_h66ba8f5e__0 = vlSelf->__PVT__xqueue
            [9U];
        vlSelf->__Vlvbound_h73829ee7__0 = vlSelf->__PVT__yqueue
            [9U];
        vlSelf->__Vdlyvval__colour_queue__v18 = vlSelf->__Vlvbound_ha987a96c__0;
        vlSelf->__Vdlyvset__colour_queue__v18 = 1U;
        vlSelf->__Vdlyvval__xqueue__v19 = vlSelf->__Vlvbound_h66ba8f5e__0;
        vlSelf->__Vdlyvval__yqueue__v19 = vlSelf->__Vlvbound_h73829ee7__0;
        vlSelf->__Vlvbound_ha987a96c__0 = vlSelf->__PVT__colour_queue
            [9U];
        vlSelf->__Vdlyvset__xqueue__v20 = 1U;
        vlSelf->__Vdlyvval__colour_queue__v19 = vlSelf->__Vlvbound_ha987a96c__0;
    }
}

VL_INLINE_OPT void Vtop_queue_new___sequent__TOP__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__3(Vtop_queue_new* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_queue_new___sequent__TOP__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__3\n"); );
    // Body
    if (vlSymsp->TOP.reset) {
        vlSelf->__Vdly__counter = 0U;
        vlSelf->__Vdlyvset__colour_queue__v0 = 1U;
    } else if (((IData)(vlSymsp->TOP.top__DOT__fin_bus) 
                & (vlSymsp->TOP.top__DOT__xpixel_bus
                   [0U] != (IData)(vlSelf->__PVT__prev_xpixel)))) {
        vlSelf->__Vlvbound_he6b57a3a__0 = vlSymsp->TOP.top__DOT__colour_bus_i
            [0U];
        vlSelf->__PVT__prev_xpixel = vlSymsp->TOP.top__DOT__xpixel_bus
            [0U];
        vlSelf->__Vlvbound_ha6a48450__0 = vlSymsp->TOP.top__DOT__xpixel_bus
            [0U];
        vlSelf->__Vlvbound_hb8aa41f5__0 = vlSymsp->TOP.top__DOT__ypixel_bus
            [0U];
        if ((9U >= (IData)(vlSelf->__PVT__counter))) {
            vlSelf->__Vdlyvval__colour_queue__v10 = vlSelf->__Vlvbound_he6b57a3a__0;
            vlSelf->__Vdlyvset__colour_queue__v10 = 1U;
            vlSelf->__Vdlyvdim0__colour_queue__v10 
                = vlSelf->__PVT__counter;
        }
        if ((9U >= (IData)(vlSelf->__PVT__counter))) {
            vlSelf->__Vdlyvval__xqueue__v10 = vlSelf->__Vlvbound_ha6a48450__0;
            vlSelf->__Vdlyvset__xqueue__v10 = 1U;
            vlSelf->__Vdlyvdim0__xqueue__v10 = vlSelf->__PVT__counter;
        }
        if ((9U >= (IData)(vlSelf->__PVT__counter))) {
            vlSelf->__Vdlyvval__yqueue__v10 = vlSelf->__Vlvbound_hb8aa41f5__0;
            vlSelf->__Vdlyvset__yqueue__v10 = 1U;
            vlSelf->__Vdlyvdim0__yqueue__v10 = vlSelf->__PVT__counter;
        }
        vlSelf->__Vdly__counter = (0xfU & ((IData)(1U) 
                                           + (IData)(vlSelf->__PVT__counter)));
    }
}

VL_INLINE_OPT void Vtop_queue_new___sequent__TOP__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__4(Vtop_queue_new* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_queue_new___sequent__TOP__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__4\n"); );
    // Body
    vlSelf->__PVT__counter = vlSelf->__Vdly__counter;
    if (vlSelf->__Vdlyvset__colour_queue__v0) {
        vlSelf->__PVT__colour_queue[0U] = 0U;
        vlSelf->__PVT__colour_queue[1U] = 0U;
        vlSelf->__PVT__colour_queue[2U] = 0U;
        vlSelf->__PVT__colour_queue[3U] = 0U;
        vlSelf->__PVT__colour_queue[4U] = 0U;
        vlSelf->__PVT__colour_queue[5U] = 0U;
        vlSelf->__PVT__colour_queue[6U] = 0U;
        vlSelf->__PVT__colour_queue[7U] = 0U;
        vlSelf->__PVT__colour_queue[8U] = 0U;
        vlSelf->__PVT__colour_queue[9U] = 0U;
        vlSelf->__PVT__yqueue[0U] = 0x3ffU;
        vlSelf->__PVT__yqueue[1U] = 0x3ffU;
        vlSelf->__PVT__yqueue[2U] = 0x3ffU;
        vlSelf->__PVT__yqueue[3U] = 0x3ffU;
        vlSelf->__PVT__yqueue[4U] = 0x3ffU;
        vlSelf->__PVT__yqueue[5U] = 0x3ffU;
        vlSelf->__PVT__yqueue[6U] = 0x3ffU;
        vlSelf->__PVT__yqueue[7U] = 0x3ffU;
        vlSelf->__PVT__yqueue[8U] = 0x3ffU;
        vlSelf->__PVT__yqueue[9U] = 0x3ffU;
        vlSelf->__PVT__xqueue[0U] = 0x3ffU;
        vlSelf->__PVT__xqueue[1U] = 0x3ffU;
        vlSelf->__PVT__xqueue[2U] = 0x3ffU;
        vlSelf->__PVT__xqueue[3U] = 0x3ffU;
        vlSelf->__PVT__xqueue[4U] = 0x3ffU;
        vlSelf->__PVT__xqueue[5U] = 0x3ffU;
        vlSelf->__PVT__xqueue[6U] = 0x3ffU;
        vlSelf->__PVT__xqueue[7U] = 0x3ffU;
        vlSelf->__PVT__xqueue[8U] = 0x3ffU;
        vlSelf->__PVT__xqueue[9U] = 0x3ffU;
    }
    if (vlSelf->__Vdlyvset__colour_queue__v10) {
        vlSelf->__PVT__colour_queue[vlSelf->__Vdlyvdim0__colour_queue__v10] 
            = vlSelf->__Vdlyvval__colour_queue__v10;
    }
    if (vlSelf->__Vdlyvset__colour_queue__v11) {
        vlSelf->__PVT__colour_queue[0U] = vlSelf->__Vdlyvval__colour_queue__v11;
    }
    if (vlSelf->__Vdlyvset__colour_queue__v12) {
        vlSelf->__PVT__colour_queue[1U] = vlSelf->__Vdlyvval__colour_queue__v12;
    }
    if (vlSelf->__Vdlyvset__colour_queue__v13) {
        vlSelf->__PVT__colour_queue[2U] = vlSelf->__Vdlyvval__colour_queue__v13;
    }
    if (vlSelf->__Vdlyvset__colour_queue__v14) {
        vlSelf->__PVT__colour_queue[3U] = vlSelf->__Vdlyvval__colour_queue__v14;
    }
    if (vlSelf->__Vdlyvset__colour_queue__v15) {
        vlSelf->__PVT__colour_queue[4U] = vlSelf->__Vdlyvval__colour_queue__v15;
    }
    if (vlSelf->__Vdlyvset__colour_queue__v16) {
        vlSelf->__PVT__colour_queue[5U] = vlSelf->__Vdlyvval__colour_queue__v16;
    }
    if (vlSelf->__Vdlyvset__colour_queue__v17) {
        vlSelf->__PVT__colour_queue[6U] = vlSelf->__Vdlyvval__colour_queue__v17;
    }
    if (vlSelf->__Vdlyvset__yqueue__v10) {
        vlSelf->__PVT__yqueue[vlSelf->__Vdlyvdim0__yqueue__v10] 
            = vlSelf->__Vdlyvval__yqueue__v10;
    }
    if (vlSelf->__Vdlyvset__xqueue__v11) {
        vlSelf->__PVT__yqueue[0U] = vlSelf->__Vdlyvval__yqueue__v11;
    }
    if (vlSelf->__Vdlyvset__colour_queue__v11) {
        vlSelf->__PVT__yqueue[1U] = vlSelf->__Vdlyvval__yqueue__v12;
    }
    if (vlSelf->__Vdlyvset__colour_queue__v12) {
        vlSelf->__PVT__yqueue[2U] = vlSelf->__Vdlyvval__yqueue__v13;
    }
    if (vlSelf->__Vdlyvset__colour_queue__v13) {
        vlSelf->__PVT__yqueue[3U] = vlSelf->__Vdlyvval__yqueue__v14;
    }
    if (vlSelf->__Vdlyvset__colour_queue__v14) {
        vlSelf->__PVT__yqueue[4U] = vlSelf->__Vdlyvval__yqueue__v15;
    }
    if (vlSelf->__Vdlyvset__colour_queue__v15) {
        vlSelf->__PVT__yqueue[5U] = vlSelf->__Vdlyvval__yqueue__v16;
    }
    if (vlSelf->__Vdlyvset__colour_queue__v16) {
        vlSelf->__PVT__yqueue[6U] = vlSelf->__Vdlyvval__yqueue__v17;
    }
    if (vlSelf->__Vdlyvset__colour_queue__v17) {
        vlSelf->__PVT__yqueue[7U] = vlSelf->__Vdlyvval__yqueue__v18;
    }
    if (vlSelf->__Vdlyvset__colour_queue__v18) {
        vlSelf->__PVT__colour_queue[7U] = vlSelf->__Vdlyvval__colour_queue__v18;
        vlSelf->__PVT__yqueue[8U] = vlSelf->__Vdlyvval__yqueue__v19;
    }
    if (vlSelf->__Vdlyvset__xqueue__v10) {
        vlSelf->__PVT__xqueue[vlSelf->__Vdlyvdim0__xqueue__v10] 
            = vlSelf->__Vdlyvval__xqueue__v10;
    }
    if (vlSelf->__Vdlyvset__xqueue__v11) {
        vlSelf->__PVT__xqueue[0U] = vlSelf->__Vdlyvval__xqueue__v11;
    }
    if (vlSelf->__Vdlyvset__colour_queue__v11) {
        vlSelf->__PVT__xqueue[1U] = vlSelf->__Vdlyvval__xqueue__v12;
    }
    if (vlSelf->__Vdlyvset__colour_queue__v12) {
        vlSelf->__PVT__xqueue[2U] = vlSelf->__Vdlyvval__xqueue__v13;
    }
    if (vlSelf->__Vdlyvset__colour_queue__v13) {
        vlSelf->__PVT__xqueue[3U] = vlSelf->__Vdlyvval__xqueue__v14;
    }
    if (vlSelf->__Vdlyvset__colour_queue__v14) {
        vlSelf->__PVT__xqueue[4U] = vlSelf->__Vdlyvval__xqueue__v15;
    }
    if (vlSelf->__Vdlyvset__colour_queue__v15) {
        vlSelf->__PVT__xqueue[5U] = vlSelf->__Vdlyvval__xqueue__v16;
    }
    if (vlSelf->__Vdlyvset__colour_queue__v16) {
        vlSelf->__PVT__xqueue[6U] = vlSelf->__Vdlyvval__xqueue__v17;
    }
    if (vlSelf->__Vdlyvset__colour_queue__v17) {
        vlSelf->__PVT__xqueue[7U] = vlSelf->__Vdlyvval__xqueue__v18;
    }
    if (vlSelf->__Vdlyvset__colour_queue__v18) {
        vlSelf->__PVT__xqueue[8U] = vlSelf->__Vdlyvval__xqueue__v19;
    }
    if (vlSelf->__Vdlyvset__xqueue__v20) {
        vlSelf->__PVT__colour_queue[8U] = vlSelf->__Vdlyvval__colour_queue__v19;
        vlSelf->__PVT__yqueue[9U] = 0x3ffU;
        vlSelf->__PVT__xqueue[9U] = 0x3ffU;
    }
    vlSelf->full_queue = (0xaU == (IData)(vlSelf->__PVT__counter));
    vlSelf->en = 1U;
    if ((0xaU != (IData)(vlSelf->__PVT__counter))) {
        if ((0U == (IData)(vlSelf->__PVT__counter))) {
            vlSelf->en = 0U;
        }
    }
    vlSelf->match = (((IData)(vlSymsp->TOP.top__DOT__xpixel_wire) 
                      == vlSelf->__PVT__xqueue[0U]) 
                     & ((IData)(vlSymsp->TOP.top__DOT__ypixel_wire) 
                        == vlSelf->__PVT__yqueue[0U]));
}

VL_INLINE_OPT void Vtop_queue_new___sequent__TOP__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__3(Vtop_queue_new* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_queue_new___sequent__TOP__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__3\n"); );
    // Body
    if (vlSymsp->TOP.reset) {
        vlSelf->__Vdly__counter = 0U;
        vlSelf->__Vdlyvset__colour_queue__v0 = 1U;
    } else if ((((IData)(vlSymsp->TOP.top__DOT__fin_bus) 
                 >> 1U) & (vlSymsp->TOP.top__DOT__xpixel_bus
                           [1U] != (IData)(vlSelf->__PVT__prev_xpixel)))) {
        vlSelf->__Vlvbound_he6b57a3a__0 = vlSymsp->TOP.top__DOT__colour_bus_i
            [1U];
        vlSelf->__PVT__prev_xpixel = vlSymsp->TOP.top__DOT__xpixel_bus
            [1U];
        vlSelf->__Vlvbound_ha6a48450__0 = vlSymsp->TOP.top__DOT__xpixel_bus
            [1U];
        vlSelf->__Vlvbound_hb8aa41f5__0 = vlSymsp->TOP.top__DOT__ypixel_bus
            [1U];
        if ((9U >= (IData)(vlSelf->__PVT__counter))) {
            vlSelf->__Vdlyvval__colour_queue__v10 = vlSelf->__Vlvbound_he6b57a3a__0;
            vlSelf->__Vdlyvset__colour_queue__v10 = 1U;
            vlSelf->__Vdlyvdim0__colour_queue__v10 
                = vlSelf->__PVT__counter;
        }
        if ((9U >= (IData)(vlSelf->__PVT__counter))) {
            vlSelf->__Vdlyvval__xqueue__v10 = vlSelf->__Vlvbound_ha6a48450__0;
            vlSelf->__Vdlyvset__xqueue__v10 = 1U;
            vlSelf->__Vdlyvdim0__xqueue__v10 = vlSelf->__PVT__counter;
        }
        if ((9U >= (IData)(vlSelf->__PVT__counter))) {
            vlSelf->__Vdlyvval__yqueue__v10 = vlSelf->__Vlvbound_hb8aa41f5__0;
            vlSelf->__Vdlyvset__yqueue__v10 = 1U;
            vlSelf->__Vdlyvdim0__yqueue__v10 = vlSelf->__PVT__counter;
        }
        vlSelf->__Vdly__counter = (0xfU & ((IData)(1U) 
                                           + (IData)(vlSelf->__PVT__counter)));
    }
}

VL_INLINE_OPT void Vtop_queue_new___sequent__TOP__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__3(Vtop_queue_new* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_queue_new___sequent__TOP__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__3\n"); );
    // Body
    if (vlSymsp->TOP.reset) {
        vlSelf->__Vdly__counter = 0U;
        vlSelf->__Vdlyvset__colour_queue__v0 = 1U;
    } else if ((((IData)(vlSymsp->TOP.top__DOT__fin_bus) 
                 >> 2U) & (vlSymsp->TOP.top__DOT__xpixel_bus
                           [2U] != (IData)(vlSelf->__PVT__prev_xpixel)))) {
        vlSelf->__Vlvbound_he6b57a3a__0 = vlSymsp->TOP.top__DOT__colour_bus_i
            [2U];
        vlSelf->__PVT__prev_xpixel = vlSymsp->TOP.top__DOT__xpixel_bus
            [2U];
        vlSelf->__Vlvbound_ha6a48450__0 = vlSymsp->TOP.top__DOT__xpixel_bus
            [2U];
        vlSelf->__Vlvbound_hb8aa41f5__0 = vlSymsp->TOP.top__DOT__ypixel_bus
            [2U];
        if ((9U >= (IData)(vlSelf->__PVT__counter))) {
            vlSelf->__Vdlyvval__colour_queue__v10 = vlSelf->__Vlvbound_he6b57a3a__0;
            vlSelf->__Vdlyvset__colour_queue__v10 = 1U;
            vlSelf->__Vdlyvdim0__colour_queue__v10 
                = vlSelf->__PVT__counter;
        }
        if ((9U >= (IData)(vlSelf->__PVT__counter))) {
            vlSelf->__Vdlyvval__xqueue__v10 = vlSelf->__Vlvbound_ha6a48450__0;
            vlSelf->__Vdlyvset__xqueue__v10 = 1U;
            vlSelf->__Vdlyvdim0__xqueue__v10 = vlSelf->__PVT__counter;
        }
        if ((9U >= (IData)(vlSelf->__PVT__counter))) {
            vlSelf->__Vdlyvval__yqueue__v10 = vlSelf->__Vlvbound_hb8aa41f5__0;
            vlSelf->__Vdlyvset__yqueue__v10 = 1U;
            vlSelf->__Vdlyvdim0__yqueue__v10 = vlSelf->__PVT__counter;
        }
        vlSelf->__Vdly__counter = (0xfU & ((IData)(1U) 
                                           + (IData)(vlSelf->__PVT__counter)));
    }
}

VL_INLINE_OPT void Vtop_queue_new___sequent__TOP__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__3(Vtop_queue_new* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_queue_new___sequent__TOP__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__3\n"); );
    // Body
    if (vlSymsp->TOP.reset) {
        vlSelf->__Vdly__counter = 0U;
        vlSelf->__Vdlyvset__colour_queue__v0 = 1U;
    } else if ((((IData)(vlSymsp->TOP.top__DOT__fin_bus) 
                 >> 3U) & (vlSymsp->TOP.top__DOT__xpixel_bus
                           [3U] != (IData)(vlSelf->__PVT__prev_xpixel)))) {
        vlSelf->__Vlvbound_he6b57a3a__0 = vlSymsp->TOP.top__DOT__colour_bus_i
            [3U];
        vlSelf->__PVT__prev_xpixel = vlSymsp->TOP.top__DOT__xpixel_bus
            [3U];
        vlSelf->__Vlvbound_ha6a48450__0 = vlSymsp->TOP.top__DOT__xpixel_bus
            [3U];
        vlSelf->__Vlvbound_hb8aa41f5__0 = vlSymsp->TOP.top__DOT__ypixel_bus
            [3U];
        if ((9U >= (IData)(vlSelf->__PVT__counter))) {
            vlSelf->__Vdlyvval__colour_queue__v10 = vlSelf->__Vlvbound_he6b57a3a__0;
            vlSelf->__Vdlyvset__colour_queue__v10 = 1U;
            vlSelf->__Vdlyvdim0__colour_queue__v10 
                = vlSelf->__PVT__counter;
        }
        if ((9U >= (IData)(vlSelf->__PVT__counter))) {
            vlSelf->__Vdlyvval__xqueue__v10 = vlSelf->__Vlvbound_ha6a48450__0;
            vlSelf->__Vdlyvset__xqueue__v10 = 1U;
            vlSelf->__Vdlyvdim0__xqueue__v10 = vlSelf->__PVT__counter;
        }
        if ((9U >= (IData)(vlSelf->__PVT__counter))) {
            vlSelf->__Vdlyvval__yqueue__v10 = vlSelf->__Vlvbound_hb8aa41f5__0;
            vlSelf->__Vdlyvset__yqueue__v10 = 1U;
            vlSelf->__Vdlyvdim0__yqueue__v10 = vlSelf->__PVT__counter;
        }
        vlSelf->__Vdly__counter = (0xfU & ((IData)(1U) 
                                           + (IData)(vlSelf->__PVT__counter)));
    }
}

VL_INLINE_OPT void Vtop_queue_new___sequent__TOP__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__3(Vtop_queue_new* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_queue_new___sequent__TOP__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__3\n"); );
    // Body
    if (vlSymsp->TOP.reset) {
        vlSelf->__Vdly__counter = 0U;
        vlSelf->__Vdlyvset__colour_queue__v0 = 1U;
    } else if ((((IData)(vlSymsp->TOP.top__DOT__fin_bus) 
                 >> 4U) & (vlSymsp->TOP.top__DOT__xpixel_bus
                           [4U] != (IData)(vlSelf->__PVT__prev_xpixel)))) {
        vlSelf->__Vlvbound_he6b57a3a__0 = vlSymsp->TOP.top__DOT__colour_bus_i
            [4U];
        vlSelf->__PVT__prev_xpixel = vlSymsp->TOP.top__DOT__xpixel_bus
            [4U];
        vlSelf->__Vlvbound_ha6a48450__0 = vlSymsp->TOP.top__DOT__xpixel_bus
            [4U];
        vlSelf->__Vlvbound_hb8aa41f5__0 = vlSymsp->TOP.top__DOT__ypixel_bus
            [4U];
        if ((9U >= (IData)(vlSelf->__PVT__counter))) {
            vlSelf->__Vdlyvval__colour_queue__v10 = vlSelf->__Vlvbound_he6b57a3a__0;
            vlSelf->__Vdlyvset__colour_queue__v10 = 1U;
            vlSelf->__Vdlyvdim0__colour_queue__v10 
                = vlSelf->__PVT__counter;
        }
        if ((9U >= (IData)(vlSelf->__PVT__counter))) {
            vlSelf->__Vdlyvval__xqueue__v10 = vlSelf->__Vlvbound_ha6a48450__0;
            vlSelf->__Vdlyvset__xqueue__v10 = 1U;
            vlSelf->__Vdlyvdim0__xqueue__v10 = vlSelf->__PVT__counter;
        }
        if ((9U >= (IData)(vlSelf->__PVT__counter))) {
            vlSelf->__Vdlyvval__yqueue__v10 = vlSelf->__Vlvbound_hb8aa41f5__0;
            vlSelf->__Vdlyvset__yqueue__v10 = 1U;
            vlSelf->__Vdlyvdim0__yqueue__v10 = vlSelf->__PVT__counter;
        }
        vlSelf->__Vdly__counter = (0xfU & ((IData)(1U) 
                                           + (IData)(vlSelf->__PVT__counter)));
    }
}

VL_INLINE_OPT void Vtop_queue_new___sequent__TOP__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__3(Vtop_queue_new* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_queue_new___sequent__TOP__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__3\n"); );
    // Body
    if (vlSymsp->TOP.reset) {
        vlSelf->__Vdly__counter = 0U;
        vlSelf->__Vdlyvset__colour_queue__v0 = 1U;
    } else if ((((IData)(vlSymsp->TOP.top__DOT__fin_bus) 
                 >> 5U) & (vlSymsp->TOP.top__DOT__xpixel_bus
                           [5U] != (IData)(vlSelf->__PVT__prev_xpixel)))) {
        vlSelf->__Vlvbound_he6b57a3a__0 = vlSymsp->TOP.top__DOT__colour_bus_i
            [5U];
        vlSelf->__PVT__prev_xpixel = vlSymsp->TOP.top__DOT__xpixel_bus
            [5U];
        vlSelf->__Vlvbound_ha6a48450__0 = vlSymsp->TOP.top__DOT__xpixel_bus
            [5U];
        vlSelf->__Vlvbound_hb8aa41f5__0 = vlSymsp->TOP.top__DOT__ypixel_bus
            [5U];
        if ((9U >= (IData)(vlSelf->__PVT__counter))) {
            vlSelf->__Vdlyvval__colour_queue__v10 = vlSelf->__Vlvbound_he6b57a3a__0;
            vlSelf->__Vdlyvset__colour_queue__v10 = 1U;
            vlSelf->__Vdlyvdim0__colour_queue__v10 
                = vlSelf->__PVT__counter;
        }
        if ((9U >= (IData)(vlSelf->__PVT__counter))) {
            vlSelf->__Vdlyvval__xqueue__v10 = vlSelf->__Vlvbound_ha6a48450__0;
            vlSelf->__Vdlyvset__xqueue__v10 = 1U;
            vlSelf->__Vdlyvdim0__xqueue__v10 = vlSelf->__PVT__counter;
        }
        if ((9U >= (IData)(vlSelf->__PVT__counter))) {
            vlSelf->__Vdlyvval__yqueue__v10 = vlSelf->__Vlvbound_hb8aa41f5__0;
            vlSelf->__Vdlyvset__yqueue__v10 = 1U;
            vlSelf->__Vdlyvdim0__yqueue__v10 = vlSelf->__PVT__counter;
        }
        vlSelf->__Vdly__counter = (0xfU & ((IData)(1U) 
                                           + (IData)(vlSelf->__PVT__counter)));
    }
}

VL_INLINE_OPT void Vtop_queue_new___sequent__TOP__top__DOT__genblk1__BRA__6__KET____DOT__queue_block__3(Vtop_queue_new* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_queue_new___sequent__TOP__top__DOT__genblk1__BRA__6__KET____DOT__queue_block__3\n"); );
    // Body
    if (vlSymsp->TOP.reset) {
        vlSelf->__Vdly__counter = 0U;
        vlSelf->__Vdlyvset__colour_queue__v0 = 1U;
    } else if ((((IData)(vlSymsp->TOP.top__DOT__fin_bus) 
                 >> 6U) & (vlSymsp->TOP.top__DOT__xpixel_bus
                           [6U] != (IData)(vlSelf->__PVT__prev_xpixel)))) {
        vlSelf->__Vlvbound_he6b57a3a__0 = vlSymsp->TOP.top__DOT__colour_bus_i
            [6U];
        vlSelf->__PVT__prev_xpixel = vlSymsp->TOP.top__DOT__xpixel_bus
            [6U];
        vlSelf->__Vlvbound_ha6a48450__0 = vlSymsp->TOP.top__DOT__xpixel_bus
            [6U];
        vlSelf->__Vlvbound_hb8aa41f5__0 = vlSymsp->TOP.top__DOT__ypixel_bus
            [6U];
        if ((9U >= (IData)(vlSelf->__PVT__counter))) {
            vlSelf->__Vdlyvval__colour_queue__v10 = vlSelf->__Vlvbound_he6b57a3a__0;
            vlSelf->__Vdlyvset__colour_queue__v10 = 1U;
            vlSelf->__Vdlyvdim0__colour_queue__v10 
                = vlSelf->__PVT__counter;
        }
        if ((9U >= (IData)(vlSelf->__PVT__counter))) {
            vlSelf->__Vdlyvval__xqueue__v10 = vlSelf->__Vlvbound_ha6a48450__0;
            vlSelf->__Vdlyvset__xqueue__v10 = 1U;
            vlSelf->__Vdlyvdim0__xqueue__v10 = vlSelf->__PVT__counter;
        }
        if ((9U >= (IData)(vlSelf->__PVT__counter))) {
            vlSelf->__Vdlyvval__yqueue__v10 = vlSelf->__Vlvbound_hb8aa41f5__0;
            vlSelf->__Vdlyvset__yqueue__v10 = 1U;
            vlSelf->__Vdlyvdim0__yqueue__v10 = vlSelf->__PVT__counter;
        }
        vlSelf->__Vdly__counter = (0xfU & ((IData)(1U) 
                                           + (IData)(vlSelf->__PVT__counter)));
    }
}

VL_INLINE_OPT void Vtop_queue_new___sequent__TOP__top__DOT__genblk1__BRA__7__KET____DOT__queue_block__3(Vtop_queue_new* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_queue_new___sequent__TOP__top__DOT__genblk1__BRA__7__KET____DOT__queue_block__3\n"); );
    // Body
    if (vlSymsp->TOP.reset) {
        vlSelf->__Vdly__counter = 0U;
        vlSelf->__Vdlyvset__colour_queue__v0 = 1U;
    } else if ((((IData)(vlSymsp->TOP.top__DOT__fin_bus) 
                 >> 7U) & (vlSymsp->TOP.top__DOT__xpixel_bus
                           [7U] != (IData)(vlSelf->__PVT__prev_xpixel)))) {
        vlSelf->__Vlvbound_he6b57a3a__0 = vlSymsp->TOP.top__DOT__colour_bus_i
            [7U];
        vlSelf->__PVT__prev_xpixel = vlSymsp->TOP.top__DOT__xpixel_bus
            [7U];
        vlSelf->__Vlvbound_ha6a48450__0 = vlSymsp->TOP.top__DOT__xpixel_bus
            [7U];
        vlSelf->__Vlvbound_hb8aa41f5__0 = vlSymsp->TOP.top__DOT__ypixel_bus
            [7U];
        if ((9U >= (IData)(vlSelf->__PVT__counter))) {
            vlSelf->__Vdlyvval__colour_queue__v10 = vlSelf->__Vlvbound_he6b57a3a__0;
            vlSelf->__Vdlyvset__colour_queue__v10 = 1U;
            vlSelf->__Vdlyvdim0__colour_queue__v10 
                = vlSelf->__PVT__counter;
        }
        if ((9U >= (IData)(vlSelf->__PVT__counter))) {
            vlSelf->__Vdlyvval__xqueue__v10 = vlSelf->__Vlvbound_ha6a48450__0;
            vlSelf->__Vdlyvset__xqueue__v10 = 1U;
            vlSelf->__Vdlyvdim0__xqueue__v10 = vlSelf->__PVT__counter;
        }
        if ((9U >= (IData)(vlSelf->__PVT__counter))) {
            vlSelf->__Vdlyvval__yqueue__v10 = vlSelf->__Vlvbound_hb8aa41f5__0;
            vlSelf->__Vdlyvset__yqueue__v10 = 1U;
            vlSelf->__Vdlyvdim0__yqueue__v10 = vlSelf->__PVT__counter;
        }
        vlSelf->__Vdly__counter = (0xfU & ((IData)(1U) 
                                           + (IData)(vlSelf->__PVT__counter)));
    }
}

VL_INLINE_OPT void Vtop_queue_new___sequent__TOP__top__DOT__genblk1__BRA__8__KET____DOT__queue_block__3(Vtop_queue_new* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_queue_new___sequent__TOP__top__DOT__genblk1__BRA__8__KET____DOT__queue_block__3\n"); );
    // Body
    if (vlSymsp->TOP.reset) {
        vlSelf->__Vdly__counter = 0U;
        vlSelf->__Vdlyvset__colour_queue__v0 = 1U;
    } else if ((((IData)(vlSymsp->TOP.top__DOT__fin_bus) 
                 >> 8U) & (vlSymsp->TOP.top__DOT__xpixel_bus
                           [8U] != (IData)(vlSelf->__PVT__prev_xpixel)))) {
        vlSelf->__Vlvbound_he6b57a3a__0 = vlSymsp->TOP.top__DOT__colour_bus_i
            [8U];
        vlSelf->__PVT__prev_xpixel = vlSymsp->TOP.top__DOT__xpixel_bus
            [8U];
        vlSelf->__Vlvbound_ha6a48450__0 = vlSymsp->TOP.top__DOT__xpixel_bus
            [8U];
        vlSelf->__Vlvbound_hb8aa41f5__0 = vlSymsp->TOP.top__DOT__ypixel_bus
            [8U];
        if ((9U >= (IData)(vlSelf->__PVT__counter))) {
            vlSelf->__Vdlyvval__colour_queue__v10 = vlSelf->__Vlvbound_he6b57a3a__0;
            vlSelf->__Vdlyvset__colour_queue__v10 = 1U;
            vlSelf->__Vdlyvdim0__colour_queue__v10 
                = vlSelf->__PVT__counter;
        }
        if ((9U >= (IData)(vlSelf->__PVT__counter))) {
            vlSelf->__Vdlyvval__xqueue__v10 = vlSelf->__Vlvbound_ha6a48450__0;
            vlSelf->__Vdlyvset__xqueue__v10 = 1U;
            vlSelf->__Vdlyvdim0__xqueue__v10 = vlSelf->__PVT__counter;
        }
        if ((9U >= (IData)(vlSelf->__PVT__counter))) {
            vlSelf->__Vdlyvval__yqueue__v10 = vlSelf->__Vlvbound_hb8aa41f5__0;
            vlSelf->__Vdlyvset__yqueue__v10 = 1U;
            vlSelf->__Vdlyvdim0__yqueue__v10 = vlSelf->__PVT__counter;
        }
        vlSelf->__Vdly__counter = (0xfU & ((IData)(1U) 
                                           + (IData)(vlSelf->__PVT__counter)));
    }
}

VL_INLINE_OPT void Vtop_queue_new___sequent__TOP__top__DOT__genblk1__BRA__9__KET____DOT__queue_block__3(Vtop_queue_new* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_queue_new___sequent__TOP__top__DOT__genblk1__BRA__9__KET____DOT__queue_block__3\n"); );
    // Body
    if (vlSymsp->TOP.reset) {
        vlSelf->__Vdly__counter = 0U;
        vlSelf->__Vdlyvset__colour_queue__v0 = 1U;
    } else if ((((IData)(vlSymsp->TOP.top__DOT__fin_bus) 
                 >> 9U) & (vlSymsp->TOP.top__DOT__xpixel_bus
                           [9U] != (IData)(vlSelf->__PVT__prev_xpixel)))) {
        vlSelf->__Vlvbound_he6b57a3a__0 = vlSymsp->TOP.top__DOT__colour_bus_i
            [9U];
        vlSelf->__PVT__prev_xpixel = vlSymsp->TOP.top__DOT__xpixel_bus
            [9U];
        vlSelf->__Vlvbound_ha6a48450__0 = vlSymsp->TOP.top__DOT__xpixel_bus
            [9U];
        vlSelf->__Vlvbound_hb8aa41f5__0 = vlSymsp->TOP.top__DOT__ypixel_bus
            [9U];
        if ((9U >= (IData)(vlSelf->__PVT__counter))) {
            vlSelf->__Vdlyvval__colour_queue__v10 = vlSelf->__Vlvbound_he6b57a3a__0;
            vlSelf->__Vdlyvset__colour_queue__v10 = 1U;
            vlSelf->__Vdlyvdim0__colour_queue__v10 
                = vlSelf->__PVT__counter;
        }
        if ((9U >= (IData)(vlSelf->__PVT__counter))) {
            vlSelf->__Vdlyvval__xqueue__v10 = vlSelf->__Vlvbound_ha6a48450__0;
            vlSelf->__Vdlyvset__xqueue__v10 = 1U;
            vlSelf->__Vdlyvdim0__xqueue__v10 = vlSelf->__PVT__counter;
        }
        if ((9U >= (IData)(vlSelf->__PVT__counter))) {
            vlSelf->__Vdlyvval__yqueue__v10 = vlSelf->__Vlvbound_hb8aa41f5__0;
            vlSelf->__Vdlyvset__yqueue__v10 = 1U;
            vlSelf->__Vdlyvdim0__yqueue__v10 = vlSelf->__PVT__counter;
        }
        vlSelf->__Vdly__counter = (0xfU & ((IData)(1U) 
                                           + (IData)(vlSelf->__PVT__counter)));
    }
}

VL_INLINE_OPT void Vtop_queue_new___sequent__TOP__top__DOT__genblk1__BRA__10__KET____DOT__queue_block__3(Vtop_queue_new* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_queue_new___sequent__TOP__top__DOT__genblk1__BRA__10__KET____DOT__queue_block__3\n"); );
    // Body
    if (vlSymsp->TOP.reset) {
        vlSelf->__Vdly__counter = 0U;
        vlSelf->__Vdlyvset__colour_queue__v0 = 1U;
    } else if ((((IData)(vlSymsp->TOP.top__DOT__fin_bus) 
                 >> 0xaU) & (vlSymsp->TOP.top__DOT__xpixel_bus
                             [0xaU] != (IData)(vlSelf->__PVT__prev_xpixel)))) {
        vlSelf->__Vlvbound_he6b57a3a__0 = vlSymsp->TOP.top__DOT__colour_bus_i
            [0xaU];
        vlSelf->__PVT__prev_xpixel = vlSymsp->TOP.top__DOT__xpixel_bus
            [0xaU];
        vlSelf->__Vlvbound_ha6a48450__0 = vlSymsp->TOP.top__DOT__xpixel_bus
            [0xaU];
        vlSelf->__Vlvbound_hb8aa41f5__0 = vlSymsp->TOP.top__DOT__ypixel_bus
            [0xaU];
        if ((9U >= (IData)(vlSelf->__PVT__counter))) {
            vlSelf->__Vdlyvval__colour_queue__v10 = vlSelf->__Vlvbound_he6b57a3a__0;
            vlSelf->__Vdlyvset__colour_queue__v10 = 1U;
            vlSelf->__Vdlyvdim0__colour_queue__v10 
                = vlSelf->__PVT__counter;
        }
        if ((9U >= (IData)(vlSelf->__PVT__counter))) {
            vlSelf->__Vdlyvval__xqueue__v10 = vlSelf->__Vlvbound_ha6a48450__0;
            vlSelf->__Vdlyvset__xqueue__v10 = 1U;
            vlSelf->__Vdlyvdim0__xqueue__v10 = vlSelf->__PVT__counter;
        }
        if ((9U >= (IData)(vlSelf->__PVT__counter))) {
            vlSelf->__Vdlyvval__yqueue__v10 = vlSelf->__Vlvbound_hb8aa41f5__0;
            vlSelf->__Vdlyvset__yqueue__v10 = 1U;
            vlSelf->__Vdlyvdim0__yqueue__v10 = vlSelf->__PVT__counter;
        }
        vlSelf->__Vdly__counter = (0xfU & ((IData)(1U) 
                                           + (IData)(vlSelf->__PVT__counter)));
    }
}

VL_INLINE_OPT void Vtop_queue_new___sequent__TOP__top__DOT__genblk1__BRA__11__KET____DOT__queue_block__3(Vtop_queue_new* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_queue_new___sequent__TOP__top__DOT__genblk1__BRA__11__KET____DOT__queue_block__3\n"); );
    // Body
    if (vlSymsp->TOP.reset) {
        vlSelf->__Vdly__counter = 0U;
        vlSelf->__Vdlyvset__colour_queue__v0 = 1U;
    } else if ((((IData)(vlSymsp->TOP.top__DOT__fin_bus) 
                 >> 0xbU) & (vlSymsp->TOP.top__DOT__xpixel_bus
                             [0xbU] != (IData)(vlSelf->__PVT__prev_xpixel)))) {
        vlSelf->__Vlvbound_he6b57a3a__0 = vlSymsp->TOP.top__DOT__colour_bus_i
            [0xbU];
        vlSelf->__PVT__prev_xpixel = vlSymsp->TOP.top__DOT__xpixel_bus
            [0xbU];
        vlSelf->__Vlvbound_ha6a48450__0 = vlSymsp->TOP.top__DOT__xpixel_bus
            [0xbU];
        vlSelf->__Vlvbound_hb8aa41f5__0 = vlSymsp->TOP.top__DOT__ypixel_bus
            [0xbU];
        if ((9U >= (IData)(vlSelf->__PVT__counter))) {
            vlSelf->__Vdlyvval__colour_queue__v10 = vlSelf->__Vlvbound_he6b57a3a__0;
            vlSelf->__Vdlyvset__colour_queue__v10 = 1U;
            vlSelf->__Vdlyvdim0__colour_queue__v10 
                = vlSelf->__PVT__counter;
        }
        if ((9U >= (IData)(vlSelf->__PVT__counter))) {
            vlSelf->__Vdlyvval__xqueue__v10 = vlSelf->__Vlvbound_ha6a48450__0;
            vlSelf->__Vdlyvset__xqueue__v10 = 1U;
            vlSelf->__Vdlyvdim0__xqueue__v10 = vlSelf->__PVT__counter;
        }
        if ((9U >= (IData)(vlSelf->__PVT__counter))) {
            vlSelf->__Vdlyvval__yqueue__v10 = vlSelf->__Vlvbound_hb8aa41f5__0;
            vlSelf->__Vdlyvset__yqueue__v10 = 1U;
            vlSelf->__Vdlyvdim0__yqueue__v10 = vlSelf->__PVT__counter;
        }
        vlSelf->__Vdly__counter = (0xfU & ((IData)(1U) 
                                           + (IData)(vlSelf->__PVT__counter)));
    }
}
