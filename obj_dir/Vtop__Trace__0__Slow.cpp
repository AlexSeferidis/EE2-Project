// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+25,"clk", false,-1);
    tracep->declBit(c+26,"reset", false,-1);
    tracep->declBit(c+27,"fin_flag", false,-1);
    tracep->declBus(c+28,"colour_i", false,-1, 23,0);
    tracep->declBus(c+29,"xpixel_i", false,-1, 31,0);
    tracep->declBus(c+30,"ypixel_i", false,-1, 31,0);
    tracep->declBit(c+31,"ready", false,-1);
    tracep->declBit(c+32,"full_queue", false,-1);
    tracep->declBus(c+33,"colour_o", false,-1, 23,0);
    tracep->declBit(c+34,"first", false,-1);
    tracep->declBit(c+35,"last_x", false,-1);
    tracep->declBit(c+36,"last_y", false,-1);
    tracep->declBit(c+37,"valid", false,-1);
    tracep->pushNamePrefix("top ");
    tracep->declBus(c+38,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+39,"RBG_SIZE", false,-1, 31,0);
    tracep->declBit(c+25,"clk", false,-1);
    tracep->declBit(c+26,"reset", false,-1);
    tracep->declBit(c+27,"fin_flag", false,-1);
    tracep->declBus(c+28,"colour_i", false,-1, 23,0);
    tracep->declBus(c+29,"xpixel_i", false,-1, 31,0);
    tracep->declBus(c+30,"ypixel_i", false,-1, 31,0);
    tracep->declBit(c+31,"ready", false,-1);
    tracep->declBit(c+32,"full_queue", false,-1);
    tracep->declBus(c+33,"colour_o", false,-1, 23,0);
    tracep->declBit(c+34,"first", false,-1);
    tracep->declBit(c+35,"last_x", false,-1);
    tracep->declBit(c+36,"last_y", false,-1);
    tracep->declBit(c+37,"valid", false,-1);
    tracep->declBus(c+1,"xpixel_wire", false,-1, 31,0);
    tracep->declBus(c+2,"ypixel_wire", false,-1, 31,0);
    tracep->declBus(c+3,"colour_wire", false,-1, 23,0);
    tracep->declBit(c+4,"en_wire", false,-1);
    tracep->pushNamePrefix("combinator_block ");
    tracep->declBus(c+38,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+39,"RBG_SIZE", false,-1, 31,0);
    tracep->declBus(c+40,"SCREEN_WIDTH", false,-1, 31,0);
    tracep->declBus(c+41,"SCREEN_HEIGHT", false,-1, 31,0);
    tracep->declBit(c+25,"clk", false,-1);
    tracep->declBit(c+26,"reset", false,-1);
    tracep->declBus(c+3,"colour_i", false,-1, 23,0);
    tracep->declBit(c+4,"en", false,-1);
    tracep->declBit(c+31,"ready", false,-1);
    tracep->declBus(c+1,"next_xpixel", false,-1, 31,0);
    tracep->declBus(c+2,"next_ypixel", false,-1, 31,0);
    tracep->declBus(c+33,"colour_o", false,-1, 23,0);
    tracep->declBit(c+34,"first", false,-1);
    tracep->declBit(c+35,"last_x", false,-1);
    tracep->declBit(c+36,"last_y", false,-1);
    tracep->declBit(c+37,"valid", false,-1);
    tracep->declBus(c+5,"xcount", false,-1, 31,0);
    tracep->declBus(c+6,"ycount", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("queue_block ");
    tracep->declBus(c+38,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+42,"QUEUE_SIZE", false,-1, 31,0);
    tracep->declBus(c+43,"COUNTER_SIZE", false,-1, 31,0);
    tracep->declBus(c+39,"RBG_SIZE", false,-1, 31,0);
    tracep->declBit(c+25,"clk", false,-1);
    tracep->declBit(c+26,"reset", false,-1);
    tracep->declBit(c+27,"fin_flag", false,-1);
    tracep->declBus(c+28,"colour_i", false,-1, 23,0);
    tracep->declBus(c+29,"xpixel_i", false,-1, 31,0);
    tracep->declBus(c+30,"ypixel_i", false,-1, 31,0);
    tracep->declBus(c+1,"xpixel_check", false,-1, 31,0);
    tracep->declBus(c+2,"ypixel_check", false,-1, 31,0);
    tracep->declBus(c+3,"colour_o", false,-1, 23,0);
    tracep->declBit(c+32,"full_queue", false,-1);
    tracep->declBit(c+4,"en", false,-1);
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+7+i*1,"colour_queue", true,(i+0), 23,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+12+i*1,"xqueue", true,(i+0), 31,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+17+i*1,"yqueue", true,(i+0), 31,0);
    }
    tracep->declBus(c+22,"counter", false,-1, 2,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+23,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+24,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->top__DOT__xpixel_wire),32);
    bufp->fullIData(oldp+2,(vlSelf->top__DOT__ypixel_wire),32);
    bufp->fullIData(oldp+3,(vlSelf->top__DOT__colour_wire),24);
    bufp->fullBit(oldp+4,(vlSelf->top__DOT__en_wire));
    bufp->fullIData(oldp+5,(vlSelf->top__DOT__combinator_block__DOT__xcount),32);
    bufp->fullIData(oldp+6,(vlSelf->top__DOT__combinator_block__DOT__ycount),32);
    bufp->fullIData(oldp+7,(vlSelf->top__DOT__queue_block__DOT__colour_queue[0]),24);
    bufp->fullIData(oldp+8,(vlSelf->top__DOT__queue_block__DOT__colour_queue[1]),24);
    bufp->fullIData(oldp+9,(vlSelf->top__DOT__queue_block__DOT__colour_queue[2]),24);
    bufp->fullIData(oldp+10,(vlSelf->top__DOT__queue_block__DOT__colour_queue[3]),24);
    bufp->fullIData(oldp+11,(vlSelf->top__DOT__queue_block__DOT__colour_queue[4]),24);
    bufp->fullIData(oldp+12,(vlSelf->top__DOT__queue_block__DOT__xqueue[0]),32);
    bufp->fullIData(oldp+13,(vlSelf->top__DOT__queue_block__DOT__xqueue[1]),32);
    bufp->fullIData(oldp+14,(vlSelf->top__DOT__queue_block__DOT__xqueue[2]),32);
    bufp->fullIData(oldp+15,(vlSelf->top__DOT__queue_block__DOT__xqueue[3]),32);
    bufp->fullIData(oldp+16,(vlSelf->top__DOT__queue_block__DOT__xqueue[4]),32);
    bufp->fullIData(oldp+17,(vlSelf->top__DOT__queue_block__DOT__yqueue[0]),32);
    bufp->fullIData(oldp+18,(vlSelf->top__DOT__queue_block__DOT__yqueue[1]),32);
    bufp->fullIData(oldp+19,(vlSelf->top__DOT__queue_block__DOT__yqueue[2]),32);
    bufp->fullIData(oldp+20,(vlSelf->top__DOT__queue_block__DOT__yqueue[3]),32);
    bufp->fullIData(oldp+21,(vlSelf->top__DOT__queue_block__DOT__yqueue[4]),32);
    bufp->fullCData(oldp+22,(vlSelf->top__DOT__queue_block__DOT__counter),3);
    bufp->fullIData(oldp+23,(vlSelf->top__DOT__queue_block__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+24,(vlSelf->top__DOT__queue_block__DOT__unnamedblk2__DOT__i),32);
    bufp->fullBit(oldp+25,(vlSelf->clk));
    bufp->fullBit(oldp+26,(vlSelf->reset));
    bufp->fullBit(oldp+27,(vlSelf->fin_flag));
    bufp->fullIData(oldp+28,(vlSelf->colour_i),24);
    bufp->fullIData(oldp+29,(vlSelf->xpixel_i),32);
    bufp->fullIData(oldp+30,(vlSelf->ypixel_i),32);
    bufp->fullBit(oldp+31,(vlSelf->ready));
    bufp->fullBit(oldp+32,(vlSelf->full_queue));
    bufp->fullIData(oldp+33,(vlSelf->colour_o),24);
    bufp->fullBit(oldp+34,(vlSelf->first));
    bufp->fullBit(oldp+35,(vlSelf->last_x));
    bufp->fullBit(oldp+36,(vlSelf->last_y));
    bufp->fullBit(oldp+37,(vlSelf->valid));
    bufp->fullIData(oldp+38,(0x20U),32);
    bufp->fullIData(oldp+39,(0x18U),32);
    bufp->fullIData(oldp+40,(0x280U),32);
    bufp->fullIData(oldp+41,(0x1e0U),32);
    bufp->fullIData(oldp+42,(5U),32);
    bufp->fullIData(oldp+43,(3U),32);
}
