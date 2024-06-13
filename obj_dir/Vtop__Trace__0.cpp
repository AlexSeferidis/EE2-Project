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
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgIData(oldp+0,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+1,(vlSelf->top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+2,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+3,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+4,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+5,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+6,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+7,(vlSelf->top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+8,(vlSelf->top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+9,(vlSelf->top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+10,(vlSelf->top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__unnamedblk1__DOT__i),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+11,(vlSelf->top__DOT__colour_o_wire),24);
        bufp->chgIData(oldp+12,(vlSelf->top__DOT__xpixel_wire),32);
        bufp->chgIData(oldp+13,(vlSelf->top__DOT__ypixel_wire),32);
        bufp->chgIData(oldp+14,(vlSelf->top__DOT__colour_wire),24);
        bufp->chgBit(oldp+15,((0x7ffU == (IData)(vlSelf->top__DOT__en_bus))));
        bufp->chgSData(oldp+16,(vlSelf->top__DOT__fin_bus),11);
        bufp->chgIData(oldp+17,(vlSelf->top__DOT__iterations_bus[0]),32);
        bufp->chgIData(oldp+18,(vlSelf->top__DOT__iterations_bus[1]),32);
        bufp->chgIData(oldp+19,(vlSelf->top__DOT__iterations_bus[2]),32);
        bufp->chgIData(oldp+20,(vlSelf->top__DOT__iterations_bus[3]),32);
        bufp->chgIData(oldp+21,(vlSelf->top__DOT__iterations_bus[4]),32);
        bufp->chgIData(oldp+22,(vlSelf->top__DOT__iterations_bus[5]),32);
        bufp->chgIData(oldp+23,(vlSelf->top__DOT__iterations_bus[6]),32);
        bufp->chgIData(oldp+24,(vlSelf->top__DOT__iterations_bus[7]),32);
        bufp->chgIData(oldp+25,(vlSelf->top__DOT__iterations_bus[8]),32);
        bufp->chgIData(oldp+26,(vlSelf->top__DOT__iterations_bus[9]),32);
        bufp->chgIData(oldp+27,(vlSelf->top__DOT__iterations_bus[10]),32);
        bufp->chgIData(oldp+28,(vlSelf->top__DOT__xpixel_bus[0]),32);
        bufp->chgIData(oldp+29,(vlSelf->top__DOT__xpixel_bus[1]),32);
        bufp->chgIData(oldp+30,(vlSelf->top__DOT__xpixel_bus[2]),32);
        bufp->chgIData(oldp+31,(vlSelf->top__DOT__xpixel_bus[3]),32);
        bufp->chgIData(oldp+32,(vlSelf->top__DOT__xpixel_bus[4]),32);
        bufp->chgIData(oldp+33,(vlSelf->top__DOT__xpixel_bus[5]),32);
        bufp->chgIData(oldp+34,(vlSelf->top__DOT__xpixel_bus[6]),32);
        bufp->chgIData(oldp+35,(vlSelf->top__DOT__xpixel_bus[7]),32);
        bufp->chgIData(oldp+36,(vlSelf->top__DOT__xpixel_bus[8]),32);
        bufp->chgIData(oldp+37,(vlSelf->top__DOT__xpixel_bus[9]),32);
        bufp->chgIData(oldp+38,(vlSelf->top__DOT__xpixel_bus[10]),32);
        bufp->chgIData(oldp+39,(vlSelf->top__DOT__ypixel_bus[0]),32);
        bufp->chgIData(oldp+40,(vlSelf->top__DOT__ypixel_bus[1]),32);
        bufp->chgIData(oldp+41,(vlSelf->top__DOT__ypixel_bus[2]),32);
        bufp->chgIData(oldp+42,(vlSelf->top__DOT__ypixel_bus[3]),32);
        bufp->chgIData(oldp+43,(vlSelf->top__DOT__ypixel_bus[4]),32);
        bufp->chgIData(oldp+44,(vlSelf->top__DOT__ypixel_bus[5]),32);
        bufp->chgIData(oldp+45,(vlSelf->top__DOT__ypixel_bus[6]),32);
        bufp->chgIData(oldp+46,(vlSelf->top__DOT__ypixel_bus[7]),32);
        bufp->chgIData(oldp+47,(vlSelf->top__DOT__ypixel_bus[8]),32);
        bufp->chgIData(oldp+48,(vlSelf->top__DOT__ypixel_bus[9]),32);
        bufp->chgIData(oldp+49,(vlSelf->top__DOT__ypixel_bus[10]),32);
        bufp->chgSData(oldp+50,(vlSelf->top__DOT__en_bus),11);
        bufp->chgIData(oldp+51,(vlSelf->top__DOT__colour_bus[0]),24);
        bufp->chgIData(oldp+52,(vlSelf->top__DOT__colour_bus[1]),24);
        bufp->chgIData(oldp+53,(vlSelf->top__DOT__colour_bus[2]),24);
        bufp->chgIData(oldp+54,(vlSelf->top__DOT__colour_bus[3]),24);
        bufp->chgIData(oldp+55,(vlSelf->top__DOT__colour_bus[4]),24);
        bufp->chgIData(oldp+56,(vlSelf->top__DOT__colour_bus[5]),24);
        bufp->chgIData(oldp+57,(vlSelf->top__DOT__colour_bus[6]),24);
        bufp->chgIData(oldp+58,(vlSelf->top__DOT__colour_bus[7]),24);
        bufp->chgIData(oldp+59,(vlSelf->top__DOT__colour_bus[8]),24);
        bufp->chgIData(oldp+60,(vlSelf->top__DOT__colour_bus[9]),24);
        bufp->chgIData(oldp+61,(vlSelf->top__DOT__colour_bus[10]),24);
        bufp->chgSData(oldp+62,(vlSelf->top__DOT__full_queue_bus),11);
        bufp->chgIData(oldp+63,(vlSelf->top__DOT__combinator_block__DOT__xpixel),32);
        bufp->chgIData(oldp+64,(vlSelf->top__DOT__combinator_block__DOT__ypixel),32);
        bufp->chgBit(oldp+65,((1U & (IData)(vlSelf->top__DOT__full_queue_bus))));
        bufp->chgBit(oldp+66,(vlSelf->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__engine__finished));
        bufp->chgIData(oldp+67,(vlSelf->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__engine__iterations),32);
        bufp->chgIData(oldp+68,(vlSelf->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__engine__xpixel),32);
        bufp->chgIData(oldp+69,(vlSelf->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__engine__ypixel),32);
        bufp->chgIData(oldp+70,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__x0_buff),32);
        bufp->chgIData(oldp+71,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__y0_buff),32);
        bufp->chgIData(oldp+72,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__state),32);
        bufp->chgIData(oldp+73,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__x),32);
        bufp->chgIData(oldp+74,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__y),32);
        bufp->chgQData(oldp+75,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__y_tmp),64);
        bufp->chgQData(oldp+77,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__x2),64);
        bufp->chgQData(oldp+79,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__y2),64);
        bufp->chgBit(oldp+81,((1U & (IData)(vlSelf->top__DOT__fin_bus))));
        bufp->chgIData(oldp+82,(vlSelf->top__DOT__colour_bus
                                [0U]),24);
        bufp->chgIData(oldp+83,(vlSelf->top__DOT__xpixel_bus
                                [0U]),32);
        bufp->chgIData(oldp+84,(vlSelf->top__DOT__ypixel_bus
                                [0U]),32);
        bufp->chgBit(oldp+85,(vlSelf->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__queue_block__full_queue));
        bufp->chgBit(oldp+86,(vlSelf->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__queue_block__en));
        bufp->chgIData(oldp+87,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[0]),24);
        bufp->chgIData(oldp+88,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[1]),24);
        bufp->chgIData(oldp+89,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[2]),24);
        bufp->chgIData(oldp+90,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[3]),24);
        bufp->chgIData(oldp+91,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[4]),24);
        bufp->chgIData(oldp+92,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[5]),24);
        bufp->chgIData(oldp+93,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[6]),24);
        bufp->chgIData(oldp+94,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[7]),24);
        bufp->chgIData(oldp+95,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[8]),24);
        bufp->chgIData(oldp+96,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[9]),24);
        bufp->chgIData(oldp+97,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[0]),32);
        bufp->chgIData(oldp+98,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[1]),32);
        bufp->chgIData(oldp+99,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[2]),32);
        bufp->chgIData(oldp+100,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[3]),32);
        bufp->chgIData(oldp+101,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[4]),32);
        bufp->chgIData(oldp+102,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[5]),32);
        bufp->chgIData(oldp+103,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[6]),32);
        bufp->chgIData(oldp+104,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[7]),32);
        bufp->chgIData(oldp+105,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[8]),32);
        bufp->chgIData(oldp+106,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[9]),32);
        bufp->chgIData(oldp+107,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[0]),32);
        bufp->chgIData(oldp+108,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[1]),32);
        bufp->chgIData(oldp+109,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[2]),32);
        bufp->chgIData(oldp+110,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[3]),32);
        bufp->chgIData(oldp+111,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[4]),32);
        bufp->chgIData(oldp+112,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[5]),32);
        bufp->chgIData(oldp+113,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[6]),32);
        bufp->chgIData(oldp+114,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[7]),32);
        bufp->chgIData(oldp+115,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[8]),32);
        bufp->chgIData(oldp+116,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[9]),32);
        bufp->chgCData(oldp+117,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__counter),4);
        bufp->chgIData(oldp+118,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__prev_xpixel),32);
        bufp->chgBit(oldp+119,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__fin_wire));
        bufp->chgIData(oldp+120,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_wire),24);
        bufp->chgIData(oldp+121,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__unnamedblk2__DOT__i),32);
        bufp->chgIData(oldp+122,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__unnamedblk3__DOT__i),32);
        bufp->chgBit(oldp+123,((1U & ((IData)(vlSelf->top__DOT__full_queue_bus) 
                                      >> 0xaU))));
        bufp->chgBit(oldp+124,(vlSelf->top__DOT____Vcellout__genblk1__BRA__10__KET____DOT__engine__finished));
        bufp->chgIData(oldp+125,(vlSelf->top__DOT____Vcellout__genblk1__BRA__10__KET____DOT__engine__iterations),32);
        bufp->chgIData(oldp+126,(vlSelf->top__DOT____Vcellout__genblk1__BRA__10__KET____DOT__engine__xpixel),32);
        bufp->chgIData(oldp+127,(vlSelf->top__DOT____Vcellout__genblk1__BRA__10__KET____DOT__engine__ypixel),32);
        bufp->chgIData(oldp+128,(vlSelf->top__DOT__genblk1__BRA__10__KET____DOT__engine__DOT__x0_buff),32);
        bufp->chgIData(oldp+129,(vlSelf->top__DOT__genblk1__BRA__10__KET____DOT__engine__DOT__y0_buff),32);
        bufp->chgIData(oldp+130,(vlSelf->top__DOT__genblk1__BRA__10__KET____DOT__engine__DOT__state),32);
        bufp->chgIData(oldp+131,(vlSelf->top__DOT__genblk1__BRA__10__KET____DOT__engine__DOT__x),32);
        bufp->chgIData(oldp+132,(vlSelf->top__DOT__genblk1__BRA__10__KET____DOT__engine__DOT__y),32);
        bufp->chgQData(oldp+133,(vlSelf->top__DOT__genblk1__BRA__10__KET____DOT__engine__DOT__y_tmp),64);
        bufp->chgQData(oldp+135,(vlSelf->top__DOT__genblk1__BRA__10__KET____DOT__engine__DOT__x2),64);
        bufp->chgQData(oldp+137,(vlSelf->top__DOT__genblk1__BRA__10__KET____DOT__engine__DOT__y2),64);
        bufp->chgBit(oldp+139,((1U & ((IData)(vlSelf->top__DOT__fin_bus) 
                                      >> 0xaU))));
        bufp->chgIData(oldp+140,(vlSelf->top__DOT__colour_bus
                                 [0xaU]),24);
        bufp->chgIData(oldp+141,(vlSelf->top__DOT__xpixel_bus
                                 [0xaU]),32);
        bufp->chgIData(oldp+142,(vlSelf->top__DOT__ypixel_bus
                                 [0xaU]),32);
        bufp->chgBit(oldp+143,(vlSelf->top__DOT____Vcellout__genblk1__BRA__10__KET____DOT__queue_block__full_queue));
        bufp->chgBit(oldp+144,(vlSelf->top__DOT____Vcellout__genblk1__BRA__10__KET____DOT__queue_block__en));
        bufp->chgIData(oldp+145,(vlSelf->top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__colour_queue[0]),24);
        bufp->chgIData(oldp+146,(vlSelf->top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__colour_queue[1]),24);
        bufp->chgIData(oldp+147,(vlSelf->top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__colour_queue[2]),24);
        bufp->chgIData(oldp+148,(vlSelf->top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__colour_queue[3]),24);
        bufp->chgIData(oldp+149,(vlSelf->top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__colour_queue[4]),24);
        bufp->chgIData(oldp+150,(vlSelf->top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__colour_queue[5]),24);
        bufp->chgIData(oldp+151,(vlSelf->top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__colour_queue[6]),24);
        bufp->chgIData(oldp+152,(vlSelf->top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__colour_queue[7]),24);
        bufp->chgIData(oldp+153,(vlSelf->top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__colour_queue[8]),24);
        bufp->chgIData(oldp+154,(vlSelf->top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__colour_queue[9]),24);
        bufp->chgIData(oldp+155,(vlSelf->top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__xqueue[0]),32);
        bufp->chgIData(oldp+156,(vlSelf->top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__xqueue[1]),32);
        bufp->chgIData(oldp+157,(vlSelf->top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__xqueue[2]),32);
        bufp->chgIData(oldp+158,(vlSelf->top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__xqueue[3]),32);
        bufp->chgIData(oldp+159,(vlSelf->top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__xqueue[4]),32);
        bufp->chgIData(oldp+160,(vlSelf->top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__xqueue[5]),32);
        bufp->chgIData(oldp+161,(vlSelf->top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__xqueue[6]),32);
        bufp->chgIData(oldp+162,(vlSelf->top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__xqueue[7]),32);
        bufp->chgIData(oldp+163,(vlSelf->top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__xqueue[8]),32);
        bufp->chgIData(oldp+164,(vlSelf->top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__xqueue[9]),32);
        bufp->chgIData(oldp+165,(vlSelf->top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__yqueue[0]),32);
        bufp->chgIData(oldp+166,(vlSelf->top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__yqueue[1]),32);
        bufp->chgIData(oldp+167,(vlSelf->top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__yqueue[2]),32);
        bufp->chgIData(oldp+168,(vlSelf->top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__yqueue[3]),32);
        bufp->chgIData(oldp+169,(vlSelf->top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__yqueue[4]),32);
        bufp->chgIData(oldp+170,(vlSelf->top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__yqueue[5]),32);
        bufp->chgIData(oldp+171,(vlSelf->top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__yqueue[6]),32);
        bufp->chgIData(oldp+172,(vlSelf->top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__yqueue[7]),32);
        bufp->chgIData(oldp+173,(vlSelf->top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__yqueue[8]),32);
        bufp->chgIData(oldp+174,(vlSelf->top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__yqueue[9]),32);
        bufp->chgCData(oldp+175,(vlSelf->top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__counter),4);
        bufp->chgIData(oldp+176,(vlSelf->top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__prev_xpixel),32);
        bufp->chgBit(oldp+177,(vlSelf->top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__fin_wire));
        bufp->chgIData(oldp+178,(vlSelf->top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__colour_wire),24);
        bufp->chgIData(oldp+179,(vlSelf->top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__unnamedblk2__DOT__i),32);
        bufp->chgIData(oldp+180,(vlSelf->top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__unnamedblk3__DOT__i),32);
        bufp->chgBit(oldp+181,((1U & ((IData)(vlSelf->top__DOT__full_queue_bus) 
                                      >> 1U))));
        bufp->chgBit(oldp+182,(vlSelf->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__engine__finished));
        bufp->chgIData(oldp+183,(vlSelf->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__engine__iterations),32);
        bufp->chgIData(oldp+184,(vlSelf->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__engine__xpixel),32);
        bufp->chgIData(oldp+185,(vlSelf->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__engine__ypixel),32);
        bufp->chgIData(oldp+186,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__x0_buff),32);
        bufp->chgIData(oldp+187,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__y0_buff),32);
        bufp->chgIData(oldp+188,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__state),32);
        bufp->chgIData(oldp+189,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__x),32);
        bufp->chgIData(oldp+190,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__y),32);
        bufp->chgQData(oldp+191,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__y_tmp),64);
        bufp->chgQData(oldp+193,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__x2),64);
        bufp->chgQData(oldp+195,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__y2),64);
        bufp->chgBit(oldp+197,((1U & ((IData)(vlSelf->top__DOT__fin_bus) 
                                      >> 1U))));
        bufp->chgIData(oldp+198,(vlSelf->top__DOT__colour_bus
                                 [1U]),24);
        bufp->chgIData(oldp+199,(vlSelf->top__DOT__xpixel_bus
                                 [1U]),32);
        bufp->chgIData(oldp+200,(vlSelf->top__DOT__ypixel_bus
                                 [1U]),32);
        bufp->chgBit(oldp+201,(vlSelf->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__queue_block__full_queue));
        bufp->chgBit(oldp+202,(vlSelf->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__queue_block__en));
        bufp->chgIData(oldp+203,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[0]),24);
        bufp->chgIData(oldp+204,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[1]),24);
        bufp->chgIData(oldp+205,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[2]),24);
        bufp->chgIData(oldp+206,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[3]),24);
        bufp->chgIData(oldp+207,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[4]),24);
        bufp->chgIData(oldp+208,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[5]),24);
        bufp->chgIData(oldp+209,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[6]),24);
        bufp->chgIData(oldp+210,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[7]),24);
        bufp->chgIData(oldp+211,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[8]),24);
        bufp->chgIData(oldp+212,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[9]),24);
        bufp->chgIData(oldp+213,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[0]),32);
        bufp->chgIData(oldp+214,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[1]),32);
        bufp->chgIData(oldp+215,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[2]),32);
        bufp->chgIData(oldp+216,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[3]),32);
        bufp->chgIData(oldp+217,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[4]),32);
        bufp->chgIData(oldp+218,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[5]),32);
        bufp->chgIData(oldp+219,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[6]),32);
        bufp->chgIData(oldp+220,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[7]),32);
        bufp->chgIData(oldp+221,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[8]),32);
        bufp->chgIData(oldp+222,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[9]),32);
        bufp->chgIData(oldp+223,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[0]),32);
        bufp->chgIData(oldp+224,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[1]),32);
        bufp->chgIData(oldp+225,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[2]),32);
        bufp->chgIData(oldp+226,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[3]),32);
        bufp->chgIData(oldp+227,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[4]),32);
        bufp->chgIData(oldp+228,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[5]),32);
        bufp->chgIData(oldp+229,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[6]),32);
        bufp->chgIData(oldp+230,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[7]),32);
        bufp->chgIData(oldp+231,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[8]),32);
        bufp->chgIData(oldp+232,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[9]),32);
        bufp->chgCData(oldp+233,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__counter),4);
        bufp->chgIData(oldp+234,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__prev_xpixel),32);
        bufp->chgBit(oldp+235,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__fin_wire));
        bufp->chgIData(oldp+236,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_wire),24);
        bufp->chgIData(oldp+237,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__unnamedblk2__DOT__i),32);
        bufp->chgIData(oldp+238,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__unnamedblk3__DOT__i),32);
        bufp->chgBit(oldp+239,((1U & ((IData)(vlSelf->top__DOT__full_queue_bus) 
                                      >> 2U))));
        bufp->chgBit(oldp+240,(vlSelf->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__engine__finished));
        bufp->chgIData(oldp+241,(vlSelf->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__engine__iterations),32);
        bufp->chgIData(oldp+242,(vlSelf->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__engine__xpixel),32);
        bufp->chgIData(oldp+243,(vlSelf->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__engine__ypixel),32);
        bufp->chgIData(oldp+244,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__x0_buff),32);
        bufp->chgIData(oldp+245,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__y0_buff),32);
        bufp->chgIData(oldp+246,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__state),32);
        bufp->chgIData(oldp+247,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__x),32);
        bufp->chgIData(oldp+248,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__y),32);
        bufp->chgQData(oldp+249,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__y_tmp),64);
        bufp->chgQData(oldp+251,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__x2),64);
        bufp->chgQData(oldp+253,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__y2),64);
        bufp->chgBit(oldp+255,((1U & ((IData)(vlSelf->top__DOT__fin_bus) 
                                      >> 2U))));
        bufp->chgIData(oldp+256,(vlSelf->top__DOT__colour_bus
                                 [2U]),24);
        bufp->chgIData(oldp+257,(vlSelf->top__DOT__xpixel_bus
                                 [2U]),32);
        bufp->chgIData(oldp+258,(vlSelf->top__DOT__ypixel_bus
                                 [2U]),32);
        bufp->chgBit(oldp+259,(vlSelf->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__queue_block__full_queue));
        bufp->chgBit(oldp+260,(vlSelf->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__queue_block__en));
        bufp->chgIData(oldp+261,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[0]),24);
        bufp->chgIData(oldp+262,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[1]),24);
        bufp->chgIData(oldp+263,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[2]),24);
        bufp->chgIData(oldp+264,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[3]),24);
        bufp->chgIData(oldp+265,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[4]),24);
        bufp->chgIData(oldp+266,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[5]),24);
        bufp->chgIData(oldp+267,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[6]),24);
        bufp->chgIData(oldp+268,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[7]),24);
        bufp->chgIData(oldp+269,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[8]),24);
        bufp->chgIData(oldp+270,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[9]),24);
        bufp->chgIData(oldp+271,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[0]),32);
        bufp->chgIData(oldp+272,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[1]),32);
        bufp->chgIData(oldp+273,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[2]),32);
        bufp->chgIData(oldp+274,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[3]),32);
        bufp->chgIData(oldp+275,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[4]),32);
        bufp->chgIData(oldp+276,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[5]),32);
        bufp->chgIData(oldp+277,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[6]),32);
        bufp->chgIData(oldp+278,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[7]),32);
        bufp->chgIData(oldp+279,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[8]),32);
        bufp->chgIData(oldp+280,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[9]),32);
        bufp->chgIData(oldp+281,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[0]),32);
        bufp->chgIData(oldp+282,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[1]),32);
        bufp->chgIData(oldp+283,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[2]),32);
        bufp->chgIData(oldp+284,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[3]),32);
        bufp->chgIData(oldp+285,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[4]),32);
        bufp->chgIData(oldp+286,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[5]),32);
        bufp->chgIData(oldp+287,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[6]),32);
        bufp->chgIData(oldp+288,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[7]),32);
        bufp->chgIData(oldp+289,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[8]),32);
        bufp->chgIData(oldp+290,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[9]),32);
        bufp->chgCData(oldp+291,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__counter),4);
        bufp->chgIData(oldp+292,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__prev_xpixel),32);
        bufp->chgBit(oldp+293,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__fin_wire));
        bufp->chgIData(oldp+294,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_wire),24);
        bufp->chgIData(oldp+295,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__unnamedblk2__DOT__i),32);
        bufp->chgIData(oldp+296,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__unnamedblk3__DOT__i),32);
        bufp->chgBit(oldp+297,((1U & ((IData)(vlSelf->top__DOT__full_queue_bus) 
                                      >> 3U))));
        bufp->chgBit(oldp+298,(vlSelf->top__DOT____Vcellout__genblk1__BRA__3__KET____DOT__engine__finished));
        bufp->chgIData(oldp+299,(vlSelf->top__DOT____Vcellout__genblk1__BRA__3__KET____DOT__engine__iterations),32);
        bufp->chgIData(oldp+300,(vlSelf->top__DOT____Vcellout__genblk1__BRA__3__KET____DOT__engine__xpixel),32);
        bufp->chgIData(oldp+301,(vlSelf->top__DOT____Vcellout__genblk1__BRA__3__KET____DOT__engine__ypixel),32);
        bufp->chgIData(oldp+302,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__engine__DOT__x0_buff),32);
        bufp->chgIData(oldp+303,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__engine__DOT__y0_buff),32);
        bufp->chgIData(oldp+304,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__engine__DOT__state),32);
        bufp->chgIData(oldp+305,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__engine__DOT__x),32);
        bufp->chgIData(oldp+306,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__engine__DOT__y),32);
        bufp->chgQData(oldp+307,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__engine__DOT__y_tmp),64);
        bufp->chgQData(oldp+309,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__engine__DOT__x2),64);
        bufp->chgQData(oldp+311,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__engine__DOT__y2),64);
        bufp->chgBit(oldp+313,((1U & ((IData)(vlSelf->top__DOT__fin_bus) 
                                      >> 3U))));
        bufp->chgIData(oldp+314,(vlSelf->top__DOT__colour_bus
                                 [3U]),24);
        bufp->chgIData(oldp+315,(vlSelf->top__DOT__xpixel_bus
                                 [3U]),32);
        bufp->chgIData(oldp+316,(vlSelf->top__DOT__ypixel_bus
                                 [3U]),32);
        bufp->chgBit(oldp+317,(vlSelf->top__DOT____Vcellout__genblk1__BRA__3__KET____DOT__queue_block__full_queue));
        bufp->chgBit(oldp+318,(vlSelf->top__DOT____Vcellout__genblk1__BRA__3__KET____DOT__queue_block__en));
        bufp->chgIData(oldp+319,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue[0]),24);
        bufp->chgIData(oldp+320,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue[1]),24);
        bufp->chgIData(oldp+321,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue[2]),24);
        bufp->chgIData(oldp+322,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue[3]),24);
        bufp->chgIData(oldp+323,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue[4]),24);
        bufp->chgIData(oldp+324,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue[5]),24);
        bufp->chgIData(oldp+325,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue[6]),24);
        bufp->chgIData(oldp+326,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue[7]),24);
        bufp->chgIData(oldp+327,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue[8]),24);
        bufp->chgIData(oldp+328,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue[9]),24);
        bufp->chgIData(oldp+329,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue[0]),32);
        bufp->chgIData(oldp+330,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue[1]),32);
        bufp->chgIData(oldp+331,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue[2]),32);
        bufp->chgIData(oldp+332,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue[3]),32);
        bufp->chgIData(oldp+333,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue[4]),32);
        bufp->chgIData(oldp+334,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue[5]),32);
        bufp->chgIData(oldp+335,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue[6]),32);
        bufp->chgIData(oldp+336,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue[7]),32);
        bufp->chgIData(oldp+337,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue[8]),32);
        bufp->chgIData(oldp+338,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue[9]),32);
        bufp->chgIData(oldp+339,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue[0]),32);
        bufp->chgIData(oldp+340,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue[1]),32);
        bufp->chgIData(oldp+341,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue[2]),32);
        bufp->chgIData(oldp+342,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue[3]),32);
        bufp->chgIData(oldp+343,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue[4]),32);
        bufp->chgIData(oldp+344,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue[5]),32);
        bufp->chgIData(oldp+345,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue[6]),32);
        bufp->chgIData(oldp+346,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue[7]),32);
        bufp->chgIData(oldp+347,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue[8]),32);
        bufp->chgIData(oldp+348,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue[9]),32);
        bufp->chgCData(oldp+349,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__counter),4);
        bufp->chgIData(oldp+350,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__prev_xpixel),32);
        bufp->chgBit(oldp+351,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__fin_wire));
        bufp->chgIData(oldp+352,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_wire),24);
        bufp->chgIData(oldp+353,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__unnamedblk2__DOT__i),32);
        bufp->chgIData(oldp+354,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__unnamedblk3__DOT__i),32);
        bufp->chgBit(oldp+355,((1U & ((IData)(vlSelf->top__DOT__full_queue_bus) 
                                      >> 4U))));
        bufp->chgBit(oldp+356,(vlSelf->top__DOT____Vcellout__genblk1__BRA__4__KET____DOT__engine__finished));
        bufp->chgIData(oldp+357,(vlSelf->top__DOT____Vcellout__genblk1__BRA__4__KET____DOT__engine__iterations),32);
        bufp->chgIData(oldp+358,(vlSelf->top__DOT____Vcellout__genblk1__BRA__4__KET____DOT__engine__xpixel),32);
        bufp->chgIData(oldp+359,(vlSelf->top__DOT____Vcellout__genblk1__BRA__4__KET____DOT__engine__ypixel),32);
        bufp->chgIData(oldp+360,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__engine__DOT__x0_buff),32);
        bufp->chgIData(oldp+361,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__engine__DOT__y0_buff),32);
        bufp->chgIData(oldp+362,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__engine__DOT__state),32);
        bufp->chgIData(oldp+363,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__engine__DOT__x),32);
        bufp->chgIData(oldp+364,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__engine__DOT__y),32);
        bufp->chgQData(oldp+365,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__engine__DOT__y_tmp),64);
        bufp->chgQData(oldp+367,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__engine__DOT__x2),64);
        bufp->chgQData(oldp+369,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__engine__DOT__y2),64);
        bufp->chgBit(oldp+371,((1U & ((IData)(vlSelf->top__DOT__fin_bus) 
                                      >> 4U))));
        bufp->chgIData(oldp+372,(vlSelf->top__DOT__colour_bus
                                 [4U]),24);
        bufp->chgIData(oldp+373,(vlSelf->top__DOT__xpixel_bus
                                 [4U]),32);
        bufp->chgIData(oldp+374,(vlSelf->top__DOT__ypixel_bus
                                 [4U]),32);
        bufp->chgBit(oldp+375,(vlSelf->top__DOT____Vcellout__genblk1__BRA__4__KET____DOT__queue_block__full_queue));
        bufp->chgBit(oldp+376,(vlSelf->top__DOT____Vcellout__genblk1__BRA__4__KET____DOT__queue_block__en));
        bufp->chgIData(oldp+377,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue[0]),24);
        bufp->chgIData(oldp+378,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue[1]),24);
        bufp->chgIData(oldp+379,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue[2]),24);
        bufp->chgIData(oldp+380,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue[3]),24);
        bufp->chgIData(oldp+381,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue[4]),24);
        bufp->chgIData(oldp+382,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue[5]),24);
        bufp->chgIData(oldp+383,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue[6]),24);
        bufp->chgIData(oldp+384,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue[7]),24);
        bufp->chgIData(oldp+385,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue[8]),24);
        bufp->chgIData(oldp+386,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue[9]),24);
        bufp->chgIData(oldp+387,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue[0]),32);
        bufp->chgIData(oldp+388,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue[1]),32);
        bufp->chgIData(oldp+389,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue[2]),32);
        bufp->chgIData(oldp+390,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue[3]),32);
        bufp->chgIData(oldp+391,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue[4]),32);
        bufp->chgIData(oldp+392,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue[5]),32);
        bufp->chgIData(oldp+393,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue[6]),32);
        bufp->chgIData(oldp+394,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue[7]),32);
        bufp->chgIData(oldp+395,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue[8]),32);
        bufp->chgIData(oldp+396,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue[9]),32);
        bufp->chgIData(oldp+397,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue[0]),32);
        bufp->chgIData(oldp+398,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue[1]),32);
        bufp->chgIData(oldp+399,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue[2]),32);
        bufp->chgIData(oldp+400,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue[3]),32);
        bufp->chgIData(oldp+401,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue[4]),32);
        bufp->chgIData(oldp+402,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue[5]),32);
        bufp->chgIData(oldp+403,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue[6]),32);
        bufp->chgIData(oldp+404,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue[7]),32);
        bufp->chgIData(oldp+405,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue[8]),32);
        bufp->chgIData(oldp+406,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue[9]),32);
        bufp->chgCData(oldp+407,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__counter),4);
        bufp->chgIData(oldp+408,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__prev_xpixel),32);
        bufp->chgBit(oldp+409,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__fin_wire));
        bufp->chgIData(oldp+410,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_wire),24);
        bufp->chgIData(oldp+411,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__unnamedblk2__DOT__i),32);
        bufp->chgIData(oldp+412,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__unnamedblk3__DOT__i),32);
        bufp->chgBit(oldp+413,((1U & ((IData)(vlSelf->top__DOT__full_queue_bus) 
                                      >> 5U))));
        bufp->chgBit(oldp+414,(vlSelf->top__DOT____Vcellout__genblk1__BRA__5__KET____DOT__engine__finished));
        bufp->chgIData(oldp+415,(vlSelf->top__DOT____Vcellout__genblk1__BRA__5__KET____DOT__engine__iterations),32);
        bufp->chgIData(oldp+416,(vlSelf->top__DOT____Vcellout__genblk1__BRA__5__KET____DOT__engine__xpixel),32);
        bufp->chgIData(oldp+417,(vlSelf->top__DOT____Vcellout__genblk1__BRA__5__KET____DOT__engine__ypixel),32);
        bufp->chgIData(oldp+418,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__engine__DOT__x0_buff),32);
        bufp->chgIData(oldp+419,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__engine__DOT__y0_buff),32);
        bufp->chgIData(oldp+420,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__engine__DOT__state),32);
        bufp->chgIData(oldp+421,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__engine__DOT__x),32);
        bufp->chgIData(oldp+422,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__engine__DOT__y),32);
        bufp->chgQData(oldp+423,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__engine__DOT__y_tmp),64);
        bufp->chgQData(oldp+425,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__engine__DOT__x2),64);
        bufp->chgQData(oldp+427,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__engine__DOT__y2),64);
        bufp->chgBit(oldp+429,((1U & ((IData)(vlSelf->top__DOT__fin_bus) 
                                      >> 5U))));
        bufp->chgIData(oldp+430,(vlSelf->top__DOT__colour_bus
                                 [5U]),24);
        bufp->chgIData(oldp+431,(vlSelf->top__DOT__xpixel_bus
                                 [5U]),32);
        bufp->chgIData(oldp+432,(vlSelf->top__DOT__ypixel_bus
                                 [5U]),32);
        bufp->chgBit(oldp+433,(vlSelf->top__DOT____Vcellout__genblk1__BRA__5__KET____DOT__queue_block__full_queue));
        bufp->chgBit(oldp+434,(vlSelf->top__DOT____Vcellout__genblk1__BRA__5__KET____DOT__queue_block__en));
        bufp->chgIData(oldp+435,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue[0]),24);
        bufp->chgIData(oldp+436,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue[1]),24);
        bufp->chgIData(oldp+437,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue[2]),24);
        bufp->chgIData(oldp+438,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue[3]),24);
        bufp->chgIData(oldp+439,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue[4]),24);
        bufp->chgIData(oldp+440,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue[5]),24);
        bufp->chgIData(oldp+441,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue[6]),24);
        bufp->chgIData(oldp+442,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue[7]),24);
        bufp->chgIData(oldp+443,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue[8]),24);
        bufp->chgIData(oldp+444,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue[9]),24);
        bufp->chgIData(oldp+445,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue[0]),32);
        bufp->chgIData(oldp+446,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue[1]),32);
        bufp->chgIData(oldp+447,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue[2]),32);
        bufp->chgIData(oldp+448,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue[3]),32);
        bufp->chgIData(oldp+449,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue[4]),32);
        bufp->chgIData(oldp+450,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue[5]),32);
        bufp->chgIData(oldp+451,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue[6]),32);
        bufp->chgIData(oldp+452,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue[7]),32);
        bufp->chgIData(oldp+453,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue[8]),32);
        bufp->chgIData(oldp+454,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue[9]),32);
        bufp->chgIData(oldp+455,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue[0]),32);
        bufp->chgIData(oldp+456,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue[1]),32);
        bufp->chgIData(oldp+457,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue[2]),32);
        bufp->chgIData(oldp+458,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue[3]),32);
        bufp->chgIData(oldp+459,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue[4]),32);
        bufp->chgIData(oldp+460,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue[5]),32);
        bufp->chgIData(oldp+461,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue[6]),32);
        bufp->chgIData(oldp+462,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue[7]),32);
        bufp->chgIData(oldp+463,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue[8]),32);
        bufp->chgIData(oldp+464,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue[9]),32);
        bufp->chgCData(oldp+465,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__counter),4);
        bufp->chgIData(oldp+466,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__prev_xpixel),32);
        bufp->chgBit(oldp+467,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__fin_wire));
        bufp->chgIData(oldp+468,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_wire),24);
        bufp->chgIData(oldp+469,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__unnamedblk2__DOT__i),32);
        bufp->chgIData(oldp+470,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__unnamedblk3__DOT__i),32);
        bufp->chgBit(oldp+471,((1U & ((IData)(vlSelf->top__DOT__full_queue_bus) 
                                      >> 6U))));
        bufp->chgBit(oldp+472,(vlSelf->top__DOT____Vcellout__genblk1__BRA__6__KET____DOT__engine__finished));
        bufp->chgIData(oldp+473,(vlSelf->top__DOT____Vcellout__genblk1__BRA__6__KET____DOT__engine__iterations),32);
        bufp->chgIData(oldp+474,(vlSelf->top__DOT____Vcellout__genblk1__BRA__6__KET____DOT__engine__xpixel),32);
        bufp->chgIData(oldp+475,(vlSelf->top__DOT____Vcellout__genblk1__BRA__6__KET____DOT__engine__ypixel),32);
        bufp->chgIData(oldp+476,(vlSelf->top__DOT__genblk1__BRA__6__KET____DOT__engine__DOT__x0_buff),32);
        bufp->chgIData(oldp+477,(vlSelf->top__DOT__genblk1__BRA__6__KET____DOT__engine__DOT__y0_buff),32);
        bufp->chgIData(oldp+478,(vlSelf->top__DOT__genblk1__BRA__6__KET____DOT__engine__DOT__state),32);
        bufp->chgIData(oldp+479,(vlSelf->top__DOT__genblk1__BRA__6__KET____DOT__engine__DOT__x),32);
        bufp->chgIData(oldp+480,(vlSelf->top__DOT__genblk1__BRA__6__KET____DOT__engine__DOT__y),32);
        bufp->chgQData(oldp+481,(vlSelf->top__DOT__genblk1__BRA__6__KET____DOT__engine__DOT__y_tmp),64);
        bufp->chgQData(oldp+483,(vlSelf->top__DOT__genblk1__BRA__6__KET____DOT__engine__DOT__x2),64);
        bufp->chgQData(oldp+485,(vlSelf->top__DOT__genblk1__BRA__6__KET____DOT__engine__DOT__y2),64);
        bufp->chgBit(oldp+487,((1U & ((IData)(vlSelf->top__DOT__fin_bus) 
                                      >> 6U))));
        bufp->chgIData(oldp+488,(vlSelf->top__DOT__colour_bus
                                 [6U]),24);
        bufp->chgIData(oldp+489,(vlSelf->top__DOT__xpixel_bus
                                 [6U]),32);
        bufp->chgIData(oldp+490,(vlSelf->top__DOT__ypixel_bus
                                 [6U]),32);
        bufp->chgBit(oldp+491,(vlSelf->top__DOT____Vcellout__genblk1__BRA__6__KET____DOT__queue_block__full_queue));
        bufp->chgBit(oldp+492,(vlSelf->top__DOT____Vcellout__genblk1__BRA__6__KET____DOT__queue_block__en));
        bufp->chgIData(oldp+493,(vlSelf->top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__colour_queue[0]),24);
        bufp->chgIData(oldp+494,(vlSelf->top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__colour_queue[1]),24);
        bufp->chgIData(oldp+495,(vlSelf->top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__colour_queue[2]),24);
        bufp->chgIData(oldp+496,(vlSelf->top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__colour_queue[3]),24);
        bufp->chgIData(oldp+497,(vlSelf->top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__colour_queue[4]),24);
        bufp->chgIData(oldp+498,(vlSelf->top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__colour_queue[5]),24);
        bufp->chgIData(oldp+499,(vlSelf->top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__colour_queue[6]),24);
        bufp->chgIData(oldp+500,(vlSelf->top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__colour_queue[7]),24);
        bufp->chgIData(oldp+501,(vlSelf->top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__colour_queue[8]),24);
        bufp->chgIData(oldp+502,(vlSelf->top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__colour_queue[9]),24);
        bufp->chgIData(oldp+503,(vlSelf->top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__xqueue[0]),32);
        bufp->chgIData(oldp+504,(vlSelf->top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__xqueue[1]),32);
        bufp->chgIData(oldp+505,(vlSelf->top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__xqueue[2]),32);
        bufp->chgIData(oldp+506,(vlSelf->top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__xqueue[3]),32);
        bufp->chgIData(oldp+507,(vlSelf->top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__xqueue[4]),32);
        bufp->chgIData(oldp+508,(vlSelf->top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__xqueue[5]),32);
        bufp->chgIData(oldp+509,(vlSelf->top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__xqueue[6]),32);
        bufp->chgIData(oldp+510,(vlSelf->top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__xqueue[7]),32);
        bufp->chgIData(oldp+511,(vlSelf->top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__xqueue[8]),32);
        bufp->chgIData(oldp+512,(vlSelf->top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__xqueue[9]),32);
        bufp->chgIData(oldp+513,(vlSelf->top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__yqueue[0]),32);
        bufp->chgIData(oldp+514,(vlSelf->top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__yqueue[1]),32);
        bufp->chgIData(oldp+515,(vlSelf->top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__yqueue[2]),32);
        bufp->chgIData(oldp+516,(vlSelf->top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__yqueue[3]),32);
        bufp->chgIData(oldp+517,(vlSelf->top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__yqueue[4]),32);
        bufp->chgIData(oldp+518,(vlSelf->top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__yqueue[5]),32);
        bufp->chgIData(oldp+519,(vlSelf->top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__yqueue[6]),32);
        bufp->chgIData(oldp+520,(vlSelf->top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__yqueue[7]),32);
        bufp->chgIData(oldp+521,(vlSelf->top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__yqueue[8]),32);
        bufp->chgIData(oldp+522,(vlSelf->top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__yqueue[9]),32);
        bufp->chgCData(oldp+523,(vlSelf->top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__counter),4);
        bufp->chgIData(oldp+524,(vlSelf->top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__prev_xpixel),32);
        bufp->chgBit(oldp+525,(vlSelf->top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__fin_wire));
        bufp->chgIData(oldp+526,(vlSelf->top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__colour_wire),24);
        bufp->chgIData(oldp+527,(vlSelf->top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__unnamedblk2__DOT__i),32);
        bufp->chgIData(oldp+528,(vlSelf->top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__unnamedblk3__DOT__i),32);
        bufp->chgBit(oldp+529,((1U & ((IData)(vlSelf->top__DOT__full_queue_bus) 
                                      >> 7U))));
        bufp->chgBit(oldp+530,(vlSelf->top__DOT____Vcellout__genblk1__BRA__7__KET____DOT__engine__finished));
        bufp->chgIData(oldp+531,(vlSelf->top__DOT____Vcellout__genblk1__BRA__7__KET____DOT__engine__iterations),32);
        bufp->chgIData(oldp+532,(vlSelf->top__DOT____Vcellout__genblk1__BRA__7__KET____DOT__engine__xpixel),32);
        bufp->chgIData(oldp+533,(vlSelf->top__DOT____Vcellout__genblk1__BRA__7__KET____DOT__engine__ypixel),32);
        bufp->chgIData(oldp+534,(vlSelf->top__DOT__genblk1__BRA__7__KET____DOT__engine__DOT__x0_buff),32);
        bufp->chgIData(oldp+535,(vlSelf->top__DOT__genblk1__BRA__7__KET____DOT__engine__DOT__y0_buff),32);
        bufp->chgIData(oldp+536,(vlSelf->top__DOT__genblk1__BRA__7__KET____DOT__engine__DOT__state),32);
        bufp->chgIData(oldp+537,(vlSelf->top__DOT__genblk1__BRA__7__KET____DOT__engine__DOT__x),32);
        bufp->chgIData(oldp+538,(vlSelf->top__DOT__genblk1__BRA__7__KET____DOT__engine__DOT__y),32);
        bufp->chgQData(oldp+539,(vlSelf->top__DOT__genblk1__BRA__7__KET____DOT__engine__DOT__y_tmp),64);
        bufp->chgQData(oldp+541,(vlSelf->top__DOT__genblk1__BRA__7__KET____DOT__engine__DOT__x2),64);
        bufp->chgQData(oldp+543,(vlSelf->top__DOT__genblk1__BRA__7__KET____DOT__engine__DOT__y2),64);
        bufp->chgBit(oldp+545,((1U & ((IData)(vlSelf->top__DOT__fin_bus) 
                                      >> 7U))));
        bufp->chgIData(oldp+546,(vlSelf->top__DOT__colour_bus
                                 [7U]),24);
        bufp->chgIData(oldp+547,(vlSelf->top__DOT__xpixel_bus
                                 [7U]),32);
        bufp->chgIData(oldp+548,(vlSelf->top__DOT__ypixel_bus
                                 [7U]),32);
        bufp->chgBit(oldp+549,(vlSelf->top__DOT____Vcellout__genblk1__BRA__7__KET____DOT__queue_block__full_queue));
        bufp->chgBit(oldp+550,(vlSelf->top__DOT____Vcellout__genblk1__BRA__7__KET____DOT__queue_block__en));
        bufp->chgIData(oldp+551,(vlSelf->top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__colour_queue[0]),24);
        bufp->chgIData(oldp+552,(vlSelf->top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__colour_queue[1]),24);
        bufp->chgIData(oldp+553,(vlSelf->top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__colour_queue[2]),24);
        bufp->chgIData(oldp+554,(vlSelf->top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__colour_queue[3]),24);
        bufp->chgIData(oldp+555,(vlSelf->top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__colour_queue[4]),24);
        bufp->chgIData(oldp+556,(vlSelf->top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__colour_queue[5]),24);
        bufp->chgIData(oldp+557,(vlSelf->top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__colour_queue[6]),24);
        bufp->chgIData(oldp+558,(vlSelf->top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__colour_queue[7]),24);
        bufp->chgIData(oldp+559,(vlSelf->top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__colour_queue[8]),24);
        bufp->chgIData(oldp+560,(vlSelf->top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__colour_queue[9]),24);
        bufp->chgIData(oldp+561,(vlSelf->top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__xqueue[0]),32);
        bufp->chgIData(oldp+562,(vlSelf->top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__xqueue[1]),32);
        bufp->chgIData(oldp+563,(vlSelf->top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__xqueue[2]),32);
        bufp->chgIData(oldp+564,(vlSelf->top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__xqueue[3]),32);
        bufp->chgIData(oldp+565,(vlSelf->top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__xqueue[4]),32);
        bufp->chgIData(oldp+566,(vlSelf->top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__xqueue[5]),32);
        bufp->chgIData(oldp+567,(vlSelf->top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__xqueue[6]),32);
        bufp->chgIData(oldp+568,(vlSelf->top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__xqueue[7]),32);
        bufp->chgIData(oldp+569,(vlSelf->top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__xqueue[8]),32);
        bufp->chgIData(oldp+570,(vlSelf->top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__xqueue[9]),32);
        bufp->chgIData(oldp+571,(vlSelf->top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__yqueue[0]),32);
        bufp->chgIData(oldp+572,(vlSelf->top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__yqueue[1]),32);
        bufp->chgIData(oldp+573,(vlSelf->top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__yqueue[2]),32);
        bufp->chgIData(oldp+574,(vlSelf->top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__yqueue[3]),32);
        bufp->chgIData(oldp+575,(vlSelf->top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__yqueue[4]),32);
        bufp->chgIData(oldp+576,(vlSelf->top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__yqueue[5]),32);
        bufp->chgIData(oldp+577,(vlSelf->top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__yqueue[6]),32);
        bufp->chgIData(oldp+578,(vlSelf->top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__yqueue[7]),32);
        bufp->chgIData(oldp+579,(vlSelf->top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__yqueue[8]),32);
        bufp->chgIData(oldp+580,(vlSelf->top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__yqueue[9]),32);
        bufp->chgCData(oldp+581,(vlSelf->top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__counter),4);
        bufp->chgIData(oldp+582,(vlSelf->top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__prev_xpixel),32);
        bufp->chgBit(oldp+583,(vlSelf->top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__fin_wire));
        bufp->chgIData(oldp+584,(vlSelf->top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__colour_wire),24);
        bufp->chgIData(oldp+585,(vlSelf->top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__unnamedblk2__DOT__i),32);
        bufp->chgIData(oldp+586,(vlSelf->top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__unnamedblk3__DOT__i),32);
        bufp->chgBit(oldp+587,((1U & ((IData)(vlSelf->top__DOT__full_queue_bus) 
                                      >> 8U))));
        bufp->chgBit(oldp+588,(vlSelf->top__DOT____Vcellout__genblk1__BRA__8__KET____DOT__engine__finished));
        bufp->chgIData(oldp+589,(vlSelf->top__DOT____Vcellout__genblk1__BRA__8__KET____DOT__engine__iterations),32);
        bufp->chgIData(oldp+590,(vlSelf->top__DOT____Vcellout__genblk1__BRA__8__KET____DOT__engine__xpixel),32);
        bufp->chgIData(oldp+591,(vlSelf->top__DOT____Vcellout__genblk1__BRA__8__KET____DOT__engine__ypixel),32);
        bufp->chgIData(oldp+592,(vlSelf->top__DOT__genblk1__BRA__8__KET____DOT__engine__DOT__x0_buff),32);
        bufp->chgIData(oldp+593,(vlSelf->top__DOT__genblk1__BRA__8__KET____DOT__engine__DOT__y0_buff),32);
        bufp->chgIData(oldp+594,(vlSelf->top__DOT__genblk1__BRA__8__KET____DOT__engine__DOT__state),32);
        bufp->chgIData(oldp+595,(vlSelf->top__DOT__genblk1__BRA__8__KET____DOT__engine__DOT__x),32);
        bufp->chgIData(oldp+596,(vlSelf->top__DOT__genblk1__BRA__8__KET____DOT__engine__DOT__y),32);
        bufp->chgQData(oldp+597,(vlSelf->top__DOT__genblk1__BRA__8__KET____DOT__engine__DOT__y_tmp),64);
        bufp->chgQData(oldp+599,(vlSelf->top__DOT__genblk1__BRA__8__KET____DOT__engine__DOT__x2),64);
        bufp->chgQData(oldp+601,(vlSelf->top__DOT__genblk1__BRA__8__KET____DOT__engine__DOT__y2),64);
        bufp->chgBit(oldp+603,((1U & ((IData)(vlSelf->top__DOT__fin_bus) 
                                      >> 8U))));
        bufp->chgIData(oldp+604,(vlSelf->top__DOT__colour_bus
                                 [8U]),24);
        bufp->chgIData(oldp+605,(vlSelf->top__DOT__xpixel_bus
                                 [8U]),32);
        bufp->chgIData(oldp+606,(vlSelf->top__DOT__ypixel_bus
                                 [8U]),32);
        bufp->chgBit(oldp+607,(vlSelf->top__DOT____Vcellout__genblk1__BRA__8__KET____DOT__queue_block__full_queue));
        bufp->chgBit(oldp+608,(vlSelf->top__DOT____Vcellout__genblk1__BRA__8__KET____DOT__queue_block__en));
        bufp->chgIData(oldp+609,(vlSelf->top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__colour_queue[0]),24);
        bufp->chgIData(oldp+610,(vlSelf->top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__colour_queue[1]),24);
        bufp->chgIData(oldp+611,(vlSelf->top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__colour_queue[2]),24);
        bufp->chgIData(oldp+612,(vlSelf->top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__colour_queue[3]),24);
        bufp->chgIData(oldp+613,(vlSelf->top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__colour_queue[4]),24);
        bufp->chgIData(oldp+614,(vlSelf->top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__colour_queue[5]),24);
        bufp->chgIData(oldp+615,(vlSelf->top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__colour_queue[6]),24);
        bufp->chgIData(oldp+616,(vlSelf->top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__colour_queue[7]),24);
        bufp->chgIData(oldp+617,(vlSelf->top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__colour_queue[8]),24);
        bufp->chgIData(oldp+618,(vlSelf->top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__colour_queue[9]),24);
        bufp->chgIData(oldp+619,(vlSelf->top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__xqueue[0]),32);
        bufp->chgIData(oldp+620,(vlSelf->top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__xqueue[1]),32);
        bufp->chgIData(oldp+621,(vlSelf->top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__xqueue[2]),32);
        bufp->chgIData(oldp+622,(vlSelf->top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__xqueue[3]),32);
        bufp->chgIData(oldp+623,(vlSelf->top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__xqueue[4]),32);
        bufp->chgIData(oldp+624,(vlSelf->top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__xqueue[5]),32);
        bufp->chgIData(oldp+625,(vlSelf->top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__xqueue[6]),32);
        bufp->chgIData(oldp+626,(vlSelf->top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__xqueue[7]),32);
        bufp->chgIData(oldp+627,(vlSelf->top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__xqueue[8]),32);
        bufp->chgIData(oldp+628,(vlSelf->top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__xqueue[9]),32);
        bufp->chgIData(oldp+629,(vlSelf->top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__yqueue[0]),32);
        bufp->chgIData(oldp+630,(vlSelf->top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__yqueue[1]),32);
        bufp->chgIData(oldp+631,(vlSelf->top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__yqueue[2]),32);
        bufp->chgIData(oldp+632,(vlSelf->top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__yqueue[3]),32);
        bufp->chgIData(oldp+633,(vlSelf->top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__yqueue[4]),32);
        bufp->chgIData(oldp+634,(vlSelf->top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__yqueue[5]),32);
        bufp->chgIData(oldp+635,(vlSelf->top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__yqueue[6]),32);
        bufp->chgIData(oldp+636,(vlSelf->top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__yqueue[7]),32);
        bufp->chgIData(oldp+637,(vlSelf->top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__yqueue[8]),32);
        bufp->chgIData(oldp+638,(vlSelf->top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__yqueue[9]),32);
        bufp->chgCData(oldp+639,(vlSelf->top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__counter),4);
        bufp->chgIData(oldp+640,(vlSelf->top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__prev_xpixel),32);
        bufp->chgBit(oldp+641,(vlSelf->top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__fin_wire));
        bufp->chgIData(oldp+642,(vlSelf->top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__colour_wire),24);
        bufp->chgIData(oldp+643,(vlSelf->top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__unnamedblk2__DOT__i),32);
        bufp->chgIData(oldp+644,(vlSelf->top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__unnamedblk3__DOT__i),32);
        bufp->chgBit(oldp+645,((1U & ((IData)(vlSelf->top__DOT__full_queue_bus) 
                                      >> 9U))));
        bufp->chgBit(oldp+646,(vlSelf->top__DOT____Vcellout__genblk1__BRA__9__KET____DOT__engine__finished));
        bufp->chgIData(oldp+647,(vlSelf->top__DOT____Vcellout__genblk1__BRA__9__KET____DOT__engine__iterations),32);
        bufp->chgIData(oldp+648,(vlSelf->top__DOT____Vcellout__genblk1__BRA__9__KET____DOT__engine__xpixel),32);
        bufp->chgIData(oldp+649,(vlSelf->top__DOT____Vcellout__genblk1__BRA__9__KET____DOT__engine__ypixel),32);
        bufp->chgIData(oldp+650,(vlSelf->top__DOT__genblk1__BRA__9__KET____DOT__engine__DOT__x0_buff),32);
        bufp->chgIData(oldp+651,(vlSelf->top__DOT__genblk1__BRA__9__KET____DOT__engine__DOT__y0_buff),32);
        bufp->chgIData(oldp+652,(vlSelf->top__DOT__genblk1__BRA__9__KET____DOT__engine__DOT__state),32);
        bufp->chgIData(oldp+653,(vlSelf->top__DOT__genblk1__BRA__9__KET____DOT__engine__DOT__x),32);
        bufp->chgIData(oldp+654,(vlSelf->top__DOT__genblk1__BRA__9__KET____DOT__engine__DOT__y),32);
        bufp->chgQData(oldp+655,(vlSelf->top__DOT__genblk1__BRA__9__KET____DOT__engine__DOT__y_tmp),64);
        bufp->chgQData(oldp+657,(vlSelf->top__DOT__genblk1__BRA__9__KET____DOT__engine__DOT__x2),64);
        bufp->chgQData(oldp+659,(vlSelf->top__DOT__genblk1__BRA__9__KET____DOT__engine__DOT__y2),64);
        bufp->chgBit(oldp+661,((1U & ((IData)(vlSelf->top__DOT__fin_bus) 
                                      >> 9U))));
        bufp->chgIData(oldp+662,(vlSelf->top__DOT__colour_bus
                                 [9U]),24);
        bufp->chgIData(oldp+663,(vlSelf->top__DOT__xpixel_bus
                                 [9U]),32);
        bufp->chgIData(oldp+664,(vlSelf->top__DOT__ypixel_bus
                                 [9U]),32);
        bufp->chgBit(oldp+665,(vlSelf->top__DOT____Vcellout__genblk1__BRA__9__KET____DOT__queue_block__full_queue));
        bufp->chgBit(oldp+666,(vlSelf->top__DOT____Vcellout__genblk1__BRA__9__KET____DOT__queue_block__en));
        bufp->chgIData(oldp+667,(vlSelf->top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__colour_queue[0]),24);
        bufp->chgIData(oldp+668,(vlSelf->top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__colour_queue[1]),24);
        bufp->chgIData(oldp+669,(vlSelf->top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__colour_queue[2]),24);
        bufp->chgIData(oldp+670,(vlSelf->top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__colour_queue[3]),24);
        bufp->chgIData(oldp+671,(vlSelf->top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__colour_queue[4]),24);
        bufp->chgIData(oldp+672,(vlSelf->top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__colour_queue[5]),24);
        bufp->chgIData(oldp+673,(vlSelf->top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__colour_queue[6]),24);
        bufp->chgIData(oldp+674,(vlSelf->top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__colour_queue[7]),24);
        bufp->chgIData(oldp+675,(vlSelf->top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__colour_queue[8]),24);
        bufp->chgIData(oldp+676,(vlSelf->top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__colour_queue[9]),24);
        bufp->chgIData(oldp+677,(vlSelf->top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__xqueue[0]),32);
        bufp->chgIData(oldp+678,(vlSelf->top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__xqueue[1]),32);
        bufp->chgIData(oldp+679,(vlSelf->top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__xqueue[2]),32);
        bufp->chgIData(oldp+680,(vlSelf->top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__xqueue[3]),32);
        bufp->chgIData(oldp+681,(vlSelf->top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__xqueue[4]),32);
        bufp->chgIData(oldp+682,(vlSelf->top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__xqueue[5]),32);
        bufp->chgIData(oldp+683,(vlSelf->top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__xqueue[6]),32);
        bufp->chgIData(oldp+684,(vlSelf->top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__xqueue[7]),32);
        bufp->chgIData(oldp+685,(vlSelf->top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__xqueue[8]),32);
        bufp->chgIData(oldp+686,(vlSelf->top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__xqueue[9]),32);
        bufp->chgIData(oldp+687,(vlSelf->top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__yqueue[0]),32);
        bufp->chgIData(oldp+688,(vlSelf->top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__yqueue[1]),32);
        bufp->chgIData(oldp+689,(vlSelf->top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__yqueue[2]),32);
        bufp->chgIData(oldp+690,(vlSelf->top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__yqueue[3]),32);
        bufp->chgIData(oldp+691,(vlSelf->top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__yqueue[4]),32);
        bufp->chgIData(oldp+692,(vlSelf->top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__yqueue[5]),32);
        bufp->chgIData(oldp+693,(vlSelf->top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__yqueue[6]),32);
        bufp->chgIData(oldp+694,(vlSelf->top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__yqueue[7]),32);
        bufp->chgIData(oldp+695,(vlSelf->top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__yqueue[8]),32);
        bufp->chgIData(oldp+696,(vlSelf->top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__yqueue[9]),32);
        bufp->chgCData(oldp+697,(vlSelf->top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__counter),4);
        bufp->chgIData(oldp+698,(vlSelf->top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__prev_xpixel),32);
        bufp->chgBit(oldp+699,(vlSelf->top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__fin_wire));
        bufp->chgIData(oldp+700,(vlSelf->top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__colour_wire),24);
        bufp->chgIData(oldp+701,(vlSelf->top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__unnamedblk2__DOT__i),32);
        bufp->chgIData(oldp+702,(vlSelf->top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__unnamedblk3__DOT__i),32);
        bufp->chgIData(oldp+703,(vlSelf->top__DOT____Vcellinp__lut_rom__iterations[0]),32);
        bufp->chgIData(oldp+704,(vlSelf->top__DOT____Vcellinp__lut_rom__iterations[1]),32);
        bufp->chgIData(oldp+705,(vlSelf->top__DOT____Vcellinp__lut_rom__iterations[2]),32);
        bufp->chgIData(oldp+706,(vlSelf->top__DOT____Vcellinp__lut_rom__iterations[3]),32);
        bufp->chgIData(oldp+707,(vlSelf->top__DOT____Vcellinp__lut_rom__iterations[4]),32);
        bufp->chgIData(oldp+708,(vlSelf->top__DOT____Vcellinp__lut_rom__iterations[5]),32);
        bufp->chgIData(oldp+709,(vlSelf->top__DOT____Vcellinp__lut_rom__iterations[6]),32);
        bufp->chgIData(oldp+710,(vlSelf->top__DOT____Vcellinp__lut_rom__iterations[7]),32);
        bufp->chgIData(oldp+711,(vlSelf->top__DOT____Vcellinp__lut_rom__iterations[8]),32);
        bufp->chgIData(oldp+712,(vlSelf->top__DOT____Vcellinp__lut_rom__iterations[9]),32);
        bufp->chgIData(oldp+713,(vlSelf->top__DOT____Vcellinp__lut_rom__iterations[10]),32);
        bufp->chgIData(oldp+714,(vlSelf->top__DOT____Vcellout__lut_rom__rgb_val[0]),24);
        bufp->chgIData(oldp+715,(vlSelf->top__DOT____Vcellout__lut_rom__rgb_val[1]),24);
        bufp->chgIData(oldp+716,(vlSelf->top__DOT____Vcellout__lut_rom__rgb_val[2]),24);
        bufp->chgIData(oldp+717,(vlSelf->top__DOT____Vcellout__lut_rom__rgb_val[3]),24);
        bufp->chgIData(oldp+718,(vlSelf->top__DOT____Vcellout__lut_rom__rgb_val[4]),24);
        bufp->chgIData(oldp+719,(vlSelf->top__DOT____Vcellout__lut_rom__rgb_val[5]),24);
        bufp->chgIData(oldp+720,(vlSelf->top__DOT____Vcellout__lut_rom__rgb_val[6]),24);
        bufp->chgIData(oldp+721,(vlSelf->top__DOT____Vcellout__lut_rom__rgb_val[7]),24);
        bufp->chgIData(oldp+722,(vlSelf->top__DOT____Vcellout__lut_rom__rgb_val[8]),24);
        bufp->chgIData(oldp+723,(vlSelf->top__DOT____Vcellout__lut_rom__rgb_val[9]),24);
        bufp->chgIData(oldp+724,(vlSelf->top__DOT____Vcellout__lut_rom__rgb_val[10]),24);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+725,(vlSelf->top__DOT__x[0]),32);
        bufp->chgIData(oldp+726,(vlSelf->top__DOT__x[1]),32);
        bufp->chgIData(oldp+727,(vlSelf->top__DOT__x[2]),32);
        bufp->chgIData(oldp+728,(vlSelf->top__DOT__x[3]),32);
        bufp->chgIData(oldp+729,(vlSelf->top__DOT__x[4]),32);
        bufp->chgIData(oldp+730,(vlSelf->top__DOT__x[5]),32);
        bufp->chgIData(oldp+731,(vlSelf->top__DOT__x[6]),32);
        bufp->chgIData(oldp+732,(vlSelf->top__DOT__x[7]),32);
        bufp->chgIData(oldp+733,(vlSelf->top__DOT__x[8]),32);
        bufp->chgIData(oldp+734,(vlSelf->top__DOT__x[9]),32);
        bufp->chgIData(oldp+735,(vlSelf->top__DOT__x[10]),32);
        bufp->chgIData(oldp+736,(vlSelf->top__DOT__y[0]),32);
        bufp->chgIData(oldp+737,(vlSelf->top__DOT__y[1]),32);
        bufp->chgIData(oldp+738,(vlSelf->top__DOT__y[2]),32);
        bufp->chgIData(oldp+739,(vlSelf->top__DOT__y[3]),32);
        bufp->chgIData(oldp+740,(vlSelf->top__DOT__y[4]),32);
        bufp->chgIData(oldp+741,(vlSelf->top__DOT__y[5]),32);
        bufp->chgIData(oldp+742,(vlSelf->top__DOT__y[6]),32);
        bufp->chgIData(oldp+743,(vlSelf->top__DOT__y[7]),32);
        bufp->chgIData(oldp+744,(vlSelf->top__DOT__y[8]),32);
        bufp->chgIData(oldp+745,(vlSelf->top__DOT__y[9]),32);
        bufp->chgIData(oldp+746,(vlSelf->top__DOT__y[10]),32);
        bufp->chgIData(oldp+747,(vlSelf->top__DOT____Vcellout__distributor__x[0]),32);
        bufp->chgIData(oldp+748,(vlSelf->top__DOT____Vcellout__distributor__x[1]),32);
        bufp->chgIData(oldp+749,(vlSelf->top__DOT____Vcellout__distributor__x[2]),32);
        bufp->chgIData(oldp+750,(vlSelf->top__DOT____Vcellout__distributor__x[3]),32);
        bufp->chgIData(oldp+751,(vlSelf->top__DOT____Vcellout__distributor__x[4]),32);
        bufp->chgIData(oldp+752,(vlSelf->top__DOT____Vcellout__distributor__x[5]),32);
        bufp->chgIData(oldp+753,(vlSelf->top__DOT____Vcellout__distributor__x[6]),32);
        bufp->chgIData(oldp+754,(vlSelf->top__DOT____Vcellout__distributor__x[7]),32);
        bufp->chgIData(oldp+755,(vlSelf->top__DOT____Vcellout__distributor__x[8]),32);
        bufp->chgIData(oldp+756,(vlSelf->top__DOT____Vcellout__distributor__x[9]),32);
        bufp->chgIData(oldp+757,(vlSelf->top__DOT____Vcellout__distributor__x[10]),32);
        bufp->chgIData(oldp+758,(vlSelf->top__DOT____Vcellout__distributor__y[0]),32);
        bufp->chgIData(oldp+759,(vlSelf->top__DOT____Vcellout__distributor__y[1]),32);
        bufp->chgIData(oldp+760,(vlSelf->top__DOT____Vcellout__distributor__y[2]),32);
        bufp->chgIData(oldp+761,(vlSelf->top__DOT____Vcellout__distributor__y[3]),32);
        bufp->chgIData(oldp+762,(vlSelf->top__DOT____Vcellout__distributor__y[4]),32);
        bufp->chgIData(oldp+763,(vlSelf->top__DOT____Vcellout__distributor__y[5]),32);
        bufp->chgIData(oldp+764,(vlSelf->top__DOT____Vcellout__distributor__y[6]),32);
        bufp->chgIData(oldp+765,(vlSelf->top__DOT____Vcellout__distributor__y[7]),32);
        bufp->chgIData(oldp+766,(vlSelf->top__DOT____Vcellout__distributor__y[8]),32);
        bufp->chgIData(oldp+767,(vlSelf->top__DOT____Vcellout__distributor__y[9]),32);
        bufp->chgIData(oldp+768,(vlSelf->top__DOT____Vcellout__distributor__y[10]),32);
        bufp->chgIData(oldp+769,(vlSelf->top__DOT__distributor__DOT__x0),32);
        bufp->chgIData(oldp+770,(vlSelf->top__DOT__distributor__DOT__y0),32);
        bufp->chgIData(oldp+771,(vlSelf->top__DOT__x
                                 [0U]),32);
        bufp->chgIData(oldp+772,(vlSelf->top__DOT__y
                                 [0U]),32);
        bufp->chgIData(oldp+773,(vlSelf->top__DOT__x
                                 [0xaU]),32);
        bufp->chgIData(oldp+774,(vlSelf->top__DOT__y
                                 [0xaU]),32);
        bufp->chgIData(oldp+775,(vlSelf->top__DOT__x
                                 [1U]),32);
        bufp->chgIData(oldp+776,(vlSelf->top__DOT__y
                                 [1U]),32);
        bufp->chgIData(oldp+777,(vlSelf->top__DOT__x
                                 [2U]),32);
        bufp->chgIData(oldp+778,(vlSelf->top__DOT__y
                                 [2U]),32);
        bufp->chgIData(oldp+779,(vlSelf->top__DOT__x
                                 [3U]),32);
        bufp->chgIData(oldp+780,(vlSelf->top__DOT__y
                                 [3U]),32);
        bufp->chgIData(oldp+781,(vlSelf->top__DOT__x
                                 [4U]),32);
        bufp->chgIData(oldp+782,(vlSelf->top__DOT__y
                                 [4U]),32);
        bufp->chgIData(oldp+783,(vlSelf->top__DOT__x
                                 [5U]),32);
        bufp->chgIData(oldp+784,(vlSelf->top__DOT__y
                                 [5U]),32);
        bufp->chgIData(oldp+785,(vlSelf->top__DOT__x
                                 [6U]),32);
        bufp->chgIData(oldp+786,(vlSelf->top__DOT__y
                                 [6U]),32);
        bufp->chgIData(oldp+787,(vlSelf->top__DOT__x
                                 [7U]),32);
        bufp->chgIData(oldp+788,(vlSelf->top__DOT__y
                                 [7U]),32);
        bufp->chgIData(oldp+789,(vlSelf->top__DOT__x
                                 [8U]),32);
        bufp->chgIData(oldp+790,(vlSelf->top__DOT__y
                                 [8U]),32);
        bufp->chgIData(oldp+791,(vlSelf->top__DOT__x
                                 [9U]),32);
        bufp->chgIData(oldp+792,(vlSelf->top__DOT__y
                                 [9U]),32);
    }
    bufp->chgBit(oldp+793,(vlSelf->clk));
    bufp->chgBit(oldp+794,(vlSelf->reset));
    bufp->chgBit(oldp+795,(vlSelf->ready));
    bufp->chgIData(oldp+796,(vlSelf->iterations_max),32);
    bufp->chgIData(oldp+797,(vlSelf->zoom),32);
    bufp->chgIData(oldp+798,(vlSelf->x_offset),32);
    bufp->chgIData(oldp+799,(vlSelf->y_offset),32);
    bufp->chgCData(oldp+800,(vlSelf->r),8);
    bufp->chgCData(oldp+801,(vlSelf->g),8);
    bufp->chgCData(oldp+802,(vlSelf->b),8);
    bufp->chgBit(oldp+803,(vlSelf->first));
    bufp->chgBit(oldp+804,(vlSelf->last_x));
    bufp->chgBit(oldp+805,(vlSelf->last_y));
    bufp->chgBit(oldp+806,(vlSelf->valid));
    bufp->chgBit(oldp+807,(vlSelf->top__DOT__reset_engine));
    bufp->chgBit(oldp+808,(vlSelf->top__DOT__fin_wire));
    bufp->chgIData(oldp+809,((VL_RTOIROUND_I_D(((1.67772160000000000e+07 
                                                 * 
                                                 (-640.0 
                                                  + 
                                                  VL_ISTOR_D_I(32, vlSelf->x_offset))) 
                                                / VL_ISTOR_D_I(32, 
                                                               ((IData)(0x64U) 
                                                                * vlSelf->zoom)))) 
                              + VL_MULS_III(32, VL_DIVS_III(32, (IData)(0x1000000U), 
                                                            VL_MULS_III(32, (IData)(0x64U), vlSelf->zoom)), 
                                            vlSelf->top__DOT__x
                                            [0U]))),32);
    bufp->chgIData(oldp+810,((VL_RTOIROUND_I_D(((1.67772160000000000e+07 
                                                 * 
                                                 (-360.0 
                                                  + 
                                                  VL_ISTOR_D_I(32, vlSelf->y_offset))) 
                                                / VL_ISTOR_D_I(32, 
                                                               ((IData)(0x64U) 
                                                                * vlSelf->zoom)))) 
                              + VL_MULS_III(32, VL_DIVS_III(32, (IData)(0x1000000U), 
                                                            VL_MULS_III(32, (IData)(0x64U), vlSelf->zoom)), 
                                            vlSelf->top__DOT__y
                                            [0U]))),32);
    bufp->chgIData(oldp+811,(VL_RTOIROUND_I_D(((1.67772160000000000e+07 
                                                * (-640.0 
                                                   + 
                                                   VL_ISTOR_D_I(32, vlSelf->x_offset))) 
                                               / VL_ISTOR_D_I(32, 
                                                              ((IData)(0x64U) 
                                                               * vlSelf->zoom))))),32);
    bufp->chgIData(oldp+812,(VL_RTOIROUND_I_D(((1.67772160000000000e+07 
                                                * (-360.0 
                                                   + 
                                                   VL_ISTOR_D_I(32, vlSelf->y_offset))) 
                                               / VL_ISTOR_D_I(32, 
                                                              ((IData)(0x64U) 
                                                               * vlSelf->zoom))))),32);
    bufp->chgIData(oldp+813,(VL_DIVS_III(32, (IData)(0x1000000U), 
                                         VL_MULS_III(32, (IData)(0x64U), vlSelf->zoom))),32);
    bufp->chgIData(oldp+814,((VL_RTOIROUND_I_D(((1.67772160000000000e+07 
                                                 * 
                                                 (-640.0 
                                                  + 
                                                  VL_ISTOR_D_I(32, vlSelf->x_offset))) 
                                                / VL_ISTOR_D_I(32, 
                                                               ((IData)(0x64U) 
                                                                * vlSelf->zoom)))) 
                              + VL_MULS_III(32, VL_DIVS_III(32, (IData)(0x1000000U), 
                                                            VL_MULS_III(32, (IData)(0x64U), vlSelf->zoom)), 
                                            vlSelf->top__DOT__x
                                            [0xaU]))),32);
    bufp->chgIData(oldp+815,((VL_RTOIROUND_I_D(((1.67772160000000000e+07 
                                                 * 
                                                 (-360.0 
                                                  + 
                                                  VL_ISTOR_D_I(32, vlSelf->y_offset))) 
                                                / VL_ISTOR_D_I(32, 
                                                               ((IData)(0x64U) 
                                                                * vlSelf->zoom)))) 
                              + VL_MULS_III(32, VL_DIVS_III(32, (IData)(0x1000000U), 
                                                            VL_MULS_III(32, (IData)(0x64U), vlSelf->zoom)), 
                                            vlSelf->top__DOT__y
                                            [0xaU]))),32);
    bufp->chgIData(oldp+816,((VL_RTOIROUND_I_D(((1.67772160000000000e+07 
                                                 * 
                                                 (-640.0 
                                                  + 
                                                  VL_ISTOR_D_I(32, vlSelf->x_offset))) 
                                                / VL_ISTOR_D_I(32, 
                                                               ((IData)(0x64U) 
                                                                * vlSelf->zoom)))) 
                              + VL_MULS_III(32, VL_DIVS_III(32, (IData)(0x1000000U), 
                                                            VL_MULS_III(32, (IData)(0x64U), vlSelf->zoom)), 
                                            vlSelf->top__DOT__x
                                            [1U]))),32);
    bufp->chgIData(oldp+817,((VL_RTOIROUND_I_D(((1.67772160000000000e+07 
                                                 * 
                                                 (-360.0 
                                                  + 
                                                  VL_ISTOR_D_I(32, vlSelf->y_offset))) 
                                                / VL_ISTOR_D_I(32, 
                                                               ((IData)(0x64U) 
                                                                * vlSelf->zoom)))) 
                              + VL_MULS_III(32, VL_DIVS_III(32, (IData)(0x1000000U), 
                                                            VL_MULS_III(32, (IData)(0x64U), vlSelf->zoom)), 
                                            vlSelf->top__DOT__y
                                            [1U]))),32);
    bufp->chgIData(oldp+818,((VL_RTOIROUND_I_D(((1.67772160000000000e+07 
                                                 * 
                                                 (-640.0 
                                                  + 
                                                  VL_ISTOR_D_I(32, vlSelf->x_offset))) 
                                                / VL_ISTOR_D_I(32, 
                                                               ((IData)(0x64U) 
                                                                * vlSelf->zoom)))) 
                              + VL_MULS_III(32, VL_DIVS_III(32, (IData)(0x1000000U), 
                                                            VL_MULS_III(32, (IData)(0x64U), vlSelf->zoom)), 
                                            vlSelf->top__DOT__x
                                            [2U]))),32);
    bufp->chgIData(oldp+819,((VL_RTOIROUND_I_D(((1.67772160000000000e+07 
                                                 * 
                                                 (-360.0 
                                                  + 
                                                  VL_ISTOR_D_I(32, vlSelf->y_offset))) 
                                                / VL_ISTOR_D_I(32, 
                                                               ((IData)(0x64U) 
                                                                * vlSelf->zoom)))) 
                              + VL_MULS_III(32, VL_DIVS_III(32, (IData)(0x1000000U), 
                                                            VL_MULS_III(32, (IData)(0x64U), vlSelf->zoom)), 
                                            vlSelf->top__DOT__y
                                            [2U]))),32);
    bufp->chgIData(oldp+820,((VL_RTOIROUND_I_D(((1.67772160000000000e+07 
                                                 * 
                                                 (-640.0 
                                                  + 
                                                  VL_ISTOR_D_I(32, vlSelf->x_offset))) 
                                                / VL_ISTOR_D_I(32, 
                                                               ((IData)(0x64U) 
                                                                * vlSelf->zoom)))) 
                              + VL_MULS_III(32, VL_DIVS_III(32, (IData)(0x1000000U), 
                                                            VL_MULS_III(32, (IData)(0x64U), vlSelf->zoom)), 
                                            vlSelf->top__DOT__x
                                            [3U]))),32);
    bufp->chgIData(oldp+821,((VL_RTOIROUND_I_D(((1.67772160000000000e+07 
                                                 * 
                                                 (-360.0 
                                                  + 
                                                  VL_ISTOR_D_I(32, vlSelf->y_offset))) 
                                                / VL_ISTOR_D_I(32, 
                                                               ((IData)(0x64U) 
                                                                * vlSelf->zoom)))) 
                              + VL_MULS_III(32, VL_DIVS_III(32, (IData)(0x1000000U), 
                                                            VL_MULS_III(32, (IData)(0x64U), vlSelf->zoom)), 
                                            vlSelf->top__DOT__y
                                            [3U]))),32);
    bufp->chgIData(oldp+822,((VL_RTOIROUND_I_D(((1.67772160000000000e+07 
                                                 * 
                                                 (-640.0 
                                                  + 
                                                  VL_ISTOR_D_I(32, vlSelf->x_offset))) 
                                                / VL_ISTOR_D_I(32, 
                                                               ((IData)(0x64U) 
                                                                * vlSelf->zoom)))) 
                              + VL_MULS_III(32, VL_DIVS_III(32, (IData)(0x1000000U), 
                                                            VL_MULS_III(32, (IData)(0x64U), vlSelf->zoom)), 
                                            vlSelf->top__DOT__x
                                            [4U]))),32);
    bufp->chgIData(oldp+823,((VL_RTOIROUND_I_D(((1.67772160000000000e+07 
                                                 * 
                                                 (-360.0 
                                                  + 
                                                  VL_ISTOR_D_I(32, vlSelf->y_offset))) 
                                                / VL_ISTOR_D_I(32, 
                                                               ((IData)(0x64U) 
                                                                * vlSelf->zoom)))) 
                              + VL_MULS_III(32, VL_DIVS_III(32, (IData)(0x1000000U), 
                                                            VL_MULS_III(32, (IData)(0x64U), vlSelf->zoom)), 
                                            vlSelf->top__DOT__y
                                            [4U]))),32);
    bufp->chgIData(oldp+824,((VL_RTOIROUND_I_D(((1.67772160000000000e+07 
                                                 * 
                                                 (-640.0 
                                                  + 
                                                  VL_ISTOR_D_I(32, vlSelf->x_offset))) 
                                                / VL_ISTOR_D_I(32, 
                                                               ((IData)(0x64U) 
                                                                * vlSelf->zoom)))) 
                              + VL_MULS_III(32, VL_DIVS_III(32, (IData)(0x1000000U), 
                                                            VL_MULS_III(32, (IData)(0x64U), vlSelf->zoom)), 
                                            vlSelf->top__DOT__x
                                            [5U]))),32);
    bufp->chgIData(oldp+825,((VL_RTOIROUND_I_D(((1.67772160000000000e+07 
                                                 * 
                                                 (-360.0 
                                                  + 
                                                  VL_ISTOR_D_I(32, vlSelf->y_offset))) 
                                                / VL_ISTOR_D_I(32, 
                                                               ((IData)(0x64U) 
                                                                * vlSelf->zoom)))) 
                              + VL_MULS_III(32, VL_DIVS_III(32, (IData)(0x1000000U), 
                                                            VL_MULS_III(32, (IData)(0x64U), vlSelf->zoom)), 
                                            vlSelf->top__DOT__y
                                            [5U]))),32);
    bufp->chgIData(oldp+826,((VL_RTOIROUND_I_D(((1.67772160000000000e+07 
                                                 * 
                                                 (-640.0 
                                                  + 
                                                  VL_ISTOR_D_I(32, vlSelf->x_offset))) 
                                                / VL_ISTOR_D_I(32, 
                                                               ((IData)(0x64U) 
                                                                * vlSelf->zoom)))) 
                              + VL_MULS_III(32, VL_DIVS_III(32, (IData)(0x1000000U), 
                                                            VL_MULS_III(32, (IData)(0x64U), vlSelf->zoom)), 
                                            vlSelf->top__DOT__x
                                            [6U]))),32);
    bufp->chgIData(oldp+827,((VL_RTOIROUND_I_D(((1.67772160000000000e+07 
                                                 * 
                                                 (-360.0 
                                                  + 
                                                  VL_ISTOR_D_I(32, vlSelf->y_offset))) 
                                                / VL_ISTOR_D_I(32, 
                                                               ((IData)(0x64U) 
                                                                * vlSelf->zoom)))) 
                              + VL_MULS_III(32, VL_DIVS_III(32, (IData)(0x1000000U), 
                                                            VL_MULS_III(32, (IData)(0x64U), vlSelf->zoom)), 
                                            vlSelf->top__DOT__y
                                            [6U]))),32);
    bufp->chgIData(oldp+828,((VL_RTOIROUND_I_D(((1.67772160000000000e+07 
                                                 * 
                                                 (-640.0 
                                                  + 
                                                  VL_ISTOR_D_I(32, vlSelf->x_offset))) 
                                                / VL_ISTOR_D_I(32, 
                                                               ((IData)(0x64U) 
                                                                * vlSelf->zoom)))) 
                              + VL_MULS_III(32, VL_DIVS_III(32, (IData)(0x1000000U), 
                                                            VL_MULS_III(32, (IData)(0x64U), vlSelf->zoom)), 
                                            vlSelf->top__DOT__x
                                            [7U]))),32);
    bufp->chgIData(oldp+829,((VL_RTOIROUND_I_D(((1.67772160000000000e+07 
                                                 * 
                                                 (-360.0 
                                                  + 
                                                  VL_ISTOR_D_I(32, vlSelf->y_offset))) 
                                                / VL_ISTOR_D_I(32, 
                                                               ((IData)(0x64U) 
                                                                * vlSelf->zoom)))) 
                              + VL_MULS_III(32, VL_DIVS_III(32, (IData)(0x1000000U), 
                                                            VL_MULS_III(32, (IData)(0x64U), vlSelf->zoom)), 
                                            vlSelf->top__DOT__y
                                            [7U]))),32);
    bufp->chgIData(oldp+830,((VL_RTOIROUND_I_D(((1.67772160000000000e+07 
                                                 * 
                                                 (-640.0 
                                                  + 
                                                  VL_ISTOR_D_I(32, vlSelf->x_offset))) 
                                                / VL_ISTOR_D_I(32, 
                                                               ((IData)(0x64U) 
                                                                * vlSelf->zoom)))) 
                              + VL_MULS_III(32, VL_DIVS_III(32, (IData)(0x1000000U), 
                                                            VL_MULS_III(32, (IData)(0x64U), vlSelf->zoom)), 
                                            vlSelf->top__DOT__x
                                            [8U]))),32);
    bufp->chgIData(oldp+831,((VL_RTOIROUND_I_D(((1.67772160000000000e+07 
                                                 * 
                                                 (-360.0 
                                                  + 
                                                  VL_ISTOR_D_I(32, vlSelf->y_offset))) 
                                                / VL_ISTOR_D_I(32, 
                                                               ((IData)(0x64U) 
                                                                * vlSelf->zoom)))) 
                              + VL_MULS_III(32, VL_DIVS_III(32, (IData)(0x1000000U), 
                                                            VL_MULS_III(32, (IData)(0x64U), vlSelf->zoom)), 
                                            vlSelf->top__DOT__y
                                            [8U]))),32);
    bufp->chgIData(oldp+832,((VL_RTOIROUND_I_D(((1.67772160000000000e+07 
                                                 * 
                                                 (-640.0 
                                                  + 
                                                  VL_ISTOR_D_I(32, vlSelf->x_offset))) 
                                                / VL_ISTOR_D_I(32, 
                                                               ((IData)(0x64U) 
                                                                * vlSelf->zoom)))) 
                              + VL_MULS_III(32, VL_DIVS_III(32, (IData)(0x1000000U), 
                                                            VL_MULS_III(32, (IData)(0x64U), vlSelf->zoom)), 
                                            vlSelf->top__DOT__x
                                            [9U]))),32);
    bufp->chgIData(oldp+833,((VL_RTOIROUND_I_D(((1.67772160000000000e+07 
                                                 * 
                                                 (-360.0 
                                                  + 
                                                  VL_ISTOR_D_I(32, vlSelf->y_offset))) 
                                                / VL_ISTOR_D_I(32, 
                                                               ((IData)(0x64U) 
                                                                * vlSelf->zoom)))) 
                              + VL_MULS_III(32, VL_DIVS_III(32, (IData)(0x1000000U), 
                                                            VL_MULS_III(32, (IData)(0x64U), vlSelf->zoom)), 
                                            vlSelf->top__DOT__y
                                            [9U]))),32);
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
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
