// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdistributor.h for the primary calling header

#include "verilated.h"

#include "Vdistributor___024root.h"

VL_INLINE_OPT void Vdistributor___024root___sequent__TOP__0(Vdistributor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdistributor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdistributor___024root___sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ __Vdlyvset__reset_engines__v0;
    CData/*0:0*/ __Vdlyvset__reset_engines__v2;
    CData/*0:0*/ __Vdlyvset__reset_engines__v3;
    IData/*31:0*/ __Vdly__distributor__DOT__xcount;
    IData/*31:0*/ __Vdly__distributor__DOT__ycount;
    IData/*31:0*/ __Vdlyvval__xcoord__v0;
    CData/*0:0*/ __Vdlyvset__xcoord__v0;
    IData/*31:0*/ __Vdlyvval__ycoord__v0;
    IData/*31:0*/ __Vdlyvval__xcoord__v1;
    CData/*0:0*/ __Vdlyvset__xcoord__v1;
    IData/*31:0*/ __Vdlyvval__ycoord__v1;
    // Body
    __Vdly__distributor__DOT__ycount = vlSelf->distributor__DOT__ycount;
    __Vdly__distributor__DOT__xcount = vlSelf->distributor__DOT__xcount;
    __Vdlyvset__reset_engines__v0 = 0U;
    __Vdlyvset__reset_engines__v2 = 0U;
    __Vdlyvset__reset_engines__v3 = 0U;
    vlSelf->distributor__DOT__unnamedblk2__DOT__i = 2U;
    if (vlSelf->reset) {
        vlSelf->distributor__DOT__unnamedblk1__DOT__i = 2U;
        __Vdlyvset__reset_engines__v0 = 1U;
        __Vdly__distributor__DOT__xcount = 0U;
        __Vdly__distributor__DOT__ycount = 0x1e0U;
    }
    __Vdlyvset__xcoord__v0 = 0U;
    __Vdlyvset__xcoord__v1 = 0U;
    if ((0x280U == vlSelf->distributor__DOT__xcount)) {
        __Vdly__distributor__DOT__ycount = (vlSelf->distributor__DOT__ycount 
                                            - (IData)(1U));
        __Vdly__distributor__DOT__xcount = 0U;
    }
    if ((0U == vlSelf->distributor__DOT__ycount)) {
        __Vdly__distributor__DOT__xcount = 0U;
        __Vdly__distributor__DOT__ycount = 0x1e0U;
    }
    if ((1U & (IData)(vlSelf->fin_bus))) {
        __Vdlyvset__reset_engines__v2 = 1U;
        __Vdlyvval__xcoord__v0 = vlSelf->distributor__DOT__xcount;
        __Vdlyvset__xcoord__v0 = 1U;
        __Vdlyvval__ycoord__v0 = vlSelf->distributor__DOT__ycount;
        __Vdly__distributor__DOT__xcount = ((IData)(1U) 
                                            + vlSelf->distributor__DOT__xcount);
    }
    if ((2U & (IData)(vlSelf->fin_bus))) {
        __Vdlyvset__reset_engines__v3 = 1U;
        __Vdlyvval__xcoord__v1 = vlSelf->distributor__DOT__xcount;
        __Vdlyvset__xcoord__v1 = 1U;
        __Vdlyvval__ycoord__v1 = vlSelf->distributor__DOT__ycount;
        __Vdly__distributor__DOT__xcount = ((IData)(1U) 
                                            + vlSelf->distributor__DOT__xcount);
    }
    if (__Vdlyvset__reset_engines__v0) {
        vlSelf->reset_engines[0U] = 1U;
        vlSelf->reset_engines[1U] = 1U;
    }
    if (__Vdlyvset__reset_engines__v2) {
        vlSelf->reset_engines[0U] = 1U;
    }
    if (__Vdlyvset__reset_engines__v3) {
        vlSelf->reset_engines[1U] = 1U;
    }
    vlSelf->distributor__DOT__xcount = __Vdly__distributor__DOT__xcount;
    vlSelf->distributor__DOT__ycount = __Vdly__distributor__DOT__ycount;
    if (__Vdlyvset__xcoord__v0) {
        vlSelf->ycoord[0U] = __Vdlyvval__ycoord__v0;
        vlSelf->xcoord[0U] = __Vdlyvval__xcoord__v0;
    }
    if (__Vdlyvset__xcoord__v1) {
        vlSelf->ycoord[1U] = __Vdlyvval__ycoord__v1;
        vlSelf->xcoord[1U] = __Vdlyvval__xcoord__v1;
    }
}

void Vdistributor___024root___eval(Vdistributor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdistributor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdistributor___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vdistributor___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void Vdistributor___024root___eval_debug_assertions(Vdistributor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdistributor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdistributor___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->fin_bus & 0xfcU))) {
        Verilated::overWidthError("fin_bus");}
}
#endif  // VL_DEBUG
