// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


//======================

void Vtop::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vtop::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtop__Syms* __restrict vlSymsp = static_cast<Vtop__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vtop::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vtop::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Vtop__Syms* __restrict vlSymsp = static_cast<Vtop__Syms*>(userp);
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vtop::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Vtop__Syms* __restrict vlSymsp = static_cast<Vtop__Syms*>(userp);
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+159,"clk", false,-1);
        tracep->declBit(c+160,"reset", false,-1);
        tracep->declBit(c+161,"ready", false,-1);
        tracep->declBus(c+162,"iterations_max", false,-1, 31,0);
        tracep->declBus(c+163,"zoom", false,-1, 31,0);
        tracep->declBus(c+164,"x_offset", false,-1, 31,0);
        tracep->declBus(c+165,"y_offset", false,-1, 31,0);
        tracep->declBus(c+166,"r", false,-1, 7,0);
        tracep->declBus(c+167,"g", false,-1, 7,0);
        tracep->declBus(c+168,"b", false,-1, 7,0);
        tracep->declBit(c+169,"first", false,-1);
        tracep->declBit(c+170,"last_x", false,-1);
        tracep->declBit(c+171,"last_y", false,-1);
        tracep->declBit(c+172,"valid", false,-1);
        {int i; for (i=0; i<3; i++) {
                tracep->declBit(c+173+i*1,"full_queue", true,(i+0));}}
        tracep->declBus(c+187,"top DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+188,"top RBG_SIZE", false,-1, 31,0);
        tracep->declBus(c+189,"top NUM_ENGINES", false,-1, 31,0);
        tracep->declBus(c+187,"top ITERATIONS_WIDTH", false,-1, 31,0);
        tracep->declBit(c+159,"top clk", false,-1);
        tracep->declBit(c+160,"top reset", false,-1);
        tracep->declBit(c+161,"top ready", false,-1);
        tracep->declBus(c+162,"top iterations_max", false,-1, 31,0);
        tracep->declBus(c+163,"top zoom", false,-1, 31,0);
        tracep->declBus(c+164,"top x_offset", false,-1, 31,0);
        tracep->declBus(c+165,"top y_offset", false,-1, 31,0);
        tracep->declBus(c+166,"top r", false,-1, 7,0);
        tracep->declBus(c+167,"top g", false,-1, 7,0);
        tracep->declBus(c+168,"top b", false,-1, 7,0);
        tracep->declBit(c+169,"top first", false,-1);
        tracep->declBit(c+170,"top last_x", false,-1);
        tracep->declBit(c+171,"top last_y", false,-1);
        tracep->declBit(c+172,"top valid", false,-1);
        {int i; for (i=0; i<3; i++) {
                tracep->declBit(c+173+i*1,"top full_queue", true,(i+0));}}
        tracep->declBus(c+1,"top colour_o_wire", false,-1, 23,0);
        tracep->declBus(c+2,"top xpixel_wire", false,-1, 31,0);
        tracep->declBus(c+3,"top ypixel_wire", false,-1, 31,0);
        tracep->declBus(c+4,"top colour_wire", false,-1, 23,0);
        tracep->declBit(c+176,"top reset_engine", false,-1);
        tracep->declBit(c+177,"top fin_wire", false,-1);
        tracep->declBit(c+5,"top en_wire", false,-1);
        tracep->declBus(c+6,"top fin_bus", false,-1, 2,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+7+i*1,"top x", true,(i+0), 31,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+10+i*1,"top y", true,(i+0), 31,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+13+i*1,"top iterations_bus", true,(i+0), 31,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+16+i*1,"top xpixel_bus", true,(i+0), 31,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+19+i*1,"top ypixel_bus", true,(i+0), 31,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBit(c+190+i*1,"top en_bus", true,(i+0));}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+22+i*1,"top colour_bus", true,(i+0), 23,0);}}
        tracep->declBus(c+187,"top distributor PIXEL_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+193,"top distributor SCREEN_WIDTH", false,-1, 31,0);
        tracep->declBus(c+194,"top distributor SCREEN_HEIGHT", false,-1, 31,0);
        tracep->declBus(c+189,"top distributor NUM_ENGINES", false,-1, 31,0);
        tracep->declBit(c+159,"top distributor clk", false,-1);
        tracep->declBit(c+160,"top distributor reset", false,-1);
        tracep->declBit(c+177,"top distributor fin_flag", false,-1);
        tracep->declBus(c+25,"top distributor x1", false,-1, 31,0);
        tracep->declBus(c+26,"top distributor x2", false,-1, 31,0);
        tracep->declBus(c+27,"top distributor x3", false,-1, 31,0);
        tracep->declBus(c+28,"top distributor y1", false,-1, 31,0);
        tracep->declBus(c+29,"top distributor y2", false,-1, 31,0);
        tracep->declBus(c+30,"top distributor y3", false,-1, 31,0);
        tracep->declBus(c+25,"top distributor x0", false,-1, 31,0);
        tracep->declBus(c+28,"top distributor y0", false,-1, 31,0);
        tracep->declBus(c+187,"top lut_rom DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+188,"top lut_rom RBG_SIZE", false,-1, 31,0);
        tracep->declBus(c+195,"top lut_rom MAX_ITERATION", false,-1, 31,0);
        tracep->declBus(c+189,"top lut_rom NUM_ENGINES", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+31+i*1,"top lut_rom iterations", true,(i+0), 31,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+34+i*1,"top lut_rom rgb_val", true,(i+0), 23,0);}}
        tracep->declBus(c+196,"top lut_rom unnamedblk1 i", false,-1, 31,0);
        tracep->declBus(c+187,"top combinator_block DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+188,"top combinator_block RBG_SIZE", false,-1, 31,0);
        tracep->declBus(c+193,"top combinator_block SCREEN_WIDTH", false,-1, 31,0);
        tracep->declBus(c+194,"top combinator_block SCREEN_HEIGHT", false,-1, 31,0);
        tracep->declBit(c+159,"top combinator_block clk", false,-1);
        tracep->declBit(c+160,"top combinator_block reset", false,-1);
        tracep->declBus(c+4,"top combinator_block colour_i", false,-1, 23,0);
        tracep->declBit(c+5,"top combinator_block en", false,-1);
        tracep->declBit(c+161,"top combinator_block ready", false,-1);
        tracep->declBus(c+2,"top combinator_block next_xpixel", false,-1, 31,0);
        tracep->declBus(c+3,"top combinator_block next_ypixel", false,-1, 31,0);
        tracep->declBus(c+1,"top combinator_block colour_o", false,-1, 23,0);
        tracep->declBit(c+169,"top combinator_block first", false,-1);
        tracep->declBit(c+170,"top combinator_block last_x", false,-1);
        tracep->declBit(c+171,"top combinator_block last_y", false,-1);
        tracep->declBit(c+172,"top combinator_block valid", false,-1);
        tracep->declBus(c+37,"top combinator_block xpixel", false,-1, 31,0);
        tracep->declBus(c+38,"top combinator_block ypixel", false,-1, 31,0);
        tracep->declBus(c+187,"top genblk1[0] engine PIXEL_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+187,"top genblk1[0] engine fp_bits", false,-1, 31,0);
        tracep->declBus(c+188,"top genblk1[0] engine fp_bot", false,-1, 31,0);
        tracep->declBus(c+187,"top genblk1[0] engine ITERATIONS_WIDTH", false,-1, 31,0);
        tracep->declBus(c+193,"top genblk1[0] engine SCREEN_WIDTH", false,-1, 31,0);
        tracep->declBus(c+194,"top genblk1[0] engine SCREEN_HEIGHT", false,-1, 31,0);
        tracep->declBus(c+197,"top genblk1[0] engine SCALE_FACTOR", false,-1, 31,0);
        tracep->declBit(c+159,"top genblk1[0] engine clk", false,-1);
        tracep->declBit(c+176,"top genblk1[0] engine reset", false,-1);
        tracep->declBus(c+162,"top genblk1[0] engine iterations_max", false,-1, 31,0);
        tracep->declBus(c+39,"top genblk1[0] engine x0_", false,-1, 31,0);
        tracep->declBus(c+40,"top genblk1[0] engine y0_", false,-1, 31,0);
        tracep->declBus(c+163,"top genblk1[0] engine zoom", false,-1, 31,0);
        tracep->declBus(c+164,"top genblk1[0] engine x_offset", false,-1, 31,0);
        tracep->declBus(c+165,"top genblk1[0] engine y_offset", false,-1, 31,0);
        tracep->declBit(c+41,"top genblk1[0] engine finished", false,-1);
        tracep->declBus(c+42,"top genblk1[0] engine iterations", false,-1, 31,0);
        tracep->declBus(c+43,"top genblk1[0] engine xpixel", false,-1, 31,0);
        tracep->declBus(c+44,"top genblk1[0] engine ypixel", false,-1, 31,0);
        tracep->declBus(c+198,"top genblk1[0] engine fp_top", false,-1, 31,0);
        tracep->declBus(c+199,"top genblk1[0] engine fp_square_top", false,-1, 31,0);
        tracep->declBus(c+178,"top genblk1[0] engine x0", false,-1, 31,0);
        tracep->declBus(c+179,"top genblk1[0] engine y0", false,-1, 31,0);
        tracep->declBus(c+45,"top genblk1[0] engine x0_buff", false,-1, 31,0);
        tracep->declBus(c+46,"top genblk1[0] engine y0_buff", false,-1, 31,0);
        tracep->declBus(c+180,"top genblk1[0] engine x_min", false,-1, 31,0);
        tracep->declBus(c+181,"top genblk1[0] engine y_min", false,-1, 31,0);
        tracep->declBus(c+182,"top genblk1[0] engine step", false,-1, 31,0);
        tracep->declBus(c+47,"top genblk1[0] engine state", false,-1, 31,0);
        tracep->declBus(c+48,"top genblk1[0] engine x", false,-1, 31,0);
        tracep->declBus(c+49,"top genblk1[0] engine y", false,-1, 31,0);
        tracep->declQuad(c+50,"top genblk1[0] engine y_tmp", false,-1, 63,0);
        tracep->declQuad(c+52,"top genblk1[0] engine x2", false,-1, 63,0);
        tracep->declQuad(c+54,"top genblk1[0] engine y2", false,-1, 63,0);
        tracep->declBus(c+187,"top genblk1[0] queue_block DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+200,"top genblk1[0] queue_block QUEUE_SIZE", false,-1, 31,0);
        tracep->declBus(c+189,"top genblk1[0] queue_block COUNTER_SIZE", false,-1, 31,0);
        tracep->declBus(c+188,"top genblk1[0] queue_block RBG_SIZE", false,-1, 31,0);
        tracep->declBit(c+159,"top genblk1[0] queue_block clk", false,-1);
        tracep->declBit(c+160,"top genblk1[0] queue_block reset", false,-1);
        tracep->declBit(c+56,"top genblk1[0] queue_block fin_flag", false,-1);
        tracep->declBus(c+57,"top genblk1[0] queue_block colour_i", false,-1, 23,0);
        tracep->declBus(c+58,"top genblk1[0] queue_block xpixel_i", false,-1, 31,0);
        tracep->declBus(c+59,"top genblk1[0] queue_block ypixel_i", false,-1, 31,0);
        tracep->declBus(c+2,"top genblk1[0] queue_block xpixel_check", false,-1, 31,0);
        tracep->declBus(c+3,"top genblk1[0] queue_block ypixel_check", false,-1, 31,0);
        tracep->declBus(c+4,"top genblk1[0] queue_block colour_o", false,-1, 23,0);
        tracep->declBit(c+60,"top genblk1[0] queue_block full_queue", false,-1);
        tracep->declBit(c+5,"top genblk1[0] queue_block en", false,-1);
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+61+i*1,"top genblk1[0] queue_block colour_queue", true,(i+0), 23,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+66+i*1,"top genblk1[0] queue_block xqueue", true,(i+0), 31,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+71+i*1,"top genblk1[0] queue_block yqueue", true,(i+0), 31,0);}}
        tracep->declBus(c+76,"top genblk1[0] queue_block counter", false,-1, 2,0);
        tracep->declBus(c+77,"top genblk1[0] queue_block unnamedblk1 i", false,-1, 31,0);
        tracep->declBus(c+78,"top genblk1[0] queue_block unnamedblk2 i", false,-1, 31,0);
        tracep->declBus(c+187,"top genblk1[1] engine PIXEL_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+187,"top genblk1[1] engine fp_bits", false,-1, 31,0);
        tracep->declBus(c+188,"top genblk1[1] engine fp_bot", false,-1, 31,0);
        tracep->declBus(c+187,"top genblk1[1] engine ITERATIONS_WIDTH", false,-1, 31,0);
        tracep->declBus(c+193,"top genblk1[1] engine SCREEN_WIDTH", false,-1, 31,0);
        tracep->declBus(c+194,"top genblk1[1] engine SCREEN_HEIGHT", false,-1, 31,0);
        tracep->declBus(c+197,"top genblk1[1] engine SCALE_FACTOR", false,-1, 31,0);
        tracep->declBit(c+159,"top genblk1[1] engine clk", false,-1);
        tracep->declBit(c+176,"top genblk1[1] engine reset", false,-1);
        tracep->declBus(c+162,"top genblk1[1] engine iterations_max", false,-1, 31,0);
        tracep->declBus(c+79,"top genblk1[1] engine x0_", false,-1, 31,0);
        tracep->declBus(c+80,"top genblk1[1] engine y0_", false,-1, 31,0);
        tracep->declBus(c+163,"top genblk1[1] engine zoom", false,-1, 31,0);
        tracep->declBus(c+164,"top genblk1[1] engine x_offset", false,-1, 31,0);
        tracep->declBus(c+165,"top genblk1[1] engine y_offset", false,-1, 31,0);
        tracep->declBit(c+81,"top genblk1[1] engine finished", false,-1);
        tracep->declBus(c+82,"top genblk1[1] engine iterations", false,-1, 31,0);
        tracep->declBus(c+83,"top genblk1[1] engine xpixel", false,-1, 31,0);
        tracep->declBus(c+84,"top genblk1[1] engine ypixel", false,-1, 31,0);
        tracep->declBus(c+198,"top genblk1[1] engine fp_top", false,-1, 31,0);
        tracep->declBus(c+199,"top genblk1[1] engine fp_square_top", false,-1, 31,0);
        tracep->declBus(c+183,"top genblk1[1] engine x0", false,-1, 31,0);
        tracep->declBus(c+184,"top genblk1[1] engine y0", false,-1, 31,0);
        tracep->declBus(c+85,"top genblk1[1] engine x0_buff", false,-1, 31,0);
        tracep->declBus(c+86,"top genblk1[1] engine y0_buff", false,-1, 31,0);
        tracep->declBus(c+180,"top genblk1[1] engine x_min", false,-1, 31,0);
        tracep->declBus(c+181,"top genblk1[1] engine y_min", false,-1, 31,0);
        tracep->declBus(c+182,"top genblk1[1] engine step", false,-1, 31,0);
        tracep->declBus(c+87,"top genblk1[1] engine state", false,-1, 31,0);
        tracep->declBus(c+88,"top genblk1[1] engine x", false,-1, 31,0);
        tracep->declBus(c+89,"top genblk1[1] engine y", false,-1, 31,0);
        tracep->declQuad(c+90,"top genblk1[1] engine y_tmp", false,-1, 63,0);
        tracep->declQuad(c+92,"top genblk1[1] engine x2", false,-1, 63,0);
        tracep->declQuad(c+94,"top genblk1[1] engine y2", false,-1, 63,0);
        tracep->declBus(c+187,"top genblk1[1] queue_block DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+200,"top genblk1[1] queue_block QUEUE_SIZE", false,-1, 31,0);
        tracep->declBus(c+189,"top genblk1[1] queue_block COUNTER_SIZE", false,-1, 31,0);
        tracep->declBus(c+188,"top genblk1[1] queue_block RBG_SIZE", false,-1, 31,0);
        tracep->declBit(c+159,"top genblk1[1] queue_block clk", false,-1);
        tracep->declBit(c+160,"top genblk1[1] queue_block reset", false,-1);
        tracep->declBit(c+96,"top genblk1[1] queue_block fin_flag", false,-1);
        tracep->declBus(c+97,"top genblk1[1] queue_block colour_i", false,-1, 23,0);
        tracep->declBus(c+98,"top genblk1[1] queue_block xpixel_i", false,-1, 31,0);
        tracep->declBus(c+99,"top genblk1[1] queue_block ypixel_i", false,-1, 31,0);
        tracep->declBus(c+2,"top genblk1[1] queue_block xpixel_check", false,-1, 31,0);
        tracep->declBus(c+3,"top genblk1[1] queue_block ypixel_check", false,-1, 31,0);
        tracep->declBus(c+4,"top genblk1[1] queue_block colour_o", false,-1, 23,0);
        tracep->declBit(c+100,"top genblk1[1] queue_block full_queue", false,-1);
        tracep->declBit(c+5,"top genblk1[1] queue_block en", false,-1);
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+101+i*1,"top genblk1[1] queue_block colour_queue", true,(i+0), 23,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+106+i*1,"top genblk1[1] queue_block xqueue", true,(i+0), 31,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+111+i*1,"top genblk1[1] queue_block yqueue", true,(i+0), 31,0);}}
        tracep->declBus(c+116,"top genblk1[1] queue_block counter", false,-1, 2,0);
        tracep->declBus(c+117,"top genblk1[1] queue_block unnamedblk1 i", false,-1, 31,0);
        tracep->declBus(c+118,"top genblk1[1] queue_block unnamedblk2 i", false,-1, 31,0);
        tracep->declBus(c+187,"top genblk1[2] engine PIXEL_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+187,"top genblk1[2] engine fp_bits", false,-1, 31,0);
        tracep->declBus(c+188,"top genblk1[2] engine fp_bot", false,-1, 31,0);
        tracep->declBus(c+187,"top genblk1[2] engine ITERATIONS_WIDTH", false,-1, 31,0);
        tracep->declBus(c+193,"top genblk1[2] engine SCREEN_WIDTH", false,-1, 31,0);
        tracep->declBus(c+194,"top genblk1[2] engine SCREEN_HEIGHT", false,-1, 31,0);
        tracep->declBus(c+197,"top genblk1[2] engine SCALE_FACTOR", false,-1, 31,0);
        tracep->declBit(c+159,"top genblk1[2] engine clk", false,-1);
        tracep->declBit(c+176,"top genblk1[2] engine reset", false,-1);
        tracep->declBus(c+162,"top genblk1[2] engine iterations_max", false,-1, 31,0);
        tracep->declBus(c+119,"top genblk1[2] engine x0_", false,-1, 31,0);
        tracep->declBus(c+120,"top genblk1[2] engine y0_", false,-1, 31,0);
        tracep->declBus(c+163,"top genblk1[2] engine zoom", false,-1, 31,0);
        tracep->declBus(c+164,"top genblk1[2] engine x_offset", false,-1, 31,0);
        tracep->declBus(c+165,"top genblk1[2] engine y_offset", false,-1, 31,0);
        tracep->declBit(c+121,"top genblk1[2] engine finished", false,-1);
        tracep->declBus(c+122,"top genblk1[2] engine iterations", false,-1, 31,0);
        tracep->declBus(c+123,"top genblk1[2] engine xpixel", false,-1, 31,0);
        tracep->declBus(c+124,"top genblk1[2] engine ypixel", false,-1, 31,0);
        tracep->declBus(c+198,"top genblk1[2] engine fp_top", false,-1, 31,0);
        tracep->declBus(c+199,"top genblk1[2] engine fp_square_top", false,-1, 31,0);
        tracep->declBus(c+185,"top genblk1[2] engine x0", false,-1, 31,0);
        tracep->declBus(c+186,"top genblk1[2] engine y0", false,-1, 31,0);
        tracep->declBus(c+125,"top genblk1[2] engine x0_buff", false,-1, 31,0);
        tracep->declBus(c+126,"top genblk1[2] engine y0_buff", false,-1, 31,0);
        tracep->declBus(c+180,"top genblk1[2] engine x_min", false,-1, 31,0);
        tracep->declBus(c+181,"top genblk1[2] engine y_min", false,-1, 31,0);
        tracep->declBus(c+182,"top genblk1[2] engine step", false,-1, 31,0);
        tracep->declBus(c+127,"top genblk1[2] engine state", false,-1, 31,0);
        tracep->declBus(c+128,"top genblk1[2] engine x", false,-1, 31,0);
        tracep->declBus(c+129,"top genblk1[2] engine y", false,-1, 31,0);
        tracep->declQuad(c+130,"top genblk1[2] engine y_tmp", false,-1, 63,0);
        tracep->declQuad(c+132,"top genblk1[2] engine x2", false,-1, 63,0);
        tracep->declQuad(c+134,"top genblk1[2] engine y2", false,-1, 63,0);
        tracep->declBus(c+187,"top genblk1[2] queue_block DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+200,"top genblk1[2] queue_block QUEUE_SIZE", false,-1, 31,0);
        tracep->declBus(c+189,"top genblk1[2] queue_block COUNTER_SIZE", false,-1, 31,0);
        tracep->declBus(c+188,"top genblk1[2] queue_block RBG_SIZE", false,-1, 31,0);
        tracep->declBit(c+159,"top genblk1[2] queue_block clk", false,-1);
        tracep->declBit(c+160,"top genblk1[2] queue_block reset", false,-1);
        tracep->declBit(c+136,"top genblk1[2] queue_block fin_flag", false,-1);
        tracep->declBus(c+137,"top genblk1[2] queue_block colour_i", false,-1, 23,0);
        tracep->declBus(c+138,"top genblk1[2] queue_block xpixel_i", false,-1, 31,0);
        tracep->declBus(c+139,"top genblk1[2] queue_block ypixel_i", false,-1, 31,0);
        tracep->declBus(c+2,"top genblk1[2] queue_block xpixel_check", false,-1, 31,0);
        tracep->declBus(c+3,"top genblk1[2] queue_block ypixel_check", false,-1, 31,0);
        tracep->declBus(c+4,"top genblk1[2] queue_block colour_o", false,-1, 23,0);
        tracep->declBit(c+140,"top genblk1[2] queue_block full_queue", false,-1);
        tracep->declBit(c+5,"top genblk1[2] queue_block en", false,-1);
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+141+i*1,"top genblk1[2] queue_block colour_queue", true,(i+0), 23,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+146+i*1,"top genblk1[2] queue_block xqueue", true,(i+0), 31,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+151+i*1,"top genblk1[2] queue_block yqueue", true,(i+0), 31,0);}}
        tracep->declBus(c+156,"top genblk1[2] queue_block counter", false,-1, 2,0);
        tracep->declBus(c+157,"top genblk1[2] queue_block unnamedblk1 i", false,-1, 31,0);
        tracep->declBus(c+158,"top genblk1[2] queue_block unnamedblk2 i", false,-1, 31,0);
    }
}

