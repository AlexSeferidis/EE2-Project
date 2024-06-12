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
    // Anonymous structures to workaround compiler member-count bugs
    struct {
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
        CData/*0:0*/ top__DOT__fin_wire;
        CData/*5:0*/ top__DOT__fin_bus;
        CData/*5:0*/ top__DOT__en_bus;
        CData/*0:0*/ top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__engine__finished;
        CData/*0:0*/ top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__queue_block__en;
        CData/*0:0*/ top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__queue_block__full_queue;
        CData/*0:0*/ top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__engine__finished;
        CData/*0:0*/ top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__queue_block__en;
        CData/*0:0*/ top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__queue_block__full_queue;
        CData/*0:0*/ top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__engine__finished;
        CData/*0:0*/ top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__queue_block__en;
        CData/*0:0*/ top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__queue_block__full_queue;
        CData/*0:0*/ top__DOT____Vcellout__genblk1__BRA__3__KET____DOT__engine__finished;
        CData/*0:0*/ top__DOT____Vcellout__genblk1__BRA__3__KET____DOT__queue_block__en;
        CData/*0:0*/ top__DOT____Vcellout__genblk1__BRA__3__KET____DOT__queue_block__full_queue;
        CData/*0:0*/ top__DOT____Vcellout__genblk1__BRA__4__KET____DOT__engine__finished;
        CData/*0:0*/ top__DOT____Vcellout__genblk1__BRA__4__KET____DOT__queue_block__en;
        CData/*0:0*/ top__DOT____Vcellout__genblk1__BRA__4__KET____DOT__queue_block__full_queue;
        CData/*0:0*/ top__DOT____Vcellout__genblk1__BRA__5__KET____DOT__engine__finished;
        CData/*0:0*/ top__DOT____Vcellout__genblk1__BRA__5__KET____DOT__queue_block__en;
        CData/*0:0*/ top__DOT____Vcellout__genblk1__BRA__5__KET____DOT__queue_block__full_queue;
        CData/*3:0*/ top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__counter;
        CData/*3:0*/ top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__counter;
        CData/*3:0*/ top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__counter;
        CData/*3:0*/ top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__counter;
        CData/*3:0*/ top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__counter;
        CData/*3:0*/ top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__counter;
        CData/*0:0*/ __Vclklast__TOP__clk;
        CData/*0:0*/ __Vclklast__TOP__reset;
        VL_IN(iterations_max,31,0);
        VL_IN(zoom,31,0);
        VL_IN(x_offset,31,0);
        VL_IN(y_offset,31,0);
        IData/*23:0*/ top__DOT__colour_o_wire;
        IData/*31:0*/ top__DOT__xpixel_wire;
        IData/*31:0*/ top__DOT__ypixel_wire;
        IData/*23:0*/ top__DOT__colour_wire;
        IData/*31:0*/ top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__engine__ypixel;
        IData/*31:0*/ top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__engine__xpixel;
        IData/*31:0*/ top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__engine__iterations;
        IData/*31:0*/ top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__engine__ypixel;
        IData/*31:0*/ top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__engine__xpixel;
        IData/*31:0*/ top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__engine__iterations;
        IData/*31:0*/ top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__engine__ypixel;
        IData/*31:0*/ top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__engine__xpixel;
        IData/*31:0*/ top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__engine__iterations;
        IData/*31:0*/ top__DOT____Vcellout__genblk1__BRA__3__KET____DOT__engine__ypixel;
        IData/*31:0*/ top__DOT____Vcellout__genblk1__BRA__3__KET____DOT__engine__xpixel;
        IData/*31:0*/ top__DOT____Vcellout__genblk1__BRA__3__KET____DOT__engine__iterations;
        IData/*31:0*/ top__DOT____Vcellout__genblk1__BRA__4__KET____DOT__engine__ypixel;
        IData/*31:0*/ top__DOT____Vcellout__genblk1__BRA__4__KET____DOT__engine__xpixel;
        IData/*31:0*/ top__DOT____Vcellout__genblk1__BRA__4__KET____DOT__engine__iterations;
        IData/*31:0*/ top__DOT____Vcellout__genblk1__BRA__5__KET____DOT__engine__ypixel;
    };
    struct {
        IData/*31:0*/ top__DOT____Vcellout__genblk1__BRA__5__KET____DOT__engine__xpixel;
        IData/*31:0*/ top__DOT____Vcellout__genblk1__BRA__5__KET____DOT__engine__iterations;
        IData/*31:0*/ top__DOT__distributor__DOT__x0;
        IData/*31:0*/ top__DOT__distributor__DOT__y0;
        IData/*31:0*/ top__DOT__combinator_block__DOT__xpixel;
        IData/*31:0*/ top__DOT__combinator_block__DOT__ypixel;
        IData/*31:0*/ top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__x0_buff;
        IData/*31:0*/ top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__y0_buff;
        IData/*31:0*/ top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__state;
        IData/*31:0*/ top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__x;
        IData/*31:0*/ top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__y;
        IData/*31:0*/ top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xpixel_o;
        IData/*31:0*/ top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__prev_xpixel;
        IData/*31:0*/ top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__unnamedblk2__DOT__i;
        IData/*31:0*/ top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__unnamedblk3__DOT__i;
        IData/*23:0*/ top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0;
        IData/*31:0*/ top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_hba1e7bd2__0;
        IData/*31:0*/ top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_hb8b57eae__0;
        IData/*23:0*/ top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_he6b57a3a__0;
        IData/*31:0*/ top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_h7940f0e4__0;
        IData/*31:0*/ top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_h794bab9c__0;
        IData/*31:0*/ top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__x0_buff;
        IData/*31:0*/ top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__y0_buff;
        IData/*31:0*/ top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__state;
        IData/*31:0*/ top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__x;
        IData/*31:0*/ top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__y;
        IData/*31:0*/ top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xpixel_o;
        IData/*31:0*/ top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__prev_xpixel;
        IData/*31:0*/ top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__unnamedblk2__DOT__i;
        IData/*31:0*/ top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__unnamedblk3__DOT__i;
        IData/*23:0*/ top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0;
        IData/*31:0*/ top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_hba1e7bd2__0;
        IData/*31:0*/ top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_hb8b57eae__0;
        IData/*23:0*/ top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_he6b57a3a__0;
        IData/*31:0*/ top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_h7940f0e4__0;
        IData/*31:0*/ top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_h794bab9c__0;
        IData/*31:0*/ top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__x0_buff;
        IData/*31:0*/ top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__y0_buff;
        IData/*31:0*/ top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__state;
        IData/*31:0*/ top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__x;
        IData/*31:0*/ top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__y;
        IData/*31:0*/ top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xpixel_o;
        IData/*31:0*/ top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__prev_xpixel;
        IData/*31:0*/ top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__unnamedblk2__DOT__i;
        IData/*31:0*/ top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__unnamedblk3__DOT__i;
        IData/*23:0*/ top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0;
        IData/*31:0*/ top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_hba1e7bd2__0;
        IData/*31:0*/ top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_hb8b57eae__0;
        IData/*23:0*/ top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_he6b57a3a__0;
        IData/*31:0*/ top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_h7940f0e4__0;
        IData/*31:0*/ top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_h794bab9c__0;
        IData/*31:0*/ top__DOT__genblk1__BRA__3__KET____DOT__engine__DOT__x0_buff;
        IData/*31:0*/ top__DOT__genblk1__BRA__3__KET____DOT__engine__DOT__y0_buff;
        IData/*31:0*/ top__DOT__genblk1__BRA__3__KET____DOT__engine__DOT__state;
        IData/*31:0*/ top__DOT__genblk1__BRA__3__KET____DOT__engine__DOT__x;
        IData/*31:0*/ top__DOT__genblk1__BRA__3__KET____DOT__engine__DOT__y;
        IData/*31:0*/ top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xpixel_o;
        IData/*31:0*/ top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__prev_xpixel;
        IData/*31:0*/ top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__unnamedblk2__DOT__i;
        IData/*31:0*/ top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__unnamedblk3__DOT__i;
    };
    struct {
        IData/*23:0*/ top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0;
        IData/*31:0*/ top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_hba1e7bd2__0;
        IData/*31:0*/ top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_hb8b57eae__0;
        IData/*23:0*/ top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_he6b57a3a__0;
        IData/*31:0*/ top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_h7940f0e4__0;
        IData/*31:0*/ top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_h794bab9c__0;
        IData/*31:0*/ top__DOT__genblk1__BRA__4__KET____DOT__engine__DOT__x0_buff;
        IData/*31:0*/ top__DOT__genblk1__BRA__4__KET____DOT__engine__DOT__y0_buff;
        IData/*31:0*/ top__DOT__genblk1__BRA__4__KET____DOT__engine__DOT__state;
        IData/*31:0*/ top__DOT__genblk1__BRA__4__KET____DOT__engine__DOT__x;
        IData/*31:0*/ top__DOT__genblk1__BRA__4__KET____DOT__engine__DOT__y;
        IData/*31:0*/ top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xpixel_o;
        IData/*31:0*/ top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__prev_xpixel;
        IData/*31:0*/ top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__unnamedblk2__DOT__i;
        IData/*31:0*/ top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__unnamedblk3__DOT__i;
        IData/*23:0*/ top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0;
        IData/*31:0*/ top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_hba1e7bd2__0;
        IData/*31:0*/ top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_hb8b57eae__0;
        IData/*23:0*/ top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_he6b57a3a__0;
        IData/*31:0*/ top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_h7940f0e4__0;
        IData/*31:0*/ top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_h794bab9c__0;
        IData/*31:0*/ top__DOT__genblk1__BRA__5__KET____DOT__engine__DOT__x0_buff;
        IData/*31:0*/ top__DOT__genblk1__BRA__5__KET____DOT__engine__DOT__y0_buff;
        IData/*31:0*/ top__DOT__genblk1__BRA__5__KET____DOT__engine__DOT__state;
        IData/*31:0*/ top__DOT__genblk1__BRA__5__KET____DOT__engine__DOT__x;
        IData/*31:0*/ top__DOT__genblk1__BRA__5__KET____DOT__engine__DOT__y;
        IData/*31:0*/ top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xpixel_o;
        IData/*31:0*/ top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__prev_xpixel;
        IData/*31:0*/ top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__unnamedblk2__DOT__i;
        IData/*31:0*/ top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__unnamedblk3__DOT__i;
        IData/*23:0*/ top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0;
        IData/*31:0*/ top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_hba1e7bd2__0;
        IData/*31:0*/ top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_hb8b57eae__0;
        IData/*23:0*/ top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_he6b57a3a__0;
        IData/*31:0*/ top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_h7940f0e4__0;
        IData/*31:0*/ top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_h794bab9c__0;
        QData/*63:0*/ top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__y_tmp;
        QData/*63:0*/ top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__x2;
        QData/*63:0*/ top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__y2;
        QData/*63:0*/ top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__y_tmp;
        QData/*63:0*/ top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__x2;
        QData/*63:0*/ top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__y2;
        QData/*63:0*/ top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__y_tmp;
        QData/*63:0*/ top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__x2;
        QData/*63:0*/ top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__y2;
        QData/*63:0*/ top__DOT__genblk1__BRA__3__KET____DOT__engine__DOT__y_tmp;
        QData/*63:0*/ top__DOT__genblk1__BRA__3__KET____DOT__engine__DOT__x2;
        QData/*63:0*/ top__DOT__genblk1__BRA__3__KET____DOT__engine__DOT__y2;
        QData/*63:0*/ top__DOT__genblk1__BRA__4__KET____DOT__engine__DOT__y_tmp;
        QData/*63:0*/ top__DOT__genblk1__BRA__4__KET____DOT__engine__DOT__x2;
        QData/*63:0*/ top__DOT__genblk1__BRA__4__KET____DOT__engine__DOT__y2;
        QData/*63:0*/ top__DOT__genblk1__BRA__5__KET____DOT__engine__DOT__y_tmp;
        QData/*63:0*/ top__DOT__genblk1__BRA__5__KET____DOT__engine__DOT__x2;
        QData/*63:0*/ top__DOT__genblk1__BRA__5__KET____DOT__engine__DOT__y2;
        VL_OUT8(full_queue[6],0,0);
        VlUnpacked<IData/*31:0*/, 6> top__DOT__x;
        VlUnpacked<IData/*31:0*/, 6> top__DOT__y;
        VlUnpacked<IData/*31:0*/, 6> top__DOT__iterations_bus;
        VlUnpacked<IData/*31:0*/, 6> top__DOT__xpixel_bus;
        VlUnpacked<IData/*31:0*/, 6> top__DOT__ypixel_bus;
        VlUnpacked<IData/*23:0*/, 6> top__DOT__colour_bus;
        VlUnpacked<IData/*31:0*/, 6> top__DOT____Vcellout__distributor__y;
    };
    struct {
        VlUnpacked<IData/*31:0*/, 6> top__DOT____Vcellout__distributor__x;
        VlUnpacked<IData/*23:0*/, 6> top__DOT____Vcellout__lut_rom__rgb_val;
        VlUnpacked<IData/*31:0*/, 6> top__DOT____Vcellinp__lut_rom__iterations;
        VlUnpacked<IData/*23:0*/, 50> top__DOT__lut_rom__DOT__lut_array;
        VlUnpacked<IData/*23:0*/, 10> top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue;
        VlUnpacked<IData/*31:0*/, 10> top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue;
        VlUnpacked<IData/*31:0*/, 10> top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue;
        VlUnpacked<IData/*23:0*/, 10> top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue;
        VlUnpacked<IData/*31:0*/, 10> top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue;
        VlUnpacked<IData/*31:0*/, 10> top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue;
        VlUnpacked<IData/*23:0*/, 10> top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue;
        VlUnpacked<IData/*31:0*/, 10> top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue;
        VlUnpacked<IData/*31:0*/, 10> top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue;
        VlUnpacked<IData/*23:0*/, 10> top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue;
        VlUnpacked<IData/*31:0*/, 10> top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue;
        VlUnpacked<IData/*31:0*/, 10> top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue;
        VlUnpacked<IData/*23:0*/, 10> top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue;
        VlUnpacked<IData/*31:0*/, 10> top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue;
        VlUnpacked<IData/*31:0*/, 10> top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue;
        VlUnpacked<IData/*23:0*/, 10> top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue;
        VlUnpacked<IData/*31:0*/, 10> top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue;
        VlUnpacked<IData/*31:0*/, 10> top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue;
        VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    };

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
