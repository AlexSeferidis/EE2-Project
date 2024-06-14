// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_QUEUE_NEW_H_
#define VERILATED_VTOP_QUEUE_NEW_H_  // guard

#include "verilated.h"

class Vtop__Syms;

class Vtop_queue_new final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(reset,0,0);
        VL_IN8(fin_flag,0,0);
        VL_OUT8(full_queue,0,0);
        VL_OUT8(en,0,0);
        VL_OUT8(match,0,0);
        CData/*3:0*/ __PVT__counter;
        CData/*3:0*/ __Vdly__counter;
        CData/*0:0*/ __Vdlyvset__colour_queue__v0;
        CData/*3:0*/ __Vdlyvdim0__colour_queue__v10;
        CData/*0:0*/ __Vdlyvset__colour_queue__v10;
        CData/*3:0*/ __Vdlyvdim0__xqueue__v10;
        CData/*0:0*/ __Vdlyvset__xqueue__v10;
        CData/*3:0*/ __Vdlyvdim0__yqueue__v10;
        CData/*0:0*/ __Vdlyvset__yqueue__v10;
        CData/*0:0*/ __Vdlyvset__xqueue__v11;
        CData/*0:0*/ __Vdlyvset__colour_queue__v11;
        CData/*0:0*/ __Vdlyvset__colour_queue__v12;
        CData/*0:0*/ __Vdlyvset__colour_queue__v13;
        CData/*0:0*/ __Vdlyvset__colour_queue__v14;
        CData/*0:0*/ __Vdlyvset__colour_queue__v15;
        CData/*0:0*/ __Vdlyvset__colour_queue__v16;
        CData/*0:0*/ __Vdlyvset__colour_queue__v17;
        CData/*0:0*/ __Vdlyvset__colour_queue__v18;
        CData/*0:0*/ __Vdlyvset__xqueue__v20;
        VL_IN16(xpixel_i,9,0);
        VL_IN16(ypixel_i,9,0);
        VL_IN16(xpixel_check,9,0);
        VL_IN16(ypixel_check,9,0);
        SData/*9:0*/ __PVT__prev_xpixel;
        SData/*9:0*/ __Vlvbound_ha6a48450__0;
        SData/*9:0*/ __Vlvbound_hb8aa41f5__0;
        SData/*9:0*/ __Vlvbound_h66ba8f5e__0;
        SData/*9:0*/ __Vlvbound_h73829ee7__0;
        SData/*9:0*/ __Vdlyvval__xqueue__v10;
        SData/*9:0*/ __Vdlyvval__yqueue__v10;
        SData/*9:0*/ __Vdlyvval__xqueue__v11;
        SData/*9:0*/ __Vdlyvval__yqueue__v11;
        SData/*9:0*/ __Vdlyvval__xqueue__v12;
        SData/*9:0*/ __Vdlyvval__yqueue__v12;
        SData/*9:0*/ __Vdlyvval__xqueue__v13;
        SData/*9:0*/ __Vdlyvval__yqueue__v13;
        SData/*9:0*/ __Vdlyvval__xqueue__v14;
        SData/*9:0*/ __Vdlyvval__yqueue__v14;
        SData/*9:0*/ __Vdlyvval__xqueue__v15;
        SData/*9:0*/ __Vdlyvval__yqueue__v15;
        SData/*9:0*/ __Vdlyvval__xqueue__v16;
        SData/*9:0*/ __Vdlyvval__yqueue__v16;
        SData/*9:0*/ __Vdlyvval__xqueue__v17;
        SData/*9:0*/ __Vdlyvval__yqueue__v17;
        SData/*9:0*/ __Vdlyvval__xqueue__v18;
        SData/*9:0*/ __Vdlyvval__yqueue__v18;
        SData/*9:0*/ __Vdlyvval__xqueue__v19;
        SData/*9:0*/ __Vdlyvval__yqueue__v19;
        VL_IN(colour_i,23,0);
        VL_OUT(colour_o,23,0);
        IData/*31:0*/ __PVT__unnamedblk1__DOT__i;
        IData/*31:0*/ __PVT__unnamedblk2__DOT__i;
        IData/*31:0*/ __PVT__unnamedblk3__DOT__i;
        IData/*23:0*/ __Vlvbound_he6b57a3a__0;
        IData/*23:0*/ __Vlvbound_ha987a96c__0;
        IData/*23:0*/ __Vdlyvval__colour_queue__v10;
        IData/*23:0*/ __Vdlyvval__colour_queue__v11;
        IData/*23:0*/ __Vdlyvval__colour_queue__v12;
    };
    struct {
        IData/*23:0*/ __Vdlyvval__colour_queue__v13;
        IData/*23:0*/ __Vdlyvval__colour_queue__v14;
        IData/*23:0*/ __Vdlyvval__colour_queue__v15;
        IData/*23:0*/ __Vdlyvval__colour_queue__v16;
        IData/*23:0*/ __Vdlyvval__colour_queue__v17;
        IData/*23:0*/ __Vdlyvval__colour_queue__v18;
        IData/*23:0*/ __Vdlyvval__colour_queue__v19;
        VlUnpacked<IData/*23:0*/, 10> __PVT__colour_queue;
        VlUnpacked<SData/*9:0*/, 10> __PVT__xqueue;
        VlUnpacked<SData/*9:0*/, 10> __PVT__yqueue;
    };

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_queue_new(Vtop__Syms* symsp, const char* name);
    ~Vtop_queue_new();
    VL_UNCOPYABLE(Vtop_queue_new);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
