// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop.h"
#include "Vtop__Syms.h"

//==========

VL_CTOR_IMP(Vtop) {
    Vtop__Syms* __restrict vlSymsp = __VlSymsp = new Vtop__Syms(this, name());
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
    VL_READMEM_N(true, 24, 50, 0, std::string("lut.hex")
                 , vlTOPp->top__DOT__lut_rom__DOT__lut_array
                 , 0, ~0ULL);
    VL_WRITEF("rom Loaded\n");
    vlTOPp->top__DOT__en_wire = 0U;
    vlTOPp->top__DOT__distributor__DOT__y0 = 0U;
    vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__state = 2U;
    vlTOPp->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__engine__finished = 1U;
    vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__state = 2U;
    vlTOPp->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__engine__finished = 1U;
    vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__state = 2U;
    vlTOPp->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__engine__finished = 1U;
    vlTOPp->top__DOT__distributor__DOT__x0 = 0U;
}

void Vtop::_settle__TOP__3(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_settle__TOP__3\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->r = (0xffU & vlTOPp->top__DOT__colour_o_wire);
    vlTOPp->g = (0xffU & (vlTOPp->top__DOT__colour_o_wire 
                          >> 8U));
    vlTOPp->b = (0xffU & (vlTOPp->top__DOT__colour_o_wire 
                          >> 0x10U));
    vlTOPp->top__DOT__iterations_bus[0U] = vlTOPp->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__engine__iterations;
    vlTOPp->top__DOT__iterations_bus[1U] = vlTOPp->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__engine__iterations;
    vlTOPp->top__DOT__iterations_bus[2U] = vlTOPp->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__engine__iterations;
    vlTOPp->top__DOT__ypixel_bus[0U] = vlTOPp->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__engine__ypixel;
    vlTOPp->top__DOT__xpixel_bus[0U] = vlTOPp->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__engine__xpixel;
    vlTOPp->top__DOT__ypixel_bus[1U] = vlTOPp->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__engine__ypixel;
    vlTOPp->top__DOT__xpixel_bus[1U] = vlTOPp->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__engine__xpixel;
    vlTOPp->top__DOT__ypixel_bus[2U] = vlTOPp->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__engine__ypixel;
    vlTOPp->top__DOT__xpixel_bus[2U] = vlTOPp->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__engine__xpixel;
    vlTOPp->full_queue[0U] = vlTOPp->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__queue_block__full_queue;
    vlTOPp->full_queue[1U] = vlTOPp->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__queue_block__full_queue;
    vlTOPp->full_queue[2U] = vlTOPp->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__queue_block__full_queue;
    vlTOPp->top__DOT__y[0U] = vlTOPp->top__DOT__distributor__DOT__y0;
    vlTOPp->top__DOT__fin_bus = ((6U & (IData)(vlTOPp->top__DOT__fin_bus)) 
                                 | (IData)(vlTOPp->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__engine__finished));
    vlTOPp->top__DOT__fin_bus = ((5U & (IData)(vlTOPp->top__DOT__fin_bus)) 
                                 | ((IData)(vlTOPp->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__engine__finished) 
                                    << 1U));
    vlTOPp->top__DOT__fin_bus = ((3U & (IData)(vlTOPp->top__DOT__fin_bus)) 
                                 | ((IData)(vlTOPp->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__engine__finished) 
                                    << 2U));
    vlTOPp->top__DOT__x[2U] = VL_MODDIV_III(32, ((IData)(2U) 
                                                 + vlTOPp->top__DOT__distributor__DOT__x0), (IData)(0x280U));
    vlTOPp->top__DOT__x[1U] = VL_MODDIV_III(32, ((IData)(1U) 
                                                 + vlTOPp->top__DOT__distributor__DOT__x0), (IData)(0x280U));
    vlTOPp->top__DOT__x[0U] = vlTOPp->top__DOT__distributor__DOT__x0;
    vlTOPp->top__DOT__y[2U] = VL_MODDIV_III(32, (vlTOPp->top__DOT__distributor__DOT__y0 
                                                 + 
                                                 VL_DIV_III(32, 
                                                            ((IData)(2U) 
                                                             + vlTOPp->top__DOT__distributor__DOT__x0), (IData)(0x280U))), (IData)(0x1e0U));
    vlTOPp->top__DOT__y[1U] = VL_MODDIV_III(32, (vlTOPp->top__DOT__distributor__DOT__y0 
                                                 + 
                                                 VL_DIV_III(32, 
                                                            ((IData)(1U) 
                                                             + vlTOPp->top__DOT__distributor__DOT__x0), (IData)(0x280U))), (IData)(0x1e0U));
    vlTOPp->top__DOT____Vcellinp__lut_rom__iterations[2U] 
        = vlTOPp->top__DOT__iterations_bus[2U];
    vlTOPp->top__DOT____Vcellinp__lut_rom__iterations[1U] 
        = vlTOPp->top__DOT__iterations_bus[1U];
    vlTOPp->top__DOT____Vcellinp__lut_rom__iterations[0U] 
        = vlTOPp->top__DOT__iterations_bus[0U];
    vlTOPp->top__DOT__fin_wire = ((7U == (IData)(vlTOPp->top__DOT__fin_bus)) 
                                  | (IData)(vlTOPp->reset));
    vlTOPp->top__DOT__reset_engine = ((7U == (IData)(vlTOPp->top__DOT__fin_bus)) 
                                      | (IData)(vlTOPp->reset));
    vlTOPp->top__DOT__lut_rom__DOT____Vlvbound1 = (
                                                   (0x31U 
                                                    >= 
                                                    (0x3fU 
                                                     & vlTOPp->top__DOT____Vcellinp__lut_rom__iterations
                                                     [0U]))
                                                    ? 
                                                   vlTOPp->top__DOT__lut_rom__DOT__lut_array
                                                   [
                                                   (0x3fU 
                                                    & vlTOPp->top__DOT____Vcellinp__lut_rom__iterations
                                                    [0U])]
                                                    : 0U);
    vlTOPp->top__DOT____Vcellout__lut_rom__rgb_val[0U] 
        = vlTOPp->top__DOT__lut_rom__DOT____Vlvbound1;
    vlTOPp->top__DOT__lut_rom__DOT____Vlvbound1 = (
                                                   (0x31U 
                                                    >= 
                                                    (0x3fU 
                                                     & vlTOPp->top__DOT____Vcellinp__lut_rom__iterations
                                                     [1U]))
                                                    ? 
                                                   vlTOPp->top__DOT__lut_rom__DOT__lut_array
                                                   [
                                                   (0x3fU 
                                                    & vlTOPp->top__DOT____Vcellinp__lut_rom__iterations
                                                    [1U])]
                                                    : 0U);
    vlTOPp->top__DOT____Vcellout__lut_rom__rgb_val[1U] 
        = vlTOPp->top__DOT__lut_rom__DOT____Vlvbound1;
    vlTOPp->top__DOT__lut_rom__DOT____Vlvbound1 = (
                                                   (0x31U 
                                                    >= 
                                                    (0x3fU 
                                                     & vlTOPp->top__DOT____Vcellinp__lut_rom__iterations
                                                     [2U]))
                                                    ? 
                                                   vlTOPp->top__DOT__lut_rom__DOT__lut_array
                                                   [
                                                   (0x3fU 
                                                    & vlTOPp->top__DOT____Vcellinp__lut_rom__iterations
                                                    [2U])]
                                                    : 0U);
    vlTOPp->top__DOT____Vcellout__lut_rom__rgb_val[2U] 
        = vlTOPp->top__DOT__lut_rom__DOT____Vlvbound1;
    vlTOPp->top__DOT__colour_bus[2U] = vlTOPp->top__DOT____Vcellout__lut_rom__rgb_val
        [2U];
    vlTOPp->top__DOT__colour_bus[1U] = vlTOPp->top__DOT____Vcellout__lut_rom__rgb_val
        [1U];
    vlTOPp->top__DOT__colour_bus[0U] = vlTOPp->top__DOT____Vcellout__lut_rom__rgb_val
        [0U];
}

