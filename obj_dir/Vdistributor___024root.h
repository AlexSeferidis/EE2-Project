// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdistributor.h for the primary calling header

#ifndef VERILATED_VDISTRIBUTOR___024ROOT_H_
#define VERILATED_VDISTRIBUTOR___024ROOT_H_  // guard

#include "verilated.h"

class Vdistributor__Syms;

class Vdistributor___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(fin_bus,1,0);
    CData/*0:0*/ __Vclklast__TOP__clk;
    IData/*31:0*/ distributor__DOT__xcount;
    IData/*31:0*/ distributor__DOT__ycount;
    IData/*31:0*/ distributor__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ distributor__DOT__unnamedblk2__DOT__i;
    VL_OUT(xcoord[2],31,0);
    VL_OUT(ycoord[2],31,0);
    VL_OUT8(reset_engines[2],0,0);
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vdistributor__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vdistributor___024root(Vdistributor__Syms* symsp, const char* name);
    ~Vdistributor___024root();
    VL_UNCOPYABLE(Vdistributor___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
