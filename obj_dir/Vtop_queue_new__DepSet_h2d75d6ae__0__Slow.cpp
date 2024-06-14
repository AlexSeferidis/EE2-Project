// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop__Syms.h"
#include "Vtop_queue_new.h"

VL_ATTR_COLD void Vtop_queue_new___settle__TOP__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__0(Vtop_queue_new* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_queue_new___settle__TOP__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__0\n"); );
    // Body
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
