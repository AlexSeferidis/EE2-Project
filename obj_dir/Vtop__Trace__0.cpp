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
        bufp->chgIData(oldp+0,(vlSelf->top__DOT__colour_o_wire),24);
        bufp->chgIData(oldp+1,(vlSelf->top__DOT__xpixel_wire),32);
        bufp->chgIData(oldp+2,(vlSelf->top__DOT__ypixel_wire),32);
        bufp->chgIData(oldp+3,(vlSelf->top__DOT__colour_wire),24);
        bufp->chgBit(oldp+4,(vlSelf->top__DOT__en_wire));
        bufp->chgCData(oldp+5,(vlSelf->top__DOT__fin_bus),3);
        bufp->chgIData(oldp+6,(vlSelf->top__DOT__x[0]),32);
        bufp->chgIData(oldp+7,(vlSelf->top__DOT__x[1]),32);
        bufp->chgIData(oldp+8,(vlSelf->top__DOT__x[2]),32);
        bufp->chgIData(oldp+9,(vlSelf->top__DOT__y[0]),32);
        bufp->chgIData(oldp+10,(vlSelf->top__DOT__y[1]),32);
        bufp->chgIData(oldp+11,(vlSelf->top__DOT__y[2]),32);
        bufp->chgIData(oldp+12,(vlSelf->top__DOT__iterations_bus[0]),32);
        bufp->chgIData(oldp+13,(vlSelf->top__DOT__iterations_bus[1]),32);
        bufp->chgIData(oldp+14,(vlSelf->top__DOT__iterations_bus[2]),32);
        bufp->chgIData(oldp+15,(vlSelf->top__DOT__xpixel_bus[0]),32);
        bufp->chgIData(oldp+16,(vlSelf->top__DOT__xpixel_bus[1]),32);
        bufp->chgIData(oldp+17,(vlSelf->top__DOT__xpixel_bus[2]),32);
        bufp->chgIData(oldp+18,(vlSelf->top__DOT__ypixel_bus[0]),32);
        bufp->chgIData(oldp+19,(vlSelf->top__DOT__ypixel_bus[1]),32);
        bufp->chgIData(oldp+20,(vlSelf->top__DOT__ypixel_bus[2]),32);
        bufp->chgIData(oldp+21,(vlSelf->top__DOT__colour_bus[0]),24);
        bufp->chgIData(oldp+22,(vlSelf->top__DOT__colour_bus[1]),24);
        bufp->chgIData(oldp+23,(vlSelf->top__DOT__colour_bus[2]),24);
        bufp->chgIData(oldp+24,(vlSelf->top__DOT__combinator_block__DOT__xpixel),32);
        bufp->chgIData(oldp+25,(vlSelf->top__DOT__combinator_block__DOT__ypixel),32);
        bufp->chgIData(oldp+26,(vlSelf->top__DOT__distributor__DOT__x0),32);
        bufp->chgIData(oldp+27,(VL_MODDIV_III(32, ((IData)(1U) 
                                                   + vlSelf->top__DOT__distributor__DOT__x0), (IData)(0x280U))),32);
        bufp->chgIData(oldp+28,(VL_MODDIV_III(32, ((IData)(2U) 
                                                   + vlSelf->top__DOT__distributor__DOT__x0), (IData)(0x280U))),32);
        bufp->chgIData(oldp+29,(vlSelf->top__DOT__distributor__DOT__y0),32);
        bufp->chgIData(oldp+30,(VL_MODDIV_III(32, (vlSelf->top__DOT__distributor__DOT__y0 
                                                   + 
                                                   VL_DIV_III(32, 
                                                              ((IData)(1U) 
                                                               + vlSelf->top__DOT__distributor__DOT__x0), (IData)(0x280U))), (IData)(0x1e0U))),32);
        bufp->chgIData(oldp+31,(VL_MODDIV_III(32, (vlSelf->top__DOT__distributor__DOT__y0 
                                                   + 
                                                   VL_DIV_III(32, 
                                                              ((IData)(2U) 
                                                               + vlSelf->top__DOT__distributor__DOT__x0), (IData)(0x280U))), (IData)(0x1e0U))),32);
        bufp->chgIData(oldp+32,(vlSelf->top__DOT__x
                                [0U]),32);
        bufp->chgIData(oldp+33,(vlSelf->top__DOT__y
                                [0U]),32);
        bufp->chgBit(oldp+34,(vlSelf->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__engine__finished));
        bufp->chgIData(oldp+35,(vlSelf->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__engine__iterations),32);
        bufp->chgIData(oldp+36,(vlSelf->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__engine__xpixel),32);
        bufp->chgIData(oldp+37,(vlSelf->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__engine__ypixel),32);
        bufp->chgIData(oldp+38,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__x0_buff),32);
        bufp->chgIData(oldp+39,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__y0_buff),32);
        bufp->chgIData(oldp+40,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__state),32);
        bufp->chgIData(oldp+41,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__x),32);
        bufp->chgIData(oldp+42,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__y),32);
        bufp->chgQData(oldp+43,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__y_tmp),64);
        bufp->chgQData(oldp+45,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__x2),64);
        bufp->chgQData(oldp+47,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__y2),64);
        bufp->chgBit(oldp+49,((1U & (IData)(vlSelf->top__DOT__fin_bus))));
        bufp->chgIData(oldp+50,(vlSelf->top__DOT__colour_bus
                                [0U]),24);
        bufp->chgIData(oldp+51,(vlSelf->top__DOT__xpixel_bus
                                [0U]),32);
        bufp->chgIData(oldp+52,(vlSelf->top__DOT__ypixel_bus
                                [0U]),32);
        bufp->chgBit(oldp+53,(vlSelf->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__queue_block__full_queue));
        bufp->chgIData(oldp+54,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[0]),24);
        bufp->chgIData(oldp+55,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[1]),24);
        bufp->chgIData(oldp+56,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[2]),24);
        bufp->chgIData(oldp+57,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[3]),24);
        bufp->chgIData(oldp+58,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[4]),24);
        bufp->chgIData(oldp+59,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[0]),32);
        bufp->chgIData(oldp+60,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[1]),32);
        bufp->chgIData(oldp+61,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[2]),32);
        bufp->chgIData(oldp+62,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[3]),32);
        bufp->chgIData(oldp+63,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[4]),32);
        bufp->chgIData(oldp+64,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[0]),32);
        bufp->chgIData(oldp+65,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[1]),32);
        bufp->chgIData(oldp+66,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[2]),32);
        bufp->chgIData(oldp+67,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[3]),32);
        bufp->chgIData(oldp+68,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[4]),32);
        bufp->chgCData(oldp+69,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__counter),3);
        bufp->chgIData(oldp+70,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+71,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__unnamedblk2__DOT__i),32);
        bufp->chgIData(oldp+72,(vlSelf->top__DOT__x
                                [1U]),32);
        bufp->chgIData(oldp+73,(vlSelf->top__DOT__y
                                [1U]),32);
        bufp->chgBit(oldp+74,(vlSelf->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__engine__finished));
        bufp->chgIData(oldp+75,(vlSelf->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__engine__iterations),32);
        bufp->chgIData(oldp+76,(vlSelf->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__engine__xpixel),32);
        bufp->chgIData(oldp+77,(vlSelf->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__engine__ypixel),32);
        bufp->chgIData(oldp+78,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__x0_buff),32);
        bufp->chgIData(oldp+79,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__y0_buff),32);
        bufp->chgIData(oldp+80,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__state),32);
        bufp->chgIData(oldp+81,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__x),32);
        bufp->chgIData(oldp+82,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__y),32);
        bufp->chgQData(oldp+83,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__y_tmp),64);
        bufp->chgQData(oldp+85,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__x2),64);
        bufp->chgQData(oldp+87,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__y2),64);
        bufp->chgBit(oldp+89,((1U & ((IData)(vlSelf->top__DOT__fin_bus) 
                                     >> 1U))));
        bufp->chgIData(oldp+90,(vlSelf->top__DOT__colour_bus
                                [1U]),24);
        bufp->chgIData(oldp+91,(vlSelf->top__DOT__xpixel_bus
                                [1U]),32);
        bufp->chgIData(oldp+92,(vlSelf->top__DOT__ypixel_bus
                                [1U]),32);
        bufp->chgBit(oldp+93,(vlSelf->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__queue_block__full_queue));
        bufp->chgIData(oldp+94,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[0]),24);
        bufp->chgIData(oldp+95,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[1]),24);
        bufp->chgIData(oldp+96,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[2]),24);
        bufp->chgIData(oldp+97,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[3]),24);
        bufp->chgIData(oldp+98,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[4]),24);
        bufp->chgIData(oldp+99,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[0]),32);
        bufp->chgIData(oldp+100,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[1]),32);
        bufp->chgIData(oldp+101,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[2]),32);
        bufp->chgIData(oldp+102,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[3]),32);
        bufp->chgIData(oldp+103,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[4]),32);
        bufp->chgIData(oldp+104,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[0]),32);
        bufp->chgIData(oldp+105,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[1]),32);
        bufp->chgIData(oldp+106,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[2]),32);
        bufp->chgIData(oldp+107,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[3]),32);
        bufp->chgIData(oldp+108,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[4]),32);
        bufp->chgCData(oldp+109,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__counter),3);
        bufp->chgIData(oldp+110,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+111,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__unnamedblk2__DOT__i),32);
        bufp->chgIData(oldp+112,(vlSelf->top__DOT__x
                                 [2U]),32);
        bufp->chgIData(oldp+113,(vlSelf->top__DOT__y
                                 [2U]),32);
        bufp->chgBit(oldp+114,(vlSelf->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__engine__finished));
        bufp->chgIData(oldp+115,(vlSelf->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__engine__iterations),32);
        bufp->chgIData(oldp+116,(vlSelf->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__engine__xpixel),32);
        bufp->chgIData(oldp+117,(vlSelf->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__engine__ypixel),32);
        bufp->chgIData(oldp+118,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__x0_buff),32);
        bufp->chgIData(oldp+119,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__y0_buff),32);
        bufp->chgIData(oldp+120,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__state),32);
        bufp->chgIData(oldp+121,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__x),32);
        bufp->chgIData(oldp+122,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__y),32);
        bufp->chgQData(oldp+123,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__y_tmp),64);
        bufp->chgQData(oldp+125,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__x2),64);
        bufp->chgQData(oldp+127,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__y2),64);
        bufp->chgBit(oldp+129,((1U & ((IData)(vlSelf->top__DOT__fin_bus) 
                                      >> 2U))));
        bufp->chgIData(oldp+130,(vlSelf->top__DOT__colour_bus
                                 [2U]),24);
        bufp->chgIData(oldp+131,(vlSelf->top__DOT__xpixel_bus
                                 [2U]),32);
        bufp->chgIData(oldp+132,(vlSelf->top__DOT__ypixel_bus
                                 [2U]),32);
        bufp->chgBit(oldp+133,(vlSelf->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__queue_block__full_queue));
        bufp->chgIData(oldp+134,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[0]),24);
        bufp->chgIData(oldp+135,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[1]),24);
        bufp->chgIData(oldp+136,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[2]),24);
        bufp->chgIData(oldp+137,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[3]),24);
        bufp->chgIData(oldp+138,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[4]),24);
        bufp->chgIData(oldp+139,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[0]),32);
        bufp->chgIData(oldp+140,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[1]),32);
        bufp->chgIData(oldp+141,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[2]),32);
        bufp->chgIData(oldp+142,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[3]),32);
        bufp->chgIData(oldp+143,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[4]),32);
        bufp->chgIData(oldp+144,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[0]),32);
        bufp->chgIData(oldp+145,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[1]),32);
        bufp->chgIData(oldp+146,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[2]),32);
        bufp->chgIData(oldp+147,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[3]),32);
        bufp->chgIData(oldp+148,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[4]),32);
        bufp->chgCData(oldp+149,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__counter),3);
        bufp->chgIData(oldp+150,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+151,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__unnamedblk2__DOT__i),32);
        bufp->chgIData(oldp+152,(vlSelf->top__DOT____Vcellinp__lut_rom__iterations[0]),32);
        bufp->chgIData(oldp+153,(vlSelf->top__DOT____Vcellinp__lut_rom__iterations[1]),32);
        bufp->chgIData(oldp+154,(vlSelf->top__DOT____Vcellinp__lut_rom__iterations[2]),32);
        bufp->chgIData(oldp+155,(vlSelf->top__DOT____Vcellout__lut_rom__rgb_val[0]),24);
        bufp->chgIData(oldp+156,(vlSelf->top__DOT____Vcellout__lut_rom__rgb_val[1]),24);
        bufp->chgIData(oldp+157,(vlSelf->top__DOT____Vcellout__lut_rom__rgb_val[2]),24);
    }
    bufp->chgBit(oldp+158,(vlSelf->clk));
    bufp->chgBit(oldp+159,(vlSelf->reset));
    bufp->chgBit(oldp+160,(vlSelf->ready));
    bufp->chgIData(oldp+161,(vlSelf->iterations_max),32);
    bufp->chgIData(oldp+162,(vlSelf->zoom),32);
    bufp->chgIData(oldp+163,(vlSelf->x_offset),32);
    bufp->chgIData(oldp+164,(vlSelf->y_offset),32);
    bufp->chgCData(oldp+165,(vlSelf->r),8);
    bufp->chgCData(oldp+166,(vlSelf->g),8);
    bufp->chgCData(oldp+167,(vlSelf->b),8);
    bufp->chgBit(oldp+168,(vlSelf->first));
    bufp->chgBit(oldp+169,(vlSelf->last_x));
    bufp->chgBit(oldp+170,(vlSelf->last_y));
    bufp->chgBit(oldp+171,(vlSelf->valid));
    bufp->chgBit(oldp+172,(vlSelf->full_queue[0]));
    bufp->chgBit(oldp+173,(vlSelf->full_queue[1]));
    bufp->chgBit(oldp+174,(vlSelf->full_queue[2]));
    bufp->chgBit(oldp+175,(vlSelf->top__DOT__reset_engine));
    bufp->chgBit(oldp+176,(vlSelf->top__DOT__fin_wire));
    bufp->chgIData(oldp+177,((VL_RTOIROUND_I_D(((1.67772160000000000e+07 
                                                 * 
                                                 (-320.0 
                                                  + 
                                                  VL_ISTOR_D_I(32, vlSelf->x_offset))) 
                                                / VL_ISTOR_D_I(32, 
                                                               ((IData)(0x64U) 
                                                                * vlSelf->zoom)))) 
                              + VL_MULS_III(32, VL_DIVS_III(32, (IData)(0x1000000U), 
                                                            VL_MULS_III(32, (IData)(0x64U), vlSelf->zoom)), 
                                            vlSelf->top__DOT__x
                                            [0U]))),32);
    bufp->chgIData(oldp+178,((VL_RTOIROUND_I_D(((1.67772160000000000e+07 
                                                 * 
                                                 (-240.0 
                                                  + 
                                                  VL_ISTOR_D_I(32, vlSelf->y_offset))) 
                                                / VL_ISTOR_D_I(32, 
                                                               ((IData)(0x64U) 
                                                                * vlSelf->zoom)))) 
                              + VL_MULS_III(32, VL_DIVS_III(32, (IData)(0x1000000U), 
                                                            VL_MULS_III(32, (IData)(0x64U), vlSelf->zoom)), 
                                            vlSelf->top__DOT__y
                                            [0U]))),32);
    bufp->chgIData(oldp+179,(VL_RTOIROUND_I_D(((1.67772160000000000e+07 
                                                * (-320.0 
                                                   + 
                                                   VL_ISTOR_D_I(32, vlSelf->x_offset))) 
                                               / VL_ISTOR_D_I(32, 
                                                              ((IData)(0x64U) 
                                                               * vlSelf->zoom))))),32);
    bufp->chgIData(oldp+180,(VL_RTOIROUND_I_D(((1.67772160000000000e+07 
                                                * (-240.0 
                                                   + 
                                                   VL_ISTOR_D_I(32, vlSelf->y_offset))) 
                                               / VL_ISTOR_D_I(32, 
                                                              ((IData)(0x64U) 
                                                               * vlSelf->zoom))))),32);
    bufp->chgIData(oldp+181,(VL_DIVS_III(32, (IData)(0x1000000U), 
                                         VL_MULS_III(32, (IData)(0x64U), vlSelf->zoom))),32);
    bufp->chgIData(oldp+182,((VL_RTOIROUND_I_D(((1.67772160000000000e+07 
                                                 * 
                                                 (-320.0 
                                                  + 
                                                  VL_ISTOR_D_I(32, vlSelf->x_offset))) 
                                                / VL_ISTOR_D_I(32, 
                                                               ((IData)(0x64U) 
                                                                * vlSelf->zoom)))) 
                              + VL_MULS_III(32, VL_DIVS_III(32, (IData)(0x1000000U), 
                                                            VL_MULS_III(32, (IData)(0x64U), vlSelf->zoom)), 
                                            vlSelf->top__DOT__x
                                            [1U]))),32);
    bufp->chgIData(oldp+183,((VL_RTOIROUND_I_D(((1.67772160000000000e+07 
                                                 * 
                                                 (-240.0 
                                                  + 
                                                  VL_ISTOR_D_I(32, vlSelf->y_offset))) 
                                                / VL_ISTOR_D_I(32, 
                                                               ((IData)(0x64U) 
                                                                * vlSelf->zoom)))) 
                              + VL_MULS_III(32, VL_DIVS_III(32, (IData)(0x1000000U), 
                                                            VL_MULS_III(32, (IData)(0x64U), vlSelf->zoom)), 
                                            vlSelf->top__DOT__y
                                            [1U]))),32);
    bufp->chgIData(oldp+184,((VL_RTOIROUND_I_D(((1.67772160000000000e+07 
                                                 * 
                                                 (-320.0 
                                                  + 
                                                  VL_ISTOR_D_I(32, vlSelf->x_offset))) 
                                                / VL_ISTOR_D_I(32, 
                                                               ((IData)(0x64U) 
                                                                * vlSelf->zoom)))) 
                              + VL_MULS_III(32, VL_DIVS_III(32, (IData)(0x1000000U), 
                                                            VL_MULS_III(32, (IData)(0x64U), vlSelf->zoom)), 
                                            vlSelf->top__DOT__x
                                            [2U]))),32);
    bufp->chgIData(oldp+185,((VL_RTOIROUND_I_D(((1.67772160000000000e+07 
                                                 * 
                                                 (-240.0 
                                                  + 
                                                  VL_ISTOR_D_I(32, vlSelf->y_offset))) 
                                                / VL_ISTOR_D_I(32, 
                                                               ((IData)(0x64U) 
                                                                * vlSelf->zoom)))) 
                              + VL_MULS_III(32, VL_DIVS_III(32, (IData)(0x1000000U), 
                                                            VL_MULS_III(32, (IData)(0x64U), vlSelf->zoom)), 
                                            vlSelf->top__DOT__y
                                            [2U]))),32);
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
