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
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0U])) {
            tracep->chgIData(oldp+0,(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__unnamedblk1__DOT__i),32);
            tracep->chgIData(oldp+1,(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__unnamedblk1__DOT__i),32);
            tracep->chgIData(oldp+2,(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__unnamedblk1__DOT__i),32);
            tracep->chgIData(oldp+3,(vlTOPp->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__unnamedblk1__DOT__i),32);
            tracep->chgIData(oldp+4,(vlTOPp->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__unnamedblk1__DOT__i),32);
            tracep->chgIData(oldp+5,(vlTOPp->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__unnamedblk1__DOT__i),32);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgIData(oldp+6,(vlTOPp->top__DOT__colour_o_wire),24);
            tracep->chgSData(oldp+7,(vlTOPp->top__DOT__xpixel_wire),10);
            tracep->chgSData(oldp+8,(vlTOPp->top__DOT__ypixel_wire),10);
            tracep->chgSData(oldp+9,(vlTOPp->top__DOT__x[0]),10);
            tracep->chgSData(oldp+10,(vlTOPp->top__DOT__x[1]),10);
            tracep->chgSData(oldp+11,(vlTOPp->top__DOT__x[2]),10);
            tracep->chgSData(oldp+12,(vlTOPp->top__DOT__x[3]),10);
            tracep->chgSData(oldp+13,(vlTOPp->top__DOT__x[4]),10);
            tracep->chgSData(oldp+14,(vlTOPp->top__DOT__x[5]),10);
            tracep->chgSData(oldp+15,(vlTOPp->top__DOT__y[0]),10);
            tracep->chgSData(oldp+16,(vlTOPp->top__DOT__y[1]),10);
            tracep->chgSData(oldp+17,(vlTOPp->top__DOT__y[2]),10);
            tracep->chgSData(oldp+18,(vlTOPp->top__DOT__y[3]),10);
            tracep->chgSData(oldp+19,(vlTOPp->top__DOT__y[4]),10);
            tracep->chgSData(oldp+20,(vlTOPp->top__DOT__y[5]),10);
            tracep->chgIData(oldp+21,(vlTOPp->top__DOT__iterations_bus[0]),32);
            tracep->chgIData(oldp+22,(vlTOPp->top__DOT__iterations_bus[1]),32);
            tracep->chgIData(oldp+23,(vlTOPp->top__DOT__iterations_bus[2]),32);
            tracep->chgIData(oldp+24,(vlTOPp->top__DOT__iterations_bus[3]),32);
            tracep->chgIData(oldp+25,(vlTOPp->top__DOT__iterations_bus[4]),32);
            tracep->chgIData(oldp+26,(vlTOPp->top__DOT__iterations_bus[5]),32);
            tracep->chgSData(oldp+27,(vlTOPp->top__DOT____Vcellout__distributor__x[0]),10);
            tracep->chgSData(oldp+28,(vlTOPp->top__DOT____Vcellout__distributor__x[1]),10);
            tracep->chgSData(oldp+29,(vlTOPp->top__DOT____Vcellout__distributor__x[2]),10);
            tracep->chgSData(oldp+30,(vlTOPp->top__DOT____Vcellout__distributor__x[3]),10);
            tracep->chgSData(oldp+31,(vlTOPp->top__DOT____Vcellout__distributor__x[4]),10);
            tracep->chgSData(oldp+32,(vlTOPp->top__DOT____Vcellout__distributor__x[5]),10);
            tracep->chgSData(oldp+33,(vlTOPp->top__DOT____Vcellout__distributor__y[0]),10);
            tracep->chgSData(oldp+34,(vlTOPp->top__DOT____Vcellout__distributor__y[1]),10);
            tracep->chgSData(oldp+35,(vlTOPp->top__DOT____Vcellout__distributor__y[2]),10);
            tracep->chgSData(oldp+36,(vlTOPp->top__DOT____Vcellout__distributor__y[3]),10);
            tracep->chgSData(oldp+37,(vlTOPp->top__DOT____Vcellout__distributor__y[4]),10);
            tracep->chgSData(oldp+38,(vlTOPp->top__DOT____Vcellout__distributor__y[5]),10);
            tracep->chgSData(oldp+39,(vlTOPp->top__DOT__distributor__DOT__x0),10);
            tracep->chgSData(oldp+40,(vlTOPp->top__DOT__distributor__DOT__y0),10);
            tracep->chgIData(oldp+41,(vlTOPp->top__DOT____Vcellinp__lut_rom__iterations[0]),32);
            tracep->chgIData(oldp+42,(vlTOPp->top__DOT____Vcellinp__lut_rom__iterations[1]),32);
            tracep->chgIData(oldp+43,(vlTOPp->top__DOT____Vcellinp__lut_rom__iterations[2]),32);
            tracep->chgIData(oldp+44,(vlTOPp->top__DOT____Vcellinp__lut_rom__iterations[3]),32);
            tracep->chgIData(oldp+45,(vlTOPp->top__DOT____Vcellinp__lut_rom__iterations[4]),32);
            tracep->chgIData(oldp+46,(vlTOPp->top__DOT____Vcellinp__lut_rom__iterations[5]),32);
            tracep->chgIData(oldp+47,(vlTOPp->top__DOT____Vcellout__lut_rom__rgb_val[0]),24);
            tracep->chgIData(oldp+48,(vlTOPp->top__DOT____Vcellout__lut_rom__rgb_val[1]),24);
            tracep->chgIData(oldp+49,(vlTOPp->top__DOT____Vcellout__lut_rom__rgb_val[2]),24);
            tracep->chgIData(oldp+50,(vlTOPp->top__DOT____Vcellout__lut_rom__rgb_val[3]),24);
            tracep->chgIData(oldp+51,(vlTOPp->top__DOT____Vcellout__lut_rom__rgb_val[4]),24);
            tracep->chgIData(oldp+52,(vlTOPp->top__DOT____Vcellout__lut_rom__rgb_val[5]),24);
            tracep->chgSData(oldp+53,(vlTOPp->top__DOT__combinator_block__DOT__xpixel),10);
            tracep->chgSData(oldp+54,(vlTOPp->top__DOT__combinator_block__DOT__ypixel),10);
            tracep->chgIData(oldp+55,(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__unnamedblk2__DOT__i),32);
            tracep->chgIData(oldp+56,(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__unnamedblk2__DOT__i),32);
            tracep->chgIData(oldp+57,(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__unnamedblk2__DOT__i),32);
            tracep->chgIData(oldp+58,(vlTOPp->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__unnamedblk2__DOT__i),32);
            tracep->chgIData(oldp+59,(vlTOPp->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__unnamedblk2__DOT__i),32);
            tracep->chgIData(oldp+60,(vlTOPp->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__unnamedblk2__DOT__i),32);
            tracep->chgSData(oldp+61,(vlTOPp->top__DOT__x
                                      [0U]),10);
            tracep->chgSData(oldp+62,(vlTOPp->top__DOT__y
                                      [0U]),10);
            tracep->chgCData(oldp+63,(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__curr_iterations),6);
            tracep->chgSData(oldp+64,(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.xpixel),10);
            tracep->chgSData(oldp+65,(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.ypixel),10);
            tracep->chgIData(oldp+66,(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__x),25);
            tracep->chgIData(oldp+67,(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__y),25);
            tracep->chgIData(oldp+68,(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__zr),25);
            tracep->chgIData(oldp+69,(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__zi),25);
            tracep->chgIData(oldp+70,((0x1ffffffU & 
                                       ((vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__zr2 
                                         - vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__zi2) 
                                        + vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__x))),25);
            tracep->chgIData(oldp+71,(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__zr2),25);
            tracep->chgIData(oldp+72,(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__zi2),25);
            tracep->chgIData(oldp+73,(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__distance),25);
            tracep->chgIData(oldp+74,((0x1ffffffU & (IData)(
                                                            (0x3fffffffULL 
                                                             & (VL_MULS_QQQ(50,50,50, 0x199aULL, 
                                                                            (0x3ffffffffffffULL 
                                                                             & VL_EXTENDS_QI(50,25, 
                                                                                (0x1ffffffU 
                                                                                & (vlTOPp->top__DOT__x
                                                                                [0U] 
                                                                                << 0xeU))))) 
                                                                >> 0x14U))))),25);
            tracep->chgIData(oldp+75,((0x1ffffffU & (IData)(
                                                            (0x3fffffffULL 
                                                             & (VL_MULS_QQQ(50,50,50, 0x199aULL, 
                                                                            (0x3ffffffffffffULL 
                                                                             & VL_EXTENDS_QI(50,25, 
                                                                                (0x1ffffffU 
                                                                                & (vlTOPp->top__DOT__y
                                                                                [0U] 
                                                                                << 0xeU))))) 
                                                                >> 0x14U))))),25);
            tracep->chgIData(oldp+76,((0x1ffffffU & 
                                       (vlTOPp->top__DOT__x
                                        [0U] << 0xeU))),25);
            tracep->chgIData(oldp+77,((0x1ffffffU & 
                                       (vlTOPp->top__DOT__y
                                        [0U] << 0xeU))),25);
            tracep->chgQData(oldp+78,((0x3ffffffffffffULL 
                                       & VL_MULS_QQQ(50,50,50, 0x199aULL, 
                                                     (0x3ffffffffffffULL 
                                                      & VL_EXTENDS_QI(50,25, 
                                                                      (0x1ffffffU 
                                                                       & (vlTOPp->top__DOT__x
                                                                          [0U] 
                                                                          << 0xeU))))))),50);
            tracep->chgQData(oldp+80,((0x3ffffffffffffULL 
                                       & VL_MULS_QQQ(50,50,50, 0x199aULL, 
                                                     (0x3ffffffffffffULL 
                                                      & VL_EXTENDS_QI(50,25, 
                                                                      (0x1ffffffU 
                                                                       & (vlTOPp->top__DOT__y
                                                                          [0U] 
                                                                          << 0xeU))))))),50);
            tracep->chgCData(oldp+82,((0x3fU & ((IData)(1U) 
                                                + (IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__curr_iterations)))),6);
            tracep->chgQData(oldp+83,((0x3ffffffffffffULL 
                                       & VL_MULS_QQQ(50,50,50, 
                                                     (0x3ffffffffffffULL 
                                                      & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__zr)), 
                                                     (0x3ffffffffffffULL 
                                                      & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__zr))))),50);
            tracep->chgQData(oldp+85,((0x3ffffffffffffULL 
                                       & VL_MULS_QQQ(50,50,50, 
                                                     (0x3ffffffffffffULL 
                                                      & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__zi)), 
                                                     (0x3ffffffffffffULL 
                                                      & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__zi))))),50);
            tracep->chgQData(oldp+87,((0x3ffffffffffffULL 
                                       & VL_MULS_QQQ(50,50,50, 
                                                     (0x3ffffffffffffULL 
                                                      & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__zr)), 
                                                     (0x3ffffffffffffULL 
                                                      & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__zi))))),50);
            tracep->chgCData(oldp+89,(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__SM__DOT__state),2);
            tracep->chgSData(oldp+90,(vlTOPp->top__DOT__x
                                      [1U]),10);
            tracep->chgSData(oldp+91,(vlTOPp->top__DOT__y
                                      [1U]),10);
            tracep->chgCData(oldp+92,(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__curr_iterations),6);
            tracep->chgSData(oldp+93,(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.xpixel),10);
            tracep->chgSData(oldp+94,(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.ypixel),10);
            tracep->chgIData(oldp+95,(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__x),25);
            tracep->chgIData(oldp+96,(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__y),25);
            tracep->chgIData(oldp+97,(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__zr),25);
            tracep->chgIData(oldp+98,(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__zi),25);
            tracep->chgIData(oldp+99,((0x1ffffffU & 
                                       ((vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__zr2 
                                         - vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__zi2) 
                                        + vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__x))),25);
            tracep->chgIData(oldp+100,(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__zr2),25);
            tracep->chgIData(oldp+101,(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__zi2),25);
            tracep->chgIData(oldp+102,(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__distance),25);
            tracep->chgIData(oldp+103,((0x1ffffffU 
                                        & (IData)((0x3fffffffULL 
                                                   & (VL_MULS_QQQ(50,50,50, 0x199aULL, 
                                                                  (0x3ffffffffffffULL 
                                                                   & VL_EXTENDS_QI(50,25, 
                                                                                (0x1ffffffU 
                                                                                & (vlTOPp->top__DOT__x
                                                                                [1U] 
                                                                                << 0xeU))))) 
                                                      >> 0x14U))))),25);
            tracep->chgIData(oldp+104,((0x1ffffffU 
                                        & (IData)((0x3fffffffULL 
                                                   & (VL_MULS_QQQ(50,50,50, 0x199aULL, 
                                                                  (0x3ffffffffffffULL 
                                                                   & VL_EXTENDS_QI(50,25, 
                                                                                (0x1ffffffU 
                                                                                & (vlTOPp->top__DOT__y
                                                                                [1U] 
                                                                                << 0xeU))))) 
                                                      >> 0x14U))))),25);
            tracep->chgIData(oldp+105,((0x1ffffffU 
                                        & (vlTOPp->top__DOT__x
                                           [1U] << 0xeU))),25);
            tracep->chgIData(oldp+106,((0x1ffffffU 
                                        & (vlTOPp->top__DOT__y
                                           [1U] << 0xeU))),25);
            tracep->chgQData(oldp+107,((0x3ffffffffffffULL 
                                        & VL_MULS_QQQ(50,50,50, 0x199aULL, 
                                                      (0x3ffffffffffffULL 
                                                       & VL_EXTENDS_QI(50,25, 
                                                                       (0x1ffffffU 
                                                                        & (vlTOPp->top__DOT__x
                                                                           [1U] 
                                                                           << 0xeU))))))),50);
            tracep->chgQData(oldp+109,((0x3ffffffffffffULL 
                                        & VL_MULS_QQQ(50,50,50, 0x199aULL, 
                                                      (0x3ffffffffffffULL 
                                                       & VL_EXTENDS_QI(50,25, 
                                                                       (0x1ffffffU 
                                                                        & (vlTOPp->top__DOT__y
                                                                           [1U] 
                                                                           << 0xeU))))))),50);
            tracep->chgCData(oldp+111,((0x3fU & ((IData)(1U) 
                                                 + (IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__curr_iterations)))),6);
            tracep->chgQData(oldp+112,((0x3ffffffffffffULL 
                                        & VL_MULS_QQQ(50,50,50, 
                                                      (0x3ffffffffffffULL 
                                                       & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__zr)), 
                                                      (0x3ffffffffffffULL 
                                                       & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__zr))))),50);
            tracep->chgQData(oldp+114,((0x3ffffffffffffULL 
                                        & VL_MULS_QQQ(50,50,50, 
                                                      (0x3ffffffffffffULL 
                                                       & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__zi)), 
                                                      (0x3ffffffffffffULL 
                                                       & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__zi))))),50);
            tracep->chgQData(oldp+116,((0x3ffffffffffffULL 
                                        & VL_MULS_QQQ(50,50,50, 
                                                      (0x3ffffffffffffULL 
                                                       & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__zr)), 
                                                      (0x3ffffffffffffULL 
                                                       & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__zi))))),50);
            tracep->chgCData(oldp+118,(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__SM__DOT__state),2);
            tracep->chgSData(oldp+119,(vlTOPp->top__DOT__x
                                       [2U]),10);
            tracep->chgSData(oldp+120,(vlTOPp->top__DOT__y
                                       [2U]),10);
            tracep->chgCData(oldp+121,(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__curr_iterations),6);
            tracep->chgSData(oldp+122,(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.xpixel),10);
            tracep->chgSData(oldp+123,(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.ypixel),10);
            tracep->chgIData(oldp+124,(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__x),25);
            tracep->chgIData(oldp+125,(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__y),25);
            tracep->chgIData(oldp+126,(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__zr),25);
            tracep->chgIData(oldp+127,(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__zi),25);
            tracep->chgIData(oldp+128,((0x1ffffffU 
                                        & ((vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__zr2 
                                            - vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__zi2) 
                                           + vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__x))),25);
            tracep->chgIData(oldp+129,(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__zr2),25);
            tracep->chgIData(oldp+130,(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__zi2),25);
            tracep->chgIData(oldp+131,(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__distance),25);
            tracep->chgIData(oldp+132,((0x1ffffffU 
                                        & (IData)((0x3fffffffULL 
                                                   & (VL_MULS_QQQ(50,50,50, 0x199aULL, 
                                                                  (0x3ffffffffffffULL 
                                                                   & VL_EXTENDS_QI(50,25, 
                                                                                (0x1ffffffU 
                                                                                & (vlTOPp->top__DOT__x
                                                                                [2U] 
                                                                                << 0xeU))))) 
                                                      >> 0x14U))))),25);
            tracep->chgIData(oldp+133,((0x1ffffffU 
                                        & (IData)((0x3fffffffULL 
                                                   & (VL_MULS_QQQ(50,50,50, 0x199aULL, 
                                                                  (0x3ffffffffffffULL 
                                                                   & VL_EXTENDS_QI(50,25, 
                                                                                (0x1ffffffU 
                                                                                & (vlTOPp->top__DOT__y
                                                                                [2U] 
                                                                                << 0xeU))))) 
                                                      >> 0x14U))))),25);
            tracep->chgIData(oldp+134,((0x1ffffffU 
                                        & (vlTOPp->top__DOT__x
                                           [2U] << 0xeU))),25);
            tracep->chgIData(oldp+135,((0x1ffffffU 
                                        & (vlTOPp->top__DOT__y
                                           [2U] << 0xeU))),25);
            tracep->chgQData(oldp+136,((0x3ffffffffffffULL 
                                        & VL_MULS_QQQ(50,50,50, 0x199aULL, 
                                                      (0x3ffffffffffffULL 
                                                       & VL_EXTENDS_QI(50,25, 
                                                                       (0x1ffffffU 
                                                                        & (vlTOPp->top__DOT__x
                                                                           [2U] 
                                                                           << 0xeU))))))),50);
            tracep->chgQData(oldp+138,((0x3ffffffffffffULL 
                                        & VL_MULS_QQQ(50,50,50, 0x199aULL, 
                                                      (0x3ffffffffffffULL 
                                                       & VL_EXTENDS_QI(50,25, 
                                                                       (0x1ffffffU 
                                                                        & (vlTOPp->top__DOT__y
                                                                           [2U] 
                                                                           << 0xeU))))))),50);
            tracep->chgCData(oldp+140,((0x3fU & ((IData)(1U) 
                                                 + (IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__curr_iterations)))),6);
            tracep->chgQData(oldp+141,((0x3ffffffffffffULL 
                                        & VL_MULS_QQQ(50,50,50, 
                                                      (0x3ffffffffffffULL 
                                                       & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__zr)), 
                                                      (0x3ffffffffffffULL 
                                                       & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__zr))))),50);
            tracep->chgQData(oldp+143,((0x3ffffffffffffULL 
                                        & VL_MULS_QQQ(50,50,50, 
                                                      (0x3ffffffffffffULL 
                                                       & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__zi)), 
                                                      (0x3ffffffffffffULL 
                                                       & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__zi))))),50);
            tracep->chgQData(oldp+145,((0x3ffffffffffffULL 
                                        & VL_MULS_QQQ(50,50,50, 
                                                      (0x3ffffffffffffULL 
                                                       & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__zr)), 
                                                      (0x3ffffffffffffULL 
                                                       & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__zi))))),50);
            tracep->chgCData(oldp+147,(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__SM__DOT__state),2);
            tracep->chgSData(oldp+148,(vlTOPp->top__DOT__x
                                       [3U]),10);
            tracep->chgSData(oldp+149,(vlTOPp->top__DOT__y
                                       [3U]),10);
            tracep->chgCData(oldp+150,(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__curr_iterations),6);
            tracep->chgSData(oldp+151,(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.xpixel),10);
            tracep->chgSData(oldp+152,(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.ypixel),10);
            tracep->chgIData(oldp+153,(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__x),25);
            tracep->chgIData(oldp+154,(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__y),25);
            tracep->chgIData(oldp+155,(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__zr),25);
            tracep->chgIData(oldp+156,(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__zi),25);
            tracep->chgIData(oldp+157,((0x1ffffffU 
                                        & ((vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__zr2 
                                            - vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__zi2) 
                                           + vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__x))),25);
            tracep->chgIData(oldp+158,(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__zr2),25);
            tracep->chgIData(oldp+159,(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__zi2),25);
            tracep->chgIData(oldp+160,(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__distance),25);
            tracep->chgIData(oldp+161,((0x1ffffffU 
                                        & (IData)((0x3fffffffULL 
                                                   & (VL_MULS_QQQ(50,50,50, 0x199aULL, 
                                                                  (0x3ffffffffffffULL 
                                                                   & VL_EXTENDS_QI(50,25, 
                                                                                (0x1ffffffU 
                                                                                & (vlTOPp->top__DOT__x
                                                                                [3U] 
                                                                                << 0xeU))))) 
                                                      >> 0x14U))))),25);
            tracep->chgIData(oldp+162,((0x1ffffffU 
                                        & (IData)((0x3fffffffULL 
                                                   & (VL_MULS_QQQ(50,50,50, 0x199aULL, 
                                                                  (0x3ffffffffffffULL 
                                                                   & VL_EXTENDS_QI(50,25, 
                                                                                (0x1ffffffU 
                                                                                & (vlTOPp->top__DOT__y
                                                                                [3U] 
                                                                                << 0xeU))))) 
                                                      >> 0x14U))))),25);
            tracep->chgIData(oldp+163,((0x1ffffffU 
                                        & (vlTOPp->top__DOT__x
                                           [3U] << 0xeU))),25);
            tracep->chgIData(oldp+164,((0x1ffffffU 
                                        & (vlTOPp->top__DOT__y
                                           [3U] << 0xeU))),25);
            tracep->chgQData(oldp+165,((0x3ffffffffffffULL 
                                        & VL_MULS_QQQ(50,50,50, 0x199aULL, 
                                                      (0x3ffffffffffffULL 
                                                       & VL_EXTENDS_QI(50,25, 
                                                                       (0x1ffffffU 
                                                                        & (vlTOPp->top__DOT__x
                                                                           [3U] 
                                                                           << 0xeU))))))),50);
            tracep->chgQData(oldp+167,((0x3ffffffffffffULL 
                                        & VL_MULS_QQQ(50,50,50, 0x199aULL, 
                                                      (0x3ffffffffffffULL 
                                                       & VL_EXTENDS_QI(50,25, 
                                                                       (0x1ffffffU 
                                                                        & (vlTOPp->top__DOT__y
                                                                           [3U] 
                                                                           << 0xeU))))))),50);
            tracep->chgCData(oldp+169,((0x3fU & ((IData)(1U) 
                                                 + (IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__curr_iterations)))),6);
            tracep->chgQData(oldp+170,((0x3ffffffffffffULL 
                                        & VL_MULS_QQQ(50,50,50, 
                                                      (0x3ffffffffffffULL 
                                                       & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__zr)), 
                                                      (0x3ffffffffffffULL 
                                                       & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__zr))))),50);
            tracep->chgQData(oldp+172,((0x3ffffffffffffULL 
                                        & VL_MULS_QQQ(50,50,50, 
                                                      (0x3ffffffffffffULL 
                                                       & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__zi)), 
                                                      (0x3ffffffffffffULL 
                                                       & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__zi))))),50);
            tracep->chgQData(oldp+174,((0x3ffffffffffffULL 
                                        & VL_MULS_QQQ(50,50,50, 
                                                      (0x3ffffffffffffULL 
                                                       & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__zr)), 
                                                      (0x3ffffffffffffULL 
                                                       & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__zi))))),50);
            tracep->chgCData(oldp+176,(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__SM__DOT__state),2);
            tracep->chgSData(oldp+177,(vlTOPp->top__DOT__x
                                       [4U]),10);
            tracep->chgSData(oldp+178,(vlTOPp->top__DOT__y
                                       [4U]),10);
            tracep->chgCData(oldp+179,(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__curr_iterations),6);
            tracep->chgSData(oldp+180,(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.xpixel),10);
            tracep->chgSData(oldp+181,(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.ypixel),10);
            tracep->chgIData(oldp+182,(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__x),25);
            tracep->chgIData(oldp+183,(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__y),25);
            tracep->chgIData(oldp+184,(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__zr),25);
            tracep->chgIData(oldp+185,(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__zi),25);
            tracep->chgIData(oldp+186,((0x1ffffffU 
                                        & ((vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__zr2 
                                            - vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__zi2) 
                                           + vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__x))),25);
            tracep->chgIData(oldp+187,(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__zr2),25);
            tracep->chgIData(oldp+188,(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__zi2),25);
            tracep->chgIData(oldp+189,(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__distance),25);
            tracep->chgIData(oldp+190,((0x1ffffffU 
                                        & (IData)((0x3fffffffULL 
                                                   & (VL_MULS_QQQ(50,50,50, 0x199aULL, 
                                                                  (0x3ffffffffffffULL 
                                                                   & VL_EXTENDS_QI(50,25, 
                                                                                (0x1ffffffU 
                                                                                & (vlTOPp->top__DOT__x
                                                                                [4U] 
                                                                                << 0xeU))))) 
                                                      >> 0x14U))))),25);
            tracep->chgIData(oldp+191,((0x1ffffffU 
                                        & (IData)((0x3fffffffULL 
                                                   & (VL_MULS_QQQ(50,50,50, 0x199aULL, 
                                                                  (0x3ffffffffffffULL 
                                                                   & VL_EXTENDS_QI(50,25, 
                                                                                (0x1ffffffU 
                                                                                & (vlTOPp->top__DOT__y
                                                                                [4U] 
                                                                                << 0xeU))))) 
                                                      >> 0x14U))))),25);
            tracep->chgIData(oldp+192,((0x1ffffffU 
                                        & (vlTOPp->top__DOT__x
                                           [4U] << 0xeU))),25);
            tracep->chgIData(oldp+193,((0x1ffffffU 
                                        & (vlTOPp->top__DOT__y
                                           [4U] << 0xeU))),25);
            tracep->chgQData(oldp+194,((0x3ffffffffffffULL 
                                        & VL_MULS_QQQ(50,50,50, 0x199aULL, 
                                                      (0x3ffffffffffffULL 
                                                       & VL_EXTENDS_QI(50,25, 
                                                                       (0x1ffffffU 
                                                                        & (vlTOPp->top__DOT__x
                                                                           [4U] 
                                                                           << 0xeU))))))),50);
            tracep->chgQData(oldp+196,((0x3ffffffffffffULL 
                                        & VL_MULS_QQQ(50,50,50, 0x199aULL, 
                                                      (0x3ffffffffffffULL 
                                                       & VL_EXTENDS_QI(50,25, 
                                                                       (0x1ffffffU 
                                                                        & (vlTOPp->top__DOT__y
                                                                           [4U] 
                                                                           << 0xeU))))))),50);
            tracep->chgCData(oldp+198,((0x3fU & ((IData)(1U) 
                                                 + (IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__curr_iterations)))),6);
            tracep->chgQData(oldp+199,((0x3ffffffffffffULL 
                                        & VL_MULS_QQQ(50,50,50, 
                                                      (0x3ffffffffffffULL 
                                                       & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__zr)), 
                                                      (0x3ffffffffffffULL 
                                                       & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__zr))))),50);
            tracep->chgQData(oldp+201,((0x3ffffffffffffULL 
                                        & VL_MULS_QQQ(50,50,50, 
                                                      (0x3ffffffffffffULL 
                                                       & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__zi)), 
                                                      (0x3ffffffffffffULL 
                                                       & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__zi))))),50);
            tracep->chgQData(oldp+203,((0x3ffffffffffffULL 
                                        & VL_MULS_QQQ(50,50,50, 
                                                      (0x3ffffffffffffULL 
                                                       & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__zr)), 
                                                      (0x3ffffffffffffULL 
                                                       & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__zi))))),50);
            tracep->chgCData(oldp+205,(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__SM__DOT__state),2);
            tracep->chgSData(oldp+206,(vlTOPp->top__DOT__x
                                       [5U]),10);
            tracep->chgSData(oldp+207,(vlTOPp->top__DOT__y
                                       [5U]),10);
            tracep->chgCData(oldp+208,(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__curr_iterations),6);
            tracep->chgSData(oldp+209,(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.xpixel),10);
            tracep->chgSData(oldp+210,(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.ypixel),10);
            tracep->chgIData(oldp+211,(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__x),25);
            tracep->chgIData(oldp+212,(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__y),25);
            tracep->chgIData(oldp+213,(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__zr),25);
            tracep->chgIData(oldp+214,(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__zi),25);
            tracep->chgIData(oldp+215,((0x1ffffffU 
                                        & ((vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__zr2 
                                            - vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__zi2) 
                                           + vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__x))),25);
            tracep->chgIData(oldp+216,(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__zr2),25);
            tracep->chgIData(oldp+217,(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__zi2),25);
            tracep->chgIData(oldp+218,(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__distance),25);
            tracep->chgIData(oldp+219,((0x1ffffffU 
                                        & (IData)((0x3fffffffULL 
                                                   & (VL_MULS_QQQ(50,50,50, 0x199aULL, 
                                                                  (0x3ffffffffffffULL 
                                                                   & VL_EXTENDS_QI(50,25, 
                                                                                (0x1ffffffU 
                                                                                & (vlTOPp->top__DOT__x
                                                                                [5U] 
                                                                                << 0xeU))))) 
                                                      >> 0x14U))))),25);
            tracep->chgIData(oldp+220,((0x1ffffffU 
                                        & (IData)((0x3fffffffULL 
                                                   & (VL_MULS_QQQ(50,50,50, 0x199aULL, 
                                                                  (0x3ffffffffffffULL 
                                                                   & VL_EXTENDS_QI(50,25, 
                                                                                (0x1ffffffU 
                                                                                & (vlTOPp->top__DOT__y
                                                                                [5U] 
                                                                                << 0xeU))))) 
                                                      >> 0x14U))))),25);
            tracep->chgIData(oldp+221,((0x1ffffffU 
                                        & (vlTOPp->top__DOT__x
                                           [5U] << 0xeU))),25);
            tracep->chgIData(oldp+222,((0x1ffffffU 
                                        & (vlTOPp->top__DOT__y
                                           [5U] << 0xeU))),25);
            tracep->chgQData(oldp+223,((0x3ffffffffffffULL 
                                        & VL_MULS_QQQ(50,50,50, 0x199aULL, 
                                                      (0x3ffffffffffffULL 
                                                       & VL_EXTENDS_QI(50,25, 
                                                                       (0x1ffffffU 
                                                                        & (vlTOPp->top__DOT__x
                                                                           [5U] 
                                                                           << 0xeU))))))),50);
            tracep->chgQData(oldp+225,((0x3ffffffffffffULL 
                                        & VL_MULS_QQQ(50,50,50, 0x199aULL, 
                                                      (0x3ffffffffffffULL 
                                                       & VL_EXTENDS_QI(50,25, 
                                                                       (0x1ffffffU 
                                                                        & (vlTOPp->top__DOT__y
                                                                           [5U] 
                                                                           << 0xeU))))))),50);
            tracep->chgCData(oldp+227,((0x3fU & ((IData)(1U) 
                                                 + (IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__curr_iterations)))),6);
            tracep->chgQData(oldp+228,((0x3ffffffffffffULL 
                                        & VL_MULS_QQQ(50,50,50, 
                                                      (0x3ffffffffffffULL 
                                                       & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__zr)), 
                                                      (0x3ffffffffffffULL 
                                                       & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__zr))))),50);
            tracep->chgQData(oldp+230,((0x3ffffffffffffULL 
                                        & VL_MULS_QQQ(50,50,50, 
                                                      (0x3ffffffffffffULL 
                                                       & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__zi)), 
                                                      (0x3ffffffffffffULL 
                                                       & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__zi))))),50);
            tracep->chgQData(oldp+232,((0x3ffffffffffffULL 
                                        & VL_MULS_QQQ(50,50,50, 
                                                      (0x3ffffffffffffULL 
                                                       & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__zr)), 
                                                      (0x3ffffffffffffULL 
                                                       & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__zi))))),50);
            tracep->chgCData(oldp+234,(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__SM__DOT__state),2);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [1U] | vlTOPp->__Vm_traceActivity
                         [3U]))) {
            tracep->chgBit(oldp+235,((((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.en_pixel_map) 
                                       & (vlTOPp->top__DOT__x
                                          [0U] == (IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.xpixel))) 
                                      & (vlTOPp->top__DOT__y
                                         [0U] == (IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.ypixel)))));
            tracep->chgIData(oldp+236,((0x1ffffffU 
                                        & ((((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__init)
                                              ? 0U : 
                                             (0x1ffffffU 
                                              & (IData)(
                                                        (0x3fffffffULL 
                                                         & (VL_MULS_QQQ(50,50,50, 
                                                                        (0x3ffffffffffffULL 
                                                                         & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__zr)), 
                                                                        (0x3ffffffffffffULL 
                                                                         & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__zi))) 
                                                            >> 0x14U))))) 
                                            << 1U) 
                                           + vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__y))),25);
            tracep->chgIData(oldp+237,(((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__init)
                                         ? 0U : (0x1ffffffU 
                                                 & (IData)(
                                                           (0x3fffffffULL 
                                                            & (VL_MULS_QQQ(50,50,50, 
                                                                           (0x3ffffffffffffULL 
                                                                            & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__zr)), 
                                                                           (0x3ffffffffffffULL 
                                                                            & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__zr))) 
                                                               >> 0x14U)))))),25);
            tracep->chgIData(oldp+238,(((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__init)
                                         ? 0U : (0x1ffffffU 
                                                 & (IData)(
                                                           (0x3fffffffULL 
                                                            & (VL_MULS_QQQ(50,50,50, 
                                                                           (0x3ffffffffffffULL 
                                                                            & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__zi)), 
                                                                           (0x3ffffffffffffULL 
                                                                            & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__zi))) 
                                                               >> 0x14U)))))),25);
            tracep->chgIData(oldp+239,(((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__init)
                                         ? 0U : (0x1ffffffU 
                                                 & (IData)(
                                                           (0x3fffffffULL 
                                                            & (VL_MULS_QQQ(50,50,50, 
                                                                           (0x3ffffffffffffULL 
                                                                            & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__zr)), 
                                                                           (0x3ffffffffffffULL 
                                                                            & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__zi))) 
                                                               >> 0x14U)))))),25);
            tracep->chgBit(oldp+240,((((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.en_pixel_map) 
                                       & (vlTOPp->top__DOT__x
                                          [1U] == (IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.xpixel))) 
                                      & (vlTOPp->top__DOT__y
                                         [1U] == (IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.ypixel)))));
            tracep->chgIData(oldp+241,((0x1ffffffU 
                                        & ((((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__init)
                                              ? 0U : 
                                             (0x1ffffffU 
                                              & (IData)(
                                                        (0x3fffffffULL 
                                                         & (VL_MULS_QQQ(50,50,50, 
                                                                        (0x3ffffffffffffULL 
                                                                         & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__zr)), 
                                                                        (0x3ffffffffffffULL 
                                                                         & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__zi))) 
                                                            >> 0x14U))))) 
                                            << 1U) 
                                           + vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__y))),25);
            tracep->chgIData(oldp+242,(((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__init)
                                         ? 0U : (0x1ffffffU 
                                                 & (IData)(
                                                           (0x3fffffffULL 
                                                            & (VL_MULS_QQQ(50,50,50, 
                                                                           (0x3ffffffffffffULL 
                                                                            & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__zr)), 
                                                                           (0x3ffffffffffffULL 
                                                                            & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__zr))) 
                                                               >> 0x14U)))))),25);
            tracep->chgIData(oldp+243,(((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__init)
                                         ? 0U : (0x1ffffffU 
                                                 & (IData)(
                                                           (0x3fffffffULL 
                                                            & (VL_MULS_QQQ(50,50,50, 
                                                                           (0x3ffffffffffffULL 
                                                                            & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__zi)), 
                                                                           (0x3ffffffffffffULL 
                                                                            & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__zi))) 
                                                               >> 0x14U)))))),25);
            tracep->chgIData(oldp+244,(((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__init)
                                         ? 0U : (0x1ffffffU 
                                                 & (IData)(
                                                           (0x3fffffffULL 
                                                            & (VL_MULS_QQQ(50,50,50, 
                                                                           (0x3ffffffffffffULL 
                                                                            & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__zr)), 
                                                                           (0x3ffffffffffffULL 
                                                                            & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__zi))) 
                                                               >> 0x14U)))))),25);
            tracep->chgBit(oldp+245,((((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.en_pixel_map) 
                                       & (vlTOPp->top__DOT__x
                                          [2U] == (IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.xpixel))) 
                                      & (vlTOPp->top__DOT__y
                                         [2U] == (IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.ypixel)))));
            tracep->chgIData(oldp+246,((0x1ffffffU 
                                        & ((((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__init)
                                              ? 0U : 
                                             (0x1ffffffU 
                                              & (IData)(
                                                        (0x3fffffffULL 
                                                         & (VL_MULS_QQQ(50,50,50, 
                                                                        (0x3ffffffffffffULL 
                                                                         & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__zr)), 
                                                                        (0x3ffffffffffffULL 
                                                                         & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__zi))) 
                                                            >> 0x14U))))) 
                                            << 1U) 
                                           + vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__y))),25);
            tracep->chgIData(oldp+247,(((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__init)
                                         ? 0U : (0x1ffffffU 
                                                 & (IData)(
                                                           (0x3fffffffULL 
                                                            & (VL_MULS_QQQ(50,50,50, 
                                                                           (0x3ffffffffffffULL 
                                                                            & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__zr)), 
                                                                           (0x3ffffffffffffULL 
                                                                            & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__zr))) 
                                                               >> 0x14U)))))),25);
            tracep->chgIData(oldp+248,(((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__init)
                                         ? 0U : (0x1ffffffU 
                                                 & (IData)(
                                                           (0x3fffffffULL 
                                                            & (VL_MULS_QQQ(50,50,50, 
                                                                           (0x3ffffffffffffULL 
                                                                            & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__zi)), 
                                                                           (0x3ffffffffffffULL 
                                                                            & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__zi))) 
                                                               >> 0x14U)))))),25);
            tracep->chgIData(oldp+249,(((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__init)
                                         ? 0U : (0x1ffffffU 
                                                 & (IData)(
                                                           (0x3fffffffULL 
                                                            & (VL_MULS_QQQ(50,50,50, 
                                                                           (0x3ffffffffffffULL 
                                                                            & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__zr)), 
                                                                           (0x3ffffffffffffULL 
                                                                            & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__zi))) 
                                                               >> 0x14U)))))),25);
            tracep->chgBit(oldp+250,((((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.en_pixel_map) 
                                       & (vlTOPp->top__DOT__x
                                          [3U] == (IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.xpixel))) 
                                      & (vlTOPp->top__DOT__y
                                         [3U] == (IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.ypixel)))));
            tracep->chgIData(oldp+251,((0x1ffffffU 
                                        & ((((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__init)
                                              ? 0U : 
                                             (0x1ffffffU 
                                              & (IData)(
                                                        (0x3fffffffULL 
                                                         & (VL_MULS_QQQ(50,50,50, 
                                                                        (0x3ffffffffffffULL 
                                                                         & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__zr)), 
                                                                        (0x3ffffffffffffULL 
                                                                         & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__zi))) 
                                                            >> 0x14U))))) 
                                            << 1U) 
                                           + vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__y))),25);
            tracep->chgIData(oldp+252,(((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__init)
                                         ? 0U : (0x1ffffffU 
                                                 & (IData)(
                                                           (0x3fffffffULL 
                                                            & (VL_MULS_QQQ(50,50,50, 
                                                                           (0x3ffffffffffffULL 
                                                                            & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__zr)), 
                                                                           (0x3ffffffffffffULL 
                                                                            & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__zr))) 
                                                               >> 0x14U)))))),25);
            tracep->chgIData(oldp+253,(((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__init)
                                         ? 0U : (0x1ffffffU 
                                                 & (IData)(
                                                           (0x3fffffffULL 
                                                            & (VL_MULS_QQQ(50,50,50, 
                                                                           (0x3ffffffffffffULL 
                                                                            & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__zi)), 
                                                                           (0x3ffffffffffffULL 
                                                                            & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__zi))) 
                                                               >> 0x14U)))))),25);
            tracep->chgIData(oldp+254,(((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__init)
                                         ? 0U : (0x1ffffffU 
                                                 & (IData)(
                                                           (0x3fffffffULL 
                                                            & (VL_MULS_QQQ(50,50,50, 
                                                                           (0x3ffffffffffffULL 
                                                                            & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__zr)), 
                                                                           (0x3ffffffffffffULL 
                                                                            & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__zi))) 
                                                               >> 0x14U)))))),25);
            tracep->chgBit(oldp+255,((((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.en_pixel_map) 
                                       & (vlTOPp->top__DOT__x
                                          [4U] == (IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.xpixel))) 
                                      & (vlTOPp->top__DOT__y
                                         [4U] == (IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.ypixel)))));
            tracep->chgIData(oldp+256,((0x1ffffffU 
                                        & ((((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__init)
                                              ? 0U : 
                                             (0x1ffffffU 
                                              & (IData)(
                                                        (0x3fffffffULL 
                                                         & (VL_MULS_QQQ(50,50,50, 
                                                                        (0x3ffffffffffffULL 
                                                                         & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__zr)), 
                                                                        (0x3ffffffffffffULL 
                                                                         & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__zi))) 
                                                            >> 0x14U))))) 
                                            << 1U) 
                                           + vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__y))),25);
            tracep->chgIData(oldp+257,(((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__init)
                                         ? 0U : (0x1ffffffU 
                                                 & (IData)(
                                                           (0x3fffffffULL 
                                                            & (VL_MULS_QQQ(50,50,50, 
                                                                           (0x3ffffffffffffULL 
                                                                            & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__zr)), 
                                                                           (0x3ffffffffffffULL 
                                                                            & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__zr))) 
                                                               >> 0x14U)))))),25);
            tracep->chgIData(oldp+258,(((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__init)
                                         ? 0U : (0x1ffffffU 
                                                 & (IData)(
                                                           (0x3fffffffULL 
                                                            & (VL_MULS_QQQ(50,50,50, 
                                                                           (0x3ffffffffffffULL 
                                                                            & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__zi)), 
                                                                           (0x3ffffffffffffULL 
                                                                            & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__zi))) 
                                                               >> 0x14U)))))),25);
            tracep->chgIData(oldp+259,(((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__init)
                                         ? 0U : (0x1ffffffU 
                                                 & (IData)(
                                                           (0x3fffffffULL 
                                                            & (VL_MULS_QQQ(50,50,50, 
                                                                           (0x3ffffffffffffULL 
                                                                            & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__zr)), 
                                                                           (0x3ffffffffffffULL 
                                                                            & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__zi))) 
                                                               >> 0x14U)))))),25);
            tracep->chgBit(oldp+260,((((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.en_pixel_map) 
                                       & (vlTOPp->top__DOT__x
                                          [5U] == (IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.xpixel))) 
                                      & (vlTOPp->top__DOT__y
                                         [5U] == (IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.ypixel)))));
            tracep->chgIData(oldp+261,((0x1ffffffU 
                                        & ((((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__init)
                                              ? 0U : 
                                             (0x1ffffffU 
                                              & (IData)(
                                                        (0x3fffffffULL 
                                                         & (VL_MULS_QQQ(50,50,50, 
                                                                        (0x3ffffffffffffULL 
                                                                         & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__zr)), 
                                                                        (0x3ffffffffffffULL 
                                                                         & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__zi))) 
                                                            >> 0x14U))))) 
                                            << 1U) 
                                           + vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__y))),25);
            tracep->chgIData(oldp+262,(((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__init)
                                         ? 0U : (0x1ffffffU 
                                                 & (IData)(
                                                           (0x3fffffffULL 
                                                            & (VL_MULS_QQQ(50,50,50, 
                                                                           (0x3ffffffffffffULL 
                                                                            & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__zr)), 
                                                                           (0x3ffffffffffffULL 
                                                                            & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__zr))) 
                                                               >> 0x14U)))))),25);
            tracep->chgIData(oldp+263,(((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__init)
                                         ? 0U : (0x1ffffffU 
                                                 & (IData)(
                                                           (0x3fffffffULL 
                                                            & (VL_MULS_QQQ(50,50,50, 
                                                                           (0x3ffffffffffffULL 
                                                                            & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__zi)), 
                                                                           (0x3ffffffffffffULL 
                                                                            & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__zi))) 
                                                               >> 0x14U)))))),25);
            tracep->chgIData(oldp+264,(((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__init)
                                         ? 0U : (0x1ffffffU 
                                                 & (IData)(
                                                           (0x3fffffffULL 
                                                            & (VL_MULS_QQQ(50,50,50, 
                                                                           (0x3ffffffffffffULL 
                                                                            & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__zr)), 
                                                                           (0x3ffffffffffffULL 
                                                                            & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__zi))) 
                                                               >> 0x14U)))))),25);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[2U])) {
            tracep->chgIData(oldp+265,(vlTOPp->top__DOT__colour_bus_o[0]),24);
            tracep->chgIData(oldp+266,(vlTOPp->top__DOT__colour_bus_o[1]),24);
            tracep->chgIData(oldp+267,(vlTOPp->top__DOT__colour_bus_o[2]),24);
            tracep->chgIData(oldp+268,(vlTOPp->top__DOT__colour_bus_o[3]),24);
            tracep->chgIData(oldp+269,(vlTOPp->top__DOT__colour_bus_o[4]),24);
            tracep->chgIData(oldp+270,(vlTOPp->top__DOT__colour_bus_o[5]),24);
            tracep->chgIData(oldp+271,(vlTOPp->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__queue_block__colour_o),24);
            tracep->chgIData(oldp+272,(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__unnamedblk3__DOT__i),32);
            tracep->chgIData(oldp+273,(vlTOPp->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__queue_block__colour_o),24);
            tracep->chgIData(oldp+274,(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__unnamedblk3__DOT__i),32);
            tracep->chgIData(oldp+275,(vlTOPp->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__queue_block__colour_o),24);
            tracep->chgIData(oldp+276,(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__unnamedblk3__DOT__i),32);
            tracep->chgIData(oldp+277,(vlTOPp->top__DOT____Vcellout__genblk1__BRA__3__KET____DOT__queue_block__colour_o),24);
            tracep->chgIData(oldp+278,(vlTOPp->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__unnamedblk3__DOT__i),32);
            tracep->chgIData(oldp+279,(vlTOPp->top__DOT____Vcellout__genblk1__BRA__4__KET____DOT__queue_block__colour_o),24);
            tracep->chgIData(oldp+280,(vlTOPp->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__unnamedblk3__DOT__i),32);
            tracep->chgIData(oldp+281,(vlTOPp->top__DOT____Vcellout__genblk1__BRA__5__KET____DOT__queue_block__colour_o),24);
            tracep->chgIData(oldp+282,(vlTOPp->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__unnamedblk3__DOT__i),32);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[3U])) {
            tracep->chgCData(oldp+283,(vlTOPp->top__DOT__fin_bus),6);
            tracep->chgBit(oldp+284,((1U & (IData)(vlTOPp->top__DOT__fin_bus))));
            tracep->chgBit(oldp+285,((1U & ((IData)(vlTOPp->top__DOT__fin_bus) 
                                            >> 1U))));
            tracep->chgBit(oldp+286,((1U & ((IData)(vlTOPp->top__DOT__fin_bus) 
                                            >> 2U))));
            tracep->chgBit(oldp+287,((1U & ((IData)(vlTOPp->top__DOT__fin_bus) 
                                            >> 3U))));
            tracep->chgBit(oldp+288,((1U & ((IData)(vlTOPp->top__DOT__fin_bus) 
                                            >> 4U))));
            tracep->chgBit(oldp+289,((1U & ((IData)(vlTOPp->top__DOT__fin_bus) 
                                            >> 5U))));
            tracep->chgBit(oldp+290,(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.en_pixel_map));
            tracep->chgBit(oldp+291,(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__en_stage_1));
            tracep->chgBit(oldp+292,(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__en_stage_2));
            tracep->chgBit(oldp+293,(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__init));
            tracep->chgCData(oldp+294,(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__SM__DOT__next),2);
            tracep->chgBit(oldp+295,(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.en_pixel_map));
            tracep->chgBit(oldp+296,(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__en_stage_1));
            tracep->chgBit(oldp+297,(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__en_stage_2));
            tracep->chgBit(oldp+298,(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__init));
            tracep->chgCData(oldp+299,(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__SM__DOT__next),2);
            tracep->chgBit(oldp+300,(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.en_pixel_map));
            tracep->chgBit(oldp+301,(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__en_stage_1));
            tracep->chgBit(oldp+302,(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__en_stage_2));
            tracep->chgBit(oldp+303,(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__init));
            tracep->chgCData(oldp+304,(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__SM__DOT__next),2);
            tracep->chgBit(oldp+305,(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.en_pixel_map));
            tracep->chgBit(oldp+306,(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__en_stage_1));
            tracep->chgBit(oldp+307,(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__en_stage_2));
            tracep->chgBit(oldp+308,(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__init));
            tracep->chgCData(oldp+309,(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__SM__DOT__next),2);
            tracep->chgBit(oldp+310,(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.en_pixel_map));
            tracep->chgBit(oldp+311,(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__en_stage_1));
            tracep->chgBit(oldp+312,(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__en_stage_2));
            tracep->chgBit(oldp+313,(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__init));
            tracep->chgCData(oldp+314,(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__SM__DOT__next),2);
            tracep->chgBit(oldp+315,(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.en_pixel_map));
            tracep->chgBit(oldp+316,(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__en_stage_1));
            tracep->chgBit(oldp+317,(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__en_stage_2));
            tracep->chgBit(oldp+318,(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__init));
            tracep->chgCData(oldp+319,(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__SM__DOT__next),2);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[4U])) {
            tracep->chgSData(oldp+320,(vlTOPp->top__DOT__xpixel_bus[0]),10);
            tracep->chgSData(oldp+321,(vlTOPp->top__DOT__xpixel_bus[1]),10);
            tracep->chgSData(oldp+322,(vlTOPp->top__DOT__xpixel_bus[2]),10);
            tracep->chgSData(oldp+323,(vlTOPp->top__DOT__xpixel_bus[3]),10);
            tracep->chgSData(oldp+324,(vlTOPp->top__DOT__xpixel_bus[4]),10);
            tracep->chgSData(oldp+325,(vlTOPp->top__DOT__xpixel_bus[5]),10);
            tracep->chgSData(oldp+326,(vlTOPp->top__DOT__ypixel_bus[0]),10);
            tracep->chgSData(oldp+327,(vlTOPp->top__DOT__ypixel_bus[1]),10);
            tracep->chgSData(oldp+328,(vlTOPp->top__DOT__ypixel_bus[2]),10);
            tracep->chgSData(oldp+329,(vlTOPp->top__DOT__ypixel_bus[3]),10);
            tracep->chgSData(oldp+330,(vlTOPp->top__DOT__ypixel_bus[4]),10);
            tracep->chgSData(oldp+331,(vlTOPp->top__DOT__ypixel_bus[5]),10);
            tracep->chgIData(oldp+332,(vlTOPp->top__DOT__colour_bus_i[0]),24);
            tracep->chgIData(oldp+333,(vlTOPp->top__DOT__colour_bus_i[1]),24);
            tracep->chgIData(oldp+334,(vlTOPp->top__DOT__colour_bus_i[2]),24);
            tracep->chgIData(oldp+335,(vlTOPp->top__DOT__colour_bus_i[3]),24);
            tracep->chgIData(oldp+336,(vlTOPp->top__DOT__colour_bus_i[4]),24);
            tracep->chgIData(oldp+337,(vlTOPp->top__DOT__colour_bus_i[5]),24);
            tracep->chgIData(oldp+338,(vlTOPp->top__DOT__colour_bus_i
                                       [0U]),24);
            tracep->chgSData(oldp+339,(vlTOPp->top__DOT__xpixel_bus
                                       [0U]),10);
            tracep->chgSData(oldp+340,(vlTOPp->top__DOT__ypixel_bus
                                       [0U]),10);
            tracep->chgSData(oldp+341,(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__prev_xpixel),10);
            tracep->chgIData(oldp+342,(vlTOPp->top__DOT__colour_bus_i
                                       [1U]),24);
            tracep->chgSData(oldp+343,(vlTOPp->top__DOT__xpixel_bus
                                       [1U]),10);
            tracep->chgSData(oldp+344,(vlTOPp->top__DOT__ypixel_bus
                                       [1U]),10);
            tracep->chgSData(oldp+345,(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__prev_xpixel),10);
            tracep->chgIData(oldp+346,(vlTOPp->top__DOT__colour_bus_i
                                       [2U]),24);
            tracep->chgSData(oldp+347,(vlTOPp->top__DOT__xpixel_bus
                                       [2U]),10);
            tracep->chgSData(oldp+348,(vlTOPp->top__DOT__ypixel_bus
                                       [2U]),10);
            tracep->chgSData(oldp+349,(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__prev_xpixel),10);
            tracep->chgIData(oldp+350,(vlTOPp->top__DOT__colour_bus_i
                                       [3U]),24);
            tracep->chgSData(oldp+351,(vlTOPp->top__DOT__xpixel_bus
                                       [3U]),10);
            tracep->chgSData(oldp+352,(vlTOPp->top__DOT__ypixel_bus
                                       [3U]),10);
            tracep->chgSData(oldp+353,(vlTOPp->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__prev_xpixel),10);
            tracep->chgIData(oldp+354,(vlTOPp->top__DOT__colour_bus_i
                                       [4U]),24);
            tracep->chgSData(oldp+355,(vlTOPp->top__DOT__xpixel_bus
                                       [4U]),10);
            tracep->chgSData(oldp+356,(vlTOPp->top__DOT__ypixel_bus
                                       [4U]),10);
            tracep->chgSData(oldp+357,(vlTOPp->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__prev_xpixel),10);
            tracep->chgIData(oldp+358,(vlTOPp->top__DOT__colour_bus_i
                                       [5U]),24);
            tracep->chgSData(oldp+359,(vlTOPp->top__DOT__xpixel_bus
                                       [5U]),10);
            tracep->chgSData(oldp+360,(vlTOPp->top__DOT__ypixel_bus
                                       [5U]),10);
            tracep->chgSData(oldp+361,(vlTOPp->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__prev_xpixel),10);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[5U])) {
            tracep->chgBit(oldp+362,((0x3fU == (IData)(vlTOPp->top__DOT__en_bus))));
            tracep->chgCData(oldp+363,(vlTOPp->top__DOT__en_bus),6);
            tracep->chgCData(oldp+364,(vlTOPp->top__DOT__full_queue_bus),6);
            tracep->chgCData(oldp+365,(vlTOPp->top__DOT__match_bus),6);
            tracep->chgIData(oldp+366,(vlTOPp->top__DOT__j),32);
            tracep->chgBit(oldp+367,(vlTOPp->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__queue_block__full_queue));
            tracep->chgBit(oldp+368,(vlTOPp->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__queue_block__en));
            tracep->chgBit(oldp+369,(vlTOPp->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__queue_block__match));
            tracep->chgIData(oldp+370,(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[0]),24);
            tracep->chgIData(oldp+371,(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[1]),24);
            tracep->chgIData(oldp+372,(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[2]),24);
            tracep->chgIData(oldp+373,(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[3]),24);
            tracep->chgIData(oldp+374,(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[4]),24);
            tracep->chgIData(oldp+375,(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[5]),24);
            tracep->chgIData(oldp+376,(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[6]),24);
            tracep->chgIData(oldp+377,(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[7]),24);
            tracep->chgIData(oldp+378,(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[8]),24);
            tracep->chgIData(oldp+379,(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[9]),24);
            tracep->chgSData(oldp+380,(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[0]),10);
            tracep->chgSData(oldp+381,(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[1]),10);
            tracep->chgSData(oldp+382,(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[2]),10);
            tracep->chgSData(oldp+383,(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[3]),10);
            tracep->chgSData(oldp+384,(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[4]),10);
            tracep->chgSData(oldp+385,(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[5]),10);
            tracep->chgSData(oldp+386,(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[6]),10);
            tracep->chgSData(oldp+387,(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[7]),10);
            tracep->chgSData(oldp+388,(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[8]),10);
            tracep->chgSData(oldp+389,(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[9]),10);
            tracep->chgSData(oldp+390,(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[0]),10);
            tracep->chgSData(oldp+391,(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[1]),10);
            tracep->chgSData(oldp+392,(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[2]),10);
            tracep->chgSData(oldp+393,(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[3]),10);
            tracep->chgSData(oldp+394,(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[4]),10);
            tracep->chgSData(oldp+395,(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[5]),10);
            tracep->chgSData(oldp+396,(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[6]),10);
            tracep->chgSData(oldp+397,(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[7]),10);
            tracep->chgSData(oldp+398,(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[8]),10);
            tracep->chgSData(oldp+399,(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[9]),10);
            tracep->chgCData(oldp+400,(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__counter),4);
            tracep->chgBit(oldp+401,(vlTOPp->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__queue_block__full_queue));
            tracep->chgBit(oldp+402,(vlTOPp->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__queue_block__en));
            tracep->chgBit(oldp+403,(vlTOPp->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__queue_block__match));
            tracep->chgIData(oldp+404,(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[0]),24);
            tracep->chgIData(oldp+405,(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[1]),24);
            tracep->chgIData(oldp+406,(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[2]),24);
            tracep->chgIData(oldp+407,(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[3]),24);
            tracep->chgIData(oldp+408,(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[4]),24);
            tracep->chgIData(oldp+409,(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[5]),24);
            tracep->chgIData(oldp+410,(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[6]),24);
            tracep->chgIData(oldp+411,(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[7]),24);
            tracep->chgIData(oldp+412,(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[8]),24);
            tracep->chgIData(oldp+413,(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[9]),24);
            tracep->chgSData(oldp+414,(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[0]),10);
            tracep->chgSData(oldp+415,(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[1]),10);
            tracep->chgSData(oldp+416,(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[2]),10);
            tracep->chgSData(oldp+417,(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[3]),10);
            tracep->chgSData(oldp+418,(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[4]),10);
            tracep->chgSData(oldp+419,(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[5]),10);
            tracep->chgSData(oldp+420,(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[6]),10);
            tracep->chgSData(oldp+421,(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[7]),10);
            tracep->chgSData(oldp+422,(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[8]),10);
            tracep->chgSData(oldp+423,(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[9]),10);
            tracep->chgSData(oldp+424,(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[0]),10);
            tracep->chgSData(oldp+425,(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[1]),10);
            tracep->chgSData(oldp+426,(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[2]),10);
            tracep->chgSData(oldp+427,(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[3]),10);
            tracep->chgSData(oldp+428,(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[4]),10);
            tracep->chgSData(oldp+429,(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[5]),10);
            tracep->chgSData(oldp+430,(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[6]),10);
            tracep->chgSData(oldp+431,(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[7]),10);
            tracep->chgSData(oldp+432,(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[8]),10);
            tracep->chgSData(oldp+433,(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[9]),10);
            tracep->chgCData(oldp+434,(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__counter),4);
            tracep->chgBit(oldp+435,(vlTOPp->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__queue_block__full_queue));
            tracep->chgBit(oldp+436,(vlTOPp->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__queue_block__en));
            tracep->chgBit(oldp+437,(vlTOPp->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__queue_block__match));
            tracep->chgIData(oldp+438,(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[0]),24);
            tracep->chgIData(oldp+439,(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[1]),24);
            tracep->chgIData(oldp+440,(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[2]),24);
            tracep->chgIData(oldp+441,(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[3]),24);
            tracep->chgIData(oldp+442,(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[4]),24);
            tracep->chgIData(oldp+443,(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[5]),24);
            tracep->chgIData(oldp+444,(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[6]),24);
            tracep->chgIData(oldp+445,(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[7]),24);
            tracep->chgIData(oldp+446,(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[8]),24);
            tracep->chgIData(oldp+447,(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[9]),24);
            tracep->chgSData(oldp+448,(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[0]),10);
            tracep->chgSData(oldp+449,(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[1]),10);
            tracep->chgSData(oldp+450,(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[2]),10);
            tracep->chgSData(oldp+451,(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[3]),10);
            tracep->chgSData(oldp+452,(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[4]),10);
            tracep->chgSData(oldp+453,(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[5]),10);
            tracep->chgSData(oldp+454,(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[6]),10);
            tracep->chgSData(oldp+455,(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[7]),10);
            tracep->chgSData(oldp+456,(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[8]),10);
            tracep->chgSData(oldp+457,(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[9]),10);
            tracep->chgSData(oldp+458,(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[0]),10);
            tracep->chgSData(oldp+459,(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[1]),10);
            tracep->chgSData(oldp+460,(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[2]),10);
            tracep->chgSData(oldp+461,(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[3]),10);
            tracep->chgSData(oldp+462,(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[4]),10);
            tracep->chgSData(oldp+463,(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[5]),10);
            tracep->chgSData(oldp+464,(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[6]),10);
            tracep->chgSData(oldp+465,(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[7]),10);
            tracep->chgSData(oldp+466,(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[8]),10);
            tracep->chgSData(oldp+467,(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[9]),10);
            tracep->chgCData(oldp+468,(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__counter),4);
            tracep->chgBit(oldp+469,(vlTOPp->top__DOT____Vcellout__genblk1__BRA__3__KET____DOT__queue_block__full_queue));
            tracep->chgBit(oldp+470,(vlTOPp->top__DOT____Vcellout__genblk1__BRA__3__KET____DOT__queue_block__en));
            tracep->chgBit(oldp+471,(vlTOPp->top__DOT____Vcellout__genblk1__BRA__3__KET____DOT__queue_block__match));
            tracep->chgIData(oldp+472,(vlTOPp->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue[0]),24);
            tracep->chgIData(oldp+473,(vlTOPp->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue[1]),24);
            tracep->chgIData(oldp+474,(vlTOPp->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue[2]),24);
            tracep->chgIData(oldp+475,(vlTOPp->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue[3]),24);
            tracep->chgIData(oldp+476,(vlTOPp->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue[4]),24);
            tracep->chgIData(oldp+477,(vlTOPp->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue[5]),24);
            tracep->chgIData(oldp+478,(vlTOPp->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue[6]),24);
            tracep->chgIData(oldp+479,(vlTOPp->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue[7]),24);
            tracep->chgIData(oldp+480,(vlTOPp->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue[8]),24);
            tracep->chgIData(oldp+481,(vlTOPp->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue[9]),24);
            tracep->chgSData(oldp+482,(vlTOPp->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue[0]),10);
            tracep->chgSData(oldp+483,(vlTOPp->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue[1]),10);
            tracep->chgSData(oldp+484,(vlTOPp->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue[2]),10);
            tracep->chgSData(oldp+485,(vlTOPp->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue[3]),10);
            tracep->chgSData(oldp+486,(vlTOPp->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue[4]),10);
            tracep->chgSData(oldp+487,(vlTOPp->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue[5]),10);
            tracep->chgSData(oldp+488,(vlTOPp->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue[6]),10);
            tracep->chgSData(oldp+489,(vlTOPp->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue[7]),10);
            tracep->chgSData(oldp+490,(vlTOPp->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue[8]),10);
            tracep->chgSData(oldp+491,(vlTOPp->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue[9]),10);
            tracep->chgSData(oldp+492,(vlTOPp->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue[0]),10);
            tracep->chgSData(oldp+493,(vlTOPp->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue[1]),10);
            tracep->chgSData(oldp+494,(vlTOPp->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue[2]),10);
            tracep->chgSData(oldp+495,(vlTOPp->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue[3]),10);
            tracep->chgSData(oldp+496,(vlTOPp->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue[4]),10);
            tracep->chgSData(oldp+497,(vlTOPp->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue[5]),10);
            tracep->chgSData(oldp+498,(vlTOPp->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue[6]),10);
            tracep->chgSData(oldp+499,(vlTOPp->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue[7]),10);
            tracep->chgSData(oldp+500,(vlTOPp->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue[8]),10);
            tracep->chgSData(oldp+501,(vlTOPp->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue[9]),10);
            tracep->chgCData(oldp+502,(vlTOPp->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__counter),4);
            tracep->chgBit(oldp+503,(vlTOPp->top__DOT____Vcellout__genblk1__BRA__4__KET____DOT__queue_block__full_queue));
            tracep->chgBit(oldp+504,(vlTOPp->top__DOT____Vcellout__genblk1__BRA__4__KET____DOT__queue_block__en));
            tracep->chgBit(oldp+505,(vlTOPp->top__DOT____Vcellout__genblk1__BRA__4__KET____DOT__queue_block__match));
            tracep->chgIData(oldp+506,(vlTOPp->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue[0]),24);
            tracep->chgIData(oldp+507,(vlTOPp->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue[1]),24);
            tracep->chgIData(oldp+508,(vlTOPp->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue[2]),24);
            tracep->chgIData(oldp+509,(vlTOPp->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue[3]),24);
            tracep->chgIData(oldp+510,(vlTOPp->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue[4]),24);
            tracep->chgIData(oldp+511,(vlTOPp->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue[5]),24);
            tracep->chgIData(oldp+512,(vlTOPp->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue[6]),24);
            tracep->chgIData(oldp+513,(vlTOPp->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue[7]),24);
            tracep->chgIData(oldp+514,(vlTOPp->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue[8]),24);
            tracep->chgIData(oldp+515,(vlTOPp->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue[9]),24);
            tracep->chgSData(oldp+516,(vlTOPp->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue[0]),10);
            tracep->chgSData(oldp+517,(vlTOPp->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue[1]),10);
            tracep->chgSData(oldp+518,(vlTOPp->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue[2]),10);
            tracep->chgSData(oldp+519,(vlTOPp->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue[3]),10);
            tracep->chgSData(oldp+520,(vlTOPp->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue[4]),10);
            tracep->chgSData(oldp+521,(vlTOPp->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue[5]),10);
            tracep->chgSData(oldp+522,(vlTOPp->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue[6]),10);
            tracep->chgSData(oldp+523,(vlTOPp->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue[7]),10);
            tracep->chgSData(oldp+524,(vlTOPp->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue[8]),10);
            tracep->chgSData(oldp+525,(vlTOPp->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue[9]),10);
            tracep->chgSData(oldp+526,(vlTOPp->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue[0]),10);
            tracep->chgSData(oldp+527,(vlTOPp->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue[1]),10);
            tracep->chgSData(oldp+528,(vlTOPp->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue[2]),10);
            tracep->chgSData(oldp+529,(vlTOPp->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue[3]),10);
            tracep->chgSData(oldp+530,(vlTOPp->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue[4]),10);
            tracep->chgSData(oldp+531,(vlTOPp->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue[5]),10);
            tracep->chgSData(oldp+532,(vlTOPp->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue[6]),10);
            tracep->chgSData(oldp+533,(vlTOPp->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue[7]),10);
            tracep->chgSData(oldp+534,(vlTOPp->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue[8]),10);
            tracep->chgSData(oldp+535,(vlTOPp->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue[9]),10);
            tracep->chgCData(oldp+536,(vlTOPp->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__counter),4);
            tracep->chgBit(oldp+537,(vlTOPp->top__DOT____Vcellout__genblk1__BRA__5__KET____DOT__queue_block__full_queue));
            tracep->chgBit(oldp+538,(vlTOPp->top__DOT____Vcellout__genblk1__BRA__5__KET____DOT__queue_block__en));
            tracep->chgBit(oldp+539,(vlTOPp->top__DOT____Vcellout__genblk1__BRA__5__KET____DOT__queue_block__match));
            tracep->chgIData(oldp+540,(vlTOPp->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue[0]),24);
            tracep->chgIData(oldp+541,(vlTOPp->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue[1]),24);
            tracep->chgIData(oldp+542,(vlTOPp->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue[2]),24);
            tracep->chgIData(oldp+543,(vlTOPp->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue[3]),24);
            tracep->chgIData(oldp+544,(vlTOPp->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue[4]),24);
            tracep->chgIData(oldp+545,(vlTOPp->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue[5]),24);
            tracep->chgIData(oldp+546,(vlTOPp->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue[6]),24);
            tracep->chgIData(oldp+547,(vlTOPp->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue[7]),24);
            tracep->chgIData(oldp+548,(vlTOPp->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue[8]),24);
            tracep->chgIData(oldp+549,(vlTOPp->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue[9]),24);
            tracep->chgSData(oldp+550,(vlTOPp->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue[0]),10);
            tracep->chgSData(oldp+551,(vlTOPp->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue[1]),10);
            tracep->chgSData(oldp+552,(vlTOPp->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue[2]),10);
            tracep->chgSData(oldp+553,(vlTOPp->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue[3]),10);
            tracep->chgSData(oldp+554,(vlTOPp->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue[4]),10);
            tracep->chgSData(oldp+555,(vlTOPp->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue[5]),10);
            tracep->chgSData(oldp+556,(vlTOPp->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue[6]),10);
            tracep->chgSData(oldp+557,(vlTOPp->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue[7]),10);
            tracep->chgSData(oldp+558,(vlTOPp->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue[8]),10);
            tracep->chgSData(oldp+559,(vlTOPp->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue[9]),10);
            tracep->chgSData(oldp+560,(vlTOPp->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue[0]),10);
            tracep->chgSData(oldp+561,(vlTOPp->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue[1]),10);
            tracep->chgSData(oldp+562,(vlTOPp->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue[2]),10);
            tracep->chgSData(oldp+563,(vlTOPp->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue[3]),10);
            tracep->chgSData(oldp+564,(vlTOPp->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue[4]),10);
            tracep->chgSData(oldp+565,(vlTOPp->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue[5]),10);
            tracep->chgSData(oldp+566,(vlTOPp->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue[6]),10);
            tracep->chgSData(oldp+567,(vlTOPp->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue[7]),10);
            tracep->chgSData(oldp+568,(vlTOPp->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue[8]),10);
            tracep->chgSData(oldp+569,(vlTOPp->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue[9]),10);
            tracep->chgCData(oldp+570,(vlTOPp->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__counter),4);
            tracep->chgBit(oldp+571,((1U & (IData)(vlTOPp->top__DOT__full_queue_bus))));
            tracep->chgBit(oldp+572,((1U & ((IData)(vlTOPp->top__DOT__full_queue_bus) 
                                            >> 1U))));
            tracep->chgBit(oldp+573,((1U & ((IData)(vlTOPp->top__DOT__full_queue_bus) 
                                            >> 2U))));
            tracep->chgBit(oldp+574,((1U & ((IData)(vlTOPp->top__DOT__full_queue_bus) 
                                            >> 3U))));
            tracep->chgBit(oldp+575,((1U & ((IData)(vlTOPp->top__DOT__full_queue_bus) 
                                            >> 4U))));
            tracep->chgBit(oldp+576,((1U & ((IData)(vlTOPp->top__DOT__full_queue_bus) 
                                            >> 5U))));
        }
        tracep->chgBit(oldp+577,(vlTOPp->clk));
        tracep->chgBit(oldp+578,(vlTOPp->reset));
        tracep->chgBit(oldp+579,(vlTOPp->ready));
        tracep->chgIData(oldp+580,(vlTOPp->iterations_max),32);
        tracep->chgSData(oldp+581,(vlTOPp->zoom),10);
        tracep->chgSData(oldp+582,(vlTOPp->x_offset),10);
        tracep->chgSData(oldp+583,(vlTOPp->y_offset),10);
        tracep->chgCData(oldp+584,(vlTOPp->r),8);
        tracep->chgCData(oldp+585,(vlTOPp->g),8);
        tracep->chgCData(oldp+586,(vlTOPp->b),8);
        tracep->chgBit(oldp+587,(vlTOPp->first));
        tracep->chgBit(oldp+588,(vlTOPp->last_x));
        tracep->chgBit(oldp+589,(vlTOPp->last_y));
        tracep->chgBit(oldp+590,(vlTOPp->valid));
        tracep->chgBit(oldp+591,(((0x3fU == (IData)(vlTOPp->top__DOT__fin_bus)) 
                                  | (IData)(vlTOPp->reset))));
        tracep->chgIData(oldp+592,(((5U >= (7U & vlTOPp->top__DOT__j))
                                     ? vlTOPp->top__DOT__colour_bus_o
                                    [(7U & vlTOPp->top__DOT__j)]
                                     : 0U)),24);
        tracep->chgCData(oldp+593,((0x3fU & vlTOPp->iterations_max)),6);
        tracep->chgCData(oldp+594,((7U & (IData)(vlTOPp->zoom))),3);
        tracep->chgIData(oldp+595,(vlTOPp->x_offset),25);
        tracep->chgIData(oldp+596,(vlTOPp->y_offset),25);
        tracep->chgBit(oldp+597,(((VL_LTS_III(1,25,25, 0x400000U, vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__distance) 
                                   | ((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__curr_iterations) 
                                      == (0x3fU & vlTOPp->iterations_max))) 
                                  | VL_GTS_III(1,32,32, 0U, 
                                               VL_EXTENDS_II(32,25, vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__distance)))));
        tracep->chgIData(oldp+598,((0x1ffffffU & ((IData)(0x1e00000U) 
                                                  + (IData)(vlTOPp->x_offset)))),25);
        tracep->chgIData(oldp+599,((0x1ffffffU & ((IData)(0x1e80000U) 
                                                  + (IData)(vlTOPp->y_offset)))),25);
        tracep->chgBit(oldp+600,(((VL_LTS_III(1,25,25, 0x400000U, vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__distance) 
                                   | ((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__curr_iterations) 
                                      == (0x3fU & vlTOPp->iterations_max))) 
                                  | VL_GTS_III(1,32,32, 0U, 
                                               VL_EXTENDS_II(32,25, vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__distance)))));
        tracep->chgBit(oldp+601,(((VL_LTS_III(1,25,25, 0x400000U, vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__distance) 
                                   | ((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__curr_iterations) 
                                      == (0x3fU & vlTOPp->iterations_max))) 
                                  | VL_GTS_III(1,32,32, 0U, 
                                               VL_EXTENDS_II(32,25, vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__distance)))));
        tracep->chgBit(oldp+602,(((VL_LTS_III(1,25,25, 0x400000U, vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__distance) 
                                   | ((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__curr_iterations) 
                                      == (0x3fU & vlTOPp->iterations_max))) 
                                  | VL_GTS_III(1,32,32, 0U, 
                                               VL_EXTENDS_II(32,25, vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__distance)))));
        tracep->chgBit(oldp+603,(((VL_LTS_III(1,25,25, 0x400000U, vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__distance) 
                                   | ((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__curr_iterations) 
                                      == (0x3fU & vlTOPp->iterations_max))) 
                                  | VL_GTS_III(1,32,32, 0U, 
                                               VL_EXTENDS_II(32,25, vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__distance)))));
        tracep->chgBit(oldp+604,(((VL_LTS_III(1,25,25, 0x400000U, vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__distance) 
                                   | ((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__curr_iterations) 
                                      == (0x3fU & vlTOPp->iterations_max))) 
                                  | VL_GTS_III(1,32,32, 0U, 
                                               VL_EXTENDS_II(32,25, vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__distance)))));
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
        vlTOPp->__Vm_traceActivity[2U] = 0U;
        vlTOPp->__Vm_traceActivity[3U] = 0U;
        vlTOPp->__Vm_traceActivity[4U] = 0U;
        vlTOPp->__Vm_traceActivity[5U] = 0U;
    }
}
