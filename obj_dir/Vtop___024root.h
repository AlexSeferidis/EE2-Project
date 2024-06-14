// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"

class Vtop__Syms;
class Vtop_mandelbrot_engine;
class Vtop_queue_new;


class Vtop___024root final : public VerilatedModule {
  public:
    // CELLS
    Vtop_mandelbrot_engine* __PVT__top__DOT__genblk1__BRA__0__KET____DOT__engine;
    Vtop_queue_new* __PVT__top__DOT__genblk1__BRA__0__KET____DOT__queue_block;
    Vtop_mandelbrot_engine* __PVT__top__DOT__genblk1__BRA__1__KET____DOT__engine;
    Vtop_queue_new* __PVT__top__DOT__genblk1__BRA__1__KET____DOT__queue_block;
    Vtop_mandelbrot_engine* __PVT__top__DOT__genblk1__BRA__2__KET____DOT__engine;
    Vtop_queue_new* __PVT__top__DOT__genblk1__BRA__2__KET____DOT__queue_block;
    Vtop_mandelbrot_engine* __PVT__top__DOT__genblk1__BRA__3__KET____DOT__engine;
    Vtop_queue_new* __PVT__top__DOT__genblk1__BRA__3__KET____DOT__queue_block;
    Vtop_mandelbrot_engine* __PVT__top__DOT__genblk1__BRA__4__KET____DOT__engine;
    Vtop_queue_new* __PVT__top__DOT__genblk1__BRA__4__KET____DOT__queue_block;
    Vtop_mandelbrot_engine* __PVT__top__DOT__genblk1__BRA__5__KET____DOT__engine;
    Vtop_queue_new* __PVT__top__DOT__genblk1__BRA__5__KET____DOT__queue_block;
    Vtop_mandelbrot_engine* __PVT__top__DOT__genblk1__BRA__6__KET____DOT__engine;
    Vtop_queue_new* __PVT__top__DOT__genblk1__BRA__6__KET____DOT__queue_block;
    Vtop_mandelbrot_engine* __PVT__top__DOT__genblk1__BRA__7__KET____DOT__engine;
    Vtop_queue_new* __PVT__top__DOT__genblk1__BRA__7__KET____DOT__queue_block;
    Vtop_mandelbrot_engine* __PVT__top__DOT__genblk1__BRA__8__KET____DOT__engine;
    Vtop_queue_new* __PVT__top__DOT__genblk1__BRA__8__KET____DOT__queue_block;
    Vtop_mandelbrot_engine* __PVT__top__DOT__genblk1__BRA__9__KET____DOT__engine;
    Vtop_queue_new* __PVT__top__DOT__genblk1__BRA__9__KET____DOT__queue_block;
    Vtop_mandelbrot_engine* __PVT__top__DOT__genblk1__BRA__10__KET____DOT__engine;
    Vtop_queue_new* __PVT__top__DOT__genblk1__BRA__10__KET____DOT__queue_block;
    Vtop_mandelbrot_engine* __PVT__top__DOT__genblk1__BRA__11__KET____DOT__engine;
    Vtop_queue_new* __PVT__top__DOT__genblk1__BRA__11__KET____DOT__queue_block;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(ready,0,0);
    VL_OUT8(r,7,0);
    VL_OUT8(g,7,0);
    VL_OUT8(b,7,0);
    VL_OUT8(first,0,0);
    VL_OUT8(last_x,0,0);
    VL_OUT8(last_y,0,0);
    VL_OUT8(valid,0,0);
    CData/*0:0*/ top__DOT__reset_engine;
    CData/*0:0*/ __Vclklast__TOP__clk;
    VL_IN16(iterations_max,9,0);
    VL_IN16(zoom,9,0);
    VL_IN16(x_offset,9,0);
    VL_IN16(y_offset,9,0);
    SData/*9:0*/ top__DOT__xpixel_wire;
    SData/*9:0*/ top__DOT__ypixel_wire;
    SData/*11:0*/ top__DOT__fin_bus;
    SData/*11:0*/ top__DOT__en_bus;
    SData/*11:0*/ top__DOT__full_queue_bus;
    SData/*11:0*/ top__DOT__match_bus;
    SData/*9:0*/ top__DOT__distributor__DOT__x0;
    SData/*9:0*/ top__DOT__distributor__DOT__y0;
    SData/*9:0*/ top__DOT__combinator_block__DOT__xpixel;
    SData/*9:0*/ top__DOT__combinator_block__DOT__ypixel;
    IData/*23:0*/ top__DOT__colour_o_wire;
    IData/*31:0*/ top__DOT__j;
    VlUnpacked<IData/*23:0*/, 12> top__DOT__colour_bus_o;
    VlUnpacked<SData/*9:0*/, 12> top__DOT__x;
    VlUnpacked<SData/*9:0*/, 12> top__DOT__y;
    VlUnpacked<SData/*9:0*/, 12> top__DOT__iterations_bus;
    VlUnpacked<SData/*9:0*/, 12> top__DOT__xpixel_bus;
    VlUnpacked<SData/*9:0*/, 12> top__DOT__ypixel_bus;
    VlUnpacked<IData/*23:0*/, 12> top__DOT__colour_bus_i;
    VlUnpacked<SData/*9:0*/, 12> top__DOT____Vcellout__distributor__y;
    VlUnpacked<SData/*9:0*/, 12> top__DOT____Vcellout__distributor__x;
    VlUnpacked<IData/*23:0*/, 12> top__DOT____Vcellout__lut_rom__rgb_val;
    VlUnpacked<SData/*9:0*/, 12> top__DOT____Vcellinp__lut_rom__iterations;
    VlUnpacked<IData/*23:0*/, 50> top__DOT__lut_rom__DOT__lut_array;
    VlUnpacked<CData/*0:0*/, 6> __Vm_traceActivity;

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
