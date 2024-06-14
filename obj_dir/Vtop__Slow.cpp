// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop.h"
#include "Vtop__Syms.h"

//==========

VL_CTOR_IMP(Vtop) {
    Vtop__Syms* __restrict vlSymsp = __VlSymsp = new Vtop__Syms(this, name());
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    VL_CELL(__PVT__top__DOT__genblk1__BRA__0__KET____DOT__engine, Vtop_mandelbrot_engine);
    VL_CELL(__PVT__top__DOT__genblk1__BRA__1__KET____DOT__engine, Vtop_mandelbrot_engine);
    VL_CELL(__PVT__top__DOT__genblk1__BRA__2__KET____DOT__engine, Vtop_mandelbrot_engine);
    VL_CELL(__PVT__top__DOT__genblk1__BRA__3__KET____DOT__engine, Vtop_mandelbrot_engine);
    VL_CELL(__PVT__top__DOT__genblk1__BRA__4__KET____DOT__engine, Vtop_mandelbrot_engine);
    VL_CELL(__PVT__top__DOT__genblk1__BRA__5__KET____DOT__engine, Vtop_mandelbrot_engine);
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vtop::__Vconfigure(Vtop__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vtop::~Vtop() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vtop::_initial__TOP__1(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_initial__TOP__1\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->valid = 0U;
    VL_WRITEF("Loading rom.\n");
    VL_READMEM_N(true, 24, 256, 0, std::string("lut.hex")
                 , vlTOPp->top__DOT__lut_rom__DOT__lut_array
                 , 0, ~0ULL);
    VL_WRITEF("rom Loaded\n");
    vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__prev_xpixel = 0x3ffU;
    vlTOPp->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__queue_block__en = 0U;
    vlTOPp->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__queue_block__match = 0U;
    vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[0U] = 0U;
    vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[0U] = 0x3ffU;
    vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[0U] = 0x3ffU;
    vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[1U] = 0U;
    vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[1U] = 0x3ffU;
    vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[1U] = 0x3ffU;
    vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[2U] = 0U;
    vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[2U] = 0x3ffU;
    vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[2U] = 0x3ffU;
    vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[3U] = 0U;
    vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[3U] = 0x3ffU;
    vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[3U] = 0x3ffU;
    vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[4U] = 0U;
    vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[4U] = 0x3ffU;
    vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[4U] = 0x3ffU;
    vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[5U] = 0U;
    vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[5U] = 0x3ffU;
    vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[5U] = 0x3ffU;
    vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[6U] = 0U;
    vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[6U] = 0x3ffU;
    vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[6U] = 0x3ffU;
    vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[7U] = 0U;
    vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[7U] = 0x3ffU;
    vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[7U] = 0x3ffU;
    vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[8U] = 0U;
    vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[8U] = 0x3ffU;
    vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[8U] = 0x3ffU;
    vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[9U] = 0U;
    vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[9U] = 0x3ffU;
    vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[9U] = 0x3ffU;
    vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__unnamedblk1__DOT__i = 0xaU;
    vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__prev_xpixel = 0x3ffU;
    vlTOPp->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__queue_block__en = 0U;
    vlTOPp->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__queue_block__match = 0U;
    vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[0U] = 0U;
    vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[0U] = 0x3ffU;
    vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[0U] = 0x3ffU;
    vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[1U] = 0U;
    vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[1U] = 0x3ffU;
    vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[1U] = 0x3ffU;
    vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[2U] = 0U;
    vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[2U] = 0x3ffU;
    vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[2U] = 0x3ffU;
    vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[3U] = 0U;
    vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[3U] = 0x3ffU;
    vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[3U] = 0x3ffU;
    vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[4U] = 0U;
    vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[4U] = 0x3ffU;
    vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[4U] = 0x3ffU;
    vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[5U] = 0U;
    vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[5U] = 0x3ffU;
    vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[5U] = 0x3ffU;
    vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[6U] = 0U;
    vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[6U] = 0x3ffU;
    vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[6U] = 0x3ffU;
    vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[7U] = 0U;
    vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[7U] = 0x3ffU;
    vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[7U] = 0x3ffU;
    vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[8U] = 0U;
    vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[8U] = 0x3ffU;
    vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[8U] = 0x3ffU;
    vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[9U] = 0U;
    vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[9U] = 0x3ffU;
    vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[9U] = 0x3ffU;
    vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__unnamedblk1__DOT__i = 0xaU;
    vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__prev_xpixel = 0x3ffU;
    vlTOPp->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__queue_block__en = 0U;
    vlTOPp->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__queue_block__match = 0U;
    vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[0U] = 0U;
    vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[0U] = 0x3ffU;
    vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[0U] = 0x3ffU;
    vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[1U] = 0U;
    vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[1U] = 0x3ffU;
    vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[1U] = 0x3ffU;
    vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[2U] = 0U;
    vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[2U] = 0x3ffU;
    vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[2U] = 0x3ffU;
    vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[3U] = 0U;
    vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[3U] = 0x3ffU;
    vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[3U] = 0x3ffU;
    vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[4U] = 0U;
    vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[4U] = 0x3ffU;
    vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[4U] = 0x3ffU;
    vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[5U] = 0U;
    vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[5U] = 0x3ffU;
    vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[5U] = 0x3ffU;
    vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[6U] = 0U;
    vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[6U] = 0x3ffU;
    vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[6U] = 0x3ffU;
    vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[7U] = 0U;
    vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[7U] = 0x3ffU;
    vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[7U] = 0x3ffU;
    vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[8U] = 0U;
    vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[8U] = 0x3ffU;
    vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[8U] = 0x3ffU;
    vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[9U] = 0U;
    vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[9U] = 0x3ffU;
    vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[9U] = 0x3ffU;
    vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__unnamedblk1__DOT__i = 0xaU;
    vlTOPp->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__prev_xpixel = 0x3ffU;
    vlTOPp->top__DOT____Vcellout__genblk1__BRA__3__KET____DOT__queue_block__en = 0U;
    vlTOPp->top__DOT____Vcellout__genblk1__BRA__3__KET____DOT__queue_block__match = 0U;
    vlTOPp->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue[0U] = 0U;
    vlTOPp->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue[0U] = 0x3ffU;
    vlTOPp->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue[0U] = 0x3ffU;
    vlTOPp->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue[1U] = 0U;
    vlTOPp->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue[1U] = 0x3ffU;
    vlTOPp->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue[1U] = 0x3ffU;
    vlTOPp->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue[2U] = 0U;
    vlTOPp->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue[2U] = 0x3ffU;
    vlTOPp->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue[2U] = 0x3ffU;
    vlTOPp->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue[3U] = 0U;
    vlTOPp->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue[3U] = 0x3ffU;
    vlTOPp->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue[3U] = 0x3ffU;
    vlTOPp->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue[4U] = 0U;
    vlTOPp->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue[4U] = 0x3ffU;
    vlTOPp->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue[4U] = 0x3ffU;
    vlTOPp->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue[5U] = 0U;
    vlTOPp->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue[5U] = 0x3ffU;
    vlTOPp->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue[5U] = 0x3ffU;
    vlTOPp->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue[6U] = 0U;
    vlTOPp->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue[6U] = 0x3ffU;
    vlTOPp->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue[6U] = 0x3ffU;
    vlTOPp->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue[7U] = 0U;
    vlTOPp->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue[7U] = 0x3ffU;
    vlTOPp->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue[7U] = 0x3ffU;
    vlTOPp->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue[8U] = 0U;
    vlTOPp->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue[8U] = 0x3ffU;
    vlTOPp->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue[8U] = 0x3ffU;
    vlTOPp->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue[9U] = 0U;
    vlTOPp->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue[9U] = 0x3ffU;
    vlTOPp->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue[9U] = 0x3ffU;
    vlTOPp->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__unnamedblk1__DOT__i = 0xaU;
    vlTOPp->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__prev_xpixel = 0x3ffU;
    vlTOPp->top__DOT____Vcellout__genblk1__BRA__4__KET____DOT__queue_block__en = 0U;
    vlTOPp->top__DOT____Vcellout__genblk1__BRA__4__KET____DOT__queue_block__match = 0U;
    vlTOPp->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue[0U] = 0U;
    vlTOPp->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue[0U] = 0x3ffU;
    vlTOPp->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue[0U] = 0x3ffU;
    vlTOPp->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue[1U] = 0U;
    vlTOPp->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue[1U] = 0x3ffU;
    vlTOPp->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue[1U] = 0x3ffU;
    vlTOPp->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue[2U] = 0U;
    vlTOPp->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue[2U] = 0x3ffU;
    vlTOPp->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue[2U] = 0x3ffU;
    vlTOPp->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue[3U] = 0U;
    vlTOPp->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue[3U] = 0x3ffU;
    vlTOPp->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue[3U] = 0x3ffU;
    vlTOPp->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue[4U] = 0U;
    vlTOPp->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue[4U] = 0x3ffU;
    vlTOPp->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue[4U] = 0x3ffU;
    vlTOPp->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue[5U] = 0U;
    vlTOPp->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue[5U] = 0x3ffU;
    vlTOPp->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue[5U] = 0x3ffU;
    vlTOPp->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue[6U] = 0U;
    vlTOPp->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue[6U] = 0x3ffU;
    vlTOPp->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue[6U] = 0x3ffU;
    vlTOPp->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue[7U] = 0U;
    vlTOPp->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue[7U] = 0x3ffU;
    vlTOPp->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue[7U] = 0x3ffU;
    vlTOPp->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue[8U] = 0U;
    vlTOPp->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue[8U] = 0x3ffU;
    vlTOPp->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue[8U] = 0x3ffU;
    vlTOPp->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue[9U] = 0U;
    vlTOPp->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue[9U] = 0x3ffU;
    vlTOPp->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue[9U] = 0x3ffU;
    vlTOPp->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__unnamedblk1__DOT__i = 0xaU;
    vlTOPp->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__prev_xpixel = 0x3ffU;
    vlTOPp->top__DOT____Vcellout__genblk1__BRA__5__KET____DOT__queue_block__en = 0U;
    vlTOPp->top__DOT____Vcellout__genblk1__BRA__5__KET____DOT__queue_block__match = 0U;
    vlTOPp->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue[0U] = 0U;
    vlTOPp->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue[0U] = 0x3ffU;
    vlTOPp->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue[0U] = 0x3ffU;
    vlTOPp->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue[1U] = 0U;
    vlTOPp->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue[1U] = 0x3ffU;
    vlTOPp->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue[1U] = 0x3ffU;
    vlTOPp->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue[2U] = 0U;
    vlTOPp->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue[2U] = 0x3ffU;
    vlTOPp->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue[2U] = 0x3ffU;
    vlTOPp->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue[3U] = 0U;
    vlTOPp->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue[3U] = 0x3ffU;
    vlTOPp->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue[3U] = 0x3ffU;
    vlTOPp->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue[4U] = 0U;
    vlTOPp->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue[4U] = 0x3ffU;
    vlTOPp->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue[4U] = 0x3ffU;
    vlTOPp->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue[5U] = 0U;
    vlTOPp->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue[5U] = 0x3ffU;
    vlTOPp->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue[5U] = 0x3ffU;
    vlTOPp->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue[6U] = 0U;
    vlTOPp->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue[6U] = 0x3ffU;
    vlTOPp->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue[6U] = 0x3ffU;
    vlTOPp->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue[7U] = 0U;
    vlTOPp->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue[7U] = 0x3ffU;
    vlTOPp->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue[7U] = 0x3ffU;
    vlTOPp->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue[8U] = 0U;
    vlTOPp->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue[8U] = 0x3ffU;
    vlTOPp->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue[8U] = 0x3ffU;
    vlTOPp->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue[9U] = 0U;
    vlTOPp->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue[9U] = 0x3ffU;
    vlTOPp->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue[9U] = 0x3ffU;
    vlTOPp->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__unnamedblk1__DOT__i = 0xaU;
    vlTOPp->top__DOT__distributor__DOT__y0 = 0U;
    vlTOPp->top__DOT__distributor__DOT__x0 = 0U;
}

void Vtop::_settle__TOP__6(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_settle__TOP__6\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->r = (0xffU & vlTOPp->top__DOT__colour_o_wire);
    vlTOPp->g = (0xffU & (vlTOPp->top__DOT__colour_o_wire 
                          >> 8U));
    vlTOPp->b = (0xffU & (vlTOPp->top__DOT__colour_o_wire 
                          >> 0x10U));
    vlTOPp->top__DOT__colour_bus_o[0U] = vlTOPp->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__queue_block__colour_o;
    vlTOPp->top__DOT__colour_bus_o[1U] = vlTOPp->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__queue_block__colour_o;
    vlTOPp->top__DOT__colour_bus_o[2U] = vlTOPp->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__queue_block__colour_o;
    vlTOPp->top__DOT__colour_bus_o[3U] = vlTOPp->top__DOT____Vcellout__genblk1__BRA__3__KET____DOT__queue_block__colour_o;
    vlTOPp->top__DOT__colour_bus_o[4U] = vlTOPp->top__DOT____Vcellout__genblk1__BRA__4__KET____DOT__queue_block__colour_o;
    vlTOPp->top__DOT__colour_bus_o[5U] = vlTOPp->top__DOT____Vcellout__genblk1__BRA__5__KET____DOT__queue_block__colour_o;
    vlTOPp->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__queue_block__full_queue 
        = (0xaU == (IData)(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__counter));
    vlTOPp->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__queue_block__full_queue 
        = (0xaU == (IData)(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__counter));
    vlTOPp->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__queue_block__full_queue 
        = (0xaU == (IData)(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__counter));
    vlTOPp->top__DOT____Vcellout__genblk1__BRA__3__KET____DOT__queue_block__full_queue 
        = (0xaU == (IData)(vlTOPp->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__counter));
    vlTOPp->top__DOT____Vcellout__genblk1__BRA__4__KET____DOT__queue_block__full_queue 
        = (0xaU == (IData)(vlTOPp->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__counter));
    vlTOPp->top__DOT____Vcellout__genblk1__BRA__5__KET____DOT__queue_block__full_queue 
        = (0xaU == (IData)(vlTOPp->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__counter));
    vlTOPp->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__queue_block__en = 1U;
    if ((0xaU != (IData)(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__counter))) {
        if ((0U == (IData)(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__counter))) {
            vlTOPp->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__queue_block__en = 0U;
        }
    }
    vlTOPp->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__queue_block__en = 1U;
    if ((0xaU != (IData)(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__counter))) {
        if ((0U == (IData)(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__counter))) {
            vlTOPp->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__queue_block__en = 0U;
        }
    }
    vlTOPp->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__queue_block__en = 1U;
    if ((0xaU != (IData)(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__counter))) {
        if ((0U == (IData)(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__counter))) {
            vlTOPp->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__queue_block__en = 0U;
        }
    }
    vlTOPp->top__DOT____Vcellout__genblk1__BRA__3__KET____DOT__queue_block__en = 1U;
    if ((0xaU != (IData)(vlTOPp->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__counter))) {
        if ((0U == (IData)(vlTOPp->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__counter))) {
            vlTOPp->top__DOT____Vcellout__genblk1__BRA__3__KET____DOT__queue_block__en = 0U;
        }
    }
    vlTOPp->top__DOT____Vcellout__genblk1__BRA__4__KET____DOT__queue_block__en = 1U;
    if ((0xaU != (IData)(vlTOPp->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__counter))) {
        if ((0U == (IData)(vlTOPp->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__counter))) {
            vlTOPp->top__DOT____Vcellout__genblk1__BRA__4__KET____DOT__queue_block__en = 0U;
        }
    }
    vlTOPp->top__DOT____Vcellout__genblk1__BRA__5__KET____DOT__queue_block__en = 1U;
    if ((0xaU != (IData)(vlTOPp->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__counter))) {
        if ((0U == (IData)(vlTOPp->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__counter))) {
            vlTOPp->top__DOT____Vcellout__genblk1__BRA__5__KET____DOT__queue_block__en = 0U;
        }
    }
    vlTOPp->top__DOT__iterations_bus[0U] = vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__curr_iterations;
    vlTOPp->top__DOT__iterations_bus[1U] = vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__curr_iterations;
    vlTOPp->top__DOT__iterations_bus[2U] = vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__curr_iterations;
    vlTOPp->top__DOT__iterations_bus[3U] = vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__curr_iterations;
    vlTOPp->top__DOT__iterations_bus[4U] = vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__curr_iterations;
    vlTOPp->top__DOT__iterations_bus[5U] = vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__curr_iterations;
    vlTOPp->top__DOT__ypixel_bus[0U] = vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.ypixel;
    vlTOPp->top__DOT__xpixel_bus[0U] = vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.xpixel;
    vlTOPp->top__DOT__ypixel_bus[1U] = vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.ypixel;
    vlTOPp->top__DOT__xpixel_bus[1U] = vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.xpixel;
    vlTOPp->top__DOT__ypixel_bus[2U] = vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.ypixel;
    vlTOPp->top__DOT__xpixel_bus[2U] = vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.xpixel;
    vlTOPp->top__DOT__ypixel_bus[3U] = vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.ypixel;
    vlTOPp->top__DOT__xpixel_bus[3U] = vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.xpixel;
    vlTOPp->top__DOT__ypixel_bus[4U] = vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.ypixel;
    vlTOPp->top__DOT__xpixel_bus[4U] = vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.xpixel;
    vlTOPp->top__DOT__ypixel_bus[5U] = vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.ypixel;
    vlTOPp->top__DOT__xpixel_bus[5U] = vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.xpixel;
    vlTOPp->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__queue_block__match 
        = (((IData)(vlTOPp->top__DOT__xpixel_wire) 
            == vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue
            [0U]) & ((IData)(vlTOPp->top__DOT__ypixel_wire) 
                     == vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue
                     [0U]));
    vlTOPp->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__queue_block__match 
        = (((IData)(vlTOPp->top__DOT__xpixel_wire) 
            == vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue
            [0U]) & ((IData)(vlTOPp->top__DOT__ypixel_wire) 
                     == vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue
                     [0U]));
    vlTOPp->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__queue_block__match 
        = (((IData)(vlTOPp->top__DOT__xpixel_wire) 
            == vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue
            [0U]) & ((IData)(vlTOPp->top__DOT__ypixel_wire) 
                     == vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue
                     [0U]));
    vlTOPp->top__DOT____Vcellout__genblk1__BRA__3__KET____DOT__queue_block__match 
        = (((IData)(vlTOPp->top__DOT__xpixel_wire) 
            == vlTOPp->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue
            [0U]) & ((IData)(vlTOPp->top__DOT__ypixel_wire) 
                     == vlTOPp->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue
                     [0U]));
    vlTOPp->top__DOT____Vcellout__genblk1__BRA__4__KET____DOT__queue_block__match 
        = (((IData)(vlTOPp->top__DOT__xpixel_wire) 
            == vlTOPp->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue
            [0U]) & ((IData)(vlTOPp->top__DOT__ypixel_wire) 
                     == vlTOPp->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue
                     [0U]));
    vlTOPp->top__DOT____Vcellout__genblk1__BRA__5__KET____DOT__queue_block__match 
        = (((IData)(vlTOPp->top__DOT__xpixel_wire) 
            == vlTOPp->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue
            [0U]) & ((IData)(vlTOPp->top__DOT__ypixel_wire) 
                     == vlTOPp->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue
                     [0U]));
    vlTOPp->top__DOT__distributor__DOT____Vlvbound1 
        = (0x3ffU & VL_MODDIV_III(32, (IData)(vlTOPp->top__DOT__distributor__DOT__x0), (IData)(0x280U)));
    vlTOPp->top__DOT____Vcellout__distributor__x[0U] 
        = vlTOPp->top__DOT__distributor__DOT____Vlvbound1;
    vlTOPp->top__DOT__distributor__DOT____Vlvbound1 
        = (0x3ffU & VL_MODDIV_III(32, ((IData)(1U) 
                                       + (IData)(vlTOPp->top__DOT__distributor__DOT__x0)), (IData)(0x280U)));
    vlTOPp->top__DOT____Vcellout__distributor__x[1U] 
        = vlTOPp->top__DOT__distributor__DOT____Vlvbound1;
    vlTOPp->top__DOT__distributor__DOT____Vlvbound1 
        = (0x3ffU & VL_MODDIV_III(32, ((IData)(2U) 
                                       + (IData)(vlTOPp->top__DOT__distributor__DOT__x0)), (IData)(0x280U)));
    vlTOPp->top__DOT____Vcellout__distributor__x[2U] 
        = vlTOPp->top__DOT__distributor__DOT____Vlvbound1;
    vlTOPp->top__DOT__distributor__DOT____Vlvbound1 
        = (0x3ffU & VL_MODDIV_III(32, ((IData)(3U) 
                                       + (IData)(vlTOPp->top__DOT__distributor__DOT__x0)), (IData)(0x280U)));
    vlTOPp->top__DOT____Vcellout__distributor__x[3U] 
        = vlTOPp->top__DOT__distributor__DOT____Vlvbound1;
    vlTOPp->top__DOT__distributor__DOT____Vlvbound1 
        = (0x3ffU & VL_MODDIV_III(32, ((IData)(4U) 
                                       + (IData)(vlTOPp->top__DOT__distributor__DOT__x0)), (IData)(0x280U)));
    vlTOPp->top__DOT____Vcellout__distributor__x[4U] 
        = vlTOPp->top__DOT__distributor__DOT____Vlvbound1;
    vlTOPp->top__DOT__distributor__DOT____Vlvbound1 
        = (0x3ffU & VL_MODDIV_III(32, ((IData)(5U) 
                                       + (IData)(vlTOPp->top__DOT__distributor__DOT__x0)), (IData)(0x280U)));
    vlTOPp->top__DOT____Vcellout__distributor__x[5U] 
        = vlTOPp->top__DOT__distributor__DOT____Vlvbound1;
    vlTOPp->top__DOT__distributor__DOT____Vlvbound2 
        = (0x3ffU & VL_MODDIV_III(32, ((IData)(vlTOPp->top__DOT__distributor__DOT__y0) 
                                       + VL_DIV_III(32, (IData)(vlTOPp->top__DOT__distributor__DOT__x0), (IData)(0x280U))), (IData)(0x1e0U)));
    vlTOPp->top__DOT____Vcellout__distributor__y[0U] 
        = vlTOPp->top__DOT__distributor__DOT____Vlvbound2;
    vlTOPp->top__DOT__distributor__DOT____Vlvbound2 
        = (0x3ffU & VL_MODDIV_III(32, ((IData)(vlTOPp->top__DOT__distributor__DOT__y0) 
                                       + VL_DIV_III(32, 
                                                    ((IData)(1U) 
                                                     + (IData)(vlTOPp->top__DOT__distributor__DOT__x0)), (IData)(0x280U))), (IData)(0x1e0U)));
    vlTOPp->top__DOT____Vcellout__distributor__y[1U] 
        = vlTOPp->top__DOT__distributor__DOT____Vlvbound2;
    vlTOPp->top__DOT__distributor__DOT____Vlvbound2 
        = (0x3ffU & VL_MODDIV_III(32, ((IData)(vlTOPp->top__DOT__distributor__DOT__y0) 
                                       + VL_DIV_III(32, 
                                                    ((IData)(2U) 
                                                     + (IData)(vlTOPp->top__DOT__distributor__DOT__x0)), (IData)(0x280U))), (IData)(0x1e0U)));
    vlTOPp->top__DOT____Vcellout__distributor__y[2U] 
        = vlTOPp->top__DOT__distributor__DOT____Vlvbound2;
    vlTOPp->top__DOT__distributor__DOT____Vlvbound2 
        = (0x3ffU & VL_MODDIV_III(32, ((IData)(vlTOPp->top__DOT__distributor__DOT__y0) 
                                       + VL_DIV_III(32, 
                                                    ((IData)(3U) 
                                                     + (IData)(vlTOPp->top__DOT__distributor__DOT__x0)), (IData)(0x280U))), (IData)(0x1e0U)));
    vlTOPp->top__DOT____Vcellout__distributor__y[3U] 
        = vlTOPp->top__DOT__distributor__DOT____Vlvbound2;
    vlTOPp->top__DOT__distributor__DOT____Vlvbound2 
        = (0x3ffU & VL_MODDIV_III(32, ((IData)(vlTOPp->top__DOT__distributor__DOT__y0) 
                                       + VL_DIV_III(32, 
                                                    ((IData)(4U) 
                                                     + (IData)(vlTOPp->top__DOT__distributor__DOT__x0)), (IData)(0x280U))), (IData)(0x1e0U)));
    vlTOPp->top__DOT____Vcellout__distributor__y[4U] 
        = vlTOPp->top__DOT__distributor__DOT____Vlvbound2;
    vlTOPp->top__DOT__distributor__DOT____Vlvbound2 
        = (0x3ffU & VL_MODDIV_III(32, ((IData)(vlTOPp->top__DOT__distributor__DOT__y0) 
                                       + VL_DIV_III(32, 
                                                    ((IData)(5U) 
                                                     + (IData)(vlTOPp->top__DOT__distributor__DOT__x0)), (IData)(0x280U))), (IData)(0x1e0U)));
    vlTOPp->top__DOT____Vcellout__distributor__y[5U] 
        = vlTOPp->top__DOT__distributor__DOT____Vlvbound2;
    vlTOPp->top__DOT__full_queue_bus = ((0x3eU & (IData)(vlTOPp->top__DOT__full_queue_bus)) 
                                        | (IData)(vlTOPp->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__queue_block__full_queue));
    vlTOPp->top__DOT__full_queue_bus = ((0x3dU & (IData)(vlTOPp->top__DOT__full_queue_bus)) 
                                        | ((IData)(vlTOPp->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__queue_block__full_queue) 
                                           << 1U));
    vlTOPp->top__DOT__full_queue_bus = ((0x3bU & (IData)(vlTOPp->top__DOT__full_queue_bus)) 
                                        | ((IData)(vlTOPp->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__queue_block__full_queue) 
                                           << 2U));
    vlTOPp->top__DOT__full_queue_bus = ((0x37U & (IData)(vlTOPp->top__DOT__full_queue_bus)) 
                                        | ((IData)(vlTOPp->top__DOT____Vcellout__genblk1__BRA__3__KET____DOT__queue_block__full_queue) 
                                           << 3U));
    vlTOPp->top__DOT__full_queue_bus = ((0x2fU & (IData)(vlTOPp->top__DOT__full_queue_bus)) 
                                        | ((IData)(vlTOPp->top__DOT____Vcellout__genblk1__BRA__4__KET____DOT__queue_block__full_queue) 
                                           << 4U));
    vlTOPp->top__DOT__full_queue_bus = ((0x1fU & (IData)(vlTOPp->top__DOT__full_queue_bus)) 
                                        | ((IData)(vlTOPp->top__DOT____Vcellout__genblk1__BRA__5__KET____DOT__queue_block__full_queue) 
                                           << 5U));
    vlTOPp->top__DOT__en_bus = ((0x3eU & (IData)(vlTOPp->top__DOT__en_bus)) 
                                | (IData)(vlTOPp->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__queue_block__en));
    vlTOPp->top__DOT__en_bus = ((0x3dU & (IData)(vlTOPp->top__DOT__en_bus)) 
                                | ((IData)(vlTOPp->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__queue_block__en) 
                                   << 1U));
    vlTOPp->top__DOT__en_bus = ((0x3bU & (IData)(vlTOPp->top__DOT__en_bus)) 
                                | ((IData)(vlTOPp->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__queue_block__en) 
                                   << 2U));
    vlTOPp->top__DOT__en_bus = ((0x37U & (IData)(vlTOPp->top__DOT__en_bus)) 
                                | ((IData)(vlTOPp->top__DOT____Vcellout__genblk1__BRA__3__KET____DOT__queue_block__en) 
                                   << 3U));
    vlTOPp->top__DOT__en_bus = ((0x2fU & (IData)(vlTOPp->top__DOT__en_bus)) 
                                | ((IData)(vlTOPp->top__DOT____Vcellout__genblk1__BRA__4__KET____DOT__queue_block__en) 
                                   << 4U));
    vlTOPp->top__DOT__en_bus = ((0x1fU & (IData)(vlTOPp->top__DOT__en_bus)) 
                                | ((IData)(vlTOPp->top__DOT____Vcellout__genblk1__BRA__5__KET____DOT__queue_block__en) 
                                   << 5U));
    vlTOPp->top__DOT____Vcellinp__lut_rom__iterations[5U] 
        = vlTOPp->top__DOT__iterations_bus[5U];
    vlTOPp->top__DOT____Vcellinp__lut_rom__iterations[4U] 
        = vlTOPp->top__DOT__iterations_bus[4U];
    vlTOPp->top__DOT____Vcellinp__lut_rom__iterations[3U] 
        = vlTOPp->top__DOT__iterations_bus[3U];
    vlTOPp->top__DOT____Vcellinp__lut_rom__iterations[2U] 
        = vlTOPp->top__DOT__iterations_bus[2U];
    vlTOPp->top__DOT____Vcellinp__lut_rom__iterations[1U] 
        = vlTOPp->top__DOT__iterations_bus[1U];
    vlTOPp->top__DOT____Vcellinp__lut_rom__iterations[0U] 
        = vlTOPp->top__DOT__iterations_bus[0U];
    vlTOPp->top__DOT__match_bus = ((0x3eU & (IData)(vlTOPp->top__DOT__match_bus)) 
                                   | (IData)(vlTOPp->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__queue_block__match));
    vlTOPp->top__DOT__match_bus = ((0x3dU & (IData)(vlTOPp->top__DOT__match_bus)) 
                                   | ((IData)(vlTOPp->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__queue_block__match) 
                                      << 1U));
    vlTOPp->top__DOT__match_bus = ((0x3bU & (IData)(vlTOPp->top__DOT__match_bus)) 
                                   | ((IData)(vlTOPp->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__queue_block__match) 
                                      << 2U));
    vlTOPp->top__DOT__match_bus = ((0x37U & (IData)(vlTOPp->top__DOT__match_bus)) 
                                   | ((IData)(vlTOPp->top__DOT____Vcellout__genblk1__BRA__3__KET____DOT__queue_block__match) 
                                      << 3U));
    vlTOPp->top__DOT__match_bus = ((0x2fU & (IData)(vlTOPp->top__DOT__match_bus)) 
                                   | ((IData)(vlTOPp->top__DOT____Vcellout__genblk1__BRA__4__KET____DOT__queue_block__match) 
                                      << 4U));
    vlTOPp->top__DOT__match_bus = ((0x1fU & (IData)(vlTOPp->top__DOT__match_bus)) 
                                   | ((IData)(vlTOPp->top__DOT____Vcellout__genblk1__BRA__5__KET____DOT__queue_block__match) 
                                      << 5U));
    vlTOPp->top__DOT__x[5U] = vlTOPp->top__DOT____Vcellout__distributor__x
        [5U];
    vlTOPp->top__DOT__x[4U] = vlTOPp->top__DOT____Vcellout__distributor__x
        [4U];
    vlTOPp->top__DOT__x[3U] = vlTOPp->top__DOT____Vcellout__distributor__x
        [3U];
    vlTOPp->top__DOT__x[2U] = vlTOPp->top__DOT____Vcellout__distributor__x
        [2U];
    vlTOPp->top__DOT__x[1U] = vlTOPp->top__DOT____Vcellout__distributor__x
        [1U];
    vlTOPp->top__DOT__x[0U] = vlTOPp->top__DOT____Vcellout__distributor__x
        [0U];
    vlTOPp->top__DOT__y[5U] = vlTOPp->top__DOT____Vcellout__distributor__y
        [5U];
    vlTOPp->top__DOT__y[4U] = vlTOPp->top__DOT____Vcellout__distributor__y
        [4U];
    vlTOPp->top__DOT__y[3U] = vlTOPp->top__DOT____Vcellout__distributor__y
        [3U];
    vlTOPp->top__DOT__y[2U] = vlTOPp->top__DOT____Vcellout__distributor__y
        [2U];
    vlTOPp->top__DOT__y[1U] = vlTOPp->top__DOT____Vcellout__distributor__y
        [1U];
    vlTOPp->top__DOT__y[0U] = vlTOPp->top__DOT____Vcellout__distributor__y
        [0U];
    vlTOPp->top__DOT__lut_rom__DOT____Vlvbound1 = vlTOPp->top__DOT__lut_rom__DOT__lut_array
        [((0x32U == vlTOPp->top__DOT____Vcellinp__lut_rom__iterations
           [0U]) ? 0xffU : (0xffU & ((IData)(0x2aU) 
                                     * vlTOPp->top__DOT____Vcellinp__lut_rom__iterations
                                     [0U])))];
    vlTOPp->top__DOT____Vcellout__lut_rom__rgb_val[0U] 
        = vlTOPp->top__DOT__lut_rom__DOT____Vlvbound1;
    vlTOPp->top__DOT__lut_rom__DOT____Vlvbound1 = vlTOPp->top__DOT__lut_rom__DOT__lut_array
        [((0x32U == vlTOPp->top__DOT____Vcellinp__lut_rom__iterations
           [1U]) ? 0xffU : (0xffU & ((IData)(0x2aU) 
                                     * vlTOPp->top__DOT____Vcellinp__lut_rom__iterations
                                     [1U])))];
    vlTOPp->top__DOT____Vcellout__lut_rom__rgb_val[1U] 
        = vlTOPp->top__DOT__lut_rom__DOT____Vlvbound1;
    vlTOPp->top__DOT__lut_rom__DOT____Vlvbound1 = vlTOPp->top__DOT__lut_rom__DOT__lut_array
        [((0x32U == vlTOPp->top__DOT____Vcellinp__lut_rom__iterations
           [2U]) ? 0xffU : (0xffU & ((IData)(0x2aU) 
                                     * vlTOPp->top__DOT____Vcellinp__lut_rom__iterations
                                     [2U])))];
    vlTOPp->top__DOT____Vcellout__lut_rom__rgb_val[2U] 
        = vlTOPp->top__DOT__lut_rom__DOT____Vlvbound1;
    vlTOPp->top__DOT__lut_rom__DOT____Vlvbound1 = vlTOPp->top__DOT__lut_rom__DOT__lut_array
        [((0x32U == vlTOPp->top__DOT____Vcellinp__lut_rom__iterations
           [3U]) ? 0xffU : (0xffU & ((IData)(0x2aU) 
                                     * vlTOPp->top__DOT____Vcellinp__lut_rom__iterations
                                     [3U])))];
    vlTOPp->top__DOT____Vcellout__lut_rom__rgb_val[3U] 
        = vlTOPp->top__DOT__lut_rom__DOT____Vlvbound1;
    vlTOPp->top__DOT__lut_rom__DOT____Vlvbound1 = vlTOPp->top__DOT__lut_rom__DOT__lut_array
        [((0x32U == vlTOPp->top__DOT____Vcellinp__lut_rom__iterations
           [4U]) ? 0xffU : (0xffU & ((IData)(0x2aU) 
                                     * vlTOPp->top__DOT____Vcellinp__lut_rom__iterations
                                     [4U])))];
    vlTOPp->top__DOT____Vcellout__lut_rom__rgb_val[4U] 
        = vlTOPp->top__DOT__lut_rom__DOT____Vlvbound1;
    vlTOPp->top__DOT__lut_rom__DOT____Vlvbound1 = vlTOPp->top__DOT__lut_rom__DOT__lut_array
        [((0x32U == vlTOPp->top__DOT____Vcellinp__lut_rom__iterations
           [5U]) ? 0xffU : (0xffU & ((IData)(0x2aU) 
                                     * vlTOPp->top__DOT____Vcellinp__lut_rom__iterations
                                     [5U])))];
    vlTOPp->top__DOT____Vcellout__lut_rom__rgb_val[5U] 
        = vlTOPp->top__DOT__lut_rom__DOT____Vlvbound1;
    if ((1U & (IData)(vlTOPp->top__DOT__match_bus))) {
        vlTOPp->top__DOT__j = 0U;
    }
    if ((2U & (IData)(vlTOPp->top__DOT__match_bus))) {
        vlTOPp->top__DOT__j = 1U;
    }
    if ((4U & (IData)(vlTOPp->top__DOT__match_bus))) {
        vlTOPp->top__DOT__j = 2U;
    }
    if ((8U & (IData)(vlTOPp->top__DOT__match_bus))) {
        vlTOPp->top__DOT__j = 3U;
    }
    if ((0x10U & (IData)(vlTOPp->top__DOT__match_bus))) {
        vlTOPp->top__DOT__j = 4U;
    }
    if ((0x20U & (IData)(vlTOPp->top__DOT__match_bus))) {
        vlTOPp->top__DOT__j = 5U;
    }
    vlTOPp->top__DOT__colour_bus_i[5U] = vlTOPp->top__DOT____Vcellout__lut_rom__rgb_val
        [5U];
    vlTOPp->top__DOT__colour_bus_i[4U] = vlTOPp->top__DOT____Vcellout__lut_rom__rgb_val
        [4U];
    vlTOPp->top__DOT__colour_bus_i[3U] = vlTOPp->top__DOT____Vcellout__lut_rom__rgb_val
        [3U];
    vlTOPp->top__DOT__colour_bus_i[2U] = vlTOPp->top__DOT____Vcellout__lut_rom__rgb_val
        [2U];
    vlTOPp->top__DOT__colour_bus_i[1U] = vlTOPp->top__DOT____Vcellout__lut_rom__rgb_val
        [1U];
    vlTOPp->top__DOT__colour_bus_i[0U] = vlTOPp->top__DOT____Vcellout__lut_rom__rgb_val
        [0U];
}

void Vtop::_eval_initial(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval_initial\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
    vlTOPp->__Vm_traceActivity[5U] = 1U;
    vlTOPp->__Vm_traceActivity[4U] = 1U;
    vlTOPp->__Vm_traceActivity[3U] = 1U;
    vlTOPp->__Vm_traceActivity[2U] = 1U;
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

void Vtop::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::final\n"); );
    // Variables
    Vtop__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vtop::_eval_settle(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval_settle\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__6(vlSymsp);
    vlTOPp->__Vm_traceActivity[5U] = 1U;
    vlTOPp->__Vm_traceActivity[4U] = 1U;
    vlTOPp->__Vm_traceActivity[3U] = 1U;
    vlTOPp->__Vm_traceActivity[2U] = 1U;
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
    vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine._settle__TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine__7(vlSymsp);
    vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine._settle__TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine__8(vlSymsp);
    vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine._settle__TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine__9(vlSymsp);
    vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine._settle__TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine__10(vlSymsp);
    vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine._settle__TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine__11(vlSymsp);
    vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine._settle__TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine__12(vlSymsp);
    vlTOPp->_settle__TOP__7(vlSymsp);
}

void Vtop::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    ready = VL_RAND_RESET_I(1);
    iterations_max = VL_RAND_RESET_I(32);
    zoom = VL_RAND_RESET_I(10);
    x_offset = VL_RAND_RESET_I(10);
    y_offset = VL_RAND_RESET_I(10);
    r = VL_RAND_RESET_I(8);
    g = VL_RAND_RESET_I(8);
    b = VL_RAND_RESET_I(8);
    first = VL_RAND_RESET_I(1);
    last_x = VL_RAND_RESET_I(1);
    last_y = VL_RAND_RESET_I(1);
    valid = VL_RAND_RESET_I(1);
    top__DOT__colour_o_wire = VL_RAND_RESET_I(24);
    top__DOT__xpixel_wire = VL_RAND_RESET_I(10);
    top__DOT__ypixel_wire = VL_RAND_RESET_I(10);
    { int __Vi0=0; for (; __Vi0<6; ++__Vi0) {
            top__DOT__colour_bus_o[__Vi0] = VL_RAND_RESET_I(24);
    }}
    top__DOT__reset_engine = VL_RAND_RESET_I(1);
    top__DOT__fin_bus = VL_RAND_RESET_I(6);
    { int __Vi0=0; for (; __Vi0<6; ++__Vi0) {
            top__DOT__x[__Vi0] = VL_RAND_RESET_I(10);
    }}
    { int __Vi0=0; for (; __Vi0<6; ++__Vi0) {
            top__DOT__y[__Vi0] = VL_RAND_RESET_I(10);
    }}
    { int __Vi0=0; for (; __Vi0<6; ++__Vi0) {
            top__DOT__iterations_bus[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<6; ++__Vi0) {
            top__DOT__xpixel_bus[__Vi0] = VL_RAND_RESET_I(10);
    }}
    { int __Vi0=0; for (; __Vi0<6; ++__Vi0) {
            top__DOT__ypixel_bus[__Vi0] = VL_RAND_RESET_I(10);
    }}
    top__DOT__en_bus = VL_RAND_RESET_I(6);
    { int __Vi0=0; for (; __Vi0<6; ++__Vi0) {
            top__DOT__colour_bus_i[__Vi0] = VL_RAND_RESET_I(24);
    }}
    top__DOT__full_queue_bus = VL_RAND_RESET_I(6);
    top__DOT__match_bus = VL_RAND_RESET_I(6);
    top__DOT__j = 0;
    { int __Vi0=0; for (; __Vi0<6; ++__Vi0) {
            top__DOT____Vcellout__distributor__y[__Vi0] = VL_RAND_RESET_I(10);
    }}
    { int __Vi0=0; for (; __Vi0<6; ++__Vi0) {
            top__DOT____Vcellout__distributor__x[__Vi0] = VL_RAND_RESET_I(10);
    }}
    { int __Vi0=0; for (; __Vi0<6; ++__Vi0) {
            top__DOT____Vcellout__lut_rom__rgb_val[__Vi0] = VL_RAND_RESET_I(24);
    }}
    { int __Vi0=0; for (; __Vi0<6; ++__Vi0) {
            top__DOT____Vcellinp__lut_rom__iterations[__Vi0] = VL_RAND_RESET_I(32);
    }}
    top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__queue_block__match = VL_RAND_RESET_I(1);
    top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__queue_block__en = VL_RAND_RESET_I(1);
    top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__queue_block__full_queue = VL_RAND_RESET_I(1);
    top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__queue_block__colour_o = VL_RAND_RESET_I(24);
    top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__queue_block__match = VL_RAND_RESET_I(1);
    top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__queue_block__en = VL_RAND_RESET_I(1);
    top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__queue_block__full_queue = VL_RAND_RESET_I(1);
    top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__queue_block__colour_o = VL_RAND_RESET_I(24);
    top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__queue_block__match = VL_RAND_RESET_I(1);
    top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__queue_block__en = VL_RAND_RESET_I(1);
    top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__queue_block__full_queue = VL_RAND_RESET_I(1);
    top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__queue_block__colour_o = VL_RAND_RESET_I(24);
    top__DOT____Vcellout__genblk1__BRA__3__KET____DOT__queue_block__match = VL_RAND_RESET_I(1);
    top__DOT____Vcellout__genblk1__BRA__3__KET____DOT__queue_block__en = VL_RAND_RESET_I(1);
    top__DOT____Vcellout__genblk1__BRA__3__KET____DOT__queue_block__full_queue = VL_RAND_RESET_I(1);
    top__DOT____Vcellout__genblk1__BRA__3__KET____DOT__queue_block__colour_o = VL_RAND_RESET_I(24);
    top__DOT____Vcellout__genblk1__BRA__4__KET____DOT__queue_block__match = VL_RAND_RESET_I(1);
    top__DOT____Vcellout__genblk1__BRA__4__KET____DOT__queue_block__en = VL_RAND_RESET_I(1);
    top__DOT____Vcellout__genblk1__BRA__4__KET____DOT__queue_block__full_queue = VL_RAND_RESET_I(1);
    top__DOT____Vcellout__genblk1__BRA__4__KET____DOT__queue_block__colour_o = VL_RAND_RESET_I(24);
    top__DOT____Vcellout__genblk1__BRA__5__KET____DOT__queue_block__match = VL_RAND_RESET_I(1);
    top__DOT____Vcellout__genblk1__BRA__5__KET____DOT__queue_block__en = VL_RAND_RESET_I(1);
    top__DOT____Vcellout__genblk1__BRA__5__KET____DOT__queue_block__full_queue = VL_RAND_RESET_I(1);
    top__DOT____Vcellout__genblk1__BRA__5__KET____DOT__queue_block__colour_o = VL_RAND_RESET_I(24);
    top__DOT__distributor__DOT__x0 = VL_RAND_RESET_I(10);
    top__DOT__distributor__DOT__y0 = VL_RAND_RESET_I(10);
    top__DOT__distributor__DOT____Vlvbound1 = VL_RAND_RESET_I(10);
    top__DOT__distributor__DOT____Vlvbound2 = VL_RAND_RESET_I(10);
    { int __Vi0=0; for (; __Vi0<256; ++__Vi0) {
            top__DOT__lut_rom__DOT__lut_array[__Vi0] = VL_RAND_RESET_I(24);
    }}
    top__DOT__lut_rom__DOT____Vlvbound1 = VL_RAND_RESET_I(24);
    top__DOT__combinator_block__DOT__xpixel = VL_RAND_RESET_I(10);
    top__DOT__combinator_block__DOT__ypixel = VL_RAND_RESET_I(10);
    { int __Vi0=0; for (; __Vi0<10; ++__Vi0) {
            top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[__Vi0] = VL_RAND_RESET_I(24);
    }}
    { int __Vi0=0; for (; __Vi0<10; ++__Vi0) {
            top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[__Vi0] = VL_RAND_RESET_I(10);
    }}
    { int __Vi0=0; for (; __Vi0<10; ++__Vi0) {
            top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[__Vi0] = VL_RAND_RESET_I(10);
    }}
    top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__counter = VL_RAND_RESET_I(4);
    top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__prev_xpixel = VL_RAND_RESET_I(10);
    top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__unnamedblk1__DOT__i = 0;
    top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__unnamedblk2__DOT__i = 0;
    top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__unnamedblk3__DOT__i = 0;
    top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound7 = VL_RAND_RESET_I(24);
    top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound8 = VL_RAND_RESET_I(10);
    top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound9 = VL_RAND_RESET_I(10);
    top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound10 = VL_RAND_RESET_I(24);
    top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound11 = VL_RAND_RESET_I(10);
    top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound12 = VL_RAND_RESET_I(10);
    { int __Vi0=0; for (; __Vi0<10; ++__Vi0) {
            top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[__Vi0] = VL_RAND_RESET_I(24);
    }}
    { int __Vi0=0; for (; __Vi0<10; ++__Vi0) {
            top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[__Vi0] = VL_RAND_RESET_I(10);
    }}
    { int __Vi0=0; for (; __Vi0<10; ++__Vi0) {
            top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[__Vi0] = VL_RAND_RESET_I(10);
    }}
    top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__counter = VL_RAND_RESET_I(4);
    top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__prev_xpixel = VL_RAND_RESET_I(10);
    top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__unnamedblk1__DOT__i = 0;
    top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__unnamedblk2__DOT__i = 0;
    top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__unnamedblk3__DOT__i = 0;
    top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound7 = VL_RAND_RESET_I(24);
    top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound8 = VL_RAND_RESET_I(10);
    top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound9 = VL_RAND_RESET_I(10);
    top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound10 = VL_RAND_RESET_I(24);
    top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound11 = VL_RAND_RESET_I(10);
    top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound12 = VL_RAND_RESET_I(10);
    { int __Vi0=0; for (; __Vi0<10; ++__Vi0) {
            top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[__Vi0] = VL_RAND_RESET_I(24);
    }}
    { int __Vi0=0; for (; __Vi0<10; ++__Vi0) {
            top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[__Vi0] = VL_RAND_RESET_I(10);
    }}
    { int __Vi0=0; for (; __Vi0<10; ++__Vi0) {
            top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[__Vi0] = VL_RAND_RESET_I(10);
    }}
    top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__counter = VL_RAND_RESET_I(4);
    top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__prev_xpixel = VL_RAND_RESET_I(10);
    top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__unnamedblk1__DOT__i = 0;
    top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__unnamedblk2__DOT__i = 0;
    top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__unnamedblk3__DOT__i = 0;
    top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound7 = VL_RAND_RESET_I(24);
    top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound8 = VL_RAND_RESET_I(10);
    top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound9 = VL_RAND_RESET_I(10);
    top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound10 = VL_RAND_RESET_I(24);
    top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound11 = VL_RAND_RESET_I(10);
    top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound12 = VL_RAND_RESET_I(10);
    { int __Vi0=0; for (; __Vi0<10; ++__Vi0) {
            top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue[__Vi0] = VL_RAND_RESET_I(24);
    }}
    { int __Vi0=0; for (; __Vi0<10; ++__Vi0) {
            top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue[__Vi0] = VL_RAND_RESET_I(10);
    }}
    { int __Vi0=0; for (; __Vi0<10; ++__Vi0) {
            top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue[__Vi0] = VL_RAND_RESET_I(10);
    }}
    top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__counter = VL_RAND_RESET_I(4);
    top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__prev_xpixel = VL_RAND_RESET_I(10);
    top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__unnamedblk1__DOT__i = 0;
    top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__unnamedblk2__DOT__i = 0;
    top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__unnamedblk3__DOT__i = 0;
    top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound7 = VL_RAND_RESET_I(24);
    top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound8 = VL_RAND_RESET_I(10);
    top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound9 = VL_RAND_RESET_I(10);
    top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound10 = VL_RAND_RESET_I(24);
    top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound11 = VL_RAND_RESET_I(10);
    top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound12 = VL_RAND_RESET_I(10);
    { int __Vi0=0; for (; __Vi0<10; ++__Vi0) {
            top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue[__Vi0] = VL_RAND_RESET_I(24);
    }}
    { int __Vi0=0; for (; __Vi0<10; ++__Vi0) {
            top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue[__Vi0] = VL_RAND_RESET_I(10);
    }}
    { int __Vi0=0; for (; __Vi0<10; ++__Vi0) {
            top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue[__Vi0] = VL_RAND_RESET_I(10);
    }}
    top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__counter = VL_RAND_RESET_I(4);
    top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__prev_xpixel = VL_RAND_RESET_I(10);
    top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__unnamedblk1__DOT__i = 0;
    top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__unnamedblk2__DOT__i = 0;
    top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__unnamedblk3__DOT__i = 0;
    top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound7 = VL_RAND_RESET_I(24);
    top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound8 = VL_RAND_RESET_I(10);
    top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound9 = VL_RAND_RESET_I(10);
    top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound10 = VL_RAND_RESET_I(24);
    top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound11 = VL_RAND_RESET_I(10);
    top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound12 = VL_RAND_RESET_I(10);
    { int __Vi0=0; for (; __Vi0<10; ++__Vi0) {
            top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue[__Vi0] = VL_RAND_RESET_I(24);
    }}
    { int __Vi0=0; for (; __Vi0<10; ++__Vi0) {
            top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue[__Vi0] = VL_RAND_RESET_I(10);
    }}
    { int __Vi0=0; for (; __Vi0<10; ++__Vi0) {
            top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue[__Vi0] = VL_RAND_RESET_I(10);
    }}
    top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__counter = VL_RAND_RESET_I(4);
    top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__prev_xpixel = VL_RAND_RESET_I(10);
    top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__unnamedblk1__DOT__i = 0;
    top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__unnamedblk2__DOT__i = 0;
    top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__unnamedblk3__DOT__i = 0;
    top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound7 = VL_RAND_RESET_I(24);
    top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound8 = VL_RAND_RESET_I(10);
    top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound9 = VL_RAND_RESET_I(10);
    top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound10 = VL_RAND_RESET_I(24);
    top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound11 = VL_RAND_RESET_I(10);
    top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound12 = VL_RAND_RESET_I(10);
    __Vdly__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__counter = VL_RAND_RESET_I(4);
    __Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v0 = 0;
    __Vdlyvdim0__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v10 = 0;
    __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v10 = VL_RAND_RESET_I(24);
    __Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v10 = 0;
    __Vdlyvdim0__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v10 = 0;
    __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v10 = VL_RAND_RESET_I(10);
    __Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v10 = 0;
    __Vdlyvdim0__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue__v10 = 0;
    __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue__v10 = VL_RAND_RESET_I(10);
    __Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue__v10 = 0;
    __Vdly__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__counter = VL_RAND_RESET_I(4);
    __Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v0 = 0;
    __Vdlyvdim0__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v10 = 0;
    __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v10 = VL_RAND_RESET_I(24);
    __Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v10 = 0;
    __Vdlyvdim0__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v10 = 0;
    __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v10 = VL_RAND_RESET_I(10);
    __Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v10 = 0;
    __Vdlyvdim0__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue__v10 = 0;
    __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue__v10 = VL_RAND_RESET_I(10);
    __Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue__v10 = 0;
    __Vdly__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__counter = VL_RAND_RESET_I(4);
    __Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v0 = 0;
    __Vdlyvdim0__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v10 = 0;
    __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v10 = VL_RAND_RESET_I(24);
    __Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v10 = 0;
    __Vdlyvdim0__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v10 = 0;
    __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v10 = VL_RAND_RESET_I(10);
    __Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v10 = 0;
    __Vdlyvdim0__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue__v10 = 0;
    __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue__v10 = VL_RAND_RESET_I(10);
    __Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue__v10 = 0;
    __Vdly__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__counter = VL_RAND_RESET_I(4);
    __Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v0 = 0;
    __Vdlyvdim0__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v10 = 0;
    __Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v10 = VL_RAND_RESET_I(24);
    __Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v10 = 0;
    __Vdlyvdim0__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue__v10 = 0;
    __Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue__v10 = VL_RAND_RESET_I(10);
    __Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue__v10 = 0;
    __Vdlyvdim0__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue__v10 = 0;
    __Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue__v10 = VL_RAND_RESET_I(10);
    __Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue__v10 = 0;
    __Vdly__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__counter = VL_RAND_RESET_I(4);
    __Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v0 = 0;
    __Vdlyvdim0__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v10 = 0;
    __Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v10 = VL_RAND_RESET_I(24);
    __Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v10 = 0;
    __Vdlyvdim0__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue__v10 = 0;
    __Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue__v10 = VL_RAND_RESET_I(10);
    __Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue__v10 = 0;
    __Vdlyvdim0__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue__v10 = 0;
    __Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue__v10 = VL_RAND_RESET_I(10);
    __Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue__v10 = 0;
    __Vdly__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__counter = VL_RAND_RESET_I(4);
    __Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v0 = 0;
    __Vdlyvdim0__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v10 = 0;
    __Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v10 = VL_RAND_RESET_I(24);
    __Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v10 = 0;
    __Vdlyvdim0__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue__v10 = 0;
    __Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue__v10 = VL_RAND_RESET_I(10);
    __Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue__v10 = 0;
    __Vdlyvdim0__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue__v10 = 0;
    __Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue__v10 = VL_RAND_RESET_I(10);
    __Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue__v10 = 0;
    __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v11 = VL_RAND_RESET_I(10);
    __Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v11 = 0;
    __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue__v11 = VL_RAND_RESET_I(10);
    __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v11 = VL_RAND_RESET_I(24);
    __Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v11 = 0;
    __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v12 = VL_RAND_RESET_I(10);
    __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue__v12 = VL_RAND_RESET_I(10);
    __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v12 = VL_RAND_RESET_I(24);
    __Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v12 = 0;
    __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v13 = VL_RAND_RESET_I(10);
    __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue__v13 = VL_RAND_RESET_I(10);
    __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v13 = VL_RAND_RESET_I(24);
    __Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v13 = 0;
    __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v14 = VL_RAND_RESET_I(10);
    __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue__v14 = VL_RAND_RESET_I(10);
    __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v14 = VL_RAND_RESET_I(24);
    __Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v14 = 0;
    __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v15 = VL_RAND_RESET_I(10);
    __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue__v15 = VL_RAND_RESET_I(10);
    __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v15 = VL_RAND_RESET_I(24);
    __Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v15 = 0;
    __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v16 = VL_RAND_RESET_I(10);
    __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue__v16 = VL_RAND_RESET_I(10);
    __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v16 = VL_RAND_RESET_I(24);
    __Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v16 = 0;
    __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v17 = VL_RAND_RESET_I(10);
    __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue__v17 = VL_RAND_RESET_I(10);
    __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v17 = VL_RAND_RESET_I(24);
    __Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v17 = 0;
    __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v18 = VL_RAND_RESET_I(10);
    __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue__v18 = VL_RAND_RESET_I(10);
    __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v18 = VL_RAND_RESET_I(24);
    __Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v18 = 0;
    __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v19 = VL_RAND_RESET_I(10);
    __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue__v19 = VL_RAND_RESET_I(10);
    __Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v20 = 0;
    __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v19 = VL_RAND_RESET_I(24);
    __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v11 = VL_RAND_RESET_I(10);
    __Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v11 = 0;
    __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue__v11 = VL_RAND_RESET_I(10);
    __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v11 = VL_RAND_RESET_I(24);
    __Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v11 = 0;
    __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v12 = VL_RAND_RESET_I(10);
    __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue__v12 = VL_RAND_RESET_I(10);
    __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v12 = VL_RAND_RESET_I(24);
    __Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v12 = 0;
    __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v13 = VL_RAND_RESET_I(10);
    __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue__v13 = VL_RAND_RESET_I(10);
    __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v13 = VL_RAND_RESET_I(24);
    __Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v13 = 0;
    __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v14 = VL_RAND_RESET_I(10);
    __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue__v14 = VL_RAND_RESET_I(10);
    __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v14 = VL_RAND_RESET_I(24);
    __Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v14 = 0;
    __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v15 = VL_RAND_RESET_I(10);
    __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue__v15 = VL_RAND_RESET_I(10);
    __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v15 = VL_RAND_RESET_I(24);
    __Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v15 = 0;
    __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v16 = VL_RAND_RESET_I(10);
    __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue__v16 = VL_RAND_RESET_I(10);
    __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v16 = VL_RAND_RESET_I(24);
    __Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v16 = 0;
    __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v17 = VL_RAND_RESET_I(10);
    __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue__v17 = VL_RAND_RESET_I(10);
    __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v17 = VL_RAND_RESET_I(24);
    __Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v17 = 0;
    __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v18 = VL_RAND_RESET_I(10);
    __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue__v18 = VL_RAND_RESET_I(10);
    __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v18 = VL_RAND_RESET_I(24);
    __Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v18 = 0;
    __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v19 = VL_RAND_RESET_I(10);
    __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue__v19 = VL_RAND_RESET_I(10);
    __Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v20 = 0;
    __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v19 = VL_RAND_RESET_I(24);
    __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v11 = VL_RAND_RESET_I(10);
    __Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v11 = 0;
    __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue__v11 = VL_RAND_RESET_I(10);
    __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v11 = VL_RAND_RESET_I(24);
    __Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v11 = 0;
    __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v12 = VL_RAND_RESET_I(10);
    __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue__v12 = VL_RAND_RESET_I(10);
    __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v12 = VL_RAND_RESET_I(24);
    __Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v12 = 0;
    __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v13 = VL_RAND_RESET_I(10);
    __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue__v13 = VL_RAND_RESET_I(10);
    __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v13 = VL_RAND_RESET_I(24);
    __Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v13 = 0;
    __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v14 = VL_RAND_RESET_I(10);
    __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue__v14 = VL_RAND_RESET_I(10);
    __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v14 = VL_RAND_RESET_I(24);
    __Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v14 = 0;
    __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v15 = VL_RAND_RESET_I(10);
    __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue__v15 = VL_RAND_RESET_I(10);
    __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v15 = VL_RAND_RESET_I(24);
    __Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v15 = 0;
    __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v16 = VL_RAND_RESET_I(10);
    __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue__v16 = VL_RAND_RESET_I(10);
    __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v16 = VL_RAND_RESET_I(24);
    __Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v16 = 0;
    __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v17 = VL_RAND_RESET_I(10);
    __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue__v17 = VL_RAND_RESET_I(10);
    __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v17 = VL_RAND_RESET_I(24);
    __Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v17 = 0;
    __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v18 = VL_RAND_RESET_I(10);
    __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue__v18 = VL_RAND_RESET_I(10);
    __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v18 = VL_RAND_RESET_I(24);
    __Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v18 = 0;
    __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v19 = VL_RAND_RESET_I(10);
    __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue__v19 = VL_RAND_RESET_I(10);
    __Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v20 = 0;
    __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v19 = VL_RAND_RESET_I(24);
    __Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue__v11 = VL_RAND_RESET_I(10);
    __Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue__v11 = 0;
    __Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue__v11 = VL_RAND_RESET_I(10);
    __Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v11 = VL_RAND_RESET_I(24);
    __Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v11 = 0;
    __Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue__v12 = VL_RAND_RESET_I(10);
    __Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue__v12 = VL_RAND_RESET_I(10);
    __Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v12 = VL_RAND_RESET_I(24);
    __Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v12 = 0;
    __Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue__v13 = VL_RAND_RESET_I(10);
    __Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue__v13 = VL_RAND_RESET_I(10);
    __Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v13 = VL_RAND_RESET_I(24);
    __Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v13 = 0;
    __Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue__v14 = VL_RAND_RESET_I(10);
    __Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue__v14 = VL_RAND_RESET_I(10);
    __Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v14 = VL_RAND_RESET_I(24);
    __Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v14 = 0;
    __Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue__v15 = VL_RAND_RESET_I(10);
    __Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue__v15 = VL_RAND_RESET_I(10);
    __Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v15 = VL_RAND_RESET_I(24);
    __Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v15 = 0;
    __Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue__v16 = VL_RAND_RESET_I(10);
    __Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue__v16 = VL_RAND_RESET_I(10);
    __Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v16 = VL_RAND_RESET_I(24);
    __Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v16 = 0;
    __Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue__v17 = VL_RAND_RESET_I(10);
    __Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue__v17 = VL_RAND_RESET_I(10);
    __Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v17 = VL_RAND_RESET_I(24);
    __Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v17 = 0;
    __Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue__v18 = VL_RAND_RESET_I(10);
    __Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue__v18 = VL_RAND_RESET_I(10);
    __Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v18 = VL_RAND_RESET_I(24);
    __Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v18 = 0;
    __Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue__v19 = VL_RAND_RESET_I(10);
    __Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue__v19 = VL_RAND_RESET_I(10);
    __Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue__v20 = 0;
    __Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v19 = VL_RAND_RESET_I(24);
    __Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue__v11 = VL_RAND_RESET_I(10);
    __Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue__v11 = 0;
    __Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue__v11 = VL_RAND_RESET_I(10);
    __Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v11 = VL_RAND_RESET_I(24);
    __Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v11 = 0;
    __Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue__v12 = VL_RAND_RESET_I(10);
    __Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue__v12 = VL_RAND_RESET_I(10);
    __Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v12 = VL_RAND_RESET_I(24);
    __Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v12 = 0;
    __Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue__v13 = VL_RAND_RESET_I(10);
    __Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue__v13 = VL_RAND_RESET_I(10);
    __Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v13 = VL_RAND_RESET_I(24);
    __Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v13 = 0;
    __Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue__v14 = VL_RAND_RESET_I(10);
    __Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue__v14 = VL_RAND_RESET_I(10);
    __Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v14 = VL_RAND_RESET_I(24);
    __Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v14 = 0;
    __Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue__v15 = VL_RAND_RESET_I(10);
    __Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue__v15 = VL_RAND_RESET_I(10);
    __Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v15 = VL_RAND_RESET_I(24);
    __Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v15 = 0;
    __Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue__v16 = VL_RAND_RESET_I(10);
    __Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue__v16 = VL_RAND_RESET_I(10);
    __Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v16 = VL_RAND_RESET_I(24);
    __Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v16 = 0;
    __Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue__v17 = VL_RAND_RESET_I(10);
    __Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue__v17 = VL_RAND_RESET_I(10);
    __Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v17 = VL_RAND_RESET_I(24);
    __Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v17 = 0;
    __Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue__v18 = VL_RAND_RESET_I(10);
    __Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue__v18 = VL_RAND_RESET_I(10);
    __Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v18 = VL_RAND_RESET_I(24);
    __Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v18 = 0;
    __Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue__v19 = VL_RAND_RESET_I(10);
    __Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue__v19 = VL_RAND_RESET_I(10);
    __Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue__v20 = 0;
    __Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v19 = VL_RAND_RESET_I(24);
    __Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue__v11 = VL_RAND_RESET_I(10);
    __Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue__v11 = 0;
    __Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue__v11 = VL_RAND_RESET_I(10);
    __Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v11 = VL_RAND_RESET_I(24);
    __Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v11 = 0;
    __Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue__v12 = VL_RAND_RESET_I(10);
    __Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue__v12 = VL_RAND_RESET_I(10);
    __Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v12 = VL_RAND_RESET_I(24);
    __Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v12 = 0;
    __Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue__v13 = VL_RAND_RESET_I(10);
    __Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue__v13 = VL_RAND_RESET_I(10);
    __Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v13 = VL_RAND_RESET_I(24);
    __Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v13 = 0;
    __Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue__v14 = VL_RAND_RESET_I(10);
    __Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue__v14 = VL_RAND_RESET_I(10);
    __Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v14 = VL_RAND_RESET_I(24);
    __Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v14 = 0;
    __Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue__v15 = VL_RAND_RESET_I(10);
    __Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue__v15 = VL_RAND_RESET_I(10);
    __Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v15 = VL_RAND_RESET_I(24);
    __Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v15 = 0;
    __Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue__v16 = VL_RAND_RESET_I(10);
    __Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue__v16 = VL_RAND_RESET_I(10);
    __Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v16 = VL_RAND_RESET_I(24);
    __Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v16 = 0;
    __Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue__v17 = VL_RAND_RESET_I(10);
    __Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue__v17 = VL_RAND_RESET_I(10);
    __Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v17 = VL_RAND_RESET_I(24);
    __Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v17 = 0;
    __Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue__v18 = VL_RAND_RESET_I(10);
    __Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue__v18 = VL_RAND_RESET_I(10);
    __Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v18 = VL_RAND_RESET_I(24);
    __Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v18 = 0;
    __Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue__v19 = VL_RAND_RESET_I(10);
    __Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue__v19 = VL_RAND_RESET_I(10);
    __Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue__v20 = 0;
    __Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v19 = VL_RAND_RESET_I(24);
    { int __Vi0=0; for (; __Vi0<6; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
