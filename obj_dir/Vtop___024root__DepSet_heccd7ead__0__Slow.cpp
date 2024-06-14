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
    vlSelf->top__DOT__distributor__DOT__y0 = 0U;
    vlSelf->top__DOT__distributor__DOT__x0 = 0U;
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
    vlSelf->iterations_max = VL_RAND_RESET_I(10);
    vlSelf->zoom = VL_RAND_RESET_I(10);
    vlSelf->x_offset = VL_RAND_RESET_I(10);
    vlSelf->y_offset = VL_RAND_RESET_I(10);
    vlSelf->r = VL_RAND_RESET_I(8);
    vlSelf->g = VL_RAND_RESET_I(8);
    vlSelf->b = VL_RAND_RESET_I(8);
    vlSelf->first = VL_RAND_RESET_I(1);
    vlSelf->last_x = VL_RAND_RESET_I(1);
    vlSelf->last_y = VL_RAND_RESET_I(1);
    vlSelf->valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__colour_o_wire = VL_RAND_RESET_I(24);
    vlSelf->top__DOT__xpixel_wire = VL_RAND_RESET_I(10);
    vlSelf->top__DOT__ypixel_wire = VL_RAND_RESET_I(10);
    for (int __Vi0=0; __Vi0<12; ++__Vi0) {
        vlSelf->top__DOT__colour_bus_o[__Vi0] = VL_RAND_RESET_I(24);
    }
    vlSelf->top__DOT__reset_engine = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__fin_bus = VL_RAND_RESET_I(12);
    for (int __Vi0=0; __Vi0<12; ++__Vi0) {
        vlSelf->top__DOT__x[__Vi0] = VL_RAND_RESET_I(10);
    }
    for (int __Vi0=0; __Vi0<12; ++__Vi0) {
        vlSelf->top__DOT__y[__Vi0] = VL_RAND_RESET_I(10);
    }
    for (int __Vi0=0; __Vi0<12; ++__Vi0) {
        vlSelf->top__DOT__iterations_bus[__Vi0] = VL_RAND_RESET_I(10);
    }
    for (int __Vi0=0; __Vi0<12; ++__Vi0) {
        vlSelf->top__DOT__xpixel_bus[__Vi0] = VL_RAND_RESET_I(10);
    }
    for (int __Vi0=0; __Vi0<12; ++__Vi0) {
        vlSelf->top__DOT__ypixel_bus[__Vi0] = VL_RAND_RESET_I(10);
    }
    vlSelf->top__DOT__en_bus = VL_RAND_RESET_I(12);
    for (int __Vi0=0; __Vi0<12; ++__Vi0) {
        vlSelf->top__DOT__colour_bus_i[__Vi0] = VL_RAND_RESET_I(24);
    }
    vlSelf->top__DOT__full_queue_bus = VL_RAND_RESET_I(12);
    vlSelf->top__DOT__match_bus = VL_RAND_RESET_I(12);
    vlSelf->top__DOT__j = 0;
    for (int __Vi0=0; __Vi0<12; ++__Vi0) {
        vlSelf->top__DOT____Vcellout__distributor__y[__Vi0] = VL_RAND_RESET_I(10);
    }
    for (int __Vi0=0; __Vi0<12; ++__Vi0) {
        vlSelf->top__DOT____Vcellout__distributor__x[__Vi0] = VL_RAND_RESET_I(10);
    }
    for (int __Vi0=0; __Vi0<12; ++__Vi0) {
        vlSelf->top__DOT____Vcellout__lut_rom__rgb_val[__Vi0] = VL_RAND_RESET_I(24);
    }
    for (int __Vi0=0; __Vi0<12; ++__Vi0) {
        vlSelf->top__DOT____Vcellinp__lut_rom__iterations[__Vi0] = VL_RAND_RESET_I(10);
    }
    vlSelf->top__DOT__distributor__DOT__x0 = VL_RAND_RESET_I(10);
    vlSelf->top__DOT__distributor__DOT__y0 = VL_RAND_RESET_I(10);
    for (int __Vi0=0; __Vi0<50; ++__Vi0) {
        vlSelf->top__DOT__lut_rom__DOT__lut_array[__Vi0] = VL_RAND_RESET_I(24);
    }
    vlSelf->top__DOT__combinator_block__DOT__xpixel = VL_RAND_RESET_I(10);
    vlSelf->top__DOT__combinator_block__DOT__ypixel = VL_RAND_RESET_I(10);
    for (int __Vi0=0; __Vi0<6; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
