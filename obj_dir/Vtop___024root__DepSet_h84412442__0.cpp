// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__1\n"); );
    // Init
    IData/*23:0*/ top__DOT__lut_rom__DOT____Vlvbound_h5eb2d243__0;
    // Body
    vlSelf->top__DOT__iterations_bus[0U] = vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__curr_iterations;
    vlSelf->top__DOT__iterations_bus[1U] = vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__curr_iterations;
    vlSelf->top__DOT__iterations_bus[2U] = vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__curr_iterations;
    vlSelf->top__DOT__iterations_bus[3U] = vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__curr_iterations;
    vlSelf->top__DOT__iterations_bus[4U] = vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__curr_iterations;
    vlSelf->top__DOT__iterations_bus[5U] = vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__curr_iterations;
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
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__4(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__4\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->__Vdly__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__counter = 0U;
        vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v0 = 1U;
        vlSelf->__Vdly__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__counter = 0U;
        vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v0 = 1U;
        vlSelf->__Vdly__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__counter = 0U;
        vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v0 = 1U;
        vlSelf->__Vdly__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__counter = 0U;
        vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v0 = 1U;
        vlSelf->__Vdly__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__counter = 0U;
        vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v0 = 1U;
        vlSelf->__Vdly__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__counter = 0U;
        vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v0 = 1U;
    } else {
        if ((((IData)(vlSelf->top__DOT__fin_bus) >> 5U) 
             & (vlSelf->top__DOT__xpixel_bus[5U] != (IData)(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__prev_xpixel)))) {
            vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_he6b57a3a__0 
                = vlSelf->top__DOT__colour_bus_i[5U];
            vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__prev_xpixel 
                = vlSelf->top__DOT__xpixel_bus[5U];
            vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_ha6a48450__0 
                = vlSelf->top__DOT__xpixel_bus[5U];
            vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_hb8aa41f5__0 
                = vlSelf->top__DOT__ypixel_bus[5U];
            if ((9U >= (IData)(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__counter))) {
                vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v10 
                    = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_he6b57a3a__0;
                vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v10 = 1U;
                vlSelf->__Vdlyvdim0__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v10 
                    = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__counter;
            }
            if ((9U >= (IData)(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__counter))) {
                vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue__v10 
                    = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_ha6a48450__0;
                vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue__v10 = 1U;
                vlSelf->__Vdlyvdim0__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue__v10 
                    = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__counter;
            }
            if ((9U >= (IData)(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__counter))) {
                vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue__v10 
                    = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_hb8aa41f5__0;
                vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue__v10 = 1U;
                vlSelf->__Vdlyvdim0__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue__v10 
                    = vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__counter;
            }
            vlSelf->__Vdly__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__counter 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__counter)));
        }
        if ((((IData)(vlSelf->top__DOT__fin_bus) >> 4U) 
             & (vlSelf->top__DOT__xpixel_bus[4U] != (IData)(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__prev_xpixel)))) {
            vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_he6b57a3a__0 
                = vlSelf->top__DOT__colour_bus_i[4U];
            vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__prev_xpixel 
                = vlSelf->top__DOT__xpixel_bus[4U];
            vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_ha6a48450__0 
                = vlSelf->top__DOT__xpixel_bus[4U];
            vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_hb8aa41f5__0 
                = vlSelf->top__DOT__ypixel_bus[4U];
            if ((9U >= (IData)(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__counter))) {
                vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v10 
                    = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_he6b57a3a__0;
                vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v10 = 1U;
                vlSelf->__Vdlyvdim0__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v10 
                    = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__counter;
            }
            if ((9U >= (IData)(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__counter))) {
                vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue__v10 
                    = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_ha6a48450__0;
                vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue__v10 = 1U;
                vlSelf->__Vdlyvdim0__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue__v10 
                    = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__counter;
            }
            if ((9U >= (IData)(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__counter))) {
                vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue__v10 
                    = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_hb8aa41f5__0;
                vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue__v10 = 1U;
                vlSelf->__Vdlyvdim0__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue__v10 
                    = vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__counter;
            }
            vlSelf->__Vdly__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__counter 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__counter)));
        }
        if ((((IData)(vlSelf->top__DOT__fin_bus) >> 3U) 
             & (vlSelf->top__DOT__xpixel_bus[3U] != (IData)(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__prev_xpixel)))) {
            vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_he6b57a3a__0 
                = vlSelf->top__DOT__colour_bus_i[3U];
            vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__prev_xpixel 
                = vlSelf->top__DOT__xpixel_bus[3U];
            vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_ha6a48450__0 
                = vlSelf->top__DOT__xpixel_bus[3U];
            vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_hb8aa41f5__0 
                = vlSelf->top__DOT__ypixel_bus[3U];
            if ((9U >= (IData)(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__counter))) {
                vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v10 
                    = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_he6b57a3a__0;
                vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v10 = 1U;
                vlSelf->__Vdlyvdim0__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v10 
                    = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__counter;
            }
            if ((9U >= (IData)(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__counter))) {
                vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue__v10 
                    = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_ha6a48450__0;
                vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue__v10 = 1U;
                vlSelf->__Vdlyvdim0__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue__v10 
                    = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__counter;
            }
            if ((9U >= (IData)(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__counter))) {
                vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue__v10 
                    = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_hb8aa41f5__0;
                vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue__v10 = 1U;
                vlSelf->__Vdlyvdim0__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue__v10 
                    = vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__counter;
            }
            vlSelf->__Vdly__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__counter 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__counter)));
        }
        if ((((IData)(vlSelf->top__DOT__fin_bus) >> 2U) 
             & (vlSelf->top__DOT__xpixel_bus[2U] != (IData)(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__prev_xpixel)))) {
            vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_he6b57a3a__0 
                = vlSelf->top__DOT__colour_bus_i[2U];
            vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__prev_xpixel 
                = vlSelf->top__DOT__xpixel_bus[2U];
            vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_ha6a48450__0 
                = vlSelf->top__DOT__xpixel_bus[2U];
            vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_hb8aa41f5__0 
                = vlSelf->top__DOT__ypixel_bus[2U];
            if ((9U >= (IData)(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__counter))) {
                vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v10 
                    = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_he6b57a3a__0;
                vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v10 = 1U;
                vlSelf->__Vdlyvdim0__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v10 
                    = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__counter;
            }
            if ((9U >= (IData)(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__counter))) {
                vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v10 
                    = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_ha6a48450__0;
                vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v10 = 1U;
                vlSelf->__Vdlyvdim0__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v10 
                    = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__counter;
            }
            if ((9U >= (IData)(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__counter))) {
                vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue__v10 
                    = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_hb8aa41f5__0;
                vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue__v10 = 1U;
                vlSelf->__Vdlyvdim0__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue__v10 
                    = vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__counter;
            }
            vlSelf->__Vdly__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__counter 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__counter)));
        }
        if ((((IData)(vlSelf->top__DOT__fin_bus) >> 1U) 
             & (vlSelf->top__DOT__xpixel_bus[1U] != (IData)(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__prev_xpixel)))) {
            vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_he6b57a3a__0 
                = vlSelf->top__DOT__colour_bus_i[1U];
            vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__prev_xpixel 
                = vlSelf->top__DOT__xpixel_bus[1U];
            vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_ha6a48450__0 
                = vlSelf->top__DOT__xpixel_bus[1U];
            vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_hb8aa41f5__0 
                = vlSelf->top__DOT__ypixel_bus[1U];
            if ((9U >= (IData)(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__counter))) {
                vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v10 
                    = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_he6b57a3a__0;
                vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v10 = 1U;
                vlSelf->__Vdlyvdim0__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v10 
                    = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__counter;
            }
            if ((9U >= (IData)(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__counter))) {
                vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v10 
                    = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_ha6a48450__0;
                vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v10 = 1U;
                vlSelf->__Vdlyvdim0__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v10 
                    = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__counter;
            }
            if ((9U >= (IData)(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__counter))) {
                vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue__v10 
                    = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_hb8aa41f5__0;
                vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue__v10 = 1U;
                vlSelf->__Vdlyvdim0__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue__v10 
                    = vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__counter;
            }
            vlSelf->__Vdly__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__counter 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__counter)));
        }
        if (((IData)(vlSelf->top__DOT__fin_bus) & (
                                                   vlSelf->top__DOT__xpixel_bus
                                                   [0U] 
                                                   != (IData)(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__prev_xpixel)))) {
            vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_he6b57a3a__0 
                = vlSelf->top__DOT__colour_bus_i[0U];
            vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__prev_xpixel 
                = vlSelf->top__DOT__xpixel_bus[0U];
            vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_ha6a48450__0 
                = vlSelf->top__DOT__xpixel_bus[0U];
            vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_hb8aa41f5__0 
                = vlSelf->top__DOT__ypixel_bus[0U];
            if ((9U >= (IData)(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__counter))) {
                vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v10 
                    = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_he6b57a3a__0;
                vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v10 = 1U;
                vlSelf->__Vdlyvdim0__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v10 
                    = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__counter;
            }
            if ((9U >= (IData)(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__counter))) {
                vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v10 
                    = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_ha6a48450__0;
                vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v10 = 1U;
                vlSelf->__Vdlyvdim0__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v10 
                    = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__counter;
            }
            if ((9U >= (IData)(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__counter))) {
                vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue__v10 
                    = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_hb8aa41f5__0;
                vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue__v10 = 1U;
                vlSelf->__Vdlyvdim0__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue__v10 
                    = vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__counter;
            }
            vlSelf->__Vdly__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__counter 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__counter)));
        }
    }
    vlSelf->top__DOT__xpixel_bus[0U] = vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.xpixel;
    vlSelf->top__DOT__xpixel_bus[1U] = vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.xpixel;
    vlSelf->top__DOT__xpixel_bus[2U] = vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.xpixel;
    vlSelf->top__DOT__xpixel_bus[3U] = vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.xpixel;
    vlSelf->top__DOT__xpixel_bus[4U] = vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.xpixel;
    vlSelf->top__DOT__xpixel_bus[5U] = vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.xpixel;
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
    vlSelf->top__DOT__ypixel_bus[0U] = vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.ypixel;
    vlSelf->top__DOT__ypixel_bus[1U] = vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.ypixel;
    vlSelf->top__DOT__ypixel_bus[2U] = vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.ypixel;
    vlSelf->top__DOT__ypixel_bus[3U] = vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.ypixel;
    vlSelf->top__DOT__ypixel_bus[4U] = vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.ypixel;
    vlSelf->top__DOT__ypixel_bus[5U] = vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.ypixel;
}

