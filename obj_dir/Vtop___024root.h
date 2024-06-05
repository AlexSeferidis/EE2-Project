// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"

class Vtop__Syms;

class Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(fin_flag,0,0);
    VL_IN8(ready,0,0);
    VL_OUT8(full_queue,0,0);
    VL_OUT8(first,0,0);
    VL_OUT8(last_x,0,0);
    VL_OUT8(last_y,0,0);
    VL_OUT8(valid,0,0);
    CData/*0:0*/ top__DOT__en_wire;
    CData/*2:0*/ top__DOT__queue_block__DOT__counter;
    CData/*0:0*/ __Vclklast__TOP__clk;
    VL_IN(colour_i,23,0);
    VL_IN(xpixel_i,31,0);
    VL_IN(ypixel_i,31,0);
    VL_OUT(colour_o,23,0);
    IData/*31:0*/ top__DOT__xpixel_wire;
    IData/*31:0*/ top__DOT__ypixel_wire;
    IData/*23:0*/ top__DOT__colour_wire;
    IData/*31:0*/ top__DOT__queue_block__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ top__DOT__queue_block__DOT__unnamedblk2__DOT__i;
    IData/*23:0*/ top__DOT__queue_block__DOT____Vlvbound_hc89f5955__0;
    IData/*31:0*/ top__DOT__queue_block__DOT____Vlvbound_hc0c41b9e__0;
    IData/*31:0*/ top__DOT__queue_block__DOT____Vlvbound_h131125b7__0;
    IData/*23:0*/ top__DOT__queue_block__DOT____Vlvbound_h9942c0e0__0;
    IData/*31:0*/ top__DOT__queue_block__DOT____Vlvbound_hf058b455__0;
    IData/*31:0*/ top__DOT__queue_block__DOT____Vlvbound_hc3849630__0;
    IData/*31:0*/ top__DOT__combinator_block__DOT__xcount;
    IData/*31:0*/ top__DOT__combinator_block__DOT__ycount;
    VlUnpacked<IData/*23:0*/, 5> top__DOT__queue_block__DOT__colour_queue;
    VlUnpacked<IData/*31:0*/, 5> top__DOT__queue_block__DOT__xqueue;
    VlUnpacked<IData/*31:0*/, 5> top__DOT__queue_block__DOT__yqueue;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
