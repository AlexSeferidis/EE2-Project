// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+1143,"reset", false,-1);
    tracep->declBit(c+1144,"ready", false,-1);
    tracep->declBus(c+1145,"iterations_max", false,-1, 9,0);
    tracep->declBus(c+1146,"zoom", false,-1, 9,0);
    tracep->declBus(c+1147,"x_offset", false,-1, 9,0);
    tracep->declBus(c+1148,"y_offset", false,-1, 9,0);
    tracep->declBus(c+1149,"r", false,-1, 7,0);
    tracep->declBus(c+1150,"g", false,-1, 7,0);
    tracep->declBus(c+1151,"b", false,-1, 7,0);
    tracep->declBit(c+1152,"first", false,-1);
    tracep->declBit(c+1153,"last_x", false,-1);
    tracep->declBit(c+1154,"last_y", false,-1);
    tracep->declBit(c+1155,"valid", false,-1);
    tracep->pushNamePrefix("top ");
    tracep->declBus(c+1176,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1177,"RBG_SIZE", false,-1, 31,0);
    tracep->declBus(c+1178,"NUM_ENGINES", false,-1, 31,0);
    tracep->declBus(c+1176,"ITERATIONS_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+1143,"reset", false,-1);
    tracep->declBit(c+1144,"ready", false,-1);
    tracep->declBus(c+1145,"iterations_max", false,-1, 9,0);
    tracep->declBus(c+1146,"zoom", false,-1, 9,0);
    tracep->declBus(c+1147,"x_offset", false,-1, 9,0);
    tracep->declBus(c+1148,"y_offset", false,-1, 9,0);
    tracep->declBus(c+1149,"r", false,-1, 7,0);
    tracep->declBus(c+1150,"g", false,-1, 7,0);
    tracep->declBus(c+1151,"b", false,-1, 7,0);
    tracep->declBit(c+1152,"first", false,-1);
    tracep->declBit(c+1153,"last_x", false,-1);
    tracep->declBit(c+1154,"last_y", false,-1);
    tracep->declBit(c+1155,"valid", false,-1);
    tracep->declBus(c+13,"colour_o_wire", false,-1, 23,0);
    tracep->declBus(c+14,"xpixel_wire", false,-1, 9,0);
    tracep->declBus(c+15,"ypixel_wire", false,-1, 9,0);
    for (int i = 0; i < 12; ++i) {
        tracep->declBus(c+512+i*1,"colour_bus_o", true,(i+0), 23,0);
    }
    tracep->declBit(c+1179,"reset_engine", false,-1);
    tracep->declBit(c+1156,"fin_wire", false,-1);
    tracep->declBit(c+717,"en_wire", false,-1);
    tracep->declBus(c+548,"fin_bus", false,-1, 11,0);
    for (int i = 0; i < 12; ++i) {
        tracep->declBus(c+16+i*1,"x", true,(i+0), 9,0);
    }
    for (int i = 0; i < 12; ++i) {
        tracep->declBus(c+28+i*1,"y", true,(i+0), 9,0);
    }
    for (int i = 0; i < 12; ++i) {
        tracep->declBus(c+40+i*1,"iterations_bus", true,(i+0), 9,0);
    }
    for (int i = 0; i < 12; ++i) {
        tracep->declBus(c+633+i*1,"xpixel_bus", true,(i+0), 9,0);
    }
    for (int i = 0; i < 12; ++i) {
        tracep->declBus(c+645+i*1,"ypixel_bus", true,(i+0), 9,0);
    }
    tracep->declBus(c+718,"en_bus", false,-1, 11,0);
    for (int i = 0; i < 12; ++i) {
        tracep->declBus(c+657+i*1,"colour_bus_i", true,(i+0), 23,0);
    }
    tracep->declBus(c+719,"full_queue_bus", false,-1, 11,0);
    tracep->declBus(c+720,"match_bus", false,-1, 11,0);
    tracep->declBus(c+721,"j", false,-1, 31,0);
    tracep->pushNamePrefix("combinator_block ");
    tracep->declBus(c+1176,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1177,"RBG_SIZE", false,-1, 31,0);
    tracep->declBus(c+1180,"SCREEN_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1181,"SCREEN_HEIGHT", false,-1, 31,0);
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+1143,"reset", false,-1);
    tracep->declBus(c+1157,"colour_i", false,-1, 23,0);
    tracep->declBit(c+717,"en", false,-1);
    tracep->declBit(c+1144,"ready", false,-1);
    tracep->declBit(c+1156,"fin_flag", false,-1);
    tracep->declBus(c+14,"next_xpixel", false,-1, 9,0);
    tracep->declBus(c+15,"next_ypixel", false,-1, 9,0);
    tracep->declBus(c+13,"colour_o", false,-1, 23,0);
    tracep->declBit(c+1152,"first", false,-1);
    tracep->declBit(c+1153,"last_x", false,-1);
    tracep->declBit(c+1154,"last_y", false,-1);
    tracep->declBit(c+1155,"valid", false,-1);
    tracep->declBus(c+52,"xpixel", false,-1, 9,0);
    tracep->declBus(c+53,"ypixel", false,-1, 9,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("distributor ");
    tracep->declBus(c+1176,"PIXEL_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1180,"SCREEN_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1181,"SCREEN_HEIGHT", false,-1, 31,0);
    tracep->declBus(c+1178,"NUM_ENGINES", false,-1, 31,0);
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+1143,"reset", false,-1);
    tracep->declBit(c+1156,"fin_flag", false,-1);
    for (int i = 0; i < 12; ++i) {
        tracep->declBus(c+54+i*1,"x", true,(i+0), 9,0);
    }
    for (int i = 0; i < 12; ++i) {
        tracep->declBus(c+66+i*1,"y", true,(i+0), 9,0);
    }
    tracep->declBus(c+78,"x0", false,-1, 9,0);
    tracep->declBus(c+79,"y0", false,-1, 9,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1182,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lut_rom ");
    tracep->declBus(c+1176,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1177,"RBG_SIZE", false,-1, 31,0);
    tracep->declBus(c+1183,"MAX_ITERATION", false,-1, 31,0);
    tracep->declBus(c+1178,"NUM_ENGINES", false,-1, 31,0);
    for (int i = 0; i < 12; ++i) {
        tracep->declBus(c+80+i*1,"iterations", true,(i+0), 9,0);
    }
    for (int i = 0; i < 12; ++i) {
        tracep->declBus(c+92+i*1,"rgb_val", true,(i+0), 23,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1182,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1182,"k", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1176,"PIXEL_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1184,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1185,"ENGINE_FRACT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1186,"ITERATIONS_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+1187,"reset", false,-1);
    tracep->declBus(c+1158,"iterations_max", false,-1, 5,0);
    tracep->declBus(c+104,"x0_", false,-1, 9,0);
    tracep->declBus(c+105,"y0_", false,-1, 9,0);
    tracep->declBus(c+1159,"zoom", false,-1, 2,0);
    tracep->declBus(c+1160,"x_offset", false,-1, 24,0);
    tracep->declBus(c+1161,"y_offset", false,-1, 24,0);
    tracep->declBit(c+722,"full_queue", false,-1);
    tracep->declBit(c+549,"en_pixel_map", false,-1);
    tracep->declBus(c+106,"iterations", false,-1, 5,0);
    tracep->declBus(c+107,"xpixel", false,-1, 9,0);
    tracep->declBus(c+108,"ypixel", false,-1, 9,0);
    tracep->declBus(c+1188,"ENGINE_INT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+109,"x", false,-1, 24,0);
    tracep->declBus(c+110,"y", false,-1, 24,0);
    tracep->declBit(c+1162,"finished", false,-1);
    tracep->declBit(c+550,"distributor_ready", false,-1);
    tracep->declBus(c+106,"curr_iterations", false,-1, 5,0);
    tracep->declBus(c+111,"zr", false,-1, 24,0);
    tracep->declBus(c+112,"zi", false,-1, 24,0);
    tracep->declBus(c+113,"zr_next", false,-1, 24,0);
    tracep->declBus(c+464,"zi_next", false,-1, 24,0);
    tracep->declBus(c+114,"zr2", false,-1, 24,0);
    tracep->declBus(c+115,"zi2", false,-1, 24,0);
    tracep->declBus(c+465,"zr2_next", false,-1, 24,0);
    tracep->declBus(c+466,"zi2_next", false,-1, 24,0);
    tracep->declBus(c+467,"zrzi", false,-1, 24,0);
    tracep->declBit(c+551,"en_stage_1", false,-1);
    tracep->declBit(c+552,"en_stage_2", false,-1);
    tracep->declBit(c+553,"init", false,-1);
    tracep->declBus(c+116,"distance", false,-1, 24,0);
    tracep->declBus(c+1189,"max_distance", false,-1, 24,0);
    tracep->pushNamePrefix("M5 ");
    tracep->declBus(c+1184,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1185,"ENGINE_FRACT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+111,"a", false,-1, 24,0);
    tracep->declBus(c+111,"b", false,-1, 24,0);
    tracep->declBit(c+553,"rst", false,-1);
    tracep->declBus(c+465,"result", false,-1, 24,0);
    tracep->declBus(c+1188,"ENGINE_INT_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+117,"product", false,-1, 49,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("M6 ");
    tracep->declBus(c+1184,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1185,"ENGINE_FRACT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+112,"a", false,-1, 24,0);
    tracep->declBus(c+112,"b", false,-1, 24,0);
    tracep->declBit(c+553,"rst", false,-1);
    tracep->declBus(c+466,"result", false,-1, 24,0);
    tracep->declBus(c+1188,"ENGINE_INT_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+119,"product", false,-1, 49,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("M7 ");
    tracep->declBus(c+1184,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1185,"ENGINE_FRACT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+111,"a", false,-1, 24,0);
    tracep->declBus(c+112,"b", false,-1, 24,0);
    tracep->declBit(c+553,"rst", false,-1);
    tracep->declBus(c+467,"result", false,-1, 24,0);
    tracep->declBus(c+1188,"ENGINE_INT_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+121,"product", false,-1, 49,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("R0 ");
    tracep->declBus(c+1186,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+553,"rst", false,-1);
    tracep->declBit(c+552,"en", false,-1);
    tracep->declBus(c+123,"in", false,-1, 5,0);
    tracep->declBus(c+106,"out", false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SM ");
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+1187,"rst", false,-1);
    tracep->declBit(c+1162,"finished", false,-1);
    tracep->declBit(c+722,"full_queue", false,-1);
    tracep->declBit(c+550,"distributor_ready", false,-1);
    tracep->declBit(c+553,"init", false,-1);
    tracep->declBit(c+549,"en_pixel_map", false,-1);
    tracep->declBit(c+551,"en_stage_1", false,-1);
    tracep->declBit(c+552,"en_stage_2", false,-1);
    tracep->declBus(c+1190,"INIT", false,-1, 31,0);
    tracep->declBus(c+1191,"CALC_STAGE_1", false,-1, 31,0);
    tracep->declBus(c+1192,"CALC_STAGE_2", false,-1, 31,0);
    tracep->declBus(c+1193,"ESCAPE", false,-1, 31,0);
    tracep->declBus(c+124,"state", false,-1, 1,0);
    tracep->declBus(c+554,"next", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("calc_stage_1 ");
    tracep->declBus(c+1184,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+553,"reset", false,-1);
    tracep->declBit(c+551,"en", false,-1);
    tracep->declBus(c+113,"zr_next", false,-1, 24,0);
    tracep->declBus(c+464,"zi_next", false,-1, 24,0);
    tracep->declBus(c+111,"zr", false,-1, 24,0);
    tracep->declBus(c+112,"zi", false,-1, 24,0);
    tracep->pushNamePrefix("R1 ");
    tracep->declBus(c+1184,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+553,"rst", false,-1);
    tracep->declBit(c+551,"en", false,-1);
    tracep->declBus(c+113,"in", false,-1, 24,0);
    tracep->declBus(c+111,"out", false,-1, 24,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("R2 ");
    tracep->declBus(c+1184,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+553,"rst", false,-1);
    tracep->declBit(c+551,"en", false,-1);
    tracep->declBus(c+464,"in", false,-1, 24,0);
    tracep->declBus(c+112,"out", false,-1, 24,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("calc_stage_2 ");
    tracep->declBus(c+1184,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+553,"reset", false,-1);
    tracep->declBit(c+552,"en", false,-1);
    tracep->declBus(c+465,"zr2_next", false,-1, 24,0);
    tracep->declBus(c+466,"zi2_next", false,-1, 24,0);
    tracep->declBus(c+114,"zr2", false,-1, 24,0);
    tracep->declBus(c+115,"zi2", false,-1, 24,0);
    tracep->pushNamePrefix("R3 ");
    tracep->declBus(c+1184,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+553,"rst", false,-1);
    tracep->declBit(c+552,"en", false,-1);
    tracep->declBus(c+465,"in", false,-1, 24,0);
    tracep->declBus(c+114,"out", false,-1, 24,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("R4 ");
    tracep->declBus(c+1184,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+553,"rst", false,-1);
    tracep->declBit(c+552,"en", false,-1);
    tracep->declBus(c+466,"in", false,-1, 24,0);
    tracep->declBus(c+115,"out", false,-1, 24,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("pixel_map ");
    tracep->declBus(c+1176,"PIXEL_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1184,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1185,"ENGINE_FRACT_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+1187,"reset", false,-1);
    tracep->declBit(c+549,"en", false,-1);
    tracep->declBit(c+550,"distributor_ready", false,-1);
    tracep->declBit(c+722,"full_queue", false,-1);
    tracep->declBus(c+104,"pixel_x_in", false,-1, 9,0);
    tracep->declBus(c+105,"pixel_y_in", false,-1, 9,0);
    tracep->declBus(c+1160,"x_offset", false,-1, 24,0);
    tracep->declBus(c+1161,"y_offset", false,-1, 24,0);
    tracep->declBus(c+109,"real_x", false,-1, 24,0);
    tracep->declBus(c+110,"imag_y", false,-1, 24,0);
    tracep->declBus(c+107,"pixel_x_out", false,-1, 9,0);
    tracep->declBus(c+108,"pixel_y_out", false,-1, 9,0);
    tracep->declBus(c+1194,"scale_factor", false,-1, 24,0);
    tracep->declBus(c+1163,"r_min", false,-1, 24,0);
    tracep->declBus(c+1164,"i_min", false,-1, 24,0);
    tracep->declBus(c+125,"r_gradient", false,-1, 24,0);
    tracep->declBus(c+126,"i_gradient", false,-1, 24,0);
    tracep->declBus(c+127,"pixel_x_fixed", false,-1, 24,0);
    tracep->declBus(c+128,"pixel_y_fixed", false,-1, 24,0);
    tracep->pushNamePrefix("M1 ");
    tracep->declBus(c+1184,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1185,"ENGINE_FRACT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1195,"a", false,-1, 24,0);
    tracep->declBus(c+127,"b", false,-1, 24,0);
    tracep->declBit(c+1187,"rst", false,-1);
    tracep->declBus(c+125,"result", false,-1, 24,0);
    tracep->declBus(c+1188,"ENGINE_INT_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+129,"product", false,-1, 49,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("M2 ");
    tracep->declBus(c+1184,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1185,"ENGINE_FRACT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1195,"a", false,-1, 24,0);
    tracep->declBus(c+128,"b", false,-1, 24,0);
    tracep->declBit(c+1187,"rst", false,-1);
    tracep->declBus(c+126,"result", false,-1, 24,0);
    tracep->declBus(c+1188,"ENGINE_INT_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+131,"product", false,-1, 49,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1176,"PIXEL_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1184,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1185,"ENGINE_FRACT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1186,"ITERATIONS_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+1187,"reset", false,-1);
    tracep->declBus(c+1158,"iterations_max", false,-1, 5,0);
    tracep->declBus(c+133,"x0_", false,-1, 9,0);
    tracep->declBus(c+134,"y0_", false,-1, 9,0);
    tracep->declBus(c+1159,"zoom", false,-1, 2,0);
    tracep->declBus(c+1160,"x_offset", false,-1, 24,0);
    tracep->declBus(c+1161,"y_offset", false,-1, 24,0);
    tracep->declBit(c+723,"full_queue", false,-1);
    tracep->declBit(c+555,"en_pixel_map", false,-1);
    tracep->declBus(c+135,"iterations", false,-1, 5,0);
    tracep->declBus(c+136,"xpixel", false,-1, 9,0);
    tracep->declBus(c+137,"ypixel", false,-1, 9,0);
    tracep->declBus(c+1188,"ENGINE_INT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+138,"x", false,-1, 24,0);
    tracep->declBus(c+139,"y", false,-1, 24,0);
    tracep->declBit(c+1165,"finished", false,-1);
    tracep->declBit(c+556,"distributor_ready", false,-1);
    tracep->declBus(c+135,"curr_iterations", false,-1, 5,0);
    tracep->declBus(c+140,"zr", false,-1, 24,0);
    tracep->declBus(c+141,"zi", false,-1, 24,0);
    tracep->declBus(c+142,"zr_next", false,-1, 24,0);
    tracep->declBus(c+468,"zi_next", false,-1, 24,0);
    tracep->declBus(c+143,"zr2", false,-1, 24,0);
    tracep->declBus(c+144,"zi2", false,-1, 24,0);
    tracep->declBus(c+469,"zr2_next", false,-1, 24,0);
    tracep->declBus(c+470,"zi2_next", false,-1, 24,0);
    tracep->declBus(c+471,"zrzi", false,-1, 24,0);
    tracep->declBit(c+557,"en_stage_1", false,-1);
    tracep->declBit(c+558,"en_stage_2", false,-1);
    tracep->declBit(c+559,"init", false,-1);
    tracep->declBus(c+145,"distance", false,-1, 24,0);
    tracep->declBus(c+1189,"max_distance", false,-1, 24,0);
    tracep->pushNamePrefix("M5 ");
    tracep->declBus(c+1184,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1185,"ENGINE_FRACT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+140,"a", false,-1, 24,0);
    tracep->declBus(c+140,"b", false,-1, 24,0);
    tracep->declBit(c+559,"rst", false,-1);
    tracep->declBus(c+469,"result", false,-1, 24,0);
    tracep->declBus(c+1188,"ENGINE_INT_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+146,"product", false,-1, 49,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("M6 ");
    tracep->declBus(c+1184,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1185,"ENGINE_FRACT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+141,"a", false,-1, 24,0);
    tracep->declBus(c+141,"b", false,-1, 24,0);
    tracep->declBit(c+559,"rst", false,-1);
    tracep->declBus(c+470,"result", false,-1, 24,0);
    tracep->declBus(c+1188,"ENGINE_INT_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+148,"product", false,-1, 49,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("M7 ");
    tracep->declBus(c+1184,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1185,"ENGINE_FRACT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+140,"a", false,-1, 24,0);
    tracep->declBus(c+141,"b", false,-1, 24,0);
    tracep->declBit(c+559,"rst", false,-1);
    tracep->declBus(c+471,"result", false,-1, 24,0);
    tracep->declBus(c+1188,"ENGINE_INT_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+150,"product", false,-1, 49,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("R0 ");
    tracep->declBus(c+1186,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+559,"rst", false,-1);
    tracep->declBit(c+558,"en", false,-1);
    tracep->declBus(c+152,"in", false,-1, 5,0);
    tracep->declBus(c+135,"out", false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SM ");
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+1187,"rst", false,-1);
    tracep->declBit(c+1165,"finished", false,-1);
    tracep->declBit(c+723,"full_queue", false,-1);
    tracep->declBit(c+556,"distributor_ready", false,-1);
    tracep->declBit(c+559,"init", false,-1);
    tracep->declBit(c+555,"en_pixel_map", false,-1);
    tracep->declBit(c+557,"en_stage_1", false,-1);
    tracep->declBit(c+558,"en_stage_2", false,-1);
    tracep->declBus(c+1190,"INIT", false,-1, 31,0);
    tracep->declBus(c+1191,"CALC_STAGE_1", false,-1, 31,0);
    tracep->declBus(c+1192,"CALC_STAGE_2", false,-1, 31,0);
    tracep->declBus(c+1193,"ESCAPE", false,-1, 31,0);
    tracep->declBus(c+153,"state", false,-1, 1,0);
    tracep->declBus(c+560,"next", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("calc_stage_1 ");
    tracep->declBus(c+1184,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+559,"reset", false,-1);
    tracep->declBit(c+557,"en", false,-1);
    tracep->declBus(c+142,"zr_next", false,-1, 24,0);
    tracep->declBus(c+468,"zi_next", false,-1, 24,0);
    tracep->declBus(c+140,"zr", false,-1, 24,0);
    tracep->declBus(c+141,"zi", false,-1, 24,0);
    tracep->pushNamePrefix("R1 ");
    tracep->declBus(c+1184,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+559,"rst", false,-1);
    tracep->declBit(c+557,"en", false,-1);
    tracep->declBus(c+142,"in", false,-1, 24,0);
    tracep->declBus(c+140,"out", false,-1, 24,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("R2 ");
    tracep->declBus(c+1184,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+559,"rst", false,-1);
    tracep->declBit(c+557,"en", false,-1);
    tracep->declBus(c+468,"in", false,-1, 24,0);
    tracep->declBus(c+141,"out", false,-1, 24,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("calc_stage_2 ");
    tracep->declBus(c+1184,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+559,"reset", false,-1);
    tracep->declBit(c+558,"en", false,-1);
    tracep->declBus(c+469,"zr2_next", false,-1, 24,0);
    tracep->declBus(c+470,"zi2_next", false,-1, 24,0);
    tracep->declBus(c+143,"zr2", false,-1, 24,0);
    tracep->declBus(c+144,"zi2", false,-1, 24,0);
    tracep->pushNamePrefix("R3 ");
    tracep->declBus(c+1184,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+559,"rst", false,-1);
    tracep->declBit(c+558,"en", false,-1);
    tracep->declBus(c+469,"in", false,-1, 24,0);
    tracep->declBus(c+143,"out", false,-1, 24,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("R4 ");
    tracep->declBus(c+1184,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+559,"rst", false,-1);
    tracep->declBit(c+558,"en", false,-1);
    tracep->declBus(c+470,"in", false,-1, 24,0);
    tracep->declBus(c+144,"out", false,-1, 24,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("pixel_map ");
    tracep->declBus(c+1176,"PIXEL_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1184,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1185,"ENGINE_FRACT_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+1187,"reset", false,-1);
    tracep->declBit(c+555,"en", false,-1);
    tracep->declBit(c+556,"distributor_ready", false,-1);
    tracep->declBit(c+723,"full_queue", false,-1);
    tracep->declBus(c+133,"pixel_x_in", false,-1, 9,0);
    tracep->declBus(c+134,"pixel_y_in", false,-1, 9,0);
    tracep->declBus(c+1160,"x_offset", false,-1, 24,0);
    tracep->declBus(c+1161,"y_offset", false,-1, 24,0);
    tracep->declBus(c+138,"real_x", false,-1, 24,0);
    tracep->declBus(c+139,"imag_y", false,-1, 24,0);
    tracep->declBus(c+136,"pixel_x_out", false,-1, 9,0);
    tracep->declBus(c+137,"pixel_y_out", false,-1, 9,0);
    tracep->declBus(c+1194,"scale_factor", false,-1, 24,0);
    tracep->declBus(c+1163,"r_min", false,-1, 24,0);
    tracep->declBus(c+1164,"i_min", false,-1, 24,0);
    tracep->declBus(c+154,"r_gradient", false,-1, 24,0);
    tracep->declBus(c+155,"i_gradient", false,-1, 24,0);
    tracep->declBus(c+156,"pixel_x_fixed", false,-1, 24,0);
    tracep->declBus(c+157,"pixel_y_fixed", false,-1, 24,0);
    tracep->pushNamePrefix("M1 ");
    tracep->declBus(c+1184,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1185,"ENGINE_FRACT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1195,"a", false,-1, 24,0);
    tracep->declBus(c+156,"b", false,-1, 24,0);
    tracep->declBit(c+1187,"rst", false,-1);
    tracep->declBus(c+154,"result", false,-1, 24,0);
    tracep->declBus(c+1188,"ENGINE_INT_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+158,"product", false,-1, 49,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("M2 ");
    tracep->declBus(c+1184,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1185,"ENGINE_FRACT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1195,"a", false,-1, 24,0);
    tracep->declBus(c+157,"b", false,-1, 24,0);
    tracep->declBit(c+1187,"rst", false,-1);
    tracep->declBus(c+155,"result", false,-1, 24,0);
    tracep->declBus(c+1188,"ENGINE_INT_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+160,"product", false,-1, 49,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1176,"PIXEL_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1184,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1185,"ENGINE_FRACT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1186,"ITERATIONS_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+1187,"reset", false,-1);
    tracep->declBus(c+1158,"iterations_max", false,-1, 5,0);
    tracep->declBus(c+162,"x0_", false,-1, 9,0);
    tracep->declBus(c+163,"y0_", false,-1, 9,0);
    tracep->declBus(c+1159,"zoom", false,-1, 2,0);
    tracep->declBus(c+1160,"x_offset", false,-1, 24,0);
    tracep->declBus(c+1161,"y_offset", false,-1, 24,0);
    tracep->declBit(c+724,"full_queue", false,-1);
    tracep->declBit(c+561,"en_pixel_map", false,-1);
    tracep->declBus(c+164,"iterations", false,-1, 5,0);
    tracep->declBus(c+165,"xpixel", false,-1, 9,0);
    tracep->declBus(c+166,"ypixel", false,-1, 9,0);
    tracep->declBus(c+1188,"ENGINE_INT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+167,"x", false,-1, 24,0);
    tracep->declBus(c+168,"y", false,-1, 24,0);
    tracep->declBit(c+1166,"finished", false,-1);
    tracep->declBit(c+562,"distributor_ready", false,-1);
    tracep->declBus(c+164,"curr_iterations", false,-1, 5,0);
    tracep->declBus(c+169,"zr", false,-1, 24,0);
    tracep->declBus(c+170,"zi", false,-1, 24,0);
    tracep->declBus(c+171,"zr_next", false,-1, 24,0);
    tracep->declBus(c+472,"zi_next", false,-1, 24,0);
    tracep->declBus(c+172,"zr2", false,-1, 24,0);
    tracep->declBus(c+173,"zi2", false,-1, 24,0);
    tracep->declBus(c+473,"zr2_next", false,-1, 24,0);
    tracep->declBus(c+474,"zi2_next", false,-1, 24,0);
    tracep->declBus(c+475,"zrzi", false,-1, 24,0);
    tracep->declBit(c+563,"en_stage_1", false,-1);
    tracep->declBit(c+564,"en_stage_2", false,-1);
    tracep->declBit(c+565,"init", false,-1);
    tracep->declBus(c+174,"distance", false,-1, 24,0);
    tracep->declBus(c+1189,"max_distance", false,-1, 24,0);
    tracep->pushNamePrefix("M5 ");
    tracep->declBus(c+1184,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1185,"ENGINE_FRACT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+169,"a", false,-1, 24,0);
    tracep->declBus(c+169,"b", false,-1, 24,0);
    tracep->declBit(c+565,"rst", false,-1);
    tracep->declBus(c+473,"result", false,-1, 24,0);
    tracep->declBus(c+1188,"ENGINE_INT_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+175,"product", false,-1, 49,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("M6 ");
    tracep->declBus(c+1184,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1185,"ENGINE_FRACT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+170,"a", false,-1, 24,0);
    tracep->declBus(c+170,"b", false,-1, 24,0);
    tracep->declBit(c+565,"rst", false,-1);
    tracep->declBus(c+474,"result", false,-1, 24,0);
    tracep->declBus(c+1188,"ENGINE_INT_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+177,"product", false,-1, 49,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("M7 ");
    tracep->declBus(c+1184,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1185,"ENGINE_FRACT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+169,"a", false,-1, 24,0);
    tracep->declBus(c+170,"b", false,-1, 24,0);
    tracep->declBit(c+565,"rst", false,-1);
    tracep->declBus(c+475,"result", false,-1, 24,0);
    tracep->declBus(c+1188,"ENGINE_INT_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+179,"product", false,-1, 49,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("R0 ");
    tracep->declBus(c+1186,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+565,"rst", false,-1);
    tracep->declBit(c+564,"en", false,-1);
    tracep->declBus(c+181,"in", false,-1, 5,0);
    tracep->declBus(c+164,"out", false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SM ");
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+1187,"rst", false,-1);
    tracep->declBit(c+1166,"finished", false,-1);
    tracep->declBit(c+724,"full_queue", false,-1);
    tracep->declBit(c+562,"distributor_ready", false,-1);
    tracep->declBit(c+565,"init", false,-1);
    tracep->declBit(c+561,"en_pixel_map", false,-1);
    tracep->declBit(c+563,"en_stage_1", false,-1);
    tracep->declBit(c+564,"en_stage_2", false,-1);
    tracep->declBus(c+1190,"INIT", false,-1, 31,0);
    tracep->declBus(c+1191,"CALC_STAGE_1", false,-1, 31,0);
    tracep->declBus(c+1192,"CALC_STAGE_2", false,-1, 31,0);
    tracep->declBus(c+1193,"ESCAPE", false,-1, 31,0);
    tracep->declBus(c+182,"state", false,-1, 1,0);
    tracep->declBus(c+566,"next", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("calc_stage_1 ");
    tracep->declBus(c+1184,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+565,"reset", false,-1);
    tracep->declBit(c+563,"en", false,-1);
    tracep->declBus(c+171,"zr_next", false,-1, 24,0);
    tracep->declBus(c+472,"zi_next", false,-1, 24,0);
    tracep->declBus(c+169,"zr", false,-1, 24,0);
    tracep->declBus(c+170,"zi", false,-1, 24,0);
    tracep->pushNamePrefix("R1 ");
    tracep->declBus(c+1184,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+565,"rst", false,-1);
    tracep->declBit(c+563,"en", false,-1);
    tracep->declBus(c+171,"in", false,-1, 24,0);
    tracep->declBus(c+169,"out", false,-1, 24,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("R2 ");
    tracep->declBus(c+1184,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+565,"rst", false,-1);
    tracep->declBit(c+563,"en", false,-1);
    tracep->declBus(c+472,"in", false,-1, 24,0);
    tracep->declBus(c+170,"out", false,-1, 24,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("calc_stage_2 ");
    tracep->declBus(c+1184,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+565,"reset", false,-1);
    tracep->declBit(c+564,"en", false,-1);
    tracep->declBus(c+473,"zr2_next", false,-1, 24,0);
    tracep->declBus(c+474,"zi2_next", false,-1, 24,0);
    tracep->declBus(c+172,"zr2", false,-1, 24,0);
    tracep->declBus(c+173,"zi2", false,-1, 24,0);
    tracep->pushNamePrefix("R3 ");
    tracep->declBus(c+1184,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+565,"rst", false,-1);
    tracep->declBit(c+564,"en", false,-1);
    tracep->declBus(c+473,"in", false,-1, 24,0);
    tracep->declBus(c+172,"out", false,-1, 24,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("R4 ");
    tracep->declBus(c+1184,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+565,"rst", false,-1);
    tracep->declBit(c+564,"en", false,-1);
    tracep->declBus(c+474,"in", false,-1, 24,0);
    tracep->declBus(c+173,"out", false,-1, 24,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("pixel_map ");
    tracep->declBus(c+1176,"PIXEL_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1184,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1185,"ENGINE_FRACT_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+1187,"reset", false,-1);
    tracep->declBit(c+561,"en", false,-1);
    tracep->declBit(c+562,"distributor_ready", false,-1);
    tracep->declBit(c+724,"full_queue", false,-1);
    tracep->declBus(c+162,"pixel_x_in", false,-1, 9,0);
    tracep->declBus(c+163,"pixel_y_in", false,-1, 9,0);
    tracep->declBus(c+1160,"x_offset", false,-1, 24,0);
    tracep->declBus(c+1161,"y_offset", false,-1, 24,0);
    tracep->declBus(c+167,"real_x", false,-1, 24,0);
    tracep->declBus(c+168,"imag_y", false,-1, 24,0);
    tracep->declBus(c+165,"pixel_x_out", false,-1, 9,0);
    tracep->declBus(c+166,"pixel_y_out", false,-1, 9,0);
    tracep->declBus(c+1194,"scale_factor", false,-1, 24,0);
    tracep->declBus(c+1163,"r_min", false,-1, 24,0);
    tracep->declBus(c+1164,"i_min", false,-1, 24,0);
    tracep->declBus(c+183,"r_gradient", false,-1, 24,0);
    tracep->declBus(c+184,"i_gradient", false,-1, 24,0);
    tracep->declBus(c+185,"pixel_x_fixed", false,-1, 24,0);
    tracep->declBus(c+186,"pixel_y_fixed", false,-1, 24,0);
    tracep->pushNamePrefix("M1 ");
    tracep->declBus(c+1184,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1185,"ENGINE_FRACT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1195,"a", false,-1, 24,0);
    tracep->declBus(c+185,"b", false,-1, 24,0);
    tracep->declBit(c+1187,"rst", false,-1);
    tracep->declBus(c+183,"result", false,-1, 24,0);
    tracep->declBus(c+1188,"ENGINE_INT_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+187,"product", false,-1, 49,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("M2 ");
    tracep->declBus(c+1184,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1185,"ENGINE_FRACT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1195,"a", false,-1, 24,0);
    tracep->declBus(c+186,"b", false,-1, 24,0);
    tracep->declBit(c+1187,"rst", false,-1);
    tracep->declBus(c+184,"result", false,-1, 24,0);
    tracep->declBus(c+1188,"ENGINE_INT_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+189,"product", false,-1, 49,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1176,"PIXEL_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1184,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1185,"ENGINE_FRACT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1186,"ITERATIONS_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+1187,"reset", false,-1);
    tracep->declBus(c+1158,"iterations_max", false,-1, 5,0);
    tracep->declBus(c+191,"x0_", false,-1, 9,0);
    tracep->declBus(c+192,"y0_", false,-1, 9,0);
    tracep->declBus(c+1159,"zoom", false,-1, 2,0);
    tracep->declBus(c+1160,"x_offset", false,-1, 24,0);
    tracep->declBus(c+1161,"y_offset", false,-1, 24,0);
    tracep->declBit(c+725,"full_queue", false,-1);
    tracep->declBit(c+567,"en_pixel_map", false,-1);
    tracep->declBus(c+193,"iterations", false,-1, 5,0);
    tracep->declBus(c+194,"xpixel", false,-1, 9,0);
    tracep->declBus(c+195,"ypixel", false,-1, 9,0);
    tracep->declBus(c+1188,"ENGINE_INT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+196,"x", false,-1, 24,0);
    tracep->declBus(c+197,"y", false,-1, 24,0);
    tracep->declBit(c+1167,"finished", false,-1);
    tracep->declBit(c+568,"distributor_ready", false,-1);
    tracep->declBus(c+193,"curr_iterations", false,-1, 5,0);
    tracep->declBus(c+198,"zr", false,-1, 24,0);
    tracep->declBus(c+199,"zi", false,-1, 24,0);
    tracep->declBus(c+200,"zr_next", false,-1, 24,0);
    tracep->declBus(c+476,"zi_next", false,-1, 24,0);
    tracep->declBus(c+201,"zr2", false,-1, 24,0);
    tracep->declBus(c+202,"zi2", false,-1, 24,0);
    tracep->declBus(c+477,"zr2_next", false,-1, 24,0);
    tracep->declBus(c+478,"zi2_next", false,-1, 24,0);
    tracep->declBus(c+479,"zrzi", false,-1, 24,0);
    tracep->declBit(c+569,"en_stage_1", false,-1);
    tracep->declBit(c+570,"en_stage_2", false,-1);
    tracep->declBit(c+571,"init", false,-1);
    tracep->declBus(c+203,"distance", false,-1, 24,0);
    tracep->declBus(c+1189,"max_distance", false,-1, 24,0);
    tracep->pushNamePrefix("M5 ");
    tracep->declBus(c+1184,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1185,"ENGINE_FRACT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+198,"a", false,-1, 24,0);
    tracep->declBus(c+198,"b", false,-1, 24,0);
    tracep->declBit(c+571,"rst", false,-1);
    tracep->declBus(c+477,"result", false,-1, 24,0);
    tracep->declBus(c+1188,"ENGINE_INT_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+204,"product", false,-1, 49,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("M6 ");
    tracep->declBus(c+1184,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1185,"ENGINE_FRACT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+199,"a", false,-1, 24,0);
    tracep->declBus(c+199,"b", false,-1, 24,0);
    tracep->declBit(c+571,"rst", false,-1);
    tracep->declBus(c+478,"result", false,-1, 24,0);
    tracep->declBus(c+1188,"ENGINE_INT_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+206,"product", false,-1, 49,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("M7 ");
    tracep->declBus(c+1184,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1185,"ENGINE_FRACT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+198,"a", false,-1, 24,0);
    tracep->declBus(c+199,"b", false,-1, 24,0);
    tracep->declBit(c+571,"rst", false,-1);
    tracep->declBus(c+479,"result", false,-1, 24,0);
    tracep->declBus(c+1188,"ENGINE_INT_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+208,"product", false,-1, 49,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("R0 ");
    tracep->declBus(c+1186,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+571,"rst", false,-1);
    tracep->declBit(c+570,"en", false,-1);
    tracep->declBus(c+210,"in", false,-1, 5,0);
    tracep->declBus(c+193,"out", false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SM ");
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+1187,"rst", false,-1);
    tracep->declBit(c+1167,"finished", false,-1);
    tracep->declBit(c+725,"full_queue", false,-1);
    tracep->declBit(c+568,"distributor_ready", false,-1);
    tracep->declBit(c+571,"init", false,-1);
    tracep->declBit(c+567,"en_pixel_map", false,-1);
    tracep->declBit(c+569,"en_stage_1", false,-1);
    tracep->declBit(c+570,"en_stage_2", false,-1);
    tracep->declBus(c+1190,"INIT", false,-1, 31,0);
    tracep->declBus(c+1191,"CALC_STAGE_1", false,-1, 31,0);
    tracep->declBus(c+1192,"CALC_STAGE_2", false,-1, 31,0);
    tracep->declBus(c+1193,"ESCAPE", false,-1, 31,0);
    tracep->declBus(c+211,"state", false,-1, 1,0);
    tracep->declBus(c+572,"next", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("calc_stage_1 ");
    tracep->declBus(c+1184,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+571,"reset", false,-1);
    tracep->declBit(c+569,"en", false,-1);
    tracep->declBus(c+200,"zr_next", false,-1, 24,0);
    tracep->declBus(c+476,"zi_next", false,-1, 24,0);
    tracep->declBus(c+198,"zr", false,-1, 24,0);
    tracep->declBus(c+199,"zi", false,-1, 24,0);
    tracep->pushNamePrefix("R1 ");
    tracep->declBus(c+1184,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+571,"rst", false,-1);
    tracep->declBit(c+569,"en", false,-1);
    tracep->declBus(c+200,"in", false,-1, 24,0);
    tracep->declBus(c+198,"out", false,-1, 24,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("R2 ");
    tracep->declBus(c+1184,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+571,"rst", false,-1);
    tracep->declBit(c+569,"en", false,-1);
    tracep->declBus(c+476,"in", false,-1, 24,0);
    tracep->declBus(c+199,"out", false,-1, 24,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("calc_stage_2 ");
    tracep->declBus(c+1184,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+571,"reset", false,-1);
    tracep->declBit(c+570,"en", false,-1);
    tracep->declBus(c+477,"zr2_next", false,-1, 24,0);
    tracep->declBus(c+478,"zi2_next", false,-1, 24,0);
    tracep->declBus(c+201,"zr2", false,-1, 24,0);
    tracep->declBus(c+202,"zi2", false,-1, 24,0);
    tracep->pushNamePrefix("R3 ");
    tracep->declBus(c+1184,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+571,"rst", false,-1);
    tracep->declBit(c+570,"en", false,-1);
    tracep->declBus(c+477,"in", false,-1, 24,0);
    tracep->declBus(c+201,"out", false,-1, 24,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("R4 ");
    tracep->declBus(c+1184,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+571,"rst", false,-1);
    tracep->declBit(c+570,"en", false,-1);
    tracep->declBus(c+478,"in", false,-1, 24,0);
    tracep->declBus(c+202,"out", false,-1, 24,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("pixel_map ");
    tracep->declBus(c+1176,"PIXEL_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1184,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1185,"ENGINE_FRACT_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+1187,"reset", false,-1);
    tracep->declBit(c+567,"en", false,-1);
    tracep->declBit(c+568,"distributor_ready", false,-1);
    tracep->declBit(c+725,"full_queue", false,-1);
    tracep->declBus(c+191,"pixel_x_in", false,-1, 9,0);
    tracep->declBus(c+192,"pixel_y_in", false,-1, 9,0);
    tracep->declBus(c+1160,"x_offset", false,-1, 24,0);
    tracep->declBus(c+1161,"y_offset", false,-1, 24,0);
    tracep->declBus(c+196,"real_x", false,-1, 24,0);
    tracep->declBus(c+197,"imag_y", false,-1, 24,0);
    tracep->declBus(c+194,"pixel_x_out", false,-1, 9,0);
    tracep->declBus(c+195,"pixel_y_out", false,-1, 9,0);
    tracep->declBus(c+1194,"scale_factor", false,-1, 24,0);
    tracep->declBus(c+1163,"r_min", false,-1, 24,0);
    tracep->declBus(c+1164,"i_min", false,-1, 24,0);
    tracep->declBus(c+212,"r_gradient", false,-1, 24,0);
    tracep->declBus(c+213,"i_gradient", false,-1, 24,0);
    tracep->declBus(c+214,"pixel_x_fixed", false,-1, 24,0);
    tracep->declBus(c+215,"pixel_y_fixed", false,-1, 24,0);
    tracep->pushNamePrefix("M1 ");
    tracep->declBus(c+1184,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1185,"ENGINE_FRACT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1195,"a", false,-1, 24,0);
    tracep->declBus(c+214,"b", false,-1, 24,0);
    tracep->declBit(c+1187,"rst", false,-1);
    tracep->declBus(c+212,"result", false,-1, 24,0);
    tracep->declBus(c+1188,"ENGINE_INT_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+216,"product", false,-1, 49,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("M2 ");
    tracep->declBus(c+1184,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1185,"ENGINE_FRACT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1195,"a", false,-1, 24,0);
    tracep->declBus(c+215,"b", false,-1, 24,0);
    tracep->declBit(c+1187,"rst", false,-1);
    tracep->declBus(c+213,"result", false,-1, 24,0);
    tracep->declBus(c+1188,"ENGINE_INT_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+218,"product", false,-1, 49,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1176,"PIXEL_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1184,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1185,"ENGINE_FRACT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1186,"ITERATIONS_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+1187,"reset", false,-1);
    tracep->declBus(c+1158,"iterations_max", false,-1, 5,0);
    tracep->declBus(c+220,"x0_", false,-1, 9,0);
    tracep->declBus(c+221,"y0_", false,-1, 9,0);
    tracep->declBus(c+1159,"zoom", false,-1, 2,0);
    tracep->declBus(c+1160,"x_offset", false,-1, 24,0);
    tracep->declBus(c+1161,"y_offset", false,-1, 24,0);
    tracep->declBit(c+726,"full_queue", false,-1);
    tracep->declBit(c+573,"en_pixel_map", false,-1);
    tracep->declBus(c+222,"iterations", false,-1, 5,0);
    tracep->declBus(c+223,"xpixel", false,-1, 9,0);
    tracep->declBus(c+224,"ypixel", false,-1, 9,0);
    tracep->declBus(c+1188,"ENGINE_INT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+225,"x", false,-1, 24,0);
    tracep->declBus(c+226,"y", false,-1, 24,0);
    tracep->declBit(c+1168,"finished", false,-1);
    tracep->declBit(c+574,"distributor_ready", false,-1);
    tracep->declBus(c+222,"curr_iterations", false,-1, 5,0);
    tracep->declBus(c+227,"zr", false,-1, 24,0);
    tracep->declBus(c+228,"zi", false,-1, 24,0);
    tracep->declBus(c+229,"zr_next", false,-1, 24,0);
    tracep->declBus(c+480,"zi_next", false,-1, 24,0);
    tracep->declBus(c+230,"zr2", false,-1, 24,0);
    tracep->declBus(c+231,"zi2", false,-1, 24,0);
    tracep->declBus(c+481,"zr2_next", false,-1, 24,0);
    tracep->declBus(c+482,"zi2_next", false,-1, 24,0);
    tracep->declBus(c+483,"zrzi", false,-1, 24,0);
    tracep->declBit(c+575,"en_stage_1", false,-1);
    tracep->declBit(c+576,"en_stage_2", false,-1);
    tracep->declBit(c+577,"init", false,-1);
    tracep->declBus(c+232,"distance", false,-1, 24,0);
    tracep->declBus(c+1189,"max_distance", false,-1, 24,0);
    tracep->pushNamePrefix("M5 ");
    tracep->declBus(c+1184,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1185,"ENGINE_FRACT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+227,"a", false,-1, 24,0);
    tracep->declBus(c+227,"b", false,-1, 24,0);
    tracep->declBit(c+577,"rst", false,-1);
    tracep->declBus(c+481,"result", false,-1, 24,0);
    tracep->declBus(c+1188,"ENGINE_INT_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+233,"product", false,-1, 49,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("M6 ");
    tracep->declBus(c+1184,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1185,"ENGINE_FRACT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+228,"a", false,-1, 24,0);
    tracep->declBus(c+228,"b", false,-1, 24,0);
    tracep->declBit(c+577,"rst", false,-1);
    tracep->declBus(c+482,"result", false,-1, 24,0);
    tracep->declBus(c+1188,"ENGINE_INT_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+235,"product", false,-1, 49,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("M7 ");
    tracep->declBus(c+1184,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1185,"ENGINE_FRACT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+227,"a", false,-1, 24,0);
    tracep->declBus(c+228,"b", false,-1, 24,0);
    tracep->declBit(c+577,"rst", false,-1);
    tracep->declBus(c+483,"result", false,-1, 24,0);
    tracep->declBus(c+1188,"ENGINE_INT_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+237,"product", false,-1, 49,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("R0 ");
    tracep->declBus(c+1186,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+577,"rst", false,-1);
    tracep->declBit(c+576,"en", false,-1);
    tracep->declBus(c+239,"in", false,-1, 5,0);
    tracep->declBus(c+222,"out", false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SM ");
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+1187,"rst", false,-1);
    tracep->declBit(c+1168,"finished", false,-1);
    tracep->declBit(c+726,"full_queue", false,-1);
    tracep->declBit(c+574,"distributor_ready", false,-1);
    tracep->declBit(c+577,"init", false,-1);
    tracep->declBit(c+573,"en_pixel_map", false,-1);
    tracep->declBit(c+575,"en_stage_1", false,-1);
    tracep->declBit(c+576,"en_stage_2", false,-1);
    tracep->declBus(c+1190,"INIT", false,-1, 31,0);
    tracep->declBus(c+1191,"CALC_STAGE_1", false,-1, 31,0);
    tracep->declBus(c+1192,"CALC_STAGE_2", false,-1, 31,0);
    tracep->declBus(c+1193,"ESCAPE", false,-1, 31,0);
    tracep->declBus(c+240,"state", false,-1, 1,0);
    tracep->declBus(c+578,"next", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("calc_stage_1 ");
    tracep->declBus(c+1184,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+577,"reset", false,-1);
    tracep->declBit(c+575,"en", false,-1);
    tracep->declBus(c+229,"zr_next", false,-1, 24,0);
    tracep->declBus(c+480,"zi_next", false,-1, 24,0);
    tracep->declBus(c+227,"zr", false,-1, 24,0);
    tracep->declBus(c+228,"zi", false,-1, 24,0);
    tracep->pushNamePrefix("R1 ");
    tracep->declBus(c+1184,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+577,"rst", false,-1);
    tracep->declBit(c+575,"en", false,-1);
    tracep->declBus(c+229,"in", false,-1, 24,0);
    tracep->declBus(c+227,"out", false,-1, 24,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("R2 ");
    tracep->declBus(c+1184,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+577,"rst", false,-1);
    tracep->declBit(c+575,"en", false,-1);
    tracep->declBus(c+480,"in", false,-1, 24,0);
    tracep->declBus(c+228,"out", false,-1, 24,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("calc_stage_2 ");
    tracep->declBus(c+1184,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+577,"reset", false,-1);
    tracep->declBit(c+576,"en", false,-1);
    tracep->declBus(c+481,"zr2_next", false,-1, 24,0);
    tracep->declBus(c+482,"zi2_next", false,-1, 24,0);
    tracep->declBus(c+230,"zr2", false,-1, 24,0);
    tracep->declBus(c+231,"zi2", false,-1, 24,0);
    tracep->pushNamePrefix("R3 ");
    tracep->declBus(c+1184,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+577,"rst", false,-1);
    tracep->declBit(c+576,"en", false,-1);
    tracep->declBus(c+481,"in", false,-1, 24,0);
    tracep->declBus(c+230,"out", false,-1, 24,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("R4 ");
    tracep->declBus(c+1184,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+577,"rst", false,-1);
    tracep->declBit(c+576,"en", false,-1);
    tracep->declBus(c+482,"in", false,-1, 24,0);
    tracep->declBus(c+231,"out", false,-1, 24,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("pixel_map ");
    tracep->declBus(c+1176,"PIXEL_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1184,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1185,"ENGINE_FRACT_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+1187,"reset", false,-1);
    tracep->declBit(c+573,"en", false,-1);
    tracep->declBit(c+574,"distributor_ready", false,-1);
    tracep->declBit(c+726,"full_queue", false,-1);
    tracep->declBus(c+220,"pixel_x_in", false,-1, 9,0);
    tracep->declBus(c+221,"pixel_y_in", false,-1, 9,0);
    tracep->declBus(c+1160,"x_offset", false,-1, 24,0);
    tracep->declBus(c+1161,"y_offset", false,-1, 24,0);
    tracep->declBus(c+225,"real_x", false,-1, 24,0);
    tracep->declBus(c+226,"imag_y", false,-1, 24,0);
    tracep->declBus(c+223,"pixel_x_out", false,-1, 9,0);
    tracep->declBus(c+224,"pixel_y_out", false,-1, 9,0);
    tracep->declBus(c+1194,"scale_factor", false,-1, 24,0);
    tracep->declBus(c+1163,"r_min", false,-1, 24,0);
    tracep->declBus(c+1164,"i_min", false,-1, 24,0);
    tracep->declBus(c+241,"r_gradient", false,-1, 24,0);
    tracep->declBus(c+242,"i_gradient", false,-1, 24,0);
    tracep->declBus(c+243,"pixel_x_fixed", false,-1, 24,0);
    tracep->declBus(c+244,"pixel_y_fixed", false,-1, 24,0);
    tracep->pushNamePrefix("M1 ");
    tracep->declBus(c+1184,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1185,"ENGINE_FRACT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1195,"a", false,-1, 24,0);
    tracep->declBus(c+243,"b", false,-1, 24,0);
    tracep->declBit(c+1187,"rst", false,-1);
    tracep->declBus(c+241,"result", false,-1, 24,0);
    tracep->declBus(c+1188,"ENGINE_INT_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+245,"product", false,-1, 49,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("M2 ");
    tracep->declBus(c+1184,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1185,"ENGINE_FRACT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1195,"a", false,-1, 24,0);
    tracep->declBus(c+244,"b", false,-1, 24,0);
    tracep->declBit(c+1187,"rst", false,-1);
    tracep->declBus(c+242,"result", false,-1, 24,0);
    tracep->declBus(c+1188,"ENGINE_INT_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+247,"product", false,-1, 49,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1176,"PIXEL_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1184,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1185,"ENGINE_FRACT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1186,"ITERATIONS_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+1187,"reset", false,-1);
    tracep->declBus(c+1158,"iterations_max", false,-1, 5,0);
    tracep->declBus(c+249,"x0_", false,-1, 9,0);
    tracep->declBus(c+250,"y0_", false,-1, 9,0);
    tracep->declBus(c+1159,"zoom", false,-1, 2,0);
    tracep->declBus(c+1160,"x_offset", false,-1, 24,0);
    tracep->declBus(c+1161,"y_offset", false,-1, 24,0);
    tracep->declBit(c+727,"full_queue", false,-1);
    tracep->declBit(c+579,"en_pixel_map", false,-1);
    tracep->declBus(c+251,"iterations", false,-1, 5,0);
    tracep->declBus(c+252,"xpixel", false,-1, 9,0);
    tracep->declBus(c+253,"ypixel", false,-1, 9,0);
    tracep->declBus(c+1188,"ENGINE_INT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+254,"x", false,-1, 24,0);
    tracep->declBus(c+255,"y", false,-1, 24,0);
    tracep->declBit(c+1169,"finished", false,-1);
    tracep->declBit(c+580,"distributor_ready", false,-1);
    tracep->declBus(c+251,"curr_iterations", false,-1, 5,0);
    tracep->declBus(c+256,"zr", false,-1, 24,0);
    tracep->declBus(c+257,"zi", false,-1, 24,0);
    tracep->declBus(c+258,"zr_next", false,-1, 24,0);
    tracep->declBus(c+484,"zi_next", false,-1, 24,0);
    tracep->declBus(c+259,"zr2", false,-1, 24,0);
    tracep->declBus(c+260,"zi2", false,-1, 24,0);
    tracep->declBus(c+485,"zr2_next", false,-1, 24,0);
    tracep->declBus(c+486,"zi2_next", false,-1, 24,0);
    tracep->declBus(c+487,"zrzi", false,-1, 24,0);
    tracep->declBit(c+581,"en_stage_1", false,-1);
    tracep->declBit(c+582,"en_stage_2", false,-1);
    tracep->declBit(c+583,"init", false,-1);
    tracep->declBus(c+261,"distance", false,-1, 24,0);
    tracep->declBus(c+1189,"max_distance", false,-1, 24,0);
    tracep->pushNamePrefix("M5 ");
    tracep->declBus(c+1184,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1185,"ENGINE_FRACT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+256,"a", false,-1, 24,0);
    tracep->declBus(c+256,"b", false,-1, 24,0);
    tracep->declBit(c+583,"rst", false,-1);
    tracep->declBus(c+485,"result", false,-1, 24,0);
    tracep->declBus(c+1188,"ENGINE_INT_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+262,"product", false,-1, 49,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("M6 ");
    tracep->declBus(c+1184,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1185,"ENGINE_FRACT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+257,"a", false,-1, 24,0);
    tracep->declBus(c+257,"b", false,-1, 24,0);
    tracep->declBit(c+583,"rst", false,-1);
    tracep->declBus(c+486,"result", false,-1, 24,0);
    tracep->declBus(c+1188,"ENGINE_INT_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+264,"product", false,-1, 49,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("M7 ");
    tracep->declBus(c+1184,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1185,"ENGINE_FRACT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+256,"a", false,-1, 24,0);
    tracep->declBus(c+257,"b", false,-1, 24,0);
    tracep->declBit(c+583,"rst", false,-1);
    tracep->declBus(c+487,"result", false,-1, 24,0);
    tracep->declBus(c+1188,"ENGINE_INT_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+266,"product", false,-1, 49,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("R0 ");
    tracep->declBus(c+1186,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+583,"rst", false,-1);
    tracep->declBit(c+582,"en", false,-1);
    tracep->declBus(c+268,"in", false,-1, 5,0);
    tracep->declBus(c+251,"out", false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SM ");
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+1187,"rst", false,-1);
    tracep->declBit(c+1169,"finished", false,-1);
    tracep->declBit(c+727,"full_queue", false,-1);
    tracep->declBit(c+580,"distributor_ready", false,-1);
    tracep->declBit(c+583,"init", false,-1);
    tracep->declBit(c+579,"en_pixel_map", false,-1);
    tracep->declBit(c+581,"en_stage_1", false,-1);
    tracep->declBit(c+582,"en_stage_2", false,-1);
    tracep->declBus(c+1190,"INIT", false,-1, 31,0);
    tracep->declBus(c+1191,"CALC_STAGE_1", false,-1, 31,0);
    tracep->declBus(c+1192,"CALC_STAGE_2", false,-1, 31,0);
    tracep->declBus(c+1193,"ESCAPE", false,-1, 31,0);
    tracep->declBus(c+269,"state", false,-1, 1,0);
    tracep->declBus(c+584,"next", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("calc_stage_1 ");
    tracep->declBus(c+1184,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+583,"reset", false,-1);
    tracep->declBit(c+581,"en", false,-1);
    tracep->declBus(c+258,"zr_next", false,-1, 24,0);
    tracep->declBus(c+484,"zi_next", false,-1, 24,0);
    tracep->declBus(c+256,"zr", false,-1, 24,0);
    tracep->declBus(c+257,"zi", false,-1, 24,0);
    tracep->pushNamePrefix("R1 ");
    tracep->declBus(c+1184,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+583,"rst", false,-1);
    tracep->declBit(c+581,"en", false,-1);
    tracep->declBus(c+258,"in", false,-1, 24,0);
    tracep->declBus(c+256,"out", false,-1, 24,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("R2 ");
    tracep->declBus(c+1184,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+583,"rst", false,-1);
    tracep->declBit(c+581,"en", false,-1);
    tracep->declBus(c+484,"in", false,-1, 24,0);
    tracep->declBus(c+257,"out", false,-1, 24,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("calc_stage_2 ");
    tracep->declBus(c+1184,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+583,"reset", false,-1);
    tracep->declBit(c+582,"en", false,-1);
    tracep->declBus(c+485,"zr2_next", false,-1, 24,0);
    tracep->declBus(c+486,"zi2_next", false,-1, 24,0);
    tracep->declBus(c+259,"zr2", false,-1, 24,0);
    tracep->declBus(c+260,"zi2", false,-1, 24,0);
    tracep->pushNamePrefix("R3 ");
    tracep->declBus(c+1184,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+583,"rst", false,-1);
    tracep->declBit(c+582,"en", false,-1);
    tracep->declBus(c+485,"in", false,-1, 24,0);
    tracep->declBus(c+259,"out", false,-1, 24,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("R4 ");
    tracep->declBus(c+1184,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+583,"rst", false,-1);
    tracep->declBit(c+582,"en", false,-1);
    tracep->declBus(c+486,"in", false,-1, 24,0);
    tracep->declBus(c+260,"out", false,-1, 24,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("pixel_map ");
    tracep->declBus(c+1176,"PIXEL_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1184,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1185,"ENGINE_FRACT_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+1187,"reset", false,-1);
    tracep->declBit(c+579,"en", false,-1);
    tracep->declBit(c+580,"distributor_ready", false,-1);
    tracep->declBit(c+727,"full_queue", false,-1);
    tracep->declBus(c+249,"pixel_x_in", false,-1, 9,0);
    tracep->declBus(c+250,"pixel_y_in", false,-1, 9,0);
    tracep->declBus(c+1160,"x_offset", false,-1, 24,0);
    tracep->declBus(c+1161,"y_offset", false,-1, 24,0);
    tracep->declBus(c+254,"real_x", false,-1, 24,0);
    tracep->declBus(c+255,"imag_y", false,-1, 24,0);
    tracep->declBus(c+252,"pixel_x_out", false,-1, 9,0);
    tracep->declBus(c+253,"pixel_y_out", false,-1, 9,0);
    tracep->declBus(c+1194,"scale_factor", false,-1, 24,0);
    tracep->declBus(c+1163,"r_min", false,-1, 24,0);
    tracep->declBus(c+1164,"i_min", false,-1, 24,0);
    tracep->declBus(c+270,"r_gradient", false,-1, 24,0);
    tracep->declBus(c+271,"i_gradient", false,-1, 24,0);
    tracep->declBus(c+272,"pixel_x_fixed", false,-1, 24,0);
    tracep->declBus(c+273,"pixel_y_fixed", false,-1, 24,0);
    tracep->pushNamePrefix("M1 ");
    tracep->declBus(c+1184,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1185,"ENGINE_FRACT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1195,"a", false,-1, 24,0);
    tracep->declBus(c+272,"b", false,-1, 24,0);
    tracep->declBit(c+1187,"rst", false,-1);
    tracep->declBus(c+270,"result", false,-1, 24,0);
    tracep->declBus(c+1188,"ENGINE_INT_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+274,"product", false,-1, 49,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("M2 ");
    tracep->declBus(c+1184,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1185,"ENGINE_FRACT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1195,"a", false,-1, 24,0);
    tracep->declBus(c+273,"b", false,-1, 24,0);
    tracep->declBit(c+1187,"rst", false,-1);
    tracep->declBus(c+271,"result", false,-1, 24,0);
    tracep->declBus(c+1188,"ENGINE_INT_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+276,"product", false,-1, 49,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__genblk1__BRA__6__KET____DOT__engine__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__genblk1__BRA__6__KET____DOT__engine__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1176,"PIXEL_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1184,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1185,"ENGINE_FRACT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1186,"ITERATIONS_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+1187,"reset", false,-1);
    tracep->declBus(c+1158,"iterations_max", false,-1, 5,0);
    tracep->declBus(c+278,"x0_", false,-1, 9,0);
    tracep->declBus(c+279,"y0_", false,-1, 9,0);
    tracep->declBus(c+1159,"zoom", false,-1, 2,0);
    tracep->declBus(c+1160,"x_offset", false,-1, 24,0);
    tracep->declBus(c+1161,"y_offset", false,-1, 24,0);
    tracep->declBit(c+728,"full_queue", false,-1);
    tracep->declBit(c+585,"en_pixel_map", false,-1);
    tracep->declBus(c+280,"iterations", false,-1, 5,0);
    tracep->declBus(c+281,"xpixel", false,-1, 9,0);
    tracep->declBus(c+282,"ypixel", false,-1, 9,0);
    tracep->declBus(c+1188,"ENGINE_INT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+283,"x", false,-1, 24,0);
    tracep->declBus(c+284,"y", false,-1, 24,0);
    tracep->declBit(c+1170,"finished", false,-1);
    tracep->declBit(c+586,"distributor_ready", false,-1);
    tracep->declBus(c+280,"curr_iterations", false,-1, 5,0);
    tracep->declBus(c+285,"zr", false,-1, 24,0);
    tracep->declBus(c+286,"zi", false,-1, 24,0);
    tracep->declBus(c+287,"zr_next", false,-1, 24,0);
    tracep->declBus(c+488,"zi_next", false,-1, 24,0);
    tracep->declBus(c+288,"zr2", false,-1, 24,0);
    tracep->declBus(c+289,"zi2", false,-1, 24,0);
    tracep->declBus(c+489,"zr2_next", false,-1, 24,0);
    tracep->declBus(c+490,"zi2_next", false,-1, 24,0);
    tracep->declBus(c+491,"zrzi", false,-1, 24,0);
    tracep->declBit(c+587,"en_stage_1", false,-1);
    tracep->declBit(c+588,"en_stage_2", false,-1);
    tracep->declBit(c+589,"init", false,-1);
    tracep->declBus(c+290,"distance", false,-1, 24,0);
    tracep->declBus(c+1189,"max_distance", false,-1, 24,0);
    tracep->pushNamePrefix("M5 ");
    tracep->declBus(c+1184,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1185,"ENGINE_FRACT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+285,"a", false,-1, 24,0);
    tracep->declBus(c+285,"b", false,-1, 24,0);
    tracep->declBit(c+589,"rst", false,-1);
    tracep->declBus(c+489,"result", false,-1, 24,0);
    tracep->declBus(c+1188,"ENGINE_INT_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+291,"product", false,-1, 49,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("M6 ");
    tracep->declBus(c+1184,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1185,"ENGINE_FRACT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+286,"a", false,-1, 24,0);
    tracep->declBus(c+286,"b", false,-1, 24,0);
    tracep->declBit(c+589,"rst", false,-1);
    tracep->declBus(c+490,"result", false,-1, 24,0);
    tracep->declBus(c+1188,"ENGINE_INT_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+293,"product", false,-1, 49,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("M7 ");
    tracep->declBus(c+1184,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1185,"ENGINE_FRACT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+285,"a", false,-1, 24,0);
    tracep->declBus(c+286,"b", false,-1, 24,0);
    tracep->declBit(c+589,"rst", false,-1);
    tracep->declBus(c+491,"result", false,-1, 24,0);
    tracep->declBus(c+1188,"ENGINE_INT_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+295,"product", false,-1, 49,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("R0 ");
    tracep->declBus(c+1186,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+589,"rst", false,-1);
    tracep->declBit(c+588,"en", false,-1);
    tracep->declBus(c+297,"in", false,-1, 5,0);
    tracep->declBus(c+280,"out", false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SM ");
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+1187,"rst", false,-1);
    tracep->declBit(c+1170,"finished", false,-1);
    tracep->declBit(c+728,"full_queue", false,-1);
    tracep->declBit(c+586,"distributor_ready", false,-1);
    tracep->declBit(c+589,"init", false,-1);
    tracep->declBit(c+585,"en_pixel_map", false,-1);
    tracep->declBit(c+587,"en_stage_1", false,-1);
    tracep->declBit(c+588,"en_stage_2", false,-1);
    tracep->declBus(c+1190,"INIT", false,-1, 31,0);
    tracep->declBus(c+1191,"CALC_STAGE_1", false,-1, 31,0);
    tracep->declBus(c+1192,"CALC_STAGE_2", false,-1, 31,0);
    tracep->declBus(c+1193,"ESCAPE", false,-1, 31,0);
    tracep->declBus(c+298,"state", false,-1, 1,0);
    tracep->declBus(c+590,"next", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("calc_stage_1 ");
    tracep->declBus(c+1184,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+589,"reset", false,-1);
    tracep->declBit(c+587,"en", false,-1);
    tracep->declBus(c+287,"zr_next", false,-1, 24,0);
    tracep->declBus(c+488,"zi_next", false,-1, 24,0);
    tracep->declBus(c+285,"zr", false,-1, 24,0);
    tracep->declBus(c+286,"zi", false,-1, 24,0);
    tracep->pushNamePrefix("R1 ");
    tracep->declBus(c+1184,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+589,"rst", false,-1);
    tracep->declBit(c+587,"en", false,-1);
    tracep->declBus(c+287,"in", false,-1, 24,0);
    tracep->declBus(c+285,"out", false,-1, 24,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("R2 ");
    tracep->declBus(c+1184,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+589,"rst", false,-1);
    tracep->declBit(c+587,"en", false,-1);
    tracep->declBus(c+488,"in", false,-1, 24,0);
    tracep->declBus(c+286,"out", false,-1, 24,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("calc_stage_2 ");
    tracep->declBus(c+1184,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+589,"reset", false,-1);
    tracep->declBit(c+588,"en", false,-1);
    tracep->declBus(c+489,"zr2_next", false,-1, 24,0);
    tracep->declBus(c+490,"zi2_next", false,-1, 24,0);
    tracep->declBus(c+288,"zr2", false,-1, 24,0);
    tracep->declBus(c+289,"zi2", false,-1, 24,0);
    tracep->pushNamePrefix("R3 ");
    tracep->declBus(c+1184,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+589,"rst", false,-1);
    tracep->declBit(c+588,"en", false,-1);
    tracep->declBus(c+489,"in", false,-1, 24,0);
    tracep->declBus(c+288,"out", false,-1, 24,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("R4 ");
    tracep->declBus(c+1184,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+589,"rst", false,-1);
    tracep->declBit(c+588,"en", false,-1);
    tracep->declBus(c+490,"in", false,-1, 24,0);
    tracep->declBus(c+289,"out", false,-1, 24,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("pixel_map ");
    tracep->declBus(c+1176,"PIXEL_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1184,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1185,"ENGINE_FRACT_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+1187,"reset", false,-1);
    tracep->declBit(c+585,"en", false,-1);
    tracep->declBit(c+586,"distributor_ready", false,-1);
    tracep->declBit(c+728,"full_queue", false,-1);
    tracep->declBus(c+278,"pixel_x_in", false,-1, 9,0);
    tracep->declBus(c+279,"pixel_y_in", false,-1, 9,0);
    tracep->declBus(c+1160,"x_offset", false,-1, 24,0);
    tracep->declBus(c+1161,"y_offset", false,-1, 24,0);
    tracep->declBus(c+283,"real_x", false,-1, 24,0);
    tracep->declBus(c+284,"imag_y", false,-1, 24,0);
    tracep->declBus(c+281,"pixel_x_out", false,-1, 9,0);
    tracep->declBus(c+282,"pixel_y_out", false,-1, 9,0);
    tracep->declBus(c+1194,"scale_factor", false,-1, 24,0);
    tracep->declBus(c+1163,"r_min", false,-1, 24,0);
    tracep->declBus(c+1164,"i_min", false,-1, 24,0);
    tracep->declBus(c+299,"r_gradient", false,-1, 24,0);
    tracep->declBus(c+300,"i_gradient", false,-1, 24,0);
    tracep->declBus(c+301,"pixel_x_fixed", false,-1, 24,0);
    tracep->declBus(c+302,"pixel_y_fixed", false,-1, 24,0);
    tracep->pushNamePrefix("M1 ");
    tracep->declBus(c+1184,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1185,"ENGINE_FRACT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1195,"a", false,-1, 24,0);
    tracep->declBus(c+301,"b", false,-1, 24,0);
    tracep->declBit(c+1187,"rst", false,-1);
    tracep->declBus(c+299,"result", false,-1, 24,0);
    tracep->declBus(c+1188,"ENGINE_INT_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+303,"product", false,-1, 49,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("M2 ");
    tracep->declBus(c+1184,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1185,"ENGINE_FRACT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1195,"a", false,-1, 24,0);
    tracep->declBus(c+302,"b", false,-1, 24,0);
    tracep->declBit(c+1187,"rst", false,-1);
    tracep->declBus(c+300,"result", false,-1, 24,0);
    tracep->declBus(c+1188,"ENGINE_INT_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+305,"product", false,-1, 49,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__genblk1__BRA__7__KET____DOT__engine__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__genblk1__BRA__7__KET____DOT__engine__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1176,"PIXEL_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1184,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1185,"ENGINE_FRACT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1186,"ITERATIONS_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+1187,"reset", false,-1);
    tracep->declBus(c+1158,"iterations_max", false,-1, 5,0);
    tracep->declBus(c+307,"x0_", false,-1, 9,0);
    tracep->declBus(c+308,"y0_", false,-1, 9,0);
    tracep->declBus(c+1159,"zoom", false,-1, 2,0);
    tracep->declBus(c+1160,"x_offset", false,-1, 24,0);
    tracep->declBus(c+1161,"y_offset", false,-1, 24,0);
    tracep->declBit(c+729,"full_queue", false,-1);
    tracep->declBit(c+591,"en_pixel_map", false,-1);
    tracep->declBus(c+309,"iterations", false,-1, 5,0);
    tracep->declBus(c+310,"xpixel", false,-1, 9,0);
    tracep->declBus(c+311,"ypixel", false,-1, 9,0);
    tracep->declBus(c+1188,"ENGINE_INT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+312,"x", false,-1, 24,0);
    tracep->declBus(c+313,"y", false,-1, 24,0);
    tracep->declBit(c+1171,"finished", false,-1);
    tracep->declBit(c+592,"distributor_ready", false,-1);
    tracep->declBus(c+309,"curr_iterations", false,-1, 5,0);
    tracep->declBus(c+314,"zr", false,-1, 24,0);
    tracep->declBus(c+315,"zi", false,-1, 24,0);
    tracep->declBus(c+316,"zr_next", false,-1, 24,0);
    tracep->declBus(c+492,"zi_next", false,-1, 24,0);
    tracep->declBus(c+317,"zr2", false,-1, 24,0);
    tracep->declBus(c+318,"zi2", false,-1, 24,0);
    tracep->declBus(c+493,"zr2_next", false,-1, 24,0);
    tracep->declBus(c+494,"zi2_next", false,-1, 24,0);
    tracep->declBus(c+495,"zrzi", false,-1, 24,0);
    tracep->declBit(c+593,"en_stage_1", false,-1);
    tracep->declBit(c+594,"en_stage_2", false,-1);
    tracep->declBit(c+595,"init", false,-1);
    tracep->declBus(c+319,"distance", false,-1, 24,0);
    tracep->declBus(c+1189,"max_distance", false,-1, 24,0);
    tracep->pushNamePrefix("M5 ");
    tracep->declBus(c+1184,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1185,"ENGINE_FRACT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+314,"a", false,-1, 24,0);
    tracep->declBus(c+314,"b", false,-1, 24,0);
    tracep->declBit(c+595,"rst", false,-1);
    tracep->declBus(c+493,"result", false,-1, 24,0);
    tracep->declBus(c+1188,"ENGINE_INT_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+320,"product", false,-1, 49,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("M6 ");
    tracep->declBus(c+1184,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1185,"ENGINE_FRACT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+315,"a", false,-1, 24,0);
    tracep->declBus(c+315,"b", false,-1, 24,0);
    tracep->declBit(c+595,"rst", false,-1);
    tracep->declBus(c+494,"result", false,-1, 24,0);
    tracep->declBus(c+1188,"ENGINE_INT_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+322,"product", false,-1, 49,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("M7 ");
    tracep->declBus(c+1184,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1185,"ENGINE_FRACT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+314,"a", false,-1, 24,0);
    tracep->declBus(c+315,"b", false,-1, 24,0);
    tracep->declBit(c+595,"rst", false,-1);
    tracep->declBus(c+495,"result", false,-1, 24,0);
    tracep->declBus(c+1188,"ENGINE_INT_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+324,"product", false,-1, 49,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("R0 ");
    tracep->declBus(c+1186,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+595,"rst", false,-1);
    tracep->declBit(c+594,"en", false,-1);
    tracep->declBus(c+326,"in", false,-1, 5,0);
    tracep->declBus(c+309,"out", false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SM ");
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+1187,"rst", false,-1);
    tracep->declBit(c+1171,"finished", false,-1);
    tracep->declBit(c+729,"full_queue", false,-1);
    tracep->declBit(c+592,"distributor_ready", false,-1);
    tracep->declBit(c+595,"init", false,-1);
    tracep->declBit(c+591,"en_pixel_map", false,-1);
    tracep->declBit(c+593,"en_stage_1", false,-1);
    tracep->declBit(c+594,"en_stage_2", false,-1);
    tracep->declBus(c+1190,"INIT", false,-1, 31,0);
    tracep->declBus(c+1191,"CALC_STAGE_1", false,-1, 31,0);
    tracep->declBus(c+1192,"CALC_STAGE_2", false,-1, 31,0);
    tracep->declBus(c+1193,"ESCAPE", false,-1, 31,0);
    tracep->declBus(c+327,"state", false,-1, 1,0);
    tracep->declBus(c+596,"next", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("calc_stage_1 ");
    tracep->declBus(c+1184,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+595,"reset", false,-1);
    tracep->declBit(c+593,"en", false,-1);
    tracep->declBus(c+316,"zr_next", false,-1, 24,0);
    tracep->declBus(c+492,"zi_next", false,-1, 24,0);
    tracep->declBus(c+314,"zr", false,-1, 24,0);
    tracep->declBus(c+315,"zi", false,-1, 24,0);
    tracep->pushNamePrefix("R1 ");
    tracep->declBus(c+1184,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+595,"rst", false,-1);
    tracep->declBit(c+593,"en", false,-1);
    tracep->declBus(c+316,"in", false,-1, 24,0);
    tracep->declBus(c+314,"out", false,-1, 24,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("R2 ");
    tracep->declBus(c+1184,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+595,"rst", false,-1);
    tracep->declBit(c+593,"en", false,-1);
    tracep->declBus(c+492,"in", false,-1, 24,0);
    tracep->declBus(c+315,"out", false,-1, 24,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("calc_stage_2 ");
    tracep->declBus(c+1184,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+595,"reset", false,-1);
    tracep->declBit(c+594,"en", false,-1);
    tracep->declBus(c+493,"zr2_next", false,-1, 24,0);
    tracep->declBus(c+494,"zi2_next", false,-1, 24,0);
    tracep->declBus(c+317,"zr2", false,-1, 24,0);
    tracep->declBus(c+318,"zi2", false,-1, 24,0);
    tracep->pushNamePrefix("R3 ");
    tracep->declBus(c+1184,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+595,"rst", false,-1);
    tracep->declBit(c+594,"en", false,-1);
    tracep->declBus(c+493,"in", false,-1, 24,0);
    tracep->declBus(c+317,"out", false,-1, 24,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("R4 ");
    tracep->declBus(c+1184,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+595,"rst", false,-1);
    tracep->declBit(c+594,"en", false,-1);
    tracep->declBus(c+494,"in", false,-1, 24,0);
    tracep->declBus(c+318,"out", false,-1, 24,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("pixel_map ");
    tracep->declBus(c+1176,"PIXEL_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1184,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1185,"ENGINE_FRACT_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+1187,"reset", false,-1);
    tracep->declBit(c+591,"en", false,-1);
    tracep->declBit(c+592,"distributor_ready", false,-1);
    tracep->declBit(c+729,"full_queue", false,-1);
    tracep->declBus(c+307,"pixel_x_in", false,-1, 9,0);
    tracep->declBus(c+308,"pixel_y_in", false,-1, 9,0);
    tracep->declBus(c+1160,"x_offset", false,-1, 24,0);
    tracep->declBus(c+1161,"y_offset", false,-1, 24,0);
    tracep->declBus(c+312,"real_x", false,-1, 24,0);
    tracep->declBus(c+313,"imag_y", false,-1, 24,0);
    tracep->declBus(c+310,"pixel_x_out", false,-1, 9,0);
    tracep->declBus(c+311,"pixel_y_out", false,-1, 9,0);
    tracep->declBus(c+1194,"scale_factor", false,-1, 24,0);
    tracep->declBus(c+1163,"r_min", false,-1, 24,0);
    tracep->declBus(c+1164,"i_min", false,-1, 24,0);
    tracep->declBus(c+328,"r_gradient", false,-1, 24,0);
    tracep->declBus(c+329,"i_gradient", false,-1, 24,0);
    tracep->declBus(c+330,"pixel_x_fixed", false,-1, 24,0);
    tracep->declBus(c+331,"pixel_y_fixed", false,-1, 24,0);
    tracep->pushNamePrefix("M1 ");
    tracep->declBus(c+1184,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1185,"ENGINE_FRACT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1195,"a", false,-1, 24,0);
    tracep->declBus(c+330,"b", false,-1, 24,0);
    tracep->declBit(c+1187,"rst", false,-1);
    tracep->declBus(c+328,"result", false,-1, 24,0);
    tracep->declBus(c+1188,"ENGINE_INT_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+332,"product", false,-1, 49,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("M2 ");
    tracep->declBus(c+1184,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1185,"ENGINE_FRACT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1195,"a", false,-1, 24,0);
    tracep->declBus(c+331,"b", false,-1, 24,0);
    tracep->declBit(c+1187,"rst", false,-1);
    tracep->declBus(c+329,"result", false,-1, 24,0);
    tracep->declBus(c+1188,"ENGINE_INT_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+334,"product", false,-1, 49,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__genblk1__BRA__8__KET____DOT__engine__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__genblk1__BRA__8__KET____DOT__engine__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1176,"PIXEL_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1184,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1185,"ENGINE_FRACT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1186,"ITERATIONS_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+1187,"reset", false,-1);
    tracep->declBus(c+1158,"iterations_max", false,-1, 5,0);
    tracep->declBus(c+336,"x0_", false,-1, 9,0);
    tracep->declBus(c+337,"y0_", false,-1, 9,0);
    tracep->declBus(c+1159,"zoom", false,-1, 2,0);
    tracep->declBus(c+1160,"x_offset", false,-1, 24,0);
    tracep->declBus(c+1161,"y_offset", false,-1, 24,0);
    tracep->declBit(c+730,"full_queue", false,-1);
    tracep->declBit(c+597,"en_pixel_map", false,-1);
    tracep->declBus(c+338,"iterations", false,-1, 5,0);
    tracep->declBus(c+339,"xpixel", false,-1, 9,0);
    tracep->declBus(c+340,"ypixel", false,-1, 9,0);
    tracep->declBus(c+1188,"ENGINE_INT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+341,"x", false,-1, 24,0);
    tracep->declBus(c+342,"y", false,-1, 24,0);
    tracep->declBit(c+1172,"finished", false,-1);
    tracep->declBit(c+598,"distributor_ready", false,-1);
    tracep->declBus(c+338,"curr_iterations", false,-1, 5,0);
    tracep->declBus(c+343,"zr", false,-1, 24,0);
    tracep->declBus(c+344,"zi", false,-1, 24,0);
    tracep->declBus(c+345,"zr_next", false,-1, 24,0);
    tracep->declBus(c+496,"zi_next", false,-1, 24,0);
    tracep->declBus(c+346,"zr2", false,-1, 24,0);
    tracep->declBus(c+347,"zi2", false,-1, 24,0);
    tracep->declBus(c+497,"zr2_next", false,-1, 24,0);
    tracep->declBus(c+498,"zi2_next", false,-1, 24,0);
    tracep->declBus(c+499,"zrzi", false,-1, 24,0);
    tracep->declBit(c+599,"en_stage_1", false,-1);
    tracep->declBit(c+600,"en_stage_2", false,-1);
    tracep->declBit(c+601,"init", false,-1);
    tracep->declBus(c+348,"distance", false,-1, 24,0);
    tracep->declBus(c+1189,"max_distance", false,-1, 24,0);
    tracep->pushNamePrefix("M5 ");
    tracep->declBus(c+1184,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1185,"ENGINE_FRACT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+343,"a", false,-1, 24,0);
    tracep->declBus(c+343,"b", false,-1, 24,0);
    tracep->declBit(c+601,"rst", false,-1);
    tracep->declBus(c+497,"result", false,-1, 24,0);
    tracep->declBus(c+1188,"ENGINE_INT_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+349,"product", false,-1, 49,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("M6 ");
    tracep->declBus(c+1184,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1185,"ENGINE_FRACT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+344,"a", false,-1, 24,0);
    tracep->declBus(c+344,"b", false,-1, 24,0);
    tracep->declBit(c+601,"rst", false,-1);
    tracep->declBus(c+498,"result", false,-1, 24,0);
    tracep->declBus(c+1188,"ENGINE_INT_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+351,"product", false,-1, 49,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("M7 ");
    tracep->declBus(c+1184,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1185,"ENGINE_FRACT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+343,"a", false,-1, 24,0);
    tracep->declBus(c+344,"b", false,-1, 24,0);
    tracep->declBit(c+601,"rst", false,-1);
    tracep->declBus(c+499,"result", false,-1, 24,0);
    tracep->declBus(c+1188,"ENGINE_INT_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+353,"product", false,-1, 49,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("R0 ");
    tracep->declBus(c+1186,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+601,"rst", false,-1);
    tracep->declBit(c+600,"en", false,-1);
    tracep->declBus(c+355,"in", false,-1, 5,0);
    tracep->declBus(c+338,"out", false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SM ");
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+1187,"rst", false,-1);
    tracep->declBit(c+1172,"finished", false,-1);
    tracep->declBit(c+730,"full_queue", false,-1);
    tracep->declBit(c+598,"distributor_ready", false,-1);
    tracep->declBit(c+601,"init", false,-1);
    tracep->declBit(c+597,"en_pixel_map", false,-1);
    tracep->declBit(c+599,"en_stage_1", false,-1);
    tracep->declBit(c+600,"en_stage_2", false,-1);
    tracep->declBus(c+1190,"INIT", false,-1, 31,0);
    tracep->declBus(c+1191,"CALC_STAGE_1", false,-1, 31,0);
    tracep->declBus(c+1192,"CALC_STAGE_2", false,-1, 31,0);
    tracep->declBus(c+1193,"ESCAPE", false,-1, 31,0);
    tracep->declBus(c+356,"state", false,-1, 1,0);
    tracep->declBus(c+602,"next", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("calc_stage_1 ");
    tracep->declBus(c+1184,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+601,"reset", false,-1);
    tracep->declBit(c+599,"en", false,-1);
    tracep->declBus(c+345,"zr_next", false,-1, 24,0);
    tracep->declBus(c+496,"zi_next", false,-1, 24,0);
    tracep->declBus(c+343,"zr", false,-1, 24,0);
    tracep->declBus(c+344,"zi", false,-1, 24,0);
    tracep->pushNamePrefix("R1 ");
    tracep->declBus(c+1184,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+601,"rst", false,-1);
    tracep->declBit(c+599,"en", false,-1);
    tracep->declBus(c+345,"in", false,-1, 24,0);
    tracep->declBus(c+343,"out", false,-1, 24,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("R2 ");
    tracep->declBus(c+1184,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+601,"rst", false,-1);
    tracep->declBit(c+599,"en", false,-1);
    tracep->declBus(c+496,"in", false,-1, 24,0);
    tracep->declBus(c+344,"out", false,-1, 24,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("calc_stage_2 ");
    tracep->declBus(c+1184,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+601,"reset", false,-1);
    tracep->declBit(c+600,"en", false,-1);
    tracep->declBus(c+497,"zr2_next", false,-1, 24,0);
    tracep->declBus(c+498,"zi2_next", false,-1, 24,0);
    tracep->declBus(c+346,"zr2", false,-1, 24,0);
    tracep->declBus(c+347,"zi2", false,-1, 24,0);
    tracep->pushNamePrefix("R3 ");
    tracep->declBus(c+1184,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+601,"rst", false,-1);
    tracep->declBit(c+600,"en", false,-1);
    tracep->declBus(c+497,"in", false,-1, 24,0);
    tracep->declBus(c+346,"out", false,-1, 24,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("R4 ");
    tracep->declBus(c+1184,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+601,"rst", false,-1);
    tracep->declBit(c+600,"en", false,-1);
    tracep->declBus(c+498,"in", false,-1, 24,0);
    tracep->declBus(c+347,"out", false,-1, 24,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("pixel_map ");
    tracep->declBus(c+1176,"PIXEL_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1184,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1185,"ENGINE_FRACT_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+1187,"reset", false,-1);
    tracep->declBit(c+597,"en", false,-1);
    tracep->declBit(c+598,"distributor_ready", false,-1);
    tracep->declBit(c+730,"full_queue", false,-1);
    tracep->declBus(c+336,"pixel_x_in", false,-1, 9,0);
    tracep->declBus(c+337,"pixel_y_in", false,-1, 9,0);
    tracep->declBus(c+1160,"x_offset", false,-1, 24,0);
    tracep->declBus(c+1161,"y_offset", false,-1, 24,0);
    tracep->declBus(c+341,"real_x", false,-1, 24,0);
    tracep->declBus(c+342,"imag_y", false,-1, 24,0);
    tracep->declBus(c+339,"pixel_x_out", false,-1, 9,0);
    tracep->declBus(c+340,"pixel_y_out", false,-1, 9,0);
    tracep->declBus(c+1194,"scale_factor", false,-1, 24,0);
    tracep->declBus(c+1163,"r_min", false,-1, 24,0);
    tracep->declBus(c+1164,"i_min", false,-1, 24,0);
    tracep->declBus(c+357,"r_gradient", false,-1, 24,0);
    tracep->declBus(c+358,"i_gradient", false,-1, 24,0);
    tracep->declBus(c+359,"pixel_x_fixed", false,-1, 24,0);
    tracep->declBus(c+360,"pixel_y_fixed", false,-1, 24,0);
    tracep->pushNamePrefix("M1 ");
    tracep->declBus(c+1184,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1185,"ENGINE_FRACT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1195,"a", false,-1, 24,0);
    tracep->declBus(c+359,"b", false,-1, 24,0);
    tracep->declBit(c+1187,"rst", false,-1);
    tracep->declBus(c+357,"result", false,-1, 24,0);
    tracep->declBus(c+1188,"ENGINE_INT_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+361,"product", false,-1, 49,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("M2 ");
    tracep->declBus(c+1184,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1185,"ENGINE_FRACT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1195,"a", false,-1, 24,0);
    tracep->declBus(c+360,"b", false,-1, 24,0);
    tracep->declBit(c+1187,"rst", false,-1);
    tracep->declBus(c+358,"result", false,-1, 24,0);
    tracep->declBus(c+1188,"ENGINE_INT_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+363,"product", false,-1, 49,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__genblk1__BRA__9__KET____DOT__engine__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__genblk1__BRA__9__KET____DOT__engine__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1176,"PIXEL_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1184,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1185,"ENGINE_FRACT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1186,"ITERATIONS_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+1187,"reset", false,-1);
    tracep->declBus(c+1158,"iterations_max", false,-1, 5,0);
    tracep->declBus(c+365,"x0_", false,-1, 9,0);
    tracep->declBus(c+366,"y0_", false,-1, 9,0);
    tracep->declBus(c+1159,"zoom", false,-1, 2,0);
    tracep->declBus(c+1160,"x_offset", false,-1, 24,0);
    tracep->declBus(c+1161,"y_offset", false,-1, 24,0);
    tracep->declBit(c+731,"full_queue", false,-1);
    tracep->declBit(c+603,"en_pixel_map", false,-1);
    tracep->declBus(c+367,"iterations", false,-1, 5,0);
    tracep->declBus(c+368,"xpixel", false,-1, 9,0);
    tracep->declBus(c+369,"ypixel", false,-1, 9,0);
    tracep->declBus(c+1188,"ENGINE_INT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+370,"x", false,-1, 24,0);
    tracep->declBus(c+371,"y", false,-1, 24,0);
    tracep->declBit(c+1173,"finished", false,-1);
    tracep->declBit(c+604,"distributor_ready", false,-1);
    tracep->declBus(c+367,"curr_iterations", false,-1, 5,0);
    tracep->declBus(c+372,"zr", false,-1, 24,0);
    tracep->declBus(c+373,"zi", false,-1, 24,0);
    tracep->declBus(c+374,"zr_next", false,-1, 24,0);
    tracep->declBus(c+500,"zi_next", false,-1, 24,0);
    tracep->declBus(c+375,"zr2", false,-1, 24,0);
    tracep->declBus(c+376,"zi2", false,-1, 24,0);
    tracep->declBus(c+501,"zr2_next", false,-1, 24,0);
    tracep->declBus(c+502,"zi2_next", false,-1, 24,0);
    tracep->declBus(c+503,"zrzi", false,-1, 24,0);
    tracep->declBit(c+605,"en_stage_1", false,-1);
    tracep->declBit(c+606,"en_stage_2", false,-1);
    tracep->declBit(c+607,"init", false,-1);
    tracep->declBus(c+377,"distance", false,-1, 24,0);
    tracep->declBus(c+1189,"max_distance", false,-1, 24,0);
    tracep->pushNamePrefix("M5 ");
    tracep->declBus(c+1184,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1185,"ENGINE_FRACT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+372,"a", false,-1, 24,0);
    tracep->declBus(c+372,"b", false,-1, 24,0);
    tracep->declBit(c+607,"rst", false,-1);
    tracep->declBus(c+501,"result", false,-1, 24,0);
    tracep->declBus(c+1188,"ENGINE_INT_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+378,"product", false,-1, 49,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("M6 ");
    tracep->declBus(c+1184,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1185,"ENGINE_FRACT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+373,"a", false,-1, 24,0);
    tracep->declBus(c+373,"b", false,-1, 24,0);
    tracep->declBit(c+607,"rst", false,-1);
    tracep->declBus(c+502,"result", false,-1, 24,0);
    tracep->declBus(c+1188,"ENGINE_INT_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+380,"product", false,-1, 49,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("M7 ");
    tracep->declBus(c+1184,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1185,"ENGINE_FRACT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+372,"a", false,-1, 24,0);
    tracep->declBus(c+373,"b", false,-1, 24,0);
    tracep->declBit(c+607,"rst", false,-1);
    tracep->declBus(c+503,"result", false,-1, 24,0);
    tracep->declBus(c+1188,"ENGINE_INT_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+382,"product", false,-1, 49,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("R0 ");
    tracep->declBus(c+1186,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+607,"rst", false,-1);
    tracep->declBit(c+606,"en", false,-1);
    tracep->declBus(c+384,"in", false,-1, 5,0);
    tracep->declBus(c+367,"out", false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SM ");
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+1187,"rst", false,-1);
    tracep->declBit(c+1173,"finished", false,-1);
    tracep->declBit(c+731,"full_queue", false,-1);
    tracep->declBit(c+604,"distributor_ready", false,-1);
    tracep->declBit(c+607,"init", false,-1);
    tracep->declBit(c+603,"en_pixel_map", false,-1);
    tracep->declBit(c+605,"en_stage_1", false,-1);
    tracep->declBit(c+606,"en_stage_2", false,-1);
    tracep->declBus(c+1190,"INIT", false,-1, 31,0);
    tracep->declBus(c+1191,"CALC_STAGE_1", false,-1, 31,0);
    tracep->declBus(c+1192,"CALC_STAGE_2", false,-1, 31,0);
    tracep->declBus(c+1193,"ESCAPE", false,-1, 31,0);
    tracep->declBus(c+385,"state", false,-1, 1,0);
    tracep->declBus(c+608,"next", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("calc_stage_1 ");
    tracep->declBus(c+1184,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+607,"reset", false,-1);
    tracep->declBit(c+605,"en", false,-1);
    tracep->declBus(c+374,"zr_next", false,-1, 24,0);
    tracep->declBus(c+500,"zi_next", false,-1, 24,0);
    tracep->declBus(c+372,"zr", false,-1, 24,0);
    tracep->declBus(c+373,"zi", false,-1, 24,0);
    tracep->pushNamePrefix("R1 ");
    tracep->declBus(c+1184,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+607,"rst", false,-1);
    tracep->declBit(c+605,"en", false,-1);
    tracep->declBus(c+374,"in", false,-1, 24,0);
    tracep->declBus(c+372,"out", false,-1, 24,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("R2 ");
    tracep->declBus(c+1184,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+607,"rst", false,-1);
    tracep->declBit(c+605,"en", false,-1);
    tracep->declBus(c+500,"in", false,-1, 24,0);
    tracep->declBus(c+373,"out", false,-1, 24,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("calc_stage_2 ");
    tracep->declBus(c+1184,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+607,"reset", false,-1);
    tracep->declBit(c+606,"en", false,-1);
    tracep->declBus(c+501,"zr2_next", false,-1, 24,0);
    tracep->declBus(c+502,"zi2_next", false,-1, 24,0);
    tracep->declBus(c+375,"zr2", false,-1, 24,0);
    tracep->declBus(c+376,"zi2", false,-1, 24,0);
    tracep->pushNamePrefix("R3 ");
    tracep->declBus(c+1184,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+607,"rst", false,-1);
    tracep->declBit(c+606,"en", false,-1);
    tracep->declBus(c+501,"in", false,-1, 24,0);
    tracep->declBus(c+375,"out", false,-1, 24,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("R4 ");
    tracep->declBus(c+1184,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+607,"rst", false,-1);
    tracep->declBit(c+606,"en", false,-1);
    tracep->declBus(c+502,"in", false,-1, 24,0);
    tracep->declBus(c+376,"out", false,-1, 24,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("pixel_map ");
    tracep->declBus(c+1176,"PIXEL_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1184,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1185,"ENGINE_FRACT_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+1187,"reset", false,-1);
    tracep->declBit(c+603,"en", false,-1);
    tracep->declBit(c+604,"distributor_ready", false,-1);
    tracep->declBit(c+731,"full_queue", false,-1);
    tracep->declBus(c+365,"pixel_x_in", false,-1, 9,0);
    tracep->declBus(c+366,"pixel_y_in", false,-1, 9,0);
    tracep->declBus(c+1160,"x_offset", false,-1, 24,0);
    tracep->declBus(c+1161,"y_offset", false,-1, 24,0);
    tracep->declBus(c+370,"real_x", false,-1, 24,0);
    tracep->declBus(c+371,"imag_y", false,-1, 24,0);
    tracep->declBus(c+368,"pixel_x_out", false,-1, 9,0);
    tracep->declBus(c+369,"pixel_y_out", false,-1, 9,0);
    tracep->declBus(c+1194,"scale_factor", false,-1, 24,0);
    tracep->declBus(c+1163,"r_min", false,-1, 24,0);
    tracep->declBus(c+1164,"i_min", false,-1, 24,0);
    tracep->declBus(c+386,"r_gradient", false,-1, 24,0);
    tracep->declBus(c+387,"i_gradient", false,-1, 24,0);
    tracep->declBus(c+388,"pixel_x_fixed", false,-1, 24,0);
    tracep->declBus(c+389,"pixel_y_fixed", false,-1, 24,0);
    tracep->pushNamePrefix("M1 ");
    tracep->declBus(c+1184,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1185,"ENGINE_FRACT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1195,"a", false,-1, 24,0);
    tracep->declBus(c+388,"b", false,-1, 24,0);
    tracep->declBit(c+1187,"rst", false,-1);
    tracep->declBus(c+386,"result", false,-1, 24,0);
    tracep->declBus(c+1188,"ENGINE_INT_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+390,"product", false,-1, 49,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("M2 ");
    tracep->declBus(c+1184,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1185,"ENGINE_FRACT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1195,"a", false,-1, 24,0);
    tracep->declBus(c+389,"b", false,-1, 24,0);
    tracep->declBit(c+1187,"rst", false,-1);
    tracep->declBus(c+387,"result", false,-1, 24,0);
    tracep->declBus(c+1188,"ENGINE_INT_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+392,"product", false,-1, 49,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__genblk1__BRA__10__KET____DOT__engine__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__genblk1__BRA__10__KET____DOT__engine__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1176,"PIXEL_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1184,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1185,"ENGINE_FRACT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1186,"ITERATIONS_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+1187,"reset", false,-1);
    tracep->declBus(c+1158,"iterations_max", false,-1, 5,0);
    tracep->declBus(c+394,"x0_", false,-1, 9,0);
    tracep->declBus(c+395,"y0_", false,-1, 9,0);
    tracep->declBus(c+1159,"zoom", false,-1, 2,0);
    tracep->declBus(c+1160,"x_offset", false,-1, 24,0);
    tracep->declBus(c+1161,"y_offset", false,-1, 24,0);
    tracep->declBit(c+732,"full_queue", false,-1);
    tracep->declBit(c+609,"en_pixel_map", false,-1);
    tracep->declBus(c+396,"iterations", false,-1, 5,0);
    tracep->declBus(c+397,"xpixel", false,-1, 9,0);
    tracep->declBus(c+398,"ypixel", false,-1, 9,0);
    tracep->declBus(c+1188,"ENGINE_INT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+399,"x", false,-1, 24,0);
    tracep->declBus(c+400,"y", false,-1, 24,0);
    tracep->declBit(c+1174,"finished", false,-1);
    tracep->declBit(c+610,"distributor_ready", false,-1);
    tracep->declBus(c+396,"curr_iterations", false,-1, 5,0);
    tracep->declBus(c+401,"zr", false,-1, 24,0);
    tracep->declBus(c+402,"zi", false,-1, 24,0);
    tracep->declBus(c+403,"zr_next", false,-1, 24,0);
    tracep->declBus(c+504,"zi_next", false,-1, 24,0);
    tracep->declBus(c+404,"zr2", false,-1, 24,0);
    tracep->declBus(c+405,"zi2", false,-1, 24,0);
    tracep->declBus(c+505,"zr2_next", false,-1, 24,0);
    tracep->declBus(c+506,"zi2_next", false,-1, 24,0);
    tracep->declBus(c+507,"zrzi", false,-1, 24,0);
    tracep->declBit(c+611,"en_stage_1", false,-1);
    tracep->declBit(c+612,"en_stage_2", false,-1);
    tracep->declBit(c+613,"init", false,-1);
    tracep->declBus(c+406,"distance", false,-1, 24,0);
    tracep->declBus(c+1189,"max_distance", false,-1, 24,0);
    tracep->pushNamePrefix("M5 ");
    tracep->declBus(c+1184,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1185,"ENGINE_FRACT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+401,"a", false,-1, 24,0);
    tracep->declBus(c+401,"b", false,-1, 24,0);
    tracep->declBit(c+613,"rst", false,-1);
    tracep->declBus(c+505,"result", false,-1, 24,0);
    tracep->declBus(c+1188,"ENGINE_INT_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+407,"product", false,-1, 49,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("M6 ");
    tracep->declBus(c+1184,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1185,"ENGINE_FRACT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+402,"a", false,-1, 24,0);
    tracep->declBus(c+402,"b", false,-1, 24,0);
    tracep->declBit(c+613,"rst", false,-1);
    tracep->declBus(c+506,"result", false,-1, 24,0);
    tracep->declBus(c+1188,"ENGINE_INT_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+409,"product", false,-1, 49,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("M7 ");
    tracep->declBus(c+1184,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1185,"ENGINE_FRACT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+401,"a", false,-1, 24,0);
    tracep->declBus(c+402,"b", false,-1, 24,0);
    tracep->declBit(c+613,"rst", false,-1);
    tracep->declBus(c+507,"result", false,-1, 24,0);
    tracep->declBus(c+1188,"ENGINE_INT_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+411,"product", false,-1, 49,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("R0 ");
    tracep->declBus(c+1186,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+613,"rst", false,-1);
    tracep->declBit(c+612,"en", false,-1);
    tracep->declBus(c+413,"in", false,-1, 5,0);
    tracep->declBus(c+396,"out", false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SM ");
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+1187,"rst", false,-1);
    tracep->declBit(c+1174,"finished", false,-1);
    tracep->declBit(c+732,"full_queue", false,-1);
    tracep->declBit(c+610,"distributor_ready", false,-1);
    tracep->declBit(c+613,"init", false,-1);
    tracep->declBit(c+609,"en_pixel_map", false,-1);
    tracep->declBit(c+611,"en_stage_1", false,-1);
    tracep->declBit(c+612,"en_stage_2", false,-1);
    tracep->declBus(c+1190,"INIT", false,-1, 31,0);
    tracep->declBus(c+1191,"CALC_STAGE_1", false,-1, 31,0);
    tracep->declBus(c+1192,"CALC_STAGE_2", false,-1, 31,0);
    tracep->declBus(c+1193,"ESCAPE", false,-1, 31,0);
    tracep->declBus(c+414,"state", false,-1, 1,0);
    tracep->declBus(c+614,"next", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("calc_stage_1 ");
    tracep->declBus(c+1184,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+613,"reset", false,-1);
    tracep->declBit(c+611,"en", false,-1);
    tracep->declBus(c+403,"zr_next", false,-1, 24,0);
    tracep->declBus(c+504,"zi_next", false,-1, 24,0);
    tracep->declBus(c+401,"zr", false,-1, 24,0);
    tracep->declBus(c+402,"zi", false,-1, 24,0);
    tracep->pushNamePrefix("R1 ");
    tracep->declBus(c+1184,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+613,"rst", false,-1);
    tracep->declBit(c+611,"en", false,-1);
    tracep->declBus(c+403,"in", false,-1, 24,0);
    tracep->declBus(c+401,"out", false,-1, 24,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("R2 ");
    tracep->declBus(c+1184,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+613,"rst", false,-1);
    tracep->declBit(c+611,"en", false,-1);
    tracep->declBus(c+504,"in", false,-1, 24,0);
    tracep->declBus(c+402,"out", false,-1, 24,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("calc_stage_2 ");
    tracep->declBus(c+1184,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+613,"reset", false,-1);
    tracep->declBit(c+612,"en", false,-1);
    tracep->declBus(c+505,"zr2_next", false,-1, 24,0);
    tracep->declBus(c+506,"zi2_next", false,-1, 24,0);
    tracep->declBus(c+404,"zr2", false,-1, 24,0);
    tracep->declBus(c+405,"zi2", false,-1, 24,0);
    tracep->pushNamePrefix("R3 ");
    tracep->declBus(c+1184,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+613,"rst", false,-1);
    tracep->declBit(c+612,"en", false,-1);
    tracep->declBus(c+505,"in", false,-1, 24,0);
    tracep->declBus(c+404,"out", false,-1, 24,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("R4 ");
    tracep->declBus(c+1184,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+613,"rst", false,-1);
    tracep->declBit(c+612,"en", false,-1);
    tracep->declBus(c+506,"in", false,-1, 24,0);
    tracep->declBus(c+405,"out", false,-1, 24,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("pixel_map ");
    tracep->declBus(c+1176,"PIXEL_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1184,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1185,"ENGINE_FRACT_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+1187,"reset", false,-1);
    tracep->declBit(c+609,"en", false,-1);
    tracep->declBit(c+610,"distributor_ready", false,-1);
    tracep->declBit(c+732,"full_queue", false,-1);
    tracep->declBus(c+394,"pixel_x_in", false,-1, 9,0);
    tracep->declBus(c+395,"pixel_y_in", false,-1, 9,0);
    tracep->declBus(c+1160,"x_offset", false,-1, 24,0);
    tracep->declBus(c+1161,"y_offset", false,-1, 24,0);
    tracep->declBus(c+399,"real_x", false,-1, 24,0);
    tracep->declBus(c+400,"imag_y", false,-1, 24,0);
    tracep->declBus(c+397,"pixel_x_out", false,-1, 9,0);
    tracep->declBus(c+398,"pixel_y_out", false,-1, 9,0);
    tracep->declBus(c+1194,"scale_factor", false,-1, 24,0);
    tracep->declBus(c+1163,"r_min", false,-1, 24,0);
    tracep->declBus(c+1164,"i_min", false,-1, 24,0);
    tracep->declBus(c+415,"r_gradient", false,-1, 24,0);
    tracep->declBus(c+416,"i_gradient", false,-1, 24,0);
    tracep->declBus(c+417,"pixel_x_fixed", false,-1, 24,0);
    tracep->declBus(c+418,"pixel_y_fixed", false,-1, 24,0);
    tracep->pushNamePrefix("M1 ");
    tracep->declBus(c+1184,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1185,"ENGINE_FRACT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1195,"a", false,-1, 24,0);
    tracep->declBus(c+417,"b", false,-1, 24,0);
    tracep->declBit(c+1187,"rst", false,-1);
    tracep->declBus(c+415,"result", false,-1, 24,0);
    tracep->declBus(c+1188,"ENGINE_INT_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+419,"product", false,-1, 49,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("M2 ");
    tracep->declBus(c+1184,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1185,"ENGINE_FRACT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1195,"a", false,-1, 24,0);
    tracep->declBus(c+418,"b", false,-1, 24,0);
    tracep->declBit(c+1187,"rst", false,-1);
    tracep->declBus(c+416,"result", false,-1, 24,0);
    tracep->declBus(c+1188,"ENGINE_INT_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+421,"product", false,-1, 49,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__genblk1__BRA__11__KET____DOT__engine__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__genblk1__BRA__11__KET____DOT__engine__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1176,"PIXEL_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1184,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1185,"ENGINE_FRACT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1186,"ITERATIONS_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+1187,"reset", false,-1);
    tracep->declBus(c+1158,"iterations_max", false,-1, 5,0);
    tracep->declBus(c+423,"x0_", false,-1, 9,0);
    tracep->declBus(c+424,"y0_", false,-1, 9,0);
    tracep->declBus(c+1159,"zoom", false,-1, 2,0);
    tracep->declBus(c+1160,"x_offset", false,-1, 24,0);
    tracep->declBus(c+1161,"y_offset", false,-1, 24,0);
    tracep->declBit(c+733,"full_queue", false,-1);
    tracep->declBit(c+615,"en_pixel_map", false,-1);
    tracep->declBus(c+425,"iterations", false,-1, 5,0);
    tracep->declBus(c+426,"xpixel", false,-1, 9,0);
    tracep->declBus(c+427,"ypixel", false,-1, 9,0);
    tracep->declBus(c+1188,"ENGINE_INT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+428,"x", false,-1, 24,0);
    tracep->declBus(c+429,"y", false,-1, 24,0);
    tracep->declBit(c+1175,"finished", false,-1);
    tracep->declBit(c+616,"distributor_ready", false,-1);
    tracep->declBus(c+425,"curr_iterations", false,-1, 5,0);
    tracep->declBus(c+430,"zr", false,-1, 24,0);
    tracep->declBus(c+431,"zi", false,-1, 24,0);
    tracep->declBus(c+432,"zr_next", false,-1, 24,0);
    tracep->declBus(c+508,"zi_next", false,-1, 24,0);
    tracep->declBus(c+433,"zr2", false,-1, 24,0);
    tracep->declBus(c+434,"zi2", false,-1, 24,0);
    tracep->declBus(c+509,"zr2_next", false,-1, 24,0);
    tracep->declBus(c+510,"zi2_next", false,-1, 24,0);
    tracep->declBus(c+511,"zrzi", false,-1, 24,0);
    tracep->declBit(c+617,"en_stage_1", false,-1);
    tracep->declBit(c+618,"en_stage_2", false,-1);
    tracep->declBit(c+619,"init", false,-1);
    tracep->declBus(c+435,"distance", false,-1, 24,0);
    tracep->declBus(c+1189,"max_distance", false,-1, 24,0);
    tracep->pushNamePrefix("M5 ");
    tracep->declBus(c+1184,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1185,"ENGINE_FRACT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+430,"a", false,-1, 24,0);
    tracep->declBus(c+430,"b", false,-1, 24,0);
    tracep->declBit(c+619,"rst", false,-1);
    tracep->declBus(c+509,"result", false,-1, 24,0);
    tracep->declBus(c+1188,"ENGINE_INT_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+436,"product", false,-1, 49,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("M6 ");
    tracep->declBus(c+1184,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1185,"ENGINE_FRACT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+431,"a", false,-1, 24,0);
    tracep->declBus(c+431,"b", false,-1, 24,0);
    tracep->declBit(c+619,"rst", false,-1);
    tracep->declBus(c+510,"result", false,-1, 24,0);
    tracep->declBus(c+1188,"ENGINE_INT_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+438,"product", false,-1, 49,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("M7 ");
    tracep->declBus(c+1184,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1185,"ENGINE_FRACT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+430,"a", false,-1, 24,0);
    tracep->declBus(c+431,"b", false,-1, 24,0);
    tracep->declBit(c+619,"rst", false,-1);
    tracep->declBus(c+511,"result", false,-1, 24,0);
    tracep->declBus(c+1188,"ENGINE_INT_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+440,"product", false,-1, 49,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("R0 ");
    tracep->declBus(c+1186,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+619,"rst", false,-1);
    tracep->declBit(c+618,"en", false,-1);
    tracep->declBus(c+442,"in", false,-1, 5,0);
    tracep->declBus(c+425,"out", false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SM ");
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+1187,"rst", false,-1);
    tracep->declBit(c+1175,"finished", false,-1);
    tracep->declBit(c+733,"full_queue", false,-1);
    tracep->declBit(c+616,"distributor_ready", false,-1);
    tracep->declBit(c+619,"init", false,-1);
    tracep->declBit(c+615,"en_pixel_map", false,-1);
    tracep->declBit(c+617,"en_stage_1", false,-1);
    tracep->declBit(c+618,"en_stage_2", false,-1);
    tracep->declBus(c+1190,"INIT", false,-1, 31,0);
    tracep->declBus(c+1191,"CALC_STAGE_1", false,-1, 31,0);
    tracep->declBus(c+1192,"CALC_STAGE_2", false,-1, 31,0);
    tracep->declBus(c+1193,"ESCAPE", false,-1, 31,0);
    tracep->declBus(c+443,"state", false,-1, 1,0);
    tracep->declBus(c+620,"next", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("calc_stage_1 ");
    tracep->declBus(c+1184,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+619,"reset", false,-1);
    tracep->declBit(c+617,"en", false,-1);
    tracep->declBus(c+432,"zr_next", false,-1, 24,0);
    tracep->declBus(c+508,"zi_next", false,-1, 24,0);
    tracep->declBus(c+430,"zr", false,-1, 24,0);
    tracep->declBus(c+431,"zi", false,-1, 24,0);
    tracep->pushNamePrefix("R1 ");
    tracep->declBus(c+1184,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+619,"rst", false,-1);
    tracep->declBit(c+617,"en", false,-1);
    tracep->declBus(c+432,"in", false,-1, 24,0);
    tracep->declBus(c+430,"out", false,-1, 24,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("R2 ");
    tracep->declBus(c+1184,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+619,"rst", false,-1);
    tracep->declBit(c+617,"en", false,-1);
    tracep->declBus(c+508,"in", false,-1, 24,0);
    tracep->declBus(c+431,"out", false,-1, 24,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("calc_stage_2 ");
    tracep->declBus(c+1184,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+619,"reset", false,-1);
    tracep->declBit(c+618,"en", false,-1);
    tracep->declBus(c+509,"zr2_next", false,-1, 24,0);
    tracep->declBus(c+510,"zi2_next", false,-1, 24,0);
    tracep->declBus(c+433,"zr2", false,-1, 24,0);
    tracep->declBus(c+434,"zi2", false,-1, 24,0);
    tracep->pushNamePrefix("R3 ");
    tracep->declBus(c+1184,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+619,"rst", false,-1);
    tracep->declBit(c+618,"en", false,-1);
    tracep->declBus(c+509,"in", false,-1, 24,0);
    tracep->declBus(c+433,"out", false,-1, 24,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("R4 ");
    tracep->declBus(c+1184,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+619,"rst", false,-1);
    tracep->declBit(c+618,"en", false,-1);
    tracep->declBus(c+510,"in", false,-1, 24,0);
    tracep->declBus(c+434,"out", false,-1, 24,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("pixel_map ");
    tracep->declBus(c+1176,"PIXEL_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1184,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1185,"ENGINE_FRACT_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+1187,"reset", false,-1);
    tracep->declBit(c+615,"en", false,-1);
    tracep->declBit(c+616,"distributor_ready", false,-1);
    tracep->declBit(c+733,"full_queue", false,-1);
    tracep->declBus(c+423,"pixel_x_in", false,-1, 9,0);
    tracep->declBus(c+424,"pixel_y_in", false,-1, 9,0);
    tracep->declBus(c+1160,"x_offset", false,-1, 24,0);
    tracep->declBus(c+1161,"y_offset", false,-1, 24,0);
    tracep->declBus(c+428,"real_x", false,-1, 24,0);
    tracep->declBus(c+429,"imag_y", false,-1, 24,0);
    tracep->declBus(c+426,"pixel_x_out", false,-1, 9,0);
    tracep->declBus(c+427,"pixel_y_out", false,-1, 9,0);
    tracep->declBus(c+1194,"scale_factor", false,-1, 24,0);
    tracep->declBus(c+1163,"r_min", false,-1, 24,0);
    tracep->declBus(c+1164,"i_min", false,-1, 24,0);
    tracep->declBus(c+444,"r_gradient", false,-1, 24,0);
    tracep->declBus(c+445,"i_gradient", false,-1, 24,0);
    tracep->declBus(c+446,"pixel_x_fixed", false,-1, 24,0);
    tracep->declBus(c+447,"pixel_y_fixed", false,-1, 24,0);
    tracep->pushNamePrefix("M1 ");
    tracep->declBus(c+1184,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1185,"ENGINE_FRACT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1195,"a", false,-1, 24,0);
    tracep->declBus(c+446,"b", false,-1, 24,0);
    tracep->declBit(c+1187,"rst", false,-1);
    tracep->declBus(c+444,"result", false,-1, 24,0);
    tracep->declBus(c+1188,"ENGINE_INT_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+448,"product", false,-1, 49,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("M2 ");
    tracep->declBus(c+1184,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1185,"ENGINE_FRACT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1195,"a", false,-1, 24,0);
    tracep->declBus(c+447,"b", false,-1, 24,0);
    tracep->declBit(c+1187,"rst", false,-1);
    tracep->declBus(c+445,"result", false,-1, 24,0);
    tracep->declBus(c+1188,"ENGINE_INT_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+450,"product", false,-1, 49,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1176,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1176,"QUEUE_SIZE", false,-1, 31,0);
    tracep->declBus(c+1196,"COUNTER_SIZE", false,-1, 31,0);
    tracep->declBus(c+1177,"RBG_SIZE", false,-1, 31,0);
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+1143,"reset", false,-1);
    tracep->declBit(c+621,"fin_flag", false,-1);
    tracep->declBus(c+669,"colour_i", false,-1, 23,0);
    tracep->declBus(c+670,"xpixel_i", false,-1, 9,0);
    tracep->declBus(c+671,"ypixel_i", false,-1, 9,0);
    tracep->declBus(c+14,"xpixel_check", false,-1, 9,0);
    tracep->declBus(c+15,"ypixel_check", false,-1, 9,0);
    tracep->declBus(c+524,"colour_o", false,-1, 23,0);
    tracep->declBit(c+734,"full_queue", false,-1);
    tracep->declBit(c+735,"en", false,-1);
    tracep->declBit(c+736,"match", false,-1);
    for (int i = 0; i < 10; ++i) {
        tracep->declBus(c+737+i*1,"colour_queue", true,(i+0), 23,0);
    }
    for (int i = 0; i < 10; ++i) {
        tracep->declBus(c+747+i*1,"xqueue", true,(i+0), 9,0);
    }
    for (int i = 0; i < 10; ++i) {
        tracep->declBus(c+757+i*1,"yqueue", true,(i+0), 9,0);
    }
    tracep->declBus(c+767,"counter", false,-1, 3,0);
    tracep->declBus(c+672,"prev_xpixel", false,-1, 9,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+452,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+525,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1176,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1176,"QUEUE_SIZE", false,-1, 31,0);
    tracep->declBus(c+1196,"COUNTER_SIZE", false,-1, 31,0);
    tracep->declBus(c+1177,"RBG_SIZE", false,-1, 31,0);
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+1143,"reset", false,-1);
    tracep->declBit(c+622,"fin_flag", false,-1);
    tracep->declBus(c+673,"colour_i", false,-1, 23,0);
    tracep->declBus(c+674,"xpixel_i", false,-1, 9,0);
    tracep->declBus(c+675,"ypixel_i", false,-1, 9,0);
    tracep->declBus(c+14,"xpixel_check", false,-1, 9,0);
    tracep->declBus(c+15,"ypixel_check", false,-1, 9,0);
    tracep->declBus(c+526,"colour_o", false,-1, 23,0);
    tracep->declBit(c+768,"full_queue", false,-1);
    tracep->declBit(c+769,"en", false,-1);
    tracep->declBit(c+770,"match", false,-1);
    for (int i = 0; i < 10; ++i) {
        tracep->declBus(c+771+i*1,"colour_queue", true,(i+0), 23,0);
    }
    for (int i = 0; i < 10; ++i) {
        tracep->declBus(c+781+i*1,"xqueue", true,(i+0), 9,0);
    }
    for (int i = 0; i < 10; ++i) {
        tracep->declBus(c+791+i*1,"yqueue", true,(i+0), 9,0);
    }
    tracep->declBus(c+801,"counter", false,-1, 3,0);
    tracep->declBus(c+676,"prev_xpixel", false,-1, 9,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+2,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+453,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+527,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1176,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1176,"QUEUE_SIZE", false,-1, 31,0);
    tracep->declBus(c+1196,"COUNTER_SIZE", false,-1, 31,0);
    tracep->declBus(c+1177,"RBG_SIZE", false,-1, 31,0);
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+1143,"reset", false,-1);
    tracep->declBit(c+623,"fin_flag", false,-1);
    tracep->declBus(c+677,"colour_i", false,-1, 23,0);
    tracep->declBus(c+678,"xpixel_i", false,-1, 9,0);
    tracep->declBus(c+679,"ypixel_i", false,-1, 9,0);
    tracep->declBus(c+14,"xpixel_check", false,-1, 9,0);
    tracep->declBus(c+15,"ypixel_check", false,-1, 9,0);
    tracep->declBus(c+528,"colour_o", false,-1, 23,0);
    tracep->declBit(c+802,"full_queue", false,-1);
    tracep->declBit(c+803,"en", false,-1);
    tracep->declBit(c+804,"match", false,-1);
    for (int i = 0; i < 10; ++i) {
        tracep->declBus(c+805+i*1,"colour_queue", true,(i+0), 23,0);
    }
    for (int i = 0; i < 10; ++i) {
        tracep->declBus(c+815+i*1,"xqueue", true,(i+0), 9,0);
    }
    for (int i = 0; i < 10; ++i) {
        tracep->declBus(c+825+i*1,"yqueue", true,(i+0), 9,0);
    }
    tracep->declBus(c+835,"counter", false,-1, 3,0);
    tracep->declBus(c+680,"prev_xpixel", false,-1, 9,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+3,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+454,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+529,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1176,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1176,"QUEUE_SIZE", false,-1, 31,0);
    tracep->declBus(c+1196,"COUNTER_SIZE", false,-1, 31,0);
    tracep->declBus(c+1177,"RBG_SIZE", false,-1, 31,0);
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+1143,"reset", false,-1);
    tracep->declBit(c+624,"fin_flag", false,-1);
    tracep->declBus(c+681,"colour_i", false,-1, 23,0);
    tracep->declBus(c+682,"xpixel_i", false,-1, 9,0);
    tracep->declBus(c+683,"ypixel_i", false,-1, 9,0);
    tracep->declBus(c+14,"xpixel_check", false,-1, 9,0);
    tracep->declBus(c+15,"ypixel_check", false,-1, 9,0);
    tracep->declBus(c+530,"colour_o", false,-1, 23,0);
    tracep->declBit(c+836,"full_queue", false,-1);
    tracep->declBit(c+837,"en", false,-1);
    tracep->declBit(c+838,"match", false,-1);
    for (int i = 0; i < 10; ++i) {
        tracep->declBus(c+839+i*1,"colour_queue", true,(i+0), 23,0);
    }
    for (int i = 0; i < 10; ++i) {
        tracep->declBus(c+849+i*1,"xqueue", true,(i+0), 9,0);
    }
    for (int i = 0; i < 10; ++i) {
        tracep->declBus(c+859+i*1,"yqueue", true,(i+0), 9,0);
    }
    tracep->declBus(c+869,"counter", false,-1, 3,0);
    tracep->declBus(c+684,"prev_xpixel", false,-1, 9,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+4,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+455,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+531,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1176,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1176,"QUEUE_SIZE", false,-1, 31,0);
    tracep->declBus(c+1196,"COUNTER_SIZE", false,-1, 31,0);
    tracep->declBus(c+1177,"RBG_SIZE", false,-1, 31,0);
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+1143,"reset", false,-1);
    tracep->declBit(c+625,"fin_flag", false,-1);
    tracep->declBus(c+685,"colour_i", false,-1, 23,0);
    tracep->declBus(c+686,"xpixel_i", false,-1, 9,0);
    tracep->declBus(c+687,"ypixel_i", false,-1, 9,0);
    tracep->declBus(c+14,"xpixel_check", false,-1, 9,0);
    tracep->declBus(c+15,"ypixel_check", false,-1, 9,0);
    tracep->declBus(c+532,"colour_o", false,-1, 23,0);
    tracep->declBit(c+870,"full_queue", false,-1);
    tracep->declBit(c+871,"en", false,-1);
    tracep->declBit(c+872,"match", false,-1);
    for (int i = 0; i < 10; ++i) {
        tracep->declBus(c+873+i*1,"colour_queue", true,(i+0), 23,0);
    }
    for (int i = 0; i < 10; ++i) {
        tracep->declBus(c+883+i*1,"xqueue", true,(i+0), 9,0);
    }
    for (int i = 0; i < 10; ++i) {
        tracep->declBus(c+893+i*1,"yqueue", true,(i+0), 9,0);
    }
    tracep->declBus(c+903,"counter", false,-1, 3,0);
    tracep->declBus(c+688,"prev_xpixel", false,-1, 9,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+5,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+456,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+533,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1176,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1176,"QUEUE_SIZE", false,-1, 31,0);
    tracep->declBus(c+1196,"COUNTER_SIZE", false,-1, 31,0);
    tracep->declBus(c+1177,"RBG_SIZE", false,-1, 31,0);
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+1143,"reset", false,-1);
    tracep->declBit(c+626,"fin_flag", false,-1);
    tracep->declBus(c+689,"colour_i", false,-1, 23,0);
    tracep->declBus(c+690,"xpixel_i", false,-1, 9,0);
    tracep->declBus(c+691,"ypixel_i", false,-1, 9,0);
    tracep->declBus(c+14,"xpixel_check", false,-1, 9,0);
    tracep->declBus(c+15,"ypixel_check", false,-1, 9,0);
    tracep->declBus(c+534,"colour_o", false,-1, 23,0);
    tracep->declBit(c+904,"full_queue", false,-1);
    tracep->declBit(c+905,"en", false,-1);
    tracep->declBit(c+906,"match", false,-1);
    for (int i = 0; i < 10; ++i) {
        tracep->declBus(c+907+i*1,"colour_queue", true,(i+0), 23,0);
    }
    for (int i = 0; i < 10; ++i) {
        tracep->declBus(c+917+i*1,"xqueue", true,(i+0), 9,0);
    }
    for (int i = 0; i < 10; ++i) {
        tracep->declBus(c+927+i*1,"yqueue", true,(i+0), 9,0);
    }
    tracep->declBus(c+937,"counter", false,-1, 3,0);
    tracep->declBus(c+692,"prev_xpixel", false,-1, 9,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+6,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+457,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+535,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__genblk1__BRA__6__KET____DOT__queue_block__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__genblk1__BRA__6__KET____DOT__queue_block__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1176,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1176,"QUEUE_SIZE", false,-1, 31,0);
    tracep->declBus(c+1196,"COUNTER_SIZE", false,-1, 31,0);
    tracep->declBus(c+1177,"RBG_SIZE", false,-1, 31,0);
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+1143,"reset", false,-1);
    tracep->declBit(c+627,"fin_flag", false,-1);
    tracep->declBus(c+693,"colour_i", false,-1, 23,0);
    tracep->declBus(c+694,"xpixel_i", false,-1, 9,0);
    tracep->declBus(c+695,"ypixel_i", false,-1, 9,0);
    tracep->declBus(c+14,"xpixel_check", false,-1, 9,0);
    tracep->declBus(c+15,"ypixel_check", false,-1, 9,0);
    tracep->declBus(c+536,"colour_o", false,-1, 23,0);
    tracep->declBit(c+938,"full_queue", false,-1);
    tracep->declBit(c+939,"en", false,-1);
    tracep->declBit(c+940,"match", false,-1);
    for (int i = 0; i < 10; ++i) {
        tracep->declBus(c+941+i*1,"colour_queue", true,(i+0), 23,0);
    }
    for (int i = 0; i < 10; ++i) {
        tracep->declBus(c+951+i*1,"xqueue", true,(i+0), 9,0);
    }
    for (int i = 0; i < 10; ++i) {
        tracep->declBus(c+961+i*1,"yqueue", true,(i+0), 9,0);
    }
    tracep->declBus(c+971,"counter", false,-1, 3,0);
    tracep->declBus(c+696,"prev_xpixel", false,-1, 9,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+7,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+458,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+537,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__genblk1__BRA__7__KET____DOT__queue_block__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__genblk1__BRA__7__KET____DOT__queue_block__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1176,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1176,"QUEUE_SIZE", false,-1, 31,0);
    tracep->declBus(c+1196,"COUNTER_SIZE", false,-1, 31,0);
    tracep->declBus(c+1177,"RBG_SIZE", false,-1, 31,0);
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+1143,"reset", false,-1);
    tracep->declBit(c+628,"fin_flag", false,-1);
    tracep->declBus(c+697,"colour_i", false,-1, 23,0);
    tracep->declBus(c+698,"xpixel_i", false,-1, 9,0);
    tracep->declBus(c+699,"ypixel_i", false,-1, 9,0);
    tracep->declBus(c+14,"xpixel_check", false,-1, 9,0);
    tracep->declBus(c+15,"ypixel_check", false,-1, 9,0);
    tracep->declBus(c+538,"colour_o", false,-1, 23,0);
    tracep->declBit(c+972,"full_queue", false,-1);
    tracep->declBit(c+973,"en", false,-1);
    tracep->declBit(c+974,"match", false,-1);
    for (int i = 0; i < 10; ++i) {
        tracep->declBus(c+975+i*1,"colour_queue", true,(i+0), 23,0);
    }
    for (int i = 0; i < 10; ++i) {
        tracep->declBus(c+985+i*1,"xqueue", true,(i+0), 9,0);
    }
    for (int i = 0; i < 10; ++i) {
        tracep->declBus(c+995+i*1,"yqueue", true,(i+0), 9,0);
    }
    tracep->declBus(c+1005,"counter", false,-1, 3,0);
    tracep->declBus(c+700,"prev_xpixel", false,-1, 9,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+8,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+459,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+539,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__genblk1__BRA__8__KET____DOT__queue_block__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__genblk1__BRA__8__KET____DOT__queue_block__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1176,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1176,"QUEUE_SIZE", false,-1, 31,0);
    tracep->declBus(c+1196,"COUNTER_SIZE", false,-1, 31,0);
    tracep->declBus(c+1177,"RBG_SIZE", false,-1, 31,0);
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+1143,"reset", false,-1);
    tracep->declBit(c+629,"fin_flag", false,-1);
    tracep->declBus(c+701,"colour_i", false,-1, 23,0);
    tracep->declBus(c+702,"xpixel_i", false,-1, 9,0);
    tracep->declBus(c+703,"ypixel_i", false,-1, 9,0);
    tracep->declBus(c+14,"xpixel_check", false,-1, 9,0);
    tracep->declBus(c+15,"ypixel_check", false,-1, 9,0);
    tracep->declBus(c+540,"colour_o", false,-1, 23,0);
    tracep->declBit(c+1006,"full_queue", false,-1);
    tracep->declBit(c+1007,"en", false,-1);
    tracep->declBit(c+1008,"match", false,-1);
    for (int i = 0; i < 10; ++i) {
        tracep->declBus(c+1009+i*1,"colour_queue", true,(i+0), 23,0);
    }
    for (int i = 0; i < 10; ++i) {
        tracep->declBus(c+1019+i*1,"xqueue", true,(i+0), 9,0);
    }
    for (int i = 0; i < 10; ++i) {
        tracep->declBus(c+1029+i*1,"yqueue", true,(i+0), 9,0);
    }
    tracep->declBus(c+1039,"counter", false,-1, 3,0);
    tracep->declBus(c+704,"prev_xpixel", false,-1, 9,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+9,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+460,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+541,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__genblk1__BRA__9__KET____DOT__queue_block__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__genblk1__BRA__9__KET____DOT__queue_block__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1176,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1176,"QUEUE_SIZE", false,-1, 31,0);
    tracep->declBus(c+1196,"COUNTER_SIZE", false,-1, 31,0);
    tracep->declBus(c+1177,"RBG_SIZE", false,-1, 31,0);
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+1143,"reset", false,-1);
    tracep->declBit(c+630,"fin_flag", false,-1);
    tracep->declBus(c+705,"colour_i", false,-1, 23,0);
    tracep->declBus(c+706,"xpixel_i", false,-1, 9,0);
    tracep->declBus(c+707,"ypixel_i", false,-1, 9,0);
    tracep->declBus(c+14,"xpixel_check", false,-1, 9,0);
    tracep->declBus(c+15,"ypixel_check", false,-1, 9,0);
    tracep->declBus(c+542,"colour_o", false,-1, 23,0);
    tracep->declBit(c+1040,"full_queue", false,-1);
    tracep->declBit(c+1041,"en", false,-1);
    tracep->declBit(c+1042,"match", false,-1);
    for (int i = 0; i < 10; ++i) {
        tracep->declBus(c+1043+i*1,"colour_queue", true,(i+0), 23,0);
    }
    for (int i = 0; i < 10; ++i) {
        tracep->declBus(c+1053+i*1,"xqueue", true,(i+0), 9,0);
    }
    for (int i = 0; i < 10; ++i) {
        tracep->declBus(c+1063+i*1,"yqueue", true,(i+0), 9,0);
    }
    tracep->declBus(c+1073,"counter", false,-1, 3,0);
    tracep->declBus(c+708,"prev_xpixel", false,-1, 9,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+10,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+461,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+543,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__genblk1__BRA__10__KET____DOT__queue_block__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__genblk1__BRA__10__KET____DOT__queue_block__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1176,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1176,"QUEUE_SIZE", false,-1, 31,0);
    tracep->declBus(c+1196,"COUNTER_SIZE", false,-1, 31,0);
    tracep->declBus(c+1177,"RBG_SIZE", false,-1, 31,0);
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+1143,"reset", false,-1);
    tracep->declBit(c+631,"fin_flag", false,-1);
    tracep->declBus(c+709,"colour_i", false,-1, 23,0);
    tracep->declBus(c+710,"xpixel_i", false,-1, 9,0);
    tracep->declBus(c+711,"ypixel_i", false,-1, 9,0);
    tracep->declBus(c+14,"xpixel_check", false,-1, 9,0);
    tracep->declBus(c+15,"ypixel_check", false,-1, 9,0);
    tracep->declBus(c+544,"colour_o", false,-1, 23,0);
    tracep->declBit(c+1074,"full_queue", false,-1);
    tracep->declBit(c+1075,"en", false,-1);
    tracep->declBit(c+1076,"match", false,-1);
    for (int i = 0; i < 10; ++i) {
        tracep->declBus(c+1077+i*1,"colour_queue", true,(i+0), 23,0);
    }
    for (int i = 0; i < 10; ++i) {
        tracep->declBus(c+1087+i*1,"xqueue", true,(i+0), 9,0);
    }
    for (int i = 0; i < 10; ++i) {
        tracep->declBus(c+1097+i*1,"yqueue", true,(i+0), 9,0);
    }
    tracep->declBus(c+1107,"counter", false,-1, 3,0);
    tracep->declBus(c+712,"prev_xpixel", false,-1, 9,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+11,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+462,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+545,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__genblk1__BRA__11__KET____DOT__queue_block__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__genblk1__BRA__11__KET____DOT__queue_block__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1176,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1176,"QUEUE_SIZE", false,-1, 31,0);
    tracep->declBus(c+1196,"COUNTER_SIZE", false,-1, 31,0);
    tracep->declBus(c+1177,"RBG_SIZE", false,-1, 31,0);
    tracep->declBit(c+1142,"clk", false,-1);
    tracep->declBit(c+1143,"reset", false,-1);
    tracep->declBit(c+632,"fin_flag", false,-1);
    tracep->declBus(c+713,"colour_i", false,-1, 23,0);
    tracep->declBus(c+714,"xpixel_i", false,-1, 9,0);
    tracep->declBus(c+715,"ypixel_i", false,-1, 9,0);
    tracep->declBus(c+14,"xpixel_check", false,-1, 9,0);
    tracep->declBus(c+15,"ypixel_check", false,-1, 9,0);
    tracep->declBus(c+546,"colour_o", false,-1, 23,0);
    tracep->declBit(c+1108,"full_queue", false,-1);
    tracep->declBit(c+1109,"en", false,-1);
    tracep->declBit(c+1110,"match", false,-1);
    for (int i = 0; i < 10; ++i) {
        tracep->declBus(c+1111+i*1,"colour_queue", true,(i+0), 23,0);
    }
    for (int i = 0; i < 10; ++i) {
        tracep->declBus(c+1121+i*1,"xqueue", true,(i+0), 9,0);
    }
    for (int i = 0; i < 10; ++i) {
        tracep->declBus(c+1131+i*1,"yqueue", true,(i+0), 9,0);
    }
    tracep->declBus(c+1141,"counter", false,-1, 3,0);
    tracep->declBus(c+716,"prev_xpixel", false,-1, 9,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+12,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+463,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+547,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
    tracep->pushNamePrefix("top ");
    tracep->pushNamePrefix("genblk1[0] ");
    tracep->pushNamePrefix("engine ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("queue_block ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[10] ");
    tracep->pushNamePrefix("engine ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__genblk1__BRA__10__KET____DOT__engine__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("queue_block ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__genblk1__BRA__10__KET____DOT__queue_block__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[11] ");
    tracep->pushNamePrefix("engine ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__genblk1__BRA__11__KET____DOT__engine__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("queue_block ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__genblk1__BRA__11__KET____DOT__queue_block__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[1] ");
    tracep->pushNamePrefix("engine ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("queue_block ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[2] ");
    tracep->pushNamePrefix("engine ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("queue_block ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[3] ");
    tracep->pushNamePrefix("engine ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("queue_block ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__genblk1__BRA__3__KET____DOT__queue_block__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[4] ");
    tracep->pushNamePrefix("engine ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("queue_block ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__genblk1__BRA__4__KET____DOT__queue_block__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[5] ");
    tracep->pushNamePrefix("engine ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("queue_block ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__genblk1__BRA__5__KET____DOT__queue_block__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[6] ");
    tracep->pushNamePrefix("engine ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__genblk1__BRA__6__KET____DOT__engine__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("queue_block ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__genblk1__BRA__6__KET____DOT__queue_block__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[7] ");
    tracep->pushNamePrefix("engine ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__genblk1__BRA__7__KET____DOT__engine__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("queue_block ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__genblk1__BRA__7__KET____DOT__queue_block__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[8] ");
    tracep->pushNamePrefix("engine ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__genblk1__BRA__8__KET____DOT__engine__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("queue_block ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__genblk1__BRA__8__KET____DOT__queue_block__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[9] ");
    tracep->pushNamePrefix("engine ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__genblk1__BRA__9__KET____DOT__engine__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("queue_block ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__genblk1__BRA__9__KET____DOT__queue_block__0(vlSelf, tracep);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__queue_block.__PVT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+2,(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__queue_block.__PVT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+3,(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__queue_block.__PVT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+4,(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__queue_block.__PVT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+5,(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__queue_block.__PVT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+6,(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__queue_block.__PVT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+7,(vlSymsp->TOP__top__DOT__genblk1__BRA__6__KET____DOT__queue_block.__PVT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+8,(vlSymsp->TOP__top__DOT__genblk1__BRA__7__KET____DOT__queue_block.__PVT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+9,(vlSymsp->TOP__top__DOT__genblk1__BRA__8__KET____DOT__queue_block.__PVT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+10,(vlSymsp->TOP__top__DOT__genblk1__BRA__9__KET____DOT__queue_block.__PVT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+11,(vlSymsp->TOP__top__DOT__genblk1__BRA__10__KET____DOT__queue_block.__PVT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+12,(vlSymsp->TOP__top__DOT__genblk1__BRA__11__KET____DOT__queue_block.__PVT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+13,(vlSelf->top__DOT__colour_o_wire),24);
    bufp->fullSData(oldp+14,(vlSelf->top__DOT__xpixel_wire),10);
    bufp->fullSData(oldp+15,(vlSelf->top__DOT__ypixel_wire),10);
    bufp->fullSData(oldp+16,(vlSelf->top__DOT__x[0]),10);
    bufp->fullSData(oldp+17,(vlSelf->top__DOT__x[1]),10);
    bufp->fullSData(oldp+18,(vlSelf->top__DOT__x[2]),10);
    bufp->fullSData(oldp+19,(vlSelf->top__DOT__x[3]),10);
    bufp->fullSData(oldp+20,(vlSelf->top__DOT__x[4]),10);
    bufp->fullSData(oldp+21,(vlSelf->top__DOT__x[5]),10);
    bufp->fullSData(oldp+22,(vlSelf->top__DOT__x[6]),10);
    bufp->fullSData(oldp+23,(vlSelf->top__DOT__x[7]),10);
    bufp->fullSData(oldp+24,(vlSelf->top__DOT__x[8]),10);
    bufp->fullSData(oldp+25,(vlSelf->top__DOT__x[9]),10);
    bufp->fullSData(oldp+26,(vlSelf->top__DOT__x[10]),10);
    bufp->fullSData(oldp+27,(vlSelf->top__DOT__x[11]),10);
    bufp->fullSData(oldp+28,(vlSelf->top__DOT__y[0]),10);
    bufp->fullSData(oldp+29,(vlSelf->top__DOT__y[1]),10);
    bufp->fullSData(oldp+30,(vlSelf->top__DOT__y[2]),10);
    bufp->fullSData(oldp+31,(vlSelf->top__DOT__y[3]),10);
    bufp->fullSData(oldp+32,(vlSelf->top__DOT__y[4]),10);
    bufp->fullSData(oldp+33,(vlSelf->top__DOT__y[5]),10);
    bufp->fullSData(oldp+34,(vlSelf->top__DOT__y[6]),10);
    bufp->fullSData(oldp+35,(vlSelf->top__DOT__y[7]),10);
    bufp->fullSData(oldp+36,(vlSelf->top__DOT__y[8]),10);
    bufp->fullSData(oldp+37,(vlSelf->top__DOT__y[9]),10);
    bufp->fullSData(oldp+38,(vlSelf->top__DOT__y[10]),10);
    bufp->fullSData(oldp+39,(vlSelf->top__DOT__y[11]),10);
    bufp->fullSData(oldp+40,(vlSelf->top__DOT__iterations_bus[0]),10);
    bufp->fullSData(oldp+41,(vlSelf->top__DOT__iterations_bus[1]),10);
    bufp->fullSData(oldp+42,(vlSelf->top__DOT__iterations_bus[2]),10);
    bufp->fullSData(oldp+43,(vlSelf->top__DOT__iterations_bus[3]),10);
    bufp->fullSData(oldp+44,(vlSelf->top__DOT__iterations_bus[4]),10);
    bufp->fullSData(oldp+45,(vlSelf->top__DOT__iterations_bus[5]),10);
    bufp->fullSData(oldp+46,(vlSelf->top__DOT__iterations_bus[6]),10);
    bufp->fullSData(oldp+47,(vlSelf->top__DOT__iterations_bus[7]),10);
    bufp->fullSData(oldp+48,(vlSelf->top__DOT__iterations_bus[8]),10);
    bufp->fullSData(oldp+49,(vlSelf->top__DOT__iterations_bus[9]),10);
    bufp->fullSData(oldp+50,(vlSelf->top__DOT__iterations_bus[10]),10);
    bufp->fullSData(oldp+51,(vlSelf->top__DOT__iterations_bus[11]),10);
    bufp->fullSData(oldp+52,(vlSelf->top__DOT__combinator_block__DOT__xpixel),10);
    bufp->fullSData(oldp+53,(vlSelf->top__DOT__combinator_block__DOT__ypixel),10);
    bufp->fullSData(oldp+54,(vlSelf->top__DOT____Vcellout__distributor__x[0]),10);
    bufp->fullSData(oldp+55,(vlSelf->top__DOT____Vcellout__distributor__x[1]),10);
    bufp->fullSData(oldp+56,(vlSelf->top__DOT____Vcellout__distributor__x[2]),10);
    bufp->fullSData(oldp+57,(vlSelf->top__DOT____Vcellout__distributor__x[3]),10);
    bufp->fullSData(oldp+58,(vlSelf->top__DOT____Vcellout__distributor__x[4]),10);
    bufp->fullSData(oldp+59,(vlSelf->top__DOT____Vcellout__distributor__x[5]),10);
    bufp->fullSData(oldp+60,(vlSelf->top__DOT____Vcellout__distributor__x[6]),10);
    bufp->fullSData(oldp+61,(vlSelf->top__DOT____Vcellout__distributor__x[7]),10);
    bufp->fullSData(oldp+62,(vlSelf->top__DOT____Vcellout__distributor__x[8]),10);
    bufp->fullSData(oldp+63,(vlSelf->top__DOT____Vcellout__distributor__x[9]),10);
    bufp->fullSData(oldp+64,(vlSelf->top__DOT____Vcellout__distributor__x[10]),10);
    bufp->fullSData(oldp+65,(vlSelf->top__DOT____Vcellout__distributor__x[11]),10);
    bufp->fullSData(oldp+66,(vlSelf->top__DOT____Vcellout__distributor__y[0]),10);
    bufp->fullSData(oldp+67,(vlSelf->top__DOT____Vcellout__distributor__y[1]),10);
    bufp->fullSData(oldp+68,(vlSelf->top__DOT____Vcellout__distributor__y[2]),10);
    bufp->fullSData(oldp+69,(vlSelf->top__DOT____Vcellout__distributor__y[3]),10);
    bufp->fullSData(oldp+70,(vlSelf->top__DOT____Vcellout__distributor__y[4]),10);
    bufp->fullSData(oldp+71,(vlSelf->top__DOT____Vcellout__distributor__y[5]),10);
    bufp->fullSData(oldp+72,(vlSelf->top__DOT____Vcellout__distributor__y[6]),10);
    bufp->fullSData(oldp+73,(vlSelf->top__DOT____Vcellout__distributor__y[7]),10);
    bufp->fullSData(oldp+74,(vlSelf->top__DOT____Vcellout__distributor__y[8]),10);
    bufp->fullSData(oldp+75,(vlSelf->top__DOT____Vcellout__distributor__y[9]),10);
    bufp->fullSData(oldp+76,(vlSelf->top__DOT____Vcellout__distributor__y[10]),10);
    bufp->fullSData(oldp+77,(vlSelf->top__DOT____Vcellout__distributor__y[11]),10);
    bufp->fullSData(oldp+78,(vlSelf->top__DOT__distributor__DOT__x0),10);
    bufp->fullSData(oldp+79,(vlSelf->top__DOT__distributor__DOT__y0),10);
    bufp->fullSData(oldp+80,(vlSelf->top__DOT____Vcellinp__lut_rom__iterations[0]),10);
    bufp->fullSData(oldp+81,(vlSelf->top__DOT____Vcellinp__lut_rom__iterations[1]),10);
    bufp->fullSData(oldp+82,(vlSelf->top__DOT____Vcellinp__lut_rom__iterations[2]),10);
    bufp->fullSData(oldp+83,(vlSelf->top__DOT____Vcellinp__lut_rom__iterations[3]),10);
    bufp->fullSData(oldp+84,(vlSelf->top__DOT____Vcellinp__lut_rom__iterations[4]),10);
    bufp->fullSData(oldp+85,(vlSelf->top__DOT____Vcellinp__lut_rom__iterations[5]),10);
    bufp->fullSData(oldp+86,(vlSelf->top__DOT____Vcellinp__lut_rom__iterations[6]),10);
    bufp->fullSData(oldp+87,(vlSelf->top__DOT____Vcellinp__lut_rom__iterations[7]),10);
    bufp->fullSData(oldp+88,(vlSelf->top__DOT____Vcellinp__lut_rom__iterations[8]),10);
    bufp->fullSData(oldp+89,(vlSelf->top__DOT____Vcellinp__lut_rom__iterations[9]),10);
    bufp->fullSData(oldp+90,(vlSelf->top__DOT____Vcellinp__lut_rom__iterations[10]),10);
    bufp->fullSData(oldp+91,(vlSelf->top__DOT____Vcellinp__lut_rom__iterations[11]),10);
    bufp->fullIData(oldp+92,(vlSelf->top__DOT____Vcellout__lut_rom__rgb_val[0]),24);
    bufp->fullIData(oldp+93,(vlSelf->top__DOT____Vcellout__lut_rom__rgb_val[1]),24);
    bufp->fullIData(oldp+94,(vlSelf->top__DOT____Vcellout__lut_rom__rgb_val[2]),24);
    bufp->fullIData(oldp+95,(vlSelf->top__DOT____Vcellout__lut_rom__rgb_val[3]),24);
    bufp->fullIData(oldp+96,(vlSelf->top__DOT____Vcellout__lut_rom__rgb_val[4]),24);
    bufp->fullIData(oldp+97,(vlSelf->top__DOT____Vcellout__lut_rom__rgb_val[5]),24);
    bufp->fullIData(oldp+98,(vlSelf->top__DOT____Vcellout__lut_rom__rgb_val[6]),24);
    bufp->fullIData(oldp+99,(vlSelf->top__DOT____Vcellout__lut_rom__rgb_val[7]),24);
    bufp->fullIData(oldp+100,(vlSelf->top__DOT____Vcellout__lut_rom__rgb_val[8]),24);
    bufp->fullIData(oldp+101,(vlSelf->top__DOT____Vcellout__lut_rom__rgb_val[9]),24);
    bufp->fullIData(oldp+102,(vlSelf->top__DOT____Vcellout__lut_rom__rgb_val[10]),24);
    bufp->fullIData(oldp+103,(vlSelf->top__DOT____Vcellout__lut_rom__rgb_val[11]),24);
    bufp->fullSData(oldp+104,(vlSelf->top__DOT__x[0U]),10);
    bufp->fullSData(oldp+105,(vlSelf->top__DOT__y[0U]),10);
    bufp->fullCData(oldp+106,(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__curr_iterations),6);
    bufp->fullSData(oldp+107,(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.xpixel),10);
    bufp->fullSData(oldp+108,(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.ypixel),10);
    bufp->fullIData(oldp+109,(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__x),25);
    bufp->fullIData(oldp+110,(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__y),25);
    bufp->fullIData(oldp+111,(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__zr),25);
    bufp->fullIData(oldp+112,(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__zi),25);
    bufp->fullIData(oldp+113,((0x1ffffffU & ((vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__zr2 
                                              - vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__zi2) 
                                             + vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__x))),25);
    bufp->fullIData(oldp+114,(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__zr2),25);
    bufp->fullIData(oldp+115,(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__zi2),25);
    bufp->fullIData(oldp+116,(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__distance),25);
    bufp->fullQData(oldp+117,((0x3ffffffffffffULL & 
                               VL_MULS_QQQ(50, (0x3ffffffffffffULL 
                                                & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__zr)), 
                                           (0x3ffffffffffffULL 
                                            & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__zr))))),50);
    bufp->fullQData(oldp+119,((0x3ffffffffffffULL & 
                               VL_MULS_QQQ(50, (0x3ffffffffffffULL 
                                                & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__zi)), 
                                           (0x3ffffffffffffULL 
                                            & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__zi))))),50);
    bufp->fullQData(oldp+121,((0x3ffffffffffffULL & 
                               VL_MULS_QQQ(50, (0x3ffffffffffffULL 
                                                & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__zr)), 
                                           (0x3ffffffffffffULL 
                                            & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__zi))))),50);
    bufp->fullCData(oldp+123,((0x3fU & ((IData)(1U) 
                                        + (IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__curr_iterations)))),6);
    bufp->fullCData(oldp+124,(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__SM__DOT__state),2);
    bufp->fullIData(oldp+125,((0x1ffffffU & (IData)(
                                                    (0x3fffffffULL 
                                                     & (VL_MULS_QQQ(50, 0x199aULL, 
                                                                    (0x3ffffffffffffULL 
                                                                     & VL_EXTENDS_QI(50,25, 
                                                                                (0x1ffffffU 
                                                                                & (vlSelf->top__DOT__x
                                                                                [0U] 
                                                                                << 0xeU))))) 
                                                        >> 0x14U))))),25);
    bufp->fullIData(oldp+126,((0x1ffffffU & (IData)(
                                                    (0x3fffffffULL 
                                                     & (VL_MULS_QQQ(50, 0x199aULL, 
                                                                    (0x3ffffffffffffULL 
                                                                     & VL_EXTENDS_QI(50,25, 
                                                                                (0x1ffffffU 
                                                                                & (vlSelf->top__DOT__y
                                                                                [0U] 
                                                                                << 0xeU))))) 
                                                        >> 0x14U))))),25);
    bufp->fullIData(oldp+127,((0x1ffffffU & (vlSelf->top__DOT__x
                                             [0U] << 0xeU))),25);
    bufp->fullIData(oldp+128,((0x1ffffffU & (vlSelf->top__DOT__y
                                             [0U] << 0xeU))),25);
    bufp->fullQData(oldp+129,((0x3ffffffffffffULL & 
                               VL_MULS_QQQ(50, 0x199aULL, 
                                           (0x3ffffffffffffULL 
                                            & VL_EXTENDS_QI(50,25, 
                                                            (0x1ffffffU 
                                                             & (vlSelf->top__DOT__x
                                                                [0U] 
                                                                << 0xeU))))))),50);
    bufp->fullQData(oldp+131,((0x3ffffffffffffULL & 
                               VL_MULS_QQQ(50, 0x199aULL, 
                                           (0x3ffffffffffffULL 
                                            & VL_EXTENDS_QI(50,25, 
                                                            (0x1ffffffU 
                                                             & (vlSelf->top__DOT__y
                                                                [0U] 
                                                                << 0xeU))))))),50);
    bufp->fullSData(oldp+133,(vlSelf->top__DOT__x[1U]),10);
    bufp->fullSData(oldp+134,(vlSelf->top__DOT__y[1U]),10);
    bufp->fullCData(oldp+135,(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__curr_iterations),6);
    bufp->fullSData(oldp+136,(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.xpixel),10);
    bufp->fullSData(oldp+137,(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.ypixel),10);
    bufp->fullIData(oldp+138,(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__x),25);
    bufp->fullIData(oldp+139,(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__y),25);
    bufp->fullIData(oldp+140,(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__zr),25);
    bufp->fullIData(oldp+141,(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__zi),25);
    bufp->fullIData(oldp+142,((0x1ffffffU & ((vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__zr2 
                                              - vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__zi2) 
                                             + vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__x))),25);
    bufp->fullIData(oldp+143,(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__zr2),25);
    bufp->fullIData(oldp+144,(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__zi2),25);
    bufp->fullIData(oldp+145,(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__distance),25);
    bufp->fullQData(oldp+146,((0x3ffffffffffffULL & 
                               VL_MULS_QQQ(50, (0x3ffffffffffffULL 
                                                & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__zr)), 
                                           (0x3ffffffffffffULL 
                                            & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__zr))))),50);
    bufp->fullQData(oldp+148,((0x3ffffffffffffULL & 
                               VL_MULS_QQQ(50, (0x3ffffffffffffULL 
                                                & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__zi)), 
                                           (0x3ffffffffffffULL 
                                            & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__zi))))),50);
    bufp->fullQData(oldp+150,((0x3ffffffffffffULL & 
                               VL_MULS_QQQ(50, (0x3ffffffffffffULL 
                                                & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__zr)), 
                                           (0x3ffffffffffffULL 
                                            & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__zi))))),50);
    bufp->fullCData(oldp+152,((0x3fU & ((IData)(1U) 
                                        + (IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__curr_iterations)))),6);
    bufp->fullCData(oldp+153,(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__SM__DOT__state),2);
    bufp->fullIData(oldp+154,((0x1ffffffU & (IData)(
                                                    (0x3fffffffULL 
                                                     & (VL_MULS_QQQ(50, 0x199aULL, 
                                                                    (0x3ffffffffffffULL 
                                                                     & VL_EXTENDS_QI(50,25, 
                                                                                (0x1ffffffU 
                                                                                & (vlSelf->top__DOT__x
                                                                                [1U] 
                                                                                << 0xeU))))) 
                                                        >> 0x14U))))),25);
    bufp->fullIData(oldp+155,((0x1ffffffU & (IData)(
                                                    (0x3fffffffULL 
                                                     & (VL_MULS_QQQ(50, 0x199aULL, 
                                                                    (0x3ffffffffffffULL 
                                                                     & VL_EXTENDS_QI(50,25, 
                                                                                (0x1ffffffU 
                                                                                & (vlSelf->top__DOT__y
                                                                                [1U] 
                                                                                << 0xeU))))) 
                                                        >> 0x14U))))),25);
    bufp->fullIData(oldp+156,((0x1ffffffU & (vlSelf->top__DOT__x
                                             [1U] << 0xeU))),25);
    bufp->fullIData(oldp+157,((0x1ffffffU & (vlSelf->top__DOT__y
                                             [1U] << 0xeU))),25);
    bufp->fullQData(oldp+158,((0x3ffffffffffffULL & 
                               VL_MULS_QQQ(50, 0x199aULL, 
                                           (0x3ffffffffffffULL 
                                            & VL_EXTENDS_QI(50,25, 
                                                            (0x1ffffffU 
                                                             & (vlSelf->top__DOT__x
                                                                [1U] 
                                                                << 0xeU))))))),50);
    bufp->fullQData(oldp+160,((0x3ffffffffffffULL & 
                               VL_MULS_QQQ(50, 0x199aULL, 
                                           (0x3ffffffffffffULL 
                                            & VL_EXTENDS_QI(50,25, 
                                                            (0x1ffffffU 
                                                             & (vlSelf->top__DOT__y
                                                                [1U] 
                                                                << 0xeU))))))),50);
    bufp->fullSData(oldp+162,(vlSelf->top__DOT__x[2U]),10);
    bufp->fullSData(oldp+163,(vlSelf->top__DOT__y[2U]),10);
    bufp->fullCData(oldp+164,(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__curr_iterations),6);
    bufp->fullSData(oldp+165,(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.xpixel),10);
    bufp->fullSData(oldp+166,(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.ypixel),10);
    bufp->fullIData(oldp+167,(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__x),25);
    bufp->fullIData(oldp+168,(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__y),25);
    bufp->fullIData(oldp+169,(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__zr),25);
    bufp->fullIData(oldp+170,(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__zi),25);
    bufp->fullIData(oldp+171,((0x1ffffffU & ((vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__zr2 
                                              - vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__zi2) 
                                             + vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__x))),25);
    bufp->fullIData(oldp+172,(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__zr2),25);
    bufp->fullIData(oldp+173,(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__zi2),25);
    bufp->fullIData(oldp+174,(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__distance),25);
    bufp->fullQData(oldp+175,((0x3ffffffffffffULL & 
                               VL_MULS_QQQ(50, (0x3ffffffffffffULL 
                                                & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__zr)), 
                                           (0x3ffffffffffffULL 
                                            & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__zr))))),50);
    bufp->fullQData(oldp+177,((0x3ffffffffffffULL & 
                               VL_MULS_QQQ(50, (0x3ffffffffffffULL 
                                                & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__zi)), 
                                           (0x3ffffffffffffULL 
                                            & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__zi))))),50);
    bufp->fullQData(oldp+179,((0x3ffffffffffffULL & 
                               VL_MULS_QQQ(50, (0x3ffffffffffffULL 
                                                & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__zr)), 
                                           (0x3ffffffffffffULL 
                                            & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__zi))))),50);
    bufp->fullCData(oldp+181,((0x3fU & ((IData)(1U) 
                                        + (IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__curr_iterations)))),6);
    bufp->fullCData(oldp+182,(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__SM__DOT__state),2);
    bufp->fullIData(oldp+183,((0x1ffffffU & (IData)(
                                                    (0x3fffffffULL 
                                                     & (VL_MULS_QQQ(50, 0x199aULL, 
                                                                    (0x3ffffffffffffULL 
                                                                     & VL_EXTENDS_QI(50,25, 
                                                                                (0x1ffffffU 
                                                                                & (vlSelf->top__DOT__x
                                                                                [2U] 
                                                                                << 0xeU))))) 
                                                        >> 0x14U))))),25);
    bufp->fullIData(oldp+184,((0x1ffffffU & (IData)(
                                                    (0x3fffffffULL 
                                                     & (VL_MULS_QQQ(50, 0x199aULL, 
                                                                    (0x3ffffffffffffULL 
                                                                     & VL_EXTENDS_QI(50,25, 
                                                                                (0x1ffffffU 
                                                                                & (vlSelf->top__DOT__y
                                                                                [2U] 
                                                                                << 0xeU))))) 
                                                        >> 0x14U))))),25);
    bufp->fullIData(oldp+185,((0x1ffffffU & (vlSelf->top__DOT__x
                                             [2U] << 0xeU))),25);
    bufp->fullIData(oldp+186,((0x1ffffffU & (vlSelf->top__DOT__y
                                             [2U] << 0xeU))),25);
    bufp->fullQData(oldp+187,((0x3ffffffffffffULL & 
                               VL_MULS_QQQ(50, 0x199aULL, 
                                           (0x3ffffffffffffULL 
                                            & VL_EXTENDS_QI(50,25, 
                                                            (0x1ffffffU 
                                                             & (vlSelf->top__DOT__x
                                                                [2U] 
                                                                << 0xeU))))))),50);
    bufp->fullQData(oldp+189,((0x3ffffffffffffULL & 
                               VL_MULS_QQQ(50, 0x199aULL, 
                                           (0x3ffffffffffffULL 
                                            & VL_EXTENDS_QI(50,25, 
                                                            (0x1ffffffU 
                                                             & (vlSelf->top__DOT__y
                                                                [2U] 
                                                                << 0xeU))))))),50);
    bufp->fullSData(oldp+191,(vlSelf->top__DOT__x[3U]),10);
    bufp->fullSData(oldp+192,(vlSelf->top__DOT__y[3U]),10);
    bufp->fullCData(oldp+193,(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__curr_iterations),6);
    bufp->fullSData(oldp+194,(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.xpixel),10);
    bufp->fullSData(oldp+195,(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.ypixel),10);
    bufp->fullIData(oldp+196,(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__x),25);
    bufp->fullIData(oldp+197,(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__y),25);
    bufp->fullIData(oldp+198,(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__zr),25);
    bufp->fullIData(oldp+199,(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__zi),25);
    bufp->fullIData(oldp+200,((0x1ffffffU & ((vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__zr2 
                                              - vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__zi2) 
                                             + vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__x))),25);
    bufp->fullIData(oldp+201,(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__zr2),25);
    bufp->fullIData(oldp+202,(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__zi2),25);
    bufp->fullIData(oldp+203,(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__distance),25);
    bufp->fullQData(oldp+204,((0x3ffffffffffffULL & 
                               VL_MULS_QQQ(50, (0x3ffffffffffffULL 
                                                & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__zr)), 
                                           (0x3ffffffffffffULL 
                                            & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__zr))))),50);
    bufp->fullQData(oldp+206,((0x3ffffffffffffULL & 
                               VL_MULS_QQQ(50, (0x3ffffffffffffULL 
                                                & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__zi)), 
                                           (0x3ffffffffffffULL 
                                            & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__zi))))),50);
    bufp->fullQData(oldp+208,((0x3ffffffffffffULL & 
                               VL_MULS_QQQ(50, (0x3ffffffffffffULL 
                                                & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__zr)), 
                                           (0x3ffffffffffffULL 
                                            & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__zi))))),50);
    bufp->fullCData(oldp+210,((0x3fU & ((IData)(1U) 
                                        + (IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__curr_iterations)))),6);
    bufp->fullCData(oldp+211,(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__SM__DOT__state),2);
    bufp->fullIData(oldp+212,((0x1ffffffU & (IData)(
                                                    (0x3fffffffULL 
                                                     & (VL_MULS_QQQ(50, 0x199aULL, 
                                                                    (0x3ffffffffffffULL 
                                                                     & VL_EXTENDS_QI(50,25, 
                                                                                (0x1ffffffU 
                                                                                & (vlSelf->top__DOT__x
                                                                                [3U] 
                                                                                << 0xeU))))) 
                                                        >> 0x14U))))),25);
    bufp->fullIData(oldp+213,((0x1ffffffU & (IData)(
                                                    (0x3fffffffULL 
                                                     & (VL_MULS_QQQ(50, 0x199aULL, 
                                                                    (0x3ffffffffffffULL 
                                                                     & VL_EXTENDS_QI(50,25, 
                                                                                (0x1ffffffU 
                                                                                & (vlSelf->top__DOT__y
                                                                                [3U] 
                                                                                << 0xeU))))) 
                                                        >> 0x14U))))),25);
    bufp->fullIData(oldp+214,((0x1ffffffU & (vlSelf->top__DOT__x
                                             [3U] << 0xeU))),25);
    bufp->fullIData(oldp+215,((0x1ffffffU & (vlSelf->top__DOT__y
                                             [3U] << 0xeU))),25);
    bufp->fullQData(oldp+216,((0x3ffffffffffffULL & 
                               VL_MULS_QQQ(50, 0x199aULL, 
                                           (0x3ffffffffffffULL 
                                            & VL_EXTENDS_QI(50,25, 
                                                            (0x1ffffffU 
                                                             & (vlSelf->top__DOT__x
                                                                [3U] 
                                                                << 0xeU))))))),50);
    bufp->fullQData(oldp+218,((0x3ffffffffffffULL & 
                               VL_MULS_QQQ(50, 0x199aULL, 
                                           (0x3ffffffffffffULL 
                                            & VL_EXTENDS_QI(50,25, 
                                                            (0x1ffffffU 
                                                             & (vlSelf->top__DOT__y
                                                                [3U] 
                                                                << 0xeU))))))),50);
    bufp->fullSData(oldp+220,(vlSelf->top__DOT__x[4U]),10);
    bufp->fullSData(oldp+221,(vlSelf->top__DOT__y[4U]),10);
    bufp->fullCData(oldp+222,(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__curr_iterations),6);
    bufp->fullSData(oldp+223,(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.xpixel),10);
    bufp->fullSData(oldp+224,(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.ypixel),10);
    bufp->fullIData(oldp+225,(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__x),25);
    bufp->fullIData(oldp+226,(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__y),25);
    bufp->fullIData(oldp+227,(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__zr),25);
    bufp->fullIData(oldp+228,(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__zi),25);
    bufp->fullIData(oldp+229,((0x1ffffffU & ((vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__zr2 
                                              - vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__zi2) 
                                             + vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__x))),25);
    bufp->fullIData(oldp+230,(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__zr2),25);
    bufp->fullIData(oldp+231,(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__zi2),25);
    bufp->fullIData(oldp+232,(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__distance),25);
    bufp->fullQData(oldp+233,((0x3ffffffffffffULL & 
                               VL_MULS_QQQ(50, (0x3ffffffffffffULL 
                                                & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__zr)), 
                                           (0x3ffffffffffffULL 
                                            & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__zr))))),50);
    bufp->fullQData(oldp+235,((0x3ffffffffffffULL & 
                               VL_MULS_QQQ(50, (0x3ffffffffffffULL 
                                                & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__zi)), 
                                           (0x3ffffffffffffULL 
                                            & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__zi))))),50);
    bufp->fullQData(oldp+237,((0x3ffffffffffffULL & 
                               VL_MULS_QQQ(50, (0x3ffffffffffffULL 
                                                & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__zr)), 
                                           (0x3ffffffffffffULL 
                                            & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__zi))))),50);
    bufp->fullCData(oldp+239,((0x3fU & ((IData)(1U) 
                                        + (IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__curr_iterations)))),6);
    bufp->fullCData(oldp+240,(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__SM__DOT__state),2);
    bufp->fullIData(oldp+241,((0x1ffffffU & (IData)(
                                                    (0x3fffffffULL 
                                                     & (VL_MULS_QQQ(50, 0x199aULL, 
                                                                    (0x3ffffffffffffULL 
                                                                     & VL_EXTENDS_QI(50,25, 
                                                                                (0x1ffffffU 
                                                                                & (vlSelf->top__DOT__x
                                                                                [4U] 
                                                                                << 0xeU))))) 
                                                        >> 0x14U))))),25);
    bufp->fullIData(oldp+242,((0x1ffffffU & (IData)(
                                                    (0x3fffffffULL 
                                                     & (VL_MULS_QQQ(50, 0x199aULL, 
                                                                    (0x3ffffffffffffULL 
                                                                     & VL_EXTENDS_QI(50,25, 
                                                                                (0x1ffffffU 
                                                                                & (vlSelf->top__DOT__y
                                                                                [4U] 
                                                                                << 0xeU))))) 
                                                        >> 0x14U))))),25);
    bufp->fullIData(oldp+243,((0x1ffffffU & (vlSelf->top__DOT__x
                                             [4U] << 0xeU))),25);
    bufp->fullIData(oldp+244,((0x1ffffffU & (vlSelf->top__DOT__y
                                             [4U] << 0xeU))),25);
    bufp->fullQData(oldp+245,((0x3ffffffffffffULL & 
                               VL_MULS_QQQ(50, 0x199aULL, 
                                           (0x3ffffffffffffULL 
                                            & VL_EXTENDS_QI(50,25, 
                                                            (0x1ffffffU 
                                                             & (vlSelf->top__DOT__x
                                                                [4U] 
                                                                << 0xeU))))))),50);
    bufp->fullQData(oldp+247,((0x3ffffffffffffULL & 
                               VL_MULS_QQQ(50, 0x199aULL, 
                                           (0x3ffffffffffffULL 
                                            & VL_EXTENDS_QI(50,25, 
                                                            (0x1ffffffU 
                                                             & (vlSelf->top__DOT__y
                                                                [4U] 
                                                                << 0xeU))))))),50);
    bufp->fullSData(oldp+249,(vlSelf->top__DOT__x[5U]),10);
    bufp->fullSData(oldp+250,(vlSelf->top__DOT__y[5U]),10);
    bufp->fullCData(oldp+251,(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__curr_iterations),6);
    bufp->fullSData(oldp+252,(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.xpixel),10);
    bufp->fullSData(oldp+253,(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.ypixel),10);
    bufp->fullIData(oldp+254,(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__x),25);
    bufp->fullIData(oldp+255,(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__y),25);
    bufp->fullIData(oldp+256,(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__zr),25);
    bufp->fullIData(oldp+257,(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__zi),25);
    bufp->fullIData(oldp+258,((0x1ffffffU & ((vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__zr2 
                                              - vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__zi2) 
                                             + vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__x))),25);
    bufp->fullIData(oldp+259,(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__zr2),25);
    bufp->fullIData(oldp+260,(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__zi2),25);
    bufp->fullIData(oldp+261,(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__distance),25);
    bufp->fullQData(oldp+262,((0x3ffffffffffffULL & 
                               VL_MULS_QQQ(50, (0x3ffffffffffffULL 
                                                & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__zr)), 
                                           (0x3ffffffffffffULL 
                                            & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__zr))))),50);
    bufp->fullQData(oldp+264,((0x3ffffffffffffULL & 
                               VL_MULS_QQQ(50, (0x3ffffffffffffULL 
                                                & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__zi)), 
                                           (0x3ffffffffffffULL 
                                            & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__zi))))),50);
    bufp->fullQData(oldp+266,((0x3ffffffffffffULL & 
                               VL_MULS_QQQ(50, (0x3ffffffffffffULL 
                                                & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__zr)), 
                                           (0x3ffffffffffffULL 
                                            & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__zi))))),50);
    bufp->fullCData(oldp+268,((0x3fU & ((IData)(1U) 
                                        + (IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__curr_iterations)))),6);
    bufp->fullCData(oldp+269,(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__SM__DOT__state),2);
    bufp->fullIData(oldp+270,((0x1ffffffU & (IData)(
                                                    (0x3fffffffULL 
                                                     & (VL_MULS_QQQ(50, 0x199aULL, 
                                                                    (0x3ffffffffffffULL 
                                                                     & VL_EXTENDS_QI(50,25, 
                                                                                (0x1ffffffU 
                                                                                & (vlSelf->top__DOT__x
                                                                                [5U] 
                                                                                << 0xeU))))) 
                                                        >> 0x14U))))),25);
    bufp->fullIData(oldp+271,((0x1ffffffU & (IData)(
                                                    (0x3fffffffULL 
                                                     & (VL_MULS_QQQ(50, 0x199aULL, 
                                                                    (0x3ffffffffffffULL 
                                                                     & VL_EXTENDS_QI(50,25, 
                                                                                (0x1ffffffU 
                                                                                & (vlSelf->top__DOT__y
                                                                                [5U] 
                                                                                << 0xeU))))) 
                                                        >> 0x14U))))),25);
    bufp->fullIData(oldp+272,((0x1ffffffU & (vlSelf->top__DOT__x
                                             [5U] << 0xeU))),25);
    bufp->fullIData(oldp+273,((0x1ffffffU & (vlSelf->top__DOT__y
                                             [5U] << 0xeU))),25);
    bufp->fullQData(oldp+274,((0x3ffffffffffffULL & 
                               VL_MULS_QQQ(50, 0x199aULL, 
                                           (0x3ffffffffffffULL 
                                            & VL_EXTENDS_QI(50,25, 
                                                            (0x1ffffffU 
                                                             & (vlSelf->top__DOT__x
                                                                [5U] 
                                                                << 0xeU))))))),50);
    bufp->fullQData(oldp+276,((0x3ffffffffffffULL & 
                               VL_MULS_QQQ(50, 0x199aULL, 
                                           (0x3ffffffffffffULL 
                                            & VL_EXTENDS_QI(50,25, 
                                                            (0x1ffffffU 
                                                             & (vlSelf->top__DOT__y
                                                                [5U] 
                                                                << 0xeU))))))),50);
    bufp->fullSData(oldp+278,(vlSelf->top__DOT__x[6U]),10);
    bufp->fullSData(oldp+279,(vlSelf->top__DOT__y[6U]),10);
    bufp->fullCData(oldp+280,(vlSymsp->TOP__top__DOT__genblk1__BRA__6__KET____DOT__engine.__PVT__curr_iterations),6);
    bufp->fullSData(oldp+281,(vlSymsp->TOP__top__DOT__genblk1__BRA__6__KET____DOT__engine.xpixel),10);
    bufp->fullSData(oldp+282,(vlSymsp->TOP__top__DOT__genblk1__BRA__6__KET____DOT__engine.ypixel),10);
    bufp->fullIData(oldp+283,(vlSymsp->TOP__top__DOT__genblk1__BRA__6__KET____DOT__engine.__PVT__x),25);
    bufp->fullIData(oldp+284,(vlSymsp->TOP__top__DOT__genblk1__BRA__6__KET____DOT__engine.__PVT__y),25);
    bufp->fullIData(oldp+285,(vlSymsp->TOP__top__DOT__genblk1__BRA__6__KET____DOT__engine.__PVT__zr),25);
    bufp->fullIData(oldp+286,(vlSymsp->TOP__top__DOT__genblk1__BRA__6__KET____DOT__engine.__PVT__zi),25);
    bufp->fullIData(oldp+287,((0x1ffffffU & ((vlSymsp->TOP__top__DOT__genblk1__BRA__6__KET____DOT__engine.__PVT__zr2 
                                              - vlSymsp->TOP__top__DOT__genblk1__BRA__6__KET____DOT__engine.__PVT__zi2) 
                                             + vlSymsp->TOP__top__DOT__genblk1__BRA__6__KET____DOT__engine.__PVT__x))),25);
    bufp->fullIData(oldp+288,(vlSymsp->TOP__top__DOT__genblk1__BRA__6__KET____DOT__engine.__PVT__zr2),25);
    bufp->fullIData(oldp+289,(vlSymsp->TOP__top__DOT__genblk1__BRA__6__KET____DOT__engine.__PVT__zi2),25);
    bufp->fullIData(oldp+290,(vlSymsp->TOP__top__DOT__genblk1__BRA__6__KET____DOT__engine.__PVT__distance),25);
    bufp->fullQData(oldp+291,((0x3ffffffffffffULL & 
                               VL_MULS_QQQ(50, (0x3ffffffffffffULL 
                                                & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__6__KET____DOT__engine.__PVT__zr)), 
                                           (0x3ffffffffffffULL 
                                            & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__6__KET____DOT__engine.__PVT__zr))))),50);
    bufp->fullQData(oldp+293,((0x3ffffffffffffULL & 
                               VL_MULS_QQQ(50, (0x3ffffffffffffULL 
                                                & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__6__KET____DOT__engine.__PVT__zi)), 
                                           (0x3ffffffffffffULL 
                                            & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__6__KET____DOT__engine.__PVT__zi))))),50);
    bufp->fullQData(oldp+295,((0x3ffffffffffffULL & 
                               VL_MULS_QQQ(50, (0x3ffffffffffffULL 
                                                & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__6__KET____DOT__engine.__PVT__zr)), 
                                           (0x3ffffffffffffULL 
                                            & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__6__KET____DOT__engine.__PVT__zi))))),50);
    bufp->fullCData(oldp+297,((0x3fU & ((IData)(1U) 
                                        + (IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__6__KET____DOT__engine.__PVT__curr_iterations)))),6);
    bufp->fullCData(oldp+298,(vlSymsp->TOP__top__DOT__genblk1__BRA__6__KET____DOT__engine.__PVT__SM__DOT__state),2);
    bufp->fullIData(oldp+299,((0x1ffffffU & (IData)(
                                                    (0x3fffffffULL 
                                                     & (VL_MULS_QQQ(50, 0x199aULL, 
                                                                    (0x3ffffffffffffULL 
                                                                     & VL_EXTENDS_QI(50,25, 
                                                                                (0x1ffffffU 
                                                                                & (vlSelf->top__DOT__x
                                                                                [6U] 
                                                                                << 0xeU))))) 
                                                        >> 0x14U))))),25);
    bufp->fullIData(oldp+300,((0x1ffffffU & (IData)(
                                                    (0x3fffffffULL 
                                                     & (VL_MULS_QQQ(50, 0x199aULL, 
                                                                    (0x3ffffffffffffULL 
                                                                     & VL_EXTENDS_QI(50,25, 
                                                                                (0x1ffffffU 
                                                                                & (vlSelf->top__DOT__y
                                                                                [6U] 
                                                                                << 0xeU))))) 
                                                        >> 0x14U))))),25);
    bufp->fullIData(oldp+301,((0x1ffffffU & (vlSelf->top__DOT__x
                                             [6U] << 0xeU))),25);
    bufp->fullIData(oldp+302,((0x1ffffffU & (vlSelf->top__DOT__y
                                             [6U] << 0xeU))),25);
    bufp->fullQData(oldp+303,((0x3ffffffffffffULL & 
                               VL_MULS_QQQ(50, 0x199aULL, 
                                           (0x3ffffffffffffULL 
                                            & VL_EXTENDS_QI(50,25, 
                                                            (0x1ffffffU 
                                                             & (vlSelf->top__DOT__x
                                                                [6U] 
                                                                << 0xeU))))))),50);
    bufp->fullQData(oldp+305,((0x3ffffffffffffULL & 
                               VL_MULS_QQQ(50, 0x199aULL, 
                                           (0x3ffffffffffffULL 
                                            & VL_EXTENDS_QI(50,25, 
                                                            (0x1ffffffU 
                                                             & (vlSelf->top__DOT__y
                                                                [6U] 
                                                                << 0xeU))))))),50);
    bufp->fullSData(oldp+307,(vlSelf->top__DOT__x[7U]),10);
    bufp->fullSData(oldp+308,(vlSelf->top__DOT__y[7U]),10);
    bufp->fullCData(oldp+309,(vlSymsp->TOP__top__DOT__genblk1__BRA__7__KET____DOT__engine.__PVT__curr_iterations),6);
    bufp->fullSData(oldp+310,(vlSymsp->TOP__top__DOT__genblk1__BRA__7__KET____DOT__engine.xpixel),10);
    bufp->fullSData(oldp+311,(vlSymsp->TOP__top__DOT__genblk1__BRA__7__KET____DOT__engine.ypixel),10);
    bufp->fullIData(oldp+312,(vlSymsp->TOP__top__DOT__genblk1__BRA__7__KET____DOT__engine.__PVT__x),25);
    bufp->fullIData(oldp+313,(vlSymsp->TOP__top__DOT__genblk1__BRA__7__KET____DOT__engine.__PVT__y),25);
    bufp->fullIData(oldp+314,(vlSymsp->TOP__top__DOT__genblk1__BRA__7__KET____DOT__engine.__PVT__zr),25);
    bufp->fullIData(oldp+315,(vlSymsp->TOP__top__DOT__genblk1__BRA__7__KET____DOT__engine.__PVT__zi),25);
    bufp->fullIData(oldp+316,((0x1ffffffU & ((vlSymsp->TOP__top__DOT__genblk1__BRA__7__KET____DOT__engine.__PVT__zr2 
                                              - vlSymsp->TOP__top__DOT__genblk1__BRA__7__KET____DOT__engine.__PVT__zi2) 
                                             + vlSymsp->TOP__top__DOT__genblk1__BRA__7__KET____DOT__engine.__PVT__x))),25);
    bufp->fullIData(oldp+317,(vlSymsp->TOP__top__DOT__genblk1__BRA__7__KET____DOT__engine.__PVT__zr2),25);
    bufp->fullIData(oldp+318,(vlSymsp->TOP__top__DOT__genblk1__BRA__7__KET____DOT__engine.__PVT__zi2),25);
    bufp->fullIData(oldp+319,(vlSymsp->TOP__top__DOT__genblk1__BRA__7__KET____DOT__engine.__PVT__distance),25);
    bufp->fullQData(oldp+320,((0x3ffffffffffffULL & 
                               VL_MULS_QQQ(50, (0x3ffffffffffffULL 
                                                & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__7__KET____DOT__engine.__PVT__zr)), 
                                           (0x3ffffffffffffULL 
                                            & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__7__KET____DOT__engine.__PVT__zr))))),50);
    bufp->fullQData(oldp+322,((0x3ffffffffffffULL & 
                               VL_MULS_QQQ(50, (0x3ffffffffffffULL 
                                                & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__7__KET____DOT__engine.__PVT__zi)), 
                                           (0x3ffffffffffffULL 
                                            & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__7__KET____DOT__engine.__PVT__zi))))),50);
    bufp->fullQData(oldp+324,((0x3ffffffffffffULL & 
                               VL_MULS_QQQ(50, (0x3ffffffffffffULL 
                                                & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__7__KET____DOT__engine.__PVT__zr)), 
                                           (0x3ffffffffffffULL 
                                            & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__7__KET____DOT__engine.__PVT__zi))))),50);
    bufp->fullCData(oldp+326,((0x3fU & ((IData)(1U) 
                                        + (IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__7__KET____DOT__engine.__PVT__curr_iterations)))),6);
    bufp->fullCData(oldp+327,(vlSymsp->TOP__top__DOT__genblk1__BRA__7__KET____DOT__engine.__PVT__SM__DOT__state),2);
    bufp->fullIData(oldp+328,((0x1ffffffU & (IData)(
                                                    (0x3fffffffULL 
                                                     & (VL_MULS_QQQ(50, 0x199aULL, 
                                                                    (0x3ffffffffffffULL 
                                                                     & VL_EXTENDS_QI(50,25, 
                                                                                (0x1ffffffU 
                                                                                & (vlSelf->top__DOT__x
                                                                                [7U] 
                                                                                << 0xeU))))) 
                                                        >> 0x14U))))),25);
    bufp->fullIData(oldp+329,((0x1ffffffU & (IData)(
                                                    (0x3fffffffULL 
                                                     & (VL_MULS_QQQ(50, 0x199aULL, 
                                                                    (0x3ffffffffffffULL 
                                                                     & VL_EXTENDS_QI(50,25, 
                                                                                (0x1ffffffU 
                                                                                & (vlSelf->top__DOT__y
                                                                                [7U] 
                                                                                << 0xeU))))) 
                                                        >> 0x14U))))),25);
    bufp->fullIData(oldp+330,((0x1ffffffU & (vlSelf->top__DOT__x
                                             [7U] << 0xeU))),25);
    bufp->fullIData(oldp+331,((0x1ffffffU & (vlSelf->top__DOT__y
                                             [7U] << 0xeU))),25);
    bufp->fullQData(oldp+332,((0x3ffffffffffffULL & 
                               VL_MULS_QQQ(50, 0x199aULL, 
                                           (0x3ffffffffffffULL 
                                            & VL_EXTENDS_QI(50,25, 
                                                            (0x1ffffffU 
                                                             & (vlSelf->top__DOT__x
                                                                [7U] 
                                                                << 0xeU))))))),50);
    bufp->fullQData(oldp+334,((0x3ffffffffffffULL & 
                               VL_MULS_QQQ(50, 0x199aULL, 
                                           (0x3ffffffffffffULL 
                                            & VL_EXTENDS_QI(50,25, 
                                                            (0x1ffffffU 
                                                             & (vlSelf->top__DOT__y
                                                                [7U] 
                                                                << 0xeU))))))),50);
    bufp->fullSData(oldp+336,(vlSelf->top__DOT__x[8U]),10);
    bufp->fullSData(oldp+337,(vlSelf->top__DOT__y[8U]),10);
    bufp->fullCData(oldp+338,(vlSymsp->TOP__top__DOT__genblk1__BRA__8__KET____DOT__engine.__PVT__curr_iterations),6);
    bufp->fullSData(oldp+339,(vlSymsp->TOP__top__DOT__genblk1__BRA__8__KET____DOT__engine.xpixel),10);
    bufp->fullSData(oldp+340,(vlSymsp->TOP__top__DOT__genblk1__BRA__8__KET____DOT__engine.ypixel),10);
    bufp->fullIData(oldp+341,(vlSymsp->TOP__top__DOT__genblk1__BRA__8__KET____DOT__engine.__PVT__x),25);
    bufp->fullIData(oldp+342,(vlSymsp->TOP__top__DOT__genblk1__BRA__8__KET____DOT__engine.__PVT__y),25);
    bufp->fullIData(oldp+343,(vlSymsp->TOP__top__DOT__genblk1__BRA__8__KET____DOT__engine.__PVT__zr),25);
    bufp->fullIData(oldp+344,(vlSymsp->TOP__top__DOT__genblk1__BRA__8__KET____DOT__engine.__PVT__zi),25);
    bufp->fullIData(oldp+345,((0x1ffffffU & ((vlSymsp->TOP__top__DOT__genblk1__BRA__8__KET____DOT__engine.__PVT__zr2 
                                              - vlSymsp->TOP__top__DOT__genblk1__BRA__8__KET____DOT__engine.__PVT__zi2) 
                                             + vlSymsp->TOP__top__DOT__genblk1__BRA__8__KET____DOT__engine.__PVT__x))),25);
    bufp->fullIData(oldp+346,(vlSymsp->TOP__top__DOT__genblk1__BRA__8__KET____DOT__engine.__PVT__zr2),25);
    bufp->fullIData(oldp+347,(vlSymsp->TOP__top__DOT__genblk1__BRA__8__KET____DOT__engine.__PVT__zi2),25);
    bufp->fullIData(oldp+348,(vlSymsp->TOP__top__DOT__genblk1__BRA__8__KET____DOT__engine.__PVT__distance),25);
    bufp->fullQData(oldp+349,((0x3ffffffffffffULL & 
                               VL_MULS_QQQ(50, (0x3ffffffffffffULL 
                                                & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__8__KET____DOT__engine.__PVT__zr)), 
                                           (0x3ffffffffffffULL 
                                            & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__8__KET____DOT__engine.__PVT__zr))))),50);
    bufp->fullQData(oldp+351,((0x3ffffffffffffULL & 
                               VL_MULS_QQQ(50, (0x3ffffffffffffULL 
                                                & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__8__KET____DOT__engine.__PVT__zi)), 
                                           (0x3ffffffffffffULL 
                                            & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__8__KET____DOT__engine.__PVT__zi))))),50);
    bufp->fullQData(oldp+353,((0x3ffffffffffffULL & 
                               VL_MULS_QQQ(50, (0x3ffffffffffffULL 
                                                & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__8__KET____DOT__engine.__PVT__zr)), 
                                           (0x3ffffffffffffULL 
                                            & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__8__KET____DOT__engine.__PVT__zi))))),50);
    bufp->fullCData(oldp+355,((0x3fU & ((IData)(1U) 
                                        + (IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__8__KET____DOT__engine.__PVT__curr_iterations)))),6);
    bufp->fullCData(oldp+356,(vlSymsp->TOP__top__DOT__genblk1__BRA__8__KET____DOT__engine.__PVT__SM__DOT__state),2);
    bufp->fullIData(oldp+357,((0x1ffffffU & (IData)(
                                                    (0x3fffffffULL 
                                                     & (VL_MULS_QQQ(50, 0x199aULL, 
                                                                    (0x3ffffffffffffULL 
                                                                     & VL_EXTENDS_QI(50,25, 
                                                                                (0x1ffffffU 
                                                                                & (vlSelf->top__DOT__x
                                                                                [8U] 
                                                                                << 0xeU))))) 
                                                        >> 0x14U))))),25);
    bufp->fullIData(oldp+358,((0x1ffffffU & (IData)(
                                                    (0x3fffffffULL 
                                                     & (VL_MULS_QQQ(50, 0x199aULL, 
                                                                    (0x3ffffffffffffULL 
                                                                     & VL_EXTENDS_QI(50,25, 
                                                                                (0x1ffffffU 
                                                                                & (vlSelf->top__DOT__y
                                                                                [8U] 
                                                                                << 0xeU))))) 
                                                        >> 0x14U))))),25);
    bufp->fullIData(oldp+359,((0x1ffffffU & (vlSelf->top__DOT__x
                                             [8U] << 0xeU))),25);
    bufp->fullIData(oldp+360,((0x1ffffffU & (vlSelf->top__DOT__y
                                             [8U] << 0xeU))),25);
    bufp->fullQData(oldp+361,((0x3ffffffffffffULL & 
                               VL_MULS_QQQ(50, 0x199aULL, 
                                           (0x3ffffffffffffULL 
                                            & VL_EXTENDS_QI(50,25, 
                                                            (0x1ffffffU 
                                                             & (vlSelf->top__DOT__x
                                                                [8U] 
                                                                << 0xeU))))))),50);
    bufp->fullQData(oldp+363,((0x3ffffffffffffULL & 
                               VL_MULS_QQQ(50, 0x199aULL, 
                                           (0x3ffffffffffffULL 
                                            & VL_EXTENDS_QI(50,25, 
                                                            (0x1ffffffU 
                                                             & (vlSelf->top__DOT__y
                                                                [8U] 
                                                                << 0xeU))))))),50);
    bufp->fullSData(oldp+365,(vlSelf->top__DOT__x[9U]),10);
    bufp->fullSData(oldp+366,(vlSelf->top__DOT__y[9U]),10);
    bufp->fullCData(oldp+367,(vlSymsp->TOP__top__DOT__genblk1__BRA__9__KET____DOT__engine.__PVT__curr_iterations),6);
    bufp->fullSData(oldp+368,(vlSymsp->TOP__top__DOT__genblk1__BRA__9__KET____DOT__engine.xpixel),10);
    bufp->fullSData(oldp+369,(vlSymsp->TOP__top__DOT__genblk1__BRA__9__KET____DOT__engine.ypixel),10);
    bufp->fullIData(oldp+370,(vlSymsp->TOP__top__DOT__genblk1__BRA__9__KET____DOT__engine.__PVT__x),25);
    bufp->fullIData(oldp+371,(vlSymsp->TOP__top__DOT__genblk1__BRA__9__KET____DOT__engine.__PVT__y),25);
    bufp->fullIData(oldp+372,(vlSymsp->TOP__top__DOT__genblk1__BRA__9__KET____DOT__engine.__PVT__zr),25);
    bufp->fullIData(oldp+373,(vlSymsp->TOP__top__DOT__genblk1__BRA__9__KET____DOT__engine.__PVT__zi),25);
    bufp->fullIData(oldp+374,((0x1ffffffU & ((vlSymsp->TOP__top__DOT__genblk1__BRA__9__KET____DOT__engine.__PVT__zr2 
                                              - vlSymsp->TOP__top__DOT__genblk1__BRA__9__KET____DOT__engine.__PVT__zi2) 
                                             + vlSymsp->TOP__top__DOT__genblk1__BRA__9__KET____DOT__engine.__PVT__x))),25);
    bufp->fullIData(oldp+375,(vlSymsp->TOP__top__DOT__genblk1__BRA__9__KET____DOT__engine.__PVT__zr2),25);
    bufp->fullIData(oldp+376,(vlSymsp->TOP__top__DOT__genblk1__BRA__9__KET____DOT__engine.__PVT__zi2),25);
    bufp->fullIData(oldp+377,(vlSymsp->TOP__top__DOT__genblk1__BRA__9__KET____DOT__engine.__PVT__distance),25);
    bufp->fullQData(oldp+378,((0x3ffffffffffffULL & 
                               VL_MULS_QQQ(50, (0x3ffffffffffffULL 
                                                & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__9__KET____DOT__engine.__PVT__zr)), 
                                           (0x3ffffffffffffULL 
                                            & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__9__KET____DOT__engine.__PVT__zr))))),50);
    bufp->fullQData(oldp+380,((0x3ffffffffffffULL & 
                               VL_MULS_QQQ(50, (0x3ffffffffffffULL 
                                                & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__9__KET____DOT__engine.__PVT__zi)), 
                                           (0x3ffffffffffffULL 
                                            & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__9__KET____DOT__engine.__PVT__zi))))),50);
    bufp->fullQData(oldp+382,((0x3ffffffffffffULL & 
                               VL_MULS_QQQ(50, (0x3ffffffffffffULL 
                                                & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__9__KET____DOT__engine.__PVT__zr)), 
                                           (0x3ffffffffffffULL 
                                            & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__9__KET____DOT__engine.__PVT__zi))))),50);
    bufp->fullCData(oldp+384,((0x3fU & ((IData)(1U) 
                                        + (IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__9__KET____DOT__engine.__PVT__curr_iterations)))),6);
    bufp->fullCData(oldp+385,(vlSymsp->TOP__top__DOT__genblk1__BRA__9__KET____DOT__engine.__PVT__SM__DOT__state),2);
    bufp->fullIData(oldp+386,((0x1ffffffU & (IData)(
                                                    (0x3fffffffULL 
                                                     & (VL_MULS_QQQ(50, 0x199aULL, 
                                                                    (0x3ffffffffffffULL 
                                                                     & VL_EXTENDS_QI(50,25, 
                                                                                (0x1ffffffU 
                                                                                & (vlSelf->top__DOT__x
                                                                                [9U] 
                                                                                << 0xeU))))) 
                                                        >> 0x14U))))),25);
    bufp->fullIData(oldp+387,((0x1ffffffU & (IData)(
                                                    (0x3fffffffULL 
                                                     & (VL_MULS_QQQ(50, 0x199aULL, 
                                                                    (0x3ffffffffffffULL 
                                                                     & VL_EXTENDS_QI(50,25, 
                                                                                (0x1ffffffU 
                                                                                & (vlSelf->top__DOT__y
                                                                                [9U] 
                                                                                << 0xeU))))) 
                                                        >> 0x14U))))),25);
    bufp->fullIData(oldp+388,((0x1ffffffU & (vlSelf->top__DOT__x
                                             [9U] << 0xeU))),25);
    bufp->fullIData(oldp+389,((0x1ffffffU & (vlSelf->top__DOT__y
                                             [9U] << 0xeU))),25);
    bufp->fullQData(oldp+390,((0x3ffffffffffffULL & 
                               VL_MULS_QQQ(50, 0x199aULL, 
                                           (0x3ffffffffffffULL 
                                            & VL_EXTENDS_QI(50,25, 
                                                            (0x1ffffffU 
                                                             & (vlSelf->top__DOT__x
                                                                [9U] 
                                                                << 0xeU))))))),50);
    bufp->fullQData(oldp+392,((0x3ffffffffffffULL & 
                               VL_MULS_QQQ(50, 0x199aULL, 
                                           (0x3ffffffffffffULL 
                                            & VL_EXTENDS_QI(50,25, 
                                                            (0x1ffffffU 
                                                             & (vlSelf->top__DOT__y
                                                                [9U] 
                                                                << 0xeU))))))),50);
    bufp->fullSData(oldp+394,(vlSelf->top__DOT__x[0xaU]),10);
    bufp->fullSData(oldp+395,(vlSelf->top__DOT__y[0xaU]),10);
    bufp->fullCData(oldp+396,(vlSymsp->TOP__top__DOT__genblk1__BRA__10__KET____DOT__engine.__PVT__curr_iterations),6);
    bufp->fullSData(oldp+397,(vlSymsp->TOP__top__DOT__genblk1__BRA__10__KET____DOT__engine.xpixel),10);
    bufp->fullSData(oldp+398,(vlSymsp->TOP__top__DOT__genblk1__BRA__10__KET____DOT__engine.ypixel),10);
    bufp->fullIData(oldp+399,(vlSymsp->TOP__top__DOT__genblk1__BRA__10__KET____DOT__engine.__PVT__x),25);
    bufp->fullIData(oldp+400,(vlSymsp->TOP__top__DOT__genblk1__BRA__10__KET____DOT__engine.__PVT__y),25);
    bufp->fullIData(oldp+401,(vlSymsp->TOP__top__DOT__genblk1__BRA__10__KET____DOT__engine.__PVT__zr),25);
    bufp->fullIData(oldp+402,(vlSymsp->TOP__top__DOT__genblk1__BRA__10__KET____DOT__engine.__PVT__zi),25);
    bufp->fullIData(oldp+403,((0x1ffffffU & ((vlSymsp->TOP__top__DOT__genblk1__BRA__10__KET____DOT__engine.__PVT__zr2 
                                              - vlSymsp->TOP__top__DOT__genblk1__BRA__10__KET____DOT__engine.__PVT__zi2) 
                                             + vlSymsp->TOP__top__DOT__genblk1__BRA__10__KET____DOT__engine.__PVT__x))),25);
    bufp->fullIData(oldp+404,(vlSymsp->TOP__top__DOT__genblk1__BRA__10__KET____DOT__engine.__PVT__zr2),25);
    bufp->fullIData(oldp+405,(vlSymsp->TOP__top__DOT__genblk1__BRA__10__KET____DOT__engine.__PVT__zi2),25);
    bufp->fullIData(oldp+406,(vlSymsp->TOP__top__DOT__genblk1__BRA__10__KET____DOT__engine.__PVT__distance),25);
    bufp->fullQData(oldp+407,((0x3ffffffffffffULL & 
                               VL_MULS_QQQ(50, (0x3ffffffffffffULL 
                                                & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__10__KET____DOT__engine.__PVT__zr)), 
                                           (0x3ffffffffffffULL 
                                            & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__10__KET____DOT__engine.__PVT__zr))))),50);
    bufp->fullQData(oldp+409,((0x3ffffffffffffULL & 
                               VL_MULS_QQQ(50, (0x3ffffffffffffULL 
                                                & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__10__KET____DOT__engine.__PVT__zi)), 
                                           (0x3ffffffffffffULL 
                                            & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__10__KET____DOT__engine.__PVT__zi))))),50);
    bufp->fullQData(oldp+411,((0x3ffffffffffffULL & 
                               VL_MULS_QQQ(50, (0x3ffffffffffffULL 
                                                & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__10__KET____DOT__engine.__PVT__zr)), 
                                           (0x3ffffffffffffULL 
                                            & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__10__KET____DOT__engine.__PVT__zi))))),50);
    bufp->fullCData(oldp+413,((0x3fU & ((IData)(1U) 
                                        + (IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__10__KET____DOT__engine.__PVT__curr_iterations)))),6);
    bufp->fullCData(oldp+414,(vlSymsp->TOP__top__DOT__genblk1__BRA__10__KET____DOT__engine.__PVT__SM__DOT__state),2);
    bufp->fullIData(oldp+415,((0x1ffffffU & (IData)(
                                                    (0x3fffffffULL 
                                                     & (VL_MULS_QQQ(50, 0x199aULL, 
                                                                    (0x3ffffffffffffULL 
                                                                     & VL_EXTENDS_QI(50,25, 
                                                                                (0x1ffffffU 
                                                                                & (vlSelf->top__DOT__x
                                                                                [0xaU] 
                                                                                << 0xeU))))) 
                                                        >> 0x14U))))),25);
    bufp->fullIData(oldp+416,((0x1ffffffU & (IData)(
                                                    (0x3fffffffULL 
                                                     & (VL_MULS_QQQ(50, 0x199aULL, 
                                                                    (0x3ffffffffffffULL 
                                                                     & VL_EXTENDS_QI(50,25, 
                                                                                (0x1ffffffU 
                                                                                & (vlSelf->top__DOT__y
                                                                                [0xaU] 
                                                                                << 0xeU))))) 
                                                        >> 0x14U))))),25);
    bufp->fullIData(oldp+417,((0x1ffffffU & (vlSelf->top__DOT__x
                                             [0xaU] 
                                             << 0xeU))),25);
    bufp->fullIData(oldp+418,((0x1ffffffU & (vlSelf->top__DOT__y
                                             [0xaU] 
                                             << 0xeU))),25);
    bufp->fullQData(oldp+419,((0x3ffffffffffffULL & 
                               VL_MULS_QQQ(50, 0x199aULL, 
                                           (0x3ffffffffffffULL 
                                            & VL_EXTENDS_QI(50,25, 
                                                            (0x1ffffffU 
                                                             & (vlSelf->top__DOT__x
                                                                [0xaU] 
                                                                << 0xeU))))))),50);
    bufp->fullQData(oldp+421,((0x3ffffffffffffULL & 
                               VL_MULS_QQQ(50, 0x199aULL, 
                                           (0x3ffffffffffffULL 
                                            & VL_EXTENDS_QI(50,25, 
                                                            (0x1ffffffU 
                                                             & (vlSelf->top__DOT__y
                                                                [0xaU] 
                                                                << 0xeU))))))),50);
    bufp->fullSData(oldp+423,(vlSelf->top__DOT__x[0xbU]),10);
    bufp->fullSData(oldp+424,(vlSelf->top__DOT__y[0xbU]),10);
    bufp->fullCData(oldp+425,(vlSymsp->TOP__top__DOT__genblk1__BRA__11__KET____DOT__engine.__PVT__curr_iterations),6);
    bufp->fullSData(oldp+426,(vlSymsp->TOP__top__DOT__genblk1__BRA__11__KET____DOT__engine.xpixel),10);
    bufp->fullSData(oldp+427,(vlSymsp->TOP__top__DOT__genblk1__BRA__11__KET____DOT__engine.ypixel),10);
    bufp->fullIData(oldp+428,(vlSymsp->TOP__top__DOT__genblk1__BRA__11__KET____DOT__engine.__PVT__x),25);
    bufp->fullIData(oldp+429,(vlSymsp->TOP__top__DOT__genblk1__BRA__11__KET____DOT__engine.__PVT__y),25);
    bufp->fullIData(oldp+430,(vlSymsp->TOP__top__DOT__genblk1__BRA__11__KET____DOT__engine.__PVT__zr),25);
    bufp->fullIData(oldp+431,(vlSymsp->TOP__top__DOT__genblk1__BRA__11__KET____DOT__engine.__PVT__zi),25);
    bufp->fullIData(oldp+432,((0x1ffffffU & ((vlSymsp->TOP__top__DOT__genblk1__BRA__11__KET____DOT__engine.__PVT__zr2 
                                              - vlSymsp->TOP__top__DOT__genblk1__BRA__11__KET____DOT__engine.__PVT__zi2) 
                                             + vlSymsp->TOP__top__DOT__genblk1__BRA__11__KET____DOT__engine.__PVT__x))),25);
    bufp->fullIData(oldp+433,(vlSymsp->TOP__top__DOT__genblk1__BRA__11__KET____DOT__engine.__PVT__zr2),25);
    bufp->fullIData(oldp+434,(vlSymsp->TOP__top__DOT__genblk1__BRA__11__KET____DOT__engine.__PVT__zi2),25);
    bufp->fullIData(oldp+435,(vlSymsp->TOP__top__DOT__genblk1__BRA__11__KET____DOT__engine.__PVT__distance),25);
    bufp->fullQData(oldp+436,((0x3ffffffffffffULL & 
                               VL_MULS_QQQ(50, (0x3ffffffffffffULL 
                                                & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__11__KET____DOT__engine.__PVT__zr)), 
                                           (0x3ffffffffffffULL 
                                            & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__11__KET____DOT__engine.__PVT__zr))))),50);
    bufp->fullQData(oldp+438,((0x3ffffffffffffULL & 
                               VL_MULS_QQQ(50, (0x3ffffffffffffULL 
                                                & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__11__KET____DOT__engine.__PVT__zi)), 
                                           (0x3ffffffffffffULL 
                                            & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__11__KET____DOT__engine.__PVT__zi))))),50);
    bufp->fullQData(oldp+440,((0x3ffffffffffffULL & 
                               VL_MULS_QQQ(50, (0x3ffffffffffffULL 
                                                & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__11__KET____DOT__engine.__PVT__zr)), 
                                           (0x3ffffffffffffULL 
                                            & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__11__KET____DOT__engine.__PVT__zi))))),50);
    bufp->fullCData(oldp+442,((0x3fU & ((IData)(1U) 
                                        + (IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__11__KET____DOT__engine.__PVT__curr_iterations)))),6);
    bufp->fullCData(oldp+443,(vlSymsp->TOP__top__DOT__genblk1__BRA__11__KET____DOT__engine.__PVT__SM__DOT__state),2);
    bufp->fullIData(oldp+444,((0x1ffffffU & (IData)(
                                                    (0x3fffffffULL 
                                                     & (VL_MULS_QQQ(50, 0x199aULL, 
                                                                    (0x3ffffffffffffULL 
                                                                     & VL_EXTENDS_QI(50,25, 
                                                                                (0x1ffffffU 
                                                                                & (vlSelf->top__DOT__x
                                                                                [0xbU] 
                                                                                << 0xeU))))) 
                                                        >> 0x14U))))),25);
    bufp->fullIData(oldp+445,((0x1ffffffU & (IData)(
                                                    (0x3fffffffULL 
                                                     & (VL_MULS_QQQ(50, 0x199aULL, 
                                                                    (0x3ffffffffffffULL 
                                                                     & VL_EXTENDS_QI(50,25, 
                                                                                (0x1ffffffU 
                                                                                & (vlSelf->top__DOT__y
                                                                                [0xbU] 
                                                                                << 0xeU))))) 
                                                        >> 0x14U))))),25);
    bufp->fullIData(oldp+446,((0x1ffffffU & (vlSelf->top__DOT__x
                                             [0xbU] 
                                             << 0xeU))),25);
    bufp->fullIData(oldp+447,((0x1ffffffU & (vlSelf->top__DOT__y
                                             [0xbU] 
                                             << 0xeU))),25);
    bufp->fullQData(oldp+448,((0x3ffffffffffffULL & 
                               VL_MULS_QQQ(50, 0x199aULL, 
                                           (0x3ffffffffffffULL 
                                            & VL_EXTENDS_QI(50,25, 
                                                            (0x1ffffffU 
                                                             & (vlSelf->top__DOT__x
                                                                [0xbU] 
                                                                << 0xeU))))))),50);
    bufp->fullQData(oldp+450,((0x3ffffffffffffULL & 
                               VL_MULS_QQQ(50, 0x199aULL, 
                                           (0x3ffffffffffffULL 
                                            & VL_EXTENDS_QI(50,25, 
                                                            (0x1ffffffU 
                                                             & (vlSelf->top__DOT__y
                                                                [0xbU] 
                                                                << 0xeU))))))),50);
    bufp->fullIData(oldp+452,(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__queue_block.__PVT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+453,(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__queue_block.__PVT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+454,(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__queue_block.__PVT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+455,(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__queue_block.__PVT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+456,(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__queue_block.__PVT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+457,(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__queue_block.__PVT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+458,(vlSymsp->TOP__top__DOT__genblk1__BRA__6__KET____DOT__queue_block.__PVT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+459,(vlSymsp->TOP__top__DOT__genblk1__BRA__7__KET____DOT__queue_block.__PVT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+460,(vlSymsp->TOP__top__DOT__genblk1__BRA__8__KET____DOT__queue_block.__PVT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+461,(vlSymsp->TOP__top__DOT__genblk1__BRA__9__KET____DOT__queue_block.__PVT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+462,(vlSymsp->TOP__top__DOT__genblk1__BRA__10__KET____DOT__queue_block.__PVT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+463,(vlSymsp->TOP__top__DOT__genblk1__BRA__11__KET____DOT__queue_block.__PVT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+464,((0x1ffffffU & ((((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__init)
                                                ? 0U
                                                : (0x1ffffffU 
                                                   & (IData)(
                                                             (0x3fffffffULL 
                                                              & (VL_MULS_QQQ(50, 
                                                                             (0x3ffffffffffffULL 
                                                                              & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__zr)), 
                                                                             (0x3ffffffffffffULL 
                                                                              & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__zi))) 
                                                                 >> 0x14U))))) 
                                              << 1U) 
                                             + vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__y))),25);
    bufp->fullIData(oldp+465,(((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__init)
                                ? 0U : (0x1ffffffU 
                                        & (IData)((0x3fffffffULL 
                                                   & (VL_MULS_QQQ(50, 
                                                                  (0x3ffffffffffffULL 
                                                                   & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__zr)), 
                                                                  (0x3ffffffffffffULL 
                                                                   & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__zr))) 
                                                      >> 0x14U)))))),25);
    bufp->fullIData(oldp+466,(((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__init)
                                ? 0U : (0x1ffffffU 
                                        & (IData)((0x3fffffffULL 
                                                   & (VL_MULS_QQQ(50, 
                                                                  (0x3ffffffffffffULL 
                                                                   & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__zi)), 
                                                                  (0x3ffffffffffffULL 
                                                                   & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__zi))) 
                                                      >> 0x14U)))))),25);
    bufp->fullIData(oldp+467,(((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__init)
                                ? 0U : (0x1ffffffU 
                                        & (IData)((0x3fffffffULL 
                                                   & (VL_MULS_QQQ(50, 
                                                                  (0x3ffffffffffffULL 
                                                                   & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__zr)), 
                                                                  (0x3ffffffffffffULL 
                                                                   & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__zi))) 
                                                      >> 0x14U)))))),25);
    bufp->fullIData(oldp+468,((0x1ffffffU & ((((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__init)
                                                ? 0U
                                                : (0x1ffffffU 
                                                   & (IData)(
                                                             (0x3fffffffULL 
                                                              & (VL_MULS_QQQ(50, 
                                                                             (0x3ffffffffffffULL 
                                                                              & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__zr)), 
                                                                             (0x3ffffffffffffULL 
                                                                              & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__zi))) 
                                                                 >> 0x14U))))) 
                                              << 1U) 
                                             + vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__y))),25);
    bufp->fullIData(oldp+469,(((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__init)
                                ? 0U : (0x1ffffffU 
                                        & (IData)((0x3fffffffULL 
                                                   & (VL_MULS_QQQ(50, 
                                                                  (0x3ffffffffffffULL 
                                                                   & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__zr)), 
                                                                  (0x3ffffffffffffULL 
                                                                   & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__zr))) 
                                                      >> 0x14U)))))),25);
    bufp->fullIData(oldp+470,(((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__init)
                                ? 0U : (0x1ffffffU 
                                        & (IData)((0x3fffffffULL 
                                                   & (VL_MULS_QQQ(50, 
                                                                  (0x3ffffffffffffULL 
                                                                   & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__zi)), 
                                                                  (0x3ffffffffffffULL 
                                                                   & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__zi))) 
                                                      >> 0x14U)))))),25);
    bufp->fullIData(oldp+471,(((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__init)
                                ? 0U : (0x1ffffffU 
                                        & (IData)((0x3fffffffULL 
                                                   & (VL_MULS_QQQ(50, 
                                                                  (0x3ffffffffffffULL 
                                                                   & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__zr)), 
                                                                  (0x3ffffffffffffULL 
                                                                   & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__zi))) 
                                                      >> 0x14U)))))),25);
    bufp->fullIData(oldp+472,((0x1ffffffU & ((((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__init)
                                                ? 0U
                                                : (0x1ffffffU 
                                                   & (IData)(
                                                             (0x3fffffffULL 
                                                              & (VL_MULS_QQQ(50, 
                                                                             (0x3ffffffffffffULL 
                                                                              & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__zr)), 
                                                                             (0x3ffffffffffffULL 
                                                                              & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__zi))) 
                                                                 >> 0x14U))))) 
                                              << 1U) 
                                             + vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__y))),25);
    bufp->fullIData(oldp+473,(((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__init)
                                ? 0U : (0x1ffffffU 
                                        & (IData)((0x3fffffffULL 
                                                   & (VL_MULS_QQQ(50, 
                                                                  (0x3ffffffffffffULL 
                                                                   & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__zr)), 
                                                                  (0x3ffffffffffffULL 
                                                                   & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__zr))) 
                                                      >> 0x14U)))))),25);
    bufp->fullIData(oldp+474,(((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__init)
                                ? 0U : (0x1ffffffU 
                                        & (IData)((0x3fffffffULL 
                                                   & (VL_MULS_QQQ(50, 
                                                                  (0x3ffffffffffffULL 
                                                                   & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__zi)), 
                                                                  (0x3ffffffffffffULL 
                                                                   & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__zi))) 
                                                      >> 0x14U)))))),25);
    bufp->fullIData(oldp+475,(((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__init)
                                ? 0U : (0x1ffffffU 
                                        & (IData)((0x3fffffffULL 
                                                   & (VL_MULS_QQQ(50, 
                                                                  (0x3ffffffffffffULL 
                                                                   & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__zr)), 
                                                                  (0x3ffffffffffffULL 
                                                                   & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__zi))) 
                                                      >> 0x14U)))))),25);
    bufp->fullIData(oldp+476,((0x1ffffffU & ((((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__init)
                                                ? 0U
                                                : (0x1ffffffU 
                                                   & (IData)(
                                                             (0x3fffffffULL 
                                                              & (VL_MULS_QQQ(50, 
                                                                             (0x3ffffffffffffULL 
                                                                              & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__zr)), 
                                                                             (0x3ffffffffffffULL 
                                                                              & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__zi))) 
                                                                 >> 0x14U))))) 
                                              << 1U) 
                                             + vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__y))),25);
    bufp->fullIData(oldp+477,(((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__init)
                                ? 0U : (0x1ffffffU 
                                        & (IData)((0x3fffffffULL 
                                                   & (VL_MULS_QQQ(50, 
                                                                  (0x3ffffffffffffULL 
                                                                   & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__zr)), 
                                                                  (0x3ffffffffffffULL 
                                                                   & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__zr))) 
                                                      >> 0x14U)))))),25);
    bufp->fullIData(oldp+478,(((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__init)
                                ? 0U : (0x1ffffffU 
                                        & (IData)((0x3fffffffULL 
                                                   & (VL_MULS_QQQ(50, 
                                                                  (0x3ffffffffffffULL 
                                                                   & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__zi)), 
                                                                  (0x3ffffffffffffULL 
                                                                   & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__zi))) 
                                                      >> 0x14U)))))),25);
    bufp->fullIData(oldp+479,(((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__init)
                                ? 0U : (0x1ffffffU 
                                        & (IData)((0x3fffffffULL 
                                                   & (VL_MULS_QQQ(50, 
                                                                  (0x3ffffffffffffULL 
                                                                   & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__zr)), 
                                                                  (0x3ffffffffffffULL 
                                                                   & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__zi))) 
                                                      >> 0x14U)))))),25);
    bufp->fullIData(oldp+480,((0x1ffffffU & ((((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__init)
                                                ? 0U
                                                : (0x1ffffffU 
                                                   & (IData)(
                                                             (0x3fffffffULL 
                                                              & (VL_MULS_QQQ(50, 
                                                                             (0x3ffffffffffffULL 
                                                                              & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__zr)), 
                                                                             (0x3ffffffffffffULL 
                                                                              & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__zi))) 
                                                                 >> 0x14U))))) 
                                              << 1U) 
                                             + vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__y))),25);
    bufp->fullIData(oldp+481,(((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__init)
                                ? 0U : (0x1ffffffU 
                                        & (IData)((0x3fffffffULL 
                                                   & (VL_MULS_QQQ(50, 
                                                                  (0x3ffffffffffffULL 
                                                                   & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__zr)), 
                                                                  (0x3ffffffffffffULL 
                                                                   & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__zr))) 
                                                      >> 0x14U)))))),25);
    bufp->fullIData(oldp+482,(((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__init)
                                ? 0U : (0x1ffffffU 
                                        & (IData)((0x3fffffffULL 
                                                   & (VL_MULS_QQQ(50, 
                                                                  (0x3ffffffffffffULL 
                                                                   & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__zi)), 
                                                                  (0x3ffffffffffffULL 
                                                                   & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__zi))) 
                                                      >> 0x14U)))))),25);
    bufp->fullIData(oldp+483,(((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__init)
                                ? 0U : (0x1ffffffU 
                                        & (IData)((0x3fffffffULL 
                                                   & (VL_MULS_QQQ(50, 
                                                                  (0x3ffffffffffffULL 
                                                                   & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__zr)), 
                                                                  (0x3ffffffffffffULL 
                                                                   & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__zi))) 
                                                      >> 0x14U)))))),25);
    bufp->fullIData(oldp+484,((0x1ffffffU & ((((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__init)
                                                ? 0U
                                                : (0x1ffffffU 
                                                   & (IData)(
                                                             (0x3fffffffULL 
                                                              & (VL_MULS_QQQ(50, 
                                                                             (0x3ffffffffffffULL 
                                                                              & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__zr)), 
                                                                             (0x3ffffffffffffULL 
                                                                              & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__zi))) 
                                                                 >> 0x14U))))) 
                                              << 1U) 
                                             + vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__y))),25);
    bufp->fullIData(oldp+485,(((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__init)
                                ? 0U : (0x1ffffffU 
                                        & (IData)((0x3fffffffULL 
                                                   & (VL_MULS_QQQ(50, 
                                                                  (0x3ffffffffffffULL 
                                                                   & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__zr)), 
                                                                  (0x3ffffffffffffULL 
                                                                   & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__zr))) 
                                                      >> 0x14U)))))),25);
    bufp->fullIData(oldp+486,(((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__init)
                                ? 0U : (0x1ffffffU 
                                        & (IData)((0x3fffffffULL 
                                                   & (VL_MULS_QQQ(50, 
                                                                  (0x3ffffffffffffULL 
                                                                   & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__zi)), 
                                                                  (0x3ffffffffffffULL 
                                                                   & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__zi))) 
                                                      >> 0x14U)))))),25);
    bufp->fullIData(oldp+487,(((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__init)
                                ? 0U : (0x1ffffffU 
                                        & (IData)((0x3fffffffULL 
                                                   & (VL_MULS_QQQ(50, 
                                                                  (0x3ffffffffffffULL 
                                                                   & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__zr)), 
                                                                  (0x3ffffffffffffULL 
                                                                   & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__zi))) 
                                                      >> 0x14U)))))),25);
    bufp->fullIData(oldp+488,((0x1ffffffU & ((((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__6__KET____DOT__engine.__PVT__init)
                                                ? 0U
                                                : (0x1ffffffU 
                                                   & (IData)(
                                                             (0x3fffffffULL 
                                                              & (VL_MULS_QQQ(50, 
                                                                             (0x3ffffffffffffULL 
                                                                              & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__6__KET____DOT__engine.__PVT__zr)), 
                                                                             (0x3ffffffffffffULL 
                                                                              & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__6__KET____DOT__engine.__PVT__zi))) 
                                                                 >> 0x14U))))) 
                                              << 1U) 
                                             + vlSymsp->TOP__top__DOT__genblk1__BRA__6__KET____DOT__engine.__PVT__y))),25);
    bufp->fullIData(oldp+489,(((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__6__KET____DOT__engine.__PVT__init)
                                ? 0U : (0x1ffffffU 
                                        & (IData)((0x3fffffffULL 
                                                   & (VL_MULS_QQQ(50, 
                                                                  (0x3ffffffffffffULL 
                                                                   & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__6__KET____DOT__engine.__PVT__zr)), 
                                                                  (0x3ffffffffffffULL 
                                                                   & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__6__KET____DOT__engine.__PVT__zr))) 
                                                      >> 0x14U)))))),25);
    bufp->fullIData(oldp+490,(((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__6__KET____DOT__engine.__PVT__init)
                                ? 0U : (0x1ffffffU 
                                        & (IData)((0x3fffffffULL 
                                                   & (VL_MULS_QQQ(50, 
                                                                  (0x3ffffffffffffULL 
                                                                   & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__6__KET____DOT__engine.__PVT__zi)), 
                                                                  (0x3ffffffffffffULL 
                                                                   & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__6__KET____DOT__engine.__PVT__zi))) 
                                                      >> 0x14U)))))),25);
    bufp->fullIData(oldp+491,(((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__6__KET____DOT__engine.__PVT__init)
                                ? 0U : (0x1ffffffU 
                                        & (IData)((0x3fffffffULL 
                                                   & (VL_MULS_QQQ(50, 
                                                                  (0x3ffffffffffffULL 
                                                                   & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__6__KET____DOT__engine.__PVT__zr)), 
                                                                  (0x3ffffffffffffULL 
                                                                   & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__6__KET____DOT__engine.__PVT__zi))) 
                                                      >> 0x14U)))))),25);
    bufp->fullIData(oldp+492,((0x1ffffffU & ((((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__7__KET____DOT__engine.__PVT__init)
                                                ? 0U
                                                : (0x1ffffffU 
                                                   & (IData)(
                                                             (0x3fffffffULL 
                                                              & (VL_MULS_QQQ(50, 
                                                                             (0x3ffffffffffffULL 
                                                                              & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__7__KET____DOT__engine.__PVT__zr)), 
                                                                             (0x3ffffffffffffULL 
                                                                              & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__7__KET____DOT__engine.__PVT__zi))) 
                                                                 >> 0x14U))))) 
                                              << 1U) 
                                             + vlSymsp->TOP__top__DOT__genblk1__BRA__7__KET____DOT__engine.__PVT__y))),25);
    bufp->fullIData(oldp+493,(((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__7__KET____DOT__engine.__PVT__init)
                                ? 0U : (0x1ffffffU 
                                        & (IData)((0x3fffffffULL 
                                                   & (VL_MULS_QQQ(50, 
                                                                  (0x3ffffffffffffULL 
                                                                   & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__7__KET____DOT__engine.__PVT__zr)), 
                                                                  (0x3ffffffffffffULL 
                                                                   & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__7__KET____DOT__engine.__PVT__zr))) 
                                                      >> 0x14U)))))),25);
    bufp->fullIData(oldp+494,(((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__7__KET____DOT__engine.__PVT__init)
                                ? 0U : (0x1ffffffU 
                                        & (IData)((0x3fffffffULL 
                                                   & (VL_MULS_QQQ(50, 
                                                                  (0x3ffffffffffffULL 
                                                                   & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__7__KET____DOT__engine.__PVT__zi)), 
                                                                  (0x3ffffffffffffULL 
                                                                   & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__7__KET____DOT__engine.__PVT__zi))) 
                                                      >> 0x14U)))))),25);
    bufp->fullIData(oldp+495,(((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__7__KET____DOT__engine.__PVT__init)
                                ? 0U : (0x1ffffffU 
                                        & (IData)((0x3fffffffULL 
                                                   & (VL_MULS_QQQ(50, 
                                                                  (0x3ffffffffffffULL 
                                                                   & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__7__KET____DOT__engine.__PVT__zr)), 
                                                                  (0x3ffffffffffffULL 
                                                                   & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__7__KET____DOT__engine.__PVT__zi))) 
                                                      >> 0x14U)))))),25);
    bufp->fullIData(oldp+496,((0x1ffffffU & ((((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__8__KET____DOT__engine.__PVT__init)
                                                ? 0U
                                                : (0x1ffffffU 
                                                   & (IData)(
                                                             (0x3fffffffULL 
                                                              & (VL_MULS_QQQ(50, 
                                                                             (0x3ffffffffffffULL 
                                                                              & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__8__KET____DOT__engine.__PVT__zr)), 
                                                                             (0x3ffffffffffffULL 
                                                                              & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__8__KET____DOT__engine.__PVT__zi))) 
                                                                 >> 0x14U))))) 
                                              << 1U) 
                                             + vlSymsp->TOP__top__DOT__genblk1__BRA__8__KET____DOT__engine.__PVT__y))),25);
    bufp->fullIData(oldp+497,(((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__8__KET____DOT__engine.__PVT__init)
                                ? 0U : (0x1ffffffU 
                                        & (IData)((0x3fffffffULL 
                                                   & (VL_MULS_QQQ(50, 
                                                                  (0x3ffffffffffffULL 
                                                                   & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__8__KET____DOT__engine.__PVT__zr)), 
                                                                  (0x3ffffffffffffULL 
                                                                   & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__8__KET____DOT__engine.__PVT__zr))) 
                                                      >> 0x14U)))))),25);
    bufp->fullIData(oldp+498,(((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__8__KET____DOT__engine.__PVT__init)
                                ? 0U : (0x1ffffffU 
                                        & (IData)((0x3fffffffULL 
                                                   & (VL_MULS_QQQ(50, 
                                                                  (0x3ffffffffffffULL 
                                                                   & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__8__KET____DOT__engine.__PVT__zi)), 
                                                                  (0x3ffffffffffffULL 
                                                                   & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__8__KET____DOT__engine.__PVT__zi))) 
                                                      >> 0x14U)))))),25);
    bufp->fullIData(oldp+499,(((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__8__KET____DOT__engine.__PVT__init)
                                ? 0U : (0x1ffffffU 
                                        & (IData)((0x3fffffffULL 
                                                   & (VL_MULS_QQQ(50, 
                                                                  (0x3ffffffffffffULL 
                                                                   & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__8__KET____DOT__engine.__PVT__zr)), 
                                                                  (0x3ffffffffffffULL 
                                                                   & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__8__KET____DOT__engine.__PVT__zi))) 
                                                      >> 0x14U)))))),25);
    bufp->fullIData(oldp+500,((0x1ffffffU & ((((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__9__KET____DOT__engine.__PVT__init)
                                                ? 0U
                                                : (0x1ffffffU 
                                                   & (IData)(
                                                             (0x3fffffffULL 
                                                              & (VL_MULS_QQQ(50, 
                                                                             (0x3ffffffffffffULL 
                                                                              & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__9__KET____DOT__engine.__PVT__zr)), 
                                                                             (0x3ffffffffffffULL 
                                                                              & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__9__KET____DOT__engine.__PVT__zi))) 
                                                                 >> 0x14U))))) 
                                              << 1U) 
                                             + vlSymsp->TOP__top__DOT__genblk1__BRA__9__KET____DOT__engine.__PVT__y))),25);
    bufp->fullIData(oldp+501,(((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__9__KET____DOT__engine.__PVT__init)
                                ? 0U : (0x1ffffffU 
                                        & (IData)((0x3fffffffULL 
                                                   & (VL_MULS_QQQ(50, 
                                                                  (0x3ffffffffffffULL 
                                                                   & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__9__KET____DOT__engine.__PVT__zr)), 
                                                                  (0x3ffffffffffffULL 
                                                                   & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__9__KET____DOT__engine.__PVT__zr))) 
                                                      >> 0x14U)))))),25);
    bufp->fullIData(oldp+502,(((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__9__KET____DOT__engine.__PVT__init)
                                ? 0U : (0x1ffffffU 
                                        & (IData)((0x3fffffffULL 
                                                   & (VL_MULS_QQQ(50, 
                                                                  (0x3ffffffffffffULL 
                                                                   & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__9__KET____DOT__engine.__PVT__zi)), 
                                                                  (0x3ffffffffffffULL 
                                                                   & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__9__KET____DOT__engine.__PVT__zi))) 
                                                      >> 0x14U)))))),25);
    bufp->fullIData(oldp+503,(((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__9__KET____DOT__engine.__PVT__init)
                                ? 0U : (0x1ffffffU 
                                        & (IData)((0x3fffffffULL 
                                                   & (VL_MULS_QQQ(50, 
                                                                  (0x3ffffffffffffULL 
                                                                   & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__9__KET____DOT__engine.__PVT__zr)), 
                                                                  (0x3ffffffffffffULL 
                                                                   & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__9__KET____DOT__engine.__PVT__zi))) 
                                                      >> 0x14U)))))),25);
    bufp->fullIData(oldp+504,((0x1ffffffU & ((((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__10__KET____DOT__engine.__PVT__init)
                                                ? 0U
                                                : (0x1ffffffU 
                                                   & (IData)(
                                                             (0x3fffffffULL 
                                                              & (VL_MULS_QQQ(50, 
                                                                             (0x3ffffffffffffULL 
                                                                              & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__10__KET____DOT__engine.__PVT__zr)), 
                                                                             (0x3ffffffffffffULL 
                                                                              & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__10__KET____DOT__engine.__PVT__zi))) 
                                                                 >> 0x14U))))) 
                                              << 1U) 
                                             + vlSymsp->TOP__top__DOT__genblk1__BRA__10__KET____DOT__engine.__PVT__y))),25);
    bufp->fullIData(oldp+505,(((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__10__KET____DOT__engine.__PVT__init)
                                ? 0U : (0x1ffffffU 
                                        & (IData)((0x3fffffffULL 
                                                   & (VL_MULS_QQQ(50, 
                                                                  (0x3ffffffffffffULL 
                                                                   & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__10__KET____DOT__engine.__PVT__zr)), 
                                                                  (0x3ffffffffffffULL 
                                                                   & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__10__KET____DOT__engine.__PVT__zr))) 
                                                      >> 0x14U)))))),25);
    bufp->fullIData(oldp+506,(((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__10__KET____DOT__engine.__PVT__init)
                                ? 0U : (0x1ffffffU 
                                        & (IData)((0x3fffffffULL 
                                                   & (VL_MULS_QQQ(50, 
                                                                  (0x3ffffffffffffULL 
                                                                   & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__10__KET____DOT__engine.__PVT__zi)), 
                                                                  (0x3ffffffffffffULL 
                                                                   & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__10__KET____DOT__engine.__PVT__zi))) 
                                                      >> 0x14U)))))),25);
    bufp->fullIData(oldp+507,(((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__10__KET____DOT__engine.__PVT__init)
                                ? 0U : (0x1ffffffU 
                                        & (IData)((0x3fffffffULL 
                                                   & (VL_MULS_QQQ(50, 
                                                                  (0x3ffffffffffffULL 
                                                                   & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__10__KET____DOT__engine.__PVT__zr)), 
                                                                  (0x3ffffffffffffULL 
                                                                   & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__10__KET____DOT__engine.__PVT__zi))) 
                                                      >> 0x14U)))))),25);
    bufp->fullIData(oldp+508,((0x1ffffffU & ((((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__11__KET____DOT__engine.__PVT__init)
                                                ? 0U
                                                : (0x1ffffffU 
                                                   & (IData)(
                                                             (0x3fffffffULL 
                                                              & (VL_MULS_QQQ(50, 
                                                                             (0x3ffffffffffffULL 
                                                                              & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__11__KET____DOT__engine.__PVT__zr)), 
                                                                             (0x3ffffffffffffULL 
                                                                              & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__11__KET____DOT__engine.__PVT__zi))) 
                                                                 >> 0x14U))))) 
                                              << 1U) 
                                             + vlSymsp->TOP__top__DOT__genblk1__BRA__11__KET____DOT__engine.__PVT__y))),25);
    bufp->fullIData(oldp+509,(((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__11__KET____DOT__engine.__PVT__init)
                                ? 0U : (0x1ffffffU 
                                        & (IData)((0x3fffffffULL 
                                                   & (VL_MULS_QQQ(50, 
                                                                  (0x3ffffffffffffULL 
                                                                   & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__11__KET____DOT__engine.__PVT__zr)), 
                                                                  (0x3ffffffffffffULL 
                                                                   & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__11__KET____DOT__engine.__PVT__zr))) 
                                                      >> 0x14U)))))),25);
    bufp->fullIData(oldp+510,(((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__11__KET____DOT__engine.__PVT__init)
                                ? 0U : (0x1ffffffU 
                                        & (IData)((0x3fffffffULL 
                                                   & (VL_MULS_QQQ(50, 
                                                                  (0x3ffffffffffffULL 
                                                                   & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__11__KET____DOT__engine.__PVT__zi)), 
                                                                  (0x3ffffffffffffULL 
                                                                   & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__11__KET____DOT__engine.__PVT__zi))) 
                                                      >> 0x14U)))))),25);
    bufp->fullIData(oldp+511,(((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__11__KET____DOT__engine.__PVT__init)
                                ? 0U : (0x1ffffffU 
                                        & (IData)((0x3fffffffULL 
                                                   & (VL_MULS_QQQ(50, 
                                                                  (0x3ffffffffffffULL 
                                                                   & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__11__KET____DOT__engine.__PVT__zr)), 
                                                                  (0x3ffffffffffffULL 
                                                                   & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__11__KET____DOT__engine.__PVT__zi))) 
                                                      >> 0x14U)))))),25);
    bufp->fullIData(oldp+512,(vlSelf->top__DOT__colour_bus_o[0]),24);
    bufp->fullIData(oldp+513,(vlSelf->top__DOT__colour_bus_o[1]),24);
    bufp->fullIData(oldp+514,(vlSelf->top__DOT__colour_bus_o[2]),24);
    bufp->fullIData(oldp+515,(vlSelf->top__DOT__colour_bus_o[3]),24);
    bufp->fullIData(oldp+516,(vlSelf->top__DOT__colour_bus_o[4]),24);
    bufp->fullIData(oldp+517,(vlSelf->top__DOT__colour_bus_o[5]),24);
    bufp->fullIData(oldp+518,(vlSelf->top__DOT__colour_bus_o[6]),24);
    bufp->fullIData(oldp+519,(vlSelf->top__DOT__colour_bus_o[7]),24);
    bufp->fullIData(oldp+520,(vlSelf->top__DOT__colour_bus_o[8]),24);
    bufp->fullIData(oldp+521,(vlSelf->top__DOT__colour_bus_o[9]),24);
    bufp->fullIData(oldp+522,(vlSelf->top__DOT__colour_bus_o[10]),24);
    bufp->fullIData(oldp+523,(vlSelf->top__DOT__colour_bus_o[11]),24);
    bufp->fullIData(oldp+524,(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__queue_block.colour_o),24);
    bufp->fullIData(oldp+525,(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__queue_block.__PVT__unnamedblk3__DOT__i),32);
    bufp->fullIData(oldp+526,(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__queue_block.colour_o),24);
    bufp->fullIData(oldp+527,(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__queue_block.__PVT__unnamedblk3__DOT__i),32);
    bufp->fullIData(oldp+528,(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__queue_block.colour_o),24);
    bufp->fullIData(oldp+529,(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__queue_block.__PVT__unnamedblk3__DOT__i),32);
    bufp->fullIData(oldp+530,(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__queue_block.colour_o),24);
    bufp->fullIData(oldp+531,(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__queue_block.__PVT__unnamedblk3__DOT__i),32);
    bufp->fullIData(oldp+532,(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__queue_block.colour_o),24);
    bufp->fullIData(oldp+533,(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__queue_block.__PVT__unnamedblk3__DOT__i),32);
    bufp->fullIData(oldp+534,(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__queue_block.colour_o),24);
    bufp->fullIData(oldp+535,(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__queue_block.__PVT__unnamedblk3__DOT__i),32);
    bufp->fullIData(oldp+536,(vlSymsp->TOP__top__DOT__genblk1__BRA__6__KET____DOT__queue_block.colour_o),24);
    bufp->fullIData(oldp+537,(vlSymsp->TOP__top__DOT__genblk1__BRA__6__KET____DOT__queue_block.__PVT__unnamedblk3__DOT__i),32);
    bufp->fullIData(oldp+538,(vlSymsp->TOP__top__DOT__genblk1__BRA__7__KET____DOT__queue_block.colour_o),24);
    bufp->fullIData(oldp+539,(vlSymsp->TOP__top__DOT__genblk1__BRA__7__KET____DOT__queue_block.__PVT__unnamedblk3__DOT__i),32);
    bufp->fullIData(oldp+540,(vlSymsp->TOP__top__DOT__genblk1__BRA__8__KET____DOT__queue_block.colour_o),24);
    bufp->fullIData(oldp+541,(vlSymsp->TOP__top__DOT__genblk1__BRA__8__KET____DOT__queue_block.__PVT__unnamedblk3__DOT__i),32);
    bufp->fullIData(oldp+542,(vlSymsp->TOP__top__DOT__genblk1__BRA__9__KET____DOT__queue_block.colour_o),24);
    bufp->fullIData(oldp+543,(vlSymsp->TOP__top__DOT__genblk1__BRA__9__KET____DOT__queue_block.__PVT__unnamedblk3__DOT__i),32);
    bufp->fullIData(oldp+544,(vlSymsp->TOP__top__DOT__genblk1__BRA__10__KET____DOT__queue_block.colour_o),24);
    bufp->fullIData(oldp+545,(vlSymsp->TOP__top__DOT__genblk1__BRA__10__KET____DOT__queue_block.__PVT__unnamedblk3__DOT__i),32);
    bufp->fullIData(oldp+546,(vlSymsp->TOP__top__DOT__genblk1__BRA__11__KET____DOT__queue_block.colour_o),24);
    bufp->fullIData(oldp+547,(vlSymsp->TOP__top__DOT__genblk1__BRA__11__KET____DOT__queue_block.__PVT__unnamedblk3__DOT__i),32);
    bufp->fullSData(oldp+548,(vlSelf->top__DOT__fin_bus),12);
    bufp->fullBit(oldp+549,(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.en_pixel_map));
    bufp->fullBit(oldp+550,(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__distributor_ready));
    bufp->fullBit(oldp+551,(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__en_stage_1));
    bufp->fullBit(oldp+552,(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__en_stage_2));
    bufp->fullBit(oldp+553,(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__init));
    bufp->fullCData(oldp+554,(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__SM__DOT__next),2);
    bufp->fullBit(oldp+555,(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.en_pixel_map));
    bufp->fullBit(oldp+556,(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__distributor_ready));
    bufp->fullBit(oldp+557,(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__en_stage_1));
    bufp->fullBit(oldp+558,(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__en_stage_2));
    bufp->fullBit(oldp+559,(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__init));
    bufp->fullCData(oldp+560,(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__SM__DOT__next),2);
    bufp->fullBit(oldp+561,(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.en_pixel_map));
    bufp->fullBit(oldp+562,(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__distributor_ready));
    bufp->fullBit(oldp+563,(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__en_stage_1));
    bufp->fullBit(oldp+564,(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__en_stage_2));
    bufp->fullBit(oldp+565,(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__init));
    bufp->fullCData(oldp+566,(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__SM__DOT__next),2);
    bufp->fullBit(oldp+567,(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.en_pixel_map));
    bufp->fullBit(oldp+568,(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__distributor_ready));
    bufp->fullBit(oldp+569,(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__en_stage_1));
    bufp->fullBit(oldp+570,(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__en_stage_2));
    bufp->fullBit(oldp+571,(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__init));
    bufp->fullCData(oldp+572,(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__SM__DOT__next),2);
    bufp->fullBit(oldp+573,(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.en_pixel_map));
    bufp->fullBit(oldp+574,(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__distributor_ready));
    bufp->fullBit(oldp+575,(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__en_stage_1));
    bufp->fullBit(oldp+576,(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__en_stage_2));
    bufp->fullBit(oldp+577,(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__init));
    bufp->fullCData(oldp+578,(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__SM__DOT__next),2);
    bufp->fullBit(oldp+579,(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.en_pixel_map));
    bufp->fullBit(oldp+580,(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__distributor_ready));
    bufp->fullBit(oldp+581,(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__en_stage_1));
    bufp->fullBit(oldp+582,(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__en_stage_2));
    bufp->fullBit(oldp+583,(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__init));
    bufp->fullCData(oldp+584,(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__SM__DOT__next),2);
    bufp->fullBit(oldp+585,(vlSymsp->TOP__top__DOT__genblk1__BRA__6__KET____DOT__engine.en_pixel_map));
    bufp->fullBit(oldp+586,(vlSymsp->TOP__top__DOT__genblk1__BRA__6__KET____DOT__engine.__PVT__distributor_ready));
    bufp->fullBit(oldp+587,(vlSymsp->TOP__top__DOT__genblk1__BRA__6__KET____DOT__engine.__PVT__en_stage_1));
    bufp->fullBit(oldp+588,(vlSymsp->TOP__top__DOT__genblk1__BRA__6__KET____DOT__engine.__PVT__en_stage_2));
    bufp->fullBit(oldp+589,(vlSymsp->TOP__top__DOT__genblk1__BRA__6__KET____DOT__engine.__PVT__init));
    bufp->fullCData(oldp+590,(vlSymsp->TOP__top__DOT__genblk1__BRA__6__KET____DOT__engine.__PVT__SM__DOT__next),2);
    bufp->fullBit(oldp+591,(vlSymsp->TOP__top__DOT__genblk1__BRA__7__KET____DOT__engine.en_pixel_map));
    bufp->fullBit(oldp+592,(vlSymsp->TOP__top__DOT__genblk1__BRA__7__KET____DOT__engine.__PVT__distributor_ready));
    bufp->fullBit(oldp+593,(vlSymsp->TOP__top__DOT__genblk1__BRA__7__KET____DOT__engine.__PVT__en_stage_1));
    bufp->fullBit(oldp+594,(vlSymsp->TOP__top__DOT__genblk1__BRA__7__KET____DOT__engine.__PVT__en_stage_2));
    bufp->fullBit(oldp+595,(vlSymsp->TOP__top__DOT__genblk1__BRA__7__KET____DOT__engine.__PVT__init));
    bufp->fullCData(oldp+596,(vlSymsp->TOP__top__DOT__genblk1__BRA__7__KET____DOT__engine.__PVT__SM__DOT__next),2);
    bufp->fullBit(oldp+597,(vlSymsp->TOP__top__DOT__genblk1__BRA__8__KET____DOT__engine.en_pixel_map));
    bufp->fullBit(oldp+598,(vlSymsp->TOP__top__DOT__genblk1__BRA__8__KET____DOT__engine.__PVT__distributor_ready));
    bufp->fullBit(oldp+599,(vlSymsp->TOP__top__DOT__genblk1__BRA__8__KET____DOT__engine.__PVT__en_stage_1));
    bufp->fullBit(oldp+600,(vlSymsp->TOP__top__DOT__genblk1__BRA__8__KET____DOT__engine.__PVT__en_stage_2));
    bufp->fullBit(oldp+601,(vlSymsp->TOP__top__DOT__genblk1__BRA__8__KET____DOT__engine.__PVT__init));
    bufp->fullCData(oldp+602,(vlSymsp->TOP__top__DOT__genblk1__BRA__8__KET____DOT__engine.__PVT__SM__DOT__next),2);
    bufp->fullBit(oldp+603,(vlSymsp->TOP__top__DOT__genblk1__BRA__9__KET____DOT__engine.en_pixel_map));
    bufp->fullBit(oldp+604,(vlSymsp->TOP__top__DOT__genblk1__BRA__9__KET____DOT__engine.__PVT__distributor_ready));
    bufp->fullBit(oldp+605,(vlSymsp->TOP__top__DOT__genblk1__BRA__9__KET____DOT__engine.__PVT__en_stage_1));
    bufp->fullBit(oldp+606,(vlSymsp->TOP__top__DOT__genblk1__BRA__9__KET____DOT__engine.__PVT__en_stage_2));
    bufp->fullBit(oldp+607,(vlSymsp->TOP__top__DOT__genblk1__BRA__9__KET____DOT__engine.__PVT__init));
    bufp->fullCData(oldp+608,(vlSymsp->TOP__top__DOT__genblk1__BRA__9__KET____DOT__engine.__PVT__SM__DOT__next),2);
    bufp->fullBit(oldp+609,(vlSymsp->TOP__top__DOT__genblk1__BRA__10__KET____DOT__engine.en_pixel_map));
    bufp->fullBit(oldp+610,(vlSymsp->TOP__top__DOT__genblk1__BRA__10__KET____DOT__engine.__PVT__distributor_ready));
    bufp->fullBit(oldp+611,(vlSymsp->TOP__top__DOT__genblk1__BRA__10__KET____DOT__engine.__PVT__en_stage_1));
    bufp->fullBit(oldp+612,(vlSymsp->TOP__top__DOT__genblk1__BRA__10__KET____DOT__engine.__PVT__en_stage_2));
    bufp->fullBit(oldp+613,(vlSymsp->TOP__top__DOT__genblk1__BRA__10__KET____DOT__engine.__PVT__init));
    bufp->fullCData(oldp+614,(vlSymsp->TOP__top__DOT__genblk1__BRA__10__KET____DOT__engine.__PVT__SM__DOT__next),2);
    bufp->fullBit(oldp+615,(vlSymsp->TOP__top__DOT__genblk1__BRA__11__KET____DOT__engine.en_pixel_map));
    bufp->fullBit(oldp+616,(vlSymsp->TOP__top__DOT__genblk1__BRA__11__KET____DOT__engine.__PVT__distributor_ready));
    bufp->fullBit(oldp+617,(vlSymsp->TOP__top__DOT__genblk1__BRA__11__KET____DOT__engine.__PVT__en_stage_1));
    bufp->fullBit(oldp+618,(vlSymsp->TOP__top__DOT__genblk1__BRA__11__KET____DOT__engine.__PVT__en_stage_2));
    bufp->fullBit(oldp+619,(vlSymsp->TOP__top__DOT__genblk1__BRA__11__KET____DOT__engine.__PVT__init));
    bufp->fullCData(oldp+620,(vlSymsp->TOP__top__DOT__genblk1__BRA__11__KET____DOT__engine.__PVT__SM__DOT__next),2);
    bufp->fullBit(oldp+621,((1U & (IData)(vlSelf->top__DOT__fin_bus))));
    bufp->fullBit(oldp+622,((1U & ((IData)(vlSelf->top__DOT__fin_bus) 
                                   >> 1U))));
    bufp->fullBit(oldp+623,((1U & ((IData)(vlSelf->top__DOT__fin_bus) 
                                   >> 2U))));
    bufp->fullBit(oldp+624,((1U & ((IData)(vlSelf->top__DOT__fin_bus) 
                                   >> 3U))));
    bufp->fullBit(oldp+625,((1U & ((IData)(vlSelf->top__DOT__fin_bus) 
                                   >> 4U))));
    bufp->fullBit(oldp+626,((1U & ((IData)(vlSelf->top__DOT__fin_bus) 
                                   >> 5U))));
    bufp->fullBit(oldp+627,((1U & ((IData)(vlSelf->top__DOT__fin_bus) 
                                   >> 6U))));
    bufp->fullBit(oldp+628,((1U & ((IData)(vlSelf->top__DOT__fin_bus) 
                                   >> 7U))));
    bufp->fullBit(oldp+629,((1U & ((IData)(vlSelf->top__DOT__fin_bus) 
                                   >> 8U))));
    bufp->fullBit(oldp+630,((1U & ((IData)(vlSelf->top__DOT__fin_bus) 
                                   >> 9U))));
    bufp->fullBit(oldp+631,((1U & ((IData)(vlSelf->top__DOT__fin_bus) 
                                   >> 0xaU))));
    bufp->fullBit(oldp+632,((1U & ((IData)(vlSelf->top__DOT__fin_bus) 
                                   >> 0xbU))));
    bufp->fullSData(oldp+633,(vlSelf->top__DOT__xpixel_bus[0]),10);
    bufp->fullSData(oldp+634,(vlSelf->top__DOT__xpixel_bus[1]),10);
    bufp->fullSData(oldp+635,(vlSelf->top__DOT__xpixel_bus[2]),10);
    bufp->fullSData(oldp+636,(vlSelf->top__DOT__xpixel_bus[3]),10);
    bufp->fullSData(oldp+637,(vlSelf->top__DOT__xpixel_bus[4]),10);
    bufp->fullSData(oldp+638,(vlSelf->top__DOT__xpixel_bus[5]),10);
    bufp->fullSData(oldp+639,(vlSelf->top__DOT__xpixel_bus[6]),10);
    bufp->fullSData(oldp+640,(vlSelf->top__DOT__xpixel_bus[7]),10);
    bufp->fullSData(oldp+641,(vlSelf->top__DOT__xpixel_bus[8]),10);
    bufp->fullSData(oldp+642,(vlSelf->top__DOT__xpixel_bus[9]),10);
    bufp->fullSData(oldp+643,(vlSelf->top__DOT__xpixel_bus[10]),10);
    bufp->fullSData(oldp+644,(vlSelf->top__DOT__xpixel_bus[11]),10);
    bufp->fullSData(oldp+645,(vlSelf->top__DOT__ypixel_bus[0]),10);
    bufp->fullSData(oldp+646,(vlSelf->top__DOT__ypixel_bus[1]),10);
    bufp->fullSData(oldp+647,(vlSelf->top__DOT__ypixel_bus[2]),10);
    bufp->fullSData(oldp+648,(vlSelf->top__DOT__ypixel_bus[3]),10);
    bufp->fullSData(oldp+649,(vlSelf->top__DOT__ypixel_bus[4]),10);
    bufp->fullSData(oldp+650,(vlSelf->top__DOT__ypixel_bus[5]),10);
    bufp->fullSData(oldp+651,(vlSelf->top__DOT__ypixel_bus[6]),10);
    bufp->fullSData(oldp+652,(vlSelf->top__DOT__ypixel_bus[7]),10);
    bufp->fullSData(oldp+653,(vlSelf->top__DOT__ypixel_bus[8]),10);
    bufp->fullSData(oldp+654,(vlSelf->top__DOT__ypixel_bus[9]),10);
    bufp->fullSData(oldp+655,(vlSelf->top__DOT__ypixel_bus[10]),10);
    bufp->fullSData(oldp+656,(vlSelf->top__DOT__ypixel_bus[11]),10);
    bufp->fullIData(oldp+657,(vlSelf->top__DOT__colour_bus_i[0]),24);
    bufp->fullIData(oldp+658,(vlSelf->top__DOT__colour_bus_i[1]),24);
    bufp->fullIData(oldp+659,(vlSelf->top__DOT__colour_bus_i[2]),24);
    bufp->fullIData(oldp+660,(vlSelf->top__DOT__colour_bus_i[3]),24);
    bufp->fullIData(oldp+661,(vlSelf->top__DOT__colour_bus_i[4]),24);
    bufp->fullIData(oldp+662,(vlSelf->top__DOT__colour_bus_i[5]),24);
    bufp->fullIData(oldp+663,(vlSelf->top__DOT__colour_bus_i[6]),24);
    bufp->fullIData(oldp+664,(vlSelf->top__DOT__colour_bus_i[7]),24);
    bufp->fullIData(oldp+665,(vlSelf->top__DOT__colour_bus_i[8]),24);
    bufp->fullIData(oldp+666,(vlSelf->top__DOT__colour_bus_i[9]),24);
    bufp->fullIData(oldp+667,(vlSelf->top__DOT__colour_bus_i[10]),24);
    bufp->fullIData(oldp+668,(vlSelf->top__DOT__colour_bus_i[11]),24);
    bufp->fullIData(oldp+669,(vlSelf->top__DOT__colour_bus_i
                              [0U]),24);
    bufp->fullSData(oldp+670,(vlSelf->top__DOT__xpixel_bus
                              [0U]),10);
    bufp->fullSData(oldp+671,(vlSelf->top__DOT__ypixel_bus
                              [0U]),10);
    bufp->fullSData(oldp+672,(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__queue_block.__PVT__prev_xpixel),10);
    bufp->fullIData(oldp+673,(vlSelf->top__DOT__colour_bus_i
                              [1U]),24);
    bufp->fullSData(oldp+674,(vlSelf->top__DOT__xpixel_bus
                              [1U]),10);
    bufp->fullSData(oldp+675,(vlSelf->top__DOT__ypixel_bus
                              [1U]),10);
    bufp->fullSData(oldp+676,(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__queue_block.__PVT__prev_xpixel),10);
    bufp->fullIData(oldp+677,(vlSelf->top__DOT__colour_bus_i
                              [2U]),24);
    bufp->fullSData(oldp+678,(vlSelf->top__DOT__xpixel_bus
                              [2U]),10);
    bufp->fullSData(oldp+679,(vlSelf->top__DOT__ypixel_bus
                              [2U]),10);
    bufp->fullSData(oldp+680,(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__queue_block.__PVT__prev_xpixel),10);
    bufp->fullIData(oldp+681,(vlSelf->top__DOT__colour_bus_i
                              [3U]),24);
    bufp->fullSData(oldp+682,(vlSelf->top__DOT__xpixel_bus
                              [3U]),10);
    bufp->fullSData(oldp+683,(vlSelf->top__DOT__ypixel_bus
                              [3U]),10);
    bufp->fullSData(oldp+684,(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__queue_block.__PVT__prev_xpixel),10);
    bufp->fullIData(oldp+685,(vlSelf->top__DOT__colour_bus_i
                              [4U]),24);
    bufp->fullSData(oldp+686,(vlSelf->top__DOT__xpixel_bus
                              [4U]),10);
    bufp->fullSData(oldp+687,(vlSelf->top__DOT__ypixel_bus
                              [4U]),10);
    bufp->fullSData(oldp+688,(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__queue_block.__PVT__prev_xpixel),10);
    bufp->fullIData(oldp+689,(vlSelf->top__DOT__colour_bus_i
                              [5U]),24);
    bufp->fullSData(oldp+690,(vlSelf->top__DOT__xpixel_bus
                              [5U]),10);
    bufp->fullSData(oldp+691,(vlSelf->top__DOT__ypixel_bus
                              [5U]),10);
    bufp->fullSData(oldp+692,(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__queue_block.__PVT__prev_xpixel),10);
    bufp->fullIData(oldp+693,(vlSelf->top__DOT__colour_bus_i
                              [6U]),24);
    bufp->fullSData(oldp+694,(vlSelf->top__DOT__xpixel_bus
                              [6U]),10);
    bufp->fullSData(oldp+695,(vlSelf->top__DOT__ypixel_bus
                              [6U]),10);
    bufp->fullSData(oldp+696,(vlSymsp->TOP__top__DOT__genblk1__BRA__6__KET____DOT__queue_block.__PVT__prev_xpixel),10);
    bufp->fullIData(oldp+697,(vlSelf->top__DOT__colour_bus_i
                              [7U]),24);
    bufp->fullSData(oldp+698,(vlSelf->top__DOT__xpixel_bus
                              [7U]),10);
    bufp->fullSData(oldp+699,(vlSelf->top__DOT__ypixel_bus
                              [7U]),10);
    bufp->fullSData(oldp+700,(vlSymsp->TOP__top__DOT__genblk1__BRA__7__KET____DOT__queue_block.__PVT__prev_xpixel),10);
    bufp->fullIData(oldp+701,(vlSelf->top__DOT__colour_bus_i
                              [8U]),24);
    bufp->fullSData(oldp+702,(vlSelf->top__DOT__xpixel_bus
                              [8U]),10);
    bufp->fullSData(oldp+703,(vlSelf->top__DOT__ypixel_bus
                              [8U]),10);
    bufp->fullSData(oldp+704,(vlSymsp->TOP__top__DOT__genblk1__BRA__8__KET____DOT__queue_block.__PVT__prev_xpixel),10);
    bufp->fullIData(oldp+705,(vlSelf->top__DOT__colour_bus_i
                              [9U]),24);
    bufp->fullSData(oldp+706,(vlSelf->top__DOT__xpixel_bus
                              [9U]),10);
    bufp->fullSData(oldp+707,(vlSelf->top__DOT__ypixel_bus
                              [9U]),10);
    bufp->fullSData(oldp+708,(vlSymsp->TOP__top__DOT__genblk1__BRA__9__KET____DOT__queue_block.__PVT__prev_xpixel),10);
    bufp->fullIData(oldp+709,(vlSelf->top__DOT__colour_bus_i
                              [0xaU]),24);
    bufp->fullSData(oldp+710,(vlSelf->top__DOT__xpixel_bus
                              [0xaU]),10);
    bufp->fullSData(oldp+711,(vlSelf->top__DOT__ypixel_bus
                              [0xaU]),10);
    bufp->fullSData(oldp+712,(vlSymsp->TOP__top__DOT__genblk1__BRA__10__KET____DOT__queue_block.__PVT__prev_xpixel),10);
    bufp->fullIData(oldp+713,(vlSelf->top__DOT__colour_bus_i
                              [0xbU]),24);
    bufp->fullSData(oldp+714,(vlSelf->top__DOT__xpixel_bus
                              [0xbU]),10);
    bufp->fullSData(oldp+715,(vlSelf->top__DOT__ypixel_bus
                              [0xbU]),10);
    bufp->fullSData(oldp+716,(vlSymsp->TOP__top__DOT__genblk1__BRA__11__KET____DOT__queue_block.__PVT__prev_xpixel),10);
    bufp->fullBit(oldp+717,((0xfffU == (IData)(vlSelf->top__DOT__en_bus))));
    bufp->fullSData(oldp+718,(vlSelf->top__DOT__en_bus),12);
    bufp->fullSData(oldp+719,(vlSelf->top__DOT__full_queue_bus),12);
    bufp->fullSData(oldp+720,(vlSelf->top__DOT__match_bus),12);
    bufp->fullIData(oldp+721,(vlSelf->top__DOT__j),32);
    bufp->fullBit(oldp+722,((1U & (IData)(vlSelf->top__DOT__full_queue_bus))));
    bufp->fullBit(oldp+723,((1U & ((IData)(vlSelf->top__DOT__full_queue_bus) 
                                   >> 1U))));
    bufp->fullBit(oldp+724,((1U & ((IData)(vlSelf->top__DOT__full_queue_bus) 
                                   >> 2U))));
    bufp->fullBit(oldp+725,((1U & ((IData)(vlSelf->top__DOT__full_queue_bus) 
                                   >> 3U))));
    bufp->fullBit(oldp+726,((1U & ((IData)(vlSelf->top__DOT__full_queue_bus) 
                                   >> 4U))));
    bufp->fullBit(oldp+727,((1U & ((IData)(vlSelf->top__DOT__full_queue_bus) 
                                   >> 5U))));
    bufp->fullBit(oldp+728,((1U & ((IData)(vlSelf->top__DOT__full_queue_bus) 
                                   >> 6U))));
    bufp->fullBit(oldp+729,((1U & ((IData)(vlSelf->top__DOT__full_queue_bus) 
                                   >> 7U))));
    bufp->fullBit(oldp+730,((1U & ((IData)(vlSelf->top__DOT__full_queue_bus) 
                                   >> 8U))));
    bufp->fullBit(oldp+731,((1U & ((IData)(vlSelf->top__DOT__full_queue_bus) 
                                   >> 9U))));
    bufp->fullBit(oldp+732,((1U & ((IData)(vlSelf->top__DOT__full_queue_bus) 
                                   >> 0xaU))));
    bufp->fullBit(oldp+733,((1U & ((IData)(vlSelf->top__DOT__full_queue_bus) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+734,(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__queue_block.full_queue));
    bufp->fullBit(oldp+735,(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__queue_block.en));
    bufp->fullBit(oldp+736,(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__queue_block.match));
    bufp->fullIData(oldp+737,(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__queue_block.__PVT__colour_queue[0]),24);
    bufp->fullIData(oldp+738,(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__queue_block.__PVT__colour_queue[1]),24);
    bufp->fullIData(oldp+739,(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__queue_block.__PVT__colour_queue[2]),24);
    bufp->fullIData(oldp+740,(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__queue_block.__PVT__colour_queue[3]),24);
    bufp->fullIData(oldp+741,(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__queue_block.__PVT__colour_queue[4]),24);
    bufp->fullIData(oldp+742,(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__queue_block.__PVT__colour_queue[5]),24);
    bufp->fullIData(oldp+743,(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__queue_block.__PVT__colour_queue[6]),24);
    bufp->fullIData(oldp+744,(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__queue_block.__PVT__colour_queue[7]),24);
    bufp->fullIData(oldp+745,(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__queue_block.__PVT__colour_queue[8]),24);
    bufp->fullIData(oldp+746,(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__queue_block.__PVT__colour_queue[9]),24);
    bufp->fullSData(oldp+747,(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__queue_block.__PVT__xqueue[0]),10);
    bufp->fullSData(oldp+748,(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__queue_block.__PVT__xqueue[1]),10);
    bufp->fullSData(oldp+749,(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__queue_block.__PVT__xqueue[2]),10);
    bufp->fullSData(oldp+750,(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__queue_block.__PVT__xqueue[3]),10);
    bufp->fullSData(oldp+751,(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__queue_block.__PVT__xqueue[4]),10);
    bufp->fullSData(oldp+752,(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__queue_block.__PVT__xqueue[5]),10);
    bufp->fullSData(oldp+753,(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__queue_block.__PVT__xqueue[6]),10);
    bufp->fullSData(oldp+754,(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__queue_block.__PVT__xqueue[7]),10);
    bufp->fullSData(oldp+755,(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__queue_block.__PVT__xqueue[8]),10);
    bufp->fullSData(oldp+756,(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__queue_block.__PVT__xqueue[9]),10);
    bufp->fullSData(oldp+757,(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__queue_block.__PVT__yqueue[0]),10);
    bufp->fullSData(oldp+758,(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__queue_block.__PVT__yqueue[1]),10);
    bufp->fullSData(oldp+759,(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__queue_block.__PVT__yqueue[2]),10);
    bufp->fullSData(oldp+760,(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__queue_block.__PVT__yqueue[3]),10);
    bufp->fullSData(oldp+761,(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__queue_block.__PVT__yqueue[4]),10);
    bufp->fullSData(oldp+762,(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__queue_block.__PVT__yqueue[5]),10);
    bufp->fullSData(oldp+763,(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__queue_block.__PVT__yqueue[6]),10);
    bufp->fullSData(oldp+764,(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__queue_block.__PVT__yqueue[7]),10);
    bufp->fullSData(oldp+765,(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__queue_block.__PVT__yqueue[8]),10);
    bufp->fullSData(oldp+766,(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__queue_block.__PVT__yqueue[9]),10);
    bufp->fullCData(oldp+767,(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__queue_block.__PVT__counter),4);
    bufp->fullBit(oldp+768,(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__queue_block.full_queue));
    bufp->fullBit(oldp+769,(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__queue_block.en));
    bufp->fullBit(oldp+770,(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__queue_block.match));
    bufp->fullIData(oldp+771,(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__queue_block.__PVT__colour_queue[0]),24);
    bufp->fullIData(oldp+772,(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__queue_block.__PVT__colour_queue[1]),24);
    bufp->fullIData(oldp+773,(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__queue_block.__PVT__colour_queue[2]),24);
    bufp->fullIData(oldp+774,(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__queue_block.__PVT__colour_queue[3]),24);
    bufp->fullIData(oldp+775,(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__queue_block.__PVT__colour_queue[4]),24);
    bufp->fullIData(oldp+776,(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__queue_block.__PVT__colour_queue[5]),24);
    bufp->fullIData(oldp+777,(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__queue_block.__PVT__colour_queue[6]),24);
    bufp->fullIData(oldp+778,(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__queue_block.__PVT__colour_queue[7]),24);
    bufp->fullIData(oldp+779,(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__queue_block.__PVT__colour_queue[8]),24);
    bufp->fullIData(oldp+780,(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__queue_block.__PVT__colour_queue[9]),24);
    bufp->fullSData(oldp+781,(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__queue_block.__PVT__xqueue[0]),10);
    bufp->fullSData(oldp+782,(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__queue_block.__PVT__xqueue[1]),10);
    bufp->fullSData(oldp+783,(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__queue_block.__PVT__xqueue[2]),10);
    bufp->fullSData(oldp+784,(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__queue_block.__PVT__xqueue[3]),10);
    bufp->fullSData(oldp+785,(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__queue_block.__PVT__xqueue[4]),10);
    bufp->fullSData(oldp+786,(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__queue_block.__PVT__xqueue[5]),10);
    bufp->fullSData(oldp+787,(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__queue_block.__PVT__xqueue[6]),10);
    bufp->fullSData(oldp+788,(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__queue_block.__PVT__xqueue[7]),10);
    bufp->fullSData(oldp+789,(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__queue_block.__PVT__xqueue[8]),10);
    bufp->fullSData(oldp+790,(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__queue_block.__PVT__xqueue[9]),10);
    bufp->fullSData(oldp+791,(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__queue_block.__PVT__yqueue[0]),10);
    bufp->fullSData(oldp+792,(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__queue_block.__PVT__yqueue[1]),10);
    bufp->fullSData(oldp+793,(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__queue_block.__PVT__yqueue[2]),10);
    bufp->fullSData(oldp+794,(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__queue_block.__PVT__yqueue[3]),10);
    bufp->fullSData(oldp+795,(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__queue_block.__PVT__yqueue[4]),10);
    bufp->fullSData(oldp+796,(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__queue_block.__PVT__yqueue[5]),10);
    bufp->fullSData(oldp+797,(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__queue_block.__PVT__yqueue[6]),10);
    bufp->fullSData(oldp+798,(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__queue_block.__PVT__yqueue[7]),10);
    bufp->fullSData(oldp+799,(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__queue_block.__PVT__yqueue[8]),10);
    bufp->fullSData(oldp+800,(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__queue_block.__PVT__yqueue[9]),10);
    bufp->fullCData(oldp+801,(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__queue_block.__PVT__counter),4);
    bufp->fullBit(oldp+802,(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__queue_block.full_queue));
    bufp->fullBit(oldp+803,(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__queue_block.en));
    bufp->fullBit(oldp+804,(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__queue_block.match));
    bufp->fullIData(oldp+805,(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__queue_block.__PVT__colour_queue[0]),24);
    bufp->fullIData(oldp+806,(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__queue_block.__PVT__colour_queue[1]),24);
    bufp->fullIData(oldp+807,(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__queue_block.__PVT__colour_queue[2]),24);
    bufp->fullIData(oldp+808,(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__queue_block.__PVT__colour_queue[3]),24);
    bufp->fullIData(oldp+809,(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__queue_block.__PVT__colour_queue[4]),24);
    bufp->fullIData(oldp+810,(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__queue_block.__PVT__colour_queue[5]),24);
    bufp->fullIData(oldp+811,(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__queue_block.__PVT__colour_queue[6]),24);
    bufp->fullIData(oldp+812,(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__queue_block.__PVT__colour_queue[7]),24);
    bufp->fullIData(oldp+813,(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__queue_block.__PVT__colour_queue[8]),24);
    bufp->fullIData(oldp+814,(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__queue_block.__PVT__colour_queue[9]),24);
    bufp->fullSData(oldp+815,(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__queue_block.__PVT__xqueue[0]),10);
    bufp->fullSData(oldp+816,(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__queue_block.__PVT__xqueue[1]),10);
    bufp->fullSData(oldp+817,(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__queue_block.__PVT__xqueue[2]),10);
    bufp->fullSData(oldp+818,(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__queue_block.__PVT__xqueue[3]),10);
    bufp->fullSData(oldp+819,(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__queue_block.__PVT__xqueue[4]),10);
    bufp->fullSData(oldp+820,(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__queue_block.__PVT__xqueue[5]),10);
    bufp->fullSData(oldp+821,(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__queue_block.__PVT__xqueue[6]),10);
    bufp->fullSData(oldp+822,(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__queue_block.__PVT__xqueue[7]),10);
    bufp->fullSData(oldp+823,(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__queue_block.__PVT__xqueue[8]),10);
    bufp->fullSData(oldp+824,(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__queue_block.__PVT__xqueue[9]),10);
    bufp->fullSData(oldp+825,(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__queue_block.__PVT__yqueue[0]),10);
    bufp->fullSData(oldp+826,(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__queue_block.__PVT__yqueue[1]),10);
    bufp->fullSData(oldp+827,(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__queue_block.__PVT__yqueue[2]),10);
    bufp->fullSData(oldp+828,(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__queue_block.__PVT__yqueue[3]),10);
    bufp->fullSData(oldp+829,(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__queue_block.__PVT__yqueue[4]),10);
    bufp->fullSData(oldp+830,(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__queue_block.__PVT__yqueue[5]),10);
    bufp->fullSData(oldp+831,(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__queue_block.__PVT__yqueue[6]),10);
    bufp->fullSData(oldp+832,(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__queue_block.__PVT__yqueue[7]),10);
    bufp->fullSData(oldp+833,(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__queue_block.__PVT__yqueue[8]),10);
    bufp->fullSData(oldp+834,(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__queue_block.__PVT__yqueue[9]),10);
    bufp->fullCData(oldp+835,(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__queue_block.__PVT__counter),4);
    bufp->fullBit(oldp+836,(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__queue_block.full_queue));
    bufp->fullBit(oldp+837,(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__queue_block.en));
    bufp->fullBit(oldp+838,(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__queue_block.match));
    bufp->fullIData(oldp+839,(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__queue_block.__PVT__colour_queue[0]),24);
    bufp->fullIData(oldp+840,(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__queue_block.__PVT__colour_queue[1]),24);
    bufp->fullIData(oldp+841,(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__queue_block.__PVT__colour_queue[2]),24);
    bufp->fullIData(oldp+842,(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__queue_block.__PVT__colour_queue[3]),24);
    bufp->fullIData(oldp+843,(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__queue_block.__PVT__colour_queue[4]),24);
    bufp->fullIData(oldp+844,(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__queue_block.__PVT__colour_queue[5]),24);
    bufp->fullIData(oldp+845,(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__queue_block.__PVT__colour_queue[6]),24);
    bufp->fullIData(oldp+846,(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__queue_block.__PVT__colour_queue[7]),24);
    bufp->fullIData(oldp+847,(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__queue_block.__PVT__colour_queue[8]),24);
    bufp->fullIData(oldp+848,(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__queue_block.__PVT__colour_queue[9]),24);
    bufp->fullSData(oldp+849,(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__queue_block.__PVT__xqueue[0]),10);
    bufp->fullSData(oldp+850,(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__queue_block.__PVT__xqueue[1]),10);
    bufp->fullSData(oldp+851,(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__queue_block.__PVT__xqueue[2]),10);
    bufp->fullSData(oldp+852,(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__queue_block.__PVT__xqueue[3]),10);
    bufp->fullSData(oldp+853,(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__queue_block.__PVT__xqueue[4]),10);
    bufp->fullSData(oldp+854,(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__queue_block.__PVT__xqueue[5]),10);
    bufp->fullSData(oldp+855,(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__queue_block.__PVT__xqueue[6]),10);
    bufp->fullSData(oldp+856,(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__queue_block.__PVT__xqueue[7]),10);
    bufp->fullSData(oldp+857,(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__queue_block.__PVT__xqueue[8]),10);
    bufp->fullSData(oldp+858,(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__queue_block.__PVT__xqueue[9]),10);
    bufp->fullSData(oldp+859,(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__queue_block.__PVT__yqueue[0]),10);
    bufp->fullSData(oldp+860,(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__queue_block.__PVT__yqueue[1]),10);
    bufp->fullSData(oldp+861,(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__queue_block.__PVT__yqueue[2]),10);
    bufp->fullSData(oldp+862,(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__queue_block.__PVT__yqueue[3]),10);
    bufp->fullSData(oldp+863,(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__queue_block.__PVT__yqueue[4]),10);
    bufp->fullSData(oldp+864,(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__queue_block.__PVT__yqueue[5]),10);
    bufp->fullSData(oldp+865,(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__queue_block.__PVT__yqueue[6]),10);
    bufp->fullSData(oldp+866,(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__queue_block.__PVT__yqueue[7]),10);
    bufp->fullSData(oldp+867,(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__queue_block.__PVT__yqueue[8]),10);
    bufp->fullSData(oldp+868,(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__queue_block.__PVT__yqueue[9]),10);
    bufp->fullCData(oldp+869,(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__queue_block.__PVT__counter),4);
    bufp->fullBit(oldp+870,(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__queue_block.full_queue));
    bufp->fullBit(oldp+871,(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__queue_block.en));
    bufp->fullBit(oldp+872,(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__queue_block.match));
    bufp->fullIData(oldp+873,(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__queue_block.__PVT__colour_queue[0]),24);
    bufp->fullIData(oldp+874,(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__queue_block.__PVT__colour_queue[1]),24);
    bufp->fullIData(oldp+875,(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__queue_block.__PVT__colour_queue[2]),24);
    bufp->fullIData(oldp+876,(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__queue_block.__PVT__colour_queue[3]),24);
    bufp->fullIData(oldp+877,(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__queue_block.__PVT__colour_queue[4]),24);
    bufp->fullIData(oldp+878,(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__queue_block.__PVT__colour_queue[5]),24);
    bufp->fullIData(oldp+879,(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__queue_block.__PVT__colour_queue[6]),24);
    bufp->fullIData(oldp+880,(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__queue_block.__PVT__colour_queue[7]),24);
    bufp->fullIData(oldp+881,(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__queue_block.__PVT__colour_queue[8]),24);
    bufp->fullIData(oldp+882,(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__queue_block.__PVT__colour_queue[9]),24);
    bufp->fullSData(oldp+883,(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__queue_block.__PVT__xqueue[0]),10);
    bufp->fullSData(oldp+884,(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__queue_block.__PVT__xqueue[1]),10);
    bufp->fullSData(oldp+885,(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__queue_block.__PVT__xqueue[2]),10);
    bufp->fullSData(oldp+886,(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__queue_block.__PVT__xqueue[3]),10);
    bufp->fullSData(oldp+887,(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__queue_block.__PVT__xqueue[4]),10);
    bufp->fullSData(oldp+888,(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__queue_block.__PVT__xqueue[5]),10);
    bufp->fullSData(oldp+889,(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__queue_block.__PVT__xqueue[6]),10);
    bufp->fullSData(oldp+890,(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__queue_block.__PVT__xqueue[7]),10);
    bufp->fullSData(oldp+891,(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__queue_block.__PVT__xqueue[8]),10);
    bufp->fullSData(oldp+892,(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__queue_block.__PVT__xqueue[9]),10);
    bufp->fullSData(oldp+893,(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__queue_block.__PVT__yqueue[0]),10);
    bufp->fullSData(oldp+894,(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__queue_block.__PVT__yqueue[1]),10);
    bufp->fullSData(oldp+895,(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__queue_block.__PVT__yqueue[2]),10);
    bufp->fullSData(oldp+896,(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__queue_block.__PVT__yqueue[3]),10);
    bufp->fullSData(oldp+897,(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__queue_block.__PVT__yqueue[4]),10);
    bufp->fullSData(oldp+898,(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__queue_block.__PVT__yqueue[5]),10);
    bufp->fullSData(oldp+899,(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__queue_block.__PVT__yqueue[6]),10);
    bufp->fullSData(oldp+900,(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__queue_block.__PVT__yqueue[7]),10);
    bufp->fullSData(oldp+901,(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__queue_block.__PVT__yqueue[8]),10);
    bufp->fullSData(oldp+902,(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__queue_block.__PVT__yqueue[9]),10);
    bufp->fullCData(oldp+903,(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__queue_block.__PVT__counter),4);
    bufp->fullBit(oldp+904,(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__queue_block.full_queue));
    bufp->fullBit(oldp+905,(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__queue_block.en));
    bufp->fullBit(oldp+906,(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__queue_block.match));
    bufp->fullIData(oldp+907,(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__queue_block.__PVT__colour_queue[0]),24);
    bufp->fullIData(oldp+908,(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__queue_block.__PVT__colour_queue[1]),24);
    bufp->fullIData(oldp+909,(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__queue_block.__PVT__colour_queue[2]),24);
    bufp->fullIData(oldp+910,(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__queue_block.__PVT__colour_queue[3]),24);
    bufp->fullIData(oldp+911,(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__queue_block.__PVT__colour_queue[4]),24);
    bufp->fullIData(oldp+912,(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__queue_block.__PVT__colour_queue[5]),24);
    bufp->fullIData(oldp+913,(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__queue_block.__PVT__colour_queue[6]),24);
    bufp->fullIData(oldp+914,(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__queue_block.__PVT__colour_queue[7]),24);
    bufp->fullIData(oldp+915,(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__queue_block.__PVT__colour_queue[8]),24);
    bufp->fullIData(oldp+916,(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__queue_block.__PVT__colour_queue[9]),24);
    bufp->fullSData(oldp+917,(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__queue_block.__PVT__xqueue[0]),10);
    bufp->fullSData(oldp+918,(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__queue_block.__PVT__xqueue[1]),10);
    bufp->fullSData(oldp+919,(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__queue_block.__PVT__xqueue[2]),10);
    bufp->fullSData(oldp+920,(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__queue_block.__PVT__xqueue[3]),10);
    bufp->fullSData(oldp+921,(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__queue_block.__PVT__xqueue[4]),10);
    bufp->fullSData(oldp+922,(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__queue_block.__PVT__xqueue[5]),10);
    bufp->fullSData(oldp+923,(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__queue_block.__PVT__xqueue[6]),10);
    bufp->fullSData(oldp+924,(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__queue_block.__PVT__xqueue[7]),10);
    bufp->fullSData(oldp+925,(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__queue_block.__PVT__xqueue[8]),10);
    bufp->fullSData(oldp+926,(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__queue_block.__PVT__xqueue[9]),10);
    bufp->fullSData(oldp+927,(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__queue_block.__PVT__yqueue[0]),10);
    bufp->fullSData(oldp+928,(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__queue_block.__PVT__yqueue[1]),10);
    bufp->fullSData(oldp+929,(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__queue_block.__PVT__yqueue[2]),10);
    bufp->fullSData(oldp+930,(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__queue_block.__PVT__yqueue[3]),10);
    bufp->fullSData(oldp+931,(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__queue_block.__PVT__yqueue[4]),10);
    bufp->fullSData(oldp+932,(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__queue_block.__PVT__yqueue[5]),10);
    bufp->fullSData(oldp+933,(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__queue_block.__PVT__yqueue[6]),10);
    bufp->fullSData(oldp+934,(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__queue_block.__PVT__yqueue[7]),10);
    bufp->fullSData(oldp+935,(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__queue_block.__PVT__yqueue[8]),10);
    bufp->fullSData(oldp+936,(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__queue_block.__PVT__yqueue[9]),10);
    bufp->fullCData(oldp+937,(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__queue_block.__PVT__counter),4);
    bufp->fullBit(oldp+938,(vlSymsp->TOP__top__DOT__genblk1__BRA__6__KET____DOT__queue_block.full_queue));
    bufp->fullBit(oldp+939,(vlSymsp->TOP__top__DOT__genblk1__BRA__6__KET____DOT__queue_block.en));
    bufp->fullBit(oldp+940,(vlSymsp->TOP__top__DOT__genblk1__BRA__6__KET____DOT__queue_block.match));
    bufp->fullIData(oldp+941,(vlSymsp->TOP__top__DOT__genblk1__BRA__6__KET____DOT__queue_block.__PVT__colour_queue[0]),24);
    bufp->fullIData(oldp+942,(vlSymsp->TOP__top__DOT__genblk1__BRA__6__KET____DOT__queue_block.__PVT__colour_queue[1]),24);
    bufp->fullIData(oldp+943,(vlSymsp->TOP__top__DOT__genblk1__BRA__6__KET____DOT__queue_block.__PVT__colour_queue[2]),24);
    bufp->fullIData(oldp+944,(vlSymsp->TOP__top__DOT__genblk1__BRA__6__KET____DOT__queue_block.__PVT__colour_queue[3]),24);
    bufp->fullIData(oldp+945,(vlSymsp->TOP__top__DOT__genblk1__BRA__6__KET____DOT__queue_block.__PVT__colour_queue[4]),24);
    bufp->fullIData(oldp+946,(vlSymsp->TOP__top__DOT__genblk1__BRA__6__KET____DOT__queue_block.__PVT__colour_queue[5]),24);
    bufp->fullIData(oldp+947,(vlSymsp->TOP__top__DOT__genblk1__BRA__6__KET____DOT__queue_block.__PVT__colour_queue[6]),24);
    bufp->fullIData(oldp+948,(vlSymsp->TOP__top__DOT__genblk1__BRA__6__KET____DOT__queue_block.__PVT__colour_queue[7]),24);
    bufp->fullIData(oldp+949,(vlSymsp->TOP__top__DOT__genblk1__BRA__6__KET____DOT__queue_block.__PVT__colour_queue[8]),24);
    bufp->fullIData(oldp+950,(vlSymsp->TOP__top__DOT__genblk1__BRA__6__KET____DOT__queue_block.__PVT__colour_queue[9]),24);
    bufp->fullSData(oldp+951,(vlSymsp->TOP__top__DOT__genblk1__BRA__6__KET____DOT__queue_block.__PVT__xqueue[0]),10);
    bufp->fullSData(oldp+952,(vlSymsp->TOP__top__DOT__genblk1__BRA__6__KET____DOT__queue_block.__PVT__xqueue[1]),10);
    bufp->fullSData(oldp+953,(vlSymsp->TOP__top__DOT__genblk1__BRA__6__KET____DOT__queue_block.__PVT__xqueue[2]),10);
    bufp->fullSData(oldp+954,(vlSymsp->TOP__top__DOT__genblk1__BRA__6__KET____DOT__queue_block.__PVT__xqueue[3]),10);
    bufp->fullSData(oldp+955,(vlSymsp->TOP__top__DOT__genblk1__BRA__6__KET____DOT__queue_block.__PVT__xqueue[4]),10);
    bufp->fullSData(oldp+956,(vlSymsp->TOP__top__DOT__genblk1__BRA__6__KET____DOT__queue_block.__PVT__xqueue[5]),10);
    bufp->fullSData(oldp+957,(vlSymsp->TOP__top__DOT__genblk1__BRA__6__KET____DOT__queue_block.__PVT__xqueue[6]),10);
    bufp->fullSData(oldp+958,(vlSymsp->TOP__top__DOT__genblk1__BRA__6__KET____DOT__queue_block.__PVT__xqueue[7]),10);
    bufp->fullSData(oldp+959,(vlSymsp->TOP__top__DOT__genblk1__BRA__6__KET____DOT__queue_block.__PVT__xqueue[8]),10);
    bufp->fullSData(oldp+960,(vlSymsp->TOP__top__DOT__genblk1__BRA__6__KET____DOT__queue_block.__PVT__xqueue[9]),10);
    bufp->fullSData(oldp+961,(vlSymsp->TOP__top__DOT__genblk1__BRA__6__KET____DOT__queue_block.__PVT__yqueue[0]),10);
    bufp->fullSData(oldp+962,(vlSymsp->TOP__top__DOT__genblk1__BRA__6__KET____DOT__queue_block.__PVT__yqueue[1]),10);
    bufp->fullSData(oldp+963,(vlSymsp->TOP__top__DOT__genblk1__BRA__6__KET____DOT__queue_block.__PVT__yqueue[2]),10);
    bufp->fullSData(oldp+964,(vlSymsp->TOP__top__DOT__genblk1__BRA__6__KET____DOT__queue_block.__PVT__yqueue[3]),10);
    bufp->fullSData(oldp+965,(vlSymsp->TOP__top__DOT__genblk1__BRA__6__KET____DOT__queue_block.__PVT__yqueue[4]),10);
    bufp->fullSData(oldp+966,(vlSymsp->TOP__top__DOT__genblk1__BRA__6__KET____DOT__queue_block.__PVT__yqueue[5]),10);
    bufp->fullSData(oldp+967,(vlSymsp->TOP__top__DOT__genblk1__BRA__6__KET____DOT__queue_block.__PVT__yqueue[6]),10);
    bufp->fullSData(oldp+968,(vlSymsp->TOP__top__DOT__genblk1__BRA__6__KET____DOT__queue_block.__PVT__yqueue[7]),10);
    bufp->fullSData(oldp+969,(vlSymsp->TOP__top__DOT__genblk1__BRA__6__KET____DOT__queue_block.__PVT__yqueue[8]),10);
    bufp->fullSData(oldp+970,(vlSymsp->TOP__top__DOT__genblk1__BRA__6__KET____DOT__queue_block.__PVT__yqueue[9]),10);
    bufp->fullCData(oldp+971,(vlSymsp->TOP__top__DOT__genblk1__BRA__6__KET____DOT__queue_block.__PVT__counter),4);
    bufp->fullBit(oldp+972,(vlSymsp->TOP__top__DOT__genblk1__BRA__7__KET____DOT__queue_block.full_queue));
    bufp->fullBit(oldp+973,(vlSymsp->TOP__top__DOT__genblk1__BRA__7__KET____DOT__queue_block.en));
    bufp->fullBit(oldp+974,(vlSymsp->TOP__top__DOT__genblk1__BRA__7__KET____DOT__queue_block.match));
    bufp->fullIData(oldp+975,(vlSymsp->TOP__top__DOT__genblk1__BRA__7__KET____DOT__queue_block.__PVT__colour_queue[0]),24);
    bufp->fullIData(oldp+976,(vlSymsp->TOP__top__DOT__genblk1__BRA__7__KET____DOT__queue_block.__PVT__colour_queue[1]),24);
    bufp->fullIData(oldp+977,(vlSymsp->TOP__top__DOT__genblk1__BRA__7__KET____DOT__queue_block.__PVT__colour_queue[2]),24);
    bufp->fullIData(oldp+978,(vlSymsp->TOP__top__DOT__genblk1__BRA__7__KET____DOT__queue_block.__PVT__colour_queue[3]),24);
    bufp->fullIData(oldp+979,(vlSymsp->TOP__top__DOT__genblk1__BRA__7__KET____DOT__queue_block.__PVT__colour_queue[4]),24);
    bufp->fullIData(oldp+980,(vlSymsp->TOP__top__DOT__genblk1__BRA__7__KET____DOT__queue_block.__PVT__colour_queue[5]),24);
    bufp->fullIData(oldp+981,(vlSymsp->TOP__top__DOT__genblk1__BRA__7__KET____DOT__queue_block.__PVT__colour_queue[6]),24);
    bufp->fullIData(oldp+982,(vlSymsp->TOP__top__DOT__genblk1__BRA__7__KET____DOT__queue_block.__PVT__colour_queue[7]),24);
    bufp->fullIData(oldp+983,(vlSymsp->TOP__top__DOT__genblk1__BRA__7__KET____DOT__queue_block.__PVT__colour_queue[8]),24);
    bufp->fullIData(oldp+984,(vlSymsp->TOP__top__DOT__genblk1__BRA__7__KET____DOT__queue_block.__PVT__colour_queue[9]),24);
    bufp->fullSData(oldp+985,(vlSymsp->TOP__top__DOT__genblk1__BRA__7__KET____DOT__queue_block.__PVT__xqueue[0]),10);
    bufp->fullSData(oldp+986,(vlSymsp->TOP__top__DOT__genblk1__BRA__7__KET____DOT__queue_block.__PVT__xqueue[1]),10);
    bufp->fullSData(oldp+987,(vlSymsp->TOP__top__DOT__genblk1__BRA__7__KET____DOT__queue_block.__PVT__xqueue[2]),10);
    bufp->fullSData(oldp+988,(vlSymsp->TOP__top__DOT__genblk1__BRA__7__KET____DOT__queue_block.__PVT__xqueue[3]),10);
    bufp->fullSData(oldp+989,(vlSymsp->TOP__top__DOT__genblk1__BRA__7__KET____DOT__queue_block.__PVT__xqueue[4]),10);
    bufp->fullSData(oldp+990,(vlSymsp->TOP__top__DOT__genblk1__BRA__7__KET____DOT__queue_block.__PVT__xqueue[5]),10);
    bufp->fullSData(oldp+991,(vlSymsp->TOP__top__DOT__genblk1__BRA__7__KET____DOT__queue_block.__PVT__xqueue[6]),10);
    bufp->fullSData(oldp+992,(vlSymsp->TOP__top__DOT__genblk1__BRA__7__KET____DOT__queue_block.__PVT__xqueue[7]),10);
    bufp->fullSData(oldp+993,(vlSymsp->TOP__top__DOT__genblk1__BRA__7__KET____DOT__queue_block.__PVT__xqueue[8]),10);
    bufp->fullSData(oldp+994,(vlSymsp->TOP__top__DOT__genblk1__BRA__7__KET____DOT__queue_block.__PVT__xqueue[9]),10);
    bufp->fullSData(oldp+995,(vlSymsp->TOP__top__DOT__genblk1__BRA__7__KET____DOT__queue_block.__PVT__yqueue[0]),10);
    bufp->fullSData(oldp+996,(vlSymsp->TOP__top__DOT__genblk1__BRA__7__KET____DOT__queue_block.__PVT__yqueue[1]),10);
    bufp->fullSData(oldp+997,(vlSymsp->TOP__top__DOT__genblk1__BRA__7__KET____DOT__queue_block.__PVT__yqueue[2]),10);
    bufp->fullSData(oldp+998,(vlSymsp->TOP__top__DOT__genblk1__BRA__7__KET____DOT__queue_block.__PVT__yqueue[3]),10);
    bufp->fullSData(oldp+999,(vlSymsp->TOP__top__DOT__genblk1__BRA__7__KET____DOT__queue_block.__PVT__yqueue[4]),10);
    bufp->fullSData(oldp+1000,(vlSymsp->TOP__top__DOT__genblk1__BRA__7__KET____DOT__queue_block.__PVT__yqueue[5]),10);
    bufp->fullSData(oldp+1001,(vlSymsp->TOP__top__DOT__genblk1__BRA__7__KET____DOT__queue_block.__PVT__yqueue[6]),10);
    bufp->fullSData(oldp+1002,(vlSymsp->TOP__top__DOT__genblk1__BRA__7__KET____DOT__queue_block.__PVT__yqueue[7]),10);
    bufp->fullSData(oldp+1003,(vlSymsp->TOP__top__DOT__genblk1__BRA__7__KET____DOT__queue_block.__PVT__yqueue[8]),10);
    bufp->fullSData(oldp+1004,(vlSymsp->TOP__top__DOT__genblk1__BRA__7__KET____DOT__queue_block.__PVT__yqueue[9]),10);
    bufp->fullCData(oldp+1005,(vlSymsp->TOP__top__DOT__genblk1__BRA__7__KET____DOT__queue_block.__PVT__counter),4);
    bufp->fullBit(oldp+1006,(vlSymsp->TOP__top__DOT__genblk1__BRA__8__KET____DOT__queue_block.full_queue));
    bufp->fullBit(oldp+1007,(vlSymsp->TOP__top__DOT__genblk1__BRA__8__KET____DOT__queue_block.en));
    bufp->fullBit(oldp+1008,(vlSymsp->TOP__top__DOT__genblk1__BRA__8__KET____DOT__queue_block.match));
    bufp->fullIData(oldp+1009,(vlSymsp->TOP__top__DOT__genblk1__BRA__8__KET____DOT__queue_block.__PVT__colour_queue[0]),24);
    bufp->fullIData(oldp+1010,(vlSymsp->TOP__top__DOT__genblk1__BRA__8__KET____DOT__queue_block.__PVT__colour_queue[1]),24);
    bufp->fullIData(oldp+1011,(vlSymsp->TOP__top__DOT__genblk1__BRA__8__KET____DOT__queue_block.__PVT__colour_queue[2]),24);
    bufp->fullIData(oldp+1012,(vlSymsp->TOP__top__DOT__genblk1__BRA__8__KET____DOT__queue_block.__PVT__colour_queue[3]),24);
    bufp->fullIData(oldp+1013,(vlSymsp->TOP__top__DOT__genblk1__BRA__8__KET____DOT__queue_block.__PVT__colour_queue[4]),24);
    bufp->fullIData(oldp+1014,(vlSymsp->TOP__top__DOT__genblk1__BRA__8__KET____DOT__queue_block.__PVT__colour_queue[5]),24);
    bufp->fullIData(oldp+1015,(vlSymsp->TOP__top__DOT__genblk1__BRA__8__KET____DOT__queue_block.__PVT__colour_queue[6]),24);
    bufp->fullIData(oldp+1016,(vlSymsp->TOP__top__DOT__genblk1__BRA__8__KET____DOT__queue_block.__PVT__colour_queue[7]),24);
    bufp->fullIData(oldp+1017,(vlSymsp->TOP__top__DOT__genblk1__BRA__8__KET____DOT__queue_block.__PVT__colour_queue[8]),24);
    bufp->fullIData(oldp+1018,(vlSymsp->TOP__top__DOT__genblk1__BRA__8__KET____DOT__queue_block.__PVT__colour_queue[9]),24);
    bufp->fullSData(oldp+1019,(vlSymsp->TOP__top__DOT__genblk1__BRA__8__KET____DOT__queue_block.__PVT__xqueue[0]),10);
    bufp->fullSData(oldp+1020,(vlSymsp->TOP__top__DOT__genblk1__BRA__8__KET____DOT__queue_block.__PVT__xqueue[1]),10);
    bufp->fullSData(oldp+1021,(vlSymsp->TOP__top__DOT__genblk1__BRA__8__KET____DOT__queue_block.__PVT__xqueue[2]),10);
    bufp->fullSData(oldp+1022,(vlSymsp->TOP__top__DOT__genblk1__BRA__8__KET____DOT__queue_block.__PVT__xqueue[3]),10);
    bufp->fullSData(oldp+1023,(vlSymsp->TOP__top__DOT__genblk1__BRA__8__KET____DOT__queue_block.__PVT__xqueue[4]),10);
    bufp->fullSData(oldp+1024,(vlSymsp->TOP__top__DOT__genblk1__BRA__8__KET____DOT__queue_block.__PVT__xqueue[5]),10);
    bufp->fullSData(oldp+1025,(vlSymsp->TOP__top__DOT__genblk1__BRA__8__KET____DOT__queue_block.__PVT__xqueue[6]),10);
    bufp->fullSData(oldp+1026,(vlSymsp->TOP__top__DOT__genblk1__BRA__8__KET____DOT__queue_block.__PVT__xqueue[7]),10);
    bufp->fullSData(oldp+1027,(vlSymsp->TOP__top__DOT__genblk1__BRA__8__KET____DOT__queue_block.__PVT__xqueue[8]),10);
    bufp->fullSData(oldp+1028,(vlSymsp->TOP__top__DOT__genblk1__BRA__8__KET____DOT__queue_block.__PVT__xqueue[9]),10);
    bufp->fullSData(oldp+1029,(vlSymsp->TOP__top__DOT__genblk1__BRA__8__KET____DOT__queue_block.__PVT__yqueue[0]),10);
    bufp->fullSData(oldp+1030,(vlSymsp->TOP__top__DOT__genblk1__BRA__8__KET____DOT__queue_block.__PVT__yqueue[1]),10);
    bufp->fullSData(oldp+1031,(vlSymsp->TOP__top__DOT__genblk1__BRA__8__KET____DOT__queue_block.__PVT__yqueue[2]),10);
    bufp->fullSData(oldp+1032,(vlSymsp->TOP__top__DOT__genblk1__BRA__8__KET____DOT__queue_block.__PVT__yqueue[3]),10);
    bufp->fullSData(oldp+1033,(vlSymsp->TOP__top__DOT__genblk1__BRA__8__KET____DOT__queue_block.__PVT__yqueue[4]),10);
    bufp->fullSData(oldp+1034,(vlSymsp->TOP__top__DOT__genblk1__BRA__8__KET____DOT__queue_block.__PVT__yqueue[5]),10);
    bufp->fullSData(oldp+1035,(vlSymsp->TOP__top__DOT__genblk1__BRA__8__KET____DOT__queue_block.__PVT__yqueue[6]),10);
    bufp->fullSData(oldp+1036,(vlSymsp->TOP__top__DOT__genblk1__BRA__8__KET____DOT__queue_block.__PVT__yqueue[7]),10);
    bufp->fullSData(oldp+1037,(vlSymsp->TOP__top__DOT__genblk1__BRA__8__KET____DOT__queue_block.__PVT__yqueue[8]),10);
    bufp->fullSData(oldp+1038,(vlSymsp->TOP__top__DOT__genblk1__BRA__8__KET____DOT__queue_block.__PVT__yqueue[9]),10);
    bufp->fullCData(oldp+1039,(vlSymsp->TOP__top__DOT__genblk1__BRA__8__KET____DOT__queue_block.__PVT__counter),4);
    bufp->fullBit(oldp+1040,(vlSymsp->TOP__top__DOT__genblk1__BRA__9__KET____DOT__queue_block.full_queue));
    bufp->fullBit(oldp+1041,(vlSymsp->TOP__top__DOT__genblk1__BRA__9__KET____DOT__queue_block.en));
    bufp->fullBit(oldp+1042,(vlSymsp->TOP__top__DOT__genblk1__BRA__9__KET____DOT__queue_block.match));
    bufp->fullIData(oldp+1043,(vlSymsp->TOP__top__DOT__genblk1__BRA__9__KET____DOT__queue_block.__PVT__colour_queue[0]),24);
    bufp->fullIData(oldp+1044,(vlSymsp->TOP__top__DOT__genblk1__BRA__9__KET____DOT__queue_block.__PVT__colour_queue[1]),24);
    bufp->fullIData(oldp+1045,(vlSymsp->TOP__top__DOT__genblk1__BRA__9__KET____DOT__queue_block.__PVT__colour_queue[2]),24);
    bufp->fullIData(oldp+1046,(vlSymsp->TOP__top__DOT__genblk1__BRA__9__KET____DOT__queue_block.__PVT__colour_queue[3]),24);
    bufp->fullIData(oldp+1047,(vlSymsp->TOP__top__DOT__genblk1__BRA__9__KET____DOT__queue_block.__PVT__colour_queue[4]),24);
    bufp->fullIData(oldp+1048,(vlSymsp->TOP__top__DOT__genblk1__BRA__9__KET____DOT__queue_block.__PVT__colour_queue[5]),24);
    bufp->fullIData(oldp+1049,(vlSymsp->TOP__top__DOT__genblk1__BRA__9__KET____DOT__queue_block.__PVT__colour_queue[6]),24);
    bufp->fullIData(oldp+1050,(vlSymsp->TOP__top__DOT__genblk1__BRA__9__KET____DOT__queue_block.__PVT__colour_queue[7]),24);
    bufp->fullIData(oldp+1051,(vlSymsp->TOP__top__DOT__genblk1__BRA__9__KET____DOT__queue_block.__PVT__colour_queue[8]),24);
    bufp->fullIData(oldp+1052,(vlSymsp->TOP__top__DOT__genblk1__BRA__9__KET____DOT__queue_block.__PVT__colour_queue[9]),24);
    bufp->fullSData(oldp+1053,(vlSymsp->TOP__top__DOT__genblk1__BRA__9__KET____DOT__queue_block.__PVT__xqueue[0]),10);
    bufp->fullSData(oldp+1054,(vlSymsp->TOP__top__DOT__genblk1__BRA__9__KET____DOT__queue_block.__PVT__xqueue[1]),10);
    bufp->fullSData(oldp+1055,(vlSymsp->TOP__top__DOT__genblk1__BRA__9__KET____DOT__queue_block.__PVT__xqueue[2]),10);
    bufp->fullSData(oldp+1056,(vlSymsp->TOP__top__DOT__genblk1__BRA__9__KET____DOT__queue_block.__PVT__xqueue[3]),10);
    bufp->fullSData(oldp+1057,(vlSymsp->TOP__top__DOT__genblk1__BRA__9__KET____DOT__queue_block.__PVT__xqueue[4]),10);
    bufp->fullSData(oldp+1058,(vlSymsp->TOP__top__DOT__genblk1__BRA__9__KET____DOT__queue_block.__PVT__xqueue[5]),10);
    bufp->fullSData(oldp+1059,(vlSymsp->TOP__top__DOT__genblk1__BRA__9__KET____DOT__queue_block.__PVT__xqueue[6]),10);
    bufp->fullSData(oldp+1060,(vlSymsp->TOP__top__DOT__genblk1__BRA__9__KET____DOT__queue_block.__PVT__xqueue[7]),10);
    bufp->fullSData(oldp+1061,(vlSymsp->TOP__top__DOT__genblk1__BRA__9__KET____DOT__queue_block.__PVT__xqueue[8]),10);
    bufp->fullSData(oldp+1062,(vlSymsp->TOP__top__DOT__genblk1__BRA__9__KET____DOT__queue_block.__PVT__xqueue[9]),10);
    bufp->fullSData(oldp+1063,(vlSymsp->TOP__top__DOT__genblk1__BRA__9__KET____DOT__queue_block.__PVT__yqueue[0]),10);
    bufp->fullSData(oldp+1064,(vlSymsp->TOP__top__DOT__genblk1__BRA__9__KET____DOT__queue_block.__PVT__yqueue[1]),10);
    bufp->fullSData(oldp+1065,(vlSymsp->TOP__top__DOT__genblk1__BRA__9__KET____DOT__queue_block.__PVT__yqueue[2]),10);
    bufp->fullSData(oldp+1066,(vlSymsp->TOP__top__DOT__genblk1__BRA__9__KET____DOT__queue_block.__PVT__yqueue[3]),10);
    bufp->fullSData(oldp+1067,(vlSymsp->TOP__top__DOT__genblk1__BRA__9__KET____DOT__queue_block.__PVT__yqueue[4]),10);
    bufp->fullSData(oldp+1068,(vlSymsp->TOP__top__DOT__genblk1__BRA__9__KET____DOT__queue_block.__PVT__yqueue[5]),10);
    bufp->fullSData(oldp+1069,(vlSymsp->TOP__top__DOT__genblk1__BRA__9__KET____DOT__queue_block.__PVT__yqueue[6]),10);
    bufp->fullSData(oldp+1070,(vlSymsp->TOP__top__DOT__genblk1__BRA__9__KET____DOT__queue_block.__PVT__yqueue[7]),10);
    bufp->fullSData(oldp+1071,(vlSymsp->TOP__top__DOT__genblk1__BRA__9__KET____DOT__queue_block.__PVT__yqueue[8]),10);
    bufp->fullSData(oldp+1072,(vlSymsp->TOP__top__DOT__genblk1__BRA__9__KET____DOT__queue_block.__PVT__yqueue[9]),10);
    bufp->fullCData(oldp+1073,(vlSymsp->TOP__top__DOT__genblk1__BRA__9__KET____DOT__queue_block.__PVT__counter),4);
    bufp->fullBit(oldp+1074,(vlSymsp->TOP__top__DOT__genblk1__BRA__10__KET____DOT__queue_block.full_queue));
    bufp->fullBit(oldp+1075,(vlSymsp->TOP__top__DOT__genblk1__BRA__10__KET____DOT__queue_block.en));
    bufp->fullBit(oldp+1076,(vlSymsp->TOP__top__DOT__genblk1__BRA__10__KET____DOT__queue_block.match));
    bufp->fullIData(oldp+1077,(vlSymsp->TOP__top__DOT__genblk1__BRA__10__KET____DOT__queue_block.__PVT__colour_queue[0]),24);
    bufp->fullIData(oldp+1078,(vlSymsp->TOP__top__DOT__genblk1__BRA__10__KET____DOT__queue_block.__PVT__colour_queue[1]),24);
    bufp->fullIData(oldp+1079,(vlSymsp->TOP__top__DOT__genblk1__BRA__10__KET____DOT__queue_block.__PVT__colour_queue[2]),24);
    bufp->fullIData(oldp+1080,(vlSymsp->TOP__top__DOT__genblk1__BRA__10__KET____DOT__queue_block.__PVT__colour_queue[3]),24);
    bufp->fullIData(oldp+1081,(vlSymsp->TOP__top__DOT__genblk1__BRA__10__KET____DOT__queue_block.__PVT__colour_queue[4]),24);
    bufp->fullIData(oldp+1082,(vlSymsp->TOP__top__DOT__genblk1__BRA__10__KET____DOT__queue_block.__PVT__colour_queue[5]),24);
    bufp->fullIData(oldp+1083,(vlSymsp->TOP__top__DOT__genblk1__BRA__10__KET____DOT__queue_block.__PVT__colour_queue[6]),24);
    bufp->fullIData(oldp+1084,(vlSymsp->TOP__top__DOT__genblk1__BRA__10__KET____DOT__queue_block.__PVT__colour_queue[7]),24);
    bufp->fullIData(oldp+1085,(vlSymsp->TOP__top__DOT__genblk1__BRA__10__KET____DOT__queue_block.__PVT__colour_queue[8]),24);
    bufp->fullIData(oldp+1086,(vlSymsp->TOP__top__DOT__genblk1__BRA__10__KET____DOT__queue_block.__PVT__colour_queue[9]),24);
    bufp->fullSData(oldp+1087,(vlSymsp->TOP__top__DOT__genblk1__BRA__10__KET____DOT__queue_block.__PVT__xqueue[0]),10);
    bufp->fullSData(oldp+1088,(vlSymsp->TOP__top__DOT__genblk1__BRA__10__KET____DOT__queue_block.__PVT__xqueue[1]),10);
    bufp->fullSData(oldp+1089,(vlSymsp->TOP__top__DOT__genblk1__BRA__10__KET____DOT__queue_block.__PVT__xqueue[2]),10);
    bufp->fullSData(oldp+1090,(vlSymsp->TOP__top__DOT__genblk1__BRA__10__KET____DOT__queue_block.__PVT__xqueue[3]),10);
    bufp->fullSData(oldp+1091,(vlSymsp->TOP__top__DOT__genblk1__BRA__10__KET____DOT__queue_block.__PVT__xqueue[4]),10);
    bufp->fullSData(oldp+1092,(vlSymsp->TOP__top__DOT__genblk1__BRA__10__KET____DOT__queue_block.__PVT__xqueue[5]),10);
    bufp->fullSData(oldp+1093,(vlSymsp->TOP__top__DOT__genblk1__BRA__10__KET____DOT__queue_block.__PVT__xqueue[6]),10);
    bufp->fullSData(oldp+1094,(vlSymsp->TOP__top__DOT__genblk1__BRA__10__KET____DOT__queue_block.__PVT__xqueue[7]),10);
    bufp->fullSData(oldp+1095,(vlSymsp->TOP__top__DOT__genblk1__BRA__10__KET____DOT__queue_block.__PVT__xqueue[8]),10);
    bufp->fullSData(oldp+1096,(vlSymsp->TOP__top__DOT__genblk1__BRA__10__KET____DOT__queue_block.__PVT__xqueue[9]),10);
    bufp->fullSData(oldp+1097,(vlSymsp->TOP__top__DOT__genblk1__BRA__10__KET____DOT__queue_block.__PVT__yqueue[0]),10);
    bufp->fullSData(oldp+1098,(vlSymsp->TOP__top__DOT__genblk1__BRA__10__KET____DOT__queue_block.__PVT__yqueue[1]),10);
    bufp->fullSData(oldp+1099,(vlSymsp->TOP__top__DOT__genblk1__BRA__10__KET____DOT__queue_block.__PVT__yqueue[2]),10);
    bufp->fullSData(oldp+1100,(vlSymsp->TOP__top__DOT__genblk1__BRA__10__KET____DOT__queue_block.__PVT__yqueue[3]),10);
    bufp->fullSData(oldp+1101,(vlSymsp->TOP__top__DOT__genblk1__BRA__10__KET____DOT__queue_block.__PVT__yqueue[4]),10);
    bufp->fullSData(oldp+1102,(vlSymsp->TOP__top__DOT__genblk1__BRA__10__KET____DOT__queue_block.__PVT__yqueue[5]),10);
    bufp->fullSData(oldp+1103,(vlSymsp->TOP__top__DOT__genblk1__BRA__10__KET____DOT__queue_block.__PVT__yqueue[6]),10);
    bufp->fullSData(oldp+1104,(vlSymsp->TOP__top__DOT__genblk1__BRA__10__KET____DOT__queue_block.__PVT__yqueue[7]),10);
    bufp->fullSData(oldp+1105,(vlSymsp->TOP__top__DOT__genblk1__BRA__10__KET____DOT__queue_block.__PVT__yqueue[8]),10);
    bufp->fullSData(oldp+1106,(vlSymsp->TOP__top__DOT__genblk1__BRA__10__KET____DOT__queue_block.__PVT__yqueue[9]),10);
    bufp->fullCData(oldp+1107,(vlSymsp->TOP__top__DOT__genblk1__BRA__10__KET____DOT__queue_block.__PVT__counter),4);
    bufp->fullBit(oldp+1108,(vlSymsp->TOP__top__DOT__genblk1__BRA__11__KET____DOT__queue_block.full_queue));
    bufp->fullBit(oldp+1109,(vlSymsp->TOP__top__DOT__genblk1__BRA__11__KET____DOT__queue_block.en));
    bufp->fullBit(oldp+1110,(vlSymsp->TOP__top__DOT__genblk1__BRA__11__KET____DOT__queue_block.match));
    bufp->fullIData(oldp+1111,(vlSymsp->TOP__top__DOT__genblk1__BRA__11__KET____DOT__queue_block.__PVT__colour_queue[0]),24);
    bufp->fullIData(oldp+1112,(vlSymsp->TOP__top__DOT__genblk1__BRA__11__KET____DOT__queue_block.__PVT__colour_queue[1]),24);
    bufp->fullIData(oldp+1113,(vlSymsp->TOP__top__DOT__genblk1__BRA__11__KET____DOT__queue_block.__PVT__colour_queue[2]),24);
    bufp->fullIData(oldp+1114,(vlSymsp->TOP__top__DOT__genblk1__BRA__11__KET____DOT__queue_block.__PVT__colour_queue[3]),24);
    bufp->fullIData(oldp+1115,(vlSymsp->TOP__top__DOT__genblk1__BRA__11__KET____DOT__queue_block.__PVT__colour_queue[4]),24);
    bufp->fullIData(oldp+1116,(vlSymsp->TOP__top__DOT__genblk1__BRA__11__KET____DOT__queue_block.__PVT__colour_queue[5]),24);
    bufp->fullIData(oldp+1117,(vlSymsp->TOP__top__DOT__genblk1__BRA__11__KET____DOT__queue_block.__PVT__colour_queue[6]),24);
    bufp->fullIData(oldp+1118,(vlSymsp->TOP__top__DOT__genblk1__BRA__11__KET____DOT__queue_block.__PVT__colour_queue[7]),24);
    bufp->fullIData(oldp+1119,(vlSymsp->TOP__top__DOT__genblk1__BRA__11__KET____DOT__queue_block.__PVT__colour_queue[8]),24);
    bufp->fullIData(oldp+1120,(vlSymsp->TOP__top__DOT__genblk1__BRA__11__KET____DOT__queue_block.__PVT__colour_queue[9]),24);
    bufp->fullSData(oldp+1121,(vlSymsp->TOP__top__DOT__genblk1__BRA__11__KET____DOT__queue_block.__PVT__xqueue[0]),10);
    bufp->fullSData(oldp+1122,(vlSymsp->TOP__top__DOT__genblk1__BRA__11__KET____DOT__queue_block.__PVT__xqueue[1]),10);
    bufp->fullSData(oldp+1123,(vlSymsp->TOP__top__DOT__genblk1__BRA__11__KET____DOT__queue_block.__PVT__xqueue[2]),10);
    bufp->fullSData(oldp+1124,(vlSymsp->TOP__top__DOT__genblk1__BRA__11__KET____DOT__queue_block.__PVT__xqueue[3]),10);
    bufp->fullSData(oldp+1125,(vlSymsp->TOP__top__DOT__genblk1__BRA__11__KET____DOT__queue_block.__PVT__xqueue[4]),10);
    bufp->fullSData(oldp+1126,(vlSymsp->TOP__top__DOT__genblk1__BRA__11__KET____DOT__queue_block.__PVT__xqueue[5]),10);
    bufp->fullSData(oldp+1127,(vlSymsp->TOP__top__DOT__genblk1__BRA__11__KET____DOT__queue_block.__PVT__xqueue[6]),10);
    bufp->fullSData(oldp+1128,(vlSymsp->TOP__top__DOT__genblk1__BRA__11__KET____DOT__queue_block.__PVT__xqueue[7]),10);
    bufp->fullSData(oldp+1129,(vlSymsp->TOP__top__DOT__genblk1__BRA__11__KET____DOT__queue_block.__PVT__xqueue[8]),10);
    bufp->fullSData(oldp+1130,(vlSymsp->TOP__top__DOT__genblk1__BRA__11__KET____DOT__queue_block.__PVT__xqueue[9]),10);
    bufp->fullSData(oldp+1131,(vlSymsp->TOP__top__DOT__genblk1__BRA__11__KET____DOT__queue_block.__PVT__yqueue[0]),10);
    bufp->fullSData(oldp+1132,(vlSymsp->TOP__top__DOT__genblk1__BRA__11__KET____DOT__queue_block.__PVT__yqueue[1]),10);
    bufp->fullSData(oldp+1133,(vlSymsp->TOP__top__DOT__genblk1__BRA__11__KET____DOT__queue_block.__PVT__yqueue[2]),10);
    bufp->fullSData(oldp+1134,(vlSymsp->TOP__top__DOT__genblk1__BRA__11__KET____DOT__queue_block.__PVT__yqueue[3]),10);
    bufp->fullSData(oldp+1135,(vlSymsp->TOP__top__DOT__genblk1__BRA__11__KET____DOT__queue_block.__PVT__yqueue[4]),10);
    bufp->fullSData(oldp+1136,(vlSymsp->TOP__top__DOT__genblk1__BRA__11__KET____DOT__queue_block.__PVT__yqueue[5]),10);
    bufp->fullSData(oldp+1137,(vlSymsp->TOP__top__DOT__genblk1__BRA__11__KET____DOT__queue_block.__PVT__yqueue[6]),10);
    bufp->fullSData(oldp+1138,(vlSymsp->TOP__top__DOT__genblk1__BRA__11__KET____DOT__queue_block.__PVT__yqueue[7]),10);
    bufp->fullSData(oldp+1139,(vlSymsp->TOP__top__DOT__genblk1__BRA__11__KET____DOT__queue_block.__PVT__yqueue[8]),10);
    bufp->fullSData(oldp+1140,(vlSymsp->TOP__top__DOT__genblk1__BRA__11__KET____DOT__queue_block.__PVT__yqueue[9]),10);
    bufp->fullCData(oldp+1141,(vlSymsp->TOP__top__DOT__genblk1__BRA__11__KET____DOT__queue_block.__PVT__counter),4);
    bufp->fullBit(oldp+1142,(vlSelf->clk));
    bufp->fullBit(oldp+1143,(vlSelf->reset));
    bufp->fullBit(oldp+1144,(vlSelf->ready));
    bufp->fullSData(oldp+1145,(vlSelf->iterations_max),10);
    bufp->fullSData(oldp+1146,(vlSelf->zoom),10);
    bufp->fullSData(oldp+1147,(vlSelf->x_offset),10);
    bufp->fullSData(oldp+1148,(vlSelf->y_offset),10);
    bufp->fullCData(oldp+1149,(vlSelf->r),8);
    bufp->fullCData(oldp+1150,(vlSelf->g),8);
    bufp->fullCData(oldp+1151,(vlSelf->b),8);
    bufp->fullBit(oldp+1152,(vlSelf->first));
    bufp->fullBit(oldp+1153,(vlSelf->last_x));
    bufp->fullBit(oldp+1154,(vlSelf->last_y));
    bufp->fullBit(oldp+1155,(vlSelf->valid));
    bufp->fullBit(oldp+1156,(((0xfffU == (IData)(vlSelf->top__DOT__fin_bus)) 
                              | (IData)(vlSelf->reset))));
    bufp->fullIData(oldp+1157,(((0xbU >= (0xfU & vlSelf->top__DOT__j))
                                 ? vlSelf->top__DOT__colour_bus_o
                                [(0xfU & vlSelf->top__DOT__j)]
                                 : 0U)),24);
    bufp->fullCData(oldp+1158,((0x3fU & (IData)(vlSelf->iterations_max))),6);
    bufp->fullCData(oldp+1159,((7U & (IData)(vlSelf->zoom))),3);
    bufp->fullIData(oldp+1160,(vlSelf->x_offset),25);
    bufp->fullIData(oldp+1161,(vlSelf->y_offset),25);
    bufp->fullBit(oldp+1162,(((VL_LTS_III(25, 0x400000U, vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__distance) 
                               | ((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__curr_iterations) 
                                  == (0x3fU & (IData)(vlSelf->iterations_max)))) 
                              | VL_GTS_III(32, 0U, 
                                           VL_EXTENDS_II(32,25, vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__distance)))));
    bufp->fullIData(oldp+1163,((0x1ffffffU & ((IData)(0x1e00000U) 
                                              + (IData)(vlSelf->x_offset)))),25);
    bufp->fullIData(oldp+1164,((0x1ffffffU & ((IData)(0x1e80000U) 
                                              + (IData)(vlSelf->y_offset)))),25);
    bufp->fullBit(oldp+1165,(((VL_LTS_III(25, 0x400000U, vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__distance) 
                               | ((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__curr_iterations) 
                                  == (0x3fU & (IData)(vlSelf->iterations_max)))) 
                              | VL_GTS_III(32, 0U, 
                                           VL_EXTENDS_II(32,25, vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__distance)))));
    bufp->fullBit(oldp+1166,(((VL_LTS_III(25, 0x400000U, vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__distance) 
                               | ((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__curr_iterations) 
                                  == (0x3fU & (IData)(vlSelf->iterations_max)))) 
                              | VL_GTS_III(32, 0U, 
                                           VL_EXTENDS_II(32,25, vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__distance)))));
    bufp->fullBit(oldp+1167,(((VL_LTS_III(25, 0x400000U, vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__distance) 
                               | ((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__curr_iterations) 
                                  == (0x3fU & (IData)(vlSelf->iterations_max)))) 
                              | VL_GTS_III(32, 0U, 
                                           VL_EXTENDS_II(32,25, vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__distance)))));
    bufp->fullBit(oldp+1168,(((VL_LTS_III(25, 0x400000U, vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__distance) 
                               | ((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__curr_iterations) 
                                  == (0x3fU & (IData)(vlSelf->iterations_max)))) 
                              | VL_GTS_III(32, 0U, 
                                           VL_EXTENDS_II(32,25, vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__distance)))));
    bufp->fullBit(oldp+1169,(((VL_LTS_III(25, 0x400000U, vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__distance) 
                               | ((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__curr_iterations) 
                                  == (0x3fU & (IData)(vlSelf->iterations_max)))) 
                              | VL_GTS_III(32, 0U, 
                                           VL_EXTENDS_II(32,25, vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__distance)))));
    bufp->fullBit(oldp+1170,(((VL_LTS_III(25, 0x400000U, vlSymsp->TOP__top__DOT__genblk1__BRA__6__KET____DOT__engine.__PVT__distance) 
                               | ((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__6__KET____DOT__engine.__PVT__curr_iterations) 
                                  == (0x3fU & (IData)(vlSelf->iterations_max)))) 
                              | VL_GTS_III(32, 0U, 
                                           VL_EXTENDS_II(32,25, vlSymsp->TOP__top__DOT__genblk1__BRA__6__KET____DOT__engine.__PVT__distance)))));
    bufp->fullBit(oldp+1171,(((VL_LTS_III(25, 0x400000U, vlSymsp->TOP__top__DOT__genblk1__BRA__7__KET____DOT__engine.__PVT__distance) 
                               | ((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__7__KET____DOT__engine.__PVT__curr_iterations) 
                                  == (0x3fU & (IData)(vlSelf->iterations_max)))) 
                              | VL_GTS_III(32, 0U, 
                                           VL_EXTENDS_II(32,25, vlSymsp->TOP__top__DOT__genblk1__BRA__7__KET____DOT__engine.__PVT__distance)))));
    bufp->fullBit(oldp+1172,(((VL_LTS_III(25, 0x400000U, vlSymsp->TOP__top__DOT__genblk1__BRA__8__KET____DOT__engine.__PVT__distance) 
                               | ((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__8__KET____DOT__engine.__PVT__curr_iterations) 
                                  == (0x3fU & (IData)(vlSelf->iterations_max)))) 
                              | VL_GTS_III(32, 0U, 
                                           VL_EXTENDS_II(32,25, vlSymsp->TOP__top__DOT__genblk1__BRA__8__KET____DOT__engine.__PVT__distance)))));
    bufp->fullBit(oldp+1173,(((VL_LTS_III(25, 0x400000U, vlSymsp->TOP__top__DOT__genblk1__BRA__9__KET____DOT__engine.__PVT__distance) 
                               | ((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__9__KET____DOT__engine.__PVT__curr_iterations) 
                                  == (0x3fU & (IData)(vlSelf->iterations_max)))) 
                              | VL_GTS_III(32, 0U, 
                                           VL_EXTENDS_II(32,25, vlSymsp->TOP__top__DOT__genblk1__BRA__9__KET____DOT__engine.__PVT__distance)))));
    bufp->fullBit(oldp+1174,(((VL_LTS_III(25, 0x400000U, vlSymsp->TOP__top__DOT__genblk1__BRA__10__KET____DOT__engine.__PVT__distance) 
                               | ((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__10__KET____DOT__engine.__PVT__curr_iterations) 
                                  == (0x3fU & (IData)(vlSelf->iterations_max)))) 
                              | VL_GTS_III(32, 0U, 
                                           VL_EXTENDS_II(32,25, vlSymsp->TOP__top__DOT__genblk1__BRA__10__KET____DOT__engine.__PVT__distance)))));
    bufp->fullBit(oldp+1175,(((VL_LTS_III(25, 0x400000U, vlSymsp->TOP__top__DOT__genblk1__BRA__11__KET____DOT__engine.__PVT__distance) 
                               | ((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__11__KET____DOT__engine.__PVT__curr_iterations) 
                                  == (0x3fU & (IData)(vlSelf->iterations_max)))) 
                              | VL_GTS_III(32, 0U, 
                                           VL_EXTENDS_II(32,25, vlSymsp->TOP__top__DOT__genblk1__BRA__11__KET____DOT__engine.__PVT__distance)))));
    bufp->fullIData(oldp+1176,(0xaU),32);
    bufp->fullIData(oldp+1177,(0x18U),32);
    bufp->fullIData(oldp+1178,(0xcU),32);
    bufp->fullBit(oldp+1179,(vlSelf->top__DOT__reset_engine));
    bufp->fullIData(oldp+1180,(0x280U),32);
    bufp->fullIData(oldp+1181,(0x1e0U),32);
    bufp->fullIData(oldp+1182,(0xcU),32);
    bufp->fullIData(oldp+1183,(0x32U),32);
    bufp->fullIData(oldp+1184,(0x19U),32);
    bufp->fullIData(oldp+1185,(0x14U),32);
    bufp->fullIData(oldp+1186,(6U),32);
    bufp->fullBit(oldp+1187,(0U));
    bufp->fullIData(oldp+1188,(5U),32);
    bufp->fullIData(oldp+1189,(0x400000U),25);
    bufp->fullIData(oldp+1190,(0U),32);
    bufp->fullIData(oldp+1191,(1U),32);
    bufp->fullIData(oldp+1192,(2U),32);
    bufp->fullIData(oldp+1193,(3U),32);
    bufp->fullIData(oldp+1194,(0x199aU),25);
    bufp->fullIData(oldp+1195,(0x199aU),25);
    bufp->fullIData(oldp+1196,(4U),32);
}