void Vtop::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vtop::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Vtop__Syms* __restrict vlSymsp = static_cast<Vtop__Syms*>(userp);
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vtop::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Vtop__Syms* __restrict vlSymsp = static_cast<Vtop__Syms*>(userp);
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullIData(oldp+1,(vlTOPp->top__DOT__colour_o_wire),24);
        tracep->fullIData(oldp+2,(vlTOPp->top__DOT__xpixel_wire),32);
        tracep->fullIData(oldp+3,(vlTOPp->top__DOT__ypixel_wire),32);
        tracep->fullIData(oldp+4,(vlTOPp->top__DOT__colour_wire),24);
        tracep->fullBit(oldp+5,(vlTOPp->top__DOT__en_wire));
        tracep->fullCData(oldp+6,(vlTOPp->top__DOT__fin_bus),3);
        tracep->fullIData(oldp+7,(vlTOPp->top__DOT__x[0]),32);
        tracep->fullIData(oldp+8,(vlTOPp->top__DOT__x[1]),32);
        tracep->fullIData(oldp+9,(vlTOPp->top__DOT__x[2]),32);
        tracep->fullIData(oldp+10,(vlTOPp->top__DOT__y[0]),32);
        tracep->fullIData(oldp+11,(vlTOPp->top__DOT__y[1]),32);
        tracep->fullIData(oldp+12,(vlTOPp->top__DOT__y[2]),32);
        tracep->fullIData(oldp+13,(vlTOPp->top__DOT__iterations_bus[0]),32);
        tracep->fullIData(oldp+14,(vlTOPp->top__DOT__iterations_bus[1]),32);
        tracep->fullIData(oldp+15,(vlTOPp->top__DOT__iterations_bus[2]),32);
        tracep->fullIData(oldp+16,(vlTOPp->top__DOT__xpixel_bus[0]),32);
        tracep->fullIData(oldp+17,(vlTOPp->top__DOT__xpixel_bus[1]),32);
        tracep->fullIData(oldp+18,(vlTOPp->top__DOT__xpixel_bus[2]),32);
        tracep->fullIData(oldp+19,(vlTOPp->top__DOT__ypixel_bus[0]),32);
        tracep->fullIData(oldp+20,(vlTOPp->top__DOT__ypixel_bus[1]),32);
        tracep->fullIData(oldp+21,(vlTOPp->top__DOT__ypixel_bus[2]),32);
        tracep->fullIData(oldp+22,(vlTOPp->top__DOT__colour_bus[0]),24);
        tracep->fullIData(oldp+23,(vlTOPp->top__DOT__colour_bus[1]),24);
        tracep->fullIData(oldp+24,(vlTOPp->top__DOT__colour_bus[2]),24);
        tracep->fullIData(oldp+25,(vlTOPp->top__DOT__distributor__DOT__x0),32);
        tracep->fullIData(oldp+26,(VL_MODDIV_III(32, 
                                                 ((IData)(1U) 
                                                  + vlTOPp->top__DOT__distributor__DOT__x0), (IData)(0x280U))),32);
        tracep->fullIData(oldp+27,(VL_MODDIV_III(32, 
                                                 ((IData)(2U) 
                                                  + vlTOPp->top__DOT__distributor__DOT__x0), (IData)(0x280U))),32);
        tracep->fullIData(oldp+28,(vlTOPp->top__DOT__distributor__DOT__y0),32);
        tracep->fullIData(oldp+29,(VL_MODDIV_III(32, 
                                                 (vlTOPp->top__DOT__distributor__DOT__y0 
                                                  + 
                                                  VL_DIV_III(32, 
                                                             ((IData)(1U) 
                                                              + vlTOPp->top__DOT__distributor__DOT__x0), (IData)(0x280U))), (IData)(0x1e0U))),32);
        tracep->fullIData(oldp+30,(VL_MODDIV_III(32, 
                                                 (vlTOPp->top__DOT__distributor__DOT__y0 
                                                  + 
                                                  VL_DIV_III(32, 
                                                             ((IData)(2U) 
                                                              + vlTOPp->top__DOT__distributor__DOT__x0), (IData)(0x280U))), (IData)(0x1e0U))),32);
        tracep->fullIData(oldp+31,(vlTOPp->top__DOT____Vcellinp__lut_rom__iterations[0]),32);
        tracep->fullIData(oldp+32,(vlTOPp->top__DOT____Vcellinp__lut_rom__iterations[1]),32);
        tracep->fullIData(oldp+33,(vlTOPp->top__DOT____Vcellinp__lut_rom__iterations[2]),32);
        tracep->fullIData(oldp+34,(vlTOPp->top__DOT____Vcellout__lut_rom__rgb_val[0]),24);
        tracep->fullIData(oldp+35,(vlTOPp->top__DOT____Vcellout__lut_rom__rgb_val[1]),24);
        tracep->fullIData(oldp+36,(vlTOPp->top__DOT____Vcellout__lut_rom__rgb_val[2]),24);
        tracep->fullIData(oldp+37,(vlTOPp->top__DOT__combinator_block__DOT__xpixel),32);
        tracep->fullIData(oldp+38,(vlTOPp->top__DOT__combinator_block__DOT__ypixel),32);
        tracep->fullIData(oldp+39,(vlTOPp->top__DOT__x
                                   [0U]),32);
        tracep->fullIData(oldp+40,(vlTOPp->top__DOT__y
                                   [0U]),32);
        tracep->fullBit(oldp+41,(vlTOPp->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__engine__finished));
        tracep->fullIData(oldp+42,(vlTOPp->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__engine__iterations),32);
        tracep->fullIData(oldp+43,(vlTOPp->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__engine__xpixel),32);
        tracep->fullIData(oldp+44,(vlTOPp->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__engine__ypixel),32);
        tracep->fullIData(oldp+45,(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__x0_buff),32);
        tracep->fullIData(oldp+46,(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__y0_buff),32);
        tracep->fullIData(oldp+47,(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__state),32);
        tracep->fullIData(oldp+48,(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__x),32);
        tracep->fullIData(oldp+49,(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__y),32);
        tracep->fullQData(oldp+50,(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__y_tmp),64);
        tracep->fullQData(oldp+52,(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__x2),64);
        tracep->fullQData(oldp+54,(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__y2),64);
        tracep->fullBit(oldp+56,((1U & (IData)(vlTOPp->top__DOT__fin_bus))));
        tracep->fullIData(oldp+57,(vlTOPp->top__DOT__colour_bus
                                   [0U]),24);
        tracep->fullIData(oldp+58,(vlTOPp->top__DOT__xpixel_bus
                                   [0U]),32);
        tracep->fullIData(oldp+59,(vlTOPp->top__DOT__ypixel_bus
                                   [0U]),32);
        tracep->fullBit(oldp+60,(vlTOPp->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__queue_block__full_queue));
        tracep->fullIData(oldp+61,(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[0]),24);
        tracep->fullIData(oldp+62,(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[1]),24);
        tracep->fullIData(oldp+63,(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[2]),24);
        tracep->fullIData(oldp+64,(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[3]),24);
        tracep->fullIData(oldp+65,(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[4]),24);
        tracep->fullIData(oldp+66,(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[0]),32);
        tracep->fullIData(oldp+67,(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[1]),32);
        tracep->fullIData(oldp+68,(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[2]),32);
        tracep->fullIData(oldp+69,(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[3]),32);
        tracep->fullIData(oldp+70,(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[4]),32);
        tracep->fullIData(oldp+71,(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[0]),32);
        tracep->fullIData(oldp+72,(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[1]),32);
        tracep->fullIData(oldp+73,(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[2]),32);
        tracep->fullIData(oldp+74,(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[3]),32);
        tracep->fullIData(oldp+75,(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[4]),32);
        tracep->fullCData(oldp+76,(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__counter),3);
        tracep->fullIData(oldp+77,(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__unnamedblk1__DOT__i),32);
        tracep->fullIData(oldp+78,(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__unnamedblk2__DOT__i),32);
        tracep->fullIData(oldp+79,(vlTOPp->top__DOT__x
                                   [1U]),32);
        tracep->fullIData(oldp+80,(vlTOPp->top__DOT__y
                                   [1U]),32);
        tracep->fullBit(oldp+81,(vlTOPp->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__engine__finished));
        tracep->fullIData(oldp+82,(vlTOPp->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__engine__iterations),32);
        tracep->fullIData(oldp+83,(vlTOPp->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__engine__xpixel),32);
        tracep->fullIData(oldp+84,(vlTOPp->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__engine__ypixel),32);
        tracep->fullIData(oldp+85,(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__x0_buff),32);
        tracep->fullIData(oldp+86,(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__y0_buff),32);
        tracep->fullIData(oldp+87,(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__state),32);
        tracep->fullIData(oldp+88,(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__x),32);
        tracep->fullIData(oldp+89,(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__y),32);
        tracep->fullQData(oldp+90,(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__y_tmp),64);
        tracep->fullQData(oldp+92,(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__x2),64);
        tracep->fullQData(oldp+94,(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__y2),64);
        tracep->fullBit(oldp+96,((1U & ((IData)(vlTOPp->top__DOT__fin_bus) 
                                        >> 1U))));
        tracep->fullIData(oldp+97,(vlTOPp->top__DOT__colour_bus
                                   [1U]),24);
        tracep->fullIData(oldp+98,(vlTOPp->top__DOT__xpixel_bus
                                   [1U]),32);
        tracep->fullIData(oldp+99,(vlTOPp->top__DOT__ypixel_bus
                                   [1U]),32);
        tracep->fullBit(oldp+100,(vlTOPp->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__queue_block__full_queue));
        tracep->fullIData(oldp+101,(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[0]),24);
        tracep->fullIData(oldp+102,(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[1]),24);
        tracep->fullIData(oldp+103,(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[2]),24);
        tracep->fullIData(oldp+104,(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[3]),24);
        tracep->fullIData(oldp+105,(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[4]),24);
        tracep->fullIData(oldp+106,(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[0]),32);
        tracep->fullIData(oldp+107,(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[1]),32);
        tracep->fullIData(oldp+108,(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[2]),32);
        tracep->fullIData(oldp+109,(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[3]),32);
        tracep->fullIData(oldp+110,(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[4]),32);
        tracep->fullIData(oldp+111,(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[0]),32);
        tracep->fullIData(oldp+112,(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[1]),32);
        tracep->fullIData(oldp+113,(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[2]),32);
        tracep->fullIData(oldp+114,(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[3]),32);
        tracep->fullIData(oldp+115,(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[4]),32);
        tracep->fullCData(oldp+116,(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__counter),3);
        tracep->fullIData(oldp+117,(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__unnamedblk1__DOT__i),32);
        tracep->fullIData(oldp+118,(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__unnamedblk2__DOT__i),32);
        tracep->fullIData(oldp+119,(vlTOPp->top__DOT__x
                                    [2U]),32);
        tracep->fullIData(oldp+120,(vlTOPp->top__DOT__y
                                    [2U]),32);
        tracep->fullBit(oldp+121,(vlTOPp->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__engine__finished));
        tracep->fullIData(oldp+122,(vlTOPp->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__engine__iterations),32);
        tracep->fullIData(oldp+123,(vlTOPp->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__engine__xpixel),32);
        tracep->fullIData(oldp+124,(vlTOPp->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__engine__ypixel),32);
        tracep->fullIData(oldp+125,(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__x0_buff),32);
        tracep->fullIData(oldp+126,(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__y0_buff),32);
        tracep->fullIData(oldp+127,(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__state),32);
        tracep->fullIData(oldp+128,(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__x),32);
        tracep->fullIData(oldp+129,(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__y),32);
        tracep->fullQData(oldp+130,(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__y_tmp),64);
        tracep->fullQData(oldp+132,(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__x2),64);
        tracep->fullQData(oldp+134,(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__y2),64);
        tracep->fullBit(oldp+136,((1U & ((IData)(vlTOPp->top__DOT__fin_bus) 
                                         >> 2U))));
        tracep->fullIData(oldp+137,(vlTOPp->top__DOT__colour_bus
                                    [2U]),24);
        tracep->fullIData(oldp+138,(vlTOPp->top__DOT__xpixel_bus
                                    [2U]),32);
        tracep->fullIData(oldp+139,(vlTOPp->top__DOT__ypixel_bus
                                    [2U]),32);
        tracep->fullBit(oldp+140,(vlTOPp->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__queue_block__full_queue));
        tracep->fullIData(oldp+141,(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[0]),24);
        tracep->fullIData(oldp+142,(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[1]),24);
        tracep->fullIData(oldp+143,(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[2]),24);
        tracep->fullIData(oldp+144,(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[3]),24);
        tracep->fullIData(oldp+145,(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[4]),24);
        tracep->fullIData(oldp+146,(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[0]),32);
        tracep->fullIData(oldp+147,(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[1]),32);
        tracep->fullIData(oldp+148,(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[2]),32);
        tracep->fullIData(oldp+149,(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[3]),32);
        tracep->fullIData(oldp+150,(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[4]),32);
        tracep->fullIData(oldp+151,(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[0]),32);
        tracep->fullIData(oldp+152,(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[1]),32);
        tracep->fullIData(oldp+153,(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[2]),32);
        tracep->fullIData(oldp+154,(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[3]),32);
        tracep->fullIData(oldp+155,(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[4]),32);
        tracep->fullCData(oldp+156,(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__counter),3);
        tracep->fullIData(oldp+157,(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__unnamedblk1__DOT__i),32);
        tracep->fullIData(oldp+158,(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__unnamedblk2__DOT__i),32);
        tracep->fullBit(oldp+159,(vlTOPp->clk));
        tracep->fullBit(oldp+160,(vlTOPp->reset));
        tracep->fullBit(oldp+161,(vlTOPp->ready));
        tracep->fullIData(oldp+162,(vlTOPp->iterations_max),32);
        tracep->fullIData(oldp+163,(vlTOPp->zoom),32);
        tracep->fullIData(oldp+164,(vlTOPp->x_offset),32);
        tracep->fullIData(oldp+165,(vlTOPp->y_offset),32);
        tracep->fullCData(oldp+166,(vlTOPp->r),8);
        tracep->fullCData(oldp+167,(vlTOPp->g),8);
        tracep->fullCData(oldp+168,(vlTOPp->b),8);
        tracep->fullBit(oldp+169,(vlTOPp->first));
        tracep->fullBit(oldp+170,(vlTOPp->last_x));
        tracep->fullBit(oldp+171,(vlTOPp->last_y));
        tracep->fullBit(oldp+172,(vlTOPp->valid));
        tracep->fullBit(oldp+173,(vlTOPp->full_queue[0]));
        tracep->fullBit(oldp+174,(vlTOPp->full_queue[1]));
        tracep->fullBit(oldp+175,(vlTOPp->full_queue[2]));
        tracep->fullBit(oldp+176,(vlTOPp->top__DOT__reset_engine));
        tracep->fullBit(oldp+177,(vlTOPp->top__DOT__fin_wire));
        tracep->fullIData(oldp+178,((VL_RTOIROUND_I_D(32, 
                                                      ((1.67772160000000000e+07 
                                                        * 
                                                        (-320.0 
                                                         + 
                                                         VL_ITOR_D_I(vlTOPp->x_offset))) 
                                                       / 
                                                       VL_ITOR_D_I(
                                                                   VL_MULS_III(32,32,32, (IData)(0x64U), vlTOPp->zoom)))) 
                                     + VL_MULS_III(32,32,32, 
                                                   VL_DIVS_III(32, (IData)(0x1000000U), 
                                                               VL_MULS_III(32,32,32, (IData)(0x64U), vlTOPp->zoom)), 
                                                   vlTOPp->top__DOT__x
                                                   [0U]))),32);
        tracep->fullIData(oldp+179,((VL_RTOIROUND_I_D(32, 
                                                      ((1.67772160000000000e+07 
                                                        * 
                                                        (-240.0 
                                                         + 
                                                         VL_ITOR_D_I(vlTOPp->y_offset))) 
                                                       / 
                                                       VL_ITOR_D_I(
                                                                   VL_MULS_III(32,32,32, (IData)(0x64U), vlTOPp->zoom)))) 
                                     + VL_MULS_III(32,32,32, 
                                                   VL_DIVS_III(32, (IData)(0x1000000U), 
                                                               VL_MULS_III(32,32,32, (IData)(0x64U), vlTOPp->zoom)), 
                                                   vlTOPp->top__DOT__y
                                                   [0U]))),32);
        tracep->fullIData(oldp+180,(VL_RTOIROUND_I_D(32, 
                                                     ((1.67772160000000000e+07 
                                                       * 
                                                       (-320.0 
                                                        + 
                                                        VL_ITOR_D_I(vlTOPp->x_offset))) 
                                                      / 
                                                      VL_ITOR_D_I(
                                                                  VL_MULS_III(32,32,32, (IData)(0x64U), vlTOPp->zoom))))),32);
        tracep->fullIData(oldp+181,(VL_RTOIROUND_I_D(32, 
                                                     ((1.67772160000000000e+07 
                                                       * 
                                                       (-240.0 
                                                        + 
                                                        VL_ITOR_D_I(vlTOPp->y_offset))) 
                                                      / 
                                                      VL_ITOR_D_I(
                                                                  VL_MULS_III(32,32,32, (IData)(0x64U), vlTOPp->zoom))))),32);
        tracep->fullIData(oldp+182,(VL_DIVS_III(32, (IData)(0x1000000U), 
                                                VL_MULS_III(32,32,32, (IData)(0x64U), vlTOPp->zoom))),32);
        tracep->fullIData(oldp+183,((VL_RTOIROUND_I_D(32, 
                                                      ((1.67772160000000000e+07 
                                                        * 
                                                        (-320.0 
                                                         + 
                                                         VL_ITOR_D_I(vlTOPp->x_offset))) 
                                                       / 
                                                       VL_ITOR_D_I(
                                                                   VL_MULS_III(32,32,32, (IData)(0x64U), vlTOPp->zoom)))) 
                                     + VL_MULS_III(32,32,32, 
                                                   VL_DIVS_III(32, (IData)(0x1000000U), 
                                                               VL_MULS_III(32,32,32, (IData)(0x64U), vlTOPp->zoom)), 
                                                   vlTOPp->top__DOT__x
                                                   [1U]))),32);
        tracep->fullIData(oldp+184,((VL_RTOIROUND_I_D(32, 
                                                      ((1.67772160000000000e+07 
                                                        * 
                                                        (-240.0 
                                                         + 
                                                         VL_ITOR_D_I(vlTOPp->y_offset))) 
                                                       / 
                                                       VL_ITOR_D_I(
                                                                   VL_MULS_III(32,32,32, (IData)(0x64U), vlTOPp->zoom)))) 
                                     + VL_MULS_III(32,32,32, 
                                                   VL_DIVS_III(32, (IData)(0x1000000U), 
                                                               VL_MULS_III(32,32,32, (IData)(0x64U), vlTOPp->zoom)), 
                                                   vlTOPp->top__DOT__y
                                                   [1U]))),32);
        tracep->fullIData(oldp+185,((VL_RTOIROUND_I_D(32, 
                                                      ((1.67772160000000000e+07 
                                                        * 
                                                        (-320.0 
                                                         + 
                                                         VL_ITOR_D_I(vlTOPp->x_offset))) 
                                                       / 
                                                       VL_ITOR_D_I(
                                                                   VL_MULS_III(32,32,32, (IData)(0x64U), vlTOPp->zoom)))) 
                                     + VL_MULS_III(32,32,32, 
                                                   VL_DIVS_III(32, (IData)(0x1000000U), 
                                                               VL_MULS_III(32,32,32, (IData)(0x64U), vlTOPp->zoom)), 
                                                   vlTOPp->top__DOT__x
                                                   [2U]))),32);
        tracep->fullIData(oldp+186,((VL_RTOIROUND_I_D(32, 
                                                      ((1.67772160000000000e+07 
                                                        * 
                                                        (-240.0 
                                                         + 
                                                         VL_ITOR_D_I(vlTOPp->y_offset))) 
                                                       / 
                                                       VL_ITOR_D_I(
                                                                   VL_MULS_III(32,32,32, (IData)(0x64U), vlTOPp->zoom)))) 
                                     + VL_MULS_III(32,32,32, 
                                                   VL_DIVS_III(32, (IData)(0x1000000U), 
                                                               VL_MULS_III(32,32,32, (IData)(0x64U), vlTOPp->zoom)), 
                                                   vlTOPp->top__DOT__y
                                                   [2U]))),32);
        tracep->fullIData(oldp+187,(0x20U),32);
        tracep->fullIData(oldp+188,(0x18U),32);
        tracep->fullIData(oldp+189,(3U),32);
        tracep->fullBit(oldp+190,(vlTOPp->top__DOT__en_bus[0]));
        tracep->fullBit(oldp+191,(vlTOPp->top__DOT__en_bus[1]));
        tracep->fullBit(oldp+192,(vlTOPp->top__DOT__en_bus[2]));
        tracep->fullIData(oldp+193,(0x280U),32);
        tracep->fullIData(oldp+194,(0x1e0U),32);
        tracep->fullIData(oldp+195,(0x32U),32);
        tracep->fullIData(oldp+196,(3U),32);
        tracep->fullIData(oldp+197,(0x1000000U),32);
        tracep->fullIData(oldp+198,(8U),32);
        tracep->fullIData(oldp+199,(0x37U),32);
        tracep->fullIData(oldp+200,(5U),32);
    }
}
