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
    tracep->declBit(c+578,"clk", false,-1);
    tracep->declBit(c+579,"reset", false,-1);
    tracep->declBit(c+580,"ready", false,-1);
    tracep->declBus(c+581,"iterations_max", false,-1, 31,0);
    tracep->declBus(c+582,"zoom", false,-1, 9,0);
    tracep->declBus(c+583,"x_offset", false,-1, 9,0);
    tracep->declBus(c+584,"y_offset", false,-1, 9,0);
    tracep->declBus(c+585,"r", false,-1, 7,0);
    tracep->declBus(c+586,"g", false,-1, 7,0);
    tracep->declBus(c+587,"b", false,-1, 7,0);
    tracep->declBit(c+588,"first", false,-1);
    tracep->declBit(c+589,"last_x", false,-1);
    tracep->declBit(c+590,"last_y", false,-1);
    tracep->declBit(c+591,"valid", false,-1);
    tracep->pushNamePrefix("top ");
    tracep->declBus(c+606,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+607,"RBG_SIZE", false,-1, 31,0);
    tracep->declBus(c+608,"NUM_ENGINES", false,-1, 31,0);
    tracep->declBus(c+609,"ITERATIONS_WIDTH", false,-1, 31,0);
    tracep->declBit(c+578,"clk", false,-1);
    tracep->declBit(c+579,"reset", false,-1);
    tracep->declBit(c+580,"ready", false,-1);
    tracep->declBus(c+581,"iterations_max", false,-1, 31,0);
    tracep->declBus(c+582,"zoom", false,-1, 9,0);
    tracep->declBus(c+583,"x_offset", false,-1, 9,0);
    tracep->declBus(c+584,"y_offset", false,-1, 9,0);
    tracep->declBus(c+585,"r", false,-1, 7,0);
    tracep->declBus(c+586,"g", false,-1, 7,0);
    tracep->declBus(c+587,"b", false,-1, 7,0);
    tracep->declBit(c+588,"first", false,-1);
    tracep->declBit(c+589,"last_x", false,-1);
    tracep->declBit(c+590,"last_y", false,-1);
    tracep->declBit(c+591,"valid", false,-1);
    tracep->declBus(c+7,"colour_o_wire", false,-1, 23,0);
    tracep->declBus(c+8,"xpixel_wire", false,-1, 9,0);
    tracep->declBus(c+9,"ypixel_wire", false,-1, 9,0);
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+266+i*1,"colour_bus_o", true,(i+0), 23,0);
    }
    tracep->declBit(c+610,"reset_engine", false,-1);
    tracep->declBit(c+592,"fin_wire", false,-1);
    tracep->declBit(c+363,"en_wire", false,-1);
    tracep->declBus(c+284,"fin_bus", false,-1, 5,0);
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+10+i*1,"x", true,(i+0), 9,0);
    }
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+16+i*1,"y", true,(i+0), 9,0);
    }
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+22+i*1,"iterations_bus", true,(i+0), 31,0);
    }
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+321+i*1,"xpixel_bus", true,(i+0), 9,0);
    }
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+327+i*1,"ypixel_bus", true,(i+0), 9,0);
    }
    tracep->declBus(c+364,"en_bus", false,-1, 5,0);
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+333+i*1,"colour_bus_i", true,(i+0), 23,0);
    }
    tracep->declBus(c+365,"full_queue_bus", false,-1, 5,0);
    tracep->declBus(c+366,"match_bus", false,-1, 5,0);
    tracep->declBus(c+367,"j", false,-1, 31,0);
    tracep->pushNamePrefix("combinator_block ");
    tracep->declBus(c+606,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+607,"RBG_SIZE", false,-1, 31,0);
    tracep->declBus(c+611,"SCREEN_WIDTH", false,-1, 31,0);
    tracep->declBus(c+612,"SCREEN_HEIGHT", false,-1, 31,0);
    tracep->declBit(c+578,"clk", false,-1);
    tracep->declBit(c+579,"reset", false,-1);
    tracep->declBus(c+593,"colour_i", false,-1, 23,0);
    tracep->declBit(c+363,"en", false,-1);
    tracep->declBit(c+580,"ready", false,-1);
    tracep->declBit(c+592,"fin_flag", false,-1);
    tracep->declBus(c+8,"next_xpixel", false,-1, 9,0);
    tracep->declBus(c+9,"next_ypixel", false,-1, 9,0);
    tracep->declBus(c+7,"colour_o", false,-1, 23,0);
    tracep->declBit(c+588,"first", false,-1);
    tracep->declBit(c+589,"last_x", false,-1);
    tracep->declBit(c+590,"last_y", false,-1);
    tracep->declBit(c+591,"valid", false,-1);
    tracep->declBus(c+28,"xpixel", false,-1, 9,0);
    tracep->declBus(c+29,"ypixel", false,-1, 9,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("distributor ");
    tracep->declBus(c+606,"PIXEL_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+611,"SCREEN_WIDTH", false,-1, 31,0);
    tracep->declBus(c+612,"SCREEN_HEIGHT", false,-1, 31,0);
    tracep->declBus(c+608,"NUM_ENGINES", false,-1, 31,0);
    tracep->declBit(c+578,"clk", false,-1);
    tracep->declBit(c+579,"reset", false,-1);
    tracep->declBit(c+592,"fin_flag", false,-1);
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+30+i*1,"x", true,(i+0), 9,0);
    }
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+36+i*1,"y", true,(i+0), 9,0);
    }
    tracep->declBus(c+42,"x0", false,-1, 9,0);
    tracep->declBus(c+43,"y0", false,-1, 9,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+613,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[0] ");
    tracep->pushNamePrefix("queue_block ");
    tracep->declBus(c+606,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+606,"QUEUE_SIZE", false,-1, 31,0);
    tracep->declBus(c+614,"COUNTER_SIZE", false,-1, 31,0);
    tracep->declBus(c+607,"RBG_SIZE", false,-1, 31,0);
    tracep->declBit(c+578,"clk", false,-1);
    tracep->declBit(c+579,"reset", false,-1);
    tracep->declBit(c+285,"fin_flag", false,-1);
    tracep->declBus(c+339,"colour_i", false,-1, 23,0);
    tracep->declBus(c+340,"xpixel_i", false,-1, 9,0);
    tracep->declBus(c+341,"ypixel_i", false,-1, 9,0);
    tracep->declBus(c+8,"xpixel_check", false,-1, 9,0);
    tracep->declBus(c+9,"ypixel_check", false,-1, 9,0);
    tracep->declBus(c+272,"colour_o", false,-1, 23,0);
    tracep->declBit(c+368,"full_queue", false,-1);
    tracep->declBit(c+369,"en", false,-1);
    tracep->declBit(c+370,"match", false,-1);
    for (int i = 0; i < 10; ++i) {
        tracep->declBus(c+371+i*1,"colour_queue", true,(i+0), 23,0);
    }
    for (int i = 0; i < 10; ++i) {
        tracep->declBus(c+381+i*1,"xqueue", true,(i+0), 9,0);
    }
    for (int i = 0; i < 10; ++i) {
        tracep->declBus(c+391+i*1,"yqueue", true,(i+0), 9,0);
    }
    tracep->declBus(c+401,"counter", false,-1, 3,0);
    tracep->declBus(c+342,"prev_xpixel", false,-1, 9,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+44,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+273,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("genblk1[1] ");
    tracep->pushNamePrefix("queue_block ");
    tracep->declBus(c+606,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+606,"QUEUE_SIZE", false,-1, 31,0);
    tracep->declBus(c+614,"COUNTER_SIZE", false,-1, 31,0);
    tracep->declBus(c+607,"RBG_SIZE", false,-1, 31,0);
    tracep->declBit(c+578,"clk", false,-1);
    tracep->declBit(c+579,"reset", false,-1);
    tracep->declBit(c+286,"fin_flag", false,-1);
    tracep->declBus(c+343,"colour_i", false,-1, 23,0);
    tracep->declBus(c+344,"xpixel_i", false,-1, 9,0);
    tracep->declBus(c+345,"ypixel_i", false,-1, 9,0);
    tracep->declBus(c+8,"xpixel_check", false,-1, 9,0);
    tracep->declBus(c+9,"ypixel_check", false,-1, 9,0);
    tracep->declBus(c+274,"colour_o", false,-1, 23,0);
    tracep->declBit(c+402,"full_queue", false,-1);
    tracep->declBit(c+403,"en", false,-1);
    tracep->declBit(c+404,"match", false,-1);
    for (int i = 0; i < 10; ++i) {
        tracep->declBus(c+405+i*1,"colour_queue", true,(i+0), 23,0);
    }
    for (int i = 0; i < 10; ++i) {
        tracep->declBus(c+415+i*1,"xqueue", true,(i+0), 9,0);
    }
    for (int i = 0; i < 10; ++i) {
        tracep->declBus(c+425+i*1,"yqueue", true,(i+0), 9,0);
    }
    tracep->declBus(c+435,"counter", false,-1, 3,0);
    tracep->declBus(c+346,"prev_xpixel", false,-1, 9,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+2,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+45,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+275,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("genblk1[2] ");
    tracep->pushNamePrefix("queue_block ");
    tracep->declBus(c+606,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+606,"QUEUE_SIZE", false,-1, 31,0);
    tracep->declBus(c+614,"COUNTER_SIZE", false,-1, 31,0);
    tracep->declBus(c+607,"RBG_SIZE", false,-1, 31,0);
    tracep->declBit(c+578,"clk", false,-1);
    tracep->declBit(c+579,"reset", false,-1);
    tracep->declBit(c+287,"fin_flag", false,-1);
    tracep->declBus(c+347,"colour_i", false,-1, 23,0);
    tracep->declBus(c+348,"xpixel_i", false,-1, 9,0);
    tracep->declBus(c+349,"ypixel_i", false,-1, 9,0);
    tracep->declBus(c+8,"xpixel_check", false,-1, 9,0);
    tracep->declBus(c+9,"ypixel_check", false,-1, 9,0);
    tracep->declBus(c+276,"colour_o", false,-1, 23,0);
    tracep->declBit(c+436,"full_queue", false,-1);
    tracep->declBit(c+437,"en", false,-1);
    tracep->declBit(c+438,"match", false,-1);
    for (int i = 0; i < 10; ++i) {
        tracep->declBus(c+439+i*1,"colour_queue", true,(i+0), 23,0);
    }
    for (int i = 0; i < 10; ++i) {
        tracep->declBus(c+449+i*1,"xqueue", true,(i+0), 9,0);
    }
    for (int i = 0; i < 10; ++i) {
        tracep->declBus(c+459+i*1,"yqueue", true,(i+0), 9,0);
    }
    tracep->declBus(c+469,"counter", false,-1, 3,0);
    tracep->declBus(c+350,"prev_xpixel", false,-1, 9,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+3,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+46,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+277,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("genblk1[3] ");
    tracep->pushNamePrefix("queue_block ");
    tracep->declBus(c+606,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+606,"QUEUE_SIZE", false,-1, 31,0);
    tracep->declBus(c+614,"COUNTER_SIZE", false,-1, 31,0);
    tracep->declBus(c+607,"RBG_SIZE", false,-1, 31,0);
    tracep->declBit(c+578,"clk", false,-1);
    tracep->declBit(c+579,"reset", false,-1);
    tracep->declBit(c+288,"fin_flag", false,-1);
    tracep->declBus(c+351,"colour_i", false,-1, 23,0);
    tracep->declBus(c+352,"xpixel_i", false,-1, 9,0);
    tracep->declBus(c+353,"ypixel_i", false,-1, 9,0);
    tracep->declBus(c+8,"xpixel_check", false,-1, 9,0);
    tracep->declBus(c+9,"ypixel_check", false,-1, 9,0);
    tracep->declBus(c+278,"colour_o", false,-1, 23,0);
    tracep->declBit(c+470,"full_queue", false,-1);
    tracep->declBit(c+471,"en", false,-1);
    tracep->declBit(c+472,"match", false,-1);
    for (int i = 0; i < 10; ++i) {
        tracep->declBus(c+473+i*1,"colour_queue", true,(i+0), 23,0);
    }
    for (int i = 0; i < 10; ++i) {
        tracep->declBus(c+483+i*1,"xqueue", true,(i+0), 9,0);
    }
    for (int i = 0; i < 10; ++i) {
        tracep->declBus(c+493+i*1,"yqueue", true,(i+0), 9,0);
    }
    tracep->declBus(c+503,"counter", false,-1, 3,0);
    tracep->declBus(c+354,"prev_xpixel", false,-1, 9,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+4,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+47,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+279,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("genblk1[4] ");
    tracep->pushNamePrefix("queue_block ");
    tracep->declBus(c+606,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+606,"QUEUE_SIZE", false,-1, 31,0);
    tracep->declBus(c+614,"COUNTER_SIZE", false,-1, 31,0);
    tracep->declBus(c+607,"RBG_SIZE", false,-1, 31,0);
    tracep->declBit(c+578,"clk", false,-1);
    tracep->declBit(c+579,"reset", false,-1);
    tracep->declBit(c+289,"fin_flag", false,-1);
    tracep->declBus(c+355,"colour_i", false,-1, 23,0);
    tracep->declBus(c+356,"xpixel_i", false,-1, 9,0);
    tracep->declBus(c+357,"ypixel_i", false,-1, 9,0);
    tracep->declBus(c+8,"xpixel_check", false,-1, 9,0);
    tracep->declBus(c+9,"ypixel_check", false,-1, 9,0);
    tracep->declBus(c+280,"colour_o", false,-1, 23,0);
    tracep->declBit(c+504,"full_queue", false,-1);
    tracep->declBit(c+505,"en", false,-1);
    tracep->declBit(c+506,"match", false,-1);
    for (int i = 0; i < 10; ++i) {
        tracep->declBus(c+507+i*1,"colour_queue", true,(i+0), 23,0);
    }
    for (int i = 0; i < 10; ++i) {
        tracep->declBus(c+517+i*1,"xqueue", true,(i+0), 9,0);
    }
    for (int i = 0; i < 10; ++i) {
        tracep->declBus(c+527+i*1,"yqueue", true,(i+0), 9,0);
    }
    tracep->declBus(c+537,"counter", false,-1, 3,0);
    tracep->declBus(c+358,"prev_xpixel", false,-1, 9,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+5,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+48,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+281,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("genblk1[5] ");
    tracep->pushNamePrefix("queue_block ");
    tracep->declBus(c+606,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+606,"QUEUE_SIZE", false,-1, 31,0);
    tracep->declBus(c+614,"COUNTER_SIZE", false,-1, 31,0);
    tracep->declBus(c+607,"RBG_SIZE", false,-1, 31,0);
    tracep->declBit(c+578,"clk", false,-1);
    tracep->declBit(c+579,"reset", false,-1);
    tracep->declBit(c+290,"fin_flag", false,-1);
    tracep->declBus(c+359,"colour_i", false,-1, 23,0);
    tracep->declBus(c+360,"xpixel_i", false,-1, 9,0);
    tracep->declBus(c+361,"ypixel_i", false,-1, 9,0);
    tracep->declBus(c+8,"xpixel_check", false,-1, 9,0);
    tracep->declBus(c+9,"ypixel_check", false,-1, 9,0);
    tracep->declBus(c+282,"colour_o", false,-1, 23,0);
    tracep->declBit(c+538,"full_queue", false,-1);
    tracep->declBit(c+539,"en", false,-1);
    tracep->declBit(c+540,"match", false,-1);
    for (int i = 0; i < 10; ++i) {
        tracep->declBus(c+541+i*1,"colour_queue", true,(i+0), 23,0);
    }
    for (int i = 0; i < 10; ++i) {
        tracep->declBus(c+551+i*1,"xqueue", true,(i+0), 9,0);
    }
    for (int i = 0; i < 10; ++i) {
        tracep->declBus(c+561+i*1,"yqueue", true,(i+0), 9,0);
    }
    tracep->declBus(c+571,"counter", false,-1, 3,0);
    tracep->declBus(c+362,"prev_xpixel", false,-1, 9,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+6,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+49,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+283,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lut_rom ");
    tracep->declBus(c+609,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+607,"RBG_SIZE", false,-1, 31,0);
    tracep->declBus(c+615,"MAX_ITERATION", false,-1, 31,0);
    tracep->declBus(c+608,"NUM_ENGINES", false,-1, 31,0);
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+50+i*1,"iterations", true,(i+0), 31,0);
    }
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+56+i*1,"rgb_val", true,(i+0), 23,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+613,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+613,"k", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+606,"PIXEL_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+616,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+617,"ENGINE_FRACT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+608,"ITERATIONS_WIDTH", false,-1, 31,0);
    tracep->declBit(c+578,"clk", false,-1);
    tracep->declBit(c+618,"reset", false,-1);
    tracep->declBus(c+594,"iterations_max", false,-1, 5,0);
    tracep->declBus(c+62,"x0_", false,-1, 9,0);
    tracep->declBus(c+63,"y0_", false,-1, 9,0);
    tracep->declBus(c+595,"zoom", false,-1, 2,0);
    tracep->declBus(c+596,"x_offset", false,-1, 24,0);
    tracep->declBus(c+597,"y_offset", false,-1, 24,0);
    tracep->declBit(c+572,"full_queue", false,-1);
    tracep->declBit(c+291,"en_pixel_map", false,-1);
    tracep->declBus(c+64,"iterations", false,-1, 5,0);
    tracep->declBus(c+65,"xpixel", false,-1, 9,0);
    tracep->declBus(c+66,"ypixel", false,-1, 9,0);
    tracep->declBus(c+619,"ENGINE_INT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+67,"x", false,-1, 24,0);
    tracep->declBus(c+68,"y", false,-1, 24,0);
    tracep->declBit(c+598,"finished", false,-1);
    tracep->declBit(c+236,"distributor_ready", false,-1);
    tracep->declBus(c+64,"curr_iterations", false,-1, 5,0);
    tracep->declBus(c+69,"zr", false,-1, 24,0);
    tracep->declBus(c+70,"zi", false,-1, 24,0);
    tracep->declBus(c+71,"zr_next", false,-1, 24,0);
    tracep->declBus(c+237,"zi_next", false,-1, 24,0);
    tracep->declBus(c+72,"zr2", false,-1, 24,0);
    tracep->declBus(c+73,"zi2", false,-1, 24,0);
    tracep->declBus(c+238,"zr2_next", false,-1, 24,0);
    tracep->declBus(c+239,"zi2_next", false,-1, 24,0);
    tracep->declBus(c+240,"zrzi", false,-1, 24,0);
    tracep->declBit(c+292,"en_stage_1", false,-1);
    tracep->declBit(c+293,"en_stage_2", false,-1);
    tracep->declBit(c+294,"init", false,-1);
    tracep->declBus(c+74,"distance", false,-1, 24,0);
    tracep->declBus(c+620,"max_distance", false,-1, 24,0);
    tracep->pushNamePrefix("M5 ");
    tracep->declBus(c+616,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+617,"ENGINE_FRACT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+69,"a", false,-1, 24,0);
    tracep->declBus(c+69,"b", false,-1, 24,0);
    tracep->declBit(c+294,"rst", false,-1);
    tracep->declBus(c+238,"result", false,-1, 24,0);
    tracep->declBus(c+619,"ENGINE_INT_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+75,"product", false,-1, 49,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("M6 ");
    tracep->declBus(c+616,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+617,"ENGINE_FRACT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+70,"a", false,-1, 24,0);
    tracep->declBus(c+70,"b", false,-1, 24,0);
    tracep->declBit(c+294,"rst", false,-1);
    tracep->declBus(c+239,"result", false,-1, 24,0);
    tracep->declBus(c+619,"ENGINE_INT_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+77,"product", false,-1, 49,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("M7 ");
    tracep->declBus(c+616,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+617,"ENGINE_FRACT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+69,"a", false,-1, 24,0);
    tracep->declBus(c+70,"b", false,-1, 24,0);
    tracep->declBit(c+294,"rst", false,-1);
    tracep->declBus(c+240,"result", false,-1, 24,0);
    tracep->declBus(c+619,"ENGINE_INT_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+79,"product", false,-1, 49,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("R0 ");
    tracep->declBus(c+608,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+578,"clk", false,-1);
    tracep->declBit(c+294,"rst", false,-1);
    tracep->declBit(c+293,"en", false,-1);
    tracep->declBus(c+81,"in", false,-1, 5,0);
    tracep->declBus(c+64,"out", false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SM ");
    tracep->declBit(c+578,"clk", false,-1);
    tracep->declBit(c+618,"rst", false,-1);
    tracep->declBit(c+598,"finished", false,-1);
    tracep->declBit(c+572,"full_queue", false,-1);
    tracep->declBit(c+236,"distributor_ready", false,-1);
    tracep->declBit(c+294,"init", false,-1);
    tracep->declBit(c+291,"en_pixel_map", false,-1);
    tracep->declBit(c+292,"en_stage_1", false,-1);
    tracep->declBit(c+293,"en_stage_2", false,-1);
    tracep->declBus(c+621,"INIT", false,-1, 31,0);
    tracep->declBus(c+622,"CALC_STAGE_1", false,-1, 31,0);
    tracep->declBus(c+623,"CALC_STAGE_2", false,-1, 31,0);
    tracep->declBus(c+624,"ESCAPE", false,-1, 31,0);
    tracep->declBus(c+82,"state", false,-1, 1,0);
    tracep->declBus(c+295,"next", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("calc_stage_1 ");
    tracep->declBus(c+616,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+578,"clk", false,-1);
    tracep->declBit(c+294,"reset", false,-1);
    tracep->declBit(c+292,"en", false,-1);
    tracep->declBus(c+71,"zr_next", false,-1, 24,0);
    tracep->declBus(c+237,"zi_next", false,-1, 24,0);
    tracep->declBus(c+69,"zr", false,-1, 24,0);
    tracep->declBus(c+70,"zi", false,-1, 24,0);
    tracep->pushNamePrefix("R1 ");
    tracep->declBus(c+616,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+578,"clk", false,-1);
    tracep->declBit(c+294,"rst", false,-1);
    tracep->declBit(c+292,"en", false,-1);
    tracep->declBus(c+71,"in", false,-1, 24,0);
    tracep->declBus(c+69,"out", false,-1, 24,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("R2 ");
    tracep->declBus(c+616,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+578,"clk", false,-1);
    tracep->declBit(c+294,"rst", false,-1);
    tracep->declBit(c+292,"en", false,-1);
    tracep->declBus(c+237,"in", false,-1, 24,0);
    tracep->declBus(c+70,"out", false,-1, 24,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("calc_stage_2 ");
    tracep->declBus(c+616,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+578,"clk", false,-1);
    tracep->declBit(c+294,"reset", false,-1);
    tracep->declBit(c+293,"en", false,-1);
    tracep->declBus(c+238,"zr2_next", false,-1, 24,0);
    tracep->declBus(c+239,"zi2_next", false,-1, 24,0);
    tracep->declBus(c+72,"zr2", false,-1, 24,0);
    tracep->declBus(c+73,"zi2", false,-1, 24,0);
    tracep->pushNamePrefix("R3 ");
    tracep->declBus(c+616,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+578,"clk", false,-1);
    tracep->declBit(c+294,"rst", false,-1);
    tracep->declBit(c+293,"en", false,-1);
    tracep->declBus(c+238,"in", false,-1, 24,0);
    tracep->declBus(c+72,"out", false,-1, 24,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("R4 ");
    tracep->declBus(c+616,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+578,"clk", false,-1);
    tracep->declBit(c+294,"rst", false,-1);
    tracep->declBit(c+293,"en", false,-1);
    tracep->declBus(c+239,"in", false,-1, 24,0);
    tracep->declBus(c+73,"out", false,-1, 24,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("pixel_map ");
    tracep->declBus(c+606,"PIXEL_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+616,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+617,"ENGINE_FRACT_WIDTH", false,-1, 31,0);
    tracep->declBit(c+578,"clk", false,-1);
    tracep->declBit(c+618,"reset", false,-1);
    tracep->declBit(c+291,"en", false,-1);
    tracep->declBus(c+62,"pixel_x_in", false,-1, 9,0);
    tracep->declBus(c+63,"pixel_y_in", false,-1, 9,0);
    tracep->declBus(c+596,"x_offset", false,-1, 24,0);
    tracep->declBus(c+597,"y_offset", false,-1, 24,0);
    tracep->declBus(c+67,"real_x", false,-1, 24,0);
    tracep->declBus(c+68,"imag_y", false,-1, 24,0);
    tracep->declBus(c+65,"pixel_x_out", false,-1, 9,0);
    tracep->declBus(c+66,"pixel_y_out", false,-1, 9,0);
    tracep->declBus(c+625,"scale_factor", false,-1, 24,0);
    tracep->declBus(c+599,"r_min", false,-1, 24,0);
    tracep->declBus(c+600,"i_min", false,-1, 24,0);
    tracep->declBus(c+83,"r_gradient", false,-1, 24,0);
    tracep->declBus(c+84,"i_gradient", false,-1, 24,0);
    tracep->declBus(c+85,"pixel_x_fixed", false,-1, 24,0);
    tracep->declBus(c+86,"pixel_y_fixed", false,-1, 24,0);
    tracep->pushNamePrefix("M1 ");
    tracep->declBus(c+616,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+617,"ENGINE_FRACT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+626,"a", false,-1, 24,0);
    tracep->declBus(c+85,"b", false,-1, 24,0);
    tracep->declBit(c+618,"rst", false,-1);
    tracep->declBus(c+83,"result", false,-1, 24,0);
    tracep->declBus(c+619,"ENGINE_INT_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+87,"product", false,-1, 49,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("M2 ");
    tracep->declBus(c+616,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+617,"ENGINE_FRACT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+626,"a", false,-1, 24,0);
    tracep->declBus(c+86,"b", false,-1, 24,0);
    tracep->declBit(c+618,"rst", false,-1);
    tracep->declBus(c+84,"result", false,-1, 24,0);
    tracep->declBus(c+619,"ENGINE_INT_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+89,"product", false,-1, 49,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+606,"PIXEL_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+616,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+617,"ENGINE_FRACT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+608,"ITERATIONS_WIDTH", false,-1, 31,0);
    tracep->declBit(c+578,"clk", false,-1);
    tracep->declBit(c+618,"reset", false,-1);
    tracep->declBus(c+594,"iterations_max", false,-1, 5,0);
    tracep->declBus(c+91,"x0_", false,-1, 9,0);
    tracep->declBus(c+92,"y0_", false,-1, 9,0);
    tracep->declBus(c+595,"zoom", false,-1, 2,0);
    tracep->declBus(c+596,"x_offset", false,-1, 24,0);
    tracep->declBus(c+597,"y_offset", false,-1, 24,0);
    tracep->declBit(c+573,"full_queue", false,-1);
    tracep->declBit(c+296,"en_pixel_map", false,-1);
    tracep->declBus(c+93,"iterations", false,-1, 5,0);
    tracep->declBus(c+94,"xpixel", false,-1, 9,0);
    tracep->declBus(c+95,"ypixel", false,-1, 9,0);
    tracep->declBus(c+619,"ENGINE_INT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+96,"x", false,-1, 24,0);
    tracep->declBus(c+97,"y", false,-1, 24,0);
    tracep->declBit(c+601,"finished", false,-1);
    tracep->declBit(c+241,"distributor_ready", false,-1);
    tracep->declBus(c+93,"curr_iterations", false,-1, 5,0);
    tracep->declBus(c+98,"zr", false,-1, 24,0);
    tracep->declBus(c+99,"zi", false,-1, 24,0);
    tracep->declBus(c+100,"zr_next", false,-1, 24,0);
    tracep->declBus(c+242,"zi_next", false,-1, 24,0);
    tracep->declBus(c+101,"zr2", false,-1, 24,0);
    tracep->declBus(c+102,"zi2", false,-1, 24,0);
    tracep->declBus(c+243,"zr2_next", false,-1, 24,0);
    tracep->declBus(c+244,"zi2_next", false,-1, 24,0);
    tracep->declBus(c+245,"zrzi", false,-1, 24,0);
    tracep->declBit(c+297,"en_stage_1", false,-1);
    tracep->declBit(c+298,"en_stage_2", false,-1);
    tracep->declBit(c+299,"init", false,-1);
    tracep->declBus(c+103,"distance", false,-1, 24,0);
    tracep->declBus(c+620,"max_distance", false,-1, 24,0);
    tracep->pushNamePrefix("M5 ");
    tracep->declBus(c+616,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+617,"ENGINE_FRACT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+98,"a", false,-1, 24,0);
    tracep->declBus(c+98,"b", false,-1, 24,0);
    tracep->declBit(c+299,"rst", false,-1);
    tracep->declBus(c+243,"result", false,-1, 24,0);
    tracep->declBus(c+619,"ENGINE_INT_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+104,"product", false,-1, 49,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("M6 ");
    tracep->declBus(c+616,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+617,"ENGINE_FRACT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+99,"a", false,-1, 24,0);
    tracep->declBus(c+99,"b", false,-1, 24,0);
    tracep->declBit(c+299,"rst", false,-1);
    tracep->declBus(c+244,"result", false,-1, 24,0);
    tracep->declBus(c+619,"ENGINE_INT_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+106,"product", false,-1, 49,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("M7 ");
    tracep->declBus(c+616,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+617,"ENGINE_FRACT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+98,"a", false,-1, 24,0);
    tracep->declBus(c+99,"b", false,-1, 24,0);
    tracep->declBit(c+299,"rst", false,-1);
    tracep->declBus(c+245,"result", false,-1, 24,0);
    tracep->declBus(c+619,"ENGINE_INT_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+108,"product", false,-1, 49,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("R0 ");
    tracep->declBus(c+608,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+578,"clk", false,-1);
    tracep->declBit(c+299,"rst", false,-1);
    tracep->declBit(c+298,"en", false,-1);
    tracep->declBus(c+110,"in", false,-1, 5,0);
    tracep->declBus(c+93,"out", false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SM ");
    tracep->declBit(c+578,"clk", false,-1);
    tracep->declBit(c+618,"rst", false,-1);
    tracep->declBit(c+601,"finished", false,-1);
    tracep->declBit(c+573,"full_queue", false,-1);
    tracep->declBit(c+241,"distributor_ready", false,-1);
    tracep->declBit(c+299,"init", false,-1);
    tracep->declBit(c+296,"en_pixel_map", false,-1);
    tracep->declBit(c+297,"en_stage_1", false,-1);
    tracep->declBit(c+298,"en_stage_2", false,-1);
    tracep->declBus(c+621,"INIT", false,-1, 31,0);
    tracep->declBus(c+622,"CALC_STAGE_1", false,-1, 31,0);
    tracep->declBus(c+623,"CALC_STAGE_2", false,-1, 31,0);
    tracep->declBus(c+624,"ESCAPE", false,-1, 31,0);
    tracep->declBus(c+111,"state", false,-1, 1,0);
    tracep->declBus(c+300,"next", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("calc_stage_1 ");
    tracep->declBus(c+616,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+578,"clk", false,-1);
    tracep->declBit(c+299,"reset", false,-1);
    tracep->declBit(c+297,"en", false,-1);
    tracep->declBus(c+100,"zr_next", false,-1, 24,0);
    tracep->declBus(c+242,"zi_next", false,-1, 24,0);
    tracep->declBus(c+98,"zr", false,-1, 24,0);
    tracep->declBus(c+99,"zi", false,-1, 24,0);
    tracep->pushNamePrefix("R1 ");
    tracep->declBus(c+616,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+578,"clk", false,-1);
    tracep->declBit(c+299,"rst", false,-1);
    tracep->declBit(c+297,"en", false,-1);
    tracep->declBus(c+100,"in", false,-1, 24,0);
    tracep->declBus(c+98,"out", false,-1, 24,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("R2 ");
    tracep->declBus(c+616,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+578,"clk", false,-1);
    tracep->declBit(c+299,"rst", false,-1);
    tracep->declBit(c+297,"en", false,-1);
    tracep->declBus(c+242,"in", false,-1, 24,0);
    tracep->declBus(c+99,"out", false,-1, 24,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("calc_stage_2 ");
    tracep->declBus(c+616,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+578,"clk", false,-1);
    tracep->declBit(c+299,"reset", false,-1);
    tracep->declBit(c+298,"en", false,-1);
    tracep->declBus(c+243,"zr2_next", false,-1, 24,0);
    tracep->declBus(c+244,"zi2_next", false,-1, 24,0);
    tracep->declBus(c+101,"zr2", false,-1, 24,0);
    tracep->declBus(c+102,"zi2", false,-1, 24,0);
    tracep->pushNamePrefix("R3 ");
    tracep->declBus(c+616,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+578,"clk", false,-1);
    tracep->declBit(c+299,"rst", false,-1);
    tracep->declBit(c+298,"en", false,-1);
    tracep->declBus(c+243,"in", false,-1, 24,0);
    tracep->declBus(c+101,"out", false,-1, 24,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("R4 ");
    tracep->declBus(c+616,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+578,"clk", false,-1);
    tracep->declBit(c+299,"rst", false,-1);
    tracep->declBit(c+298,"en", false,-1);
    tracep->declBus(c+244,"in", false,-1, 24,0);
    tracep->declBus(c+102,"out", false,-1, 24,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("pixel_map ");
    tracep->declBus(c+606,"PIXEL_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+616,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+617,"ENGINE_FRACT_WIDTH", false,-1, 31,0);
    tracep->declBit(c+578,"clk", false,-1);
    tracep->declBit(c+618,"reset", false,-1);
    tracep->declBit(c+296,"en", false,-1);
    tracep->declBus(c+91,"pixel_x_in", false,-1, 9,0);
    tracep->declBus(c+92,"pixel_y_in", false,-1, 9,0);
    tracep->declBus(c+596,"x_offset", false,-1, 24,0);
    tracep->declBus(c+597,"y_offset", false,-1, 24,0);
    tracep->declBus(c+96,"real_x", false,-1, 24,0);
    tracep->declBus(c+97,"imag_y", false,-1, 24,0);
    tracep->declBus(c+94,"pixel_x_out", false,-1, 9,0);
    tracep->declBus(c+95,"pixel_y_out", false,-1, 9,0);
    tracep->declBus(c+625,"scale_factor", false,-1, 24,0);
    tracep->declBus(c+599,"r_min", false,-1, 24,0);
    tracep->declBus(c+600,"i_min", false,-1, 24,0);
    tracep->declBus(c+112,"r_gradient", false,-1, 24,0);
    tracep->declBus(c+113,"i_gradient", false,-1, 24,0);
    tracep->declBus(c+114,"pixel_x_fixed", false,-1, 24,0);
    tracep->declBus(c+115,"pixel_y_fixed", false,-1, 24,0);
    tracep->pushNamePrefix("M1 ");
    tracep->declBus(c+616,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+617,"ENGINE_FRACT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+626,"a", false,-1, 24,0);
    tracep->declBus(c+114,"b", false,-1, 24,0);
    tracep->declBit(c+618,"rst", false,-1);
    tracep->declBus(c+112,"result", false,-1, 24,0);
    tracep->declBus(c+619,"ENGINE_INT_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+116,"product", false,-1, 49,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("M2 ");
    tracep->declBus(c+616,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+617,"ENGINE_FRACT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+626,"a", false,-1, 24,0);
    tracep->declBus(c+115,"b", false,-1, 24,0);
    tracep->declBit(c+618,"rst", false,-1);
    tracep->declBus(c+113,"result", false,-1, 24,0);
    tracep->declBus(c+619,"ENGINE_INT_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+118,"product", false,-1, 49,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+606,"PIXEL_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+616,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+617,"ENGINE_FRACT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+608,"ITERATIONS_WIDTH", false,-1, 31,0);
    tracep->declBit(c+578,"clk", false,-1);
    tracep->declBit(c+618,"reset", false,-1);
    tracep->declBus(c+594,"iterations_max", false,-1, 5,0);
    tracep->declBus(c+120,"x0_", false,-1, 9,0);
    tracep->declBus(c+121,"y0_", false,-1, 9,0);
    tracep->declBus(c+595,"zoom", false,-1, 2,0);
    tracep->declBus(c+596,"x_offset", false,-1, 24,0);
    tracep->declBus(c+597,"y_offset", false,-1, 24,0);
    tracep->declBit(c+574,"full_queue", false,-1);
    tracep->declBit(c+301,"en_pixel_map", false,-1);
    tracep->declBus(c+122,"iterations", false,-1, 5,0);
    tracep->declBus(c+123,"xpixel", false,-1, 9,0);
    tracep->declBus(c+124,"ypixel", false,-1, 9,0);
    tracep->declBus(c+619,"ENGINE_INT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+125,"x", false,-1, 24,0);
    tracep->declBus(c+126,"y", false,-1, 24,0);
    tracep->declBit(c+602,"finished", false,-1);
    tracep->declBit(c+246,"distributor_ready", false,-1);
    tracep->declBus(c+122,"curr_iterations", false,-1, 5,0);
    tracep->declBus(c+127,"zr", false,-1, 24,0);
    tracep->declBus(c+128,"zi", false,-1, 24,0);
    tracep->declBus(c+129,"zr_next", false,-1, 24,0);
    tracep->declBus(c+247,"zi_next", false,-1, 24,0);
    tracep->declBus(c+130,"zr2", false,-1, 24,0);
    tracep->declBus(c+131,"zi2", false,-1, 24,0);
    tracep->declBus(c+248,"zr2_next", false,-1, 24,0);
    tracep->declBus(c+249,"zi2_next", false,-1, 24,0);
    tracep->declBus(c+250,"zrzi", false,-1, 24,0);
    tracep->declBit(c+302,"en_stage_1", false,-1);
    tracep->declBit(c+303,"en_stage_2", false,-1);
    tracep->declBit(c+304,"init", false,-1);
    tracep->declBus(c+132,"distance", false,-1, 24,0);
    tracep->declBus(c+620,"max_distance", false,-1, 24,0);
    tracep->pushNamePrefix("M5 ");
    tracep->declBus(c+616,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+617,"ENGINE_FRACT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+127,"a", false,-1, 24,0);
    tracep->declBus(c+127,"b", false,-1, 24,0);
    tracep->declBit(c+304,"rst", false,-1);
    tracep->declBus(c+248,"result", false,-1, 24,0);
    tracep->declBus(c+619,"ENGINE_INT_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+133,"product", false,-1, 49,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("M6 ");
    tracep->declBus(c+616,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+617,"ENGINE_FRACT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+128,"a", false,-1, 24,0);
    tracep->declBus(c+128,"b", false,-1, 24,0);
    tracep->declBit(c+304,"rst", false,-1);
    tracep->declBus(c+249,"result", false,-1, 24,0);
    tracep->declBus(c+619,"ENGINE_INT_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+135,"product", false,-1, 49,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("M7 ");
    tracep->declBus(c+616,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+617,"ENGINE_FRACT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+127,"a", false,-1, 24,0);
    tracep->declBus(c+128,"b", false,-1, 24,0);
    tracep->declBit(c+304,"rst", false,-1);
    tracep->declBus(c+250,"result", false,-1, 24,0);
    tracep->declBus(c+619,"ENGINE_INT_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+137,"product", false,-1, 49,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("R0 ");
    tracep->declBus(c+608,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+578,"clk", false,-1);
    tracep->declBit(c+304,"rst", false,-1);
    tracep->declBit(c+303,"en", false,-1);
    tracep->declBus(c+139,"in", false,-1, 5,0);
    tracep->declBus(c+122,"out", false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SM ");
    tracep->declBit(c+578,"clk", false,-1);
    tracep->declBit(c+618,"rst", false,-1);
    tracep->declBit(c+602,"finished", false,-1);
    tracep->declBit(c+574,"full_queue", false,-1);
    tracep->declBit(c+246,"distributor_ready", false,-1);
    tracep->declBit(c+304,"init", false,-1);
    tracep->declBit(c+301,"en_pixel_map", false,-1);
    tracep->declBit(c+302,"en_stage_1", false,-1);
    tracep->declBit(c+303,"en_stage_2", false,-1);
    tracep->declBus(c+621,"INIT", false,-1, 31,0);
    tracep->declBus(c+622,"CALC_STAGE_1", false,-1, 31,0);
    tracep->declBus(c+623,"CALC_STAGE_2", false,-1, 31,0);
    tracep->declBus(c+624,"ESCAPE", false,-1, 31,0);
    tracep->declBus(c+140,"state", false,-1, 1,0);
    tracep->declBus(c+305,"next", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("calc_stage_1 ");
    tracep->declBus(c+616,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+578,"clk", false,-1);
    tracep->declBit(c+304,"reset", false,-1);
    tracep->declBit(c+302,"en", false,-1);
    tracep->declBus(c+129,"zr_next", false,-1, 24,0);
    tracep->declBus(c+247,"zi_next", false,-1, 24,0);
    tracep->declBus(c+127,"zr", false,-1, 24,0);
    tracep->declBus(c+128,"zi", false,-1, 24,0);
    tracep->pushNamePrefix("R1 ");
    tracep->declBus(c+616,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+578,"clk", false,-1);
    tracep->declBit(c+304,"rst", false,-1);
    tracep->declBit(c+302,"en", false,-1);
    tracep->declBus(c+129,"in", false,-1, 24,0);
    tracep->declBus(c+127,"out", false,-1, 24,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("R2 ");
    tracep->declBus(c+616,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+578,"clk", false,-1);
    tracep->declBit(c+304,"rst", false,-1);
    tracep->declBit(c+302,"en", false,-1);
    tracep->declBus(c+247,"in", false,-1, 24,0);
    tracep->declBus(c+128,"out", false,-1, 24,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("calc_stage_2 ");
    tracep->declBus(c+616,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+578,"clk", false,-1);
    tracep->declBit(c+304,"reset", false,-1);
    tracep->declBit(c+303,"en", false,-1);
    tracep->declBus(c+248,"zr2_next", false,-1, 24,0);
    tracep->declBus(c+249,"zi2_next", false,-1, 24,0);
    tracep->declBus(c+130,"zr2", false,-1, 24,0);
    tracep->declBus(c+131,"zi2", false,-1, 24,0);
    tracep->pushNamePrefix("R3 ");
    tracep->declBus(c+616,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+578,"clk", false,-1);
    tracep->declBit(c+304,"rst", false,-1);
    tracep->declBit(c+303,"en", false,-1);
    tracep->declBus(c+248,"in", false,-1, 24,0);
    tracep->declBus(c+130,"out", false,-1, 24,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("R4 ");
    tracep->declBus(c+616,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+578,"clk", false,-1);
    tracep->declBit(c+304,"rst", false,-1);
    tracep->declBit(c+303,"en", false,-1);
    tracep->declBus(c+249,"in", false,-1, 24,0);
    tracep->declBus(c+131,"out", false,-1, 24,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("pixel_map ");
    tracep->declBus(c+606,"PIXEL_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+616,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+617,"ENGINE_FRACT_WIDTH", false,-1, 31,0);
    tracep->declBit(c+578,"clk", false,-1);
    tracep->declBit(c+618,"reset", false,-1);
    tracep->declBit(c+301,"en", false,-1);
    tracep->declBus(c+120,"pixel_x_in", false,-1, 9,0);
    tracep->declBus(c+121,"pixel_y_in", false,-1, 9,0);
    tracep->declBus(c+596,"x_offset", false,-1, 24,0);
    tracep->declBus(c+597,"y_offset", false,-1, 24,0);
    tracep->declBus(c+125,"real_x", false,-1, 24,0);
    tracep->declBus(c+126,"imag_y", false,-1, 24,0);
    tracep->declBus(c+123,"pixel_x_out", false,-1, 9,0);
    tracep->declBus(c+124,"pixel_y_out", false,-1, 9,0);
    tracep->declBus(c+625,"scale_factor", false,-1, 24,0);
    tracep->declBus(c+599,"r_min", false,-1, 24,0);
    tracep->declBus(c+600,"i_min", false,-1, 24,0);
    tracep->declBus(c+141,"r_gradient", false,-1, 24,0);
    tracep->declBus(c+142,"i_gradient", false,-1, 24,0);
    tracep->declBus(c+143,"pixel_x_fixed", false,-1, 24,0);
    tracep->declBus(c+144,"pixel_y_fixed", false,-1, 24,0);
    tracep->pushNamePrefix("M1 ");
    tracep->declBus(c+616,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+617,"ENGINE_FRACT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+626,"a", false,-1, 24,0);
    tracep->declBus(c+143,"b", false,-1, 24,0);
    tracep->declBit(c+618,"rst", false,-1);
    tracep->declBus(c+141,"result", false,-1, 24,0);
    tracep->declBus(c+619,"ENGINE_INT_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+145,"product", false,-1, 49,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("M2 ");
    tracep->declBus(c+616,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+617,"ENGINE_FRACT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+626,"a", false,-1, 24,0);
    tracep->declBus(c+144,"b", false,-1, 24,0);
    tracep->declBit(c+618,"rst", false,-1);
    tracep->declBus(c+142,"result", false,-1, 24,0);
    tracep->declBus(c+619,"ENGINE_INT_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+147,"product", false,-1, 49,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+606,"PIXEL_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+616,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+617,"ENGINE_FRACT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+608,"ITERATIONS_WIDTH", false,-1, 31,0);
    tracep->declBit(c+578,"clk", false,-1);
    tracep->declBit(c+618,"reset", false,-1);
    tracep->declBus(c+594,"iterations_max", false,-1, 5,0);
    tracep->declBus(c+149,"x0_", false,-1, 9,0);
    tracep->declBus(c+150,"y0_", false,-1, 9,0);
    tracep->declBus(c+595,"zoom", false,-1, 2,0);
    tracep->declBus(c+596,"x_offset", false,-1, 24,0);
    tracep->declBus(c+597,"y_offset", false,-1, 24,0);
    tracep->declBit(c+575,"full_queue", false,-1);
    tracep->declBit(c+306,"en_pixel_map", false,-1);
    tracep->declBus(c+151,"iterations", false,-1, 5,0);
    tracep->declBus(c+152,"xpixel", false,-1, 9,0);
    tracep->declBus(c+153,"ypixel", false,-1, 9,0);
    tracep->declBus(c+619,"ENGINE_INT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+154,"x", false,-1, 24,0);
    tracep->declBus(c+155,"y", false,-1, 24,0);
    tracep->declBit(c+603,"finished", false,-1);
    tracep->declBit(c+251,"distributor_ready", false,-1);
    tracep->declBus(c+151,"curr_iterations", false,-1, 5,0);
    tracep->declBus(c+156,"zr", false,-1, 24,0);
    tracep->declBus(c+157,"zi", false,-1, 24,0);
    tracep->declBus(c+158,"zr_next", false,-1, 24,0);
    tracep->declBus(c+252,"zi_next", false,-1, 24,0);
    tracep->declBus(c+159,"zr2", false,-1, 24,0);
    tracep->declBus(c+160,"zi2", false,-1, 24,0);
    tracep->declBus(c+253,"zr2_next", false,-1, 24,0);
    tracep->declBus(c+254,"zi2_next", false,-1, 24,0);
    tracep->declBus(c+255,"zrzi", false,-1, 24,0);
    tracep->declBit(c+307,"en_stage_1", false,-1);
    tracep->declBit(c+308,"en_stage_2", false,-1);
    tracep->declBit(c+309,"init", false,-1);
    tracep->declBus(c+161,"distance", false,-1, 24,0);
    tracep->declBus(c+620,"max_distance", false,-1, 24,0);
    tracep->pushNamePrefix("M5 ");
    tracep->declBus(c+616,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+617,"ENGINE_FRACT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+156,"a", false,-1, 24,0);
    tracep->declBus(c+156,"b", false,-1, 24,0);
    tracep->declBit(c+309,"rst", false,-1);
    tracep->declBus(c+253,"result", false,-1, 24,0);
    tracep->declBus(c+619,"ENGINE_INT_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+162,"product", false,-1, 49,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("M6 ");
    tracep->declBus(c+616,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+617,"ENGINE_FRACT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+157,"a", false,-1, 24,0);
    tracep->declBus(c+157,"b", false,-1, 24,0);
    tracep->declBit(c+309,"rst", false,-1);
    tracep->declBus(c+254,"result", false,-1, 24,0);
    tracep->declBus(c+619,"ENGINE_INT_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+164,"product", false,-1, 49,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("M7 ");
    tracep->declBus(c+616,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+617,"ENGINE_FRACT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+156,"a", false,-1, 24,0);
    tracep->declBus(c+157,"b", false,-1, 24,0);
    tracep->declBit(c+309,"rst", false,-1);
    tracep->declBus(c+255,"result", false,-1, 24,0);
    tracep->declBus(c+619,"ENGINE_INT_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+166,"product", false,-1, 49,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("R0 ");
    tracep->declBus(c+608,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+578,"clk", false,-1);
    tracep->declBit(c+309,"rst", false,-1);
    tracep->declBit(c+308,"en", false,-1);
    tracep->declBus(c+168,"in", false,-1, 5,0);
    tracep->declBus(c+151,"out", false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SM ");
    tracep->declBit(c+578,"clk", false,-1);
    tracep->declBit(c+618,"rst", false,-1);
    tracep->declBit(c+603,"finished", false,-1);
    tracep->declBit(c+575,"full_queue", false,-1);
    tracep->declBit(c+251,"distributor_ready", false,-1);
    tracep->declBit(c+309,"init", false,-1);
    tracep->declBit(c+306,"en_pixel_map", false,-1);
    tracep->declBit(c+307,"en_stage_1", false,-1);
    tracep->declBit(c+308,"en_stage_2", false,-1);
    tracep->declBus(c+621,"INIT", false,-1, 31,0);
    tracep->declBus(c+622,"CALC_STAGE_1", false,-1, 31,0);
    tracep->declBus(c+623,"CALC_STAGE_2", false,-1, 31,0);
    tracep->declBus(c+624,"ESCAPE", false,-1, 31,0);
    tracep->declBus(c+169,"state", false,-1, 1,0);
    tracep->declBus(c+310,"next", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("calc_stage_1 ");
    tracep->declBus(c+616,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+578,"clk", false,-1);
    tracep->declBit(c+309,"reset", false,-1);
    tracep->declBit(c+307,"en", false,-1);
    tracep->declBus(c+158,"zr_next", false,-1, 24,0);
    tracep->declBus(c+252,"zi_next", false,-1, 24,0);
    tracep->declBus(c+156,"zr", false,-1, 24,0);
    tracep->declBus(c+157,"zi", false,-1, 24,0);
    tracep->pushNamePrefix("R1 ");
    tracep->declBus(c+616,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+578,"clk", false,-1);
    tracep->declBit(c+309,"rst", false,-1);
    tracep->declBit(c+307,"en", false,-1);
    tracep->declBus(c+158,"in", false,-1, 24,0);
    tracep->declBus(c+156,"out", false,-1, 24,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("R2 ");
    tracep->declBus(c+616,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+578,"clk", false,-1);
    tracep->declBit(c+309,"rst", false,-1);
    tracep->declBit(c+307,"en", false,-1);
    tracep->declBus(c+252,"in", false,-1, 24,0);
    tracep->declBus(c+157,"out", false,-1, 24,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("calc_stage_2 ");
    tracep->declBus(c+616,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+578,"clk", false,-1);
    tracep->declBit(c+309,"reset", false,-1);
    tracep->declBit(c+308,"en", false,-1);
    tracep->declBus(c+253,"zr2_next", false,-1, 24,0);
    tracep->declBus(c+254,"zi2_next", false,-1, 24,0);
    tracep->declBus(c+159,"zr2", false,-1, 24,0);
    tracep->declBus(c+160,"zi2", false,-1, 24,0);
    tracep->pushNamePrefix("R3 ");
    tracep->declBus(c+616,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+578,"clk", false,-1);
    tracep->declBit(c+309,"rst", false,-1);
    tracep->declBit(c+308,"en", false,-1);
    tracep->declBus(c+253,"in", false,-1, 24,0);
    tracep->declBus(c+159,"out", false,-1, 24,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("R4 ");
    tracep->declBus(c+616,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+578,"clk", false,-1);
    tracep->declBit(c+309,"rst", false,-1);
    tracep->declBit(c+308,"en", false,-1);
    tracep->declBus(c+254,"in", false,-1, 24,0);
    tracep->declBus(c+160,"out", false,-1, 24,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("pixel_map ");
    tracep->declBus(c+606,"PIXEL_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+616,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+617,"ENGINE_FRACT_WIDTH", false,-1, 31,0);
    tracep->declBit(c+578,"clk", false,-1);
    tracep->declBit(c+618,"reset", false,-1);
    tracep->declBit(c+306,"en", false,-1);
    tracep->declBus(c+149,"pixel_x_in", false,-1, 9,0);
    tracep->declBus(c+150,"pixel_y_in", false,-1, 9,0);
    tracep->declBus(c+596,"x_offset", false,-1, 24,0);
    tracep->declBus(c+597,"y_offset", false,-1, 24,0);
    tracep->declBus(c+154,"real_x", false,-1, 24,0);
    tracep->declBus(c+155,"imag_y", false,-1, 24,0);
    tracep->declBus(c+152,"pixel_x_out", false,-1, 9,0);
    tracep->declBus(c+153,"pixel_y_out", false,-1, 9,0);
    tracep->declBus(c+625,"scale_factor", false,-1, 24,0);
    tracep->declBus(c+599,"r_min", false,-1, 24,0);
    tracep->declBus(c+600,"i_min", false,-1, 24,0);
    tracep->declBus(c+170,"r_gradient", false,-1, 24,0);
    tracep->declBus(c+171,"i_gradient", false,-1, 24,0);
    tracep->declBus(c+172,"pixel_x_fixed", false,-1, 24,0);
    tracep->declBus(c+173,"pixel_y_fixed", false,-1, 24,0);
    tracep->pushNamePrefix("M1 ");
    tracep->declBus(c+616,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+617,"ENGINE_FRACT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+626,"a", false,-1, 24,0);
    tracep->declBus(c+172,"b", false,-1, 24,0);
    tracep->declBit(c+618,"rst", false,-1);
    tracep->declBus(c+170,"result", false,-1, 24,0);
    tracep->declBus(c+619,"ENGINE_INT_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+174,"product", false,-1, 49,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("M2 ");
    tracep->declBus(c+616,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+617,"ENGINE_FRACT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+626,"a", false,-1, 24,0);
    tracep->declBus(c+173,"b", false,-1, 24,0);
    tracep->declBit(c+618,"rst", false,-1);
    tracep->declBus(c+171,"result", false,-1, 24,0);
    tracep->declBus(c+619,"ENGINE_INT_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+176,"product", false,-1, 49,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+606,"PIXEL_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+616,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+617,"ENGINE_FRACT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+608,"ITERATIONS_WIDTH", false,-1, 31,0);
    tracep->declBit(c+578,"clk", false,-1);
    tracep->declBit(c+618,"reset", false,-1);
    tracep->declBus(c+594,"iterations_max", false,-1, 5,0);
    tracep->declBus(c+178,"x0_", false,-1, 9,0);
    tracep->declBus(c+179,"y0_", false,-1, 9,0);
    tracep->declBus(c+595,"zoom", false,-1, 2,0);
    tracep->declBus(c+596,"x_offset", false,-1, 24,0);
    tracep->declBus(c+597,"y_offset", false,-1, 24,0);
    tracep->declBit(c+576,"full_queue", false,-1);
    tracep->declBit(c+311,"en_pixel_map", false,-1);
    tracep->declBus(c+180,"iterations", false,-1, 5,0);
    tracep->declBus(c+181,"xpixel", false,-1, 9,0);
    tracep->declBus(c+182,"ypixel", false,-1, 9,0);
    tracep->declBus(c+619,"ENGINE_INT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+183,"x", false,-1, 24,0);
    tracep->declBus(c+184,"y", false,-1, 24,0);
    tracep->declBit(c+604,"finished", false,-1);
    tracep->declBit(c+256,"distributor_ready", false,-1);
    tracep->declBus(c+180,"curr_iterations", false,-1, 5,0);
    tracep->declBus(c+185,"zr", false,-1, 24,0);
    tracep->declBus(c+186,"zi", false,-1, 24,0);
    tracep->declBus(c+187,"zr_next", false,-1, 24,0);
    tracep->declBus(c+257,"zi_next", false,-1, 24,0);
    tracep->declBus(c+188,"zr2", false,-1, 24,0);
    tracep->declBus(c+189,"zi2", false,-1, 24,0);
    tracep->declBus(c+258,"zr2_next", false,-1, 24,0);
    tracep->declBus(c+259,"zi2_next", false,-1, 24,0);
    tracep->declBus(c+260,"zrzi", false,-1, 24,0);
    tracep->declBit(c+312,"en_stage_1", false,-1);
    tracep->declBit(c+313,"en_stage_2", false,-1);
    tracep->declBit(c+314,"init", false,-1);
    tracep->declBus(c+190,"distance", false,-1, 24,0);
    tracep->declBus(c+620,"max_distance", false,-1, 24,0);
    tracep->pushNamePrefix("M5 ");
    tracep->declBus(c+616,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+617,"ENGINE_FRACT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+185,"a", false,-1, 24,0);
    tracep->declBus(c+185,"b", false,-1, 24,0);
    tracep->declBit(c+314,"rst", false,-1);
    tracep->declBus(c+258,"result", false,-1, 24,0);
    tracep->declBus(c+619,"ENGINE_INT_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+191,"product", false,-1, 49,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("M6 ");
    tracep->declBus(c+616,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+617,"ENGINE_FRACT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+186,"a", false,-1, 24,0);
    tracep->declBus(c+186,"b", false,-1, 24,0);
    tracep->declBit(c+314,"rst", false,-1);
    tracep->declBus(c+259,"result", false,-1, 24,0);
    tracep->declBus(c+619,"ENGINE_INT_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+193,"product", false,-1, 49,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("M7 ");
    tracep->declBus(c+616,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+617,"ENGINE_FRACT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+185,"a", false,-1, 24,0);
    tracep->declBus(c+186,"b", false,-1, 24,0);
    tracep->declBit(c+314,"rst", false,-1);
    tracep->declBus(c+260,"result", false,-1, 24,0);
    tracep->declBus(c+619,"ENGINE_INT_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+195,"product", false,-1, 49,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("R0 ");
    tracep->declBus(c+608,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+578,"clk", false,-1);
    tracep->declBit(c+314,"rst", false,-1);
    tracep->declBit(c+313,"en", false,-1);
    tracep->declBus(c+197,"in", false,-1, 5,0);
    tracep->declBus(c+180,"out", false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SM ");
    tracep->declBit(c+578,"clk", false,-1);
    tracep->declBit(c+618,"rst", false,-1);
    tracep->declBit(c+604,"finished", false,-1);
    tracep->declBit(c+576,"full_queue", false,-1);
    tracep->declBit(c+256,"distributor_ready", false,-1);
    tracep->declBit(c+314,"init", false,-1);
    tracep->declBit(c+311,"en_pixel_map", false,-1);
    tracep->declBit(c+312,"en_stage_1", false,-1);
    tracep->declBit(c+313,"en_stage_2", false,-1);
    tracep->declBus(c+621,"INIT", false,-1, 31,0);
    tracep->declBus(c+622,"CALC_STAGE_1", false,-1, 31,0);
    tracep->declBus(c+623,"CALC_STAGE_2", false,-1, 31,0);
    tracep->declBus(c+624,"ESCAPE", false,-1, 31,0);
    tracep->declBus(c+198,"state", false,-1, 1,0);
    tracep->declBus(c+315,"next", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("calc_stage_1 ");
    tracep->declBus(c+616,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+578,"clk", false,-1);
    tracep->declBit(c+314,"reset", false,-1);
    tracep->declBit(c+312,"en", false,-1);
    tracep->declBus(c+187,"zr_next", false,-1, 24,0);
    tracep->declBus(c+257,"zi_next", false,-1, 24,0);
    tracep->declBus(c+185,"zr", false,-1, 24,0);
    tracep->declBus(c+186,"zi", false,-1, 24,0);
    tracep->pushNamePrefix("R1 ");
    tracep->declBus(c+616,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+578,"clk", false,-1);
    tracep->declBit(c+314,"rst", false,-1);
    tracep->declBit(c+312,"en", false,-1);
    tracep->declBus(c+187,"in", false,-1, 24,0);
    tracep->declBus(c+185,"out", false,-1, 24,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("R2 ");
    tracep->declBus(c+616,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+578,"clk", false,-1);
    tracep->declBit(c+314,"rst", false,-1);
    tracep->declBit(c+312,"en", false,-1);
    tracep->declBus(c+257,"in", false,-1, 24,0);
    tracep->declBus(c+186,"out", false,-1, 24,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("calc_stage_2 ");
    tracep->declBus(c+616,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+578,"clk", false,-1);
    tracep->declBit(c+314,"reset", false,-1);
    tracep->declBit(c+313,"en", false,-1);
    tracep->declBus(c+258,"zr2_next", false,-1, 24,0);
    tracep->declBus(c+259,"zi2_next", false,-1, 24,0);
    tracep->declBus(c+188,"zr2", false,-1, 24,0);
    tracep->declBus(c+189,"zi2", false,-1, 24,0);
    tracep->pushNamePrefix("R3 ");
    tracep->declBus(c+616,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+578,"clk", false,-1);
    tracep->declBit(c+314,"rst", false,-1);
    tracep->declBit(c+313,"en", false,-1);
    tracep->declBus(c+258,"in", false,-1, 24,0);
    tracep->declBus(c+188,"out", false,-1, 24,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("R4 ");
    tracep->declBus(c+616,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+578,"clk", false,-1);
    tracep->declBit(c+314,"rst", false,-1);
    tracep->declBit(c+313,"en", false,-1);
    tracep->declBus(c+259,"in", false,-1, 24,0);
    tracep->declBus(c+189,"out", false,-1, 24,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("pixel_map ");
    tracep->declBus(c+606,"PIXEL_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+616,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+617,"ENGINE_FRACT_WIDTH", false,-1, 31,0);
    tracep->declBit(c+578,"clk", false,-1);
    tracep->declBit(c+618,"reset", false,-1);
    tracep->declBit(c+311,"en", false,-1);
    tracep->declBus(c+178,"pixel_x_in", false,-1, 9,0);
    tracep->declBus(c+179,"pixel_y_in", false,-1, 9,0);
    tracep->declBus(c+596,"x_offset", false,-1, 24,0);
    tracep->declBus(c+597,"y_offset", false,-1, 24,0);
    tracep->declBus(c+183,"real_x", false,-1, 24,0);
    tracep->declBus(c+184,"imag_y", false,-1, 24,0);
    tracep->declBus(c+181,"pixel_x_out", false,-1, 9,0);
    tracep->declBus(c+182,"pixel_y_out", false,-1, 9,0);
    tracep->declBus(c+625,"scale_factor", false,-1, 24,0);
    tracep->declBus(c+599,"r_min", false,-1, 24,0);
    tracep->declBus(c+600,"i_min", false,-1, 24,0);
    tracep->declBus(c+199,"r_gradient", false,-1, 24,0);
    tracep->declBus(c+200,"i_gradient", false,-1, 24,0);
    tracep->declBus(c+201,"pixel_x_fixed", false,-1, 24,0);
    tracep->declBus(c+202,"pixel_y_fixed", false,-1, 24,0);
    tracep->pushNamePrefix("M1 ");
    tracep->declBus(c+616,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+617,"ENGINE_FRACT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+626,"a", false,-1, 24,0);
    tracep->declBus(c+201,"b", false,-1, 24,0);
    tracep->declBit(c+618,"rst", false,-1);
    tracep->declBus(c+199,"result", false,-1, 24,0);
    tracep->declBus(c+619,"ENGINE_INT_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+203,"product", false,-1, 49,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("M2 ");
    tracep->declBus(c+616,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+617,"ENGINE_FRACT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+626,"a", false,-1, 24,0);
    tracep->declBus(c+202,"b", false,-1, 24,0);
    tracep->declBit(c+618,"rst", false,-1);
    tracep->declBus(c+200,"result", false,-1, 24,0);
    tracep->declBus(c+619,"ENGINE_INT_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+205,"product", false,-1, 49,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+606,"PIXEL_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+616,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+617,"ENGINE_FRACT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+608,"ITERATIONS_WIDTH", false,-1, 31,0);
    tracep->declBit(c+578,"clk", false,-1);
    tracep->declBit(c+618,"reset", false,-1);
    tracep->declBus(c+594,"iterations_max", false,-1, 5,0);
    tracep->declBus(c+207,"x0_", false,-1, 9,0);
    tracep->declBus(c+208,"y0_", false,-1, 9,0);
    tracep->declBus(c+595,"zoom", false,-1, 2,0);
    tracep->declBus(c+596,"x_offset", false,-1, 24,0);
    tracep->declBus(c+597,"y_offset", false,-1, 24,0);
    tracep->declBit(c+577,"full_queue", false,-1);
    tracep->declBit(c+316,"en_pixel_map", false,-1);
    tracep->declBus(c+209,"iterations", false,-1, 5,0);
    tracep->declBus(c+210,"xpixel", false,-1, 9,0);
    tracep->declBus(c+211,"ypixel", false,-1, 9,0);
    tracep->declBus(c+619,"ENGINE_INT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+212,"x", false,-1, 24,0);
    tracep->declBus(c+213,"y", false,-1, 24,0);
    tracep->declBit(c+605,"finished", false,-1);
    tracep->declBit(c+261,"distributor_ready", false,-1);
    tracep->declBus(c+209,"curr_iterations", false,-1, 5,0);
    tracep->declBus(c+214,"zr", false,-1, 24,0);
    tracep->declBus(c+215,"zi", false,-1, 24,0);
    tracep->declBus(c+216,"zr_next", false,-1, 24,0);
    tracep->declBus(c+262,"zi_next", false,-1, 24,0);
    tracep->declBus(c+217,"zr2", false,-1, 24,0);
    tracep->declBus(c+218,"zi2", false,-1, 24,0);
    tracep->declBus(c+263,"zr2_next", false,-1, 24,0);
    tracep->declBus(c+264,"zi2_next", false,-1, 24,0);
    tracep->declBus(c+265,"zrzi", false,-1, 24,0);
    tracep->declBit(c+317,"en_stage_1", false,-1);
    tracep->declBit(c+318,"en_stage_2", false,-1);
    tracep->declBit(c+319,"init", false,-1);
    tracep->declBus(c+219,"distance", false,-1, 24,0);
    tracep->declBus(c+620,"max_distance", false,-1, 24,0);
    tracep->pushNamePrefix("M5 ");
    tracep->declBus(c+616,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+617,"ENGINE_FRACT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+214,"a", false,-1, 24,0);
    tracep->declBus(c+214,"b", false,-1, 24,0);
    tracep->declBit(c+319,"rst", false,-1);
    tracep->declBus(c+263,"result", false,-1, 24,0);
    tracep->declBus(c+619,"ENGINE_INT_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+220,"product", false,-1, 49,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("M6 ");
    tracep->declBus(c+616,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+617,"ENGINE_FRACT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+215,"a", false,-1, 24,0);
    tracep->declBus(c+215,"b", false,-1, 24,0);
    tracep->declBit(c+319,"rst", false,-1);
    tracep->declBus(c+264,"result", false,-1, 24,0);
    tracep->declBus(c+619,"ENGINE_INT_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+222,"product", false,-1, 49,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("M7 ");
    tracep->declBus(c+616,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+617,"ENGINE_FRACT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+214,"a", false,-1, 24,0);
    tracep->declBus(c+215,"b", false,-1, 24,0);
    tracep->declBit(c+319,"rst", false,-1);
    tracep->declBus(c+265,"result", false,-1, 24,0);
    tracep->declBus(c+619,"ENGINE_INT_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+224,"product", false,-1, 49,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("R0 ");
    tracep->declBus(c+608,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+578,"clk", false,-1);
    tracep->declBit(c+319,"rst", false,-1);
    tracep->declBit(c+318,"en", false,-1);
    tracep->declBus(c+226,"in", false,-1, 5,0);
    tracep->declBus(c+209,"out", false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SM ");
    tracep->declBit(c+578,"clk", false,-1);
    tracep->declBit(c+618,"rst", false,-1);
    tracep->declBit(c+605,"finished", false,-1);
    tracep->declBit(c+577,"full_queue", false,-1);
    tracep->declBit(c+261,"distributor_ready", false,-1);
    tracep->declBit(c+319,"init", false,-1);
    tracep->declBit(c+316,"en_pixel_map", false,-1);
    tracep->declBit(c+317,"en_stage_1", false,-1);
    tracep->declBit(c+318,"en_stage_2", false,-1);
    tracep->declBus(c+621,"INIT", false,-1, 31,0);
    tracep->declBus(c+622,"CALC_STAGE_1", false,-1, 31,0);
    tracep->declBus(c+623,"CALC_STAGE_2", false,-1, 31,0);
    tracep->declBus(c+624,"ESCAPE", false,-1, 31,0);
    tracep->declBus(c+227,"state", false,-1, 1,0);
    tracep->declBus(c+320,"next", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("calc_stage_1 ");
    tracep->declBus(c+616,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+578,"clk", false,-1);
    tracep->declBit(c+319,"reset", false,-1);
    tracep->declBit(c+317,"en", false,-1);
    tracep->declBus(c+216,"zr_next", false,-1, 24,0);
    tracep->declBus(c+262,"zi_next", false,-1, 24,0);
    tracep->declBus(c+214,"zr", false,-1, 24,0);
    tracep->declBus(c+215,"zi", false,-1, 24,0);
    tracep->pushNamePrefix("R1 ");
    tracep->declBus(c+616,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+578,"clk", false,-1);
    tracep->declBit(c+319,"rst", false,-1);
    tracep->declBit(c+317,"en", false,-1);
    tracep->declBus(c+216,"in", false,-1, 24,0);
    tracep->declBus(c+214,"out", false,-1, 24,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("R2 ");
    tracep->declBus(c+616,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+578,"clk", false,-1);
    tracep->declBit(c+319,"rst", false,-1);
    tracep->declBit(c+317,"en", false,-1);
    tracep->declBus(c+262,"in", false,-1, 24,0);
    tracep->declBus(c+215,"out", false,-1, 24,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("calc_stage_2 ");
    tracep->declBus(c+616,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+578,"clk", false,-1);
    tracep->declBit(c+319,"reset", false,-1);
    tracep->declBit(c+318,"en", false,-1);
    tracep->declBus(c+263,"zr2_next", false,-1, 24,0);
    tracep->declBus(c+264,"zi2_next", false,-1, 24,0);
    tracep->declBus(c+217,"zr2", false,-1, 24,0);
    tracep->declBus(c+218,"zi2", false,-1, 24,0);
    tracep->pushNamePrefix("R3 ");
    tracep->declBus(c+616,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+578,"clk", false,-1);
    tracep->declBit(c+319,"rst", false,-1);
    tracep->declBit(c+318,"en", false,-1);
    tracep->declBus(c+263,"in", false,-1, 24,0);
    tracep->declBus(c+217,"out", false,-1, 24,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("R4 ");
    tracep->declBus(c+616,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+578,"clk", false,-1);
    tracep->declBit(c+319,"rst", false,-1);
    tracep->declBit(c+318,"en", false,-1);
    tracep->declBus(c+264,"in", false,-1, 24,0);
    tracep->declBus(c+218,"out", false,-1, 24,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("pixel_map ");
    tracep->declBus(c+606,"PIXEL_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+616,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+617,"ENGINE_FRACT_WIDTH", false,-1, 31,0);
    tracep->declBit(c+578,"clk", false,-1);
    tracep->declBit(c+618,"reset", false,-1);
    tracep->declBit(c+316,"en", false,-1);
    tracep->declBus(c+207,"pixel_x_in", false,-1, 9,0);
    tracep->declBus(c+208,"pixel_y_in", false,-1, 9,0);
    tracep->declBus(c+596,"x_offset", false,-1, 24,0);
    tracep->declBus(c+597,"y_offset", false,-1, 24,0);
    tracep->declBus(c+212,"real_x", false,-1, 24,0);
    tracep->declBus(c+213,"imag_y", false,-1, 24,0);
    tracep->declBus(c+210,"pixel_x_out", false,-1, 9,0);
    tracep->declBus(c+211,"pixel_y_out", false,-1, 9,0);
    tracep->declBus(c+625,"scale_factor", false,-1, 24,0);
    tracep->declBus(c+599,"r_min", false,-1, 24,0);
    tracep->declBus(c+600,"i_min", false,-1, 24,0);
    tracep->declBus(c+228,"r_gradient", false,-1, 24,0);
    tracep->declBus(c+229,"i_gradient", false,-1, 24,0);
    tracep->declBus(c+230,"pixel_x_fixed", false,-1, 24,0);
    tracep->declBus(c+231,"pixel_y_fixed", false,-1, 24,0);
    tracep->pushNamePrefix("M1 ");
    tracep->declBus(c+616,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+617,"ENGINE_FRACT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+626,"a", false,-1, 24,0);
    tracep->declBus(c+230,"b", false,-1, 24,0);
    tracep->declBit(c+618,"rst", false,-1);
    tracep->declBus(c+228,"result", false,-1, 24,0);
    tracep->declBus(c+619,"ENGINE_INT_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+232,"product", false,-1, 49,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("M2 ");
    tracep->declBus(c+616,"ENGINE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+617,"ENGINE_FRACT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+626,"a", false,-1, 24,0);
    tracep->declBus(c+231,"b", false,-1, 24,0);
    tracep->declBit(c+618,"rst", false,-1);
    tracep->declBus(c+229,"result", false,-1, 24,0);
    tracep->declBus(c+619,"ENGINE_INT_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+234,"product", false,-1, 49,0);
    tracep->popNamePrefix(2);
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
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[1] ");
    tracep->pushNamePrefix("engine ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[2] ");
    tracep->pushNamePrefix("engine ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[3] ");
    tracep->pushNamePrefix("engine ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[4] ");
    tracep->pushNamePrefix("engine ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[5] ");
    tracep->pushNamePrefix("engine ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine__0(vlSelf, tracep);
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
    bufp->fullIData(oldp+1,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+2,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+3,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+4,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+5,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+6,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+7,(vlSelf->top__DOT__colour_o_wire),24);
    bufp->fullSData(oldp+8,(vlSelf->top__DOT__xpixel_wire),10);
    bufp->fullSData(oldp+9,(vlSelf->top__DOT__ypixel_wire),10);
    bufp->fullSData(oldp+10,(vlSelf->top__DOT__x[0]),10);
    bufp->fullSData(oldp+11,(vlSelf->top__DOT__x[1]),10);
    bufp->fullSData(oldp+12,(vlSelf->top__DOT__x[2]),10);
    bufp->fullSData(oldp+13,(vlSelf->top__DOT__x[3]),10);
    bufp->fullSData(oldp+14,(vlSelf->top__DOT__x[4]),10);
    bufp->fullSData(oldp+15,(vlSelf->top__DOT__x[5]),10);
    bufp->fullSData(oldp+16,(vlSelf->top__DOT__y[0]),10);
    bufp->fullSData(oldp+17,(vlSelf->top__DOT__y[1]),10);
    bufp->fullSData(oldp+18,(vlSelf->top__DOT__y[2]),10);
    bufp->fullSData(oldp+19,(vlSelf->top__DOT__y[3]),10);
    bufp->fullSData(oldp+20,(vlSelf->top__DOT__y[4]),10);
    bufp->fullSData(oldp+21,(vlSelf->top__DOT__y[5]),10);
    bufp->fullIData(oldp+22,(vlSelf->top__DOT__iterations_bus[0]),32);
    bufp->fullIData(oldp+23,(vlSelf->top__DOT__iterations_bus[1]),32);
    bufp->fullIData(oldp+24,(vlSelf->top__DOT__iterations_bus[2]),32);
    bufp->fullIData(oldp+25,(vlSelf->top__DOT__iterations_bus[3]),32);
    bufp->fullIData(oldp+26,(vlSelf->top__DOT__iterations_bus[4]),32);
    bufp->fullIData(oldp+27,(vlSelf->top__DOT__iterations_bus[5]),32);
    bufp->fullSData(oldp+28,(vlSelf->top__DOT__combinator_block__DOT__xpixel),10);
    bufp->fullSData(oldp+29,(vlSelf->top__DOT__combinator_block__DOT__ypixel),10);
    bufp->fullSData(oldp+30,(vlSelf->top__DOT____Vcellout__distributor__x[0]),10);
    bufp->fullSData(oldp+31,(vlSelf->top__DOT____Vcellout__distributor__x[1]),10);
    bufp->fullSData(oldp+32,(vlSelf->top__DOT____Vcellout__distributor__x[2]),10);
    bufp->fullSData(oldp+33,(vlSelf->top__DOT____Vcellout__distributor__x[3]),10);
    bufp->fullSData(oldp+34,(vlSelf->top__DOT____Vcellout__distributor__x[4]),10);
    bufp->fullSData(oldp+35,(vlSelf->top__DOT____Vcellout__distributor__x[5]),10);
    bufp->fullSData(oldp+36,(vlSelf->top__DOT____Vcellout__distributor__y[0]),10);
    bufp->fullSData(oldp+37,(vlSelf->top__DOT____Vcellout__distributor__y[1]),10);
    bufp->fullSData(oldp+38,(vlSelf->top__DOT____Vcellout__distributor__y[2]),10);
    bufp->fullSData(oldp+39,(vlSelf->top__DOT____Vcellout__distributor__y[3]),10);
    bufp->fullSData(oldp+40,(vlSelf->top__DOT____Vcellout__distributor__y[4]),10);
    bufp->fullSData(oldp+41,(vlSelf->top__DOT____Vcellout__distributor__y[5]),10);
    bufp->fullSData(oldp+42,(vlSelf->top__DOT__distributor__DOT__x0),10);
    bufp->fullSData(oldp+43,(vlSelf->top__DOT__distributor__DOT__y0),10);
    bufp->fullIData(oldp+44,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+45,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+46,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+47,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+48,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+49,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+50,(vlSelf->top__DOT____Vcellinp__lut_rom__iterations[0]),32);
    bufp->fullIData(oldp+51,(vlSelf->top__DOT____Vcellinp__lut_rom__iterations[1]),32);
    bufp->fullIData(oldp+52,(vlSelf->top__DOT____Vcellinp__lut_rom__iterations[2]),32);
    bufp->fullIData(oldp+53,(vlSelf->top__DOT____Vcellinp__lut_rom__iterations[3]),32);
    bufp->fullIData(oldp+54,(vlSelf->top__DOT____Vcellinp__lut_rom__iterations[4]),32);
    bufp->fullIData(oldp+55,(vlSelf->top__DOT____Vcellinp__lut_rom__iterations[5]),32);
    bufp->fullIData(oldp+56,(vlSelf->top__DOT____Vcellout__lut_rom__rgb_val[0]),24);
    bufp->fullIData(oldp+57,(vlSelf->top__DOT____Vcellout__lut_rom__rgb_val[1]),24);
    bufp->fullIData(oldp+58,(vlSelf->top__DOT____Vcellout__lut_rom__rgb_val[2]),24);
    bufp->fullIData(oldp+59,(vlSelf->top__DOT____Vcellout__lut_rom__rgb_val[3]),24);
    bufp->fullIData(oldp+60,(vlSelf->top__DOT____Vcellout__lut_rom__rgb_val[4]),24);
    bufp->fullIData(oldp+61,(vlSelf->top__DOT____Vcellout__lut_rom__rgb_val[5]),24);
    bufp->fullSData(oldp+62,(vlSelf->top__DOT__x[0U]),10);
    bufp->fullSData(oldp+63,(vlSelf->top__DOT__y[0U]),10);
    bufp->fullCData(oldp+64,(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__curr_iterations),6);
    bufp->fullSData(oldp+65,(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.xpixel),10);
    bufp->fullSData(oldp+66,(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.ypixel),10);
    bufp->fullIData(oldp+67,(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__x),25);
    bufp->fullIData(oldp+68,(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__y),25);
    bufp->fullIData(oldp+69,(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__zr),25);
    bufp->fullIData(oldp+70,(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__zi),25);
    bufp->fullIData(oldp+71,((0x1ffffffU & ((vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__zr2 
                                             - vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__zi2) 
                                            + vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__x))),25);
    bufp->fullIData(oldp+72,(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__zr2),25);
    bufp->fullIData(oldp+73,(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__zi2),25);
    bufp->fullIData(oldp+74,(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__distance),25);
    bufp->fullQData(oldp+75,((0x3ffffffffffffULL & 
                              VL_MULS_QQQ(50, (0x3ffffffffffffULL 
                                               & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__zr)), 
                                          (0x3ffffffffffffULL 
                                           & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__zr))))),50);
    bufp->fullQData(oldp+77,((0x3ffffffffffffULL & 
                              VL_MULS_QQQ(50, (0x3ffffffffffffULL 
                                               & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__zi)), 
                                          (0x3ffffffffffffULL 
                                           & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__zi))))),50);
    bufp->fullQData(oldp+79,((0x3ffffffffffffULL & 
                              VL_MULS_QQQ(50, (0x3ffffffffffffULL 
                                               & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__zr)), 
                                          (0x3ffffffffffffULL 
                                           & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__zi))))),50);
    bufp->fullCData(oldp+81,((0x3fU & ((IData)(1U) 
                                       + (IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__curr_iterations)))),6);
    bufp->fullCData(oldp+82,(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__SM__DOT__state),2);
    bufp->fullIData(oldp+83,((0x1ffffffU & (IData)(
                                                   (0x3fffffffULL 
                                                    & (VL_MULS_QQQ(50, 0x199aULL, 
                                                                   (0x3ffffffffffffULL 
                                                                    & VL_EXTENDS_QI(50,25, 
                                                                                (0x1ffffffU 
                                                                                & (vlSelf->top__DOT__x
                                                                                [0U] 
                                                                                << 0xeU))))) 
                                                       >> 0x14U))))),25);
    bufp->fullIData(oldp+84,((0x1ffffffU & (IData)(
                                                   (0x3fffffffULL 
                                                    & (VL_MULS_QQQ(50, 0x199aULL, 
                                                                   (0x3ffffffffffffULL 
                                                                    & VL_EXTENDS_QI(50,25, 
                                                                                (0x1ffffffU 
                                                                                & (vlSelf->top__DOT__y
                                                                                [0U] 
                                                                                << 0xeU))))) 
                                                       >> 0x14U))))),25);
    bufp->fullIData(oldp+85,((0x1ffffffU & (vlSelf->top__DOT__x
                                            [0U] << 0xeU))),25);
    bufp->fullIData(oldp+86,((0x1ffffffU & (vlSelf->top__DOT__y
                                            [0U] << 0xeU))),25);
    bufp->fullQData(oldp+87,((0x3ffffffffffffULL & 
                              VL_MULS_QQQ(50, 0x199aULL, 
                                          (0x3ffffffffffffULL 
                                           & VL_EXTENDS_QI(50,25, 
                                                           (0x1ffffffU 
                                                            & (vlSelf->top__DOT__x
                                                               [0U] 
                                                               << 0xeU))))))),50);
    bufp->fullQData(oldp+89,((0x3ffffffffffffULL & 
                              VL_MULS_QQQ(50, 0x199aULL, 
                                          (0x3ffffffffffffULL 
                                           & VL_EXTENDS_QI(50,25, 
                                                           (0x1ffffffU 
                                                            & (vlSelf->top__DOT__y
                                                               [0U] 
                                                               << 0xeU))))))),50);
    bufp->fullSData(oldp+91,(vlSelf->top__DOT__x[1U]),10);
    bufp->fullSData(oldp+92,(vlSelf->top__DOT__y[1U]),10);
    bufp->fullCData(oldp+93,(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__curr_iterations),6);
    bufp->fullSData(oldp+94,(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.xpixel),10);
    bufp->fullSData(oldp+95,(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.ypixel),10);
    bufp->fullIData(oldp+96,(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__x),25);
    bufp->fullIData(oldp+97,(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__y),25);
    bufp->fullIData(oldp+98,(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__zr),25);
    bufp->fullIData(oldp+99,(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__zi),25);
    bufp->fullIData(oldp+100,((0x1ffffffU & ((vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__zr2 
                                              - vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__zi2) 
                                             + vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__x))),25);
    bufp->fullIData(oldp+101,(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__zr2),25);
    bufp->fullIData(oldp+102,(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__zi2),25);
    bufp->fullIData(oldp+103,(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__distance),25);
    bufp->fullQData(oldp+104,((0x3ffffffffffffULL & 
                               VL_MULS_QQQ(50, (0x3ffffffffffffULL 
                                                & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__zr)), 
                                           (0x3ffffffffffffULL 
                                            & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__zr))))),50);
    bufp->fullQData(oldp+106,((0x3ffffffffffffULL & 
                               VL_MULS_QQQ(50, (0x3ffffffffffffULL 
                                                & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__zi)), 
                                           (0x3ffffffffffffULL 
                                            & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__zi))))),50);
    bufp->fullQData(oldp+108,((0x3ffffffffffffULL & 
                               VL_MULS_QQQ(50, (0x3ffffffffffffULL 
                                                & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__zr)), 
                                           (0x3ffffffffffffULL 
                                            & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__zi))))),50);
    bufp->fullCData(oldp+110,((0x3fU & ((IData)(1U) 
                                        + (IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__curr_iterations)))),6);
    bufp->fullCData(oldp+111,(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__SM__DOT__state),2);
    bufp->fullIData(oldp+112,((0x1ffffffU & (IData)(
                                                    (0x3fffffffULL 
                                                     & (VL_MULS_QQQ(50, 0x199aULL, 
                                                                    (0x3ffffffffffffULL 
                                                                     & VL_EXTENDS_QI(50,25, 
                                                                                (0x1ffffffU 
                                                                                & (vlSelf->top__DOT__x
                                                                                [1U] 
                                                                                << 0xeU))))) 
                                                        >> 0x14U))))),25);
    bufp->fullIData(oldp+113,((0x1ffffffU & (IData)(
                                                    (0x3fffffffULL 
                                                     & (VL_MULS_QQQ(50, 0x199aULL, 
                                                                    (0x3ffffffffffffULL 
                                                                     & VL_EXTENDS_QI(50,25, 
                                                                                (0x1ffffffU 
                                                                                & (vlSelf->top__DOT__y
                                                                                [1U] 
                                                                                << 0xeU))))) 
                                                        >> 0x14U))))),25);
    bufp->fullIData(oldp+114,((0x1ffffffU & (vlSelf->top__DOT__x
                                             [1U] << 0xeU))),25);
    bufp->fullIData(oldp+115,((0x1ffffffU & (vlSelf->top__DOT__y
                                             [1U] << 0xeU))),25);
    bufp->fullQData(oldp+116,((0x3ffffffffffffULL & 
                               VL_MULS_QQQ(50, 0x199aULL, 
                                           (0x3ffffffffffffULL 
                                            & VL_EXTENDS_QI(50,25, 
                                                            (0x1ffffffU 
                                                             & (vlSelf->top__DOT__x
                                                                [1U] 
                                                                << 0xeU))))))),50);
    bufp->fullQData(oldp+118,((0x3ffffffffffffULL & 
                               VL_MULS_QQQ(50, 0x199aULL, 
                                           (0x3ffffffffffffULL 
                                            & VL_EXTENDS_QI(50,25, 
                                                            (0x1ffffffU 
                                                             & (vlSelf->top__DOT__y
                                                                [1U] 
                                                                << 0xeU))))))),50);
    bufp->fullSData(oldp+120,(vlSelf->top__DOT__x[2U]),10);
    bufp->fullSData(oldp+121,(vlSelf->top__DOT__y[2U]),10);
    bufp->fullCData(oldp+122,(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__curr_iterations),6);
    bufp->fullSData(oldp+123,(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.xpixel),10);
    bufp->fullSData(oldp+124,(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.ypixel),10);
    bufp->fullIData(oldp+125,(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__x),25);
    bufp->fullIData(oldp+126,(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__y),25);
    bufp->fullIData(oldp+127,(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__zr),25);
    bufp->fullIData(oldp+128,(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__zi),25);
    bufp->fullIData(oldp+129,((0x1ffffffU & ((vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__zr2 
                                              - vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__zi2) 
                                             + vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__x))),25);
    bufp->fullIData(oldp+130,(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__zr2),25);
    bufp->fullIData(oldp+131,(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__zi2),25);
    bufp->fullIData(oldp+132,(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__distance),25);
    bufp->fullQData(oldp+133,((0x3ffffffffffffULL & 
                               VL_MULS_QQQ(50, (0x3ffffffffffffULL 
                                                & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__zr)), 
                                           (0x3ffffffffffffULL 
                                            & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__zr))))),50);
    bufp->fullQData(oldp+135,((0x3ffffffffffffULL & 
                               VL_MULS_QQQ(50, (0x3ffffffffffffULL 
                                                & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__zi)), 
                                           (0x3ffffffffffffULL 
                                            & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__zi))))),50);
    bufp->fullQData(oldp+137,((0x3ffffffffffffULL & 
                               VL_MULS_QQQ(50, (0x3ffffffffffffULL 
                                                & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__zr)), 
                                           (0x3ffffffffffffULL 
                                            & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__zi))))),50);
    bufp->fullCData(oldp+139,((0x3fU & ((IData)(1U) 
                                        + (IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__curr_iterations)))),6);
    bufp->fullCData(oldp+140,(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__SM__DOT__state),2);
    bufp->fullIData(oldp+141,((0x1ffffffU & (IData)(
                                                    (0x3fffffffULL 
                                                     & (VL_MULS_QQQ(50, 0x199aULL, 
                                                                    (0x3ffffffffffffULL 
                                                                     & VL_EXTENDS_QI(50,25, 
                                                                                (0x1ffffffU 
                                                                                & (vlSelf->top__DOT__x
                                                                                [2U] 
                                                                                << 0xeU))))) 
                                                        >> 0x14U))))),25);
    bufp->fullIData(oldp+142,((0x1ffffffU & (IData)(
                                                    (0x3fffffffULL 
                                                     & (VL_MULS_QQQ(50, 0x199aULL, 
                                                                    (0x3ffffffffffffULL 
                                                                     & VL_EXTENDS_QI(50,25, 
                                                                                (0x1ffffffU 
                                                                                & (vlSelf->top__DOT__y
                                                                                [2U] 
                                                                                << 0xeU))))) 
                                                        >> 0x14U))))),25);
    bufp->fullIData(oldp+143,((0x1ffffffU & (vlSelf->top__DOT__x
                                             [2U] << 0xeU))),25);
    bufp->fullIData(oldp+144,((0x1ffffffU & (vlSelf->top__DOT__y
                                             [2U] << 0xeU))),25);
    bufp->fullQData(oldp+145,((0x3ffffffffffffULL & 
                               VL_MULS_QQQ(50, 0x199aULL, 
                                           (0x3ffffffffffffULL 
                                            & VL_EXTENDS_QI(50,25, 
                                                            (0x1ffffffU 
                                                             & (vlSelf->top__DOT__x
                                                                [2U] 
                                                                << 0xeU))))))),50);
    bufp->fullQData(oldp+147,((0x3ffffffffffffULL & 
                               VL_MULS_QQQ(50, 0x199aULL, 
                                           (0x3ffffffffffffULL 
                                            & VL_EXTENDS_QI(50,25, 
                                                            (0x1ffffffU 
                                                             & (vlSelf->top__DOT__y
                                                                [2U] 
                                                                << 0xeU))))))),50);
    bufp->fullSData(oldp+149,(vlSelf->top__DOT__x[3U]),10);
    bufp->fullSData(oldp+150,(vlSelf->top__DOT__y[3U]),10);
    bufp->fullCData(oldp+151,(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__curr_iterations),6);
    bufp->fullSData(oldp+152,(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.xpixel),10);
    bufp->fullSData(oldp+153,(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.ypixel),10);
    bufp->fullIData(oldp+154,(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__x),25);
    bufp->fullIData(oldp+155,(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__y),25);
    bufp->fullIData(oldp+156,(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__zr),25);
    bufp->fullIData(oldp+157,(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__zi),25);
    bufp->fullIData(oldp+158,((0x1ffffffU & ((vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__zr2 
                                              - vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__zi2) 
                                             + vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__x))),25);
    bufp->fullIData(oldp+159,(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__zr2),25);
    bufp->fullIData(oldp+160,(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__zi2),25);
    bufp->fullIData(oldp+161,(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__distance),25);
    bufp->fullQData(oldp+162,((0x3ffffffffffffULL & 
                               VL_MULS_QQQ(50, (0x3ffffffffffffULL 
                                                & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__zr)), 
                                           (0x3ffffffffffffULL 
                                            & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__zr))))),50);
    bufp->fullQData(oldp+164,((0x3ffffffffffffULL & 
                               VL_MULS_QQQ(50, (0x3ffffffffffffULL 
                                                & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__zi)), 
                                           (0x3ffffffffffffULL 
                                            & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__zi))))),50);
    bufp->fullQData(oldp+166,((0x3ffffffffffffULL & 
                               VL_MULS_QQQ(50, (0x3ffffffffffffULL 
                                                & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__zr)), 
                                           (0x3ffffffffffffULL 
                                            & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__zi))))),50);
    bufp->fullCData(oldp+168,((0x3fU & ((IData)(1U) 
                                        + (IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__curr_iterations)))),6);
    bufp->fullCData(oldp+169,(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__SM__DOT__state),2);
    bufp->fullIData(oldp+170,((0x1ffffffU & (IData)(
                                                    (0x3fffffffULL 
                                                     & (VL_MULS_QQQ(50, 0x199aULL, 
                                                                    (0x3ffffffffffffULL 
                                                                     & VL_EXTENDS_QI(50,25, 
                                                                                (0x1ffffffU 
                                                                                & (vlSelf->top__DOT__x
                                                                                [3U] 
                                                                                << 0xeU))))) 
                                                        >> 0x14U))))),25);
    bufp->fullIData(oldp+171,((0x1ffffffU & (IData)(
                                                    (0x3fffffffULL 
                                                     & (VL_MULS_QQQ(50, 0x199aULL, 
                                                                    (0x3ffffffffffffULL 
                                                                     & VL_EXTENDS_QI(50,25, 
                                                                                (0x1ffffffU 
                                                                                & (vlSelf->top__DOT__y
                                                                                [3U] 
                                                                                << 0xeU))))) 
                                                        >> 0x14U))))),25);
    bufp->fullIData(oldp+172,((0x1ffffffU & (vlSelf->top__DOT__x
                                             [3U] << 0xeU))),25);
    bufp->fullIData(oldp+173,((0x1ffffffU & (vlSelf->top__DOT__y
                                             [3U] << 0xeU))),25);
    bufp->fullQData(oldp+174,((0x3ffffffffffffULL & 
                               VL_MULS_QQQ(50, 0x199aULL, 
                                           (0x3ffffffffffffULL 
                                            & VL_EXTENDS_QI(50,25, 
                                                            (0x1ffffffU 
                                                             & (vlSelf->top__DOT__x
                                                                [3U] 
                                                                << 0xeU))))))),50);
    bufp->fullQData(oldp+176,((0x3ffffffffffffULL & 
                               VL_MULS_QQQ(50, 0x199aULL, 
                                           (0x3ffffffffffffULL 
                                            & VL_EXTENDS_QI(50,25, 
                                                            (0x1ffffffU 
                                                             & (vlSelf->top__DOT__y
                                                                [3U] 
                                                                << 0xeU))))))),50);
    bufp->fullSData(oldp+178,(vlSelf->top__DOT__x[4U]),10);
    bufp->fullSData(oldp+179,(vlSelf->top__DOT__y[4U]),10);
    bufp->fullCData(oldp+180,(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__curr_iterations),6);
    bufp->fullSData(oldp+181,(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.xpixel),10);
    bufp->fullSData(oldp+182,(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.ypixel),10);
    bufp->fullIData(oldp+183,(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__x),25);
    bufp->fullIData(oldp+184,(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__y),25);
    bufp->fullIData(oldp+185,(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__zr),25);
    bufp->fullIData(oldp+186,(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__zi),25);
    bufp->fullIData(oldp+187,((0x1ffffffU & ((vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__zr2 
                                              - vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__zi2) 
                                             + vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__x))),25);
    bufp->fullIData(oldp+188,(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__zr2),25);
    bufp->fullIData(oldp+189,(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__zi2),25);
    bufp->fullIData(oldp+190,(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__distance),25);
    bufp->fullQData(oldp+191,((0x3ffffffffffffULL & 
                               VL_MULS_QQQ(50, (0x3ffffffffffffULL 
                                                & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__zr)), 
                                           (0x3ffffffffffffULL 
                                            & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__zr))))),50);
    bufp->fullQData(oldp+193,((0x3ffffffffffffULL & 
                               VL_MULS_QQQ(50, (0x3ffffffffffffULL 
                                                & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__zi)), 
                                           (0x3ffffffffffffULL 
                                            & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__zi))))),50);
    bufp->fullQData(oldp+195,((0x3ffffffffffffULL & 
                               VL_MULS_QQQ(50, (0x3ffffffffffffULL 
                                                & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__zr)), 
                                           (0x3ffffffffffffULL 
                                            & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__zi))))),50);
    bufp->fullCData(oldp+197,((0x3fU & ((IData)(1U) 
                                        + (IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__curr_iterations)))),6);
    bufp->fullCData(oldp+198,(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__SM__DOT__state),2);
    bufp->fullIData(oldp+199,((0x1ffffffU & (IData)(
                                                    (0x3fffffffULL 
                                                     & (VL_MULS_QQQ(50, 0x199aULL, 
                                                                    (0x3ffffffffffffULL 
                                                                     & VL_EXTENDS_QI(50,25, 
                                                                                (0x1ffffffU 
                                                                                & (vlSelf->top__DOT__x
                                                                                [4U] 
                                                                                << 0xeU))))) 
                                                        >> 0x14U))))),25);
    bufp->fullIData(oldp+200,((0x1ffffffU & (IData)(
                                                    (0x3fffffffULL 
                                                     & (VL_MULS_QQQ(50, 0x199aULL, 
                                                                    (0x3ffffffffffffULL 
                                                                     & VL_EXTENDS_QI(50,25, 
                                                                                (0x1ffffffU 
                                                                                & (vlSelf->top__DOT__y
                                                                                [4U] 
                                                                                << 0xeU))))) 
                                                        >> 0x14U))))),25);
    bufp->fullIData(oldp+201,((0x1ffffffU & (vlSelf->top__DOT__x
                                             [4U] << 0xeU))),25);
    bufp->fullIData(oldp+202,((0x1ffffffU & (vlSelf->top__DOT__y
                                             [4U] << 0xeU))),25);
    bufp->fullQData(oldp+203,((0x3ffffffffffffULL & 
                               VL_MULS_QQQ(50, 0x199aULL, 
                                           (0x3ffffffffffffULL 
                                            & VL_EXTENDS_QI(50,25, 
                                                            (0x1ffffffU 
                                                             & (vlSelf->top__DOT__x
                                                                [4U] 
                                                                << 0xeU))))))),50);
    bufp->fullQData(oldp+205,((0x3ffffffffffffULL & 
                               VL_MULS_QQQ(50, 0x199aULL, 
                                           (0x3ffffffffffffULL 
                                            & VL_EXTENDS_QI(50,25, 
                                                            (0x1ffffffU 
                                                             & (vlSelf->top__DOT__y
                                                                [4U] 
                                                                << 0xeU))))))),50);
    bufp->fullSData(oldp+207,(vlSelf->top__DOT__x[5U]),10);
    bufp->fullSData(oldp+208,(vlSelf->top__DOT__y[5U]),10);
    bufp->fullCData(oldp+209,(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__curr_iterations),6);
    bufp->fullSData(oldp+210,(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.xpixel),10);
    bufp->fullSData(oldp+211,(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.ypixel),10);
    bufp->fullIData(oldp+212,(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__x),25);
    bufp->fullIData(oldp+213,(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__y),25);
    bufp->fullIData(oldp+214,(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__zr),25);
    bufp->fullIData(oldp+215,(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__zi),25);
    bufp->fullIData(oldp+216,((0x1ffffffU & ((vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__zr2 
                                              - vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__zi2) 
                                             + vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__x))),25);
    bufp->fullIData(oldp+217,(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__zr2),25);
    bufp->fullIData(oldp+218,(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__zi2),25);
    bufp->fullIData(oldp+219,(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__distance),25);
    bufp->fullQData(oldp+220,((0x3ffffffffffffULL & 
                               VL_MULS_QQQ(50, (0x3ffffffffffffULL 
                                                & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__zr)), 
                                           (0x3ffffffffffffULL 
                                            & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__zr))))),50);
    bufp->fullQData(oldp+222,((0x3ffffffffffffULL & 
                               VL_MULS_QQQ(50, (0x3ffffffffffffULL 
                                                & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__zi)), 
                                           (0x3ffffffffffffULL 
                                            & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__zi))))),50);
    bufp->fullQData(oldp+224,((0x3ffffffffffffULL & 
                               VL_MULS_QQQ(50, (0x3ffffffffffffULL 
                                                & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__zr)), 
                                           (0x3ffffffffffffULL 
                                            & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__zi))))),50);
    bufp->fullCData(oldp+226,((0x3fU & ((IData)(1U) 
                                        + (IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__curr_iterations)))),6);
    bufp->fullCData(oldp+227,(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__SM__DOT__state),2);
    bufp->fullIData(oldp+228,((0x1ffffffU & (IData)(
                                                    (0x3fffffffULL 
                                                     & (VL_MULS_QQQ(50, 0x199aULL, 
                                                                    (0x3ffffffffffffULL 
                                                                     & VL_EXTENDS_QI(50,25, 
                                                                                (0x1ffffffU 
                                                                                & (vlSelf->top__DOT__x
                                                                                [5U] 
                                                                                << 0xeU))))) 
                                                        >> 0x14U))))),25);
    bufp->fullIData(oldp+229,((0x1ffffffU & (IData)(
                                                    (0x3fffffffULL 
                                                     & (VL_MULS_QQQ(50, 0x199aULL, 
                                                                    (0x3ffffffffffffULL 
                                                                     & VL_EXTENDS_QI(50,25, 
                                                                                (0x1ffffffU 
                                                                                & (vlSelf->top__DOT__y
                                                                                [5U] 
                                                                                << 0xeU))))) 
                                                        >> 0x14U))))),25);
    bufp->fullIData(oldp+230,((0x1ffffffU & (vlSelf->top__DOT__x
                                             [5U] << 0xeU))),25);
    bufp->fullIData(oldp+231,((0x1ffffffU & (vlSelf->top__DOT__y
                                             [5U] << 0xeU))),25);
    bufp->fullQData(oldp+232,((0x3ffffffffffffULL & 
                               VL_MULS_QQQ(50, 0x199aULL, 
                                           (0x3ffffffffffffULL 
                                            & VL_EXTENDS_QI(50,25, 
                                                            (0x1ffffffU 
                                                             & (vlSelf->top__DOT__x
                                                                [5U] 
                                                                << 0xeU))))))),50);
    bufp->fullQData(oldp+234,((0x3ffffffffffffULL & 
                               VL_MULS_QQQ(50, 0x199aULL, 
                                           (0x3ffffffffffffULL 
                                            & VL_EXTENDS_QI(50,25, 
                                                            (0x1ffffffU 
                                                             & (vlSelf->top__DOT__y
                                                                [5U] 
                                                                << 0xeU))))))),50);
    bufp->fullBit(oldp+236,((((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.en_pixel_map) 
                              & (vlSelf->top__DOT__x
                                 [0U] == (IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.xpixel))) 
                             & (vlSelf->top__DOT__y
                                [0U] == (IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.ypixel)))));
    bufp->fullIData(oldp+237,((0x1ffffffU & ((((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__init)
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
    bufp->fullIData(oldp+238,(((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__init)
                                ? 0U : (0x1ffffffU 
                                        & (IData)((0x3fffffffULL 
                                                   & (VL_MULS_QQQ(50, 
                                                                  (0x3ffffffffffffULL 
                                                                   & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__zr)), 
                                                                  (0x3ffffffffffffULL 
                                                                   & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__zr))) 
                                                      >> 0x14U)))))),25);
    bufp->fullIData(oldp+239,(((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__init)
                                ? 0U : (0x1ffffffU 
                                        & (IData)((0x3fffffffULL 
                                                   & (VL_MULS_QQQ(50, 
                                                                  (0x3ffffffffffffULL 
                                                                   & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__zi)), 
                                                                  (0x3ffffffffffffULL 
                                                                   & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__zi))) 
                                                      >> 0x14U)))))),25);
    bufp->fullIData(oldp+240,(((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__init)
                                ? 0U : (0x1ffffffU 
                                        & (IData)((0x3fffffffULL 
                                                   & (VL_MULS_QQQ(50, 
                                                                  (0x3ffffffffffffULL 
                                                                   & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__zr)), 
                                                                  (0x3ffffffffffffULL 
                                                                   & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__zi))) 
                                                      >> 0x14U)))))),25);
    bufp->fullBit(oldp+241,((((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.en_pixel_map) 
                              & (vlSelf->top__DOT__x
                                 [1U] == (IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.xpixel))) 
                             & (vlSelf->top__DOT__y
                                [1U] == (IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.ypixel)))));
    bufp->fullIData(oldp+242,((0x1ffffffU & ((((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__init)
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
    bufp->fullIData(oldp+243,(((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__init)
                                ? 0U : (0x1ffffffU 
                                        & (IData)((0x3fffffffULL 
                                                   & (VL_MULS_QQQ(50, 
                                                                  (0x3ffffffffffffULL 
                                                                   & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__zr)), 
                                                                  (0x3ffffffffffffULL 
                                                                   & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__zr))) 
                                                      >> 0x14U)))))),25);
    bufp->fullIData(oldp+244,(((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__init)
                                ? 0U : (0x1ffffffU 
                                        & (IData)((0x3fffffffULL 
                                                   & (VL_MULS_QQQ(50, 
                                                                  (0x3ffffffffffffULL 
                                                                   & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__zi)), 
                                                                  (0x3ffffffffffffULL 
                                                                   & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__zi))) 
                                                      >> 0x14U)))))),25);
    bufp->fullIData(oldp+245,(((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__init)
                                ? 0U : (0x1ffffffU 
                                        & (IData)((0x3fffffffULL 
                                                   & (VL_MULS_QQQ(50, 
                                                                  (0x3ffffffffffffULL 
                                                                   & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__zr)), 
                                                                  (0x3ffffffffffffULL 
                                                                   & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__zi))) 
                                                      >> 0x14U)))))),25);
    bufp->fullBit(oldp+246,((((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.en_pixel_map) 
                              & (vlSelf->top__DOT__x
                                 [2U] == (IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.xpixel))) 
                             & (vlSelf->top__DOT__y
                                [2U] == (IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.ypixel)))));
    bufp->fullIData(oldp+247,((0x1ffffffU & ((((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__init)
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
    bufp->fullIData(oldp+248,(((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__init)
                                ? 0U : (0x1ffffffU 
                                        & (IData)((0x3fffffffULL 
                                                   & (VL_MULS_QQQ(50, 
                                                                  (0x3ffffffffffffULL 
                                                                   & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__zr)), 
                                                                  (0x3ffffffffffffULL 
                                                                   & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__zr))) 
                                                      >> 0x14U)))))),25);
    bufp->fullIData(oldp+249,(((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__init)
                                ? 0U : (0x1ffffffU 
                                        & (IData)((0x3fffffffULL 
                                                   & (VL_MULS_QQQ(50, 
                                                                  (0x3ffffffffffffULL 
                                                                   & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__zi)), 
                                                                  (0x3ffffffffffffULL 
                                                                   & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__zi))) 
                                                      >> 0x14U)))))),25);
    bufp->fullIData(oldp+250,(((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__init)
                                ? 0U : (0x1ffffffU 
                                        & (IData)((0x3fffffffULL 
                                                   & (VL_MULS_QQQ(50, 
                                                                  (0x3ffffffffffffULL 
                                                                   & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__zr)), 
                                                                  (0x3ffffffffffffULL 
                                                                   & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__zi))) 
                                                      >> 0x14U)))))),25);
    bufp->fullBit(oldp+251,((((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.en_pixel_map) 
                              & (vlSelf->top__DOT__x
                                 [3U] == (IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.xpixel))) 
                             & (vlSelf->top__DOT__y
                                [3U] == (IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.ypixel)))));
    bufp->fullIData(oldp+252,((0x1ffffffU & ((((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__init)
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
    bufp->fullIData(oldp+253,(((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__init)
                                ? 0U : (0x1ffffffU 
                                        & (IData)((0x3fffffffULL 
                                                   & (VL_MULS_QQQ(50, 
                                                                  (0x3ffffffffffffULL 
                                                                   & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__zr)), 
                                                                  (0x3ffffffffffffULL 
                                                                   & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__zr))) 
                                                      >> 0x14U)))))),25);
    bufp->fullIData(oldp+254,(((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__init)
                                ? 0U : (0x1ffffffU 
                                        & (IData)((0x3fffffffULL 
                                                   & (VL_MULS_QQQ(50, 
                                                                  (0x3ffffffffffffULL 
                                                                   & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__zi)), 
                                                                  (0x3ffffffffffffULL 
                                                                   & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__zi))) 
                                                      >> 0x14U)))))),25);
    bufp->fullIData(oldp+255,(((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__init)
                                ? 0U : (0x1ffffffU 
                                        & (IData)((0x3fffffffULL 
                                                   & (VL_MULS_QQQ(50, 
                                                                  (0x3ffffffffffffULL 
                                                                   & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__zr)), 
                                                                  (0x3ffffffffffffULL 
                                                                   & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__zi))) 
                                                      >> 0x14U)))))),25);
    bufp->fullBit(oldp+256,((((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.en_pixel_map) 
                              & (vlSelf->top__DOT__x
                                 [4U] == (IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.xpixel))) 
                             & (vlSelf->top__DOT__y
                                [4U] == (IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.ypixel)))));
    bufp->fullIData(oldp+257,((0x1ffffffU & ((((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__init)
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
    bufp->fullIData(oldp+258,(((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__init)
                                ? 0U : (0x1ffffffU 
                                        & (IData)((0x3fffffffULL 
                                                   & (VL_MULS_QQQ(50, 
                                                                  (0x3ffffffffffffULL 
                                                                   & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__zr)), 
                                                                  (0x3ffffffffffffULL 
                                                                   & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__zr))) 
                                                      >> 0x14U)))))),25);
    bufp->fullIData(oldp+259,(((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__init)
                                ? 0U : (0x1ffffffU 
                                        & (IData)((0x3fffffffULL 
                                                   & (VL_MULS_QQQ(50, 
                                                                  (0x3ffffffffffffULL 
                                                                   & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__zi)), 
                                                                  (0x3ffffffffffffULL 
                                                                   & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__zi))) 
                                                      >> 0x14U)))))),25);
    bufp->fullIData(oldp+260,(((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__init)
                                ? 0U : (0x1ffffffU 
                                        & (IData)((0x3fffffffULL 
                                                   & (VL_MULS_QQQ(50, 
                                                                  (0x3ffffffffffffULL 
                                                                   & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__zr)), 
                                                                  (0x3ffffffffffffULL 
                                                                   & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__zi))) 
                                                      >> 0x14U)))))),25);
    bufp->fullBit(oldp+261,((((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.en_pixel_map) 
                              & (vlSelf->top__DOT__x
                                 [5U] == (IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.xpixel))) 
                             & (vlSelf->top__DOT__y
                                [5U] == (IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.ypixel)))));
    bufp->fullIData(oldp+262,((0x1ffffffU & ((((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__init)
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
    bufp->fullIData(oldp+263,(((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__init)
                                ? 0U : (0x1ffffffU 
                                        & (IData)((0x3fffffffULL 
                                                   & (VL_MULS_QQQ(50, 
                                                                  (0x3ffffffffffffULL 
                                                                   & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__zr)), 
                                                                  (0x3ffffffffffffULL 
                                                                   & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__zr))) 
                                                      >> 0x14U)))))),25);
    bufp->fullIData(oldp+264,(((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__init)
                                ? 0U : (0x1ffffffU 
                                        & (IData)((0x3fffffffULL 
                                                   & (VL_MULS_QQQ(50, 
                                                                  (0x3ffffffffffffULL 
                                                                   & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__zi)), 
                                                                  (0x3ffffffffffffULL 
                                                                   & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__zi))) 
                                                      >> 0x14U)))))),25);
    bufp->fullIData(oldp+265,(((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__init)
                                ? 0U : (0x1ffffffU 
                                        & (IData)((0x3fffffffULL 
                                                   & (VL_MULS_QQQ(50, 
                                                                  (0x3ffffffffffffULL 
                                                                   & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__zr)), 
                                                                  (0x3ffffffffffffULL 
                                                                   & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__zi))) 
                                                      >> 0x14U)))))),25);
    bufp->fullIData(oldp+266,(vlSelf->top__DOT__colour_bus_o[0]),24);
    bufp->fullIData(oldp+267,(vlSelf->top__DOT__colour_bus_o[1]),24);
    bufp->fullIData(oldp+268,(vlSelf->top__DOT__colour_bus_o[2]),24);
    bufp->fullIData(oldp+269,(vlSelf->top__DOT__colour_bus_o[3]),24);
    bufp->fullIData(oldp+270,(vlSelf->top__DOT__colour_bus_o[4]),24);
    bufp->fullIData(oldp+271,(vlSelf->top__DOT__colour_bus_o[5]),24);
    bufp->fullIData(oldp+272,(vlSelf->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__queue_block__colour_o),24);
    bufp->fullIData(oldp+273,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__unnamedblk3__DOT__i),32);
    bufp->fullIData(oldp+274,(vlSelf->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__queue_block__colour_o),24);
    bufp->fullIData(oldp+275,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__unnamedblk3__DOT__i),32);
    bufp->fullIData(oldp+276,(vlSelf->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__queue_block__colour_o),24);
    bufp->fullIData(oldp+277,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__unnamedblk3__DOT__i),32);
    bufp->fullIData(oldp+278,(vlSelf->top__DOT____Vcellout__genblk1__BRA__3__KET____DOT__queue_block__colour_o),24);
    bufp->fullIData(oldp+279,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__unnamedblk3__DOT__i),32);
    bufp->fullIData(oldp+280,(vlSelf->top__DOT____Vcellout__genblk1__BRA__4__KET____DOT__queue_block__colour_o),24);
    bufp->fullIData(oldp+281,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__unnamedblk3__DOT__i),32);
    bufp->fullIData(oldp+282,(vlSelf->top__DOT____Vcellout__genblk1__BRA__5__KET____DOT__queue_block__colour_o),24);
    bufp->fullIData(oldp+283,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__unnamedblk3__DOT__i),32);
    bufp->fullCData(oldp+284,(vlSelf->top__DOT__fin_bus),6);
    bufp->fullBit(oldp+285,((1U & (IData)(vlSelf->top__DOT__fin_bus))));
    bufp->fullBit(oldp+286,((1U & ((IData)(vlSelf->top__DOT__fin_bus) 
                                   >> 1U))));
    bufp->fullBit(oldp+287,((1U & ((IData)(vlSelf->top__DOT__fin_bus) 
                                   >> 2U))));
    bufp->fullBit(oldp+288,((1U & ((IData)(vlSelf->top__DOT__fin_bus) 
                                   >> 3U))));
    bufp->fullBit(oldp+289,((1U & ((IData)(vlSelf->top__DOT__fin_bus) 
                                   >> 4U))));
    bufp->fullBit(oldp+290,((1U & ((IData)(vlSelf->top__DOT__fin_bus) 
                                   >> 5U))));
    bufp->fullBit(oldp+291,(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.en_pixel_map));
    bufp->fullBit(oldp+292,(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__en_stage_1));
    bufp->fullBit(oldp+293,(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__en_stage_2));
    bufp->fullBit(oldp+294,(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__init));
    bufp->fullCData(oldp+295,(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__SM__DOT__next),2);
    bufp->fullBit(oldp+296,(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.en_pixel_map));
    bufp->fullBit(oldp+297,(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__en_stage_1));
    bufp->fullBit(oldp+298,(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__en_stage_2));
    bufp->fullBit(oldp+299,(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__init));
    bufp->fullCData(oldp+300,(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__SM__DOT__next),2);
    bufp->fullBit(oldp+301,(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.en_pixel_map));
    bufp->fullBit(oldp+302,(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__en_stage_1));
    bufp->fullBit(oldp+303,(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__en_stage_2));
    bufp->fullBit(oldp+304,(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__init));
    bufp->fullCData(oldp+305,(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__SM__DOT__next),2);
    bufp->fullBit(oldp+306,(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.en_pixel_map));
    bufp->fullBit(oldp+307,(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__en_stage_1));
    bufp->fullBit(oldp+308,(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__en_stage_2));
    bufp->fullBit(oldp+309,(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__init));
    bufp->fullCData(oldp+310,(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__SM__DOT__next),2);
    bufp->fullBit(oldp+311,(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.en_pixel_map));
    bufp->fullBit(oldp+312,(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__en_stage_1));
    bufp->fullBit(oldp+313,(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__en_stage_2));
    bufp->fullBit(oldp+314,(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__init));
    bufp->fullCData(oldp+315,(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__SM__DOT__next),2);
    bufp->fullBit(oldp+316,(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.en_pixel_map));
    bufp->fullBit(oldp+317,(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__en_stage_1));
    bufp->fullBit(oldp+318,(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__en_stage_2));
    bufp->fullBit(oldp+319,(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__init));
    bufp->fullCData(oldp+320,(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__SM__DOT__next),2);
    bufp->fullSData(oldp+321,(vlSelf->top__DOT__xpixel_bus[0]),10);
    bufp->fullSData(oldp+322,(vlSelf->top__DOT__xpixel_bus[1]),10);
    bufp->fullSData(oldp+323,(vlSelf->top__DOT__xpixel_bus[2]),10);
    bufp->fullSData(oldp+324,(vlSelf->top__DOT__xpixel_bus[3]),10);
    bufp->fullSData(oldp+325,(vlSelf->top__DOT__xpixel_bus[4]),10);
    bufp->fullSData(oldp+326,(vlSelf->top__DOT__xpixel_bus[5]),10);
    bufp->fullSData(oldp+327,(vlSelf->top__DOT__ypixel_bus[0]),10);
    bufp->fullSData(oldp+328,(vlSelf->top__DOT__ypixel_bus[1]),10);
    bufp->fullSData(oldp+329,(vlSelf->top__DOT__ypixel_bus[2]),10);
    bufp->fullSData(oldp+330,(vlSelf->top__DOT__ypixel_bus[3]),10);
    bufp->fullSData(oldp+331,(vlSelf->top__DOT__ypixel_bus[4]),10);
    bufp->fullSData(oldp+332,(vlSelf->top__DOT__ypixel_bus[5]),10);
    bufp->fullIData(oldp+333,(vlSelf->top__DOT__colour_bus_i[0]),24);
    bufp->fullIData(oldp+334,(vlSelf->top__DOT__colour_bus_i[1]),24);
    bufp->fullIData(oldp+335,(vlSelf->top__DOT__colour_bus_i[2]),24);
    bufp->fullIData(oldp+336,(vlSelf->top__DOT__colour_bus_i[3]),24);
    bufp->fullIData(oldp+337,(vlSelf->top__DOT__colour_bus_i[4]),24);
    bufp->fullIData(oldp+338,(vlSelf->top__DOT__colour_bus_i[5]),24);
    bufp->fullIData(oldp+339,(vlSelf->top__DOT__colour_bus_i
                              [0U]),24);
    bufp->fullSData(oldp+340,(vlSelf->top__DOT__xpixel_bus
                              [0U]),10);
    bufp->fullSData(oldp+341,(vlSelf->top__DOT__ypixel_bus
                              [0U]),10);
    bufp->fullSData(oldp+342,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__prev_xpixel),10);
    bufp->fullIData(oldp+343,(vlSelf->top__DOT__colour_bus_i
                              [1U]),24);
    bufp->fullSData(oldp+344,(vlSelf->top__DOT__xpixel_bus
                              [1U]),10);
    bufp->fullSData(oldp+345,(vlSelf->top__DOT__ypixel_bus
                              [1U]),10);
    bufp->fullSData(oldp+346,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__prev_xpixel),10);
    bufp->fullIData(oldp+347,(vlSelf->top__DOT__colour_bus_i
                              [2U]),24);
    bufp->fullSData(oldp+348,(vlSelf->top__DOT__xpixel_bus
                              [2U]),10);
    bufp->fullSData(oldp+349,(vlSelf->top__DOT__ypixel_bus
                              [2U]),10);
    bufp->fullSData(oldp+350,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__prev_xpixel),10);
    bufp->fullIData(oldp+351,(vlSelf->top__DOT__colour_bus_i
                              [3U]),24);
    bufp->fullSData(oldp+352,(vlSelf->top__DOT__xpixel_bus
                              [3U]),10);
    bufp->fullSData(oldp+353,(vlSelf->top__DOT__ypixel_bus
                              [3U]),10);
    bufp->fullSData(oldp+354,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__prev_xpixel),10);
    bufp->fullIData(oldp+355,(vlSelf->top__DOT__colour_bus_i
                              [4U]),24);
    bufp->fullSData(oldp+356,(vlSelf->top__DOT__xpixel_bus
                              [4U]),10);
    bufp->fullSData(oldp+357,(vlSelf->top__DOT__ypixel_bus
                              [4U]),10);
    bufp->fullSData(oldp+358,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__prev_xpixel),10);
    bufp->fullIData(oldp+359,(vlSelf->top__DOT__colour_bus_i
                              [5U]),24);
    bufp->fullSData(oldp+360,(vlSelf->top__DOT__xpixel_bus
                              [5U]),10);
    bufp->fullSData(oldp+361,(vlSelf->top__DOT__ypixel_bus
                              [5U]),10);
    bufp->fullSData(oldp+362,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__prev_xpixel),10);
    bufp->fullBit(oldp+363,((0x3fU == (IData)(vlSelf->top__DOT__en_bus))));
    bufp->fullCData(oldp+364,(vlSelf->top__DOT__en_bus),6);
    bufp->fullCData(oldp+365,(vlSelf->top__DOT__full_queue_bus),6);
    bufp->fullCData(oldp+366,(vlSelf->top__DOT__match_bus),6);
    bufp->fullIData(oldp+367,(vlSelf->top__DOT__j),32);
    bufp->fullBit(oldp+368,(vlSelf->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__queue_block__full_queue));
    bufp->fullBit(oldp+369,(vlSelf->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__queue_block__en));
    bufp->fullBit(oldp+370,(vlSelf->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__queue_block__match));
    bufp->fullIData(oldp+371,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[0]),24);
    bufp->fullIData(oldp+372,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[1]),24);
    bufp->fullIData(oldp+373,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[2]),24);
    bufp->fullIData(oldp+374,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[3]),24);
    bufp->fullIData(oldp+375,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[4]),24);
    bufp->fullIData(oldp+376,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[5]),24);
    bufp->fullIData(oldp+377,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[6]),24);
    bufp->fullIData(oldp+378,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[7]),24);
    bufp->fullIData(oldp+379,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[8]),24);
    bufp->fullIData(oldp+380,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[9]),24);
    bufp->fullSData(oldp+381,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[0]),10);
    bufp->fullSData(oldp+382,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[1]),10);
    bufp->fullSData(oldp+383,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[2]),10);
    bufp->fullSData(oldp+384,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[3]),10);
    bufp->fullSData(oldp+385,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[4]),10);
    bufp->fullSData(oldp+386,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[5]),10);
    bufp->fullSData(oldp+387,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[6]),10);
    bufp->fullSData(oldp+388,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[7]),10);
    bufp->fullSData(oldp+389,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[8]),10);
    bufp->fullSData(oldp+390,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[9]),10);
    bufp->fullSData(oldp+391,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[0]),10);
    bufp->fullSData(oldp+392,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[1]),10);
    bufp->fullSData(oldp+393,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[2]),10);
    bufp->fullSData(oldp+394,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[3]),10);
    bufp->fullSData(oldp+395,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[4]),10);
    bufp->fullSData(oldp+396,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[5]),10);
    bufp->fullSData(oldp+397,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[6]),10);
    bufp->fullSData(oldp+398,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[7]),10);
    bufp->fullSData(oldp+399,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[8]),10);
    bufp->fullSData(oldp+400,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[9]),10);
    bufp->fullCData(oldp+401,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__counter),4);
    bufp->fullBit(oldp+402,(vlSelf->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__queue_block__full_queue));
    bufp->fullBit(oldp+403,(vlSelf->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__queue_block__en));
    bufp->fullBit(oldp+404,(vlSelf->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__queue_block__match));
    bufp->fullIData(oldp+405,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[0]),24);
    bufp->fullIData(oldp+406,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[1]),24);
    bufp->fullIData(oldp+407,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[2]),24);
    bufp->fullIData(oldp+408,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[3]),24);
    bufp->fullIData(oldp+409,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[4]),24);
    bufp->fullIData(oldp+410,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[5]),24);
    bufp->fullIData(oldp+411,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[6]),24);
    bufp->fullIData(oldp+412,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[7]),24);
    bufp->fullIData(oldp+413,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[8]),24);
    bufp->fullIData(oldp+414,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[9]),24);
    bufp->fullSData(oldp+415,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[0]),10);
    bufp->fullSData(oldp+416,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[1]),10);
    bufp->fullSData(oldp+417,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[2]),10);
    bufp->fullSData(oldp+418,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[3]),10);
    bufp->fullSData(oldp+419,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[4]),10);
    bufp->fullSData(oldp+420,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[5]),10);
    bufp->fullSData(oldp+421,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[6]),10);
    bufp->fullSData(oldp+422,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[7]),10);
    bufp->fullSData(oldp+423,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[8]),10);
    bufp->fullSData(oldp+424,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[9]),10);
    bufp->fullSData(oldp+425,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[0]),10);
    bufp->fullSData(oldp+426,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[1]),10);
    bufp->fullSData(oldp+427,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[2]),10);
    bufp->fullSData(oldp+428,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[3]),10);
    bufp->fullSData(oldp+429,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[4]),10);
    bufp->fullSData(oldp+430,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[5]),10);
    bufp->fullSData(oldp+431,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[6]),10);
    bufp->fullSData(oldp+432,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[7]),10);
    bufp->fullSData(oldp+433,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[8]),10);
    bufp->fullSData(oldp+434,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[9]),10);
    bufp->fullCData(oldp+435,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__counter),4);
    bufp->fullBit(oldp+436,(vlSelf->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__queue_block__full_queue));
    bufp->fullBit(oldp+437,(vlSelf->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__queue_block__en));
    bufp->fullBit(oldp+438,(vlSelf->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__queue_block__match));
    bufp->fullIData(oldp+439,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[0]),24);
    bufp->fullIData(oldp+440,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[1]),24);
    bufp->fullIData(oldp+441,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[2]),24);
    bufp->fullIData(oldp+442,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[3]),24);
    bufp->fullIData(oldp+443,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[4]),24);
    bufp->fullIData(oldp+444,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[5]),24);
    bufp->fullIData(oldp+445,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[6]),24);
    bufp->fullIData(oldp+446,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[7]),24);
    bufp->fullIData(oldp+447,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[8]),24);
    bufp->fullIData(oldp+448,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[9]),24);
    bufp->fullSData(oldp+449,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[0]),10);
    bufp->fullSData(oldp+450,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[1]),10);
    bufp->fullSData(oldp+451,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[2]),10);
    bufp->fullSData(oldp+452,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[3]),10);
    bufp->fullSData(oldp+453,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[4]),10);
    bufp->fullSData(oldp+454,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[5]),10);
    bufp->fullSData(oldp+455,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[6]),10);
    bufp->fullSData(oldp+456,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[7]),10);
    bufp->fullSData(oldp+457,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[8]),10);
    bufp->fullSData(oldp+458,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[9]),10);
    bufp->fullSData(oldp+459,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[0]),10);
    bufp->fullSData(oldp+460,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[1]),10);
    bufp->fullSData(oldp+461,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[2]),10);
    bufp->fullSData(oldp+462,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[3]),10);
    bufp->fullSData(oldp+463,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[4]),10);
    bufp->fullSData(oldp+464,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[5]),10);
    bufp->fullSData(oldp+465,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[6]),10);
    bufp->fullSData(oldp+466,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[7]),10);
    bufp->fullSData(oldp+467,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[8]),10);
    bufp->fullSData(oldp+468,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[9]),10);
    bufp->fullCData(oldp+469,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__counter),4);
    bufp->fullBit(oldp+470,(vlSelf->top__DOT____Vcellout__genblk1__BRA__3__KET____DOT__queue_block__full_queue));
    bufp->fullBit(oldp+471,(vlSelf->top__DOT____Vcellout__genblk1__BRA__3__KET____DOT__queue_block__en));
    bufp->fullBit(oldp+472,(vlSelf->top__DOT____Vcellout__genblk1__BRA__3__KET____DOT__queue_block__match));
    bufp->fullIData(oldp+473,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue[0]),24);
    bufp->fullIData(oldp+474,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue[1]),24);
    bufp->fullIData(oldp+475,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue[2]),24);
    bufp->fullIData(oldp+476,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue[3]),24);
    bufp->fullIData(oldp+477,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue[4]),24);
    bufp->fullIData(oldp+478,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue[5]),24);
    bufp->fullIData(oldp+479,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue[6]),24);
    bufp->fullIData(oldp+480,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue[7]),24);
    bufp->fullIData(oldp+481,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue[8]),24);
    bufp->fullIData(oldp+482,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue[9]),24);
    bufp->fullSData(oldp+483,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue[0]),10);
    bufp->fullSData(oldp+484,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue[1]),10);
    bufp->fullSData(oldp+485,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue[2]),10);
    bufp->fullSData(oldp+486,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue[3]),10);
    bufp->fullSData(oldp+487,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue[4]),10);
    bufp->fullSData(oldp+488,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue[5]),10);
    bufp->fullSData(oldp+489,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue[6]),10);
    bufp->fullSData(oldp+490,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue[7]),10);
    bufp->fullSData(oldp+491,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue[8]),10);
    bufp->fullSData(oldp+492,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue[9]),10);
    bufp->fullSData(oldp+493,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue[0]),10);
    bufp->fullSData(oldp+494,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue[1]),10);
    bufp->fullSData(oldp+495,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue[2]),10);
    bufp->fullSData(oldp+496,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue[3]),10);
    bufp->fullSData(oldp+497,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue[4]),10);
    bufp->fullSData(oldp+498,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue[5]),10);
    bufp->fullSData(oldp+499,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue[6]),10);
    bufp->fullSData(oldp+500,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue[7]),10);
    bufp->fullSData(oldp+501,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue[8]),10);
    bufp->fullSData(oldp+502,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue[9]),10);
    bufp->fullCData(oldp+503,(vlSelf->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__counter),4);
    bufp->fullBit(oldp+504,(vlSelf->top__DOT____Vcellout__genblk1__BRA__4__KET____DOT__queue_block__full_queue));
    bufp->fullBit(oldp+505,(vlSelf->top__DOT____Vcellout__genblk1__BRA__4__KET____DOT__queue_block__en));
    bufp->fullBit(oldp+506,(vlSelf->top__DOT____Vcellout__genblk1__BRA__4__KET____DOT__queue_block__match));
    bufp->fullIData(oldp+507,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue[0]),24);
    bufp->fullIData(oldp+508,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue[1]),24);
    bufp->fullIData(oldp+509,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue[2]),24);
    bufp->fullIData(oldp+510,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue[3]),24);
    bufp->fullIData(oldp+511,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue[4]),24);
    bufp->fullIData(oldp+512,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue[5]),24);
    bufp->fullIData(oldp+513,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue[6]),24);
    bufp->fullIData(oldp+514,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue[7]),24);
    bufp->fullIData(oldp+515,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue[8]),24);
    bufp->fullIData(oldp+516,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue[9]),24);
    bufp->fullSData(oldp+517,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue[0]),10);
    bufp->fullSData(oldp+518,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue[1]),10);
    bufp->fullSData(oldp+519,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue[2]),10);
    bufp->fullSData(oldp+520,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue[3]),10);
    bufp->fullSData(oldp+521,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue[4]),10);
    bufp->fullSData(oldp+522,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue[5]),10);
    bufp->fullSData(oldp+523,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue[6]),10);
    bufp->fullSData(oldp+524,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue[7]),10);
    bufp->fullSData(oldp+525,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue[8]),10);
    bufp->fullSData(oldp+526,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue[9]),10);
    bufp->fullSData(oldp+527,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue[0]),10);
    bufp->fullSData(oldp+528,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue[1]),10);
    bufp->fullSData(oldp+529,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue[2]),10);
    bufp->fullSData(oldp+530,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue[3]),10);
    bufp->fullSData(oldp+531,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue[4]),10);
    bufp->fullSData(oldp+532,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue[5]),10);
    bufp->fullSData(oldp+533,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue[6]),10);
    bufp->fullSData(oldp+534,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue[7]),10);
    bufp->fullSData(oldp+535,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue[8]),10);
    bufp->fullSData(oldp+536,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue[9]),10);
    bufp->fullCData(oldp+537,(vlSelf->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__counter),4);
    bufp->fullBit(oldp+538,(vlSelf->top__DOT____Vcellout__genblk1__BRA__5__KET____DOT__queue_block__full_queue));
    bufp->fullBit(oldp+539,(vlSelf->top__DOT____Vcellout__genblk1__BRA__5__KET____DOT__queue_block__en));
    bufp->fullBit(oldp+540,(vlSelf->top__DOT____Vcellout__genblk1__BRA__5__KET____DOT__queue_block__match));
    bufp->fullIData(oldp+541,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue[0]),24);
    bufp->fullIData(oldp+542,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue[1]),24);
    bufp->fullIData(oldp+543,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue[2]),24);
    bufp->fullIData(oldp+544,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue[3]),24);
    bufp->fullIData(oldp+545,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue[4]),24);
    bufp->fullIData(oldp+546,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue[5]),24);
    bufp->fullIData(oldp+547,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue[6]),24);
    bufp->fullIData(oldp+548,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue[7]),24);
    bufp->fullIData(oldp+549,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue[8]),24);
    bufp->fullIData(oldp+550,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue[9]),24);
    bufp->fullSData(oldp+551,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue[0]),10);
    bufp->fullSData(oldp+552,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue[1]),10);
    bufp->fullSData(oldp+553,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue[2]),10);
    bufp->fullSData(oldp+554,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue[3]),10);
    bufp->fullSData(oldp+555,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue[4]),10);
    bufp->fullSData(oldp+556,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue[5]),10);
    bufp->fullSData(oldp+557,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue[6]),10);
    bufp->fullSData(oldp+558,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue[7]),10);
    bufp->fullSData(oldp+559,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue[8]),10);
    bufp->fullSData(oldp+560,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue[9]),10);
    bufp->fullSData(oldp+561,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue[0]),10);
    bufp->fullSData(oldp+562,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue[1]),10);
    bufp->fullSData(oldp+563,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue[2]),10);
    bufp->fullSData(oldp+564,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue[3]),10);
    bufp->fullSData(oldp+565,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue[4]),10);
    bufp->fullSData(oldp+566,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue[5]),10);
    bufp->fullSData(oldp+567,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue[6]),10);
    bufp->fullSData(oldp+568,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue[7]),10);
    bufp->fullSData(oldp+569,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue[8]),10);
    bufp->fullSData(oldp+570,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue[9]),10);
    bufp->fullCData(oldp+571,(vlSelf->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__counter),4);
    bufp->fullBit(oldp+572,((1U & (IData)(vlSelf->top__DOT__full_queue_bus))));
    bufp->fullBit(oldp+573,((1U & ((IData)(vlSelf->top__DOT__full_queue_bus) 
                                   >> 1U))));
    bufp->fullBit(oldp+574,((1U & ((IData)(vlSelf->top__DOT__full_queue_bus) 
                                   >> 2U))));
    bufp->fullBit(oldp+575,((1U & ((IData)(vlSelf->top__DOT__full_queue_bus) 
                                   >> 3U))));
    bufp->fullBit(oldp+576,((1U & ((IData)(vlSelf->top__DOT__full_queue_bus) 
                                   >> 4U))));
    bufp->fullBit(oldp+577,((1U & ((IData)(vlSelf->top__DOT__full_queue_bus) 
                                   >> 5U))));
    bufp->fullBit(oldp+578,(vlSelf->clk));
    bufp->fullBit(oldp+579,(vlSelf->reset));
    bufp->fullBit(oldp+580,(vlSelf->ready));
    bufp->fullIData(oldp+581,(vlSelf->iterations_max),32);
    bufp->fullSData(oldp+582,(vlSelf->zoom),10);
    bufp->fullSData(oldp+583,(vlSelf->x_offset),10);
    bufp->fullSData(oldp+584,(vlSelf->y_offset),10);
    bufp->fullCData(oldp+585,(vlSelf->r),8);
    bufp->fullCData(oldp+586,(vlSelf->g),8);
    bufp->fullCData(oldp+587,(vlSelf->b),8);
    bufp->fullBit(oldp+588,(vlSelf->first));
    bufp->fullBit(oldp+589,(vlSelf->last_x));
    bufp->fullBit(oldp+590,(vlSelf->last_y));
    bufp->fullBit(oldp+591,(vlSelf->valid));
    bufp->fullBit(oldp+592,(((0x3fU == (IData)(vlSelf->top__DOT__fin_bus)) 
                             | (IData)(vlSelf->reset))));
    bufp->fullIData(oldp+593,(((5U >= (7U & vlSelf->top__DOT__j))
                                ? vlSelf->top__DOT__colour_bus_o
                               [(7U & vlSelf->top__DOT__j)]
                                : 0U)),24);
    bufp->fullCData(oldp+594,((0x3fU & vlSelf->iterations_max)),6);
    bufp->fullCData(oldp+595,((7U & (IData)(vlSelf->zoom))),3);
    bufp->fullIData(oldp+596,(vlSelf->x_offset),25);
    bufp->fullIData(oldp+597,(vlSelf->y_offset),25);
    bufp->fullBit(oldp+598,(((VL_LTS_III(25, 0x400000U, vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__distance) 
                              | ((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__curr_iterations) 
                                 == (0x3fU & vlSelf->iterations_max))) 
                             | VL_GTS_III(32, 0U, VL_EXTENDS_II(32,25, vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__distance)))));
    bufp->fullIData(oldp+599,((0x1ffffffU & ((IData)(0x1e00000U) 
                                             + (IData)(vlSelf->x_offset)))),25);
    bufp->fullIData(oldp+600,((0x1ffffffU & ((IData)(0x1e80000U) 
                                             + (IData)(vlSelf->y_offset)))),25);
    bufp->fullBit(oldp+601,(((VL_LTS_III(25, 0x400000U, vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__distance) 
                              | ((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__curr_iterations) 
                                 == (0x3fU & vlSelf->iterations_max))) 
                             | VL_GTS_III(32, 0U, VL_EXTENDS_II(32,25, vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__distance)))));
    bufp->fullBit(oldp+602,(((VL_LTS_III(25, 0x400000U, vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__distance) 
                              | ((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__curr_iterations) 
                                 == (0x3fU & vlSelf->iterations_max))) 
                             | VL_GTS_III(32, 0U, VL_EXTENDS_II(32,25, vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__distance)))));
    bufp->fullBit(oldp+603,(((VL_LTS_III(25, 0x400000U, vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__distance) 
                              | ((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__curr_iterations) 
                                 == (0x3fU & vlSelf->iterations_max))) 
                             | VL_GTS_III(32, 0U, VL_EXTENDS_II(32,25, vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__distance)))));
    bufp->fullBit(oldp+604,(((VL_LTS_III(25, 0x400000U, vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__distance) 
                              | ((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__curr_iterations) 
                                 == (0x3fU & vlSelf->iterations_max))) 
                             | VL_GTS_III(32, 0U, VL_EXTENDS_II(32,25, vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__distance)))));
    bufp->fullBit(oldp+605,(((VL_LTS_III(25, 0x400000U, vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__distance) 
                              | ((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__curr_iterations) 
                                 == (0x3fU & vlSelf->iterations_max))) 
                             | VL_GTS_III(32, 0U, VL_EXTENDS_II(32,25, vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__distance)))));
    bufp->fullIData(oldp+606,(0xaU),32);
    bufp->fullIData(oldp+607,(0x18U),32);
    bufp->fullIData(oldp+608,(6U),32);
    bufp->fullIData(oldp+609,(0x20U),32);
    bufp->fullBit(oldp+610,(vlSelf->top__DOT__reset_engine));
    bufp->fullIData(oldp+611,(0x280U),32);
    bufp->fullIData(oldp+612,(0x1e0U),32);
    bufp->fullIData(oldp+613,(6U),32);
    bufp->fullIData(oldp+614,(4U),32);
    bufp->fullIData(oldp+615,(0x32U),32);
    bufp->fullIData(oldp+616,(0x19U),32);
    bufp->fullIData(oldp+617,(0x14U),32);
    bufp->fullBit(oldp+618,(0U));
    bufp->fullIData(oldp+619,(5U),32);
    bufp->fullIData(oldp+620,(0x400000U),25);
    bufp->fullIData(oldp+621,(0U),32);
    bufp->fullIData(oldp+622,(1U),32);
    bufp->fullIData(oldp+623,(2U),32);
    bufp->fullIData(oldp+624,(3U),32);
    bufp->fullIData(oldp+625,(0x199aU),25);
    bufp->fullIData(oldp+626,(0x199aU),25);
}
