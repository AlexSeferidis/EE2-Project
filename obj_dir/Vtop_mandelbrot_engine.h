// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_MANDELBROT_ENGINE_H_
#define VERILATED_VTOP_MANDELBROT_ENGINE_H_  // guard

#include "verilated.h"

class Vtop__Syms;

class Vtop_mandelbrot_engine final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(iterations_max,5,0);
    VL_IN8(zoom,2,0);
    VL_IN8(full_queue,0,0);
    VL_OUT8(en_pixel_map,0,0);
    VL_OUT8(iterations,5,0);
    CData/*5:0*/ __PVT__curr_iterations;
    CData/*0:0*/ __PVT__en_stage_1;
    CData/*0:0*/ __PVT__en_stage_2;
    CData/*0:0*/ __PVT__init;
    CData/*5:0*/ __Vcellinp__R0__in;
    CData/*1:0*/ __PVT__SM__DOT__state;
    CData/*1:0*/ __PVT__SM__DOT__next;
    VL_IN16(x0_,9,0);
    VL_IN16(y0_,9,0);
    VL_OUT16(xpixel,9,0);
    VL_OUT16(ypixel,9,0);
    VL_IN(x_offset,24,0);
    VL_IN(y_offset,24,0);
    IData/*24:0*/ __PVT__x;
    IData/*24:0*/ __PVT__y;
    IData/*24:0*/ __PVT__zr;
    IData/*24:0*/ __PVT__zi;
    IData/*24:0*/ __PVT__zr2;
    IData/*24:0*/ __PVT__zi2;
    IData/*24:0*/ __PVT__distance;
    QData/*49:0*/ __PVT__M7__DOT__product;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_mandelbrot_engine(Vtop__Syms* symsp, const char* name);
    ~Vtop_mandelbrot_engine();
    VL_UNCOPYABLE(Vtop_mandelbrot_engine);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
