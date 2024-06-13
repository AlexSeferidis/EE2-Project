// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___initial__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___initial__TOP__0\n"); );
    // Body
    vlSelf->valid = 0U;
    VL_WRITEF("Loading rom.\n");
    VL_READMEM_N(true, 24, 50, 0, std::string{"lut.hex"}
                 ,  &(vlSelf->top__DOT__lut_rom__DOT__lut_array)
                 , 0, ~0ULL);
    VL_WRITEF("rom Loaded\n");
    vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__state = 2U;
    vlSelf->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__engine__finished = 1U;
    vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__state = 2U;
    vlSelf->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__engine__finished = 1U;
    vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__state = 2U;
    vlSelf->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__engine__finished = 1U;
    vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__engine__DOT__state = 2U;
    vlSelf->top__DOT____Vcellout__genblk1__BRA__3__KET____DOT__engine__finished = 1U;
    vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__engine__DOT__state = 2U;
    vlSelf->top__DOT____Vcellout__genblk1__BRA__4__KET____DOT__engine__finished = 1U;
    vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__engine__DOT__state = 2U;
    vlSelf->top__DOT____Vcellout__genblk1__BRA__5__KET____DOT__engine__finished = 1U;
    vlSelf->top__DOT__genblk1__BRA__6__KET____DOT__engine__DOT__state = 2U;
    vlSelf->top__DOT____Vcellout__genblk1__BRA__6__KET____DOT__engine__finished = 1U;
    vlSelf->top__DOT__genblk1__BRA__7__KET____DOT__engine__DOT__state = 2U;
    vlSelf->top__DOT____Vcellout__genblk1__BRA__7__KET____DOT__engine__finished = 1U;
    vlSelf->top__DOT__genblk1__BRA__8__KET____DOT__engine__DOT__state = 2U;
    vlSelf->top__DOT____Vcellout__genblk1__BRA__8__KET____DOT__engine__finished = 1U;
    vlSelf->top__DOT__genblk1__BRA__9__KET____DOT__engine__DOT__state = 2U;
    vlSelf->top__DOT____Vcellout__genblk1__BRA__9__KET____DOT__engine__finished = 1U;
    vlSelf->top__DOT__genblk1__BRA__10__KET____DOT__engine__DOT__state = 2U;
    vlSelf->top__DOT____Vcellout__genblk1__BRA__10__KET____DOT__engine__finished = 1U;
    vlSelf->top__DOT__distributor__DOT__y0 = 0U;
    vlSelf->top__DOT__distributor__DOT__x0 = 0U;
    vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__prev_xpixel = 0xffffffffU;
    vlSelf->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__queue_block__en = 0U;
    vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[0U] = 0U;
    vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[0U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[0U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[1U] = 0U;
    vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[1U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[1U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[2U] = 0U;
    vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[2U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[2U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[3U] = 0U;
    vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[3U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[3U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[4U] = 0U;
    vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[4U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[4U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[5U] = 0U;
    vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[5U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[5U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[6U] = 0U;
    vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[6U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[6U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[7U] = 0U;
    vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[7U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[7U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[8U] = 0U;
    vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[8U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[8U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[9U] = 0U;
    vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[9U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[9U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__unnamedblk1__DOT__i = 0xaU;
    vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__prev_xpixel = 0xffffffffU;
    vlSelf->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__queue_block__en = 0U;
    vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[0U] = 0U;
    vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[0U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[0U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[1U] = 0U;
    vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[1U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[1U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[2U] = 0U;
    vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[2U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[2U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[3U] = 0U;
    vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[3U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[3U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[4U] = 0U;
    vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[4U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[4U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[5U] = 0U;
    vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[5U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[5U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[6U] = 0U;
    vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[6U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[6U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[7U] = 0U;
    vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[7U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[7U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[8U] = 0U;
    vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[8U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[8U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[9U] = 0U;
    vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[9U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[9U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__unnamedblk1__DOT__i = 0xaU;
    vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__prev_xpixel = 0xffffffffU;
    vlSelf->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__queue_block__en = 0U;
    vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[0U] = 0U;
    vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[0U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[0U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[1U] = 0U;
    vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[1U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[1U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[2U] = 0U;
    vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[2U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[2U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[3U] = 0U;
    vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[3U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[3U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[4U] = 0U;
    vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[4U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[4U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[5U] = 0U;
    vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[5U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[5U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[6U] = 0U;
    vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[6U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[6U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[7U] = 0U;
    vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[7U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[7U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[8U] = 0U;
    vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[8U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[8U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[9U] = 0U;
    vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[9U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[9U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__unnamedblk1__DOT__i = 0xaU;
    vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__prev_xpixel = 0xffffffffU;
    vlSelf->top__DOT____Vcellout__genblk1__BRA__3__KET____DOT__queue_block__en = 0U;
    vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue[0U] = 0U;
    vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue[0U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue[0U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue[1U] = 0U;
    vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue[1U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue[1U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue[2U] = 0U;
    vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue[2U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue[2U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue[3U] = 0U;
    vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue[3U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue[3U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue[4U] = 0U;
    vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue[4U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue[4U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue[5U] = 0U;
    vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue[5U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue[5U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue[6U] = 0U;
    vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue[6U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue[6U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue[7U] = 0U;
    vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue[7U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue[7U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue[8U] = 0U;
    vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue[8U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue[8U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue[9U] = 0U;
    vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue[9U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue[9U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__unnamedblk1__DOT__i = 0xaU;
    vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__prev_xpixel = 0xffffffffU;
    vlSelf->top__DOT____Vcellout__genblk1__BRA__4__KET____DOT__queue_block__en = 0U;
    vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue[0U] = 0U;
    vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue[0U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue[0U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue[1U] = 0U;
    vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue[1U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue[1U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue[2U] = 0U;
    vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue[2U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue[2U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue[3U] = 0U;
    vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue[3U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue[3U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue[4U] = 0U;
    vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue[4U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue[4U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue[5U] = 0U;
    vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue[5U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue[5U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue[6U] = 0U;
    vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue[6U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue[6U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue[7U] = 0U;
    vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue[7U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue[7U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue[8U] = 0U;
    vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue[8U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue[8U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue[9U] = 0U;
    vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue[9U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue[9U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__unnamedblk1__DOT__i = 0xaU;
    vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__prev_xpixel = 0xffffffffU;
    vlSelf->top__DOT____Vcellout__genblk1__BRA__5__KET____DOT__queue_block__en = 0U;
    vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue[0U] = 0U;
    vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue[0U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue[0U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue[1U] = 0U;
    vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue[1U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue[1U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue[2U] = 0U;
    vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue[2U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue[2U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue[3U] = 0U;
    vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue[3U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue[3U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue[4U] = 0U;
    vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue[4U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue[4U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue[5U] = 0U;
    vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue[5U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue[5U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue[6U] = 0U;
    vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue[6U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue[6U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue[7U] = 0U;
    vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue[7U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue[7U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue[8U] = 0U;
    vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue[8U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue[8U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue[9U] = 0U;
    vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue[9U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue[9U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__unnamedblk1__DOT__i = 0xaU;
    vlSelf->top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__prev_xpixel = 0xffffffffU;
    vlSelf->top__DOT____Vcellout__genblk1__BRA__6__KET____DOT__queue_block__en = 0U;
    vlSelf->top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__colour_queue[0U] = 0U;
    vlSelf->top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__xqueue[0U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__yqueue[0U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__colour_queue[1U] = 0U;
    vlSelf->top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__xqueue[1U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__yqueue[1U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__colour_queue[2U] = 0U;
    vlSelf->top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__xqueue[2U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__yqueue[2U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__colour_queue[3U] = 0U;
    vlSelf->top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__xqueue[3U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__yqueue[3U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__colour_queue[4U] = 0U;
    vlSelf->top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__xqueue[4U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__yqueue[4U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__colour_queue[5U] = 0U;
    vlSelf->top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__xqueue[5U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__yqueue[5U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__colour_queue[6U] = 0U;
    vlSelf->top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__xqueue[6U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__yqueue[6U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__colour_queue[7U] = 0U;
    vlSelf->top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__xqueue[7U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__yqueue[7U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__colour_queue[8U] = 0U;
    vlSelf->top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__xqueue[8U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__yqueue[8U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__colour_queue[9U] = 0U;
    vlSelf->top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__xqueue[9U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__yqueue[9U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__unnamedblk1__DOT__i = 0xaU;
    vlSelf->top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__prev_xpixel = 0xffffffffU;
    vlSelf->top__DOT____Vcellout__genblk1__BRA__7__KET____DOT__queue_block__en = 0U;
    vlSelf->top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__colour_queue[0U] = 0U;
    vlSelf->top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__xqueue[0U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__yqueue[0U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__colour_queue[1U] = 0U;
    vlSelf->top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__xqueue[1U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__yqueue[1U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__colour_queue[2U] = 0U;
    vlSelf->top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__xqueue[2U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__yqueue[2U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__colour_queue[3U] = 0U;
    vlSelf->top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__xqueue[3U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__yqueue[3U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__colour_queue[4U] = 0U;
    vlSelf->top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__xqueue[4U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__yqueue[4U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__colour_queue[5U] = 0U;
    vlSelf->top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__xqueue[5U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__yqueue[5U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__colour_queue[6U] = 0U;
    vlSelf->top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__xqueue[6U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__yqueue[6U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__colour_queue[7U] = 0U;
    vlSelf->top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__xqueue[7U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__yqueue[7U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__colour_queue[8U] = 0U;
    vlSelf->top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__xqueue[8U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__yqueue[8U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__colour_queue[9U] = 0U;
    vlSelf->top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__xqueue[9U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__yqueue[9U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__unnamedblk1__DOT__i = 0xaU;
    vlSelf->top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__prev_xpixel = 0xffffffffU;
    vlSelf->top__DOT____Vcellout__genblk1__BRA__8__KET____DOT__queue_block__en = 0U;
    vlSelf->top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__colour_queue[0U] = 0U;
    vlSelf->top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__xqueue[0U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__yqueue[0U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__colour_queue[1U] = 0U;
    vlSelf->top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__xqueue[1U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__yqueue[1U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__colour_queue[2U] = 0U;
    vlSelf->top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__xqueue[2U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__yqueue[2U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__colour_queue[3U] = 0U;
    vlSelf->top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__xqueue[3U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__yqueue[3U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__colour_queue[4U] = 0U;
    vlSelf->top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__xqueue[4U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__yqueue[4U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__colour_queue[5U] = 0U;
    vlSelf->top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__xqueue[5U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__yqueue[5U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__colour_queue[6U] = 0U;
    vlSelf->top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__xqueue[6U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__yqueue[6U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__colour_queue[7U] = 0U;
    vlSelf->top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__xqueue[7U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__yqueue[7U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__colour_queue[8U] = 0U;
    vlSelf->top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__xqueue[8U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__yqueue[8U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__colour_queue[9U] = 0U;
    vlSelf->top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__xqueue[9U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__yqueue[9U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__unnamedblk1__DOT__i = 0xaU;
    vlSelf->top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__prev_xpixel = 0xffffffffU;
    vlSelf->top__DOT____Vcellout__genblk1__BRA__9__KET____DOT__queue_block__en = 0U;
    vlSelf->top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__colour_queue[0U] = 0U;
    vlSelf->top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__xqueue[0U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__yqueue[0U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__colour_queue[1U] = 0U;
    vlSelf->top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__xqueue[1U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__yqueue[1U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__colour_queue[2U] = 0U;
    vlSelf->top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__xqueue[2U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__yqueue[2U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__colour_queue[3U] = 0U;
    vlSelf->top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__xqueue[3U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__yqueue[3U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__colour_queue[4U] = 0U;
    vlSelf->top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__xqueue[4U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__yqueue[4U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__colour_queue[5U] = 0U;
    vlSelf->top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__xqueue[5U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__yqueue[5U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__colour_queue[6U] = 0U;
    vlSelf->top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__xqueue[6U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__yqueue[6U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__colour_queue[7U] = 0U;
    vlSelf->top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__xqueue[7U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__yqueue[7U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__colour_queue[8U] = 0U;
    vlSelf->top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__xqueue[8U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__yqueue[8U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__colour_queue[9U] = 0U;
    vlSelf->top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__xqueue[9U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__yqueue[9U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__unnamedblk1__DOT__i = 0xaU;
    vlSelf->top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__prev_xpixel = 0xffffffffU;
    vlSelf->top__DOT____Vcellout__genblk1__BRA__10__KET____DOT__queue_block__en = 0U;
    vlSelf->top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__colour_queue[0U] = 0U;
    vlSelf->top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__xqueue[0U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__yqueue[0U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__colour_queue[1U] = 0U;
    vlSelf->top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__xqueue[1U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__yqueue[1U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__colour_queue[2U] = 0U;
    vlSelf->top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__xqueue[2U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__yqueue[2U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__colour_queue[3U] = 0U;
    vlSelf->top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__xqueue[3U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__yqueue[3U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__colour_queue[4U] = 0U;
    vlSelf->top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__xqueue[4U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__yqueue[4U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__colour_queue[5U] = 0U;
    vlSelf->top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__xqueue[5U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__yqueue[5U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__colour_queue[6U] = 0U;
    vlSelf->top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__xqueue[6U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__yqueue[6U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__colour_queue[7U] = 0U;
    vlSelf->top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__xqueue[7U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__yqueue[7U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__colour_queue[8U] = 0U;
    vlSelf->top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__xqueue[8U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__yqueue[8U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__colour_queue[9U] = 0U;
    vlSelf->top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__xqueue[9U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__yqueue[9U] = 0xffffffffU;
    vlSelf->top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__unnamedblk1__DOT__i = 0xaU;
}

VL_ATTR_COLD void Vtop___024root___settle__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__0\n"); );
    // Init
    IData/*31:0*/ top__DOT__distributor__DOT____Vlvbound_h1e19e3e8__0;
    IData/*31:0*/ top__DOT__distributor__DOT____Vlvbound_h8244ad4d__0;
    IData/*23:0*/ top__DOT__lut_rom__DOT____Vlvbound_hb610437c__0;
    // Body
    vlSelf->r = (0xffU & vlSelf->top__DOT__colour_o_wire);
    vlSelf->g = (0xffU & (vlSelf->top__DOT__colour_o_wire 
                          >> 8U));
    vlSelf->b = (0xffU & (vlSelf->top__DOT__colour_o_wire 
                          >> 0x10U));
    vlSelf->top__DOT__iterations_bus[0U] = vlSelf->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__engine__iterations;
    vlSelf->top__DOT__iterations_bus[1U] = vlSelf->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__engine__iterations;
    vlSelf->top__DOT__iterations_bus[2U] = vlSelf->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__engine__iterations;
    vlSelf->top__DOT__iterations_bus[3U] = vlSelf->top__DOT____Vcellout__genblk1__BRA__3__KET____DOT__engine__iterations;
    vlSelf->top__DOT__iterations_bus[4U] = vlSelf->top__DOT____Vcellout__genblk1__BRA__4__KET____DOT__engine__iterations;
    vlSelf->top__DOT__iterations_bus[5U] = vlSelf->top__DOT____Vcellout__genblk1__BRA__5__KET____DOT__engine__iterations;
    vlSelf->top__DOT__iterations_bus[6U] = vlSelf->top__DOT____Vcellout__genblk1__BRA__6__KET____DOT__engine__iterations;
    vlSelf->top__DOT__iterations_bus[7U] = vlSelf->top__DOT____Vcellout__genblk1__BRA__7__KET____DOT__engine__iterations;
    vlSelf->top__DOT__iterations_bus[8U] = vlSelf->top__DOT____Vcellout__genblk1__BRA__8__KET____DOT__engine__iterations;
    vlSelf->top__DOT__iterations_bus[9U] = vlSelf->top__DOT____Vcellout__genblk1__BRA__9__KET____DOT__engine__iterations;
    vlSelf->top__DOT__iterations_bus[0xaU] = vlSelf->top__DOT____Vcellout__genblk1__BRA__10__KET____DOT__engine__iterations;
    vlSelf->top__DOT__ypixel_bus[0U] = vlSelf->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__engine__ypixel;
    vlSelf->top__DOT__xpixel_bus[0U] = vlSelf->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__engine__xpixel;
    vlSelf->top__DOT__ypixel_bus[1U] = vlSelf->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__engine__ypixel;
    vlSelf->top__DOT__xpixel_bus[1U] = vlSelf->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__engine__xpixel;
    vlSelf->top__DOT__ypixel_bus[2U] = vlSelf->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__engine__ypixel;
    vlSelf->top__DOT__xpixel_bus[2U] = vlSelf->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__engine__xpixel;
    vlSelf->top__DOT__ypixel_bus[3U] = vlSelf->top__DOT____Vcellout__genblk1__BRA__3__KET____DOT__engine__ypixel;
    vlSelf->top__DOT__xpixel_bus[3U] = vlSelf->top__DOT____Vcellout__genblk1__BRA__3__KET____DOT__engine__xpixel;
    vlSelf->top__DOT__ypixel_bus[4U] = vlSelf->top__DOT____Vcellout__genblk1__BRA__4__KET____DOT__engine__ypixel;
    vlSelf->top__DOT__xpixel_bus[4U] = vlSelf->top__DOT____Vcellout__genblk1__BRA__4__KET____DOT__engine__xpixel;
    vlSelf->top__DOT__ypixel_bus[5U] = vlSelf->top__DOT____Vcellout__genblk1__BRA__5__KET____DOT__engine__ypixel;
    vlSelf->top__DOT__xpixel_bus[5U] = vlSelf->top__DOT____Vcellout__genblk1__BRA__5__KET____DOT__engine__xpixel;
    vlSelf->top__DOT__ypixel_bus[6U] = vlSelf->top__DOT____Vcellout__genblk1__BRA__6__KET____DOT__engine__ypixel;
    vlSelf->top__DOT__xpixel_bus[6U] = vlSelf->top__DOT____Vcellout__genblk1__BRA__6__KET____DOT__engine__xpixel;
    vlSelf->top__DOT__ypixel_bus[7U] = vlSelf->top__DOT____Vcellout__genblk1__BRA__7__KET____DOT__engine__ypixel;
    vlSelf->top__DOT__xpixel_bus[7U] = vlSelf->top__DOT____Vcellout__genblk1__BRA__7__KET____DOT__engine__xpixel;
    vlSelf->top__DOT__ypixel_bus[8U] = vlSelf->top__DOT____Vcellout__genblk1__BRA__8__KET____DOT__engine__ypixel;
    vlSelf->top__DOT__xpixel_bus[8U] = vlSelf->top__DOT____Vcellout__genblk1__BRA__8__KET____DOT__engine__xpixel;
    vlSelf->top__DOT__ypixel_bus[9U] = vlSelf->top__DOT____Vcellout__genblk1__BRA__9__KET____DOT__engine__ypixel;
    vlSelf->top__DOT__xpixel_bus[9U] = vlSelf->top__DOT____Vcellout__genblk1__BRA__9__KET____DOT__engine__xpixel;
    vlSelf->top__DOT__ypixel_bus[0xaU] = vlSelf->top__DOT____Vcellout__genblk1__BRA__10__KET____DOT__engine__ypixel;
    vlSelf->top__DOT__xpixel_bus[0xaU] = vlSelf->top__DOT____Vcellout__genblk1__BRA__10__KET____DOT__engine__xpixel;
    vlSelf->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__queue_block__full_queue 
        = (0xaU == (IData)(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__counter));
    vlSelf->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__queue_block__full_queue 
        = (0xaU == (IData)(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__counter));
    vlSelf->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__queue_block__full_queue 
        = (0xaU == (IData)(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__counter));
    vlSelf->top__DOT____Vcellout__genblk1__BRA__3__KET____DOT__queue_block__full_queue 
        = (0xaU == (IData)(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__counter));
    vlSelf->top__DOT____Vcellout__genblk1__BRA__4__KET____DOT__queue_block__full_queue 
        = (0xaU == (IData)(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__counter));
    vlSelf->top__DOT____Vcellout__genblk1__BRA__5__KET____DOT__queue_block__full_queue 
        = (0xaU == (IData)(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__counter));
    vlSelf->top__DOT____Vcellout__genblk1__BRA__6__KET____DOT__queue_block__full_queue 
        = (0xaU == (IData)(vlSelf->top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__counter));
    vlSelf->top__DOT____Vcellout__genblk1__BRA__7__KET____DOT__queue_block__full_queue 
        = (0xaU == (IData)(vlSelf->top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__counter));
    vlSelf->top__DOT____Vcellout__genblk1__BRA__8__KET____DOT__queue_block__full_queue 
        = (0xaU == (IData)(vlSelf->top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__counter));
    vlSelf->top__DOT____Vcellout__genblk1__BRA__9__KET____DOT__queue_block__full_queue 
        = (0xaU == (IData)(vlSelf->top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__counter));
    vlSelf->top__DOT____Vcellout__genblk1__BRA__10__KET____DOT__queue_block__full_queue 
        = (0xaU == (IData)(vlSelf->top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__counter));
    vlSelf->top__DOT__fin_bus = ((0x7f0U & (IData)(vlSelf->top__DOT__fin_bus)) 
                                 | (((IData)(vlSelf->top__DOT____Vcellout__genblk1__BRA__3__KET____DOT__engine__finished) 
                                     << 3U) | (((IData)(vlSelf->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__engine__finished) 
                                                << 2U) 
                                               | (((IData)(vlSelf->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__engine__finished) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__engine__finished)))));
    vlSelf->top__DOT__fin_bus = ((0x70fU & (IData)(vlSelf->top__DOT__fin_bus)) 
                                 | (((IData)(vlSelf->top__DOT____Vcellout__genblk1__BRA__7__KET____DOT__engine__finished) 
                                     << 7U) | (((IData)(vlSelf->top__DOT____Vcellout__genblk1__BRA__6__KET____DOT__engine__finished) 
                                                << 6U) 
                                               | (((IData)(vlSelf->top__DOT____Vcellout__genblk1__BRA__5__KET____DOT__engine__finished) 
                                                   << 5U) 
                                                  | ((IData)(vlSelf->top__DOT____Vcellout__genblk1__BRA__4__KET____DOT__engine__finished) 
                                                     << 4U)))));
    vlSelf->top__DOT__fin_bus = ((0xffU & (IData)(vlSelf->top__DOT__fin_bus)) 
                                 | (((IData)(vlSelf->top__DOT____Vcellout__genblk1__BRA__10__KET____DOT__engine__finished) 
                                     << 0xaU) | (((IData)(vlSelf->top__DOT____Vcellout__genblk1__BRA__9__KET____DOT__engine__finished) 
                                                  << 9U) 
                                                 | ((IData)(vlSelf->top__DOT____Vcellout__genblk1__BRA__8__KET____DOT__engine__finished) 
                                                    << 8U))));
    top__DOT__distributor__DOT____Vlvbound_h1e19e3e8__0 
        = VL_MODDIV_III(32, vlSelf->top__DOT__distributor__DOT__x0, (IData)(0x500U));
    vlSelf->top__DOT____Vcellout__distributor__x[0U] 
        = top__DOT__distributor__DOT____Vlvbound_h1e19e3e8__0;
    top__DOT__distributor__DOT____Vlvbound_h1e19e3e8__0 
        = VL_MODDIV_III(32, ((IData)(1U) + vlSelf->top__DOT__distributor__DOT__x0), (IData)(0x500U));
    vlSelf->top__DOT____Vcellout__distributor__x[1U] 
        = top__DOT__distributor__DOT____Vlvbound_h1e19e3e8__0;
    top__DOT__distributor__DOT____Vlvbound_h1e19e3e8__0 
        = VL_MODDIV_III(32, ((IData)(2U) + vlSelf->top__DOT__distributor__DOT__x0), (IData)(0x500U));
    vlSelf->top__DOT____Vcellout__distributor__x[2U] 
        = top__DOT__distributor__DOT____Vlvbound_h1e19e3e8__0;
    top__DOT__distributor__DOT____Vlvbound_h1e19e3e8__0 
        = VL_MODDIV_III(32, ((IData)(3U) + vlSelf->top__DOT__distributor__DOT__x0), (IData)(0x500U));
    vlSelf->top__DOT____Vcellout__distributor__x[3U] 
        = top__DOT__distributor__DOT____Vlvbound_h1e19e3e8__0;
    top__DOT__distributor__DOT____Vlvbound_h1e19e3e8__0 
        = VL_MODDIV_III(32, ((IData)(4U) + vlSelf->top__DOT__distributor__DOT__x0), (IData)(0x500U));
    vlSelf->top__DOT____Vcellout__distributor__x[4U] 
        = top__DOT__distributor__DOT____Vlvbound_h1e19e3e8__0;
    top__DOT__distributor__DOT____Vlvbound_h1e19e3e8__0 
        = VL_MODDIV_III(32, ((IData)(5U) + vlSelf->top__DOT__distributor__DOT__x0), (IData)(0x500U));
    vlSelf->top__DOT____Vcellout__distributor__x[5U] 
        = top__DOT__distributor__DOT____Vlvbound_h1e19e3e8__0;
    top__DOT__distributor__DOT____Vlvbound_h1e19e3e8__0 
        = VL_MODDIV_III(32, ((IData)(6U) + vlSelf->top__DOT__distributor__DOT__x0), (IData)(0x500U));
    vlSelf->top__DOT____Vcellout__distributor__x[6U] 
        = top__DOT__distributor__DOT____Vlvbound_h1e19e3e8__0;
    top__DOT__distributor__DOT____Vlvbound_h1e19e3e8__0 
        = VL_MODDIV_III(32, ((IData)(7U) + vlSelf->top__DOT__distributor__DOT__x0), (IData)(0x500U));
    vlSelf->top__DOT____Vcellout__distributor__x[7U] 
        = top__DOT__distributor__DOT____Vlvbound_h1e19e3e8__0;
    top__DOT__distributor__DOT____Vlvbound_h1e19e3e8__0 
        = VL_MODDIV_III(32, ((IData)(8U) + vlSelf->top__DOT__distributor__DOT__x0), (IData)(0x500U));
    vlSelf->top__DOT____Vcellout__distributor__x[8U] 
        = top__DOT__distributor__DOT____Vlvbound_h1e19e3e8__0;
    top__DOT__distributor__DOT____Vlvbound_h1e19e3e8__0 
        = VL_MODDIV_III(32, ((IData)(9U) + vlSelf->top__DOT__distributor__DOT__x0), (IData)(0x500U));
    vlSelf->top__DOT____Vcellout__distributor__x[9U] 
        = top__DOT__distributor__DOT____Vlvbound_h1e19e3e8__0;
    top__DOT__distributor__DOT____Vlvbound_h1e19e3e8__0 
        = VL_MODDIV_III(32, ((IData)(0xaU) + vlSelf->top__DOT__distributor__DOT__x0), (IData)(0x500U));
    vlSelf->top__DOT____Vcellout__distributor__x[0xaU] 
        = top__DOT__distributor__DOT____Vlvbound_h1e19e3e8__0;
    top__DOT__distributor__DOT____Vlvbound_h8244ad4d__0 
        = VL_MODDIV_III(32, (vlSelf->top__DOT__distributor__DOT__y0 
                             + VL_DIV_III(32, vlSelf->top__DOT__distributor__DOT__x0, (IData)(0x500U))), (IData)(0x2d0U));
    vlSelf->top__DOT____Vcellout__distributor__y[0U] 
        = top__DOT__distributor__DOT____Vlvbound_h8244ad4d__0;
    top__DOT__distributor__DOT____Vlvbound_h8244ad4d__0 
        = VL_MODDIV_III(32, (vlSelf->top__DOT__distributor__DOT__y0 
                             + VL_DIV_III(32, ((IData)(1U) 
                                               + vlSelf->top__DOT__distributor__DOT__x0), (IData)(0x500U))), (IData)(0x2d0U));
    vlSelf->top__DOT____Vcellout__distributor__y[1U] 
        = top__DOT__distributor__DOT____Vlvbound_h8244ad4d__0;
    top__DOT__distributor__DOT____Vlvbound_h8244ad4d__0 
        = VL_MODDIV_III(32, (vlSelf->top__DOT__distributor__DOT__y0 
                             + VL_DIV_III(32, ((IData)(2U) 
                                               + vlSelf->top__DOT__distributor__DOT__x0), (IData)(0x500U))), (IData)(0x2d0U));
    vlSelf->top__DOT____Vcellout__distributor__y[2U] 
        = top__DOT__distributor__DOT____Vlvbound_h8244ad4d__0;
    top__DOT__distributor__DOT____Vlvbound_h8244ad4d__0 
        = VL_MODDIV_III(32, (vlSelf->top__DOT__distributor__DOT__y0 
                             + VL_DIV_III(32, ((IData)(3U) 
                                               + vlSelf->top__DOT__distributor__DOT__x0), (IData)(0x500U))), (IData)(0x2d0U));
    vlSelf->top__DOT____Vcellout__distributor__y[3U] 
        = top__DOT__distributor__DOT____Vlvbound_h8244ad4d__0;
    top__DOT__distributor__DOT____Vlvbound_h8244ad4d__0 
        = VL_MODDIV_III(32, (vlSelf->top__DOT__distributor__DOT__y0 
                             + VL_DIV_III(32, ((IData)(4U) 
                                               + vlSelf->top__DOT__distributor__DOT__x0), (IData)(0x500U))), (IData)(0x2d0U));
    vlSelf->top__DOT____Vcellout__distributor__y[4U] 
        = top__DOT__distributor__DOT____Vlvbound_h8244ad4d__0;
    top__DOT__distributor__DOT____Vlvbound_h8244ad4d__0 
        = VL_MODDIV_III(32, (vlSelf->top__DOT__distributor__DOT__y0 
                             + VL_DIV_III(32, ((IData)(5U) 
                                               + vlSelf->top__DOT__distributor__DOT__x0), (IData)(0x500U))), (IData)(0x2d0U));
    vlSelf->top__DOT____Vcellout__distributor__y[5U] 
        = top__DOT__distributor__DOT____Vlvbound_h8244ad4d__0;
    top__DOT__distributor__DOT____Vlvbound_h8244ad4d__0 
        = VL_MODDIV_III(32, (vlSelf->top__DOT__distributor__DOT__y0 
                             + VL_DIV_III(32, ((IData)(6U) 
                                               + vlSelf->top__DOT__distributor__DOT__x0), (IData)(0x500U))), (IData)(0x2d0U));
    vlSelf->top__DOT____Vcellout__distributor__y[6U] 
        = top__DOT__distributor__DOT____Vlvbound_h8244ad4d__0;
    top__DOT__distributor__DOT____Vlvbound_h8244ad4d__0 
        = VL_MODDIV_III(32, (vlSelf->top__DOT__distributor__DOT__y0 
                             + VL_DIV_III(32, ((IData)(7U) 
                                               + vlSelf->top__DOT__distributor__DOT__x0), (IData)(0x500U))), (IData)(0x2d0U));
    vlSelf->top__DOT____Vcellout__distributor__y[7U] 
        = top__DOT__distributor__DOT____Vlvbound_h8244ad4d__0;
    top__DOT__distributor__DOT____Vlvbound_h8244ad4d__0 
        = VL_MODDIV_III(32, (vlSelf->top__DOT__distributor__DOT__y0 
                             + VL_DIV_III(32, ((IData)(8U) 
                                               + vlSelf->top__DOT__distributor__DOT__x0), (IData)(0x500U))), (IData)(0x2d0U));
    vlSelf->top__DOT____Vcellout__distributor__y[8U] 
        = top__DOT__distributor__DOT____Vlvbound_h8244ad4d__0;
    top__DOT__distributor__DOT____Vlvbound_h8244ad4d__0 
        = VL_MODDIV_III(32, (vlSelf->top__DOT__distributor__DOT__y0 
                             + VL_DIV_III(32, ((IData)(9U) 
                                               + vlSelf->top__DOT__distributor__DOT__x0), (IData)(0x500U))), (IData)(0x2d0U));
    vlSelf->top__DOT____Vcellout__distributor__y[9U] 
        = top__DOT__distributor__DOT____Vlvbound_h8244ad4d__0;
    top__DOT__distributor__DOT____Vlvbound_h8244ad4d__0 
        = VL_MODDIV_III(32, (vlSelf->top__DOT__distributor__DOT__y0 
                             + VL_DIV_III(32, ((IData)(0xaU) 
                                               + vlSelf->top__DOT__distributor__DOT__x0), (IData)(0x500U))), (IData)(0x2d0U));
    vlSelf->top__DOT____Vcellout__distributor__y[0xaU] 
        = top__DOT__distributor__DOT____Vlvbound_h8244ad4d__0;
    vlSelf->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__queue_block__en 
        = (0xffffffffU != vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue
           [0U]);
    if ((0xaU != (IData)(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__counter))) {
        if ((0U == (IData)(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__counter))) {
            vlSelf->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__queue_block__en = 0U;
        }
    }
    vlSelf->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__queue_block__en 
        = (0xffffffffU != vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue
           [0U]);
    if ((0xaU != (IData)(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__counter))) {
        if ((0U == (IData)(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__counter))) {
            vlSelf->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__queue_block__en = 0U;
        }
    }
    vlSelf->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__queue_block__en 
        = (0xffffffffU != vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue
           [0U]);
    if ((0xaU != (IData)(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__counter))) {
        if ((0U == (IData)(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__counter))) {
            vlSelf->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__queue_block__en = 0U;
        }
    }
    vlSelf->top__DOT____Vcellout__genblk1__BRA__3__KET____DOT__queue_block__en 
        = (0xffffffffU != vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue
           [0U]);
    if ((0xaU != (IData)(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__counter))) {
        if ((0U == (IData)(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__counter))) {
            vlSelf->top__DOT____Vcellout__genblk1__BRA__3__KET____DOT__queue_block__en = 0U;
        }
    }
    vlSelf->top__DOT____Vcellout__genblk1__BRA__4__KET____DOT__queue_block__en 
        = (0xffffffffU != vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue
           [0U]);
    if ((0xaU != (IData)(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__counter))) {
        if ((0U == (IData)(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__counter))) {
            vlSelf->top__DOT____Vcellout__genblk1__BRA__4__KET____DOT__queue_block__en = 0U;
        }
    }
    vlSelf->top__DOT____Vcellout__genblk1__BRA__5__KET____DOT__queue_block__en 
        = (0xffffffffU != vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue
           [0U]);
    if ((0xaU != (IData)(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__counter))) {
        if ((0U == (IData)(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__counter))) {
            vlSelf->top__DOT____Vcellout__genblk1__BRA__5__KET____DOT__queue_block__en = 0U;
        }
    }
    vlSelf->top__DOT____Vcellout__genblk1__BRA__6__KET____DOT__queue_block__en 
        = (0xffffffffU != vlSelf->top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__xqueue
           [0U]);
    if ((0xaU != (IData)(vlSelf->top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__counter))) {
        if ((0U == (IData)(vlSelf->top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__counter))) {
            vlSelf->top__DOT____Vcellout__genblk1__BRA__6__KET____DOT__queue_block__en = 0U;
        }
    }
    vlSelf->top__DOT____Vcellout__genblk1__BRA__7__KET____DOT__queue_block__en 
        = (0xffffffffU != vlSelf->top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__xqueue
           [0U]);
    if ((0xaU != (IData)(vlSelf->top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__counter))) {
        if ((0U == (IData)(vlSelf->top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__counter))) {
            vlSelf->top__DOT____Vcellout__genblk1__BRA__7__KET____DOT__queue_block__en = 0U;
        }
    }
    vlSelf->top__DOT____Vcellout__genblk1__BRA__8__KET____DOT__queue_block__en 
        = (0xffffffffU != vlSelf->top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__xqueue
           [0U]);
    if ((0xaU != (IData)(vlSelf->top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__counter))) {
        if ((0U == (IData)(vlSelf->top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__counter))) {
            vlSelf->top__DOT____Vcellout__genblk1__BRA__8__KET____DOT__queue_block__en = 0U;
        }
    }
    vlSelf->top__DOT____Vcellout__genblk1__BRA__9__KET____DOT__queue_block__en 
        = (0xffffffffU != vlSelf->top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__xqueue
           [0U]);
    if ((0xaU != (IData)(vlSelf->top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__counter))) {
        if ((0U == (IData)(vlSelf->top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__counter))) {
            vlSelf->top__DOT____Vcellout__genblk1__BRA__9__KET____DOT__queue_block__en = 0U;
        }
    }
    vlSelf->top__DOT____Vcellout__genblk1__BRA__10__KET____DOT__queue_block__en 
        = (0xffffffffU != vlSelf->top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__xqueue
           [0U]);
    if ((0xaU != (IData)(vlSelf->top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__counter))) {
        if ((0U == (IData)(vlSelf->top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__counter))) {
            vlSelf->top__DOT____Vcellout__genblk1__BRA__10__KET____DOT__queue_block__en = 0U;
        }
    }
    vlSelf->top__DOT____Vcellinp__lut_rom__iterations[0xaU] 
        = vlSelf->top__DOT__iterations_bus[0xaU];
    vlSelf->top__DOT____Vcellinp__lut_rom__iterations[9U] 
        = vlSelf->top__DOT__iterations_bus[9U];
    vlSelf->top__DOT____Vcellinp__lut_rom__iterations[8U] 
        = vlSelf->top__DOT__iterations_bus[8U];
    vlSelf->top__DOT____Vcellinp__lut_rom__iterations[7U] 
        = vlSelf->top__DOT__iterations_bus[7U];
    vlSelf->top__DOT____Vcellinp__lut_rom__iterations[6U] 
        = vlSelf->top__DOT__iterations_bus[6U];
    vlSelf->top__DOT____Vcellinp__lut_rom__iterations[5U] 
        = vlSelf->top__DOT__iterations_bus[5U];
    vlSelf->top__DOT____Vcellinp__lut_rom__iterations[4U] 
        = vlSelf->top__DOT__iterations_bus[4U];
    vlSelf->top__DOT____Vcellinp__lut_rom__iterations[3U] 
        = vlSelf->top__DOT__iterations_bus[3U];
    vlSelf->top__DOT____Vcellinp__lut_rom__iterations[2U] 
        = vlSelf->top__DOT__iterations_bus[2U];
    vlSelf->top__DOT____Vcellinp__lut_rom__iterations[1U] 
        = vlSelf->top__DOT__iterations_bus[1U];
    vlSelf->top__DOT____Vcellinp__lut_rom__iterations[0U] 
        = vlSelf->top__DOT__iterations_bus[0U];
    vlSelf->top__DOT__full_queue_bus = ((0x7f0U & (IData)(vlSelf->top__DOT__full_queue_bus)) 
                                        | (((IData)(vlSelf->top__DOT____Vcellout__genblk1__BRA__3__KET____DOT__queue_block__full_queue) 
                                            << 3U) 
                                           | (((IData)(vlSelf->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__queue_block__full_queue) 
                                               << 2U) 
                                              | (((IData)(vlSelf->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__queue_block__full_queue) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__queue_block__full_queue)))));
    vlSelf->top__DOT__full_queue_bus = ((0x70fU & (IData)(vlSelf->top__DOT__full_queue_bus)) 
                                        | (((IData)(vlSelf->top__DOT____Vcellout__genblk1__BRA__7__KET____DOT__queue_block__full_queue) 
                                            << 7U) 
                                           | (((IData)(vlSelf->top__DOT____Vcellout__genblk1__BRA__6__KET____DOT__queue_block__full_queue) 
                                               << 6U) 
                                              | (((IData)(vlSelf->top__DOT____Vcellout__genblk1__BRA__5__KET____DOT__queue_block__full_queue) 
                                                  << 5U) 
                                                 | ((IData)(vlSelf->top__DOT____Vcellout__genblk1__BRA__4__KET____DOT__queue_block__full_queue) 
                                                    << 4U)))));
    vlSelf->top__DOT__full_queue_bus = ((0xffU & (IData)(vlSelf->top__DOT__full_queue_bus)) 
                                        | (((IData)(vlSelf->top__DOT____Vcellout__genblk1__BRA__10__KET____DOT__queue_block__full_queue) 
                                            << 0xaU) 
                                           | (((IData)(vlSelf->top__DOT____Vcellout__genblk1__BRA__9__KET____DOT__queue_block__full_queue) 
                                               << 9U) 
                                              | ((IData)(vlSelf->top__DOT____Vcellout__genblk1__BRA__8__KET____DOT__queue_block__full_queue) 
                                                 << 8U))));
    vlSelf->top__DOT__fin_wire = ((0x7ffU == (IData)(vlSelf->top__DOT__fin_bus)) 
                                  | (IData)(vlSelf->reset));
    vlSelf->top__DOT__reset_engine = ((0x7ffU == (IData)(vlSelf->top__DOT__fin_bus)) 
                                      | (IData)(vlSelf->reset));
    vlSelf->top__DOT__x[0xaU] = vlSelf->top__DOT____Vcellout__distributor__x
        [0xaU];
    vlSelf->top__DOT__x[9U] = vlSelf->top__DOT____Vcellout__distributor__x
        [9U];
    vlSelf->top__DOT__x[8U] = vlSelf->top__DOT____Vcellout__distributor__x
        [8U];
    vlSelf->top__DOT__x[7U] = vlSelf->top__DOT____Vcellout__distributor__x
        [7U];
    vlSelf->top__DOT__x[6U] = vlSelf->top__DOT____Vcellout__distributor__x
        [6U];
    vlSelf->top__DOT__x[5U] = vlSelf->top__DOT____Vcellout__distributor__x
        [5U];
    vlSelf->top__DOT__x[4U] = vlSelf->top__DOT____Vcellout__distributor__x
        [4U];
    vlSelf->top__DOT__x[3U] = vlSelf->top__DOT____Vcellout__distributor__x
        [3U];
    vlSelf->top__DOT__x[2U] = vlSelf->top__DOT____Vcellout__distributor__x
        [2U];
    vlSelf->top__DOT__x[1U] = vlSelf->top__DOT____Vcellout__distributor__x
        [1U];
    vlSelf->top__DOT__x[0U] = vlSelf->top__DOT____Vcellout__distributor__x
        [0U];
    vlSelf->top__DOT__y[0xaU] = vlSelf->top__DOT____Vcellout__distributor__y
        [0xaU];
    vlSelf->top__DOT__y[9U] = vlSelf->top__DOT____Vcellout__distributor__y
        [9U];
    vlSelf->top__DOT__y[8U] = vlSelf->top__DOT____Vcellout__distributor__y
        [8U];
    vlSelf->top__DOT__y[7U] = vlSelf->top__DOT____Vcellout__distributor__y
        [7U];
    vlSelf->top__DOT__y[6U] = vlSelf->top__DOT____Vcellout__distributor__y
        [6U];
    vlSelf->top__DOT__y[5U] = vlSelf->top__DOT____Vcellout__distributor__y
        [5U];
    vlSelf->top__DOT__y[4U] = vlSelf->top__DOT____Vcellout__distributor__y
        [4U];
    vlSelf->top__DOT__y[3U] = vlSelf->top__DOT____Vcellout__distributor__y
        [3U];
    vlSelf->top__DOT__y[2U] = vlSelf->top__DOT____Vcellout__distributor__y
        [2U];
    vlSelf->top__DOT__y[1U] = vlSelf->top__DOT____Vcellout__distributor__y
        [1U];
    vlSelf->top__DOT__y[0U] = vlSelf->top__DOT____Vcellout__distributor__y
        [0U];
    vlSelf->top__DOT__en_bus = ((0x7f0U & (IData)(vlSelf->top__DOT__en_bus)) 
                                | (((IData)(vlSelf->top__DOT____Vcellout__genblk1__BRA__3__KET____DOT__queue_block__en) 
                                    << 3U) | (((IData)(vlSelf->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__queue_block__en) 
                                               << 2U) 
                                              | (((IData)(vlSelf->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__queue_block__en) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__queue_block__en)))));
    vlSelf->top__DOT__en_bus = ((0x70fU & (IData)(vlSelf->top__DOT__en_bus)) 
                                | (((IData)(vlSelf->top__DOT____Vcellout__genblk1__BRA__7__KET____DOT__queue_block__en) 
                                    << 7U) | (((IData)(vlSelf->top__DOT____Vcellout__genblk1__BRA__6__KET____DOT__queue_block__en) 
                                               << 6U) 
                                              | (((IData)(vlSelf->top__DOT____Vcellout__genblk1__BRA__5__KET____DOT__queue_block__en) 
                                                  << 5U) 
                                                 | ((IData)(vlSelf->top__DOT____Vcellout__genblk1__BRA__4__KET____DOT__queue_block__en) 
                                                    << 4U)))));
    vlSelf->top__DOT__en_bus = ((0xffU & (IData)(vlSelf->top__DOT__en_bus)) 
                                | (((IData)(vlSelf->top__DOT____Vcellout__genblk1__BRA__10__KET____DOT__queue_block__en) 
                                    << 0xaU) | (((IData)(vlSelf->top__DOT____Vcellout__genblk1__BRA__9__KET____DOT__queue_block__en) 
                                                 << 9U) 
                                                | ((IData)(vlSelf->top__DOT____Vcellout__genblk1__BRA__8__KET____DOT__queue_block__en) 
                                                   << 8U))));
    top__DOT__lut_rom__DOT____Vlvbound_hb610437c__0 
        = ((0x31U >= (0x3fU & vlSelf->top__DOT____Vcellinp__lut_rom__iterations
                      [0U])) ? vlSelf->top__DOT__lut_rom__DOT__lut_array
           [(0x3fU & vlSelf->top__DOT____Vcellinp__lut_rom__iterations
             [0U])] : 0U);
    vlSelf->top__DOT____Vcellout__lut_rom__rgb_val[0U] 
        = top__DOT__lut_rom__DOT____Vlvbound_hb610437c__0;
    top__DOT__lut_rom__DOT____Vlvbound_hb610437c__0 
        = ((0x31U >= (0x3fU & vlSelf->top__DOT____Vcellinp__lut_rom__iterations
                      [1U])) ? vlSelf->top__DOT__lut_rom__DOT__lut_array
           [(0x3fU & vlSelf->top__DOT____Vcellinp__lut_rom__iterations
             [1U])] : 0U);
    vlSelf->top__DOT____Vcellout__lut_rom__rgb_val[1U] 
        = top__DOT__lut_rom__DOT____Vlvbound_hb610437c__0;
    top__DOT__lut_rom__DOT____Vlvbound_hb610437c__0 
        = ((0x31U >= (0x3fU & vlSelf->top__DOT____Vcellinp__lut_rom__iterations
                      [2U])) ? vlSelf->top__DOT__lut_rom__DOT__lut_array
           [(0x3fU & vlSelf->top__DOT____Vcellinp__lut_rom__iterations
             [2U])] : 0U);
    vlSelf->top__DOT____Vcellout__lut_rom__rgb_val[2U] 
        = top__DOT__lut_rom__DOT____Vlvbound_hb610437c__0;
    top__DOT__lut_rom__DOT____Vlvbound_hb610437c__0 
        = ((0x31U >= (0x3fU & vlSelf->top__DOT____Vcellinp__lut_rom__iterations
                      [3U])) ? vlSelf->top__DOT__lut_rom__DOT__lut_array
           [(0x3fU & vlSelf->top__DOT____Vcellinp__lut_rom__iterations
             [3U])] : 0U);
    vlSelf->top__DOT____Vcellout__lut_rom__rgb_val[3U] 
        = top__DOT__lut_rom__DOT____Vlvbound_hb610437c__0;
    top__DOT__lut_rom__DOT____Vlvbound_hb610437c__0 
        = ((0x31U >= (0x3fU & vlSelf->top__DOT____Vcellinp__lut_rom__iterations
                      [4U])) ? vlSelf->top__DOT__lut_rom__DOT__lut_array
           [(0x3fU & vlSelf->top__DOT____Vcellinp__lut_rom__iterations
             [4U])] : 0U);
    vlSelf->top__DOT____Vcellout__lut_rom__rgb_val[4U] 
        = top__DOT__lut_rom__DOT____Vlvbound_hb610437c__0;
    top__DOT__lut_rom__DOT____Vlvbound_hb610437c__0 
        = ((0x31U >= (0x3fU & vlSelf->top__DOT____Vcellinp__lut_rom__iterations
                      [5U])) ? vlSelf->top__DOT__lut_rom__DOT__lut_array
           [(0x3fU & vlSelf->top__DOT____Vcellinp__lut_rom__iterations
             [5U])] : 0U);
    vlSelf->top__DOT____Vcellout__lut_rom__rgb_val[5U] 
        = top__DOT__lut_rom__DOT____Vlvbound_hb610437c__0;
    top__DOT__lut_rom__DOT____Vlvbound_hb610437c__0 
        = ((0x31U >= (0x3fU & vlSelf->top__DOT____Vcellinp__lut_rom__iterations
                      [6U])) ? vlSelf->top__DOT__lut_rom__DOT__lut_array
           [(0x3fU & vlSelf->top__DOT____Vcellinp__lut_rom__iterations
             [6U])] : 0U);
    vlSelf->top__DOT____Vcellout__lut_rom__rgb_val[6U] 
        = top__DOT__lut_rom__DOT____Vlvbound_hb610437c__0;
    top__DOT__lut_rom__DOT____Vlvbound_hb610437c__0 
        = ((0x31U >= (0x3fU & vlSelf->top__DOT____Vcellinp__lut_rom__iterations
                      [7U])) ? vlSelf->top__DOT__lut_rom__DOT__lut_array
           [(0x3fU & vlSelf->top__DOT____Vcellinp__lut_rom__iterations
             [7U])] : 0U);
    vlSelf->top__DOT____Vcellout__lut_rom__rgb_val[7U] 
        = top__DOT__lut_rom__DOT____Vlvbound_hb610437c__0;
    top__DOT__lut_rom__DOT____Vlvbound_hb610437c__0 
        = ((0x31U >= (0x3fU & vlSelf->top__DOT____Vcellinp__lut_rom__iterations
                      [8U])) ? vlSelf->top__DOT__lut_rom__DOT__lut_array
           [(0x3fU & vlSelf->top__DOT____Vcellinp__lut_rom__iterations
             [8U])] : 0U);
    vlSelf->top__DOT____Vcellout__lut_rom__rgb_val[8U] 
        = top__DOT__lut_rom__DOT____Vlvbound_hb610437c__0;
    top__DOT__lut_rom__DOT____Vlvbound_hb610437c__0 
        = ((0x31U >= (0x3fU & vlSelf->top__DOT____Vcellinp__lut_rom__iterations
                      [9U])) ? vlSelf->top__DOT__lut_rom__DOT__lut_array
           [(0x3fU & vlSelf->top__DOT____Vcellinp__lut_rom__iterations
             [9U])] : 0U);
    vlSelf->top__DOT____Vcellout__lut_rom__rgb_val[9U] 
        = top__DOT__lut_rom__DOT____Vlvbound_hb610437c__0;
    top__DOT__lut_rom__DOT____Vlvbound_hb610437c__0 
        = ((0x31U >= (0x3fU & vlSelf->top__DOT____Vcellinp__lut_rom__iterations
                      [0xaU])) ? vlSelf->top__DOT__lut_rom__DOT__lut_array
           [(0x3fU & vlSelf->top__DOT____Vcellinp__lut_rom__iterations
             [0xaU])] : 0U);
    vlSelf->top__DOT____Vcellout__lut_rom__rgb_val[0xaU] 
        = top__DOT__lut_rom__DOT____Vlvbound_hb610437c__0;
    vlSelf->top__DOT__colour_bus[0xaU] = vlSelf->top__DOT____Vcellout__lut_rom__rgb_val
        [0xaU];
    vlSelf->top__DOT__colour_bus[9U] = vlSelf->top__DOT____Vcellout__lut_rom__rgb_val
        [9U];
    vlSelf->top__DOT__colour_bus[8U] = vlSelf->top__DOT____Vcellout__lut_rom__rgb_val
        [8U];
    vlSelf->top__DOT__colour_bus[7U] = vlSelf->top__DOT____Vcellout__lut_rom__rgb_val
        [7U];
    vlSelf->top__DOT__colour_bus[6U] = vlSelf->top__DOT____Vcellout__lut_rom__rgb_val
        [6U];
    vlSelf->top__DOT__colour_bus[5U] = vlSelf->top__DOT____Vcellout__lut_rom__rgb_val
        [5U];
    vlSelf->top__DOT__colour_bus[4U] = vlSelf->top__DOT____Vcellout__lut_rom__rgb_val
        [4U];
    vlSelf->top__DOT__colour_bus[3U] = vlSelf->top__DOT____Vcellout__lut_rom__rgb_val
        [3U];
    vlSelf->top__DOT__colour_bus[2U] = vlSelf->top__DOT____Vcellout__lut_rom__rgb_val
        [2U];
    vlSelf->top__DOT__colour_bus[1U] = vlSelf->top__DOT____Vcellout__lut_rom__rgb_val
        [1U];
    vlSelf->top__DOT__colour_bus[0U] = vlSelf->top__DOT____Vcellout__lut_rom__rgb_val
        [0U];
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__reset = vlSelf->reset;
}

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vtop___024root___final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___final\n"); );
}

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->ready = VL_RAND_RESET_I(1);
    vlSelf->iterations_max = VL_RAND_RESET_I(32);
    vlSelf->zoom = VL_RAND_RESET_I(32);
    vlSelf->x_offset = VL_RAND_RESET_I(32);
    vlSelf->y_offset = VL_RAND_RESET_I(32);
    vlSelf->r = VL_RAND_RESET_I(8);
    vlSelf->g = VL_RAND_RESET_I(8);
    vlSelf->b = VL_RAND_RESET_I(8);
    vlSelf->first = VL_RAND_RESET_I(1);
    vlSelf->last_x = VL_RAND_RESET_I(1);
    vlSelf->last_y = VL_RAND_RESET_I(1);
    vlSelf->valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__colour_o_wire = VL_RAND_RESET_I(24);
    vlSelf->top__DOT__xpixel_wire = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ypixel_wire = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__colour_wire = VL_RAND_RESET_I(24);
    vlSelf->top__DOT__reset_engine = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__fin_wire = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__fin_bus = VL_RAND_RESET_I(11);
    for (int __Vi0=0; __Vi0<11; ++__Vi0) {
        vlSelf->top__DOT__x[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<11; ++__Vi0) {
        vlSelf->top__DOT__y[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<11; ++__Vi0) {
        vlSelf->top__DOT__iterations_bus[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<11; ++__Vi0) {
        vlSelf->top__DOT__xpixel_bus[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<11; ++__Vi0) {
        vlSelf->top__DOT__ypixel_bus[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__en_bus = VL_RAND_RESET_I(11);
    for (int __Vi0=0; __Vi0<11; ++__Vi0) {
        vlSelf->top__DOT__colour_bus[__Vi0] = VL_RAND_RESET_I(24);
    }
    vlSelf->top__DOT__full_queue_bus = VL_RAND_RESET_I(11);
    for (int __Vi0=0; __Vi0<11; ++__Vi0) {
        vlSelf->top__DOT____Vcellout__distributor__y[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<11; ++__Vi0) {
        vlSelf->top__DOT____Vcellout__distributor__x[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<11; ++__Vi0) {
        vlSelf->top__DOT____Vcellout__lut_rom__rgb_val[__Vi0] = VL_RAND_RESET_I(24);
    }
    for (int __Vi0=0; __Vi0<11; ++__Vi0) {
        vlSelf->top__DOT____Vcellinp__lut_rom__iterations[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__engine__ypixel = VL_RAND_RESET_I(32);
    vlSelf->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__engine__xpixel = VL_RAND_RESET_I(32);
    vlSelf->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__engine__iterations = VL_RAND_RESET_I(32);
    vlSelf->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__engine__finished = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__queue_block__en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__queue_block__full_queue = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__engine__ypixel = VL_RAND_RESET_I(32);
    vlSelf->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__engine__xpixel = VL_RAND_RESET_I(32);
    vlSelf->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__engine__iterations = VL_RAND_RESET_I(32);
    vlSelf->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__engine__finished = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__queue_block__en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__queue_block__full_queue = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__engine__ypixel = VL_RAND_RESET_I(32);
    vlSelf->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__engine__xpixel = VL_RAND_RESET_I(32);
    vlSelf->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__engine__iterations = VL_RAND_RESET_I(32);
    vlSelf->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__engine__finished = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__queue_block__en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__queue_block__full_queue = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vcellout__genblk1__BRA__3__KET____DOT__engine__ypixel = VL_RAND_RESET_I(32);
    vlSelf->top__DOT____Vcellout__genblk1__BRA__3__KET____DOT__engine__xpixel = VL_RAND_RESET_I(32);
    vlSelf->top__DOT____Vcellout__genblk1__BRA__3__KET____DOT__engine__iterations = VL_RAND_RESET_I(32);
    vlSelf->top__DOT____Vcellout__genblk1__BRA__3__KET____DOT__engine__finished = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vcellout__genblk1__BRA__3__KET____DOT__queue_block__en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vcellout__genblk1__BRA__3__KET____DOT__queue_block__full_queue = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vcellout__genblk1__BRA__4__KET____DOT__engine__ypixel = VL_RAND_RESET_I(32);
    vlSelf->top__DOT____Vcellout__genblk1__BRA__4__KET____DOT__engine__xpixel = VL_RAND_RESET_I(32);
    vlSelf->top__DOT____Vcellout__genblk1__BRA__4__KET____DOT__engine__iterations = VL_RAND_RESET_I(32);
    vlSelf->top__DOT____Vcellout__genblk1__BRA__4__KET____DOT__engine__finished = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vcellout__genblk1__BRA__4__KET____DOT__queue_block__en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vcellout__genblk1__BRA__4__KET____DOT__queue_block__full_queue = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vcellout__genblk1__BRA__5__KET____DOT__engine__ypixel = VL_RAND_RESET_I(32);
    vlSelf->top__DOT____Vcellout__genblk1__BRA__5__KET____DOT__engine__xpixel = VL_RAND_RESET_I(32);
    vlSelf->top__DOT____Vcellout__genblk1__BRA__5__KET____DOT__engine__iterations = VL_RAND_RESET_I(32);
    vlSelf->top__DOT____Vcellout__genblk1__BRA__5__KET____DOT__engine__finished = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vcellout__genblk1__BRA__5__KET____DOT__queue_block__en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vcellout__genblk1__BRA__5__KET____DOT__queue_block__full_queue = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vcellout__genblk1__BRA__6__KET____DOT__engine__ypixel = VL_RAND_RESET_I(32);
    vlSelf->top__DOT____Vcellout__genblk1__BRA__6__KET____DOT__engine__xpixel = VL_RAND_RESET_I(32);
    vlSelf->top__DOT____Vcellout__genblk1__BRA__6__KET____DOT__engine__iterations = VL_RAND_RESET_I(32);
    vlSelf->top__DOT____Vcellout__genblk1__BRA__6__KET____DOT__engine__finished = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vcellout__genblk1__BRA__6__KET____DOT__queue_block__en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vcellout__genblk1__BRA__6__KET____DOT__queue_block__full_queue = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vcellout__genblk1__BRA__7__KET____DOT__engine__ypixel = VL_RAND_RESET_I(32);
    vlSelf->top__DOT____Vcellout__genblk1__BRA__7__KET____DOT__engine__xpixel = VL_RAND_RESET_I(32);
    vlSelf->top__DOT____Vcellout__genblk1__BRA__7__KET____DOT__engine__iterations = VL_RAND_RESET_I(32);
    vlSelf->top__DOT____Vcellout__genblk1__BRA__7__KET____DOT__engine__finished = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vcellout__genblk1__BRA__7__KET____DOT__queue_block__en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vcellout__genblk1__BRA__7__KET____DOT__queue_block__full_queue = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vcellout__genblk1__BRA__8__KET____DOT__engine__ypixel = VL_RAND_RESET_I(32);
    vlSelf->top__DOT____Vcellout__genblk1__BRA__8__KET____DOT__engine__xpixel = VL_RAND_RESET_I(32);
    vlSelf->top__DOT____Vcellout__genblk1__BRA__8__KET____DOT__engine__iterations = VL_RAND_RESET_I(32);
    vlSelf->top__DOT____Vcellout__genblk1__BRA__8__KET____DOT__engine__finished = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vcellout__genblk1__BRA__8__KET____DOT__queue_block__en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vcellout__genblk1__BRA__8__KET____DOT__queue_block__full_queue = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vcellout__genblk1__BRA__9__KET____DOT__engine__ypixel = VL_RAND_RESET_I(32);
    vlSelf->top__DOT____Vcellout__genblk1__BRA__9__KET____DOT__engine__xpixel = VL_RAND_RESET_I(32);
    vlSelf->top__DOT____Vcellout__genblk1__BRA__9__KET____DOT__engine__iterations = VL_RAND_RESET_I(32);
    vlSelf->top__DOT____Vcellout__genblk1__BRA__9__KET____DOT__engine__finished = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vcellout__genblk1__BRA__9__KET____DOT__queue_block__en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vcellout__genblk1__BRA__9__KET____DOT__queue_block__full_queue = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vcellout__genblk1__BRA__10__KET____DOT__engine__ypixel = VL_RAND_RESET_I(32);
    vlSelf->top__DOT____Vcellout__genblk1__BRA__10__KET____DOT__engine__xpixel = VL_RAND_RESET_I(32);
    vlSelf->top__DOT____Vcellout__genblk1__BRA__10__KET____DOT__engine__iterations = VL_RAND_RESET_I(32);
    vlSelf->top__DOT____Vcellout__genblk1__BRA__10__KET____DOT__engine__finished = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vcellout__genblk1__BRA__10__KET____DOT__queue_block__en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vcellout__genblk1__BRA__10__KET____DOT__queue_block__full_queue = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__distributor__DOT__x0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__distributor__DOT__y0 = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<50; ++__Vi0) {
        vlSelf->top__DOT__lut_rom__DOT__lut_array[__Vi0] = VL_RAND_RESET_I(24);
    }
    vlSelf->top__DOT__combinator_block__DOT__xpixel = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__combinator_block__DOT__ypixel = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__x0_buff = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__y0_buff = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__state = 0;
    vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__x = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__y = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__y_tmp = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__x2 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__y2 = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<10; ++__Vi0) {
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[__Vi0] = VL_RAND_RESET_I(24);
    }
    for (int __Vi0=0; __Vi0<10; ++__Vi0) {
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<10; ++__Vi0) {
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__counter = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__prev_xpixel = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__fin_wire = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_wire = VL_RAND_RESET_I(24);
    vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__unnamedblk3__DOT__i = 0;
    vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0 = VL_RAND_RESET_I(24);
    vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_hba1e7bd2__0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_hb8b57eae__0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_he6b57a3a__0 = VL_RAND_RESET_I(24);
    vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_h7940f0e4__0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_h794bab9c__0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__x0_buff = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__y0_buff = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__state = 0;
    vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__x = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__y = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__y_tmp = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__x2 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__y2 = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<10; ++__Vi0) {
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[__Vi0] = VL_RAND_RESET_I(24);
    }
    for (int __Vi0=0; __Vi0<10; ++__Vi0) {
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<10; ++__Vi0) {
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__counter = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__prev_xpixel = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__fin_wire = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_wire = VL_RAND_RESET_I(24);
    vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__unnamedblk3__DOT__i = 0;
    vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0 = VL_RAND_RESET_I(24);
    vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_hba1e7bd2__0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_hb8b57eae__0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_he6b57a3a__0 = VL_RAND_RESET_I(24);
    vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_h7940f0e4__0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_h794bab9c__0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__x0_buff = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__y0_buff = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__state = 0;
    vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__x = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__y = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__y_tmp = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__x2 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__y2 = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<10; ++__Vi0) {
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[__Vi0] = VL_RAND_RESET_I(24);
    }
    for (int __Vi0=0; __Vi0<10; ++__Vi0) {
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<10; ++__Vi0) {
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__counter = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__prev_xpixel = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__fin_wire = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_wire = VL_RAND_RESET_I(24);
    vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__unnamedblk3__DOT__i = 0;
    vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0 = VL_RAND_RESET_I(24);
    vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_hba1e7bd2__0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_hb8b57eae__0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_he6b57a3a__0 = VL_RAND_RESET_I(24);
    vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_h7940f0e4__0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_h794bab9c__0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__engine__DOT__x0_buff = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__engine__DOT__y0_buff = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__engine__DOT__state = 0;
    vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__engine__DOT__x = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__engine__DOT__y = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__engine__DOT__y_tmp = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__engine__DOT__x2 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__engine__DOT__y2 = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<10; ++__Vi0) {
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue[__Vi0] = VL_RAND_RESET_I(24);
    }
    for (int __Vi0=0; __Vi0<10; ++__Vi0) {
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<10; ++__Vi0) {
        vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__counter = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__prev_xpixel = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__fin_wire = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_wire = VL_RAND_RESET_I(24);
    vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__unnamedblk3__DOT__i = 0;
    vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0 = VL_RAND_RESET_I(24);
    vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_hba1e7bd2__0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_hb8b57eae__0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_he6b57a3a__0 = VL_RAND_RESET_I(24);
    vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_h7940f0e4__0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT____Vlvbound_h794bab9c__0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__engine__DOT__x0_buff = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__engine__DOT__y0_buff = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__engine__DOT__state = 0;
    vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__engine__DOT__x = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__engine__DOT__y = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__engine__DOT__y_tmp = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__engine__DOT__x2 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__engine__DOT__y2 = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<10; ++__Vi0) {
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue[__Vi0] = VL_RAND_RESET_I(24);
    }
    for (int __Vi0=0; __Vi0<10; ++__Vi0) {
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<10; ++__Vi0) {
        vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__counter = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__prev_xpixel = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__fin_wire = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_wire = VL_RAND_RESET_I(24);
    vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__unnamedblk3__DOT__i = 0;
    vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0 = VL_RAND_RESET_I(24);
    vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_hba1e7bd2__0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_hb8b57eae__0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_he6b57a3a__0 = VL_RAND_RESET_I(24);
    vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_h7940f0e4__0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT____Vlvbound_h794bab9c__0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__engine__DOT__x0_buff = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__engine__DOT__y0_buff = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__engine__DOT__state = 0;
    vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__engine__DOT__x = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__engine__DOT__y = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__engine__DOT__y_tmp = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__engine__DOT__x2 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__engine__DOT__y2 = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<10; ++__Vi0) {
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue[__Vi0] = VL_RAND_RESET_I(24);
    }
    for (int __Vi0=0; __Vi0<10; ++__Vi0) {
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<10; ++__Vi0) {
        vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__counter = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__prev_xpixel = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__fin_wire = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_wire = VL_RAND_RESET_I(24);
    vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__unnamedblk3__DOT__i = 0;
    vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0 = VL_RAND_RESET_I(24);
    vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_hba1e7bd2__0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_hb8b57eae__0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_he6b57a3a__0 = VL_RAND_RESET_I(24);
    vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_h7940f0e4__0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT____Vlvbound_h794bab9c__0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__genblk1__BRA__6__KET____DOT__engine__DOT__x0_buff = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__genblk1__BRA__6__KET____DOT__engine__DOT__y0_buff = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__genblk1__BRA__6__KET____DOT__engine__DOT__state = 0;
    vlSelf->top__DOT__genblk1__BRA__6__KET____DOT__engine__DOT__x = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__genblk1__BRA__6__KET____DOT__engine__DOT__y = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__genblk1__BRA__6__KET____DOT__engine__DOT__y_tmp = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__genblk1__BRA__6__KET____DOT__engine__DOT__x2 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__genblk1__BRA__6__KET____DOT__engine__DOT__y2 = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<10; ++__Vi0) {
        vlSelf->top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__colour_queue[__Vi0] = VL_RAND_RESET_I(24);
    }
    for (int __Vi0=0; __Vi0<10; ++__Vi0) {
        vlSelf->top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__xqueue[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<10; ++__Vi0) {
        vlSelf->top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__yqueue[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__counter = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__prev_xpixel = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__fin_wire = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__colour_wire = VL_RAND_RESET_I(24);
    vlSelf->top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__unnamedblk3__DOT__i = 0;
    vlSelf->top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0 = VL_RAND_RESET_I(24);
    vlSelf->top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT____Vlvbound_hba1e7bd2__0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT____Vlvbound_hb8b57eae__0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT____Vlvbound_he6b57a3a__0 = VL_RAND_RESET_I(24);
    vlSelf->top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT____Vlvbound_h7940f0e4__0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT____Vlvbound_h794bab9c__0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__genblk1__BRA__7__KET____DOT__engine__DOT__x0_buff = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__genblk1__BRA__7__KET____DOT__engine__DOT__y0_buff = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__genblk1__BRA__7__KET____DOT__engine__DOT__state = 0;
    vlSelf->top__DOT__genblk1__BRA__7__KET____DOT__engine__DOT__x = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__genblk1__BRA__7__KET____DOT__engine__DOT__y = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__genblk1__BRA__7__KET____DOT__engine__DOT__y_tmp = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__genblk1__BRA__7__KET____DOT__engine__DOT__x2 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__genblk1__BRA__7__KET____DOT__engine__DOT__y2 = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<10; ++__Vi0) {
        vlSelf->top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__colour_queue[__Vi0] = VL_RAND_RESET_I(24);
    }
    for (int __Vi0=0; __Vi0<10; ++__Vi0) {
        vlSelf->top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__xqueue[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<10; ++__Vi0) {
        vlSelf->top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__yqueue[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__counter = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__prev_xpixel = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__fin_wire = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__colour_wire = VL_RAND_RESET_I(24);
    vlSelf->top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__unnamedblk3__DOT__i = 0;
    vlSelf->top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0 = VL_RAND_RESET_I(24);
    vlSelf->top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT____Vlvbound_hba1e7bd2__0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT____Vlvbound_hb8b57eae__0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT____Vlvbound_he6b57a3a__0 = VL_RAND_RESET_I(24);
    vlSelf->top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT____Vlvbound_h7940f0e4__0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT____Vlvbound_h794bab9c__0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__genblk1__BRA__8__KET____DOT__engine__DOT__x0_buff = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__genblk1__BRA__8__KET____DOT__engine__DOT__y0_buff = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__genblk1__BRA__8__KET____DOT__engine__DOT__state = 0;
    vlSelf->top__DOT__genblk1__BRA__8__KET____DOT__engine__DOT__x = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__genblk1__BRA__8__KET____DOT__engine__DOT__y = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__genblk1__BRA__8__KET____DOT__engine__DOT__y_tmp = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__genblk1__BRA__8__KET____DOT__engine__DOT__x2 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__genblk1__BRA__8__KET____DOT__engine__DOT__y2 = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<10; ++__Vi0) {
        vlSelf->top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__colour_queue[__Vi0] = VL_RAND_RESET_I(24);
    }
    for (int __Vi0=0; __Vi0<10; ++__Vi0) {
        vlSelf->top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__xqueue[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<10; ++__Vi0) {
        vlSelf->top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__yqueue[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__counter = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__prev_xpixel = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__fin_wire = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__colour_wire = VL_RAND_RESET_I(24);
    vlSelf->top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__unnamedblk3__DOT__i = 0;
    vlSelf->top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0 = VL_RAND_RESET_I(24);
    vlSelf->top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT____Vlvbound_hba1e7bd2__0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT____Vlvbound_hb8b57eae__0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT____Vlvbound_he6b57a3a__0 = VL_RAND_RESET_I(24);
    vlSelf->top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT____Vlvbound_h7940f0e4__0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT____Vlvbound_h794bab9c__0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__genblk1__BRA__9__KET____DOT__engine__DOT__x0_buff = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__genblk1__BRA__9__KET____DOT__engine__DOT__y0_buff = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__genblk1__BRA__9__KET____DOT__engine__DOT__state = 0;
    vlSelf->top__DOT__genblk1__BRA__9__KET____DOT__engine__DOT__x = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__genblk1__BRA__9__KET____DOT__engine__DOT__y = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__genblk1__BRA__9__KET____DOT__engine__DOT__y_tmp = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__genblk1__BRA__9__KET____DOT__engine__DOT__x2 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__genblk1__BRA__9__KET____DOT__engine__DOT__y2 = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<10; ++__Vi0) {
        vlSelf->top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__colour_queue[__Vi0] = VL_RAND_RESET_I(24);
    }
    for (int __Vi0=0; __Vi0<10; ++__Vi0) {
        vlSelf->top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__xqueue[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<10; ++__Vi0) {
        vlSelf->top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__yqueue[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__counter = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__prev_xpixel = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__fin_wire = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__colour_wire = VL_RAND_RESET_I(24);
    vlSelf->top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__unnamedblk3__DOT__i = 0;
    vlSelf->top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0 = VL_RAND_RESET_I(24);
    vlSelf->top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT____Vlvbound_hba1e7bd2__0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT____Vlvbound_hb8b57eae__0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT____Vlvbound_he6b57a3a__0 = VL_RAND_RESET_I(24);
    vlSelf->top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT____Vlvbound_h7940f0e4__0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT____Vlvbound_h794bab9c__0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__genblk1__BRA__10__KET____DOT__engine__DOT__x0_buff = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__genblk1__BRA__10__KET____DOT__engine__DOT__y0_buff = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__genblk1__BRA__10__KET____DOT__engine__DOT__state = 0;
    vlSelf->top__DOT__genblk1__BRA__10__KET____DOT__engine__DOT__x = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__genblk1__BRA__10__KET____DOT__engine__DOT__y = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__genblk1__BRA__10__KET____DOT__engine__DOT__y_tmp = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__genblk1__BRA__10__KET____DOT__engine__DOT__x2 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__genblk1__BRA__10__KET____DOT__engine__DOT__y2 = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<10; ++__Vi0) {
        vlSelf->top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__colour_queue[__Vi0] = VL_RAND_RESET_I(24);
    }
    for (int __Vi0=0; __Vi0<10; ++__Vi0) {
        vlSelf->top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__xqueue[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<10; ++__Vi0) {
        vlSelf->top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__yqueue[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__counter = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__prev_xpixel = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__fin_wire = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__colour_wire = VL_RAND_RESET_I(24);
    vlSelf->top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__unnamedblk3__DOT__i = 0;
    vlSelf->top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT____Vlvbound_ha987a96c__0 = VL_RAND_RESET_I(24);
    vlSelf->top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT____Vlvbound_hba1e7bd2__0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT____Vlvbound_hb8b57eae__0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT____Vlvbound_he6b57a3a__0 = VL_RAND_RESET_I(24);
    vlSelf->top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT____Vlvbound_h7940f0e4__0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT____Vlvbound_h794bab9c__0 = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__top__DOT__combinator_block__DOT__xpixel = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__top__DOT__combinator_block__DOT__ypixel = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__counter = VL_RAND_RESET_I(4);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v0 = 0;
    vlSelf->__Vdly__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__fin_wire = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_wire = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v10 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v10 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue__v10 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v10 = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v10 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v11 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue__v11 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v11 = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v11 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v12 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue__v12 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v12 = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v12 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v13 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue__v13 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v13 = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v13 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v14 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue__v14 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v14 = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v14 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v15 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue__v15 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v15 = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v15 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v16 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue__v16 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v16 = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v16 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v17 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue__v17 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v17 = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v17 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v18 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue__v18 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v19 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v18 = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvdim0__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v19 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v19 = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v19 = 0;
    vlSelf->__Vdlyvdim0__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v20 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v20 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v20 = 0;
    vlSelf->__Vdlyvdim0__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue__v20 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue__v20 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue__v20 = 0;
    vlSelf->__Vdly__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__counter = VL_RAND_RESET_I(4);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v0 = 0;
    vlSelf->__Vdly__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__fin_wire = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_wire = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v10 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v10 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue__v10 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v10 = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v10 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v11 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue__v11 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v11 = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v11 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v12 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue__v12 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v12 = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v12 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v13 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue__v13 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v13 = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v13 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v14 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue__v14 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v14 = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v14 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v15 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue__v15 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v15 = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v15 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v16 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue__v16 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v16 = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v16 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v17 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue__v17 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v17 = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v17 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v18 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue__v18 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v19 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v18 = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvdim0__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v19 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v19 = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v19 = 0;
    vlSelf->__Vdlyvdim0__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v20 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v20 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v20 = 0;
    vlSelf->__Vdlyvdim0__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue__v20 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue__v20 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue__v20 = 0;
    vlSelf->__Vdly__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__counter = VL_RAND_RESET_I(4);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v0 = 0;
    vlSelf->__Vdly__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__fin_wire = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_wire = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v10 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v10 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue__v10 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v10 = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v10 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v11 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue__v11 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v11 = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v11 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v12 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue__v12 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v12 = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v12 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v13 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue__v13 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v13 = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v13 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v14 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue__v14 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v14 = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v14 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v15 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue__v15 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v15 = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v15 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v16 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue__v16 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v16 = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v16 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v17 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue__v17 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v17 = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v17 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v18 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue__v18 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v19 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v18 = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvdim0__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v19 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v19 = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v19 = 0;
    vlSelf->__Vdlyvdim0__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v20 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v20 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v20 = 0;
    vlSelf->__Vdlyvdim0__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue__v20 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue__v20 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue__v20 = 0;
    vlSelf->__Vdly__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__counter = VL_RAND_RESET_I(4);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v0 = 0;
    vlSelf->__Vdly__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__fin_wire = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_wire = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue__v10 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue__v10 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue__v10 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v10 = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v10 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue__v11 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue__v11 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v11 = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v11 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue__v12 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue__v12 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v12 = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v12 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue__v13 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue__v13 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v13 = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v13 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue__v14 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue__v14 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v14 = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v14 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue__v15 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue__v15 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v15 = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v15 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue__v16 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue__v16 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v16 = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v16 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue__v17 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue__v17 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v17 = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v17 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue__v18 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue__v18 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue__v19 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v18 = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvdim0__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v19 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v19 = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue__v19 = 0;
    vlSelf->__Vdlyvdim0__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue__v20 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue__v20 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue__v20 = 0;
    vlSelf->__Vdlyvdim0__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue__v20 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue__v20 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue__v20 = 0;
    vlSelf->__Vdly__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__counter = VL_RAND_RESET_I(4);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v0 = 0;
    vlSelf->__Vdly__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__fin_wire = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_wire = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue__v10 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue__v10 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue__v10 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v10 = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v10 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue__v11 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue__v11 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v11 = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v11 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue__v12 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue__v12 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v12 = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v12 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue__v13 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue__v13 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v13 = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v13 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue__v14 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue__v14 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v14 = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v14 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue__v15 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue__v15 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v15 = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v15 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue__v16 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue__v16 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v16 = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v16 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue__v17 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue__v17 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v17 = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v17 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue__v18 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue__v18 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue__v19 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v18 = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvdim0__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v19 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v19 = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue__v19 = 0;
    vlSelf->__Vdlyvdim0__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue__v20 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue__v20 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue__v20 = 0;
    vlSelf->__Vdlyvdim0__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue__v20 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue__v20 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue__v20 = 0;
    vlSelf->__Vdly__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__counter = VL_RAND_RESET_I(4);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v0 = 0;
    vlSelf->__Vdly__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__fin_wire = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_wire = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue__v10 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue__v10 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue__v10 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v10 = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v10 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue__v11 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue__v11 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v11 = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v11 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue__v12 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue__v12 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v12 = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v12 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue__v13 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue__v13 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v13 = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v13 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue__v14 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue__v14 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v14 = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v14 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue__v15 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue__v15 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v15 = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v15 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue__v16 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue__v16 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v16 = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v16 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue__v17 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue__v17 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v17 = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v17 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue__v18 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue__v18 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue__v19 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v18 = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvdim0__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v19 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v19 = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue__v19 = 0;
    vlSelf->__Vdlyvdim0__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue__v20 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue__v20 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue__v20 = 0;
    vlSelf->__Vdlyvdim0__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue__v20 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue__v20 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue__v20 = 0;
    vlSelf->__Vdly__top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__counter = VL_RAND_RESET_I(4);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__colour_queue__v0 = 0;
    vlSelf->__Vdly__top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__fin_wire = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__colour_wire = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__xqueue__v10 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__xqueue__v10 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__yqueue__v10 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__colour_queue__v10 = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__colour_queue__v10 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__xqueue__v11 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__yqueue__v11 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__colour_queue__v11 = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__colour_queue__v11 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__xqueue__v12 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__yqueue__v12 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__colour_queue__v12 = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__colour_queue__v12 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__xqueue__v13 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__yqueue__v13 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__colour_queue__v13 = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__colour_queue__v13 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__xqueue__v14 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__yqueue__v14 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__colour_queue__v14 = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__colour_queue__v14 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__xqueue__v15 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__yqueue__v15 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__colour_queue__v15 = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__colour_queue__v15 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__xqueue__v16 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__yqueue__v16 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__colour_queue__v16 = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__colour_queue__v16 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__xqueue__v17 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__yqueue__v17 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__colour_queue__v17 = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__colour_queue__v17 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__xqueue__v18 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__yqueue__v18 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__xqueue__v19 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__colour_queue__v18 = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvdim0__top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__colour_queue__v19 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__colour_queue__v19 = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__colour_queue__v19 = 0;
    vlSelf->__Vdlyvdim0__top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__xqueue__v20 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__xqueue__v20 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__xqueue__v20 = 0;
    vlSelf->__Vdlyvdim0__top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__yqueue__v20 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__yqueue__v20 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__6__KET____DOT__queue_block__DOT__yqueue__v20 = 0;
    vlSelf->__Vdly__top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__counter = VL_RAND_RESET_I(4);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__colour_queue__v0 = 0;
    vlSelf->__Vdly__top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__fin_wire = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__colour_wire = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__xqueue__v10 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__xqueue__v10 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__yqueue__v10 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__colour_queue__v10 = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__colour_queue__v10 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__xqueue__v11 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__yqueue__v11 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__colour_queue__v11 = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__colour_queue__v11 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__xqueue__v12 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__yqueue__v12 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__colour_queue__v12 = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__colour_queue__v12 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__xqueue__v13 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__yqueue__v13 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__colour_queue__v13 = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__colour_queue__v13 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__xqueue__v14 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__yqueue__v14 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__colour_queue__v14 = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__colour_queue__v14 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__xqueue__v15 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__yqueue__v15 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__colour_queue__v15 = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__colour_queue__v15 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__xqueue__v16 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__yqueue__v16 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__colour_queue__v16 = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__colour_queue__v16 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__xqueue__v17 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__yqueue__v17 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__colour_queue__v17 = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__colour_queue__v17 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__xqueue__v18 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__yqueue__v18 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__xqueue__v19 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__colour_queue__v18 = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvdim0__top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__colour_queue__v19 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__colour_queue__v19 = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__colour_queue__v19 = 0;
    vlSelf->__Vdlyvdim0__top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__xqueue__v20 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__xqueue__v20 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__xqueue__v20 = 0;
    vlSelf->__Vdlyvdim0__top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__yqueue__v20 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__yqueue__v20 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__7__KET____DOT__queue_block__DOT__yqueue__v20 = 0;
    vlSelf->__Vdly__top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__counter = VL_RAND_RESET_I(4);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__colour_queue__v0 = 0;
    vlSelf->__Vdly__top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__fin_wire = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__colour_wire = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__xqueue__v10 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__xqueue__v10 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__yqueue__v10 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__colour_queue__v10 = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__colour_queue__v10 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__xqueue__v11 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__yqueue__v11 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__colour_queue__v11 = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__colour_queue__v11 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__xqueue__v12 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__yqueue__v12 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__colour_queue__v12 = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__colour_queue__v12 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__xqueue__v13 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__yqueue__v13 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__colour_queue__v13 = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__colour_queue__v13 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__xqueue__v14 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__yqueue__v14 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__colour_queue__v14 = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__colour_queue__v14 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__xqueue__v15 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__yqueue__v15 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__colour_queue__v15 = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__colour_queue__v15 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__xqueue__v16 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__yqueue__v16 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__colour_queue__v16 = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__colour_queue__v16 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__xqueue__v17 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__yqueue__v17 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__colour_queue__v17 = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__colour_queue__v17 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__xqueue__v18 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__yqueue__v18 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__xqueue__v19 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__colour_queue__v18 = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvdim0__top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__colour_queue__v19 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__colour_queue__v19 = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__colour_queue__v19 = 0;
    vlSelf->__Vdlyvdim0__top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__xqueue__v20 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__xqueue__v20 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__xqueue__v20 = 0;
    vlSelf->__Vdlyvdim0__top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__yqueue__v20 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__yqueue__v20 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__8__KET____DOT__queue_block__DOT__yqueue__v20 = 0;
    vlSelf->__Vdly__top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__counter = VL_RAND_RESET_I(4);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__colour_queue__v0 = 0;
    vlSelf->__Vdly__top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__fin_wire = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__colour_wire = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__xqueue__v10 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__xqueue__v10 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__yqueue__v10 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__colour_queue__v10 = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__colour_queue__v10 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__xqueue__v11 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__yqueue__v11 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__colour_queue__v11 = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__colour_queue__v11 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__xqueue__v12 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__yqueue__v12 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__colour_queue__v12 = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__colour_queue__v12 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__xqueue__v13 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__yqueue__v13 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__colour_queue__v13 = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__colour_queue__v13 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__xqueue__v14 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__yqueue__v14 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__colour_queue__v14 = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__colour_queue__v14 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__xqueue__v15 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__yqueue__v15 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__colour_queue__v15 = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__colour_queue__v15 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__xqueue__v16 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__yqueue__v16 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__colour_queue__v16 = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__colour_queue__v16 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__xqueue__v17 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__yqueue__v17 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__colour_queue__v17 = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__colour_queue__v17 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__xqueue__v18 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__yqueue__v18 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__xqueue__v19 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__colour_queue__v18 = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvdim0__top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__colour_queue__v19 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__colour_queue__v19 = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__colour_queue__v19 = 0;
    vlSelf->__Vdlyvdim0__top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__xqueue__v20 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__xqueue__v20 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__xqueue__v20 = 0;
    vlSelf->__Vdlyvdim0__top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__yqueue__v20 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__yqueue__v20 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__9__KET____DOT__queue_block__DOT__yqueue__v20 = 0;
    vlSelf->__Vdly__top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__counter = VL_RAND_RESET_I(4);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__colour_queue__v0 = 0;
    vlSelf->__Vdly__top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__fin_wire = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__colour_wire = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__xqueue__v10 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__xqueue__v10 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__yqueue__v10 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__colour_queue__v10 = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__colour_queue__v10 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__xqueue__v11 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__yqueue__v11 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__colour_queue__v11 = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__colour_queue__v11 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__xqueue__v12 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__yqueue__v12 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__colour_queue__v12 = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__colour_queue__v12 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__xqueue__v13 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__yqueue__v13 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__colour_queue__v13 = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__colour_queue__v13 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__xqueue__v14 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__yqueue__v14 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__colour_queue__v14 = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__colour_queue__v14 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__xqueue__v15 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__yqueue__v15 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__colour_queue__v15 = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__colour_queue__v15 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__xqueue__v16 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__yqueue__v16 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__colour_queue__v16 = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__colour_queue__v16 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__xqueue__v17 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__yqueue__v17 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__colour_queue__v17 = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__colour_queue__v17 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__xqueue__v18 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__yqueue__v18 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__xqueue__v19 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__colour_queue__v18 = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvdim0__top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__colour_queue__v19 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__colour_queue__v19 = VL_RAND_RESET_I(24);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__colour_queue__v19 = 0;
    vlSelf->__Vdlyvdim0__top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__xqueue__v20 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__xqueue__v20 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__xqueue__v20 = 0;
    vlSelf->__Vdlyvdim0__top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__yqueue__v20 = 0;
    vlSelf->__Vdlyvval__top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__yqueue__v20 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__top__DOT__genblk1__BRA__10__KET____DOT__queue_block__DOT__yqueue__v20 = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
