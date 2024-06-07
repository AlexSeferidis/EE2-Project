// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vdistributor__Syms.h"


void Vdistributor___024root__trace_chg_sub_0(Vdistributor___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vdistributor___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdistributor___024root__trace_chg_top_0\n"); );
    // Init
    Vdistributor___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdistributor___024root*>(voidSelf);
    Vdistributor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vdistributor___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vdistributor___024root__trace_chg_sub_0(Vdistributor___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vdistributor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdistributor___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->distributor__DOT__xcount),32);
        bufp->chgIData(oldp+1,(vlSelf->distributor__DOT__ycount),32);
        bufp->chgIData(oldp+2,(vlSelf->distributor__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+3,(vlSelf->distributor__DOT__unnamedblk2__DOT__i),32);
    }
    bufp->chgBit(oldp+4,(vlSelf->clk));
    bufp->chgBit(oldp+5,(vlSelf->reset));
    bufp->chgCData(oldp+6,(vlSelf->fin_bus),2);
    bufp->chgIData(oldp+7,(vlSelf->xcoord[0]),32);
    bufp->chgIData(oldp+8,(vlSelf->xcoord[1]),32);
    bufp->chgIData(oldp+9,(vlSelf->ycoord[0]),32);
    bufp->chgIData(oldp+10,(vlSelf->ycoord[1]),32);
    bufp->chgBit(oldp+11,(vlSelf->reset_engines[0]));
    bufp->chgBit(oldp+12,(vlSelf->reset_engines[1]));
}

void Vdistributor___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdistributor___024root__trace_cleanup\n"); );
    // Init
    Vdistributor___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdistributor___024root*>(voidSelf);
    Vdistributor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
