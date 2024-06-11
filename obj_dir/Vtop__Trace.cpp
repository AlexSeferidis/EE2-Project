// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Vtop__Syms* __restrict vlSymsp = static_cast<Vtop__Syms*>(userp);
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vtop::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Vtop__Syms* __restrict vlSymsp = static_cast<Vtop__Syms*>(userp);
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgIData(oldp+0,(vlTOPp->top__DOT__colour_o_wire),24);
            tracep->chgIData(oldp+1,(vlTOPp->top__DOT__xpixel_wire),32);
            tracep->chgIData(oldp+2,(vlTOPp->top__DOT__ypixel_wire),32);
            tracep->chgIData(oldp+3,(vlTOPp->top__DOT__colour_wire),24);
            tracep->chgBit(oldp+4,(vlTOPp->top__DOT__en_wire));
            tracep->chgCData(oldp+5,(vlTOPp->top__DOT__fin_bus),3);
            tracep->chgIData(oldp+6,(vlTOPp->top__DOT__x[0]),32);
            tracep->chgIData(oldp+7,(vlTOPp->top__DOT__x[1]),32);
            tracep->chgIData(oldp+8,(vlTOPp->top__DOT__x[2]),32);
            tracep->chgIData(oldp+9,(vlTOPp->top__DOT__y[0]),32);
            tracep->chgIData(oldp+10,(vlTOPp->top__DOT__y[1]),32);
            tracep->chgIData(oldp+11,(vlTOPp->top__DOT__y[2]),32);
            tracep->chgIData(oldp+12,(vlTOPp->top__DOT__iterations_bus[0]),32);
            tracep->chgIData(oldp+13,(vlTOPp->top__DOT__iterations_bus[1]),32);
            tracep->chgIData(oldp+14,(vlTOPp->top__DOT__iterations_bus[2]),32);
            tracep->chgIData(oldp+15,(vlTOPp->top__DOT__xpixel_bus[0]),32);
            tracep->chgIData(oldp+16,(vlTOPp->top__DOT__xpixel_bus[1]),32);
            tracep->chgIData(oldp+17,(vlTOPp->top__DOT__xpixel_bus[2]),32);
            tracep->chgIData(oldp+18,(vlTOPp->top__DOT__ypixel_bus[0]),32);
            tracep->chgIData(oldp+19,(vlTOPp->top__DOT__ypixel_bus[1]),32);
            tracep->chgIData(oldp+20,(vlTOPp->top__DOT__ypixel_bus[2]),32);
            tracep->chgIData(oldp+21,(vlTOPp->top__DOT__colour_bus[0]),24);
            tracep->chgIData(oldp+22,(vlTOPp->top__DOT__colour_bus[1]),24);
            tracep->chgIData(oldp+23,(vlTOPp->top__DOT__colour_bus[2]),24);
            tracep->chgIData(oldp+24,(vlTOPp->top__DOT__distributor__DOT__x0),32);
            tracep->chgIData(oldp+25,(VL_MODDIV_III(32, 
                                                    ((IData)(1U) 
                                                     + vlTOPp->top__DOT__distributor__DOT__x0), (IData)(0x280U))),32);
            tracep->chgIData(oldp+26,(VL_MODDIV_III(32, 
                                                    ((IData)(2U) 
                                                     + vlTOPp->top__DOT__distributor__DOT__x0), (IData)(0x280U))),32);
            tracep->chgIData(oldp+27,(vlTOPp->top__DOT__distributor__DOT__y0),32);
            tracep->chgIData(oldp+28,(VL_MODDIV_III(32, 
                                                    (vlTOPp->top__DOT__distributor__DOT__y0 
                                                     + 
                                                     VL_DIV_III(32, 
                                                                ((IData)(1U) 
                                                                 + vlTOPp->top__DOT__distributor__DOT__x0), (IData)(0x280U))), (IData)(0x1e0U))),32);
            tracep->chgIData(oldp+29,(VL_MODDIV_III(32, 
                                                    (vlTOPp->top__DOT__distributor__DOT__y0 
                                                     + 
                                                     VL_DIV_III(32, 
                                                                ((IData)(2U) 
                                                                 + vlTOPp->top__DOT__distributor__DOT__x0), (IData)(0x280U))), (IData)(0x1e0U))),32);
            tracep->chgIData(oldp+30,(vlTOPp->top__DOT____Vcellinp__lut_rom__iterations[0]),32);
            tracep->chgIData(oldp+31,(vlTOPp->top__DOT____Vcellinp__lut_rom__iterations[1]),32);
            tracep->chgIData(oldp+32,(vlTOPp->top__DOT____Vcellinp__lut_rom__iterations[2]),32);
            tracep->chgIData(oldp+33,(vlTOPp->top__DOT____Vcellout__lut_rom__rgb_val[0]),24);
            tracep->chgIData(oldp+34,(vlTOPp->top__DOT____Vcellout__lut_rom__rgb_val[1]),24);
            tracep->chgIData(oldp+35,(vlTOPp->top__DOT____Vcellout__lut_rom__rgb_val[2]),24);
            tracep->chgIData(oldp+36,(vlTOPp->top__DOT__combinator_block__DOT__xpixel),32);
            tracep->chgIData(oldp+37,(vlTOPp->top__DOT__combinator_block__DOT__ypixel),32);
            tracep->chgIData(oldp+38,(vlTOPp->top__DOT__x
                                      [0U]),32);
            tracep->chgIData(oldp+39,(vlTOPp->top__DOT__y
                                      [0U]),32);
            tracep->chgBit(oldp+40,(vlTOPp->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__engine__finished));
            tracep->chgIData(oldp+41,(vlTOPp->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__engine__iterations),32);
            tracep->chgIData(oldp+42,(vlTOPp->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__engine__xpixel),32);
            tracep->chgIData(oldp+43,(vlTOPp->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__engine__ypixel),32);
            tracep->chgIData(oldp+44,(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__x0_buff),32);
            tracep->chgIData(oldp+45,(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__y0_buff),32);
            tracep->chgIData(oldp+46,(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__state),32);
            tracep->chgIData(oldp+47,(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__x),32);
            tracep->chgIData(oldp+48,(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__y),32);
            tracep->chgQData(oldp+49,(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__y_tmp),64);
            tracep->chgQData(oldp+51,(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__x2),64);
            tracep->chgQData(oldp+53,(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__y2),64);
            tracep->chgBit(oldp+55,((1U & (IData)(vlTOPp->top__DOT__fin_bus))));
            tracep->chgIData(oldp+56,(vlTOPp->top__DOT__colour_bus
                                      [0U]),24);
            tracep->chgIData(oldp+57,(vlTOPp->top__DOT__xpixel_bus
                                      [0U]),32);
            tracep->chgIData(oldp+58,(vlTOPp->top__DOT__ypixel_bus
                                      [0U]),32);
            tracep->chgBit(oldp+59,(vlTOPp->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__queue_block__full_queue));
            tracep->chgIData(oldp+60,(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[0]),24);
            tracep->chgIData(oldp+61,(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[1]),24);
            tracep->chgIData(oldp+62,(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[2]),24);
            tracep->chgIData(oldp+63,(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[3]),24);
            tracep->chgIData(oldp+64,(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[4]),24);
            tracep->chgIData(oldp+65,(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[0]),32);
            tracep->chgIData(oldp+66,(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[1]),32);
            tracep->chgIData(oldp+67,(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[2]),32);
            tracep->chgIData(oldp+68,(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[3]),32);
            tracep->chgIData(oldp+69,(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[4]),32);
            tracep->chgIData(oldp+70,(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[0]),32);
            tracep->chgIData(oldp+71,(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[1]),32);
            tracep->chgIData(oldp+72,(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[2]),32);
            tracep->chgIData(oldp+73,(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[3]),32);
            tracep->chgIData(oldp+74,(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[4]),32);
            tracep->chgCData(oldp+75,(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__counter),3);
            tracep->chgIData(oldp+76,(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__unnamedblk1__DOT__i),32);
            tracep->chgIData(oldp+77,(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__unnamedblk2__DOT__i),32);
            tracep->chgIData(oldp+78,(vlTOPp->top__DOT__x
                                      [1U]),32);
            tracep->chgIData(oldp+79,(vlTOPp->top__DOT__y
                                      [1U]),32);
            tracep->chgBit(oldp+80,(vlTOPp->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__engine__finished));
            tracep->chgIData(oldp+81,(vlTOPp->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__engine__iterations),32);
            tracep->chgIData(oldp+82,(vlTOPp->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__engine__xpixel),32);
            tracep->chgIData(oldp+83,(vlTOPp->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__engine__ypixel),32);
            tracep->chgIData(oldp+84,(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__x0_buff),32);
            tracep->chgIData(oldp+85,(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__y0_buff),32);
            tracep->chgIData(oldp+86,(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__state),32);
            tracep->chgIData(oldp+87,(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__x),32);
            tracep->chgIData(oldp+88,(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__y),32);
            tracep->chgQData(oldp+89,(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__y_tmp),64);
            tracep->chgQData(oldp+91,(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__x2),64);
            tracep->chgQData(oldp+93,(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__y2),64);
            tracep->chgBit(oldp+95,((1U & ((IData)(vlTOPp->top__DOT__fin_bus) 
                                           >> 1U))));
            tracep->chgIData(oldp+96,(vlTOPp->top__DOT__colour_bus
                                      [1U]),24);
            tracep->chgIData(oldp+97,(vlTOPp->top__DOT__xpixel_bus
                                      [1U]),32);
            tracep->chgIData(oldp+98,(vlTOPp->top__DOT__ypixel_bus
                                      [1U]),32);
            tracep->chgBit(oldp+99,(vlTOPp->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__queue_block__full_queue));
            tracep->chgIData(oldp+100,(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[0]),24);
            tracep->chgIData(oldp+101,(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[1]),24);
            tracep->chgIData(oldp+102,(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[2]),24);
            tracep->chgIData(oldp+103,(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[3]),24);
            tracep->chgIData(oldp+104,(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[4]),24);
            tracep->chgIData(oldp+105,(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[0]),32);
            tracep->chgIData(oldp+106,(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[1]),32);
            tracep->chgIData(oldp+107,(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[2]),32);
            tracep->chgIData(oldp+108,(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[3]),32);
            tracep->chgIData(oldp+109,(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[4]),32);
            tracep->chgIData(oldp+110,(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[0]),32);
            tracep->chgIData(oldp+111,(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[1]),32);
            tracep->chgIData(oldp+112,(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[2]),32);
            tracep->chgIData(oldp+113,(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[3]),32);
            tracep->chgIData(oldp+114,(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[4]),32);
            tracep->chgCData(oldp+115,(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__counter),3);
            tracep->chgIData(oldp+116,(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__unnamedblk1__DOT__i),32);
            tracep->chgIData(oldp+117,(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__unnamedblk2__DOT__i),32);
            tracep->chgIData(oldp+118,(vlTOPp->top__DOT__x
                                       [2U]),32);
            tracep->chgIData(oldp+119,(vlTOPp->top__DOT__y
                                       [2U]),32);
            tracep->chgBit(oldp+120,(vlTOPp->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__engine__finished));
            tracep->chgIData(oldp+121,(vlTOPp->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__engine__iterations),32);
            tracep->chgIData(oldp+122,(vlTOPp->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__engine__xpixel),32);
            tracep->chgIData(oldp+123,(vlTOPp->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__engine__ypixel),32);
            tracep->chgIData(oldp+124,(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__x0_buff),32);
            tracep->chgIData(oldp+125,(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__y0_buff),32);
            tracep->chgIData(oldp+126,(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__state),32);
            tracep->chgIData(oldp+127,(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__x),32);
            tracep->chgIData(oldp+128,(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__y),32);
            tracep->chgQData(oldp+129,(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__y_tmp),64);
            tracep->chgQData(oldp+131,(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__x2),64);
            tracep->chgQData(oldp+133,(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__y2),64);
            tracep->chgBit(oldp+135,((1U & ((IData)(vlTOPp->top__DOT__fin_bus) 
                                            >> 2U))));
            tracep->chgIData(oldp+136,(vlTOPp->top__DOT__colour_bus
                                       [2U]),24);
            tracep->chgIData(oldp+137,(vlTOPp->top__DOT__xpixel_bus
                                       [2U]),32);
            tracep->chgIData(oldp+138,(vlTOPp->top__DOT__ypixel_bus
                                       [2U]),32);
            tracep->chgBit(oldp+139,(vlTOPp->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__queue_block__full_queue));
            tracep->chgIData(oldp+140,(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[0]),24);
            tracep->chgIData(oldp+141,(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[1]),24);
            tracep->chgIData(oldp+142,(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[2]),24);
            tracep->chgIData(oldp+143,(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[3]),24);
            tracep->chgIData(oldp+144,(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[4]),24);
            tracep->chgIData(oldp+145,(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[0]),32);
            tracep->chgIData(oldp+146,(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[1]),32);
            tracep->chgIData(oldp+147,(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[2]),32);
            tracep->chgIData(oldp+148,(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[3]),32);
            tracep->chgIData(oldp+149,(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[4]),32);
            tracep->chgIData(oldp+150,(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[0]),32);
            tracep->chgIData(oldp+151,(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[1]),32);
            tracep->chgIData(oldp+152,(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[2]),32);
            tracep->chgIData(oldp+153,(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[3]),32);
            tracep->chgIData(oldp+154,(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[4]),32);
            tracep->chgCData(oldp+155,(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__counter),3);
            tracep->chgIData(oldp+156,(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__unnamedblk1__DOT__i),32);
            tracep->chgIData(oldp+157,(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__unnamedblk2__DOT__i),32);
        }
        tracep->chgBit(oldp+158,(vlTOPp->clk));
        tracep->chgBit(oldp+159,(vlTOPp->reset));
        tracep->chgBit(oldp+160,(vlTOPp->ready));
        tracep->chgIData(oldp+161,(vlTOPp->iterations_max),32);
        tracep->chgIData(oldp+162,(vlTOPp->zoom),32);
        tracep->chgIData(oldp+163,(vlTOPp->x_offset),32);
        tracep->chgIData(oldp+164,(vlTOPp->y_offset),32);
        tracep->chgCData(oldp+165,(vlTOPp->r),8);
        tracep->chgCData(oldp+166,(vlTOPp->g),8);
        tracep->chgCData(oldp+167,(vlTOPp->b),8);
        tracep->chgBit(oldp+168,(vlTOPp->first));
        tracep->chgBit(oldp+169,(vlTOPp->last_x));
        tracep->chgBit(oldp+170,(vlTOPp->last_y));
        tracep->chgBit(oldp+171,(vlTOPp->valid));
        tracep->chgBit(oldp+172,(vlTOPp->full_queue[0]));
        tracep->chgBit(oldp+173,(vlTOPp->full_queue[1]));
        tracep->chgBit(oldp+174,(vlTOPp->full_queue[2]));
        tracep->chgBit(oldp+175,(vlTOPp->top__DOT__reset_engine));
        tracep->chgBit(oldp+176,(vlTOPp->top__DOT__fin_wire));
        tracep->chgIData(oldp+177,((VL_RTOIROUND_I_D(32, 
                                                     ((1.67772160000000000e+07 
                                                       * 
                                                       (-320.0 
                                                        + 
                                                        VL_ITOR_D_I(vlTOPp->x_offset))) 
                                                      / 
                                                      VL_ITOR_D_I(
                                                                  VL_MULS_III(32,32,32, (IData)(0x64U), vlTOPp->zoom)))) 
                                    + VL_MULS_III(32,32,32, 
                                                  VL_DIVS_III(32, (IData)(0x1000000U), 
                                                              VL_MULS_III(32,32,32, (IData)(0x64U), vlTOPp->zoom)), 
                                                  vlTOPp->top__DOT__x
                                                  [0U]))),32);
        tracep->chgIData(oldp+178,((VL_RTOIROUND_I_D(32, 
                                                     ((1.67772160000000000e+07 
                                                       * 
                                                       (-240.0 
                                                        + 
                                                        VL_ITOR_D_I(vlTOPp->y_offset))) 
                                                      / 
                                                      VL_ITOR_D_I(
                                                                  VL_MULS_III(32,32,32, (IData)(0x64U), vlTOPp->zoom)))) 
                                    + VL_MULS_III(32,32,32, 
                                                  VL_DIVS_III(32, (IData)(0x1000000U), 
                                                              VL_MULS_III(32,32,32, (IData)(0x64U), vlTOPp->zoom)), 
                                                  vlTOPp->top__DOT__y
                                                  [0U]))),32);
        tracep->chgIData(oldp+179,(VL_RTOIROUND_I_D(32, 
                                                    ((1.67772160000000000e+07 
                                                      * 
                                                      (-320.0 
                                                       + 
                                                       VL_ITOR_D_I(vlTOPp->x_offset))) 
                                                     / 
                                                     VL_ITOR_D_I(
                                                                 VL_MULS_III(32,32,32, (IData)(0x64U), vlTOPp->zoom))))),32);
        tracep->chgIData(oldp+180,(VL_RTOIROUND_I_D(32, 
                                                    ((1.67772160000000000e+07 
                                                      * 
                                                      (-240.0 
                                                       + 
                                                       VL_ITOR_D_I(vlTOPp->y_offset))) 
                                                     / 
                                                     VL_ITOR_D_I(
                                                                 VL_MULS_III(32,32,32, (IData)(0x64U), vlTOPp->zoom))))),32);
        tracep->chgIData(oldp+181,(VL_DIVS_III(32, (IData)(0x1000000U), 
                                               VL_MULS_III(32,32,32, (IData)(0x64U), vlTOPp->zoom))),32);
        tracep->chgIData(oldp+182,((VL_RTOIROUND_I_D(32, 
                                                     ((1.67772160000000000e+07 
                                                       * 
                                                       (-320.0 
                                                        + 
                                                        VL_ITOR_D_I(vlTOPp->x_offset))) 
                                                      / 
                                                      VL_ITOR_D_I(
                                                                  VL_MULS_III(32,32,32, (IData)(0x64U), vlTOPp->zoom)))) 
                                    + VL_MULS_III(32,32,32, 
                                                  VL_DIVS_III(32, (IData)(0x1000000U), 
                                                              VL_MULS_III(32,32,32, (IData)(0x64U), vlTOPp->zoom)), 
                                                  vlTOPp->top__DOT__x
                                                  [1U]))),32);
        tracep->chgIData(oldp+183,((VL_RTOIROUND_I_D(32, 
                                                     ((1.67772160000000000e+07 
                                                       * 
                                                       (-240.0 
                                                        + 
                                                        VL_ITOR_D_I(vlTOPp->y_offset))) 
                                                      / 
                                                      VL_ITOR_D_I(
                                                                  VL_MULS_III(32,32,32, (IData)(0x64U), vlTOPp->zoom)))) 
                                    + VL_MULS_III(32,32,32, 
                                                  VL_DIVS_III(32, (IData)(0x1000000U), 
                                                              VL_MULS_III(32,32,32, (IData)(0x64U), vlTOPp->zoom)), 
                                                  vlTOPp->top__DOT__y
                                                  [1U]))),32);
        tracep->chgIData(oldp+184,((VL_RTOIROUND_I_D(32, 
                                                     ((1.67772160000000000e+07 
                                                       * 
                                                       (-320.0 
                                                        + 
                                                        VL_ITOR_D_I(vlTOPp->x_offset))) 
                                                      / 
                                                      VL_ITOR_D_I(
                                                                  VL_MULS_III(32,32,32, (IData)(0x64U), vlTOPp->zoom)))) 
                                    + VL_MULS_III(32,32,32, 
                                                  VL_DIVS_III(32, (IData)(0x1000000U), 
                                                              VL_MULS_III(32,32,32, (IData)(0x64U), vlTOPp->zoom)), 
                                                  vlTOPp->top__DOT__x
                                                  [2U]))),32);
        tracep->chgIData(oldp+185,((VL_RTOIROUND_I_D(32, 
                                                     ((1.67772160000000000e+07 
                                                       * 
                                                       (-240.0 
                                                        + 
                                                        VL_ITOR_D_I(vlTOPp->y_offset))) 
                                                      / 
                                                      VL_ITOR_D_I(
                                                                  VL_MULS_III(32,32,32, (IData)(0x64U), vlTOPp->zoom)))) 
                                    + VL_MULS_III(32,32,32, 
                                                  VL_DIVS_III(32, (IData)(0x1000000U), 
                                                              VL_MULS_III(32,32,32, (IData)(0x64U), vlTOPp->zoom)), 
                                                  vlTOPp->top__DOT__y
                                                  [2U]))),32);
    }
}

void Vtop::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vtop__Syms* __restrict vlSymsp = static_cast<Vtop__Syms*>(userp);
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
    }
}