VL_INLINE_OPT void Vtop___024root___combo__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__fin_bus = ((0x30U & (IData)(vlSelf->top__DOT__fin_bus)) 
                                 | (((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.en_pixel_map) 
                                     << 3U) | (((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.en_pixel_map) 
                                                << 2U) 
                                               | (((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.en_pixel_map) 
                                                   << 1U) 
                                                  | (IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.en_pixel_map)))));
    vlSelf->top__DOT__fin_bus = ((0xfU & (IData)(vlSelf->top__DOT__fin_bus)) 
                                 | (((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.en_pixel_map) 
                                     << 5U) | ((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.en_pixel_map) 
                                               << 4U)));
}

void Vtop___024root___sequent__TOP__0(Vtop___024root* vlSelf);
void Vtop_mandelbrot_engine___sequent__TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine__0(Vtop_mandelbrot_engine* vlSelf);
void Vtop_mandelbrot_engine___sequent__TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine__0(Vtop_mandelbrot_engine* vlSelf);
void Vtop_mandelbrot_engine___sequent__TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine__0(Vtop_mandelbrot_engine* vlSelf);
void Vtop_mandelbrot_engine___sequent__TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine__0(Vtop_mandelbrot_engine* vlSelf);
void Vtop_mandelbrot_engine___sequent__TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine__0(Vtop_mandelbrot_engine* vlSelf);
void Vtop_mandelbrot_engine___sequent__TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine__0(Vtop_mandelbrot_engine* vlSelf);
void Vtop___024root___sequent__TOP__2(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__3(Vtop___024root* vlSelf);
void Vtop_mandelbrot_engine___combo__TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine__0(Vtop_mandelbrot_engine* vlSelf);
void Vtop_mandelbrot_engine___combo__TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine__0(Vtop_mandelbrot_engine* vlSelf);
void Vtop_mandelbrot_engine___combo__TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine__0(Vtop_mandelbrot_engine* vlSelf);
void Vtop_mandelbrot_engine___combo__TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine__0(Vtop_mandelbrot_engine* vlSelf);
void Vtop_mandelbrot_engine___combo__TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine__0(Vtop_mandelbrot_engine* vlSelf);
void Vtop_mandelbrot_engine___combo__TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine__0(Vtop_mandelbrot_engine* vlSelf);
void Vtop___024root___sequent__TOP__5(Vtop___024root* vlSelf);

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtop___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        Vtop_mandelbrot_engine___sequent__TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine__0((&vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine));
        Vtop_mandelbrot_engine___sequent__TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine__0((&vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine));
        Vtop_mandelbrot_engine___sequent__TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine__0((&vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine));
        Vtop_mandelbrot_engine___sequent__TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine__0((&vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine));
        Vtop_mandelbrot_engine___sequent__TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine__0((&vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine));
        Vtop_mandelbrot_engine___sequent__TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine__0((&vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine));
        Vtop___024root___sequent__TOP__1(vlSelf);
    }
    if (((IData)(vlSelf->clk) ^ (IData)(vlSelf->__Vclklast__TOP__clk))) {
        Vtop___024root___sequent__TOP__2(vlSelf);
    }
    if (((~ (IData)(vlSelf->clk)) & (IData)(vlSelf->__Vclklast__TOP__clk))) {
        Vtop___024root___sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    Vtop_mandelbrot_engine___combo__TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine__0((&vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine));
    vlSelf->__Vm_traceActivity[3U] = 1U;
    Vtop_mandelbrot_engine___combo__TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine__0((&vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine));
    Vtop_mandelbrot_engine___combo__TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine__0((&vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine));
    Vtop_mandelbrot_engine___combo__TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine__0((&vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine));
    Vtop_mandelbrot_engine___combo__TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine__0((&vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine));
    Vtop_mandelbrot_engine___combo__TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine__0((&vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine));
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtop___024root___sequent__TOP__4(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if (((IData)(vlSelf->clk) ^ (IData)(vlSelf->__Vclklast__TOP__clk))) {
        Vtop___024root___sequent__TOP__5(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
    Vtop___024root___combo__TOP__0(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}
