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
    vlSelf->top__DOT__en_wire = 0U;
    vlSelf->top__DOT__distributor__DOT__y0 = 0U;
    vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__state = 2U;
    vlSelf->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__engine__finished = 1U;
    vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__state = 2U;
    vlSelf->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__engine__finished = 1U;
    vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__state = 2U;
    vlSelf->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__engine__finished = 1U;
    vlSelf->top__DOT__distributor__DOT__x0 = 0U;
}

VL_ATTR_COLD void Vtop___024root___settle__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__0\n"); );
    // Init
    IData/*23:0*/ top__DOT__lut_rom__DOT____Vlvbound_h2aad094a__0;
    // Body
    vlSelf->top__DOT__iterations_bus[0U] = vlSelf->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__engine__iterations;
    vlSelf->top__DOT__iterations_bus[1U] = vlSelf->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__engine__iterations;
    vlSelf->top__DOT__iterations_bus[2U] = vlSelf->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__engine__iterations;
    vlSelf->top__DOT__ypixel_bus[0U] = vlSelf->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__engine__ypixel;
    vlSelf->top__DOT__xpixel_bus[0U] = vlSelf->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__engine__xpixel;
    vlSelf->top__DOT__ypixel_bus[1U] = vlSelf->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__engine__ypixel;
    vlSelf->top__DOT__xpixel_bus[1U] = vlSelf->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__engine__xpixel;
    vlSelf->top__DOT__ypixel_bus[2U] = vlSelf->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__engine__ypixel;
    vlSelf->top__DOT__xpixel_bus[2U] = vlSelf->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__engine__xpixel;
    vlSelf->full_queue[0U] = vlSelf->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__queue_block__full_queue;
    vlSelf->full_queue[1U] = vlSelf->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__queue_block__full_queue;
    vlSelf->full_queue[2U] = vlSelf->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__queue_block__full_queue;
    vlSelf->top__DOT__y[0U] = vlSelf->top__DOT__distributor__DOT__y0;
    vlSelf->top__DOT__fin_bus = (((IData)(vlSelf->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__engine__finished) 
                                  << 2U) | (((IData)(vlSelf->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__engine__finished) 
                                             << 1U) 
                                            | (IData)(vlSelf->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__engine__finished)));
    vlSelf->top__DOT__x[2U] = VL_MODDIV_III(32, ((IData)(2U) 
                                                 + vlSelf->top__DOT__distributor__DOT__x0), (IData)(0x280U));
    vlSelf->top__DOT__x[1U] = VL_MODDIV_III(32, ((IData)(1U) 
                                                 + vlSelf->top__DOT__distributor__DOT__x0), (IData)(0x280U));
    vlSelf->top__DOT__x[0U] = vlSelf->top__DOT__distributor__DOT__x0;
    vlSelf->top__DOT__y[2U] = VL_MODDIV_III(32, (vlSelf->top__DOT__distributor__DOT__y0 
                                                 + 
                                                 VL_DIV_III(32, 
                                                            ((IData)(2U) 
                                                             + vlSelf->top__DOT__distributor__DOT__x0), (IData)(0x280U))), (IData)(0x1e0U));
    vlSelf->top__DOT__y[1U] = VL_MODDIV_III(32, (vlSelf->top__DOT__distributor__DOT__y0 
                                                 + 
                                                 VL_DIV_III(32, 
                                                            ((IData)(1U) 
                                                             + vlSelf->top__DOT__distributor__DOT__x0), (IData)(0x280U))), (IData)(0x1e0U));
    vlSelf->top__DOT____Vcellinp__lut_rom__iterations[2U] 
        = vlSelf->top__DOT__iterations_bus[2U];
    vlSelf->top__DOT____Vcellinp__lut_rom__iterations[1U] 
        = vlSelf->top__DOT__iterations_bus[1U];
    vlSelf->top__DOT____Vcellinp__lut_rom__iterations[0U] 
        = vlSelf->top__DOT__iterations_bus[0U];
    vlSelf->top__DOT__fin_wire = ((7U == (IData)(vlSelf->top__DOT__fin_bus)) 
                                  | (IData)(vlSelf->reset));
    vlSelf->top__DOT__reset_engine = ((7U == (IData)(vlSelf->top__DOT__fin_bus)) 
                                      | (IData)(vlSelf->reset));
    top__DOT__lut_rom__DOT____Vlvbound_h2aad094a__0 
        = ((0x31U >= (0x3fU & vlSelf->top__DOT____Vcellinp__lut_rom__iterations
                      [0U])) ? vlSelf->top__DOT__lut_rom__DOT__lut_array
           [(0x3fU & vlSelf->top__DOT____Vcellinp__lut_rom__iterations
             [0U])] : 0U);
    vlSelf->top__DOT____Vcellout__lut_rom__rgb_val[0U] 
        = top__DOT__lut_rom__DOT____Vlvbound_h2aad094a__0;
    top__DOT__lut_rom__DOT____Vlvbound_h2aad094a__0 
        = ((0x31U >= (0x3fU & vlSelf->top__DOT____Vcellinp__lut_rom__iterations
                      [1U])) ? vlSelf->top__DOT__lut_rom__DOT__lut_array
           [(0x3fU & vlSelf->top__DOT____Vcellinp__lut_rom__iterations
             [1U])] : 0U);
    vlSelf->top__DOT____Vcellout__lut_rom__rgb_val[1U] 
        = top__DOT__lut_rom__DOT____Vlvbound_h2aad094a__0;
    top__DOT__lut_rom__DOT____Vlvbound_h2aad094a__0 
        = ((0x31U >= (0x3fU & vlSelf->top__DOT____Vcellinp__lut_rom__iterations
                      [2U])) ? vlSelf->top__DOT__lut_rom__DOT__lut_array
           [(0x3fU & vlSelf->top__DOT____Vcellinp__lut_rom__iterations
             [2U])] : 0U);
    vlSelf->top__DOT____Vcellout__lut_rom__rgb_val[2U] 
        = top__DOT__lut_rom__DOT____Vlvbound_h2aad094a__0;
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
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__0(vlSelf);
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
    vlSelf->b = VL_RAND_RESET_I(9);
    vlSelf->first = VL_RAND_RESET_I(1);
    vlSelf->last_x = VL_RAND_RESET_I(1);
    vlSelf->last_y = VL_RAND_RESET_I(1);
    vlSelf->valid = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->full_queue[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->top__DOT__colour_o_wire = VL_RAND_RESET_I(24);
    vlSelf->top__DOT__xpixel_wire = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ypixel_wire = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__colour_wire = VL_RAND_RESET_I(24);
    vlSelf->top__DOT__reset_engine = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__fin_wire = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__en_wire = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__fin_bus = VL_RAND_RESET_I(3);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->top__DOT__x[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->top__DOT__y[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->top__DOT__iterations_bus[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->top__DOT__xpixel_bus[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->top__DOT__ypixel_bus[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->top__DOT__en_bus[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->top__DOT__colour_bus[__Vi0] = VL_RAND_RESET_I(24);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->top__DOT____Vcellout__lut_rom__rgb_val[__Vi0] = VL_RAND_RESET_I(24);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->top__DOT____Vcellinp__lut_rom__iterations[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__engine__ypixel = VL_RAND_RESET_I(32);
    vlSelf->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__engine__xpixel = VL_RAND_RESET_I(32);
    vlSelf->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__engine__iterations = VL_RAND_RESET_I(32);
    vlSelf->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__engine__finished = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__queue_block__full_queue = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__engine__ypixel = VL_RAND_RESET_I(32);
    vlSelf->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__engine__xpixel = VL_RAND_RESET_I(32);
    vlSelf->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__engine__iterations = VL_RAND_RESET_I(32);
    vlSelf->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__engine__finished = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__queue_block__full_queue = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__engine__ypixel = VL_RAND_RESET_I(32);
    vlSelf->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__engine__xpixel = VL_RAND_RESET_I(32);
    vlSelf->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__engine__iterations = VL_RAND_RESET_I(32);
    vlSelf->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__engine__finished = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__queue_block__full_queue = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__distributor__DOT__x0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__distributor__DOT__y0 = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<50; ++__Vi0) {
        vlSelf->top__DOT__lut_rom__DOT__lut_array[__Vi0] = VL_RAND_RESET_I(24);
    }
    vlSelf->top__DOT__combinator_block__DOT__xcount = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__combinator_block__DOT__ycount = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__x0_buff = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__y0_buff = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__state = 0;
    vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__x = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__y = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__y_tmp = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__x2 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__y2 = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[__Vi0] = VL_RAND_RESET_I(24);
    }
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__counter = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_hc89f5955__0 = VL_RAND_RESET_I(24);
    vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_hc0c41b9e__0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_h131125b7__0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_h9942c0e0__0 = VL_RAND_RESET_I(24);
    vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_hf058b455__0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound_hc3849630__0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__x0_buff = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__y0_buff = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__state = 0;
    vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__x = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__y = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__y_tmp = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__x2 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__y2 = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[__Vi0] = VL_RAND_RESET_I(24);
    }
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__counter = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_hc89f5955__0 = VL_RAND_RESET_I(24);
    vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_hc0c41b9e__0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_h131125b7__0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_h9942c0e0__0 = VL_RAND_RESET_I(24);
    vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_hf058b455__0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound_hc3849630__0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__x0_buff = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__y0_buff = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__state = 0;
    vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__x = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__y = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__y_tmp = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__x2 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__y2 = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[__Vi0] = VL_RAND_RESET_I(24);
    }
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__counter = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_hc89f5955__0 = VL_RAND_RESET_I(24);
    vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_hc0c41b9e__0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_h131125b7__0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_h9942c0e0__0 = VL_RAND_RESET_I(24);
    vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_hf058b455__0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound_hc3849630__0 = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
