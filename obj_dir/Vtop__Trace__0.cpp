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
        bufp->chgIData(oldp+1,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+2,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+3,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+4,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+5,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__unnamedblk1__DOT__i),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+6,(vlSelf->top__DOT__colour_o_wire),24);
        bufp->chgIData(oldp+7,(vlSelf->top__DOT__xpixel_wire),32);
        bufp->chgIData(oldp+8,(vlSelf->top__DOT__ypixel_wire),32);
        bufp->chgIData(oldp+9,(vlSelf->top__DOT__colour_wire),24);
        bufp->chgBit(oldp+10,((0x3fU == (IData)(vlSelf->top__DOT__en_bus))));
        bufp->chgCData(oldp+11,(vlSelf->top__DOT__fin_bus),6);
        bufp->chgIData(oldp+12,(vlSelf->top__DOT__iterations_bus[0]),32);
        bufp->chgIData(oldp+13,(vlSelf->top__DOT__iterations_bus[1]),32);
        bufp->chgIData(oldp+14,(vlSelf->top__DOT__iterations_bus[2]),32);
        bufp->chgIData(oldp+15,(vlSelf->top__DOT__iterations_bus[3]),32);
        bufp->chgIData(oldp+16,(vlSelf->top__DOT__iterations_bus[4]),32);
        bufp->chgIData(oldp+17,(vlSelf->top__DOT__iterations_bus[5]),32);
        bufp->chgIData(oldp+18,(vlSelf->top__DOT__xpixel_bus[0]),32);
        bufp->chgIData(oldp+19,(vlSelf->top__DOT__xpixel_bus[1]),32);
        bufp->chgIData(oldp+20,(vlSelf->top__DOT__xpixel_bus[2]),32);
        bufp->chgIData(oldp+21,(vlSelf->top__DOT__xpixel_bus[3]),32);
        bufp->chgIData(oldp+22,(vlSelf->top__DOT__xpixel_bus[4]),32);
        bufp->chgIData(oldp+23,(vlSelf->top__DOT__xpixel_bus[5]),32);
        bufp->chgIData(oldp+24,(vlSelf->top__DOT__ypixel_bus[0]),32);
        bufp->chgIData(oldp+25,(vlSelf->top__DOT__ypixel_bus[1]),32);
        bufp->chgIData(oldp+26,(vlSelf->top__DOT__ypixel_bus[2]),32);
        bufp->chgIData(oldp+27,(vlSelf->top__DOT__ypixel_bus[3]),32);
        bufp->chgIData(oldp+28,(vlSelf->top__DOT__ypixel_bus[4]),32);
        bufp->chgIData(oldp+29,(vlSelf->top__DOT__ypixel_bus[5]),32);
        bufp->chgCData(oldp+30,(vlSelf->top__DOT__en_bus),6);
        bufp->chgIData(oldp+31,(vlSelf->top__DOT__colour_bus[0]),24);
        bufp->chgIData(oldp+32,(vlSelf->top__DOT__colour_bus[1]),24);
        bufp->chgIData(oldp+33,(vlSelf->top__DOT__colour_bus[2]),24);
        bufp->chgIData(oldp+34,(vlSelf->top__DOT__colour_bus[3]),24);
        bufp->chgIData(oldp+35,(vlSelf->top__DOT__colour_bus[4]),24);
        bufp->chgIData(oldp+36,(vlSelf->top__DOT__colour_bus[5]),24);
        bufp->chgIData(oldp+37,(vlSelf->top__DOT__combinator_block__DOT__xpixel),32);
        bufp->chgIData(oldp+38,(vlSelf->top__DOT__combinator_block__DOT__ypixel),32);
        bufp->chgBit(oldp+39,(vlSelf->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__engine__finished));
        bufp->chgIData(oldp+40,(vlSelf->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__engine__iterations),32);
        bufp->chgIData(oldp+41,(vlSelf->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__engine__xpixel),32);
        bufp->chgIData(oldp+42,(vlSelf->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__engine__ypixel),32);
        bufp->chgIData(oldp+43,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__x0_buff),32);
        bufp->chgIData(oldp+44,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__y0_buff),32);
        bufp->chgIData(oldp+45,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__state),32);
        bufp->chgIData(oldp+46,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__x),32);
        bufp->chgIData(oldp+47,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__y),32);
        bufp->chgQData(oldp+48,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__y_tmp),64);
        bufp->chgQData(oldp+50,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__x2),64);
        bufp->chgQData(oldp+52,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__y2),64);
        bufp->chgBit(oldp+54,((1U & (IData)(vlSelf->top__DOT__fin_bus))));
        bufp->chgIData(oldp+55,(vlSelf->top__DOT__colour_bus
                                [0U]),24);
        bufp->chgIData(oldp+56,(vlSelf->top__DOT__xpixel_bus
                                [0U]),32);
        bufp->chgIData(oldp+57,(vlSelf->top__DOT__ypixel_bus
                                [0U]),32);
        bufp->chgBit(oldp+58,(vlSelf->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__queue_block__full_queue));
        bufp->chgBit(oldp+59,(vlSelf->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__queue_block__en));
        bufp->chgIData(oldp+60,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[0]),24);
        bufp->chgIData(oldp+61,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[1]),24);
        bufp->chgIData(oldp+62,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[2]),24);
        bufp->chgIData(oldp+63,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[3]),24);
        bufp->chgIData(oldp+64,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[4]),24);
        bufp->chgIData(oldp+65,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[5]),24);
        bufp->chgIData(oldp+66,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[6]),24);
        bufp->chgIData(oldp+67,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[7]),24);
        bufp->chgIData(oldp+68,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[8]),24);
        bufp->chgIData(oldp+69,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[9]),24);
        bufp->chgIData(oldp+70,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[0]),32);
        bufp->chgIData(oldp+71,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[1]),32);
        bufp->chgIData(oldp+72,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[2]),32);
        bufp->chgIData(oldp+73,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[3]),32);
        bufp->chgIData(oldp+74,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[4]),32);
        bufp->chgIData(oldp+75,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[5]),32);
        bufp->chgIData(oldp+76,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[6]),32);
        bufp->chgIData(oldp+77,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[7]),32);
        bufp->chgIData(oldp+78,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[8]),32);
        bufp->chgIData(oldp+79,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[9]),32);
        bufp->chgIData(oldp+80,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[0]),32);
        bufp->chgIData(oldp+81,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[1]),32);
        bufp->chgIData(oldp+82,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[2]),32);
        bufp->chgIData(oldp+83,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[3]),32);
        bufp->chgIData(oldp+84,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[4]),32);
        bufp->chgIData(oldp+85,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[5]),32);
        bufp->chgIData(oldp+86,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[6]),32);
        bufp->chgIData(oldp+87,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[7]),32);
        bufp->chgIData(oldp+88,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[8]),32);
        bufp->chgIData(oldp+89,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[9]),32);
        bufp->chgCData(oldp+90,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__counter),4);
        bufp->chgIData(oldp+91,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__prev_xpixel),32);
        bufp->chgBit(oldp+92,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__fin_wire));
        bufp->chgIData(oldp+93,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_wire),24);
        bufp->chgIData(oldp+94,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__unnamedblk2__DOT__i),32);
        bufp->chgIData(oldp+95,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__unnamedblk3__DOT__i),32);
        bufp->chgBit(oldp+96,(vlSelf->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__engine__finished));
        bufp->chgIData(oldp+97,(vlSelf->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__engine__iterations),32);
        bufp->chgIData(oldp+98,(vlSelf->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__engine__xpixel),32);
        bufp->chgIData(oldp+99,(vlSelf->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__engine__ypixel),32);
        bufp->chgIData(oldp+100,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__x0_buff),32);
        bufp->chgIData(oldp+101,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__y0_buff),32);
        bufp->chgIData(oldp+102,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__state),32);
        bufp->chgIData(oldp+103,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__x),32);
        bufp->chgIData(oldp+104,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__y),32);
        bufp->chgQData(oldp+105,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__y_tmp),64);
        bufp->chgQData(oldp+107,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__x2),64);
        bufp->chgQData(oldp+109,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__y2),64);
        bufp->chgBit(oldp+111,((1U & ((IData)(vlSelf->top__DOT__fin_bus) 
                                      >> 1U))));
        bufp->chgIData(oldp+112,(vlSelf->top__DOT__colour_bus
                                 [1U]),24);
        bufp->chgIData(oldp+113,(vlSelf->top__DOT__xpixel_bus
                                 [1U]),32);
        bufp->chgIData(oldp+114,(vlSelf->top__DOT__ypixel_bus
                                 [1U]),32);
        bufp->chgBit(oldp+115,(vlSelf->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__queue_block__full_queue));
        bufp->chgBit(oldp+116,(vlSelf->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__queue_block__en));
        bufp->chgIData(oldp+117,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[0]),24);
        bufp->chgIData(oldp+118,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[1]),24);
        bufp->chgIData(oldp+119,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[2]),24);
        bufp->chgIData(oldp+120,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[3]),24);
        bufp->chgIData(oldp+121,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[4]),24);
        bufp->chgIData(oldp+122,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[5]),24);
        bufp->chgIData(oldp+123,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[6]),24);
        bufp->chgIData(oldp+124,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[7]),24);
        bufp->chgIData(oldp+125,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[8]),24);
        bufp->chgIData(oldp+126,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[9]),24);
        bufp->chgIData(oldp+127,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[0]),32);
        bufp->chgIData(oldp+128,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[1]),32);
        bufp->chgIData(oldp+129,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[2]),32);
        bufp->chgIData(oldp+130,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[3]),32);
        bufp->chgIData(oldp+131,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[4]),32);
        bufp->chgIData(oldp+132,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[5]),32);
        bufp->chgIData(oldp+133,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[6]),32);
        bufp->chgIData(oldp+134,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[7]),32);
        bufp->chgIData(oldp+135,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[8]),32);
        bufp->chgIData(oldp+136,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[9]),32);
        bufp->chgIData(oldp+137,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[0]),32);
        bufp->chgIData(oldp+138,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[1]),32);
        bufp->chgIData(oldp+139,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[2]),32);
        bufp->chgIData(oldp+140,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[3]),32);
        bufp->chgIData(oldp+141,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[4]),32);
        bufp->chgIData(oldp+142,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[5]),32);
        bufp->chgIData(oldp+143,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[6]),32);
        bufp->chgIData(oldp+144,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[7]),32);
        bufp->chgIData(oldp+145,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[8]),32);
        bufp->chgIData(oldp+146,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[9]),32);
        bufp->chgCData(oldp+147,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__counter),4);
        bufp->chgIData(oldp+148,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__prev_xpixel),32);
        bufp->chgBit(oldp+149,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__fin_wire));
        bufp->chgIData(oldp+150,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_wire),24);
        bufp->chgIData(oldp+151,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__unnamedblk2__DOT__i),32);
        bufp->chgIData(oldp+152,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__unnamedblk3__DOT__i),32);
        bufp->chgBit(oldp+153,(vlSelf->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__engine__finished));
        bufp->chgIData(oldp+154,(vlSelf->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__engine__iterations),32);
        bufp->chgIData(oldp+155,(vlSelf->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__engine__xpixel),32);
        bufp->chgIData(oldp+156,(vlSelf->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__engine__ypixel),32);
        bufp->chgIData(oldp+157,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__x0_buff),32);
        bufp->chgIData(oldp+158,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__y0_buff),32);
        bufp->chgIData(oldp+159,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__state),32);
        bufp->chgIData(oldp+160,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__x),32);
        bufp->chgIData(oldp+161,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__y),32);
        bufp->chgQData(oldp+162,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__y_tmp),64);
        bufp->chgQData(oldp+164,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__x2),64);
        bufp->chgQData(oldp+166,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__y2),64);
        bufp->chgBit(oldp+168,((1U & ((IData)(vlSelf->top__DOT__fin_bus) 
                                      >> 2U))));
        bufp->chgIData(oldp+169,(vlSelf->top__DOT__colour_bus
                                 [2U]),24);
        bufp->chgIData(oldp+170,(vlSelf->top__DOT__xpixel_bus
                                 [2U]),32);
        bufp->chgIData(oldp+171,(vlSelf->top__DOT__ypixel_bus
                                 [2U]),32);
        bufp->chgBit(oldp+172,(vlSelf->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__queue_block__full_queue));
        bufp->chgBit(oldp+173,(vlSelf->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__queue_block__en));
        bufp->chgIData(oldp+174,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[0]),24);
        bufp->chgIData(oldp+175,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[1]),24);
        bufp->chgIData(oldp+176,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[2]),24);
        bufp->chgIData(oldp+177,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[3]),24);
        bufp->chgIData(oldp+178,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[4]),24);
        bufp->chgIData(oldp+179,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[5]),24);
        bufp->chgIData(oldp+180,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[6]),24);
        bufp->chgIData(oldp+181,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[7]),24);
        bufp->chgIData(oldp+182,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[8]),24);
        bufp->chgIData(oldp+183,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[9]),24);
        bufp->chgIData(oldp+184,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[0]),32);
        bufp->chgIData(oldp+185,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[1]),32);
        bufp->chgIData(oldp+186,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[2]),32);
        bufp->chgIData(oldp+187,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[3]),32);
        bufp->chgIData(oldp+188,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[4]),32);
        bufp->chgIData(oldp+189,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[5]),32);
        bufp->chgIData(oldp+190,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[6]),32);
        bufp->chgIData(oldp+191,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[7]),32);
        bufp->chgIData(oldp+192,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[8]),32);
        bufp->chgIData(oldp+193,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[9]),32);
        bufp->chgIData(oldp+194,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[0]),32);
        bufp->chgIData(oldp+195,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[1]),32);
        bufp->chgIData(oldp+196,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[2]),32);
        bufp->chgIData(oldp+197,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[3]),32);
        bufp->chgIData(oldp+198,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[4]),32);
        bufp->chgIData(oldp+199,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[5]),32);
        bufp->chgIData(oldp+200,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[6]),32);
        bufp->chgIData(oldp+201,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[7]),32);
        bufp->chgIData(oldp+202,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[8]),32);
        bufp->chgIData(oldp+203,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[9]),32);
        bufp->chgCData(oldp+204,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__counter),4);
        bufp->chgIData(oldp+205,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__prev_xpixel),32);
        bufp->chgBit(oldp+206,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__fin_wire));
        bufp->chgIData(oldp+207,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_wire),24);
        bufp->chgIData(oldp+208,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__unnamedblk2__DOT__i),32);
        bufp->chgIData(oldp+209,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__unnamedblk3__DOT__i),32);
        bufp->chgBit(oldp+210,(vlSelf->top__DOT____Vcellout__genblk1__BRA__3__KET____DOT__engine__finished));
        bufp->chgIData(oldp+211,(vlSelf->top__DOT____Vcellout__genblk1__BRA__3__KET____DOT__engine__iterations),32);
        bufp->chgIData(oldp+212,(vlSelf->top__DOT____Vcellout__genblk1__BRA__3__KET____DOT__engine__xpixel),32);
        bufp->chgIData(oldp+213,(vlSelf->top__DOT____Vcellout__genblk1__BRA__3__KET____DOT__engine__ypixel),32);
        bufp->chgIData(oldp+214,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__engine__DOT__x0_buff),32);
        bufp->chgIData(oldp+215,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__engine__DOT__y0_buff),32);
        bufp->chgIData(oldp+216,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__engine__DOT__state),32);
        bufp->chgIData(oldp+217,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__engine__DOT__x),32);
        bufp->chgIData(oldp+218,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__engine__DOT__y),32);
        bufp->chgQData(oldp+219,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__engine__DOT__y_tmp),64);
        bufp->chgQData(oldp+221,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__engine__DOT__x2),64);
        bufp->chgQData(oldp+223,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__engine__DOT__y2),64);
        bufp->chgBit(oldp+225,((1U & ((IData)(vlSelf->top__DOT__fin_bus) 
                                      >> 3U))));
        bufp->chgIData(oldp+226,(vlSelf->top__DOT__colour_bus
                                 [3U]),24);
        bufp->chgIData(oldp+227,(vlSelf->top__DOT__xpixel_bus
                                 [3U]),32);
        bufp->chgIData(oldp+228,(vlSelf->top__DOT__ypixel_bus
                                 [3U]),32);
        bufp->chgBit(oldp+229,(vlSelf->top__DOT____Vcellout__genblk1__BRA__3__KET____DOT__queue_block__full_queue));
        bufp->chgBit(oldp+230,(vlSelf->top__DOT____Vcellout__genblk1__BRA__3__KET____DOT__queue_block__en));
        bufp->chgIData(oldp+231,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue[0]),24);
        bufp->chgIData(oldp+232,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue[1]),24);
        bufp->chgIData(oldp+233,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue[2]),24);
        bufp->chgIData(oldp+234,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue[3]),24);
        bufp->chgIData(oldp+235,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue[4]),24);
        bufp->chgIData(oldp+236,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue[5]),24);
        bufp->chgIData(oldp+237,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue[6]),24);
        bufp->chgIData(oldp+238,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue[7]),24);
        bufp->chgIData(oldp+239,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue[8]),24);
        bufp->chgIData(oldp+240,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue[9]),24);
        bufp->chgIData(oldp+241,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue[0]),32);
        bufp->chgIData(oldp+242,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue[1]),32);
        bufp->chgIData(oldp+243,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue[2]),32);
        bufp->chgIData(oldp+244,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue[3]),32);
        bufp->chgIData(oldp+245,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue[4]),32);
        bufp->chgIData(oldp+246,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue[5]),32);
        bufp->chgIData(oldp+247,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue[6]),32);
        bufp->chgIData(oldp+248,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue[7]),32);
        bufp->chgIData(oldp+249,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue[8]),32);
        bufp->chgIData(oldp+250,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue[9]),32);
        bufp->chgIData(oldp+251,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue[0]),32);
        bufp->chgIData(oldp+252,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue[1]),32);
        bufp->chgIData(oldp+253,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue[2]),32);
        bufp->chgIData(oldp+254,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue[3]),32);
        bufp->chgIData(oldp+255,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue[4]),32);
        bufp->chgIData(oldp+256,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue[5]),32);
        bufp->chgIData(oldp+257,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue[6]),32);
        bufp->chgIData(oldp+258,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue[7]),32);
        bufp->chgIData(oldp+259,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue[8]),32);
        bufp->chgIData(oldp+260,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue[9]),32);
        bufp->chgCData(oldp+261,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__counter),4);
        bufp->chgIData(oldp+262,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__prev_xpixel),32);
        bufp->chgBit(oldp+263,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__fin_wire));
        bufp->chgIData(oldp+264,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_wire),24);
        bufp->chgIData(oldp+265,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__unnamedblk2__DOT__i),32);
        bufp->chgIData(oldp+266,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__unnamedblk3__DOT__i),32);
        bufp->chgBit(oldp+267,(vlSelf->top__DOT____Vcellout__genblk1__BRA__4__KET____DOT__engine__finished));
        bufp->chgIData(oldp+268,(vlSelf->top__DOT____Vcellout__genblk1__BRA__4__KET____DOT__engine__iterations),32);
        bufp->chgIData(oldp+269,(vlSelf->top__DOT____Vcellout__genblk1__BRA__4__KET____DOT__engine__xpixel),32);
        bufp->chgIData(oldp+270,(vlSelf->top__DOT____Vcellout__genblk1__BRA__4__KET____DOT__engine__ypixel),32);
        bufp->chgIData(oldp+271,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__engine__DOT__x0_buff),32);
        bufp->chgIData(oldp+272,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__engine__DOT__y0_buff),32);
        bufp->chgIData(oldp+273,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__engine__DOT__state),32);
        bufp->chgIData(oldp+274,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__engine__DOT__x),32);
        bufp->chgIData(oldp+275,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__engine__DOT__y),32);
        bufp->chgQData(oldp+276,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__engine__DOT__y_tmp),64);
        bufp->chgQData(oldp+278,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__engine__DOT__x2),64);
        bufp->chgQData(oldp+280,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__engine__DOT__y2),64);
        bufp->chgBit(oldp+282,((1U & ((IData)(vlSelf->top__DOT__fin_bus) 
                                      >> 4U))));
        bufp->chgIData(oldp+283,(vlSelf->top__DOT__colour_bus
                                 [4U]),24);
        bufp->chgIData(oldp+284,(vlSelf->top__DOT__xpixel_bus
                                 [4U]),32);
        bufp->chgIData(oldp+285,(vlSelf->top__DOT__ypixel_bus
                                 [4U]),32);
        bufp->chgBit(oldp+286,(vlSelf->top__DOT____Vcellout__genblk1__BRA__4__KET____DOT__queue_block__full_queue));
        bufp->chgBit(oldp+287,(vlSelf->top__DOT____Vcellout__genblk1__BRA__4__KET____DOT__queue_block__en));
        bufp->chgIData(oldp+288,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue[0]),24);
        bufp->chgIData(oldp+289,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue[1]),24);
        bufp->chgIData(oldp+290,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue[2]),24);
        bufp->chgIData(oldp+291,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue[3]),24);
        bufp->chgIData(oldp+292,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue[4]),24);
        bufp->chgIData(oldp+293,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue[5]),24);
        bufp->chgIData(oldp+294,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue[6]),24);
        bufp->chgIData(oldp+295,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue[7]),24);
        bufp->chgIData(oldp+296,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue[8]),24);
        bufp->chgIData(oldp+297,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue[9]),24);
        bufp->chgIData(oldp+298,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue[0]),32);
        bufp->chgIData(oldp+299,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue[1]),32);
        bufp->chgIData(oldp+300,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue[2]),32);
        bufp->chgIData(oldp+301,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue[3]),32);
        bufp->chgIData(oldp+302,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue[4]),32);
        bufp->chgIData(oldp+303,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue[5]),32);
        bufp->chgIData(oldp+304,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue[6]),32);
        bufp->chgIData(oldp+305,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue[7]),32);
        bufp->chgIData(oldp+306,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue[8]),32);
        bufp->chgIData(oldp+307,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue[9]),32);
        bufp->chgIData(oldp+308,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue[0]),32);
        bufp->chgIData(oldp+309,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue[1]),32);
        bufp->chgIData(oldp+310,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue[2]),32);
        bufp->chgIData(oldp+311,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue[3]),32);
        bufp->chgIData(oldp+312,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue[4]),32);
        bufp->chgIData(oldp+313,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue[5]),32);
        bufp->chgIData(oldp+314,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue[6]),32);
        bufp->chgIData(oldp+315,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue[7]),32);
        bufp->chgIData(oldp+316,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue[8]),32);
        bufp->chgIData(oldp+317,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue[9]),32);
        bufp->chgCData(oldp+318,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__counter),4);
        bufp->chgIData(oldp+319,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__prev_xpixel),32);
        bufp->chgBit(oldp+320,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__fin_wire));
        bufp->chgIData(oldp+321,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_wire),24);
        bufp->chgIData(oldp+322,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__unnamedblk2__DOT__i),32);
        bufp->chgIData(oldp+323,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__unnamedblk3__DOT__i),32);
        bufp->chgBit(oldp+324,(vlSelf->top__DOT____Vcellout__genblk1__BRA__5__KET____DOT__engine__finished));
        bufp->chgIData(oldp+325,(vlSelf->top__DOT____Vcellout__genblk1__BRA__5__KET____DOT__engine__iterations),32);
        bufp->chgIData(oldp+326,(vlSelf->top__DOT____Vcellout__genblk1__BRA__5__KET____DOT__engine__xpixel),32);
        bufp->chgIData(oldp+327,(vlSelf->top__DOT____Vcellout__genblk1__BRA__5__KET____DOT__engine__ypixel),32);
        bufp->chgIData(oldp+328,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__engine__DOT__x0_buff),32);
        bufp->chgIData(oldp+329,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__engine__DOT__y0_buff),32);
        bufp->chgIData(oldp+330,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__engine__DOT__state),32);
        bufp->chgIData(oldp+331,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__engine__DOT__x),32);
        bufp->chgIData(oldp+332,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__engine__DOT__y),32);
        bufp->chgQData(oldp+333,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__engine__DOT__y_tmp),64);
        bufp->chgQData(oldp+335,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__engine__DOT__x2),64);
        bufp->chgQData(oldp+337,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__engine__DOT__y2),64);
        bufp->chgBit(oldp+339,((1U & ((IData)(vlSelf->top__DOT__fin_bus) 
                                      >> 5U))));
        bufp->chgIData(oldp+340,(vlSelf->top__DOT__colour_bus
                                 [5U]),24);
        bufp->chgIData(oldp+341,(vlSelf->top__DOT__xpixel_bus
                                 [5U]),32);
        bufp->chgIData(oldp+342,(vlSelf->top__DOT__ypixel_bus
                                 [5U]),32);
        bufp->chgBit(oldp+343,(vlSelf->top__DOT____Vcellout__genblk1__BRA__5__KET____DOT__queue_block__full_queue));
        bufp->chgBit(oldp+344,(vlSelf->top__DOT____Vcellout__genblk1__BRA__5__KET____DOT__queue_block__en));
        bufp->chgIData(oldp+345,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue[0]),24);
        bufp->chgIData(oldp+346,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue[1]),24);
        bufp->chgIData(oldp+347,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue[2]),24);
        bufp->chgIData(oldp+348,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue[3]),24);
        bufp->chgIData(oldp+349,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue[4]),24);
        bufp->chgIData(oldp+350,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue[5]),24);
        bufp->chgIData(oldp+351,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue[6]),24);
        bufp->chgIData(oldp+352,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue[7]),24);
        bufp->chgIData(oldp+353,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue[8]),24);
        bufp->chgIData(oldp+354,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue[9]),24);
        bufp->chgIData(oldp+355,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue[0]),32);
        bufp->chgIData(oldp+356,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue[1]),32);
        bufp->chgIData(oldp+357,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue[2]),32);
        bufp->chgIData(oldp+358,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue[3]),32);
        bufp->chgIData(oldp+359,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue[4]),32);
        bufp->chgIData(oldp+360,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue[5]),32);
        bufp->chgIData(oldp+361,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue[6]),32);
        bufp->chgIData(oldp+362,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue[7]),32);
        bufp->chgIData(oldp+363,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue[8]),32);
        bufp->chgIData(oldp+364,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue[9]),32);
        bufp->chgIData(oldp+365,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue[0]),32);
        bufp->chgIData(oldp+366,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue[1]),32);
        bufp->chgIData(oldp+367,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue[2]),32);
        bufp->chgIData(oldp+368,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue[3]),32);
        bufp->chgIData(oldp+369,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue[4]),32);
        bufp->chgIData(oldp+370,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue[5]),32);
        bufp->chgIData(oldp+371,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue[6]),32);
        bufp->chgIData(oldp+372,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue[7]),32);
        bufp->chgIData(oldp+373,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue[8]),32);
        bufp->chgIData(oldp+374,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue[9]),32);
        bufp->chgCData(oldp+375,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__counter),4);
        bufp->chgIData(oldp+376,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__prev_xpixel),32);
        bufp->chgBit(oldp+377,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__fin_wire));
        bufp->chgIData(oldp+378,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_wire),24);
        bufp->chgIData(oldp+379,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__unnamedblk2__DOT__i),32);
        bufp->chgIData(oldp+380,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__unnamedblk3__DOT__i),32);
        bufp->chgIData(oldp+381,(vlSelf->top__DOT____Vcellinp__lut_rom__iterations[0]),32);
        bufp->chgIData(oldp+382,(vlSelf->top__DOT____Vcellinp__lut_rom__iterations[1]),32);
        bufp->chgIData(oldp+383,(vlSelf->top__DOT____Vcellinp__lut_rom__iterations[2]),32);
        bufp->chgIData(oldp+384,(vlSelf->top__DOT____Vcellinp__lut_rom__iterations[3]),32);
        bufp->chgIData(oldp+385,(vlSelf->top__DOT____Vcellinp__lut_rom__iterations[4]),32);
        bufp->chgIData(oldp+386,(vlSelf->top__DOT____Vcellinp__lut_rom__iterations[5]),32);
        bufp->chgIData(oldp+387,(vlSelf->top__DOT____Vcellout__lut_rom__rgb_val[0]),24);
        bufp->chgIData(oldp+388,(vlSelf->top__DOT____Vcellout__lut_rom__rgb_val[1]),24);
        bufp->chgIData(oldp+389,(vlSelf->top__DOT____Vcellout__lut_rom__rgb_val[2]),24);
        bufp->chgIData(oldp+390,(vlSelf->top__DOT____Vcellout__lut_rom__rgb_val[3]),24);
        bufp->chgIData(oldp+391,(vlSelf->top__DOT____Vcellout__lut_rom__rgb_val[4]),24);
        bufp->chgIData(oldp+392,(vlSelf->top__DOT____Vcellout__lut_rom__rgb_val[5]),24);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+393,(vlSelf->top__DOT__x[0]),32);
        bufp->chgIData(oldp+394,(vlSelf->top__DOT__x[1]),32);
        bufp->chgIData(oldp+395,(vlSelf->top__DOT__x[2]),32);
        bufp->chgIData(oldp+396,(vlSelf->top__DOT__x[3]),32);
        bufp->chgIData(oldp+397,(vlSelf->top__DOT__x[4]),32);
        bufp->chgIData(oldp+398,(vlSelf->top__DOT__x[5]),32);
        bufp->chgIData(oldp+399,(vlSelf->top__DOT__y[0]),32);
        bufp->chgIData(oldp+400,(vlSelf->top__DOT__y[1]),32);
        bufp->chgIData(oldp+401,(vlSelf->top__DOT__y[2]),32);
        bufp->chgIData(oldp+402,(vlSelf->top__DOT__y[3]),32);
        bufp->chgIData(oldp+403,(vlSelf->top__DOT__y[4]),32);
        bufp->chgIData(oldp+404,(vlSelf->top__DOT__y[5]),32);
        bufp->chgIData(oldp+405,(vlSelf->top__DOT____Vcellout__distributor__x[0]),32);
        bufp->chgIData(oldp+406,(vlSelf->top__DOT____Vcellout__distributor__x[1]),32);
        bufp->chgIData(oldp+407,(vlSelf->top__DOT____Vcellout__distributor__x[2]),32);
        bufp->chgIData(oldp+408,(vlSelf->top__DOT____Vcellout__distributor__x[3]),32);
        bufp->chgIData(oldp+409,(vlSelf->top__DOT____Vcellout__distributor__x[4]),32);
        bufp->chgIData(oldp+410,(vlSelf->top__DOT____Vcellout__distributor__x[5]),32);
        bufp->chgIData(oldp+411,(vlSelf->top__DOT____Vcellout__distributor__y[0]),32);
        bufp->chgIData(oldp+412,(vlSelf->top__DOT____Vcellout__distributor__y[1]),32);
        bufp->chgIData(oldp+413,(vlSelf->top__DOT____Vcellout__distributor__y[2]),32);
        bufp->chgIData(oldp+414,(vlSelf->top__DOT____Vcellout__distributor__y[3]),32);
        bufp->chgIData(oldp+415,(vlSelf->top__DOT____Vcellout__distributor__y[4]),32);
        bufp->chgIData(oldp+416,(vlSelf->top__DOT____Vcellout__distributor__y[5]),32);
        bufp->chgIData(oldp+417,(vlSelf->top__DOT__distributor__DOT__x0),32);
        bufp->chgIData(oldp+418,(vlSelf->top__DOT__distributor__DOT__y0),32);
        bufp->chgIData(oldp+419,(vlSelf->top__DOT__x
                                 [0U]),32);
        bufp->chgIData(oldp+420,(vlSelf->top__DOT__y
                                 [0U]),32);
        bufp->chgIData(oldp+421,(vlSelf->top__DOT__x
                                 [1U]),32);
        bufp->chgIData(oldp+422,(vlSelf->top__DOT__y
                                 [1U]),32);
        bufp->chgIData(oldp+423,(vlSelf->top__DOT__x
                                 [2U]),32);
        bufp->chgIData(oldp+424,(vlSelf->top__DOT__y
                                 [2U]),32);
        bufp->chgIData(oldp+425,(vlSelf->top__DOT__x
                                 [3U]),32);
        bufp->chgIData(oldp+426,(vlSelf->top__DOT__y
                                 [3U]),32);
        bufp->chgIData(oldp+427,(vlSelf->top__DOT__x
                                 [4U]),32);
        bufp->chgIData(oldp+428,(vlSelf->top__DOT__y
                                 [4U]),32);
        bufp->chgIData(oldp+429,(vlSelf->top__DOT__x
                                 [5U]),32);
        bufp->chgIData(oldp+430,(vlSelf->top__DOT__y
                                 [5U]),32);
    }
    bufp->chgBit(oldp+431,(vlSelf->clk));
    bufp->chgBit(oldp+432,(vlSelf->reset));
    bufp->chgBit(oldp+433,(vlSelf->ready));
    bufp->chgIData(oldp+434,(vlSelf->iterations_max),32);
    bufp->chgIData(oldp+435,(vlSelf->zoom),32);
    bufp->chgIData(oldp+436,(vlSelf->x_offset),32);
    bufp->chgIData(oldp+437,(vlSelf->y_offset),32);
    bufp->chgCData(oldp+438,(vlSelf->r),8);
    bufp->chgCData(oldp+439,(vlSelf->g),8);
    bufp->chgCData(oldp+440,(vlSelf->b),8);
    bufp->chgBit(oldp+441,(vlSelf->first));
    bufp->chgBit(oldp+442,(vlSelf->last_x));
    bufp->chgBit(oldp+443,(vlSelf->last_y));
    bufp->chgBit(oldp+444,(vlSelf->valid));
    bufp->chgBit(oldp+445,(vlSelf->full_queue[0]));
    bufp->chgBit(oldp+446,(vlSelf->full_queue[1]));
    bufp->chgBit(oldp+447,(vlSelf->full_queue[2]));
    bufp->chgBit(oldp+448,(vlSelf->full_queue[3]));
    bufp->chgBit(oldp+449,(vlSelf->full_queue[4]));
    bufp->chgBit(oldp+450,(vlSelf->full_queue[5]));
    bufp->chgBit(oldp+451,(vlSelf->top__DOT__reset_engine));
    bufp->chgBit(oldp+452,(vlSelf->top__DOT__fin_wire));
    bufp->chgIData(oldp+453,((VL_RTOIROUND_I_D(((1.67772160000000000e+07 
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
    bufp->chgIData(oldp+454,((VL_RTOIROUND_I_D(((1.67772160000000000e+07 
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
    bufp->chgIData(oldp+455,(VL_RTOIROUND_I_D(((1.67772160000000000e+07 
                                                * (-640.0 
                                                   + 
                                                   VL_ISTOR_D_I(32, vlSelf->x_offset))) 
                                               / VL_ISTOR_D_I(32, 
                                                              ((IData)(0x64U) 
                                                               * vlSelf->zoom))))),32);
    bufp->chgIData(oldp+456,(VL_RTOIROUND_I_D(((1.67772160000000000e+07 
                                                * (-360.0 
                                                   + 
                                                   VL_ISTOR_D_I(32, vlSelf->y_offset))) 
                                               / VL_ISTOR_D_I(32, 
                                                              ((IData)(0x64U) 
                                                               * vlSelf->zoom))))),32);
    bufp->chgIData(oldp+457,(VL_DIVS_III(32, (IData)(0x1000000U), 
                                         VL_MULS_III(32, (IData)(0x64U), vlSelf->zoom))),32);
    bufp->chgIData(oldp+458,((VL_RTOIROUND_I_D(((1.67772160000000000e+07 
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
    bufp->chgIData(oldp+459,((VL_RTOIROUND_I_D(((1.67772160000000000e+07 
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
    bufp->chgIData(oldp+460,((VL_RTOIROUND_I_D(((1.67772160000000000e+07 
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
    bufp->chgIData(oldp+461,((VL_RTOIROUND_I_D(((1.67772160000000000e+07 
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
    bufp->chgIData(oldp+462,((VL_RTOIROUND_I_D(((1.67772160000000000e+07 
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
    bufp->chgIData(oldp+463,((VL_RTOIROUND_I_D(((1.67772160000000000e+07 
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
    bufp->chgIData(oldp+464,((VL_RTOIROUND_I_D(((1.67772160000000000e+07 
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
    bufp->chgIData(oldp+465,((VL_RTOIROUND_I_D(((1.67772160000000000e+07 
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
    bufp->chgIData(oldp+466,((VL_RTOIROUND_I_D(((1.67772160000000000e+07 
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
    bufp->chgIData(oldp+467,((VL_RTOIROUND_I_D(((1.67772160000000000e+07 
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
