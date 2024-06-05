// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->top__DOT__xpixel_wire),32);
        bufp->chgIData(oldp+1,(vlSelf->top__DOT__ypixel_wire),32);
        bufp->chgIData(oldp+2,(vlSelf->top__DOT__colour_wire),24);
        bufp->chgBit(oldp+3,(vlSelf->top__DOT__en_wire));
        bufp->chgIData(oldp+4,(vlSelf->top__DOT__combinator_block__DOT__xcount),32);
        bufp->chgIData(oldp+5,(vlSelf->top__DOT__combinator_block__DOT__ycount),32);
        bufp->chgIData(oldp+6,(vlSelf->top__DOT__queue_block__DOT__colour_queue[0]),24);
        bufp->chgIData(oldp+7,(vlSelf->top__DOT__queue_block__DOT__colour_queue[1]),24);
        bufp->chgIData(oldp+8,(vlSelf->top__DOT__queue_block__DOT__colour_queue[2]),24);
        bufp->chgIData(oldp+9,(vlSelf->top__DOT__queue_block__DOT__colour_queue[3]),24);
        bufp->chgIData(oldp+10,(vlSelf->top__DOT__queue_block__DOT__colour_queue[4]),24);
        bufp->chgIData(oldp+11,(vlSelf->top__DOT__queue_block__DOT__xqueue[0]),32);
        bufp->chgIData(oldp+12,(vlSelf->top__DOT__queue_block__DOT__xqueue[1]),32);
        bufp->chgIData(oldp+13,(vlSelf->top__DOT__queue_block__DOT__xqueue[2]),32);
        bufp->chgIData(oldp+14,(vlSelf->top__DOT__queue_block__DOT__xqueue[3]),32);
        bufp->chgIData(oldp+15,(vlSelf->top__DOT__queue_block__DOT__xqueue[4]),32);
        bufp->chgIData(oldp+16,(vlSelf->top__DOT__queue_block__DOT__yqueue[0]),32);
        bufp->chgIData(oldp+17,(vlSelf->top__DOT__queue_block__DOT__yqueue[1]),32);
        bufp->chgIData(oldp+18,(vlSelf->top__DOT__queue_block__DOT__yqueue[2]),32);
        bufp->chgIData(oldp+19,(vlSelf->top__DOT__queue_block__DOT__yqueue[3]),32);
        bufp->chgIData(oldp+20,(vlSelf->top__DOT__queue_block__DOT__yqueue[4]),32);
        bufp->chgCData(oldp+21,(vlSelf->top__DOT__queue_block__DOT__counter),3);
        bufp->chgIData(oldp+22,(vlSelf->top__DOT__queue_block__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+23,(vlSelf->top__DOT__queue_block__DOT__unnamedblk2__DOT__i),32);
    }
    bufp->chgBit(oldp+24,(vlSelf->clk));
    bufp->chgBit(oldp+25,(vlSelf->reset));
    bufp->chgBit(oldp+26,(vlSelf->fin_flag));
    bufp->chgIData(oldp+27,(vlSelf->colour_i),24);
    bufp->chgIData(oldp+28,(vlSelf->xpixel_i),32);
    bufp->chgIData(oldp+29,(vlSelf->ypixel_i),32);
    bufp->chgBit(oldp+30,(vlSelf->ready));
    bufp->chgBit(oldp+31,(vlSelf->full_queue));
    bufp->chgIData(oldp+32,(vlSelf->colour_o),24);
    bufp->chgBit(oldp+33,(vlSelf->first));
    bufp->chgBit(oldp+34,(vlSelf->last_x));
    bufp->chgBit(oldp+35,(vlSelf->last_y));
    bufp->chgBit(oldp+36,(vlSelf->valid));
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
