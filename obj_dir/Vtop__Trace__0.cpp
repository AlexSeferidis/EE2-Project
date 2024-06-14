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
        bufp->chgSData(oldp+7,(vlSelf->top__DOT__xpixel_wire),10);
        bufp->chgSData(oldp+8,(vlSelf->top__DOT__ypixel_wire),10);
        bufp->chgSData(oldp+9,(vlSelf->top__DOT__x[0]),10);
        bufp->chgSData(oldp+10,(vlSelf->top__DOT__x[1]),10);
        bufp->chgSData(oldp+11,(vlSelf->top__DOT__x[2]),10);
        bufp->chgSData(oldp+12,(vlSelf->top__DOT__x[3]),10);
        bufp->chgSData(oldp+13,(vlSelf->top__DOT__x[4]),10);
        bufp->chgSData(oldp+14,(vlSelf->top__DOT__x[5]),10);
        bufp->chgSData(oldp+15,(vlSelf->top__DOT__y[0]),10);
        bufp->chgSData(oldp+16,(vlSelf->top__DOT__y[1]),10);
        bufp->chgSData(oldp+17,(vlSelf->top__DOT__y[2]),10);
        bufp->chgSData(oldp+18,(vlSelf->top__DOT__y[3]),10);
        bufp->chgSData(oldp+19,(vlSelf->top__DOT__y[4]),10);
        bufp->chgSData(oldp+20,(vlSelf->top__DOT__y[5]),10);
        bufp->chgIData(oldp+21,(vlSelf->top__DOT__iterations_bus[0]),32);
        bufp->chgIData(oldp+22,(vlSelf->top__DOT__iterations_bus[1]),32);
        bufp->chgIData(oldp+23,(vlSelf->top__DOT__iterations_bus[2]),32);
        bufp->chgIData(oldp+24,(vlSelf->top__DOT__iterations_bus[3]),32);
        bufp->chgIData(oldp+25,(vlSelf->top__DOT__iterations_bus[4]),32);
        bufp->chgIData(oldp+26,(vlSelf->top__DOT__iterations_bus[5]),32);
        bufp->chgSData(oldp+27,(vlSelf->top__DOT__combinator_block__DOT__xpixel),10);
        bufp->chgSData(oldp+28,(vlSelf->top__DOT__combinator_block__DOT__ypixel),10);
        bufp->chgSData(oldp+29,(vlSelf->top__DOT____Vcellout__distributor__x[0]),10);
        bufp->chgSData(oldp+30,(vlSelf->top__DOT____Vcellout__distributor__x[1]),10);
        bufp->chgSData(oldp+31,(vlSelf->top__DOT____Vcellout__distributor__x[2]),10);
        bufp->chgSData(oldp+32,(vlSelf->top__DOT____Vcellout__distributor__x[3]),10);
        bufp->chgSData(oldp+33,(vlSelf->top__DOT____Vcellout__distributor__x[4]),10);
        bufp->chgSData(oldp+34,(vlSelf->top__DOT____Vcellout__distributor__x[5]),10);
        bufp->chgSData(oldp+35,(vlSelf->top__DOT____Vcellout__distributor__y[0]),10);
        bufp->chgSData(oldp+36,(vlSelf->top__DOT____Vcellout__distributor__y[1]),10);
        bufp->chgSData(oldp+37,(vlSelf->top__DOT____Vcellout__distributor__y[2]),10);
        bufp->chgSData(oldp+38,(vlSelf->top__DOT____Vcellout__distributor__y[3]),10);
        bufp->chgSData(oldp+39,(vlSelf->top__DOT____Vcellout__distributor__y[4]),10);
        bufp->chgSData(oldp+40,(vlSelf->top__DOT____Vcellout__distributor__y[5]),10);
        bufp->chgSData(oldp+41,(vlSelf->top__DOT__distributor__DOT__x0),10);
        bufp->chgSData(oldp+42,(vlSelf->top__DOT__distributor__DOT__y0),10);
        bufp->chgIData(oldp+43,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__unnamedblk2__DOT__i),32);
        bufp->chgIData(oldp+44,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__unnamedblk2__DOT__i),32);
        bufp->chgIData(oldp+45,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__unnamedblk2__DOT__i),32);
        bufp->chgIData(oldp+46,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__unnamedblk2__DOT__i),32);
        bufp->chgIData(oldp+47,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__unnamedblk2__DOT__i),32);
        bufp->chgIData(oldp+48,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__unnamedblk2__DOT__i),32);
        bufp->chgIData(oldp+49,(vlSelf->top__DOT____Vcellinp__lut_rom__iterations[0]),32);
        bufp->chgIData(oldp+50,(vlSelf->top__DOT____Vcellinp__lut_rom__iterations[1]),32);
        bufp->chgIData(oldp+51,(vlSelf->top__DOT____Vcellinp__lut_rom__iterations[2]),32);
        bufp->chgIData(oldp+52,(vlSelf->top__DOT____Vcellinp__lut_rom__iterations[3]),32);
        bufp->chgIData(oldp+53,(vlSelf->top__DOT____Vcellinp__lut_rom__iterations[4]),32);
        bufp->chgIData(oldp+54,(vlSelf->top__DOT____Vcellinp__lut_rom__iterations[5]),32);
        bufp->chgIData(oldp+55,(vlSelf->top__DOT____Vcellout__lut_rom__rgb_val[0]),24);
        bufp->chgIData(oldp+56,(vlSelf->top__DOT____Vcellout__lut_rom__rgb_val[1]),24);
        bufp->chgIData(oldp+57,(vlSelf->top__DOT____Vcellout__lut_rom__rgb_val[2]),24);
        bufp->chgIData(oldp+58,(vlSelf->top__DOT____Vcellout__lut_rom__rgb_val[3]),24);
        bufp->chgIData(oldp+59,(vlSelf->top__DOT____Vcellout__lut_rom__rgb_val[4]),24);
        bufp->chgIData(oldp+60,(vlSelf->top__DOT____Vcellout__lut_rom__rgb_val[5]),24);
        bufp->chgSData(oldp+61,(vlSelf->top__DOT__x
                                [0U]),10);
        bufp->chgSData(oldp+62,(vlSelf->top__DOT__y
                                [0U]),10);
        bufp->chgCData(oldp+63,(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__curr_iterations),6);
        bufp->chgSData(oldp+64,(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.xpixel),10);
        bufp->chgSData(oldp+65,(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.ypixel),10);
        bufp->chgIData(oldp+66,(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__x),25);
        bufp->chgIData(oldp+67,(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__y),25);
        bufp->chgIData(oldp+68,(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__zr),25);
        bufp->chgIData(oldp+69,(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__zi),25);
        bufp->chgIData(oldp+70,((0x1ffffffU & ((vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__zr2 
                                                - vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__zi2) 
                                               + vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__x))),25);
        bufp->chgIData(oldp+71,(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__zr2),25);
        bufp->chgIData(oldp+72,(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__zi2),25);
        bufp->chgIData(oldp+73,(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__distance),25);
        bufp->chgQData(oldp+74,((0x3ffffffffffffULL 
                                 & VL_MULS_QQQ(50, 
                                               (0x3ffffffffffffULL 
                                                & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__zr)), 
                                               (0x3ffffffffffffULL 
                                                & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__zr))))),50);
        bufp->chgQData(oldp+76,((0x3ffffffffffffULL 
                                 & VL_MULS_QQQ(50, 
                                               (0x3ffffffffffffULL 
                                                & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__zi)), 
                                               (0x3ffffffffffffULL 
                                                & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__zi))))),50);
        bufp->chgQData(oldp+78,((0x3ffffffffffffULL 
                                 & VL_MULS_QQQ(50, 
                                               (0x3ffffffffffffULL 
                                                & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__zr)), 
                                               (0x3ffffffffffffULL 
                                                & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__zi))))),50);
        bufp->chgCData(oldp+80,((0x3fU & ((IData)(1U) 
                                          + (IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__curr_iterations)))),6);
        bufp->chgCData(oldp+81,(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__SM__DOT__state),2);
        bufp->chgIData(oldp+82,((0x1ffffffU & (IData)(
                                                      (0x3fffffffULL 
                                                       & (VL_MULS_QQQ(50, 0x199aULL, 
                                                                      (0x3ffffffffffffULL 
                                                                       & VL_EXTENDS_QI(50,25, 
                                                                                (0x1ffffffU 
                                                                                & (vlSelf->top__DOT__x
                                                                                [0U] 
                                                                                << 0xeU))))) 
                                                          >> 0x14U))))),25);
        bufp->chgIData(oldp+83,((0x1ffffffU & (IData)(
                                                      (0x3fffffffULL 
                                                       & (VL_MULS_QQQ(50, 0x199aULL, 
                                                                      (0x3ffffffffffffULL 
                                                                       & VL_EXTENDS_QI(50,25, 
                                                                                (0x1ffffffU 
                                                                                & (vlSelf->top__DOT__y
                                                                                [0U] 
                                                                                << 0xeU))))) 
                                                          >> 0x14U))))),25);
        bufp->chgIData(oldp+84,((0x1ffffffU & (vlSelf->top__DOT__x
                                               [0U] 
                                               << 0xeU))),25);
        bufp->chgIData(oldp+85,((0x1ffffffU & (vlSelf->top__DOT__y
                                               [0U] 
                                               << 0xeU))),25);
        bufp->chgQData(oldp+86,((0x3ffffffffffffULL 
                                 & VL_MULS_QQQ(50, 0x199aULL, 
                                               (0x3ffffffffffffULL 
                                                & VL_EXTENDS_QI(50,25, 
                                                                (0x1ffffffU 
                                                                 & (vlSelf->top__DOT__x
                                                                    [0U] 
                                                                    << 0xeU))))))),50);
        bufp->chgQData(oldp+88,((0x3ffffffffffffULL 
                                 & VL_MULS_QQQ(50, 0x199aULL, 
                                               (0x3ffffffffffffULL 
                                                & VL_EXTENDS_QI(50,25, 
                                                                (0x1ffffffU 
                                                                 & (vlSelf->top__DOT__y
                                                                    [0U] 
                                                                    << 0xeU))))))),50);
        bufp->chgSData(oldp+90,(vlSelf->top__DOT__x
                                [1U]),10);
        bufp->chgSData(oldp+91,(vlSelf->top__DOT__y
                                [1U]),10);
        bufp->chgCData(oldp+92,(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__curr_iterations),6);
        bufp->chgSData(oldp+93,(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.xpixel),10);
        bufp->chgSData(oldp+94,(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.ypixel),10);
        bufp->chgIData(oldp+95,(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__x),25);
        bufp->chgIData(oldp+96,(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__y),25);
        bufp->chgIData(oldp+97,(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__zr),25);
        bufp->chgIData(oldp+98,(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__zi),25);
        bufp->chgIData(oldp+99,((0x1ffffffU & ((vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__zr2 
                                                - vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__zi2) 
                                               + vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__x))),25);
        bufp->chgIData(oldp+100,(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__zr2),25);
        bufp->chgIData(oldp+101,(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__zi2),25);
        bufp->chgIData(oldp+102,(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__distance),25);
        bufp->chgQData(oldp+103,((0x3ffffffffffffULL 
                                  & VL_MULS_QQQ(50, 
                                                (0x3ffffffffffffULL 
                                                 & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__zr)), 
                                                (0x3ffffffffffffULL 
                                                 & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__zr))))),50);
        bufp->chgQData(oldp+105,((0x3ffffffffffffULL 
                                  & VL_MULS_QQQ(50, 
                                                (0x3ffffffffffffULL 
                                                 & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__zi)), 
                                                (0x3ffffffffffffULL 
                                                 & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__zi))))),50);
        bufp->chgQData(oldp+107,((0x3ffffffffffffULL 
                                  & VL_MULS_QQQ(50, 
                                                (0x3ffffffffffffULL 
                                                 & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__zr)), 
                                                (0x3ffffffffffffULL 
                                                 & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__zi))))),50);
        bufp->chgCData(oldp+109,((0x3fU & ((IData)(1U) 
                                           + (IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__curr_iterations)))),6);
        bufp->chgCData(oldp+110,(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__SM__DOT__state),2);
        bufp->chgIData(oldp+111,((0x1ffffffU & (IData)(
                                                       (0x3fffffffULL 
                                                        & (VL_MULS_QQQ(50, 0x199aULL, 
                                                                       (0x3ffffffffffffULL 
                                                                        & VL_EXTENDS_QI(50,25, 
                                                                                (0x1ffffffU 
                                                                                & (vlSelf->top__DOT__x
                                                                                [1U] 
                                                                                << 0xeU))))) 
                                                           >> 0x14U))))),25);
        bufp->chgIData(oldp+112,((0x1ffffffU & (IData)(
                                                       (0x3fffffffULL 
                                                        & (VL_MULS_QQQ(50, 0x199aULL, 
                                                                       (0x3ffffffffffffULL 
                                                                        & VL_EXTENDS_QI(50,25, 
                                                                                (0x1ffffffU 
                                                                                & (vlSelf->top__DOT__y
                                                                                [1U] 
                                                                                << 0xeU))))) 
                                                           >> 0x14U))))),25);
        bufp->chgIData(oldp+113,((0x1ffffffU & (vlSelf->top__DOT__x
                                                [1U] 
                                                << 0xeU))),25);
        bufp->chgIData(oldp+114,((0x1ffffffU & (vlSelf->top__DOT__y
                                                [1U] 
                                                << 0xeU))),25);
        bufp->chgQData(oldp+115,((0x3ffffffffffffULL 
                                  & VL_MULS_QQQ(50, 0x199aULL, 
                                                (0x3ffffffffffffULL 
                                                 & VL_EXTENDS_QI(50,25, 
                                                                 (0x1ffffffU 
                                                                  & (vlSelf->top__DOT__x
                                                                     [1U] 
                                                                     << 0xeU))))))),50);
        bufp->chgQData(oldp+117,((0x3ffffffffffffULL 
                                  & VL_MULS_QQQ(50, 0x199aULL, 
                                                (0x3ffffffffffffULL 
                                                 & VL_EXTENDS_QI(50,25, 
                                                                 (0x1ffffffU 
                                                                  & (vlSelf->top__DOT__y
                                                                     [1U] 
                                                                     << 0xeU))))))),50);
        bufp->chgSData(oldp+119,(vlSelf->top__DOT__x
                                 [2U]),10);
        bufp->chgSData(oldp+120,(vlSelf->top__DOT__y
                                 [2U]),10);
        bufp->chgCData(oldp+121,(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__curr_iterations),6);
        bufp->chgSData(oldp+122,(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.xpixel),10);
        bufp->chgSData(oldp+123,(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.ypixel),10);
        bufp->chgIData(oldp+124,(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__x),25);
        bufp->chgIData(oldp+125,(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__y),25);
        bufp->chgIData(oldp+126,(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__zr),25);
        bufp->chgIData(oldp+127,(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__zi),25);
        bufp->chgIData(oldp+128,((0x1ffffffU & ((vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__zr2 
                                                 - vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__zi2) 
                                                + vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__x))),25);
        bufp->chgIData(oldp+129,(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__zr2),25);
        bufp->chgIData(oldp+130,(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__zi2),25);
        bufp->chgIData(oldp+131,(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__distance),25);
        bufp->chgQData(oldp+132,((0x3ffffffffffffULL 
                                  & VL_MULS_QQQ(50, 
                                                (0x3ffffffffffffULL 
                                                 & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__zr)), 
                                                (0x3ffffffffffffULL 
                                                 & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__zr))))),50);
        bufp->chgQData(oldp+134,((0x3ffffffffffffULL 
                                  & VL_MULS_QQQ(50, 
                                                (0x3ffffffffffffULL 
                                                 & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__zi)), 
                                                (0x3ffffffffffffULL 
                                                 & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__zi))))),50);
        bufp->chgQData(oldp+136,((0x3ffffffffffffULL 
                                  & VL_MULS_QQQ(50, 
                                                (0x3ffffffffffffULL 
                                                 & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__zr)), 
                                                (0x3ffffffffffffULL 
                                                 & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__zi))))),50);
        bufp->chgCData(oldp+138,((0x3fU & ((IData)(1U) 
                                           + (IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__curr_iterations)))),6);
        bufp->chgCData(oldp+139,(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__SM__DOT__state),2);
        bufp->chgIData(oldp+140,((0x1ffffffU & (IData)(
                                                       (0x3fffffffULL 
                                                        & (VL_MULS_QQQ(50, 0x199aULL, 
                                                                       (0x3ffffffffffffULL 
                                                                        & VL_EXTENDS_QI(50,25, 
                                                                                (0x1ffffffU 
                                                                                & (vlSelf->top__DOT__x
                                                                                [2U] 
                                                                                << 0xeU))))) 
                                                           >> 0x14U))))),25);
        bufp->chgIData(oldp+141,((0x1ffffffU & (IData)(
                                                       (0x3fffffffULL 
                                                        & (VL_MULS_QQQ(50, 0x199aULL, 
                                                                       (0x3ffffffffffffULL 
                                                                        & VL_EXTENDS_QI(50,25, 
                                                                                (0x1ffffffU 
                                                                                & (vlSelf->top__DOT__y
                                                                                [2U] 
                                                                                << 0xeU))))) 
                                                           >> 0x14U))))),25);
        bufp->chgIData(oldp+142,((0x1ffffffU & (vlSelf->top__DOT__x
                                                [2U] 
                                                << 0xeU))),25);
        bufp->chgIData(oldp+143,((0x1ffffffU & (vlSelf->top__DOT__y
                                                [2U] 
                                                << 0xeU))),25);
        bufp->chgQData(oldp+144,((0x3ffffffffffffULL 
                                  & VL_MULS_QQQ(50, 0x199aULL, 
                                                (0x3ffffffffffffULL 
                                                 & VL_EXTENDS_QI(50,25, 
                                                                 (0x1ffffffU 
                                                                  & (vlSelf->top__DOT__x
                                                                     [2U] 
                                                                     << 0xeU))))))),50);
        bufp->chgQData(oldp+146,((0x3ffffffffffffULL 
                                  & VL_MULS_QQQ(50, 0x199aULL, 
                                                (0x3ffffffffffffULL 
                                                 & VL_EXTENDS_QI(50,25, 
                                                                 (0x1ffffffU 
                                                                  & (vlSelf->top__DOT__y
                                                                     [2U] 
                                                                     << 0xeU))))))),50);
        bufp->chgSData(oldp+148,(vlSelf->top__DOT__x
                                 [3U]),10);
        bufp->chgSData(oldp+149,(vlSelf->top__DOT__y
                                 [3U]),10);
        bufp->chgCData(oldp+150,(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__curr_iterations),6);
        bufp->chgSData(oldp+151,(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.xpixel),10);
        bufp->chgSData(oldp+152,(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.ypixel),10);
        bufp->chgIData(oldp+153,(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__x),25);
        bufp->chgIData(oldp+154,(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__y),25);
        bufp->chgIData(oldp+155,(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__zr),25);
        bufp->chgIData(oldp+156,(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__zi),25);
        bufp->chgIData(oldp+157,((0x1ffffffU & ((vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__zr2 
                                                 - vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__zi2) 
                                                + vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__x))),25);
        bufp->chgIData(oldp+158,(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__zr2),25);
        bufp->chgIData(oldp+159,(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__zi2),25);
        bufp->chgIData(oldp+160,(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__distance),25);
        bufp->chgQData(oldp+161,((0x3ffffffffffffULL 
                                  & VL_MULS_QQQ(50, 
                                                (0x3ffffffffffffULL 
                                                 & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__zr)), 
                                                (0x3ffffffffffffULL 
                                                 & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__zr))))),50);
        bufp->chgQData(oldp+163,((0x3ffffffffffffULL 
                                  & VL_MULS_QQQ(50, 
                                                (0x3ffffffffffffULL 
                                                 & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__zi)), 
                                                (0x3ffffffffffffULL 
                                                 & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__zi))))),50);
        bufp->chgQData(oldp+165,((0x3ffffffffffffULL 
                                  & VL_MULS_QQQ(50, 
                                                (0x3ffffffffffffULL 
                                                 & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__zr)), 
                                                (0x3ffffffffffffULL 
                                                 & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__zi))))),50);
        bufp->chgCData(oldp+167,((0x3fU & ((IData)(1U) 
                                           + (IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__curr_iterations)))),6);
        bufp->chgCData(oldp+168,(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__SM__DOT__state),2);
        bufp->chgIData(oldp+169,((0x1ffffffU & (IData)(
                                                       (0x3fffffffULL 
                                                        & (VL_MULS_QQQ(50, 0x199aULL, 
                                                                       (0x3ffffffffffffULL 
                                                                        & VL_EXTENDS_QI(50,25, 
                                                                                (0x1ffffffU 
                                                                                & (vlSelf->top__DOT__x
                                                                                [3U] 
                                                                                << 0xeU))))) 
                                                           >> 0x14U))))),25);
        bufp->chgIData(oldp+170,((0x1ffffffU & (IData)(
                                                       (0x3fffffffULL 
                                                        & (VL_MULS_QQQ(50, 0x199aULL, 
                                                                       (0x3ffffffffffffULL 
                                                                        & VL_EXTENDS_QI(50,25, 
                                                                                (0x1ffffffU 
                                                                                & (vlSelf->top__DOT__y
                                                                                [3U] 
                                                                                << 0xeU))))) 
                                                           >> 0x14U))))),25);
        bufp->chgIData(oldp+171,((0x1ffffffU & (vlSelf->top__DOT__x
                                                [3U] 
                                                << 0xeU))),25);
        bufp->chgIData(oldp+172,((0x1ffffffU & (vlSelf->top__DOT__y
                                                [3U] 
                                                << 0xeU))),25);
        bufp->chgQData(oldp+173,((0x3ffffffffffffULL 
                                  & VL_MULS_QQQ(50, 0x199aULL, 
                                                (0x3ffffffffffffULL 
                                                 & VL_EXTENDS_QI(50,25, 
                                                                 (0x1ffffffU 
                                                                  & (vlSelf->top__DOT__x
                                                                     [3U] 
                                                                     << 0xeU))))))),50);
        bufp->chgQData(oldp+175,((0x3ffffffffffffULL 
                                  & VL_MULS_QQQ(50, 0x199aULL, 
                                                (0x3ffffffffffffULL 
                                                 & VL_EXTENDS_QI(50,25, 
                                                                 (0x1ffffffU 
                                                                  & (vlSelf->top__DOT__y
                                                                     [3U] 
                                                                     << 0xeU))))))),50);
        bufp->chgSData(oldp+177,(vlSelf->top__DOT__x
                                 [4U]),10);
        bufp->chgSData(oldp+178,(vlSelf->top__DOT__y
                                 [4U]),10);
        bufp->chgCData(oldp+179,(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__curr_iterations),6);
        bufp->chgSData(oldp+180,(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.xpixel),10);
        bufp->chgSData(oldp+181,(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.ypixel),10);
        bufp->chgIData(oldp+182,(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__x),25);
        bufp->chgIData(oldp+183,(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__y),25);
        bufp->chgIData(oldp+184,(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__zr),25);
        bufp->chgIData(oldp+185,(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__zi),25);
        bufp->chgIData(oldp+186,((0x1ffffffU & ((vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__zr2 
                                                 - vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__zi2) 
                                                + vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__x))),25);
        bufp->chgIData(oldp+187,(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__zr2),25);
        bufp->chgIData(oldp+188,(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__zi2),25);
        bufp->chgIData(oldp+189,(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__distance),25);
        bufp->chgQData(oldp+190,((0x3ffffffffffffULL 
                                  & VL_MULS_QQQ(50, 
                                                (0x3ffffffffffffULL 
                                                 & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__zr)), 
                                                (0x3ffffffffffffULL 
                                                 & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__zr))))),50);
        bufp->chgQData(oldp+192,((0x3ffffffffffffULL 
                                  & VL_MULS_QQQ(50, 
                                                (0x3ffffffffffffULL 
                                                 & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__zi)), 
                                                (0x3ffffffffffffULL 
                                                 & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__zi))))),50);
        bufp->chgQData(oldp+194,((0x3ffffffffffffULL 
                                  & VL_MULS_QQQ(50, 
                                                (0x3ffffffffffffULL 
                                                 & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__zr)), 
                                                (0x3ffffffffffffULL 
                                                 & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__zi))))),50);
        bufp->chgCData(oldp+196,((0x3fU & ((IData)(1U) 
                                           + (IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__curr_iterations)))),6);
        bufp->chgCData(oldp+197,(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__SM__DOT__state),2);
        bufp->chgIData(oldp+198,((0x1ffffffU & (IData)(
                                                       (0x3fffffffULL 
                                                        & (VL_MULS_QQQ(50, 0x199aULL, 
                                                                       (0x3ffffffffffffULL 
                                                                        & VL_EXTENDS_QI(50,25, 
                                                                                (0x1ffffffU 
                                                                                & (vlSelf->top__DOT__x
                                                                                [4U] 
                                                                                << 0xeU))))) 
                                                           >> 0x14U))))),25);
        bufp->chgIData(oldp+199,((0x1ffffffU & (IData)(
                                                       (0x3fffffffULL 
                                                        & (VL_MULS_QQQ(50, 0x199aULL, 
                                                                       (0x3ffffffffffffULL 
                                                                        & VL_EXTENDS_QI(50,25, 
                                                                                (0x1ffffffU 
                                                                                & (vlSelf->top__DOT__y
                                                                                [4U] 
                                                                                << 0xeU))))) 
                                                           >> 0x14U))))),25);
        bufp->chgIData(oldp+200,((0x1ffffffU & (vlSelf->top__DOT__x
                                                [4U] 
                                                << 0xeU))),25);
        bufp->chgIData(oldp+201,((0x1ffffffU & (vlSelf->top__DOT__y
                                                [4U] 
                                                << 0xeU))),25);
        bufp->chgQData(oldp+202,((0x3ffffffffffffULL 
                                  & VL_MULS_QQQ(50, 0x199aULL, 
                                                (0x3ffffffffffffULL 
                                                 & VL_EXTENDS_QI(50,25, 
                                                                 (0x1ffffffU 
                                                                  & (vlSelf->top__DOT__x
                                                                     [4U] 
                                                                     << 0xeU))))))),50);
        bufp->chgQData(oldp+204,((0x3ffffffffffffULL 
                                  & VL_MULS_QQQ(50, 0x199aULL, 
                                                (0x3ffffffffffffULL 
                                                 & VL_EXTENDS_QI(50,25, 
                                                                 (0x1ffffffU 
                                                                  & (vlSelf->top__DOT__y
                                                                     [4U] 
                                                                     << 0xeU))))))),50);
        bufp->chgSData(oldp+206,(vlSelf->top__DOT__x
                                 [5U]),10);
        bufp->chgSData(oldp+207,(vlSelf->top__DOT__y
                                 [5U]),10);
        bufp->chgCData(oldp+208,(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__curr_iterations),6);
        bufp->chgSData(oldp+209,(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.xpixel),10);
        bufp->chgSData(oldp+210,(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.ypixel),10);
        bufp->chgIData(oldp+211,(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__x),25);
        bufp->chgIData(oldp+212,(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__y),25);
        bufp->chgIData(oldp+213,(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__zr),25);
        bufp->chgIData(oldp+214,(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__zi),25);
        bufp->chgIData(oldp+215,((0x1ffffffU & ((vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__zr2 
                                                 - vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__zi2) 
                                                + vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__x))),25);
        bufp->chgIData(oldp+216,(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__zr2),25);
        bufp->chgIData(oldp+217,(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__zi2),25);
        bufp->chgIData(oldp+218,(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__distance),25);
        bufp->chgQData(oldp+219,((0x3ffffffffffffULL 
                                  & VL_MULS_QQQ(50, 
                                                (0x3ffffffffffffULL 
                                                 & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__zr)), 
                                                (0x3ffffffffffffULL 
                                                 & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__zr))))),50);
        bufp->chgQData(oldp+221,((0x3ffffffffffffULL 
                                  & VL_MULS_QQQ(50, 
                                                (0x3ffffffffffffULL 
                                                 & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__zi)), 
                                                (0x3ffffffffffffULL 
                                                 & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__zi))))),50);
        bufp->chgQData(oldp+223,((0x3ffffffffffffULL 
                                  & VL_MULS_QQQ(50, 
                                                (0x3ffffffffffffULL 
                                                 & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__zr)), 
                                                (0x3ffffffffffffULL 
                                                 & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__zi))))),50);
        bufp->chgCData(oldp+225,((0x3fU & ((IData)(1U) 
                                           + (IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__curr_iterations)))),6);
        bufp->chgCData(oldp+226,(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__SM__DOT__state),2);
        bufp->chgIData(oldp+227,((0x1ffffffU & (IData)(
                                                       (0x3fffffffULL 
                                                        & (VL_MULS_QQQ(50, 0x199aULL, 
                                                                       (0x3ffffffffffffULL 
                                                                        & VL_EXTENDS_QI(50,25, 
                                                                                (0x1ffffffU 
                                                                                & (vlSelf->top__DOT__x
                                                                                [5U] 
                                                                                << 0xeU))))) 
                                                           >> 0x14U))))),25);
        bufp->chgIData(oldp+228,((0x1ffffffU & (IData)(
                                                       (0x3fffffffULL 
                                                        & (VL_MULS_QQQ(50, 0x199aULL, 
                                                                       (0x3ffffffffffffULL 
                                                                        & VL_EXTENDS_QI(50,25, 
                                                                                (0x1ffffffU 
                                                                                & (vlSelf->top__DOT__y
                                                                                [5U] 
                                                                                << 0xeU))))) 
                                                           >> 0x14U))))),25);
        bufp->chgIData(oldp+229,((0x1ffffffU & (vlSelf->top__DOT__x
                                                [5U] 
                                                << 0xeU))),25);
        bufp->chgIData(oldp+230,((0x1ffffffU & (vlSelf->top__DOT__y
                                                [5U] 
                                                << 0xeU))),25);
        bufp->chgQData(oldp+231,((0x3ffffffffffffULL 
                                  & VL_MULS_QQQ(50, 0x199aULL, 
                                                (0x3ffffffffffffULL 
                                                 & VL_EXTENDS_QI(50,25, 
                                                                 (0x1ffffffU 
                                                                  & (vlSelf->top__DOT__x
                                                                     [5U] 
                                                                     << 0xeU))))))),50);
        bufp->chgQData(oldp+233,((0x3ffffffffffffULL 
                                  & VL_MULS_QQQ(50, 0x199aULL, 
                                                (0x3ffffffffffffULL 
                                                 & VL_EXTENDS_QI(50,25, 
                                                                 (0x1ffffffU 
                                                                  & (vlSelf->top__DOT__y
                                                                     [5U] 
                                                                     << 0xeU))))))),50);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[3U]))) {
        bufp->chgBit(oldp+235,((((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.en_pixel_map) 
                                 & (vlSelf->top__DOT__x
                                    [0U] == (IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.xpixel))) 
                                & (vlSelf->top__DOT__y
                                   [0U] == (IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.ypixel)))));
        bufp->chgIData(oldp+236,((0x1ffffffU & ((((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__init)
                                                   ? 0U
                                                   : 
                                                  (0x1ffffffU 
                                                   & (IData)(
                                                             (0x3fffffffULL 
                                                              & (VL_MULS_QQQ(50, 
                                                                             (0x3ffffffffffffULL 
                                                                              & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__zr)), 
                                                                             (0x3ffffffffffffULL 
                                                                              & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__zi))) 
                                                                 >> 0x14U))))) 
                                                 << 1U) 
                                                + vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__y))),25);
        bufp->chgIData(oldp+237,(((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__init)
                                   ? 0U : (0x1ffffffU 
                                           & (IData)(
                                                     (0x3fffffffULL 
                                                      & (VL_MULS_QQQ(50, 
                                                                     (0x3ffffffffffffULL 
                                                                      & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__zr)), 
                                                                     (0x3ffffffffffffULL 
                                                                      & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__zr))) 
                                                         >> 0x14U)))))),25);
        bufp->chgIData(oldp+238,(((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__init)
                                   ? 0U : (0x1ffffffU 
                                           & (IData)(
                                                     (0x3fffffffULL 
                                                      & (VL_MULS_QQQ(50, 
                                                                     (0x3ffffffffffffULL 
                                                                      & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__zi)), 
                                                                     (0x3ffffffffffffULL 
                                                                      & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__zi))) 
                                                         >> 0x14U)))))),25);
        bufp->chgIData(oldp+239,(((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__init)
                                   ? 0U : (0x1ffffffU 
                                           & (IData)(
                                                     (0x3fffffffULL 
                                                      & (VL_MULS_QQQ(50, 
                                                                     (0x3ffffffffffffULL 
                                                                      & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__zr)), 
                                                                     (0x3ffffffffffffULL 
                                                                      & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__zi))) 
                                                         >> 0x14U)))))),25);
        bufp->chgBit(oldp+240,((((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.en_pixel_map) 
                                 & (vlSelf->top__DOT__x
                                    [1U] == (IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.xpixel))) 
                                & (vlSelf->top__DOT__y
                                   [1U] == (IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.ypixel)))));
        bufp->chgIData(oldp+241,((0x1ffffffU & ((((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__init)
                                                   ? 0U
                                                   : 
                                                  (0x1ffffffU 
                                                   & (IData)(
                                                             (0x3fffffffULL 
                                                              & (VL_MULS_QQQ(50, 
                                                                             (0x3ffffffffffffULL 
                                                                              & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__zr)), 
                                                                             (0x3ffffffffffffULL 
                                                                              & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__zi))) 
                                                                 >> 0x14U))))) 
                                                 << 1U) 
                                                + vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__y))),25);
        bufp->chgIData(oldp+242,(((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__init)
                                   ? 0U : (0x1ffffffU 
                                           & (IData)(
                                                     (0x3fffffffULL 
                                                      & (VL_MULS_QQQ(50, 
                                                                     (0x3ffffffffffffULL 
                                                                      & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__zr)), 
                                                                     (0x3ffffffffffffULL 
                                                                      & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__zr))) 
                                                         >> 0x14U)))))),25);
        bufp->chgIData(oldp+243,(((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__init)
                                   ? 0U : (0x1ffffffU 
                                           & (IData)(
                                                     (0x3fffffffULL 
                                                      & (VL_MULS_QQQ(50, 
                                                                     (0x3ffffffffffffULL 
                                                                      & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__zi)), 
                                                                     (0x3ffffffffffffULL 
                                                                      & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__zi))) 
                                                         >> 0x14U)))))),25);
        bufp->chgIData(oldp+244,(((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__init)
                                   ? 0U : (0x1ffffffU 
                                           & (IData)(
                                                     (0x3fffffffULL 
                                                      & (VL_MULS_QQQ(50, 
                                                                     (0x3ffffffffffffULL 
                                                                      & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__zr)), 
                                                                     (0x3ffffffffffffULL 
                                                                      & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__zi))) 
                                                         >> 0x14U)))))),25);
        bufp->chgBit(oldp+245,((((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.en_pixel_map) 
                                 & (vlSelf->top__DOT__x
                                    [2U] == (IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.xpixel))) 
                                & (vlSelf->top__DOT__y
                                   [2U] == (IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.ypixel)))));
        bufp->chgIData(oldp+246,((0x1ffffffU & ((((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__init)
                                                   ? 0U
                                                   : 
                                                  (0x1ffffffU 
                                                   & (IData)(
                                                             (0x3fffffffULL 
                                                              & (VL_MULS_QQQ(50, 
                                                                             (0x3ffffffffffffULL 
                                                                              & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__zr)), 
                                                                             (0x3ffffffffffffULL 
                                                                              & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__zi))) 
                                                                 >> 0x14U))))) 
                                                 << 1U) 
                                                + vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__y))),25);
        bufp->chgIData(oldp+247,(((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__init)
                                   ? 0U : (0x1ffffffU 
                                           & (IData)(
                                                     (0x3fffffffULL 
                                                      & (VL_MULS_QQQ(50, 
                                                                     (0x3ffffffffffffULL 
                                                                      & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__zr)), 
                                                                     (0x3ffffffffffffULL 
                                                                      & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__zr))) 
                                                         >> 0x14U)))))),25);
        bufp->chgIData(oldp+248,(((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__init)
                                   ? 0U : (0x1ffffffU 
                                           & (IData)(
                                                     (0x3fffffffULL 
                                                      & (VL_MULS_QQQ(50, 
                                                                     (0x3ffffffffffffULL 
                                                                      & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__zi)), 
                                                                     (0x3ffffffffffffULL 
                                                                      & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__zi))) 
                                                         >> 0x14U)))))),25);
        bufp->chgIData(oldp+249,(((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__init)
                                   ? 0U : (0x1ffffffU 
                                           & (IData)(
                                                     (0x3fffffffULL 
                                                      & (VL_MULS_QQQ(50, 
                                                                     (0x3ffffffffffffULL 
                                                                      & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__zr)), 
                                                                     (0x3ffffffffffffULL 
                                                                      & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__zi))) 
                                                         >> 0x14U)))))),25);
        bufp->chgBit(oldp+250,((((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.en_pixel_map) 
                                 & (vlSelf->top__DOT__x
                                    [3U] == (IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.xpixel))) 
                                & (vlSelf->top__DOT__y
                                   [3U] == (IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.ypixel)))));
        bufp->chgIData(oldp+251,((0x1ffffffU & ((((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__init)
                                                   ? 0U
                                                   : 
                                                  (0x1ffffffU 
                                                   & (IData)(
                                                             (0x3fffffffULL 
                                                              & (VL_MULS_QQQ(50, 
                                                                             (0x3ffffffffffffULL 
                                                                              & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__zr)), 
                                                                             (0x3ffffffffffffULL 
                                                                              & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__zi))) 
                                                                 >> 0x14U))))) 
                                                 << 1U) 
                                                + vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__y))),25);
        bufp->chgIData(oldp+252,(((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__init)
                                   ? 0U : (0x1ffffffU 
                                           & (IData)(
                                                     (0x3fffffffULL 
                                                      & (VL_MULS_QQQ(50, 
                                                                     (0x3ffffffffffffULL 
                                                                      & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__zr)), 
                                                                     (0x3ffffffffffffULL 
                                                                      & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__zr))) 
                                                         >> 0x14U)))))),25);
        bufp->chgIData(oldp+253,(((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__init)
                                   ? 0U : (0x1ffffffU 
                                           & (IData)(
                                                     (0x3fffffffULL 
                                                      & (VL_MULS_QQQ(50, 
                                                                     (0x3ffffffffffffULL 
                                                                      & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__zi)), 
                                                                     (0x3ffffffffffffULL 
                                                                      & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__zi))) 
                                                         >> 0x14U)))))),25);
        bufp->chgIData(oldp+254,(((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__init)
                                   ? 0U : (0x1ffffffU 
                                           & (IData)(
                                                     (0x3fffffffULL 
                                                      & (VL_MULS_QQQ(50, 
                                                                     (0x3ffffffffffffULL 
                                                                      & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__zr)), 
                                                                     (0x3ffffffffffffULL 
                                                                      & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__zi))) 
                                                         >> 0x14U)))))),25);
        bufp->chgBit(oldp+255,((((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.en_pixel_map) 
                                 & (vlSelf->top__DOT__x
                                    [4U] == (IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.xpixel))) 
                                & (vlSelf->top__DOT__y
                                   [4U] == (IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.ypixel)))));
        bufp->chgIData(oldp+256,((0x1ffffffU & ((((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__init)
                                                   ? 0U
                                                   : 
                                                  (0x1ffffffU 
                                                   & (IData)(
                                                             (0x3fffffffULL 
                                                              & (VL_MULS_QQQ(50, 
                                                                             (0x3ffffffffffffULL 
                                                                              & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__zr)), 
                                                                             (0x3ffffffffffffULL 
                                                                              & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__zi))) 
                                                                 >> 0x14U))))) 
                                                 << 1U) 
                                                + vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__y))),25);
        bufp->chgIData(oldp+257,(((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__init)
                                   ? 0U : (0x1ffffffU 
                                           & (IData)(
                                                     (0x3fffffffULL 
                                                      & (VL_MULS_QQQ(50, 
                                                                     (0x3ffffffffffffULL 
                                                                      & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__zr)), 
                                                                     (0x3ffffffffffffULL 
                                                                      & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__zr))) 
                                                         >> 0x14U)))))),25);
        bufp->chgIData(oldp+258,(((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__init)
                                   ? 0U : (0x1ffffffU 
                                           & (IData)(
                                                     (0x3fffffffULL 
                                                      & (VL_MULS_QQQ(50, 
                                                                     (0x3ffffffffffffULL 
                                                                      & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__zi)), 
                                                                     (0x3ffffffffffffULL 
                                                                      & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__zi))) 
                                                         >> 0x14U)))))),25);
        bufp->chgIData(oldp+259,(((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__init)
                                   ? 0U : (0x1ffffffU 
                                           & (IData)(
                                                     (0x3fffffffULL 
                                                      & (VL_MULS_QQQ(50, 
                                                                     (0x3ffffffffffffULL 
                                                                      & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__zr)), 
                                                                     (0x3ffffffffffffULL 
                                                                      & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__zi))) 
                                                         >> 0x14U)))))),25);
        bufp->chgBit(oldp+260,((((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.en_pixel_map) 
                                 & (vlSelf->top__DOT__x
                                    [5U] == (IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.xpixel))) 
                                & (vlSelf->top__DOT__y
                                   [5U] == (IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.ypixel)))));
        bufp->chgIData(oldp+261,((0x1ffffffU & ((((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__init)
                                                   ? 0U
                                                   : 
                                                  (0x1ffffffU 
                                                   & (IData)(
                                                             (0x3fffffffULL 
                                                              & (VL_MULS_QQQ(50, 
                                                                             (0x3ffffffffffffULL 
                                                                              & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__zr)), 
                                                                             (0x3ffffffffffffULL 
                                                                              & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__zi))) 
                                                                 >> 0x14U))))) 
                                                 << 1U) 
                                                + vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__y))),25);
        bufp->chgIData(oldp+262,(((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__init)
                                   ? 0U : (0x1ffffffU 
                                           & (IData)(
                                                     (0x3fffffffULL 
                                                      & (VL_MULS_QQQ(50, 
                                                                     (0x3ffffffffffffULL 
                                                                      & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__zr)), 
                                                                     (0x3ffffffffffffULL 
                                                                      & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__zr))) 
                                                         >> 0x14U)))))),25);
        bufp->chgIData(oldp+263,(((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__init)
                                   ? 0U : (0x1ffffffU 
                                           & (IData)(
                                                     (0x3fffffffULL 
                                                      & (VL_MULS_QQQ(50, 
                                                                     (0x3ffffffffffffULL 
                                                                      & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__zi)), 
                                                                     (0x3ffffffffffffULL 
                                                                      & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__zi))) 
                                                         >> 0x14U)))))),25);
        bufp->chgIData(oldp+264,(((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__init)
                                   ? 0U : (0x1ffffffU 
                                           & (IData)(
                                                     (0x3fffffffULL 
                                                      & (VL_MULS_QQQ(50, 
                                                                     (0x3ffffffffffffULL 
                                                                      & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__zr)), 
                                                                     (0x3ffffffffffffULL 
                                                                      & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__zi))) 
                                                         >> 0x14U)))))),25);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+265,(vlSelf->top__DOT__colour_bus_o[0]),24);
        bufp->chgIData(oldp+266,(vlSelf->top__DOT__colour_bus_o[1]),24);
        bufp->chgIData(oldp+267,(vlSelf->top__DOT__colour_bus_o[2]),24);
        bufp->chgIData(oldp+268,(vlSelf->top__DOT__colour_bus_o[3]),24);
        bufp->chgIData(oldp+269,(vlSelf->top__DOT__colour_bus_o[4]),24);
        bufp->chgIData(oldp+270,(vlSelf->top__DOT__colour_bus_o[5]),24);
        bufp->chgIData(oldp+271,(vlSelf->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__queue_block__colour_o),24);
        bufp->chgIData(oldp+272,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__unnamedblk3__DOT__i),32);
        bufp->chgIData(oldp+273,(vlSelf->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__queue_block__colour_o),24);
        bufp->chgIData(oldp+274,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__unnamedblk3__DOT__i),32);
        bufp->chgIData(oldp+275,(vlSelf->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__queue_block__colour_o),24);
        bufp->chgIData(oldp+276,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__unnamedblk3__DOT__i),32);
        bufp->chgIData(oldp+277,(vlSelf->top__DOT____Vcellout__genblk1__BRA__3__KET____DOT__queue_block__colour_o),24);
        bufp->chgIData(oldp+278,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__unnamedblk3__DOT__i),32);
        bufp->chgIData(oldp+279,(vlSelf->top__DOT____Vcellout__genblk1__BRA__4__KET____DOT__queue_block__colour_o),24);
        bufp->chgIData(oldp+280,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__unnamedblk3__DOT__i),32);
        bufp->chgIData(oldp+281,(vlSelf->top__DOT____Vcellout__genblk1__BRA__5__KET____DOT__queue_block__colour_o),24);
        bufp->chgIData(oldp+282,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__unnamedblk3__DOT__i),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgCData(oldp+283,(vlSelf->top__DOT__fin_bus),6);
        bufp->chgBit(oldp+284,((1U & (IData)(vlSelf->top__DOT__fin_bus))));
        bufp->chgBit(oldp+285,((1U & ((IData)(vlSelf->top__DOT__fin_bus) 
                                      >> 1U))));
        bufp->chgBit(oldp+286,((1U & ((IData)(vlSelf->top__DOT__fin_bus) 
                                      >> 2U))));
        bufp->chgBit(oldp+287,((1U & ((IData)(vlSelf->top__DOT__fin_bus) 
                                      >> 3U))));
        bufp->chgBit(oldp+288,((1U & ((IData)(vlSelf->top__DOT__fin_bus) 
                                      >> 4U))));
        bufp->chgBit(oldp+289,((1U & ((IData)(vlSelf->top__DOT__fin_bus) 
                                      >> 5U))));
        bufp->chgBit(oldp+290,(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.en_pixel_map));
        bufp->chgBit(oldp+291,(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__en_stage_1));
        bufp->chgBit(oldp+292,(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__en_stage_2));
        bufp->chgBit(oldp+293,(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__init));
        bufp->chgCData(oldp+294,(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__SM__DOT__next),2);
        bufp->chgBit(oldp+295,(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.en_pixel_map));
        bufp->chgBit(oldp+296,(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__en_stage_1));
        bufp->chgBit(oldp+297,(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__en_stage_2));
        bufp->chgBit(oldp+298,(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__init));
        bufp->chgCData(oldp+299,(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__SM__DOT__next),2);
        bufp->chgBit(oldp+300,(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.en_pixel_map));
        bufp->chgBit(oldp+301,(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__en_stage_1));
        bufp->chgBit(oldp+302,(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__en_stage_2));
        bufp->chgBit(oldp+303,(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__init));
        bufp->chgCData(oldp+304,(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__SM__DOT__next),2);
        bufp->chgBit(oldp+305,(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.en_pixel_map));
        bufp->chgBit(oldp+306,(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__en_stage_1));
        bufp->chgBit(oldp+307,(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__en_stage_2));
        bufp->chgBit(oldp+308,(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__init));
        bufp->chgCData(oldp+309,(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__SM__DOT__next),2);
        bufp->chgBit(oldp+310,(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.en_pixel_map));
        bufp->chgBit(oldp+311,(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__en_stage_1));
        bufp->chgBit(oldp+312,(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__en_stage_2));
        bufp->chgBit(oldp+313,(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__init));
        bufp->chgCData(oldp+314,(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__SM__DOT__next),2);
        bufp->chgBit(oldp+315,(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.en_pixel_map));
        bufp->chgBit(oldp+316,(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__en_stage_1));
        bufp->chgBit(oldp+317,(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__en_stage_2));
        bufp->chgBit(oldp+318,(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__init));
        bufp->chgCData(oldp+319,(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__SM__DOT__next),2);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgSData(oldp+320,(vlSelf->top__DOT__xpixel_bus[0]),10);
        bufp->chgSData(oldp+321,(vlSelf->top__DOT__xpixel_bus[1]),10);
        bufp->chgSData(oldp+322,(vlSelf->top__DOT__xpixel_bus[2]),10);
        bufp->chgSData(oldp+323,(vlSelf->top__DOT__xpixel_bus[3]),10);
        bufp->chgSData(oldp+324,(vlSelf->top__DOT__xpixel_bus[4]),10);
        bufp->chgSData(oldp+325,(vlSelf->top__DOT__xpixel_bus[5]),10);
        bufp->chgSData(oldp+326,(vlSelf->top__DOT__ypixel_bus[0]),10);
        bufp->chgSData(oldp+327,(vlSelf->top__DOT__ypixel_bus[1]),10);
        bufp->chgSData(oldp+328,(vlSelf->top__DOT__ypixel_bus[2]),10);
        bufp->chgSData(oldp+329,(vlSelf->top__DOT__ypixel_bus[3]),10);
        bufp->chgSData(oldp+330,(vlSelf->top__DOT__ypixel_bus[4]),10);
        bufp->chgSData(oldp+331,(vlSelf->top__DOT__ypixel_bus[5]),10);
        bufp->chgIData(oldp+332,(vlSelf->top__DOT__colour_bus_i[0]),24);
        bufp->chgIData(oldp+333,(vlSelf->top__DOT__colour_bus_i[1]),24);
        bufp->chgIData(oldp+334,(vlSelf->top__DOT__colour_bus_i[2]),24);
        bufp->chgIData(oldp+335,(vlSelf->top__DOT__colour_bus_i[3]),24);
        bufp->chgIData(oldp+336,(vlSelf->top__DOT__colour_bus_i[4]),24);
        bufp->chgIData(oldp+337,(vlSelf->top__DOT__colour_bus_i[5]),24);
        bufp->chgIData(oldp+338,(vlSelf->top__DOT__colour_bus_i
                                 [0U]),24);
        bufp->chgSData(oldp+339,(vlSelf->top__DOT__xpixel_bus
                                 [0U]),10);
        bufp->chgSData(oldp+340,(vlSelf->top__DOT__ypixel_bus
                                 [0U]),10);
        bufp->chgSData(oldp+341,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__prev_xpixel),10);
        bufp->chgIData(oldp+342,(vlSelf->top__DOT__colour_bus_i
                                 [1U]),24);
        bufp->chgSData(oldp+343,(vlSelf->top__DOT__xpixel_bus
                                 [1U]),10);
        bufp->chgSData(oldp+344,(vlSelf->top__DOT__ypixel_bus
                                 [1U]),10);
        bufp->chgSData(oldp+345,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__prev_xpixel),10);
        bufp->chgIData(oldp+346,(vlSelf->top__DOT__colour_bus_i
                                 [2U]),24);
        bufp->chgSData(oldp+347,(vlSelf->top__DOT__xpixel_bus
                                 [2U]),10);
        bufp->chgSData(oldp+348,(vlSelf->top__DOT__ypixel_bus
                                 [2U]),10);
        bufp->chgSData(oldp+349,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__prev_xpixel),10);
        bufp->chgIData(oldp+350,(vlSelf->top__DOT__colour_bus_i
                                 [3U]),24);
        bufp->chgSData(oldp+351,(vlSelf->top__DOT__xpixel_bus
                                 [3U]),10);
        bufp->chgSData(oldp+352,(vlSelf->top__DOT__ypixel_bus
                                 [3U]),10);
        bufp->chgSData(oldp+353,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__prev_xpixel),10);
        bufp->chgIData(oldp+354,(vlSelf->top__DOT__colour_bus_i
                                 [4U]),24);
        bufp->chgSData(oldp+355,(vlSelf->top__DOT__xpixel_bus
                                 [4U]),10);
        bufp->chgSData(oldp+356,(vlSelf->top__DOT__ypixel_bus
                                 [4U]),10);
        bufp->chgSData(oldp+357,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__prev_xpixel),10);
        bufp->chgIData(oldp+358,(vlSelf->top__DOT__colour_bus_i
                                 [5U]),24);
        bufp->chgSData(oldp+359,(vlSelf->top__DOT__xpixel_bus
                                 [5U]),10);
        bufp->chgSData(oldp+360,(vlSelf->top__DOT__ypixel_bus
                                 [5U]),10);
        bufp->chgSData(oldp+361,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__prev_xpixel),10);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        bufp->chgBit(oldp+362,((0x3fU == (IData)(vlSelf->top__DOT__en_bus))));
        bufp->chgCData(oldp+363,(vlSelf->top__DOT__en_bus),6);
        bufp->chgCData(oldp+364,(vlSelf->top__DOT__full_queue_bus),6);
        bufp->chgCData(oldp+365,(vlSelf->top__DOT__match_bus),6);
        bufp->chgIData(oldp+366,(vlSelf->top__DOT__j),32);
        bufp->chgBit(oldp+367,(vlSelf->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__queue_block__full_queue));
        bufp->chgBit(oldp+368,(vlSelf->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__queue_block__en));
        bufp->chgBit(oldp+369,(vlSelf->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__queue_block__match));
        bufp->chgIData(oldp+370,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[0]),24);
        bufp->chgIData(oldp+371,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[1]),24);
        bufp->chgIData(oldp+372,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[2]),24);
        bufp->chgIData(oldp+373,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[3]),24);
        bufp->chgIData(oldp+374,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[4]),24);
        bufp->chgIData(oldp+375,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[5]),24);
        bufp->chgIData(oldp+376,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[6]),24);
        bufp->chgIData(oldp+377,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[7]),24);
        bufp->chgIData(oldp+378,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[8]),24);
        bufp->chgIData(oldp+379,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[9]),24);
        bufp->chgSData(oldp+380,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[0]),10);
        bufp->chgSData(oldp+381,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[1]),10);
        bufp->chgSData(oldp+382,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[2]),10);
        bufp->chgSData(oldp+383,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[3]),10);
        bufp->chgSData(oldp+384,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[4]),10);
        bufp->chgSData(oldp+385,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[5]),10);
        bufp->chgSData(oldp+386,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[6]),10);
        bufp->chgSData(oldp+387,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[7]),10);
        bufp->chgSData(oldp+388,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[8]),10);
        bufp->chgSData(oldp+389,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[9]),10);
        bufp->chgSData(oldp+390,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[0]),10);
        bufp->chgSData(oldp+391,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[1]),10);
        bufp->chgSData(oldp+392,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[2]),10);
        bufp->chgSData(oldp+393,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[3]),10);
        bufp->chgSData(oldp+394,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[4]),10);
        bufp->chgSData(oldp+395,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[5]),10);
        bufp->chgSData(oldp+396,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[6]),10);
        bufp->chgSData(oldp+397,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[7]),10);
        bufp->chgSData(oldp+398,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[8]),10);
        bufp->chgSData(oldp+399,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[9]),10);
        bufp->chgCData(oldp+400,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__counter),4);
        bufp->chgBit(oldp+401,(vlSelf->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__queue_block__full_queue));
        bufp->chgBit(oldp+402,(vlSelf->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__queue_block__en));
        bufp->chgBit(oldp+403,(vlSelf->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__queue_block__match));
        bufp->chgIData(oldp+404,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[0]),24);
        bufp->chgIData(oldp+405,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[1]),24);
        bufp->chgIData(oldp+406,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[2]),24);
        bufp->chgIData(oldp+407,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[3]),24);
        bufp->chgIData(oldp+408,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[4]),24);
        bufp->chgIData(oldp+409,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[5]),24);
        bufp->chgIData(oldp+410,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[6]),24);
        bufp->chgIData(oldp+411,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[7]),24);
        bufp->chgIData(oldp+412,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[8]),24);
        bufp->chgIData(oldp+413,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[9]),24);
        bufp->chgSData(oldp+414,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[0]),10);
        bufp->chgSData(oldp+415,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[1]),10);
        bufp->chgSData(oldp+416,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[2]),10);
        bufp->chgSData(oldp+417,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[3]),10);
        bufp->chgSData(oldp+418,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[4]),10);
        bufp->chgSData(oldp+419,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[5]),10);
        bufp->chgSData(oldp+420,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[6]),10);
        bufp->chgSData(oldp+421,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[7]),10);
        bufp->chgSData(oldp+422,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[8]),10);
        bufp->chgSData(oldp+423,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[9]),10);
        bufp->chgSData(oldp+424,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[0]),10);
        bufp->chgSData(oldp+425,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[1]),10);
        bufp->chgSData(oldp+426,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[2]),10);
        bufp->chgSData(oldp+427,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[3]),10);
        bufp->chgSData(oldp+428,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[4]),10);
        bufp->chgSData(oldp+429,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[5]),10);
        bufp->chgSData(oldp+430,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[6]),10);
        bufp->chgSData(oldp+431,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[7]),10);
        bufp->chgSData(oldp+432,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[8]),10);
        bufp->chgSData(oldp+433,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[9]),10);
        bufp->chgCData(oldp+434,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__counter),4);
        bufp->chgBit(oldp+435,(vlSelf->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__queue_block__full_queue));
        bufp->chgBit(oldp+436,(vlSelf->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__queue_block__en));
        bufp->chgBit(oldp+437,(vlSelf->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__queue_block__match));
        bufp->chgIData(oldp+438,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[0]),24);
        bufp->chgIData(oldp+439,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[1]),24);
        bufp->chgIData(oldp+440,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[2]),24);
        bufp->chgIData(oldp+441,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[3]),24);
        bufp->chgIData(oldp+442,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[4]),24);
        bufp->chgIData(oldp+443,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[5]),24);
        bufp->chgIData(oldp+444,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[6]),24);
        bufp->chgIData(oldp+445,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[7]),24);
        bufp->chgIData(oldp+446,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[8]),24);
        bufp->chgIData(oldp+447,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[9]),24);
        bufp->chgSData(oldp+448,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[0]),10);
        bufp->chgSData(oldp+449,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[1]),10);
        bufp->chgSData(oldp+450,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[2]),10);
        bufp->chgSData(oldp+451,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[3]),10);
        bufp->chgSData(oldp+452,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[4]),10);
        bufp->chgSData(oldp+453,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[5]),10);
        bufp->chgSData(oldp+454,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[6]),10);
        bufp->chgSData(oldp+455,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[7]),10);
        bufp->chgSData(oldp+456,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[8]),10);
        bufp->chgSData(oldp+457,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[9]),10);
        bufp->chgSData(oldp+458,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[0]),10);
        bufp->chgSData(oldp+459,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[1]),10);
        bufp->chgSData(oldp+460,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[2]),10);
        bufp->chgSData(oldp+461,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[3]),10);
        bufp->chgSData(oldp+462,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[4]),10);
        bufp->chgSData(oldp+463,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[5]),10);
        bufp->chgSData(oldp+464,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[6]),10);
        bufp->chgSData(oldp+465,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[7]),10);
        bufp->chgSData(oldp+466,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[8]),10);
        bufp->chgSData(oldp+467,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[9]),10);
        bufp->chgCData(oldp+468,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__counter),4);
        bufp->chgBit(oldp+469,(vlSelf->top__DOT____Vcellout__genblk1__BRA__3__KET____DOT__queue_block__full_queue));
        bufp->chgBit(oldp+470,(vlSelf->top__DOT____Vcellout__genblk1__BRA__3__KET____DOT__queue_block__en));
        bufp->chgBit(oldp+471,(vlSelf->top__DOT____Vcellout__genblk1__BRA__3__KET____DOT__queue_block__match));
        bufp->chgIData(oldp+472,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue[0]),24);
        bufp->chgIData(oldp+473,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue[1]),24);
        bufp->chgIData(oldp+474,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue[2]),24);
        bufp->chgIData(oldp+475,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue[3]),24);
        bufp->chgIData(oldp+476,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue[4]),24);
        bufp->chgIData(oldp+477,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue[5]),24);
        bufp->chgIData(oldp+478,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue[6]),24);
        bufp->chgIData(oldp+479,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue[7]),24);
        bufp->chgIData(oldp+480,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue[8]),24);
        bufp->chgIData(oldp+481,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue[9]),24);
        bufp->chgSData(oldp+482,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue[0]),10);
        bufp->chgSData(oldp+483,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue[1]),10);
        bufp->chgSData(oldp+484,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue[2]),10);
        bufp->chgSData(oldp+485,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue[3]),10);
        bufp->chgSData(oldp+486,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue[4]),10);
        bufp->chgSData(oldp+487,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue[5]),10);
        bufp->chgSData(oldp+488,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue[6]),10);
        bufp->chgSData(oldp+489,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue[7]),10);
        bufp->chgSData(oldp+490,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue[8]),10);
        bufp->chgSData(oldp+491,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue[9]),10);
        bufp->chgSData(oldp+492,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue[0]),10);
        bufp->chgSData(oldp+493,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue[1]),10);
        bufp->chgSData(oldp+494,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue[2]),10);
        bufp->chgSData(oldp+495,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue[3]),10);
        bufp->chgSData(oldp+496,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue[4]),10);
        bufp->chgSData(oldp+497,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue[5]),10);
        bufp->chgSData(oldp+498,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue[6]),10);
        bufp->chgSData(oldp+499,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue[7]),10);
        bufp->chgSData(oldp+500,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue[8]),10);
        bufp->chgSData(oldp+501,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue[9]),10);
        bufp->chgCData(oldp+502,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__counter),4);
        bufp->chgBit(oldp+503,(vlSelf->top__DOT____Vcellout__genblk1__BRA__4__KET____DOT__queue_block__full_queue));
        bufp->chgBit(oldp+504,(vlSelf->top__DOT____Vcellout__genblk1__BRA__4__KET____DOT__queue_block__en));
        bufp->chgBit(oldp+505,(vlSelf->top__DOT____Vcellout__genblk1__BRA__4__KET____DOT__queue_block__match));
        bufp->chgIData(oldp+506,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue[0]),24);
        bufp->chgIData(oldp+507,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue[1]),24);
        bufp->chgIData(oldp+508,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue[2]),24);
        bufp->chgIData(oldp+509,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue[3]),24);
        bufp->chgIData(oldp+510,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue[4]),24);
        bufp->chgIData(oldp+511,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue[5]),24);
        bufp->chgIData(oldp+512,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue[6]),24);
        bufp->chgIData(oldp+513,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue[7]),24);
        bufp->chgIData(oldp+514,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue[8]),24);
        bufp->chgIData(oldp+515,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue[9]),24);
        bufp->chgSData(oldp+516,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue[0]),10);
        bufp->chgSData(oldp+517,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue[1]),10);
        bufp->chgSData(oldp+518,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue[2]),10);
        bufp->chgSData(oldp+519,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue[3]),10);
        bufp->chgSData(oldp+520,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue[4]),10);
        bufp->chgSData(oldp+521,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue[5]),10);
        bufp->chgSData(oldp+522,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue[6]),10);
        bufp->chgSData(oldp+523,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue[7]),10);
        bufp->chgSData(oldp+524,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue[8]),10);
        bufp->chgSData(oldp+525,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue[9]),10);
        bufp->chgSData(oldp+526,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue[0]),10);
        bufp->chgSData(oldp+527,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue[1]),10);
        bufp->chgSData(oldp+528,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue[2]),10);
        bufp->chgSData(oldp+529,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue[3]),10);
        bufp->chgSData(oldp+530,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue[4]),10);
        bufp->chgSData(oldp+531,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue[5]),10);
        bufp->chgSData(oldp+532,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue[6]),10);
        bufp->chgSData(oldp+533,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue[7]),10);
        bufp->chgSData(oldp+534,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue[8]),10);
        bufp->chgSData(oldp+535,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue[9]),10);
        bufp->chgCData(oldp+536,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__counter),4);
        bufp->chgBit(oldp+537,(vlSelf->top__DOT____Vcellout__genblk1__BRA__5__KET____DOT__queue_block__full_queue));
        bufp->chgBit(oldp+538,(vlSelf->top__DOT____Vcellout__genblk1__BRA__5__KET____DOT__queue_block__en));
        bufp->chgBit(oldp+539,(vlSelf->top__DOT____Vcellout__genblk1__BRA__5__KET____DOT__queue_block__match));
        bufp->chgIData(oldp+540,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue[0]),24);
        bufp->chgIData(oldp+541,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue[1]),24);
        bufp->chgIData(oldp+542,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue[2]),24);
        bufp->chgIData(oldp+543,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue[3]),24);
        bufp->chgIData(oldp+544,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue[4]),24);
        bufp->chgIData(oldp+545,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue[5]),24);
        bufp->chgIData(oldp+546,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue[6]),24);
        bufp->chgIData(oldp+547,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue[7]),24);
        bufp->chgIData(oldp+548,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue[8]),24);
        bufp->chgIData(oldp+549,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue[9]),24);
        bufp->chgSData(oldp+550,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue[0]),10);
        bufp->chgSData(oldp+551,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue[1]),10);
        bufp->chgSData(oldp+552,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue[2]),10);
        bufp->chgSData(oldp+553,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue[3]),10);
        bufp->chgSData(oldp+554,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue[4]),10);
        bufp->chgSData(oldp+555,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue[5]),10);
        bufp->chgSData(oldp+556,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue[6]),10);
        bufp->chgSData(oldp+557,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue[7]),10);
        bufp->chgSData(oldp+558,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue[8]),10);
        bufp->chgSData(oldp+559,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue[9]),10);
        bufp->chgSData(oldp+560,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue[0]),10);
        bufp->chgSData(oldp+561,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue[1]),10);
        bufp->chgSData(oldp+562,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue[2]),10);
        bufp->chgSData(oldp+563,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue[3]),10);
        bufp->chgSData(oldp+564,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue[4]),10);
        bufp->chgSData(oldp+565,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue[5]),10);
        bufp->chgSData(oldp+566,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue[6]),10);
        bufp->chgSData(oldp+567,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue[7]),10);
        bufp->chgSData(oldp+568,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue[8]),10);
        bufp->chgSData(oldp+569,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue[9]),10);
        bufp->chgCData(oldp+570,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__counter),4);
        bufp->chgBit(oldp+571,((1U & (IData)(vlSelf->top__DOT__full_queue_bus))));
        bufp->chgBit(oldp+572,((1U & ((IData)(vlSelf->top__DOT__full_queue_bus) 
                                      >> 1U))));
        bufp->chgBit(oldp+573,((1U & ((IData)(vlSelf->top__DOT__full_queue_bus) 
                                      >> 2U))));
        bufp->chgBit(oldp+574,((1U & ((IData)(vlSelf->top__DOT__full_queue_bus) 
                                      >> 3U))));
        bufp->chgBit(oldp+575,((1U & ((IData)(vlSelf->top__DOT__full_queue_bus) 
                                      >> 4U))));
        bufp->chgBit(oldp+576,((1U & ((IData)(vlSelf->top__DOT__full_queue_bus) 
                                      >> 5U))));
    }
    bufp->chgBit(oldp+577,(vlSelf->clk));
    bufp->chgBit(oldp+578,(vlSelf->reset));
    bufp->chgBit(oldp+579,(vlSelf->ready));
    bufp->chgIData(oldp+580,(vlSelf->iterations_max),32);
    bufp->chgSData(oldp+581,(vlSelf->zoom),10);
    bufp->chgSData(oldp+582,(vlSelf->x_offset),10);
    bufp->chgSData(oldp+583,(vlSelf->y_offset),10);
    bufp->chgCData(oldp+584,(vlSelf->r),8);
    bufp->chgCData(oldp+585,(vlSelf->g),8);
    bufp->chgCData(oldp+586,(vlSelf->b),8);
    bufp->chgBit(oldp+587,(vlSelf->first));
    bufp->chgBit(oldp+588,(vlSelf->last_x));
    bufp->chgBit(oldp+589,(vlSelf->last_y));
    bufp->chgBit(oldp+590,(vlSelf->valid));
    bufp->chgBit(oldp+591,(((0x3fU == (IData)(vlSelf->top__DOT__fin_bus)) 
                            | (IData)(vlSelf->reset))));
    bufp->chgIData(oldp+592,(((5U >= (7U & vlSelf->top__DOT__j))
                               ? vlSelf->top__DOT__colour_bus_o
                              [(7U & vlSelf->top__DOT__j)]
                               : 0U)),24);
    bufp->chgCData(oldp+593,((0x3fU & vlSelf->iterations_max)),6);
    bufp->chgCData(oldp+594,((7U & (IData)(vlSelf->zoom))),3);
    bufp->chgIData(oldp+595,(vlSelf->x_offset),25);
    bufp->chgIData(oldp+596,(vlSelf->y_offset),25);
    bufp->chgBit(oldp+597,(((VL_LTS_III(25, 0x400000U, vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__distance) 
                             | ((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__curr_iterations) 
                                == (0x3fU & vlSelf->iterations_max))) 
                            | VL_GTS_III(32, 0U, VL_EXTENDS_II(32,25, vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__distance)))));
    bufp->chgIData(oldp+598,((0x1ffffffU & ((IData)(0x1e00000U) 
                                            + (IData)(vlSelf->x_offset)))),25);
    bufp->chgIData(oldp+599,((0x1ffffffU & ((IData)(0x1e80000U) 
                                            + (IData)(vlSelf->y_offset)))),25);
    bufp->chgBit(oldp+600,(((VL_LTS_III(25, 0x400000U, vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__distance) 
                             | ((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__curr_iterations) 
                                == (0x3fU & vlSelf->iterations_max))) 
                            | VL_GTS_III(32, 0U, VL_EXTENDS_II(32,25, vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__distance)))));
    bufp->chgBit(oldp+601,(((VL_LTS_III(25, 0x400000U, vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__distance) 
                             | ((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__curr_iterations) 
                                == (0x3fU & vlSelf->iterations_max))) 
                            | VL_GTS_III(32, 0U, VL_EXTENDS_II(32,25, vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__distance)))));
    bufp->chgBit(oldp+602,(((VL_LTS_III(25, 0x400000U, vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__distance) 
                             | ((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__curr_iterations) 
                                == (0x3fU & vlSelf->iterations_max))) 
                            | VL_GTS_III(32, 0U, VL_EXTENDS_II(32,25, vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__distance)))));
    bufp->chgBit(oldp+603,(((VL_LTS_III(25, 0x400000U, vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__distance) 
                             | ((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__curr_iterations) 
                                == (0x3fU & vlSelf->iterations_max))) 
                            | VL_GTS_III(32, 0U, VL_EXTENDS_II(32,25, vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__distance)))));
    bufp->chgBit(oldp+604,(((VL_LTS_III(25, 0x400000U, vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__distance) 
                             | ((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__curr_iterations) 
                                == (0x3fU & vlSelf->iterations_max))) 
                            | VL_GTS_III(32, 0U, VL_EXTENDS_II(32,25, vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__distance)))));
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
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
}