void Vtop::_eval_initial(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval_initial\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
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
    vlTOPp->_settle__TOP__3(vlSymsp);
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
}

void Vtop::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    ready = VL_RAND_RESET_I(1);
    iterations_max = VL_RAND_RESET_I(32);
    zoom = VL_RAND_RESET_I(32);
    x_offset = VL_RAND_RESET_I(32);
    y_offset = VL_RAND_RESET_I(32);
    r = VL_RAND_RESET_I(8);
    g = VL_RAND_RESET_I(8);
    b = VL_RAND_RESET_I(8);
    first = VL_RAND_RESET_I(1);
    last_x = VL_RAND_RESET_I(1);
    last_y = VL_RAND_RESET_I(1);
    valid = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<3; ++__Vi0) {
            full_queue[__Vi0] = VL_RAND_RESET_I(1);
    }}
    top__DOT__colour_o_wire = VL_RAND_RESET_I(24);
    top__DOT__xpixel_wire = VL_RAND_RESET_I(32);
    top__DOT__ypixel_wire = VL_RAND_RESET_I(32);
    top__DOT__colour_wire = VL_RAND_RESET_I(24);
    top__DOT__reset_engine = VL_RAND_RESET_I(1);
    top__DOT__fin_wire = VL_RAND_RESET_I(1);
    top__DOT__en_wire = VL_RAND_RESET_I(1);
    top__DOT__fin_bus = VL_RAND_RESET_I(3);
    { int __Vi0=0; for (; __Vi0<3; ++__Vi0) {
            top__DOT__x[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<3; ++__Vi0) {
            top__DOT__y[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<3; ++__Vi0) {
            top__DOT__iterations_bus[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<3; ++__Vi0) {
            top__DOT__xpixel_bus[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<3; ++__Vi0) {
            top__DOT__ypixel_bus[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<3; ++__Vi0) {
            top__DOT__en_bus[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<3; ++__Vi0) {
            top__DOT__colour_bus[__Vi0] = VL_RAND_RESET_I(24);
    }}
    { int __Vi0=0; for (; __Vi0<3; ++__Vi0) {
            top__DOT____Vcellout__lut_rom__rgb_val[__Vi0] = VL_RAND_RESET_I(24);
    }}
    { int __Vi0=0; for (; __Vi0<3; ++__Vi0) {
            top__DOT____Vcellinp__lut_rom__iterations[__Vi0] = VL_RAND_RESET_I(32);
    }}
    top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__engine__ypixel = VL_RAND_RESET_I(32);
    top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__engine__xpixel = VL_RAND_RESET_I(32);
    top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__engine__iterations = VL_RAND_RESET_I(32);
    top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__engine__finished = VL_RAND_RESET_I(1);
    top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__queue_block__full_queue = VL_RAND_RESET_I(1);
    top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__engine__ypixel = VL_RAND_RESET_I(32);
    top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__engine__xpixel = VL_RAND_RESET_I(32);
    top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__engine__iterations = VL_RAND_RESET_I(32);
    top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__engine__finished = VL_RAND_RESET_I(1);
    top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__queue_block__full_queue = VL_RAND_RESET_I(1);
    top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__engine__ypixel = VL_RAND_RESET_I(32);
    top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__engine__xpixel = VL_RAND_RESET_I(32);
    top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__engine__iterations = VL_RAND_RESET_I(32);
    top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__engine__finished = VL_RAND_RESET_I(1);
    top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__queue_block__full_queue = VL_RAND_RESET_I(1);
    top__DOT__distributor__DOT__x0 = VL_RAND_RESET_I(32);
    top__DOT__distributor__DOT__y0 = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<50; ++__Vi0) {
            top__DOT__lut_rom__DOT__lut_array[__Vi0] = VL_RAND_RESET_I(24);
    }}
    top__DOT__lut_rom__DOT____Vlvbound1 = VL_RAND_RESET_I(24);
    top__DOT__combinator_block__DOT__xpixel = VL_RAND_RESET_I(32);
    top__DOT__combinator_block__DOT__ypixel = VL_RAND_RESET_I(32);
    top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__x0_buff = VL_RAND_RESET_I(32);
    top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__y0_buff = VL_RAND_RESET_I(32);
    top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__state = 0;
    top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__x = VL_RAND_RESET_I(32);
    top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__y = VL_RAND_RESET_I(32);
    top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__y_tmp = VL_RAND_RESET_Q(64);
    top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__x2 = VL_RAND_RESET_Q(64);
    top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__y2 = VL_RAND_RESET_Q(64);
    { int __Vi0=0; for (; __Vi0<5; ++__Vi0) {
            top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[__Vi0] = VL_RAND_RESET_I(24);
    }}
    { int __Vi0=0; for (; __Vi0<5; ++__Vi0) {
            top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<5; ++__Vi0) {
            top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[__Vi0] = VL_RAND_RESET_I(32);
    }}
    top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__counter = VL_RAND_RESET_I(3);
    top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__unnamedblk1__DOT__i = 0;
    top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__unnamedblk2__DOT__i = 0;
    top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound4 = VL_RAND_RESET_I(24);
    top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound5 = VL_RAND_RESET_I(32);
    top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound6 = VL_RAND_RESET_I(32);
    top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound7 = VL_RAND_RESET_I(24);
    top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound8 = VL_RAND_RESET_I(32);
    top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound9 = VL_RAND_RESET_I(32);
    top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__x0_buff = VL_RAND_RESET_I(32);
    top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__y0_buff = VL_RAND_RESET_I(32);
    top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__state = 0;
    top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__x = VL_RAND_RESET_I(32);
    top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__y = VL_RAND_RESET_I(32);
    top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__y_tmp = VL_RAND_RESET_Q(64);
    top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__x2 = VL_RAND_RESET_Q(64);
    top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__y2 = VL_RAND_RESET_Q(64);
    { int __Vi0=0; for (; __Vi0<5; ++__Vi0) {
            top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[__Vi0] = VL_RAND_RESET_I(24);
    }}
    { int __Vi0=0; for (; __Vi0<5; ++__Vi0) {
            top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<5; ++__Vi0) {
            top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[__Vi0] = VL_RAND_RESET_I(32);
    }}
    top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__counter = VL_RAND_RESET_I(3);
    top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__unnamedblk1__DOT__i = 0;
    top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__unnamedblk2__DOT__i = 0;
    top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound4 = VL_RAND_RESET_I(24);
    top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound5 = VL_RAND_RESET_I(32);
    top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound6 = VL_RAND_RESET_I(32);
    top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound7 = VL_RAND_RESET_I(24);
    top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound8 = VL_RAND_RESET_I(32);
    top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound9 = VL_RAND_RESET_I(32);
    top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__x0_buff = VL_RAND_RESET_I(32);
    top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__y0_buff = VL_RAND_RESET_I(32);
    top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__state = 0;
    top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__x = VL_RAND_RESET_I(32);
    top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__y = VL_RAND_RESET_I(32);
    top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__y_tmp = VL_RAND_RESET_Q(64);
    top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__x2 = VL_RAND_RESET_Q(64);
    top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__y2 = VL_RAND_RESET_Q(64);
    { int __Vi0=0; for (; __Vi0<5; ++__Vi0) {
            top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[__Vi0] = VL_RAND_RESET_I(24);
    }}
    { int __Vi0=0; for (; __Vi0<5; ++__Vi0) {
            top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<5; ++__Vi0) {
            top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[__Vi0] = VL_RAND_RESET_I(32);
    }}
    top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__counter = VL_RAND_RESET_I(3);
    top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__unnamedblk1__DOT__i = 0;
    top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__unnamedblk2__DOT__i = 0;
    top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound4 = VL_RAND_RESET_I(24);
    top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound5 = VL_RAND_RESET_I(32);
    top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound6 = VL_RAND_RESET_I(32);
    top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound7 = VL_RAND_RESET_I(24);
    top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound8 = VL_RAND_RESET_I(32);
    top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound9 = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
