// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef _VTOP_MANDELBROT_ENGINE_H_
#define _VTOP_MANDELBROT_ENGINE_H_  // guard

#include "verilated_heavy.h"

//==========

class Vtop__Syms;
class Vtop_VerilatedVcd;


//----------

VL_MODULE(Vtop_mandelbrot_engine) {
  public:
    
    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(iterations_max,5,0);
    VL_IN8(zoom,2,0);
    VL_IN8(full_queue,0,0);
    VL_OUT8(en_pixel_map,0,0);
    VL_OUT8(iterations,5,0);
    VL_IN16(x0_,9,0);
    VL_IN16(y0_,9,0);
    VL_OUT16(xpixel,9,0);
    VL_OUT16(ypixel,9,0);
    VL_IN(x_offset,24,0);
    VL_IN(y_offset,24,0);
    
    // LOCAL SIGNALS
    CData/*5:0*/ __PVT__curr_iterations;
    CData/*0:0*/ __PVT__en_stage_1;
    CData/*0:0*/ __PVT__en_stage_2;
    CData/*0:0*/ __PVT__init;
    CData/*1:0*/ __PVT__SM__DOT__state;
    CData/*1:0*/ __PVT__SM__DOT__next;
    IData/*24:0*/ __PVT__x;
    IData/*24:0*/ __PVT__y;
    IData/*24:0*/ __PVT__zr;
    IData/*24:0*/ __PVT__zi;
    IData/*24:0*/ __PVT__zr2;
    IData/*24:0*/ __PVT__zi2;
    IData/*24:0*/ __PVT__distance;
    QData/*49:0*/ __PVT__M7__DOT__product;
    
    // LOCAL VARIABLES
    CData/*5:0*/ __Vcellinp__R0__in;
    CData/*2:0*/ __Vtableidx1;
    CData/*2:0*/ __Vtableidx2;
    CData/*2:0*/ __Vtableidx3;
    CData/*2:0*/ __Vtableidx4;
    CData/*2:0*/ __Vtableidx5;
    CData/*2:0*/ __Vtableidx6;
    IData/*24:0*/ __Vdly__zr;
    static CData/*1:0*/ __Vtable1___PVT__SM__DOT__next[8];
    static CData/*0:0*/ __Vtable1___PVT__init[8];
    static CData/*0:0*/ __Vtable1_en_pixel_map[8];
    static CData/*0:0*/ __Vtable1___PVT__en_stage_1[8];
    static CData/*0:0*/ __Vtable1___PVT__en_stage_2[8];
    static CData/*1:0*/ __Vtable2___PVT__SM__DOT__next[8];
    static CData/*0:0*/ __Vtable2___PVT__init[8];
    static CData/*0:0*/ __Vtable2_en_pixel_map[8];
    static CData/*0:0*/ __Vtable2___PVT__en_stage_1[8];
    static CData/*0:0*/ __Vtable2___PVT__en_stage_2[8];
    static CData/*1:0*/ __Vtable3___PVT__SM__DOT__next[8];
    static CData/*0:0*/ __Vtable3___PVT__init[8];
    static CData/*0:0*/ __Vtable3_en_pixel_map[8];
    static CData/*0:0*/ __Vtable3___PVT__en_stage_1[8];
    static CData/*0:0*/ __Vtable3___PVT__en_stage_2[8];
    static CData/*1:0*/ __Vtable4___PVT__SM__DOT__next[8];
    static CData/*0:0*/ __Vtable4___PVT__init[8];
    static CData/*0:0*/ __Vtable4_en_pixel_map[8];
    static CData/*0:0*/ __Vtable4___PVT__en_stage_1[8];
    static CData/*0:0*/ __Vtable4___PVT__en_stage_2[8];
    static CData/*1:0*/ __Vtable5___PVT__SM__DOT__next[8];
    static CData/*0:0*/ __Vtable5___PVT__init[8];
    static CData/*0:0*/ __Vtable5_en_pixel_map[8];
    static CData/*0:0*/ __Vtable5___PVT__en_stage_1[8];
    static CData/*0:0*/ __Vtable5___PVT__en_stage_2[8];
    static CData/*1:0*/ __Vtable6___PVT__SM__DOT__next[8];
    static CData/*0:0*/ __Vtable6___PVT__init[8];
    static CData/*0:0*/ __Vtable6_en_pixel_map[8];
    static CData/*0:0*/ __Vtable6___PVT__en_stage_1[8];
    static CData/*0:0*/ __Vtable6___PVT__en_stage_2[8];
    
    // INTERNAL VARIABLES
  private:
    Vtop__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtop_mandelbrot_engine);  ///< Copying not allowed
  public:
    Vtop_mandelbrot_engine(const char* name = "TOP");
    ~Vtop_mandelbrot_engine();
    
    // INTERNAL METHODS
    void __Vconfigure(Vtop__Syms* symsp, bool first);
    void _combo__TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine__13(Vtop__Syms* __restrict vlSymsp);
    void _combo__TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine__14(Vtop__Syms* __restrict vlSymsp);
    void _combo__TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine__15(Vtop__Syms* __restrict vlSymsp);
    void _combo__TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine__16(Vtop__Syms* __restrict vlSymsp);
    void _combo__TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine__17(Vtop__Syms* __restrict vlSymsp);
    void _combo__TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine__18(Vtop__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    void _sequent__TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine__1(Vtop__Syms* __restrict vlSymsp);
    void _sequent__TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine__2(Vtop__Syms* __restrict vlSymsp);
    void _sequent__TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine__3(Vtop__Syms* __restrict vlSymsp);
    void _sequent__TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine__4(Vtop__Syms* __restrict vlSymsp);
    void _sequent__TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine__5(Vtop__Syms* __restrict vlSymsp);
    void _sequent__TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine__6(Vtop__Syms* __restrict vlSymsp);
    void _settle__TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine__7(Vtop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine__8(Vtop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine__9(Vtop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine__10(Vtop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine__11(Vtop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine__12(Vtop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
