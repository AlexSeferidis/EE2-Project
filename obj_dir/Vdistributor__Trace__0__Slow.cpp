// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vdistributor__Syms.h"


VL_ATTR_COLD void Vdistributor___024root__trace_init_sub__TOP__0(Vdistributor___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdistributor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdistributor___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+5,"clk", false,-1);
    tracep->declBit(c+6,"reset", false,-1);
    tracep->declBus(c+7,"fin_bus", false,-1, 1,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+8+i*1,"xcoord", true,(i+0), 31,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+10+i*1,"ycoord", true,(i+0), 31,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+12+i*1,"reset_engines", true,(i+0));
    }
    tracep->pushNamePrefix("distributor ");
    tracep->declBus(c+14,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+15,"SCREEN_WIDTH", false,-1, 31,0);
    tracep->declBus(c+16,"SCREEN_HEIGHT", false,-1, 31,0);
    tracep->declBus(c+17,"NUM_ENGINES", false,-1, 31,0);
    tracep->declBit(c+5,"clk", false,-1);
    tracep->declBit(c+6,"reset", false,-1);
    tracep->declBus(c+7,"fin_bus", false,-1, 1,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+8+i*1,"xcoord", true,(i+0), 31,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+10+i*1,"ycoord", true,(i+0), 31,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+12+i*1,"reset_engines", true,(i+0));
    }
    tracep->declBus(c+1,"xcount", false,-1, 31,0);
    tracep->declBus(c+2,"ycount", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+3,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+4,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vdistributor___024root__trace_init_top(Vdistributor___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdistributor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdistributor___024root__trace_init_top\n"); );
    // Body
    Vdistributor___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vdistributor___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vdistributor___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vdistributor___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vdistributor___024root__trace_register(Vdistributor___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdistributor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdistributor___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vdistributor___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vdistributor___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vdistributor___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vdistributor___024root__trace_full_sub_0(Vdistributor___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vdistributor___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdistributor___024root__trace_full_top_0\n"); );
    // Init
    Vdistributor___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdistributor___024root*>(voidSelf);
    Vdistributor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vdistributor___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vdistributor___024root__trace_full_sub_0(Vdistributor___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vdistributor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdistributor___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->distributor__DOT__xcount),32);
    bufp->fullIData(oldp+2,(vlSelf->distributor__DOT__ycount),32);
    bufp->fullIData(oldp+3,(vlSelf->distributor__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+4,(vlSelf->distributor__DOT__unnamedblk2__DOT__i),32);
    bufp->fullBit(oldp+5,(vlSelf->clk));
    bufp->fullBit(oldp+6,(vlSelf->reset));
    bufp->fullCData(oldp+7,(vlSelf->fin_bus),2);
    bufp->fullIData(oldp+8,(vlSelf->xcoord[0]),32);
    bufp->fullIData(oldp+9,(vlSelf->xcoord[1]),32);
    bufp->fullIData(oldp+10,(vlSelf->ycoord[0]),32);
    bufp->fullIData(oldp+11,(vlSelf->ycoord[1]),32);
    bufp->fullBit(oldp+12,(vlSelf->reset_engines[0]));
    bufp->fullBit(oldp+13,(vlSelf->reset_engines[1]));
    bufp->fullIData(oldp+14,(0x20U),32);
    bufp->fullIData(oldp+15,(0x280U),32);
    bufp->fullIData(oldp+16,(0x1e0U),32);
    bufp->fullIData(oldp+17,(2U),32);
}
