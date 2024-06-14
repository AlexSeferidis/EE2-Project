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
        tracep->declBus(c+606,"top DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+607,"top RBG_SIZE", false,-1, 31,0);
        tracep->declBus(c+608,"top NUM_ENGINES", false,-1, 31,0);
        tracep->declBus(c+609,"top ITERATIONS_WIDTH", false,-1, 31,0);
        tracep->declBit(c+578,"top clk", false,-1);
        tracep->declBit(c+579,"top reset", false,-1);
        tracep->declBit(c+580,"top ready", false,-1);
        tracep->declBus(c+581,"top iterations_max", false,-1, 31,0);
        tracep->declBus(c+582,"top zoom", false,-1, 9,0);
        tracep->declBus(c+583,"top x_offset", false,-1, 9,0);
        tracep->declBus(c+584,"top y_offset", false,-1, 9,0);
        tracep->declBus(c+585,"top r", false,-1, 7,0);
        tracep->declBus(c+586,"top g", false,-1, 7,0);
        tracep->declBus(c+587,"top b", false,-1, 7,0);
        tracep->declBit(c+588,"top first", false,-1);
        tracep->declBit(c+589,"top last_x", false,-1);
        tracep->declBit(c+590,"top last_y", false,-1);
        tracep->declBit(c+591,"top valid", false,-1);
        tracep->declBus(c+7,"top colour_o_wire", false,-1, 23,0);
        tracep->declBus(c+8,"top xpixel_wire", false,-1, 9,0);
        tracep->declBus(c+9,"top ypixel_wire", false,-1, 9,0);
        {int i; for (i=0; i<6; i++) {
                tracep->declBus(c+266+i*1,"top colour_bus_o", true,(i+0), 23,0);}}
        tracep->declBit(c+610,"top reset_engine", false,-1);
        tracep->declBit(c+592,"top fin_wire", false,-1);
        tracep->declBit(c+363,"top en_wire", false,-1);
        tracep->declBus(c+284,"top fin_bus", false,-1, 5,0);
        {int i; for (i=0; i<6; i++) {
                tracep->declBus(c+10+i*1,"top x", true,(i+0), 9,0);}}
        {int i; for (i=0; i<6; i++) {
                tracep->declBus(c+16+i*1,"top y", true,(i+0), 9,0);}}
        {int i; for (i=0; i<6; i++) {
                tracep->declBus(c+22+i*1,"top iterations_bus", true,(i+0), 31,0);}}
        {int i; for (i=0; i<6; i++) {
                tracep->declBus(c+321+i*1,"top xpixel_bus", true,(i+0), 9,0);}}
        {int i; for (i=0; i<6; i++) {
                tracep->declBus(c+327+i*1,"top ypixel_bus", true,(i+0), 9,0);}}
        tracep->declBus(c+364,"top en_bus", false,-1, 5,0);
        {int i; for (i=0; i<6; i++) {
                tracep->declBus(c+333+i*1,"top colour_bus_i", true,(i+0), 23,0);}}
        tracep->declBus(c+365,"top full_queue_bus", false,-1, 5,0);
        tracep->declBus(c+366,"top match_bus", false,-1, 5,0);
        tracep->declBus(c+367,"top j", false,-1, 31,0);
        tracep->declBus(c+611,"top unnamedblk1 k", false,-1, 31,0);
        tracep->declBus(c+606,"top distributor PIXEL_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+612,"top distributor SCREEN_WIDTH", false,-1, 31,0);
        tracep->declBus(c+613,"top distributor SCREEN_HEIGHT", false,-1, 31,0);
        tracep->declBus(c+608,"top distributor NUM_ENGINES", false,-1, 31,0);
        tracep->declBit(c+578,"top distributor clk", false,-1);
        tracep->declBit(c+579,"top distributor reset", false,-1);
        tracep->declBit(c+592,"top distributor fin_flag", false,-1);
        {int i; for (i=0; i<6; i++) {
                tracep->declBus(c+28+i*1,"top distributor x", true,(i+0), 9,0);}}
        {int i; for (i=0; i<6; i++) {
                tracep->declBus(c+34+i*1,"top distributor y", true,(i+0), 9,0);}}
        tracep->declBus(c+40,"top distributor x0", false,-1, 9,0);
        tracep->declBus(c+41,"top distributor y0", false,-1, 9,0);
        tracep->declBus(c+611,"top distributor unnamedblk1 i", false,-1, 31,0);
        tracep->declBus(c+609,"top lut_rom DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+607,"top lut_rom RBG_SIZE", false,-1, 31,0);
        tracep->declBus(c+614,"top lut_rom MAX_ITERATION", false,-1, 31,0);
        tracep->declBus(c+608,"top lut_rom NUM_ENGINES", false,-1, 31,0);
        tracep->declBus(c+615,"top lut_rom LUT_SIZE", false,-1, 31,0);
        {int i; for (i=0; i<6; i++) {
                tracep->declBus(c+42+i*1,"top lut_rom iterations", true,(i+0), 31,0);}}
        {int i; for (i=0; i<6; i++) {
                tracep->declBus(c+48+i*1,"top lut_rom rgb_val", true,(i+0), 23,0);}}
        tracep->declBus(c+616,"top lut_rom unnamedblk1 step_size", false,-1, 31,0);
        tracep->declBus(c+611,"top lut_rom unnamedblk1 unnamedblk2 i", false,-1, 31,0);
        tracep->declBus(c+606,"top combinator_block DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+607,"top combinator_block RBG_SIZE", false,-1, 31,0);
        tracep->declBus(c+612,"top combinator_block SCREEN_WIDTH", false,-1, 31,0);
        tracep->declBus(c+613,"top combinator_block SCREEN_HEIGHT", false,-1, 31,0);
        tracep->declBit(c+578,"top combinator_block clk", false,-1);
        tracep->declBit(c+579,"top combinator_block reset", false,-1);
        tracep->declBus(c+593,"top combinator_block colour_i", false,-1, 23,0);
        tracep->declBit(c+363,"top combinator_block en", false,-1);
        tracep->declBit(c+580,"top combinator_block ready", false,-1);
        tracep->declBit(c+592,"top combinator_block fin_flag", false,-1);
        tracep->declBus(c+8,"top combinator_block next_xpixel", false,-1, 9,0);
        tracep->declBus(c+9,"top combinator_block next_ypixel", false,-1, 9,0);
        tracep->declBus(c+7,"top combinator_block colour_o", false,-1, 23,0);
        tracep->declBit(c+588,"top combinator_block first", false,-1);
        tracep->declBit(c+589,"top combinator_block last_x", false,-1);
        tracep->declBit(c+590,"top combinator_block last_y", false,-1);
        tracep->declBit(c+591,"top combinator_block valid", false,-1);
        tracep->declBus(c+54,"top combinator_block xpixel", false,-1, 9,0);
        tracep->declBus(c+55,"top combinator_block ypixel", false,-1, 9,0);
        tracep->declBus(c+606,"top genblk1[0] queue_block DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+606,"top genblk1[0] queue_block QUEUE_SIZE", false,-1, 31,0);
        tracep->declBus(c+617,"top genblk1[0] queue_block COUNTER_SIZE", false,-1, 31,0);
        tracep->declBus(c+607,"top genblk1[0] queue_block RBG_SIZE", false,-1, 31,0);
        tracep->declBit(c+578,"top genblk1[0] queue_block clk", false,-1);
        tracep->declBit(c+579,"top genblk1[0] queue_block reset", false,-1);
        tracep->declBit(c+285,"top genblk1[0] queue_block fin_flag", false,-1);
        tracep->declBus(c+339,"top genblk1[0] queue_block colour_i", false,-1, 23,0);
        tracep->declBus(c+340,"top genblk1[0] queue_block xpixel_i", false,-1, 9,0);
        tracep->declBus(c+341,"top genblk1[0] queue_block ypixel_i", false,-1, 9,0);
        tracep->declBus(c+8,"top genblk1[0] queue_block xpixel_check", false,-1, 9,0);
        tracep->declBus(c+9,"top genblk1[0] queue_block ypixel_check", false,-1, 9,0);
        tracep->declBus(c+272,"top genblk1[0] queue_block colour_o", false,-1, 23,0);
        tracep->declBit(c+368,"top genblk1[0] queue_block full_queue", false,-1);
        tracep->declBit(c+369,"top genblk1[0] queue_block en", false,-1);
        tracep->declBit(c+370,"top genblk1[0] queue_block match", false,-1);
        {int i; for (i=0; i<10; i++) {
                tracep->declBus(c+371+i*1,"top genblk1[0] queue_block colour_queue", true,(i+0), 23,0);}}
        {int i; for (i=0; i<10; i++) {
                tracep->declBus(c+381+i*1,"top genblk1[0] queue_block xqueue", true,(i+0), 9,0);}}
        {int i; for (i=0; i<10; i++) {
                tracep->declBus(c+391+i*1,"top genblk1[0] queue_block yqueue", true,(i+0), 9,0);}}
        tracep->declBus(c+401,"top genblk1[0] queue_block counter", false,-1, 3,0);
        tracep->declBus(c+342,"top genblk1[0] queue_block prev_xpixel", false,-1, 9,0);
        tracep->declBus(c+1,"top genblk1[0] queue_block unnamedblk1 i", false,-1, 31,0);
        tracep->declBus(c+56,"top genblk1[0] queue_block unnamedblk2 i", false,-1, 31,0);
        tracep->declBus(c+273,"top genblk1[0] queue_block unnamedblk3 i", false,-1, 31,0);
        tracep->declBus(c+606,"top genblk1[1] queue_block DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+606,"top genblk1[1] queue_block QUEUE_SIZE", false,-1, 31,0);
        tracep->declBus(c+617,"top genblk1[1] queue_block COUNTER_SIZE", false,-1, 31,0);
        tracep->declBus(c+607,"top genblk1[1] queue_block RBG_SIZE", false,-1, 31,0);
        tracep->declBit(c+578,"top genblk1[1] queue_block clk", false,-1);
        tracep->declBit(c+579,"top genblk1[1] queue_block reset", false,-1);
        tracep->declBit(c+286,"top genblk1[1] queue_block fin_flag", false,-1);
        tracep->declBus(c+343,"top genblk1[1] queue_block colour_i", false,-1, 23,0);
        tracep->declBus(c+344,"top genblk1[1] queue_block xpixel_i", false,-1, 9,0);
        tracep->declBus(c+345,"top genblk1[1] queue_block ypixel_i", false,-1, 9,0);
        tracep->declBus(c+8,"top genblk1[1] queue_block xpixel_check", false,-1, 9,0);
        tracep->declBus(c+9,"top genblk1[1] queue_block ypixel_check", false,-1, 9,0);
        tracep->declBus(c+274,"top genblk1[1] queue_block colour_o", false,-1, 23,0);
        tracep->declBit(c+402,"top genblk1[1] queue_block full_queue", false,-1);
        tracep->declBit(c+403,"top genblk1[1] queue_block en", false,-1);
        tracep->declBit(c+404,"top genblk1[1] queue_block match", false,-1);
        {int i; for (i=0; i<10; i++) {
                tracep->declBus(c+405+i*1,"top genblk1[1] queue_block colour_queue", true,(i+0), 23,0);}}
        {int i; for (i=0; i<10; i++) {
                tracep->declBus(c+415+i*1,"top genblk1[1] queue_block xqueue", true,(i+0), 9,0);}}
        {int i; for (i=0; i<10; i++) {
                tracep->declBus(c+425+i*1,"top genblk1[1] queue_block yqueue", true,(i+0), 9,0);}}
        tracep->declBus(c+435,"top genblk1[1] queue_block counter", false,-1, 3,0);
        tracep->declBus(c+346,"top genblk1[1] queue_block prev_xpixel", false,-1, 9,0);
        tracep->declBus(c+2,"top genblk1[1] queue_block unnamedblk1 i", false,-1, 31,0);
        tracep->declBus(c+57,"top genblk1[1] queue_block unnamedblk2 i", false,-1, 31,0);
        tracep->declBus(c+275,"top genblk1[1] queue_block unnamedblk3 i", false,-1, 31,0);
        tracep->declBus(c+606,"top genblk1[2] queue_block DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+606,"top genblk1[2] queue_block QUEUE_SIZE", false,-1, 31,0);
        tracep->declBus(c+617,"top genblk1[2] queue_block COUNTER_SIZE", false,-1, 31,0);
        tracep->declBus(c+607,"top genblk1[2] queue_block RBG_SIZE", false,-1, 31,0);
        tracep->declBit(c+578,"top genblk1[2] queue_block clk", false,-1);
        tracep->declBit(c+579,"top genblk1[2] queue_block reset", false,-1);
        tracep->declBit(c+287,"top genblk1[2] queue_block fin_flag", false,-1);
        tracep->declBus(c+347,"top genblk1[2] queue_block colour_i", false,-1, 23,0);
        tracep->declBus(c+348,"top genblk1[2] queue_block xpixel_i", false,-1, 9,0);
        tracep->declBus(c+349,"top genblk1[2] queue_block ypixel_i", false,-1, 9,0);
        tracep->declBus(c+8,"top genblk1[2] queue_block xpixel_check", false,-1, 9,0);
        tracep->declBus(c+9,"top genblk1[2] queue_block ypixel_check", false,-1, 9,0);
        tracep->declBus(c+276,"top genblk1[2] queue_block colour_o", false,-1, 23,0);
        tracep->declBit(c+436,"top genblk1[2] queue_block full_queue", false,-1);
        tracep->declBit(c+437,"top genblk1[2] queue_block en", false,-1);
        tracep->declBit(c+438,"top genblk1[2] queue_block match", false,-1);
        {int i; for (i=0; i<10; i++) {
                tracep->declBus(c+439+i*1,"top genblk1[2] queue_block colour_queue", true,(i+0), 23,0);}}
        {int i; for (i=0; i<10; i++) {
                tracep->declBus(c+449+i*1,"top genblk1[2] queue_block xqueue", true,(i+0), 9,0);}}
        {int i; for (i=0; i<10; i++) {
                tracep->declBus(c+459+i*1,"top genblk1[2] queue_block yqueue", true,(i+0), 9,0);}}
        tracep->declBus(c+469,"top genblk1[2] queue_block counter", false,-1, 3,0);
        tracep->declBus(c+350,"top genblk1[2] queue_block prev_xpixel", false,-1, 9,0);
        tracep->declBus(c+3,"top genblk1[2] queue_block unnamedblk1 i", false,-1, 31,0);
        tracep->declBus(c+58,"top genblk1[2] queue_block unnamedblk2 i", false,-1, 31,0);
        tracep->declBus(c+277,"top genblk1[2] queue_block unnamedblk3 i", false,-1, 31,0);
        tracep->declBus(c+606,"top genblk1[3] queue_block DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+606,"top genblk1[3] queue_block QUEUE_SIZE", false,-1, 31,0);
        tracep->declBus(c+617,"top genblk1[3] queue_block COUNTER_SIZE", false,-1, 31,0);
        tracep->declBus(c+607,"top genblk1[3] queue_block RBG_SIZE", false,-1, 31,0);
        tracep->declBit(c+578,"top genblk1[3] queue_block clk", false,-1);
        tracep->declBit(c+579,"top genblk1[3] queue_block reset", false,-1);
        tracep->declBit(c+288,"top genblk1[3] queue_block fin_flag", false,-1);
        tracep->declBus(c+351,"top genblk1[3] queue_block colour_i", false,-1, 23,0);
        tracep->declBus(c+352,"top genblk1[3] queue_block xpixel_i", false,-1, 9,0);
        tracep->declBus(c+353,"top genblk1[3] queue_block ypixel_i", false,-1, 9,0);
        tracep->declBus(c+8,"top genblk1[3] queue_block xpixel_check", false,-1, 9,0);
        tracep->declBus(c+9,"top genblk1[3] queue_block ypixel_check", false,-1, 9,0);
        tracep->declBus(c+278,"top genblk1[3] queue_block colour_o", false,-1, 23,0);
        tracep->declBit(c+470,"top genblk1[3] queue_block full_queue", false,-1);
        tracep->declBit(c+471,"top genblk1[3] queue_block en", false,-1);
        tracep->declBit(c+472,"top genblk1[3] queue_block match", false,-1);
        {int i; for (i=0; i<10; i++) {
                tracep->declBus(c+473+i*1,"top genblk1[3] queue_block colour_queue", true,(i+0), 23,0);}}
        {int i; for (i=0; i<10; i++) {
                tracep->declBus(c+483+i*1,"top genblk1[3] queue_block xqueue", true,(i+0), 9,0);}}
        {int i; for (i=0; i<10; i++) {
                tracep->declBus(c+493+i*1,"top genblk1[3] queue_block yqueue", true,(i+0), 9,0);}}
        tracep->declBus(c+503,"top genblk1[3] queue_block counter", false,-1, 3,0);
        tracep->declBus(c+354,"top genblk1[3] queue_block prev_xpixel", false,-1, 9,0);
        tracep->declBus(c+4,"top genblk1[3] queue_block unnamedblk1 i", false,-1, 31,0);
        tracep->declBus(c+59,"top genblk1[3] queue_block unnamedblk2 i", false,-1, 31,0);
        tracep->declBus(c+279,"top genblk1[3] queue_block unnamedblk3 i", false,-1, 31,0);
        tracep->declBus(c+606,"top genblk1[4] queue_block DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+606,"top genblk1[4] queue_block QUEUE_SIZE", false,-1, 31,0);
        tracep->declBus(c+617,"top genblk1[4] queue_block COUNTER_SIZE", false,-1, 31,0);
        tracep->declBus(c+607,"top genblk1[4] queue_block RBG_SIZE", false,-1, 31,0);
        tracep->declBit(c+578,"top genblk1[4] queue_block clk", false,-1);
        tracep->declBit(c+579,"top genblk1[4] queue_block reset", false,-1);
        tracep->declBit(c+289,"top genblk1[4] queue_block fin_flag", false,-1);
        tracep->declBus(c+355,"top genblk1[4] queue_block colour_i", false,-1, 23,0);
        tracep->declBus(c+356,"top genblk1[4] queue_block xpixel_i", false,-1, 9,0);
        tracep->declBus(c+357,"top genblk1[4] queue_block ypixel_i", false,-1, 9,0);
        tracep->declBus(c+8,"top genblk1[4] queue_block xpixel_check", false,-1, 9,0);
        tracep->declBus(c+9,"top genblk1[4] queue_block ypixel_check", false,-1, 9,0);
        tracep->declBus(c+280,"top genblk1[4] queue_block colour_o", false,-1, 23,0);
        tracep->declBit(c+504,"top genblk1[4] queue_block full_queue", false,-1);
        tracep->declBit(c+505,"top genblk1[4] queue_block en", false,-1);
        tracep->declBit(c+506,"top genblk1[4] queue_block match", false,-1);
        {int i; for (i=0; i<10; i++) {
                tracep->declBus(c+507+i*1,"top genblk1[4] queue_block colour_queue", true,(i+0), 23,0);}}
        {int i; for (i=0; i<10; i++) {
                tracep->declBus(c+517+i*1,"top genblk1[4] queue_block xqueue", true,(i+0), 9,0);}}
        {int i; for (i=0; i<10; i++) {
                tracep->declBus(c+527+i*1,"top genblk1[4] queue_block yqueue", true,(i+0), 9,0);}}
        tracep->declBus(c+537,"top genblk1[4] queue_block counter", false,-1, 3,0);
        tracep->declBus(c+358,"top genblk1[4] queue_block prev_xpixel", false,-1, 9,0);
        tracep->declBus(c+5,"top genblk1[4] queue_block unnamedblk1 i", false,-1, 31,0);
        tracep->declBus(c+60,"top genblk1[4] queue_block unnamedblk2 i", false,-1, 31,0);
        tracep->declBus(c+281,"top genblk1[4] queue_block unnamedblk3 i", false,-1, 31,0);
        tracep->declBus(c+606,"top genblk1[5] queue_block DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+606,"top genblk1[5] queue_block QUEUE_SIZE", false,-1, 31,0);
        tracep->declBus(c+617,"top genblk1[5] queue_block COUNTER_SIZE", false,-1, 31,0);
        tracep->declBus(c+607,"top genblk1[5] queue_block RBG_SIZE", false,-1, 31,0);
        tracep->declBit(c+578,"top genblk1[5] queue_block clk", false,-1);
        tracep->declBit(c+579,"top genblk1[5] queue_block reset", false,-1);
        tracep->declBit(c+290,"top genblk1[5] queue_block fin_flag", false,-1);
        tracep->declBus(c+359,"top genblk1[5] queue_block colour_i", false,-1, 23,0);
        tracep->declBus(c+360,"top genblk1[5] queue_block xpixel_i", false,-1, 9,0);
        tracep->declBus(c+361,"top genblk1[5] queue_block ypixel_i", false,-1, 9,0);
        tracep->declBus(c+8,"top genblk1[5] queue_block xpixel_check", false,-1, 9,0);
        tracep->declBus(c+9,"top genblk1[5] queue_block ypixel_check", false,-1, 9,0);
        tracep->declBus(c+282,"top genblk1[5] queue_block colour_o", false,-1, 23,0);
        tracep->declBit(c+538,"top genblk1[5] queue_block full_queue", false,-1);
        tracep->declBit(c+539,"top genblk1[5] queue_block en", false,-1);
        tracep->declBit(c+540,"top genblk1[5] queue_block match", false,-1);
        {int i; for (i=0; i<10; i++) {
                tracep->declBus(c+541+i*1,"top genblk1[5] queue_block colour_queue", true,(i+0), 23,0);}}
        {int i; for (i=0; i<10; i++) {
                tracep->declBus(c+551+i*1,"top genblk1[5] queue_block xqueue", true,(i+0), 9,0);}}
        {int i; for (i=0; i<10; i++) {
                tracep->declBus(c+561+i*1,"top genblk1[5] queue_block yqueue", true,(i+0), 9,0);}}
        tracep->declBus(c+571,"top genblk1[5] queue_block counter", false,-1, 3,0);
        tracep->declBus(c+362,"top genblk1[5] queue_block prev_xpixel", false,-1, 9,0);
        tracep->declBus(c+6,"top genblk1[5] queue_block unnamedblk1 i", false,-1, 31,0);
        tracep->declBus(c+61,"top genblk1[5] queue_block unnamedblk2 i", false,-1, 31,0);
        tracep->declBus(c+283,"top genblk1[5] queue_block unnamedblk3 i", false,-1, 31,0);
        tracep->declBus(c+606,"top genblk1[0] engine PIXEL_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+618,"top genblk1[0] engine ENGINE_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+619,"top genblk1[0] engine ENGINE_FRACT_WIDTH", false,-1, 31,0);
        tracep->declBus(c+608,"top genblk1[0] engine ITERATIONS_WIDTH", false,-1, 31,0);
        tracep->declBit(c+578,"top genblk1[0] engine clk", false,-1);
        tracep->declBit(c+620,"top genblk1[0] engine reset", false,-1);
        tracep->declBus(c+594,"top genblk1[0] engine iterations_max", false,-1, 5,0);
        tracep->declBus(c+62,"top genblk1[0] engine x0_", false,-1, 9,0);
        tracep->declBus(c+63,"top genblk1[0] engine y0_", false,-1, 9,0);
        tracep->declBus(c+595,"top genblk1[0] engine zoom", false,-1, 2,0);
        tracep->declBus(c+596,"top genblk1[0] engine x_offset", false,-1, 24,0);
        tracep->declBus(c+597,"top genblk1[0] engine y_offset", false,-1, 24,0);
        tracep->declBit(c+572,"top genblk1[0] engine full_queue", false,-1);
        tracep->declBit(c+291,"top genblk1[0] engine en_pixel_map", false,-1);
        tracep->declBus(c+64,"top genblk1[0] engine iterations", false,-1, 5,0);
        tracep->declBus(c+65,"top genblk1[0] engine xpixel", false,-1, 9,0);
        tracep->declBus(c+66,"top genblk1[0] engine ypixel", false,-1, 9,0);
        tracep->declBus(c+621,"top genblk1[0] engine ENGINE_INT_WIDTH", false,-1, 31,0);
        tracep->declBus(c+67,"top genblk1[0] engine x", false,-1, 24,0);
        tracep->declBus(c+68,"top genblk1[0] engine y", false,-1, 24,0);
        tracep->declBit(c+598,"top genblk1[0] engine finished", false,-1);
        tracep->declBit(c+236,"top genblk1[0] engine distributor_ready", false,-1);
        tracep->declBus(c+64,"top genblk1[0] engine curr_iterations", false,-1, 5,0);
        tracep->declBus(c+69,"top genblk1[0] engine zr", false,-1, 24,0);
        tracep->declBus(c+70,"top genblk1[0] engine zi", false,-1, 24,0);
        tracep->declBus(c+71,"top genblk1[0] engine zr_next", false,-1, 24,0);
        tracep->declBus(c+237,"top genblk1[0] engine zi_next", false,-1, 24,0);
        tracep->declBus(c+72,"top genblk1[0] engine zr2", false,-1, 24,0);
        tracep->declBus(c+73,"top genblk1[0] engine zi2", false,-1, 24,0);
        tracep->declBus(c+238,"top genblk1[0] engine zr2_next", false,-1, 24,0);
        tracep->declBus(c+239,"top genblk1[0] engine zi2_next", false,-1, 24,0);
        tracep->declBus(c+240,"top genblk1[0] engine zrzi", false,-1, 24,0);
        tracep->declBit(c+292,"top genblk1[0] engine en_stage_1", false,-1);
        tracep->declBit(c+293,"top genblk1[0] engine en_stage_2", false,-1);
        tracep->declBit(c+294,"top genblk1[0] engine init", false,-1);
        tracep->declBus(c+74,"top genblk1[0] engine distance", false,-1, 24,0);
        tracep->declBus(c+622,"top genblk1[0] engine max_distance", false,-1, 24,0);
        tracep->declBus(c+606,"top genblk1[0] engine pixel_map PIXEL_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+618,"top genblk1[0] engine pixel_map ENGINE_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+619,"top genblk1[0] engine pixel_map ENGINE_FRACT_WIDTH", false,-1, 31,0);
        tracep->declBit(c+578,"top genblk1[0] engine pixel_map clk", false,-1);
        tracep->declBit(c+620,"top genblk1[0] engine pixel_map reset", false,-1);
        tracep->declBit(c+291,"top genblk1[0] engine pixel_map en", false,-1);
        tracep->declBus(c+62,"top genblk1[0] engine pixel_map pixel_x_in", false,-1, 9,0);
        tracep->declBus(c+63,"top genblk1[0] engine pixel_map pixel_y_in", false,-1, 9,0);
        tracep->declBus(c+596,"top genblk1[0] engine pixel_map x_offset", false,-1, 24,0);
        tracep->declBus(c+597,"top genblk1[0] engine pixel_map y_offset", false,-1, 24,0);
        tracep->declBus(c+67,"top genblk1[0] engine pixel_map real_x", false,-1, 24,0);
        tracep->declBus(c+68,"top genblk1[0] engine pixel_map imag_y", false,-1, 24,0);
        tracep->declBus(c+65,"top genblk1[0] engine pixel_map pixel_x_out", false,-1, 9,0);
        tracep->declBus(c+66,"top genblk1[0] engine pixel_map pixel_y_out", false,-1, 9,0);
        tracep->declBus(c+623,"top genblk1[0] engine pixel_map scale_factor", false,-1, 24,0);
        tracep->declBus(c+599,"top genblk1[0] engine pixel_map r_min", false,-1, 24,0);
        tracep->declBus(c+600,"top genblk1[0] engine pixel_map i_min", false,-1, 24,0);
        tracep->declBus(c+75,"top genblk1[0] engine pixel_map r_gradient", false,-1, 24,0);
        tracep->declBus(c+76,"top genblk1[0] engine pixel_map i_gradient", false,-1, 24,0);
        tracep->declBus(c+77,"top genblk1[0] engine pixel_map pixel_x_fixed", false,-1, 24,0);
        tracep->declBus(c+78,"top genblk1[0] engine pixel_map pixel_y_fixed", false,-1, 24,0);
        tracep->declBus(c+618,"top genblk1[0] engine pixel_map M1 ENGINE_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+619,"top genblk1[0] engine pixel_map M1 ENGINE_FRACT_WIDTH", false,-1, 31,0);
        tracep->declBus(c+624,"top genblk1[0] engine pixel_map M1 a", false,-1, 24,0);
        tracep->declBus(c+77,"top genblk1[0] engine pixel_map M1 b", false,-1, 24,0);
        tracep->declBit(c+620,"top genblk1[0] engine pixel_map M1 rst", false,-1);
        tracep->declBus(c+75,"top genblk1[0] engine pixel_map M1 result", false,-1, 24,0);
        tracep->declBus(c+621,"top genblk1[0] engine pixel_map M1 ENGINE_INT_WIDTH", false,-1, 31,0);
        tracep->declQuad(c+79,"top genblk1[0] engine pixel_map M1 product", false,-1, 49,0);
        tracep->declBus(c+618,"top genblk1[0] engine pixel_map M2 ENGINE_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+619,"top genblk1[0] engine pixel_map M2 ENGINE_FRACT_WIDTH", false,-1, 31,0);
        tracep->declBus(c+624,"top genblk1[0] engine pixel_map M2 a", false,-1, 24,0);
        tracep->declBus(c+78,"top genblk1[0] engine pixel_map M2 b", false,-1, 24,0);
        tracep->declBit(c+620,"top genblk1[0] engine pixel_map M2 rst", false,-1);
        tracep->declBus(c+76,"top genblk1[0] engine pixel_map M2 result", false,-1, 24,0);
        tracep->declBus(c+621,"top genblk1[0] engine pixel_map M2 ENGINE_INT_WIDTH", false,-1, 31,0);
        tracep->declQuad(c+81,"top genblk1[0] engine pixel_map M2 product", false,-1, 49,0);
        tracep->declBus(c+608,"top genblk1[0] engine R0 WIDTH", false,-1, 31,0);
        tracep->declBit(c+578,"top genblk1[0] engine R0 clk", false,-1);
        tracep->declBit(c+294,"top genblk1[0] engine R0 rst", false,-1);
        tracep->declBit(c+293,"top genblk1[0] engine R0 en", false,-1);
        tracep->declBus(c+83,"top genblk1[0] engine R0 in", false,-1, 5,0);
        tracep->declBus(c+64,"top genblk1[0] engine R0 out", false,-1, 5,0);
        tracep->declBus(c+618,"top genblk1[0] engine calc_stage_1 ENGINE_DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+578,"top genblk1[0] engine calc_stage_1 clk", false,-1);
        tracep->declBit(c+294,"top genblk1[0] engine calc_stage_1 reset", false,-1);
        tracep->declBit(c+292,"top genblk1[0] engine calc_stage_1 en", false,-1);
        tracep->declBus(c+71,"top genblk1[0] engine calc_stage_1 zr_next", false,-1, 24,0);
        tracep->declBus(c+237,"top genblk1[0] engine calc_stage_1 zi_next", false,-1, 24,0);
        tracep->declBus(c+69,"top genblk1[0] engine calc_stage_1 zr", false,-1, 24,0);
        tracep->declBus(c+70,"top genblk1[0] engine calc_stage_1 zi", false,-1, 24,0);
        tracep->declBus(c+618,"top genblk1[0] engine calc_stage_1 R1 WIDTH", false,-1, 31,0);
        tracep->declBit(c+578,"top genblk1[0] engine calc_stage_1 R1 clk", false,-1);
        tracep->declBit(c+294,"top genblk1[0] engine calc_stage_1 R1 rst", false,-1);
        tracep->declBit(c+292,"top genblk1[0] engine calc_stage_1 R1 en", false,-1);
        tracep->declBus(c+71,"top genblk1[0] engine calc_stage_1 R1 in", false,-1, 24,0);
        tracep->declBus(c+69,"top genblk1[0] engine calc_stage_1 R1 out", false,-1, 24,0);
        tracep->declBus(c+618,"top genblk1[0] engine calc_stage_1 R2 WIDTH", false,-1, 31,0);
        tracep->declBit(c+578,"top genblk1[0] engine calc_stage_1 R2 clk", false,-1);
        tracep->declBit(c+294,"top genblk1[0] engine calc_stage_1 R2 rst", false,-1);
        tracep->declBit(c+292,"top genblk1[0] engine calc_stage_1 R2 en", false,-1);
        tracep->declBus(c+237,"top genblk1[0] engine calc_stage_1 R2 in", false,-1, 24,0);
        tracep->declBus(c+70,"top genblk1[0] engine calc_stage_1 R2 out", false,-1, 24,0);
        tracep->declBus(c+618,"top genblk1[0] engine M5 ENGINE_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+619,"top genblk1[0] engine M5 ENGINE_FRACT_WIDTH", false,-1, 31,0);
        tracep->declBus(c+69,"top genblk1[0] engine M5 a", false,-1, 24,0);
        tracep->declBus(c+69,"top genblk1[0] engine M5 b", false,-1, 24,0);
        tracep->declBit(c+294,"top genblk1[0] engine M5 rst", false,-1);
        tracep->declBus(c+238,"top genblk1[0] engine M5 result", false,-1, 24,0);
        tracep->declBus(c+621,"top genblk1[0] engine M5 ENGINE_INT_WIDTH", false,-1, 31,0);
        tracep->declQuad(c+84,"top genblk1[0] engine M5 product", false,-1, 49,0);
        tracep->declBus(c+618,"top genblk1[0] engine M6 ENGINE_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+619,"top genblk1[0] engine M6 ENGINE_FRACT_WIDTH", false,-1, 31,0);
        tracep->declBus(c+70,"top genblk1[0] engine M6 a", false,-1, 24,0);
        tracep->declBus(c+70,"top genblk1[0] engine M6 b", false,-1, 24,0);
        tracep->declBit(c+294,"top genblk1[0] engine M6 rst", false,-1);
        tracep->declBus(c+239,"top genblk1[0] engine M6 result", false,-1, 24,0);
        tracep->declBus(c+621,"top genblk1[0] engine M6 ENGINE_INT_WIDTH", false,-1, 31,0);
        tracep->declQuad(c+86,"top genblk1[0] engine M6 product", false,-1, 49,0);
        tracep->declBus(c+618,"top genblk1[0] engine calc_stage_2 ENGINE_DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+578,"top genblk1[0] engine calc_stage_2 clk", false,-1);
        tracep->declBit(c+294,"top genblk1[0] engine calc_stage_2 reset", false,-1);
        tracep->declBit(c+293,"top genblk1[0] engine calc_stage_2 en", false,-1);
        tracep->declBus(c+238,"top genblk1[0] engine calc_stage_2 zr2_next", false,-1, 24,0);
        tracep->declBus(c+239,"top genblk1[0] engine calc_stage_2 zi2_next", false,-1, 24,0);
        tracep->declBus(c+72,"top genblk1[0] engine calc_stage_2 zr2", false,-1, 24,0);
        tracep->declBus(c+73,"top genblk1[0] engine calc_stage_2 zi2", false,-1, 24,0);
        tracep->declBus(c+618,"top genblk1[0] engine calc_stage_2 R3 WIDTH", false,-1, 31,0);
        tracep->declBit(c+578,"top genblk1[0] engine calc_stage_2 R3 clk", false,-1);
        tracep->declBit(c+294,"top genblk1[0] engine calc_stage_2 R3 rst", false,-1);
        tracep->declBit(c+293,"top genblk1[0] engine calc_stage_2 R3 en", false,-1);
        tracep->declBus(c+238,"top genblk1[0] engine calc_stage_2 R3 in", false,-1, 24,0);
        tracep->declBus(c+72,"top genblk1[0] engine calc_stage_2 R3 out", false,-1, 24,0);
        tracep->declBus(c+618,"top genblk1[0] engine calc_stage_2 R4 WIDTH", false,-1, 31,0);
        tracep->declBit(c+578,"top genblk1[0] engine calc_stage_2 R4 clk", false,-1);
        tracep->declBit(c+294,"top genblk1[0] engine calc_stage_2 R4 rst", false,-1);
        tracep->declBit(c+293,"top genblk1[0] engine calc_stage_2 R4 en", false,-1);
        tracep->declBus(c+239,"top genblk1[0] engine calc_stage_2 R4 in", false,-1, 24,0);
        tracep->declBus(c+73,"top genblk1[0] engine calc_stage_2 R4 out", false,-1, 24,0);
        tracep->declBus(c+618,"top genblk1[0] engine M7 ENGINE_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+619,"top genblk1[0] engine M7 ENGINE_FRACT_WIDTH", false,-1, 31,0);
        tracep->declBus(c+69,"top genblk1[0] engine M7 a", false,-1, 24,0);
        tracep->declBus(c+70,"top genblk1[0] engine M7 b", false,-1, 24,0);
        tracep->declBit(c+294,"top genblk1[0] engine M7 rst", false,-1);
        tracep->declBus(c+240,"top genblk1[0] engine M7 result", false,-1, 24,0);
        tracep->declBus(c+621,"top genblk1[0] engine M7 ENGINE_INT_WIDTH", false,-1, 31,0);
        tracep->declQuad(c+88,"top genblk1[0] engine M7 product", false,-1, 49,0);
        tracep->declBit(c+578,"top genblk1[0] engine SM clk", false,-1);
        tracep->declBit(c+620,"top genblk1[0] engine SM rst", false,-1);
        tracep->declBit(c+598,"top genblk1[0] engine SM finished", false,-1);
        tracep->declBit(c+572,"top genblk1[0] engine SM full_queue", false,-1);
        tracep->declBit(c+236,"top genblk1[0] engine SM distributor_ready", false,-1);
        tracep->declBit(c+294,"top genblk1[0] engine SM init", false,-1);
        tracep->declBit(c+291,"top genblk1[0] engine SM en_pixel_map", false,-1);
        tracep->declBit(c+292,"top genblk1[0] engine SM en_stage_1", false,-1);
        tracep->declBit(c+293,"top genblk1[0] engine SM en_stage_2", false,-1);
        tracep->declBus(c+625,"top genblk1[0] engine SM INIT", false,-1, 31,0);
        tracep->declBus(c+626,"top genblk1[0] engine SM CALC_STAGE_1", false,-1, 31,0);
        tracep->declBus(c+627,"top genblk1[0] engine SM CALC_STAGE_2", false,-1, 31,0);
        tracep->declBus(c+628,"top genblk1[0] engine SM ESCAPE", false,-1, 31,0);
        tracep->declBus(c+90,"top genblk1[0] engine SM state", false,-1, 1,0);
        tracep->declBus(c+295,"top genblk1[0] engine SM next", false,-1, 1,0);
        tracep->declBus(c+606,"top genblk1[1] engine PIXEL_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+618,"top genblk1[1] engine ENGINE_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+619,"top genblk1[1] engine ENGINE_FRACT_WIDTH", false,-1, 31,0);
        tracep->declBus(c+608,"top genblk1[1] engine ITERATIONS_WIDTH", false,-1, 31,0);
        tracep->declBit(c+578,"top genblk1[1] engine clk", false,-1);
        tracep->declBit(c+620,"top genblk1[1] engine reset", false,-1);
        tracep->declBus(c+594,"top genblk1[1] engine iterations_max", false,-1, 5,0);
        tracep->declBus(c+91,"top genblk1[1] engine x0_", false,-1, 9,0);
        tracep->declBus(c+92,"top genblk1[1] engine y0_", false,-1, 9,0);
        tracep->declBus(c+595,"top genblk1[1] engine zoom", false,-1, 2,0);
        tracep->declBus(c+596,"top genblk1[1] engine x_offset", false,-1, 24,0);
        tracep->declBus(c+597,"top genblk1[1] engine y_offset", false,-1, 24,0);
        tracep->declBit(c+573,"top genblk1[1] engine full_queue", false,-1);
        tracep->declBit(c+296,"top genblk1[1] engine en_pixel_map", false,-1);
        tracep->declBus(c+93,"top genblk1[1] engine iterations", false,-1, 5,0);
        tracep->declBus(c+94,"top genblk1[1] engine xpixel", false,-1, 9,0);
        tracep->declBus(c+95,"top genblk1[1] engine ypixel", false,-1, 9,0);
        tracep->declBus(c+621,"top genblk1[1] engine ENGINE_INT_WIDTH", false,-1, 31,0);
        tracep->declBus(c+96,"top genblk1[1] engine x", false,-1, 24,0);
        tracep->declBus(c+97,"top genblk1[1] engine y", false,-1, 24,0);
        tracep->declBit(c+601,"top genblk1[1] engine finished", false,-1);
        tracep->declBit(c+241,"top genblk1[1] engine distributor_ready", false,-1);
        tracep->declBus(c+93,"top genblk1[1] engine curr_iterations", false,-1, 5,0);
        tracep->declBus(c+98,"top genblk1[1] engine zr", false,-1, 24,0);
        tracep->declBus(c+99,"top genblk1[1] engine zi", false,-1, 24,0);
        tracep->declBus(c+100,"top genblk1[1] engine zr_next", false,-1, 24,0);
        tracep->declBus(c+242,"top genblk1[1] engine zi_next", false,-1, 24,0);
        tracep->declBus(c+101,"top genblk1[1] engine zr2", false,-1, 24,0);
        tracep->declBus(c+102,"top genblk1[1] engine zi2", false,-1, 24,0);
        tracep->declBus(c+243,"top genblk1[1] engine zr2_next", false,-1, 24,0);
        tracep->declBus(c+244,"top genblk1[1] engine zi2_next", false,-1, 24,0);
        tracep->declBus(c+245,"top genblk1[1] engine zrzi", false,-1, 24,0);
        tracep->declBit(c+297,"top genblk1[1] engine en_stage_1", false,-1);
        tracep->declBit(c+298,"top genblk1[1] engine en_stage_2", false,-1);
        tracep->declBit(c+299,"top genblk1[1] engine init", false,-1);
        tracep->declBus(c+103,"top genblk1[1] engine distance", false,-1, 24,0);
        tracep->declBus(c+622,"top genblk1[1] engine max_distance", false,-1, 24,0);
        tracep->declBus(c+606,"top genblk1[1] engine pixel_map PIXEL_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+618,"top genblk1[1] engine pixel_map ENGINE_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+619,"top genblk1[1] engine pixel_map ENGINE_FRACT_WIDTH", false,-1, 31,0);
        tracep->declBit(c+578,"top genblk1[1] engine pixel_map clk", false,-1);
        tracep->declBit(c+620,"top genblk1[1] engine pixel_map reset", false,-1);
        tracep->declBit(c+296,"top genblk1[1] engine pixel_map en", false,-1);
        tracep->declBus(c+91,"top genblk1[1] engine pixel_map pixel_x_in", false,-1, 9,0);
        tracep->declBus(c+92,"top genblk1[1] engine pixel_map pixel_y_in", false,-1, 9,0);
        tracep->declBus(c+596,"top genblk1[1] engine pixel_map x_offset", false,-1, 24,0);
        tracep->declBus(c+597,"top genblk1[1] engine pixel_map y_offset", false,-1, 24,0);
        tracep->declBus(c+96,"top genblk1[1] engine pixel_map real_x", false,-1, 24,0);
        tracep->declBus(c+97,"top genblk1[1] engine pixel_map imag_y", false,-1, 24,0);
        tracep->declBus(c+94,"top genblk1[1] engine pixel_map pixel_x_out", false,-1, 9,0);
        tracep->declBus(c+95,"top genblk1[1] engine pixel_map pixel_y_out", false,-1, 9,0);
        tracep->declBus(c+623,"top genblk1[1] engine pixel_map scale_factor", false,-1, 24,0);
        tracep->declBus(c+599,"top genblk1[1] engine pixel_map r_min", false,-1, 24,0);
        tracep->declBus(c+600,"top genblk1[1] engine pixel_map i_min", false,-1, 24,0);
        tracep->declBus(c+104,"top genblk1[1] engine pixel_map r_gradient", false,-1, 24,0);
        tracep->declBus(c+105,"top genblk1[1] engine pixel_map i_gradient", false,-1, 24,0);
        tracep->declBus(c+106,"top genblk1[1] engine pixel_map pixel_x_fixed", false,-1, 24,0);
        tracep->declBus(c+107,"top genblk1[1] engine pixel_map pixel_y_fixed", false,-1, 24,0);
        tracep->declBus(c+618,"top genblk1[1] engine pixel_map M1 ENGINE_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+619,"top genblk1[1] engine pixel_map M1 ENGINE_FRACT_WIDTH", false,-1, 31,0);
        tracep->declBus(c+624,"top genblk1[1] engine pixel_map M1 a", false,-1, 24,0);
        tracep->declBus(c+106,"top genblk1[1] engine pixel_map M1 b", false,-1, 24,0);
        tracep->declBit(c+620,"top genblk1[1] engine pixel_map M1 rst", false,-1);
        tracep->declBus(c+104,"top genblk1[1] engine pixel_map M1 result", false,-1, 24,0);
        tracep->declBus(c+621,"top genblk1[1] engine pixel_map M1 ENGINE_INT_WIDTH", false,-1, 31,0);
        tracep->declQuad(c+108,"top genblk1[1] engine pixel_map M1 product", false,-1, 49,0);
        tracep->declBus(c+618,"top genblk1[1] engine pixel_map M2 ENGINE_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+619,"top genblk1[1] engine pixel_map M2 ENGINE_FRACT_WIDTH", false,-1, 31,0);
        tracep->declBus(c+624,"top genblk1[1] engine pixel_map M2 a", false,-1, 24,0);
        tracep->declBus(c+107,"top genblk1[1] engine pixel_map M2 b", false,-1, 24,0);
        tracep->declBit(c+620,"top genblk1[1] engine pixel_map M2 rst", false,-1);
        tracep->declBus(c+105,"top genblk1[1] engine pixel_map M2 result", false,-1, 24,0);
        tracep->declBus(c+621,"top genblk1[1] engine pixel_map M2 ENGINE_INT_WIDTH", false,-1, 31,0);
        tracep->declQuad(c+110,"top genblk1[1] engine pixel_map M2 product", false,-1, 49,0);
        tracep->declBus(c+608,"top genblk1[1] engine R0 WIDTH", false,-1, 31,0);
        tracep->declBit(c+578,"top genblk1[1] engine R0 clk", false,-1);
        tracep->declBit(c+299,"top genblk1[1] engine R0 rst", false,-1);
        tracep->declBit(c+298,"top genblk1[1] engine R0 en", false,-1);
        tracep->declBus(c+112,"top genblk1[1] engine R0 in", false,-1, 5,0);
        tracep->declBus(c+93,"top genblk1[1] engine R0 out", false,-1, 5,0);
        tracep->declBus(c+618,"top genblk1[1] engine calc_stage_1 ENGINE_DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+578,"top genblk1[1] engine calc_stage_1 clk", false,-1);
        tracep->declBit(c+299,"top genblk1[1] engine calc_stage_1 reset", false,-1);
        tracep->declBit(c+297,"top genblk1[1] engine calc_stage_1 en", false,-1);
        tracep->declBus(c+100,"top genblk1[1] engine calc_stage_1 zr_next", false,-1, 24,0);
        tracep->declBus(c+242,"top genblk1[1] engine calc_stage_1 zi_next", false,-1, 24,0);
        tracep->declBus(c+98,"top genblk1[1] engine calc_stage_1 zr", false,-1, 24,0);
        tracep->declBus(c+99,"top genblk1[1] engine calc_stage_1 zi", false,-1, 24,0);
        tracep->declBus(c+618,"top genblk1[1] engine calc_stage_1 R1 WIDTH", false,-1, 31,0);
        tracep->declBit(c+578,"top genblk1[1] engine calc_stage_1 R1 clk", false,-1);
        tracep->declBit(c+299,"top genblk1[1] engine calc_stage_1 R1 rst", false,-1);
        tracep->declBit(c+297,"top genblk1[1] engine calc_stage_1 R1 en", false,-1);
        tracep->declBus(c+100,"top genblk1[1] engine calc_stage_1 R1 in", false,-1, 24,0);
        tracep->declBus(c+98,"top genblk1[1] engine calc_stage_1 R1 out", false,-1, 24,0);
        tracep->declBus(c+618,"top genblk1[1] engine calc_stage_1 R2 WIDTH", false,-1, 31,0);
        tracep->declBit(c+578,"top genblk1[1] engine calc_stage_1 R2 clk", false,-1);
        tracep->declBit(c+299,"top genblk1[1] engine calc_stage_1 R2 rst", false,-1);
        tracep->declBit(c+297,"top genblk1[1] engine calc_stage_1 R2 en", false,-1);
        tracep->declBus(c+242,"top genblk1[1] engine calc_stage_1 R2 in", false,-1, 24,0);
        tracep->declBus(c+99,"top genblk1[1] engine calc_stage_1 R2 out", false,-1, 24,0);
        tracep->declBus(c+618,"top genblk1[1] engine M5 ENGINE_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+619,"top genblk1[1] engine M5 ENGINE_FRACT_WIDTH", false,-1, 31,0);
        tracep->declBus(c+98,"top genblk1[1] engine M5 a", false,-1, 24,0);
        tracep->declBus(c+98,"top genblk1[1] engine M5 b", false,-1, 24,0);
        tracep->declBit(c+299,"top genblk1[1] engine M5 rst", false,-1);
        tracep->declBus(c+243,"top genblk1[1] engine M5 result", false,-1, 24,0);
        tracep->declBus(c+621,"top genblk1[1] engine M5 ENGINE_INT_WIDTH", false,-1, 31,0);
        tracep->declQuad(c+113,"top genblk1[1] engine M5 product", false,-1, 49,0);
        tracep->declBus(c+618,"top genblk1[1] engine M6 ENGINE_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+619,"top genblk1[1] engine M6 ENGINE_FRACT_WIDTH", false,-1, 31,0);
        tracep->declBus(c+99,"top genblk1[1] engine M6 a", false,-1, 24,0);
        tracep->declBus(c+99,"top genblk1[1] engine M6 b", false,-1, 24,0);
        tracep->declBit(c+299,"top genblk1[1] engine M6 rst", false,-1);
        tracep->declBus(c+244,"top genblk1[1] engine M6 result", false,-1, 24,0);
        tracep->declBus(c+621,"top genblk1[1] engine M6 ENGINE_INT_WIDTH", false,-1, 31,0);
        tracep->declQuad(c+115,"top genblk1[1] engine M6 product", false,-1, 49,0);
        tracep->declBus(c+618,"top genblk1[1] engine calc_stage_2 ENGINE_DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+578,"top genblk1[1] engine calc_stage_2 clk", false,-1);
        tracep->declBit(c+299,"top genblk1[1] engine calc_stage_2 reset", false,-1);
        tracep->declBit(c+298,"top genblk1[1] engine calc_stage_2 en", false,-1);
        tracep->declBus(c+243,"top genblk1[1] engine calc_stage_2 zr2_next", false,-1, 24,0);
        tracep->declBus(c+244,"top genblk1[1] engine calc_stage_2 zi2_next", false,-1, 24,0);
        tracep->declBus(c+101,"top genblk1[1] engine calc_stage_2 zr2", false,-1, 24,0);
        tracep->declBus(c+102,"top genblk1[1] engine calc_stage_2 zi2", false,-1, 24,0);
        tracep->declBus(c+618,"top genblk1[1] engine calc_stage_2 R3 WIDTH", false,-1, 31,0);
        tracep->declBit(c+578,"top genblk1[1] engine calc_stage_2 R3 clk", false,-1);
        tracep->declBit(c+299,"top genblk1[1] engine calc_stage_2 R3 rst", false,-1);
        tracep->declBit(c+298,"top genblk1[1] engine calc_stage_2 R3 en", false,-1);
        tracep->declBus(c+243,"top genblk1[1] engine calc_stage_2 R3 in", false,-1, 24,0);
        tracep->declBus(c+101,"top genblk1[1] engine calc_stage_2 R3 out", false,-1, 24,0);
        tracep->declBus(c+618,"top genblk1[1] engine calc_stage_2 R4 WIDTH", false,-1, 31,0);
        tracep->declBit(c+578,"top genblk1[1] engine calc_stage_2 R4 clk", false,-1);
        tracep->declBit(c+299,"top genblk1[1] engine calc_stage_2 R4 rst", false,-1);
        tracep->declBit(c+298,"top genblk1[1] engine calc_stage_2 R4 en", false,-1);
        tracep->declBus(c+244,"top genblk1[1] engine calc_stage_2 R4 in", false,-1, 24,0);
        tracep->declBus(c+102,"top genblk1[1] engine calc_stage_2 R4 out", false,-1, 24,0);
        tracep->declBus(c+618,"top genblk1[1] engine M7 ENGINE_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+619,"top genblk1[1] engine M7 ENGINE_FRACT_WIDTH", false,-1, 31,0);
        tracep->declBus(c+98,"top genblk1[1] engine M7 a", false,-1, 24,0);
        tracep->declBus(c+99,"top genblk1[1] engine M7 b", false,-1, 24,0);
        tracep->declBit(c+299,"top genblk1[1] engine M7 rst", false,-1);
        tracep->declBus(c+245,"top genblk1[1] engine M7 result", false,-1, 24,0);
        tracep->declBus(c+621,"top genblk1[1] engine M7 ENGINE_INT_WIDTH", false,-1, 31,0);
        tracep->declQuad(c+117,"top genblk1[1] engine M7 product", false,-1, 49,0);
        tracep->declBit(c+578,"top genblk1[1] engine SM clk", false,-1);
        tracep->declBit(c+620,"top genblk1[1] engine SM rst", false,-1);
        tracep->declBit(c+601,"top genblk1[1] engine SM finished", false,-1);
        tracep->declBit(c+573,"top genblk1[1] engine SM full_queue", false,-1);
        tracep->declBit(c+241,"top genblk1[1] engine SM distributor_ready", false,-1);
        tracep->declBit(c+299,"top genblk1[1] engine SM init", false,-1);
        tracep->declBit(c+296,"top genblk1[1] engine SM en_pixel_map", false,-1);
        tracep->declBit(c+297,"top genblk1[1] engine SM en_stage_1", false,-1);
        tracep->declBit(c+298,"top genblk1[1] engine SM en_stage_2", false,-1);
        tracep->declBus(c+625,"top genblk1[1] engine SM INIT", false,-1, 31,0);
        tracep->declBus(c+626,"top genblk1[1] engine SM CALC_STAGE_1", false,-1, 31,0);
        tracep->declBus(c+627,"top genblk1[1] engine SM CALC_STAGE_2", false,-1, 31,0);
        tracep->declBus(c+628,"top genblk1[1] engine SM ESCAPE", false,-1, 31,0);
        tracep->declBus(c+119,"top genblk1[1] engine SM state", false,-1, 1,0);
        tracep->declBus(c+300,"top genblk1[1] engine SM next", false,-1, 1,0);
        tracep->declBus(c+606,"top genblk1[2] engine PIXEL_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+618,"top genblk1[2] engine ENGINE_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+619,"top genblk1[2] engine ENGINE_FRACT_WIDTH", false,-1, 31,0);
        tracep->declBus(c+608,"top genblk1[2] engine ITERATIONS_WIDTH", false,-1, 31,0);
        tracep->declBit(c+578,"top genblk1[2] engine clk", false,-1);
        tracep->declBit(c+620,"top genblk1[2] engine reset", false,-1);
        tracep->declBus(c+594,"top genblk1[2] engine iterations_max", false,-1, 5,0);
        tracep->declBus(c+120,"top genblk1[2] engine x0_", false,-1, 9,0);
        tracep->declBus(c+121,"top genblk1[2] engine y0_", false,-1, 9,0);
        tracep->declBus(c+595,"top genblk1[2] engine zoom", false,-1, 2,0);
        tracep->declBus(c+596,"top genblk1[2] engine x_offset", false,-1, 24,0);
        tracep->declBus(c+597,"top genblk1[2] engine y_offset", false,-1, 24,0);
        tracep->declBit(c+574,"top genblk1[2] engine full_queue", false,-1);
        tracep->declBit(c+301,"top genblk1[2] engine en_pixel_map", false,-1);
        tracep->declBus(c+122,"top genblk1[2] engine iterations", false,-1, 5,0);
        tracep->declBus(c+123,"top genblk1[2] engine xpixel", false,-1, 9,0);
        tracep->declBus(c+124,"top genblk1[2] engine ypixel", false,-1, 9,0);
        tracep->declBus(c+621,"top genblk1[2] engine ENGINE_INT_WIDTH", false,-1, 31,0);
        tracep->declBus(c+125,"top genblk1[2] engine x", false,-1, 24,0);
        tracep->declBus(c+126,"top genblk1[2] engine y", false,-1, 24,0);
        tracep->declBit(c+602,"top genblk1[2] engine finished", false,-1);
        tracep->declBit(c+246,"top genblk1[2] engine distributor_ready", false,-1);
        tracep->declBus(c+122,"top genblk1[2] engine curr_iterations", false,-1, 5,0);
        tracep->declBus(c+127,"top genblk1[2] engine zr", false,-1, 24,0);
        tracep->declBus(c+128,"top genblk1[2] engine zi", false,-1, 24,0);
        tracep->declBus(c+129,"top genblk1[2] engine zr_next", false,-1, 24,0);
        tracep->declBus(c+247,"top genblk1[2] engine zi_next", false,-1, 24,0);
        tracep->declBus(c+130,"top genblk1[2] engine zr2", false,-1, 24,0);
        tracep->declBus(c+131,"top genblk1[2] engine zi2", false,-1, 24,0);
        tracep->declBus(c+248,"top genblk1[2] engine zr2_next", false,-1, 24,0);
        tracep->declBus(c+249,"top genblk1[2] engine zi2_next", false,-1, 24,0);
        tracep->declBus(c+250,"top genblk1[2] engine zrzi", false,-1, 24,0);
        tracep->declBit(c+302,"top genblk1[2] engine en_stage_1", false,-1);
        tracep->declBit(c+303,"top genblk1[2] engine en_stage_2", false,-1);
        tracep->declBit(c+304,"top genblk1[2] engine init", false,-1);
        tracep->declBus(c+132,"top genblk1[2] engine distance", false,-1, 24,0);
        tracep->declBus(c+622,"top genblk1[2] engine max_distance", false,-1, 24,0);
        tracep->declBus(c+606,"top genblk1[2] engine pixel_map PIXEL_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+618,"top genblk1[2] engine pixel_map ENGINE_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+619,"top genblk1[2] engine pixel_map ENGINE_FRACT_WIDTH", false,-1, 31,0);
        tracep->declBit(c+578,"top genblk1[2] engine pixel_map clk", false,-1);
        tracep->declBit(c+620,"top genblk1[2] engine pixel_map reset", false,-1);
        tracep->declBit(c+301,"top genblk1[2] engine pixel_map en", false,-1);
        tracep->declBus(c+120,"top genblk1[2] engine pixel_map pixel_x_in", false,-1, 9,0);
        tracep->declBus(c+121,"top genblk1[2] engine pixel_map pixel_y_in", false,-1, 9,0);
        tracep->declBus(c+596,"top genblk1[2] engine pixel_map x_offset", false,-1, 24,0);
        tracep->declBus(c+597,"top genblk1[2] engine pixel_map y_offset", false,-1, 24,0);
        tracep->declBus(c+125,"top genblk1[2] engine pixel_map real_x", false,-1, 24,0);
        tracep->declBus(c+126,"top genblk1[2] engine pixel_map imag_y", false,-1, 24,0);
        tracep->declBus(c+123,"top genblk1[2] engine pixel_map pixel_x_out", false,-1, 9,0);
        tracep->declBus(c+124,"top genblk1[2] engine pixel_map pixel_y_out", false,-1, 9,0);
        tracep->declBus(c+623,"top genblk1[2] engine pixel_map scale_factor", false,-1, 24,0);
        tracep->declBus(c+599,"top genblk1[2] engine pixel_map r_min", false,-1, 24,0);
        tracep->declBus(c+600,"top genblk1[2] engine pixel_map i_min", false,-1, 24,0);
        tracep->declBus(c+133,"top genblk1[2] engine pixel_map r_gradient", false,-1, 24,0);
        tracep->declBus(c+134,"top genblk1[2] engine pixel_map i_gradient", false,-1, 24,0);
        tracep->declBus(c+135,"top genblk1[2] engine pixel_map pixel_x_fixed", false,-1, 24,0);
        tracep->declBus(c+136,"top genblk1[2] engine pixel_map pixel_y_fixed", false,-1, 24,0);
        tracep->declBus(c+618,"top genblk1[2] engine pixel_map M1 ENGINE_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+619,"top genblk1[2] engine pixel_map M1 ENGINE_FRACT_WIDTH", false,-1, 31,0);
        tracep->declBus(c+624,"top genblk1[2] engine pixel_map M1 a", false,-1, 24,0);
        tracep->declBus(c+135,"top genblk1[2] engine pixel_map M1 b", false,-1, 24,0);
        tracep->declBit(c+620,"top genblk1[2] engine pixel_map M1 rst", false,-1);
        tracep->declBus(c+133,"top genblk1[2] engine pixel_map M1 result", false,-1, 24,0);
        tracep->declBus(c+621,"top genblk1[2] engine pixel_map M1 ENGINE_INT_WIDTH", false,-1, 31,0);
        tracep->declQuad(c+137,"top genblk1[2] engine pixel_map M1 product", false,-1, 49,0);
        tracep->declBus(c+618,"top genblk1[2] engine pixel_map M2 ENGINE_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+619,"top genblk1[2] engine pixel_map M2 ENGINE_FRACT_WIDTH", false,-1, 31,0);
        tracep->declBus(c+624,"top genblk1[2] engine pixel_map M2 a", false,-1, 24,0);
        tracep->declBus(c+136,"top genblk1[2] engine pixel_map M2 b", false,-1, 24,0);
        tracep->declBit(c+620,"top genblk1[2] engine pixel_map M2 rst", false,-1);
        tracep->declBus(c+134,"top genblk1[2] engine pixel_map M2 result", false,-1, 24,0);
        tracep->declBus(c+621,"top genblk1[2] engine pixel_map M2 ENGINE_INT_WIDTH", false,-1, 31,0);
        tracep->declQuad(c+139,"top genblk1[2] engine pixel_map M2 product", false,-1, 49,0);
        tracep->declBus(c+608,"top genblk1[2] engine R0 WIDTH", false,-1, 31,0);
        tracep->declBit(c+578,"top genblk1[2] engine R0 clk", false,-1);
        tracep->declBit(c+304,"top genblk1[2] engine R0 rst", false,-1);
        tracep->declBit(c+303,"top genblk1[2] engine R0 en", false,-1);
        tracep->declBus(c+141,"top genblk1[2] engine R0 in", false,-1, 5,0);
        tracep->declBus(c+122,"top genblk1[2] engine R0 out", false,-1, 5,0);
        tracep->declBus(c+618,"top genblk1[2] engine calc_stage_1 ENGINE_DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+578,"top genblk1[2] engine calc_stage_1 clk", false,-1);
        tracep->declBit(c+304,"top genblk1[2] engine calc_stage_1 reset", false,-1);
        tracep->declBit(c+302,"top genblk1[2] engine calc_stage_1 en", false,-1);
        tracep->declBus(c+129,"top genblk1[2] engine calc_stage_1 zr_next", false,-1, 24,0);
        tracep->declBus(c+247,"top genblk1[2] engine calc_stage_1 zi_next", false,-1, 24,0);
        tracep->declBus(c+127,"top genblk1[2] engine calc_stage_1 zr", false,-1, 24,0);
        tracep->declBus(c+128,"top genblk1[2] engine calc_stage_1 zi", false,-1, 24,0);
        tracep->declBus(c+618,"top genblk1[2] engine calc_stage_1 R1 WIDTH", false,-1, 31,0);
        tracep->declBit(c+578,"top genblk1[2] engine calc_stage_1 R1 clk", false,-1);
        tracep->declBit(c+304,"top genblk1[2] engine calc_stage_1 R1 rst", false,-1);
        tracep->declBit(c+302,"top genblk1[2] engine calc_stage_1 R1 en", false,-1);
        tracep->declBus(c+129,"top genblk1[2] engine calc_stage_1 R1 in", false,-1, 24,0);
        tracep->declBus(c+127,"top genblk1[2] engine calc_stage_1 R1 out", false,-1, 24,0);
        tracep->declBus(c+618,"top genblk1[2] engine calc_stage_1 R2 WIDTH", false,-1, 31,0);
        tracep->declBit(c+578,"top genblk1[2] engine calc_stage_1 R2 clk", false,-1);
        tracep->declBit(c+304,"top genblk1[2] engine calc_stage_1 R2 rst", false,-1);
        tracep->declBit(c+302,"top genblk1[2] engine calc_stage_1 R2 en", false,-1);
        tracep->declBus(c+247,"top genblk1[2] engine calc_stage_1 R2 in", false,-1, 24,0);
        tracep->declBus(c+128,"top genblk1[2] engine calc_stage_1 R2 out", false,-1, 24,0);
        tracep->declBus(c+618,"top genblk1[2] engine M5 ENGINE_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+619,"top genblk1[2] engine M5 ENGINE_FRACT_WIDTH", false,-1, 31,0);
        tracep->declBus(c+127,"top genblk1[2] engine M5 a", false,-1, 24,0);
        tracep->declBus(c+127,"top genblk1[2] engine M5 b", false,-1, 24,0);
        tracep->declBit(c+304,"top genblk1[2] engine M5 rst", false,-1);
        tracep->declBus(c+248,"top genblk1[2] engine M5 result", false,-1, 24,0);
        tracep->declBus(c+621,"top genblk1[2] engine M5 ENGINE_INT_WIDTH", false,-1, 31,0);
        tracep->declQuad(c+142,"top genblk1[2] engine M5 product", false,-1, 49,0);
        tracep->declBus(c+618,"top genblk1[2] engine M6 ENGINE_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+619,"top genblk1[2] engine M6 ENGINE_FRACT_WIDTH", false,-1, 31,0);
        tracep->declBus(c+128,"top genblk1[2] engine M6 a", false,-1, 24,0);
        tracep->declBus(c+128,"top genblk1[2] engine M6 b", false,-1, 24,0);
        tracep->declBit(c+304,"top genblk1[2] engine M6 rst", false,-1);
        tracep->declBus(c+249,"top genblk1[2] engine M6 result", false,-1, 24,0);
        tracep->declBus(c+621,"top genblk1[2] engine M6 ENGINE_INT_WIDTH", false,-1, 31,0);
        tracep->declQuad(c+144,"top genblk1[2] engine M6 product", false,-1, 49,0);
        tracep->declBus(c+618,"top genblk1[2] engine calc_stage_2 ENGINE_DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+578,"top genblk1[2] engine calc_stage_2 clk", false,-1);
        tracep->declBit(c+304,"top genblk1[2] engine calc_stage_2 reset", false,-1);
        tracep->declBit(c+303,"top genblk1[2] engine calc_stage_2 en", false,-1);
        tracep->declBus(c+248,"top genblk1[2] engine calc_stage_2 zr2_next", false,-1, 24,0);
        tracep->declBus(c+249,"top genblk1[2] engine calc_stage_2 zi2_next", false,-1, 24,0);
        tracep->declBus(c+130,"top genblk1[2] engine calc_stage_2 zr2", false,-1, 24,0);
        tracep->declBus(c+131,"top genblk1[2] engine calc_stage_2 zi2", false,-1, 24,0);
        tracep->declBus(c+618,"top genblk1[2] engine calc_stage_2 R3 WIDTH", false,-1, 31,0);
        tracep->declBit(c+578,"top genblk1[2] engine calc_stage_2 R3 clk", false,-1);
        tracep->declBit(c+304,"top genblk1[2] engine calc_stage_2 R3 rst", false,-1);
        tracep->declBit(c+303,"top genblk1[2] engine calc_stage_2 R3 en", false,-1);
        tracep->declBus(c+248,"top genblk1[2] engine calc_stage_2 R3 in", false,-1, 24,0);
        tracep->declBus(c+130,"top genblk1[2] engine calc_stage_2 R3 out", false,-1, 24,0);
        tracep->declBus(c+618,"top genblk1[2] engine calc_stage_2 R4 WIDTH", false,-1, 31,0);
        tracep->declBit(c+578,"top genblk1[2] engine calc_stage_2 R4 clk", false,-1);
        tracep->declBit(c+304,"top genblk1[2] engine calc_stage_2 R4 rst", false,-1);
        tracep->declBit(c+303,"top genblk1[2] engine calc_stage_2 R4 en", false,-1);
        tracep->declBus(c+249,"top genblk1[2] engine calc_stage_2 R4 in", false,-1, 24,0);
        tracep->declBus(c+131,"top genblk1[2] engine calc_stage_2 R4 out", false,-1, 24,0);
        tracep->declBus(c+618,"top genblk1[2] engine M7 ENGINE_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+619,"top genblk1[2] engine M7 ENGINE_FRACT_WIDTH", false,-1, 31,0);
        tracep->declBus(c+127,"top genblk1[2] engine M7 a", false,-1, 24,0);
        tracep->declBus(c+128,"top genblk1[2] engine M7 b", false,-1, 24,0);
        tracep->declBit(c+304,"top genblk1[2] engine M7 rst", false,-1);
        tracep->declBus(c+250,"top genblk1[2] engine M7 result", false,-1, 24,0);
        tracep->declBus(c+621,"top genblk1[2] engine M7 ENGINE_INT_WIDTH", false,-1, 31,0);
        tracep->declQuad(c+146,"top genblk1[2] engine M7 product", false,-1, 49,0);
        tracep->declBit(c+578,"top genblk1[2] engine SM clk", false,-1);
        tracep->declBit(c+620,"top genblk1[2] engine SM rst", false,-1);
        tracep->declBit(c+602,"top genblk1[2] engine SM finished", false,-1);
        tracep->declBit(c+574,"top genblk1[2] engine SM full_queue", false,-1);
        tracep->declBit(c+246,"top genblk1[2] engine SM distributor_ready", false,-1);
        tracep->declBit(c+304,"top genblk1[2] engine SM init", false,-1);
        tracep->declBit(c+301,"top genblk1[2] engine SM en_pixel_map", false,-1);
        tracep->declBit(c+302,"top genblk1[2] engine SM en_stage_1", false,-1);
        tracep->declBit(c+303,"top genblk1[2] engine SM en_stage_2", false,-1);
        tracep->declBus(c+625,"top genblk1[2] engine SM INIT", false,-1, 31,0);
        tracep->declBus(c+626,"top genblk1[2] engine SM CALC_STAGE_1", false,-1, 31,0);
        tracep->declBus(c+627,"top genblk1[2] engine SM CALC_STAGE_2", false,-1, 31,0);
        tracep->declBus(c+628,"top genblk1[2] engine SM ESCAPE", false,-1, 31,0);
        tracep->declBus(c+148,"top genblk1[2] engine SM state", false,-1, 1,0);
        tracep->declBus(c+305,"top genblk1[2] engine SM next", false,-1, 1,0);
        tracep->declBus(c+606,"top genblk1[3] engine PIXEL_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+618,"top genblk1[3] engine ENGINE_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+619,"top genblk1[3] engine ENGINE_FRACT_WIDTH", false,-1, 31,0);
        tracep->declBus(c+608,"top genblk1[3] engine ITERATIONS_WIDTH", false,-1, 31,0);
        tracep->declBit(c+578,"top genblk1[3] engine clk", false,-1);
        tracep->declBit(c+620,"top genblk1[3] engine reset", false,-1);
        tracep->declBus(c+594,"top genblk1[3] engine iterations_max", false,-1, 5,0);
        tracep->declBus(c+149,"top genblk1[3] engine x0_", false,-1, 9,0);
        tracep->declBus(c+150,"top genblk1[3] engine y0_", false,-1, 9,0);
        tracep->declBus(c+595,"top genblk1[3] engine zoom", false,-1, 2,0);
        tracep->declBus(c+596,"top genblk1[3] engine x_offset", false,-1, 24,0);
        tracep->declBus(c+597,"top genblk1[3] engine y_offset", false,-1, 24,0);
        tracep->declBit(c+575,"top genblk1[3] engine full_queue", false,-1);
        tracep->declBit(c+306,"top genblk1[3] engine en_pixel_map", false,-1);
        tracep->declBus(c+151,"top genblk1[3] engine iterations", false,-1, 5,0);
        tracep->declBus(c+152,"top genblk1[3] engine xpixel", false,-1, 9,0);
        tracep->declBus(c+153,"top genblk1[3] engine ypixel", false,-1, 9,0);
        tracep->declBus(c+621,"top genblk1[3] engine ENGINE_INT_WIDTH", false,-1, 31,0);
        tracep->declBus(c+154,"top genblk1[3] engine x", false,-1, 24,0);
        tracep->declBus(c+155,"top genblk1[3] engine y", false,-1, 24,0);
        tracep->declBit(c+603,"top genblk1[3] engine finished", false,-1);
        tracep->declBit(c+251,"top genblk1[3] engine distributor_ready", false,-1);
        tracep->declBus(c+151,"top genblk1[3] engine curr_iterations", false,-1, 5,0);
        tracep->declBus(c+156,"top genblk1[3] engine zr", false,-1, 24,0);
        tracep->declBus(c+157,"top genblk1[3] engine zi", false,-1, 24,0);
        tracep->declBus(c+158,"top genblk1[3] engine zr_next", false,-1, 24,0);
        tracep->declBus(c+252,"top genblk1[3] engine zi_next", false,-1, 24,0);
        tracep->declBus(c+159,"top genblk1[3] engine zr2", false,-1, 24,0);
        tracep->declBus(c+160,"top genblk1[3] engine zi2", false,-1, 24,0);
        tracep->declBus(c+253,"top genblk1[3] engine zr2_next", false,-1, 24,0);
        tracep->declBus(c+254,"top genblk1[3] engine zi2_next", false,-1, 24,0);
        tracep->declBus(c+255,"top genblk1[3] engine zrzi", false,-1, 24,0);
        tracep->declBit(c+307,"top genblk1[3] engine en_stage_1", false,-1);
        tracep->declBit(c+308,"top genblk1[3] engine en_stage_2", false,-1);
        tracep->declBit(c+309,"top genblk1[3] engine init", false,-1);
        tracep->declBus(c+161,"top genblk1[3] engine distance", false,-1, 24,0);
        tracep->declBus(c+622,"top genblk1[3] engine max_distance", false,-1, 24,0);
        tracep->declBus(c+606,"top genblk1[3] engine pixel_map PIXEL_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+618,"top genblk1[3] engine pixel_map ENGINE_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+619,"top genblk1[3] engine pixel_map ENGINE_FRACT_WIDTH", false,-1, 31,0);
        tracep->declBit(c+578,"top genblk1[3] engine pixel_map clk", false,-1);
        tracep->declBit(c+620,"top genblk1[3] engine pixel_map reset", false,-1);
        tracep->declBit(c+306,"top genblk1[3] engine pixel_map en", false,-1);
        tracep->declBus(c+149,"top genblk1[3] engine pixel_map pixel_x_in", false,-1, 9,0);
        tracep->declBus(c+150,"top genblk1[3] engine pixel_map pixel_y_in", false,-1, 9,0);
        tracep->declBus(c+596,"top genblk1[3] engine pixel_map x_offset", false,-1, 24,0);
        tracep->declBus(c+597,"top genblk1[3] engine pixel_map y_offset", false,-1, 24,0);
        tracep->declBus(c+154,"top genblk1[3] engine pixel_map real_x", false,-1, 24,0);
        tracep->declBus(c+155,"top genblk1[3] engine pixel_map imag_y", false,-1, 24,0);
        tracep->declBus(c+152,"top genblk1[3] engine pixel_map pixel_x_out", false,-1, 9,0);
        tracep->declBus(c+153,"top genblk1[3] engine pixel_map pixel_y_out", false,-1, 9,0);
        tracep->declBus(c+623,"top genblk1[3] engine pixel_map scale_factor", false,-1, 24,0);
        tracep->declBus(c+599,"top genblk1[3] engine pixel_map r_min", false,-1, 24,0);
        tracep->declBus(c+600,"top genblk1[3] engine pixel_map i_min", false,-1, 24,0);
        tracep->declBus(c+162,"top genblk1[3] engine pixel_map r_gradient", false,-1, 24,0);
        tracep->declBus(c+163,"top genblk1[3] engine pixel_map i_gradient", false,-1, 24,0);
        tracep->declBus(c+164,"top genblk1[3] engine pixel_map pixel_x_fixed", false,-1, 24,0);
        tracep->declBus(c+165,"top genblk1[3] engine pixel_map pixel_y_fixed", false,-1, 24,0);
        tracep->declBus(c+618,"top genblk1[3] engine pixel_map M1 ENGINE_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+619,"top genblk1[3] engine pixel_map M1 ENGINE_FRACT_WIDTH", false,-1, 31,0);
        tracep->declBus(c+624,"top genblk1[3] engine pixel_map M1 a", false,-1, 24,0);
        tracep->declBus(c+164,"top genblk1[3] engine pixel_map M1 b", false,-1, 24,0);
        tracep->declBit(c+620,"top genblk1[3] engine pixel_map M1 rst", false,-1);
        tracep->declBus(c+162,"top genblk1[3] engine pixel_map M1 result", false,-1, 24,0);
        tracep->declBus(c+621,"top genblk1[3] engine pixel_map M1 ENGINE_INT_WIDTH", false,-1, 31,0);
        tracep->declQuad(c+166,"top genblk1[3] engine pixel_map M1 product", false,-1, 49,0);
        tracep->declBus(c+618,"top genblk1[3] engine pixel_map M2 ENGINE_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+619,"top genblk1[3] engine pixel_map M2 ENGINE_FRACT_WIDTH", false,-1, 31,0);
        tracep->declBus(c+624,"top genblk1[3] engine pixel_map M2 a", false,-1, 24,0);
        tracep->declBus(c+165,"top genblk1[3] engine pixel_map M2 b", false,-1, 24,0);
        tracep->declBit(c+620,"top genblk1[3] engine pixel_map M2 rst", false,-1);
        tracep->declBus(c+163,"top genblk1[3] engine pixel_map M2 result", false,-1, 24,0);
        tracep->declBus(c+621,"top genblk1[3] engine pixel_map M2 ENGINE_INT_WIDTH", false,-1, 31,0);
        tracep->declQuad(c+168,"top genblk1[3] engine pixel_map M2 product", false,-1, 49,0);
        tracep->declBus(c+608,"top genblk1[3] engine R0 WIDTH", false,-1, 31,0);
        tracep->declBit(c+578,"top genblk1[3] engine R0 clk", false,-1);
        tracep->declBit(c+309,"top genblk1[3] engine R0 rst", false,-1);
        tracep->declBit(c+308,"top genblk1[3] engine R0 en", false,-1);
        tracep->declBus(c+170,"top genblk1[3] engine R0 in", false,-1, 5,0);
        tracep->declBus(c+151,"top genblk1[3] engine R0 out", false,-1, 5,0);
        tracep->declBus(c+618,"top genblk1[3] engine calc_stage_1 ENGINE_DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+578,"top genblk1[3] engine calc_stage_1 clk", false,-1);
        tracep->declBit(c+309,"top genblk1[3] engine calc_stage_1 reset", false,-1);
        tracep->declBit(c+307,"top genblk1[3] engine calc_stage_1 en", false,-1);
        tracep->declBus(c+158,"top genblk1[3] engine calc_stage_1 zr_next", false,-1, 24,0);
        tracep->declBus(c+252,"top genblk1[3] engine calc_stage_1 zi_next", false,-1, 24,0);
        tracep->declBus(c+156,"top genblk1[3] engine calc_stage_1 zr", false,-1, 24,0);
        tracep->declBus(c+157,"top genblk1[3] engine calc_stage_1 zi", false,-1, 24,0);
        tracep->declBus(c+618,"top genblk1[3] engine calc_stage_1 R1 WIDTH", false,-1, 31,0);
        tracep->declBit(c+578,"top genblk1[3] engine calc_stage_1 R1 clk", false,-1);
        tracep->declBit(c+309,"top genblk1[3] engine calc_stage_1 R1 rst", false,-1);
        tracep->declBit(c+307,"top genblk1[3] engine calc_stage_1 R1 en", false,-1);
        tracep->declBus(c+158,"top genblk1[3] engine calc_stage_1 R1 in", false,-1, 24,0);
        tracep->declBus(c+156,"top genblk1[3] engine calc_stage_1 R1 out", false,-1, 24,0);
        tracep->declBus(c+618,"top genblk1[3] engine calc_stage_1 R2 WIDTH", false,-1, 31,0);
        tracep->declBit(c+578,"top genblk1[3] engine calc_stage_1 R2 clk", false,-1);
        tracep->declBit(c+309,"top genblk1[3] engine calc_stage_1 R2 rst", false,-1);
        tracep->declBit(c+307,"top genblk1[3] engine calc_stage_1 R2 en", false,-1);
        tracep->declBus(c+252,"top genblk1[3] engine calc_stage_1 R2 in", false,-1, 24,0);
        tracep->declBus(c+157,"top genblk1[3] engine calc_stage_1 R2 out", false,-1, 24,0);
        tracep->declBus(c+618,"top genblk1[3] engine M5 ENGINE_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+619,"top genblk1[3] engine M5 ENGINE_FRACT_WIDTH", false,-1, 31,0);
        tracep->declBus(c+156,"top genblk1[3] engine M5 a", false,-1, 24,0);
        tracep->declBus(c+156,"top genblk1[3] engine M5 b", false,-1, 24,0);
        tracep->declBit(c+309,"top genblk1[3] engine M5 rst", false,-1);
        tracep->declBus(c+253,"top genblk1[3] engine M5 result", false,-1, 24,0);
        tracep->declBus(c+621,"top genblk1[3] engine M5 ENGINE_INT_WIDTH", false,-1, 31,0);
        tracep->declQuad(c+171,"top genblk1[3] engine M5 product", false,-1, 49,0);
        tracep->declBus(c+618,"top genblk1[3] engine M6 ENGINE_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+619,"top genblk1[3] engine M6 ENGINE_FRACT_WIDTH", false,-1, 31,0);
        tracep->declBus(c+157,"top genblk1[3] engine M6 a", false,-1, 24,0);
        tracep->declBus(c+157,"top genblk1[3] engine M6 b", false,-1, 24,0);
        tracep->declBit(c+309,"top genblk1[3] engine M6 rst", false,-1);
        tracep->declBus(c+254,"top genblk1[3] engine M6 result", false,-1, 24,0);
        tracep->declBus(c+621,"top genblk1[3] engine M6 ENGINE_INT_WIDTH", false,-1, 31,0);
        tracep->declQuad(c+173,"top genblk1[3] engine M6 product", false,-1, 49,0);
        tracep->declBus(c+618,"top genblk1[3] engine calc_stage_2 ENGINE_DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+578,"top genblk1[3] engine calc_stage_2 clk", false,-1);
        tracep->declBit(c+309,"top genblk1[3] engine calc_stage_2 reset", false,-1);
        tracep->declBit(c+308,"top genblk1[3] engine calc_stage_2 en", false,-1);
        tracep->declBus(c+253,"top genblk1[3] engine calc_stage_2 zr2_next", false,-1, 24,0);
        tracep->declBus(c+254,"top genblk1[3] engine calc_stage_2 zi2_next", false,-1, 24,0);
        tracep->declBus(c+159,"top genblk1[3] engine calc_stage_2 zr2", false,-1, 24,0);
        tracep->declBus(c+160,"top genblk1[3] engine calc_stage_2 zi2", false,-1, 24,0);
        tracep->declBus(c+618,"top genblk1[3] engine calc_stage_2 R3 WIDTH", false,-1, 31,0);
        tracep->declBit(c+578,"top genblk1[3] engine calc_stage_2 R3 clk", false,-1);
        tracep->declBit(c+309,"top genblk1[3] engine calc_stage_2 R3 rst", false,-1);
        tracep->declBit(c+308,"top genblk1[3] engine calc_stage_2 R3 en", false,-1);
        tracep->declBus(c+253,"top genblk1[3] engine calc_stage_2 R3 in", false,-1, 24,0);
        tracep->declBus(c+159,"top genblk1[3] engine calc_stage_2 R3 out", false,-1, 24,0);
        tracep->declBus(c+618,"top genblk1[3] engine calc_stage_2 R4 WIDTH", false,-1, 31,0);
        tracep->declBit(c+578,"top genblk1[3] engine calc_stage_2 R4 clk", false,-1);
        tracep->declBit(c+309,"top genblk1[3] engine calc_stage_2 R4 rst", false,-1);
        tracep->declBit(c+308,"top genblk1[3] engine calc_stage_2 R4 en", false,-1);
        tracep->declBus(c+254,"top genblk1[3] engine calc_stage_2 R4 in", false,-1, 24,0);
        tracep->declBus(c+160,"top genblk1[3] engine calc_stage_2 R4 out", false,-1, 24,0);
        tracep->declBus(c+618,"top genblk1[3] engine M7 ENGINE_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+619,"top genblk1[3] engine M7 ENGINE_FRACT_WIDTH", false,-1, 31,0);
        tracep->declBus(c+156,"top genblk1[3] engine M7 a", false,-1, 24,0);
        tracep->declBus(c+157,"top genblk1[3] engine M7 b", false,-1, 24,0);
        tracep->declBit(c+309,"top genblk1[3] engine M7 rst", false,-1);
        tracep->declBus(c+255,"top genblk1[3] engine M7 result", false,-1, 24,0);
        tracep->declBus(c+621,"top genblk1[3] engine M7 ENGINE_INT_WIDTH", false,-1, 31,0);
        tracep->declQuad(c+175,"top genblk1[3] engine M7 product", false,-1, 49,0);
        tracep->declBit(c+578,"top genblk1[3] engine SM clk", false,-1);
        tracep->declBit(c+620,"top genblk1[3] engine SM rst", false,-1);
        tracep->declBit(c+603,"top genblk1[3] engine SM finished", false,-1);
        tracep->declBit(c+575,"top genblk1[3] engine SM full_queue", false,-1);
        tracep->declBit(c+251,"top genblk1[3] engine SM distributor_ready", false,-1);
        tracep->declBit(c+309,"top genblk1[3] engine SM init", false,-1);
        tracep->declBit(c+306,"top genblk1[3] engine SM en_pixel_map", false,-1);
        tracep->declBit(c+307,"top genblk1[3] engine SM en_stage_1", false,-1);
        tracep->declBit(c+308,"top genblk1[3] engine SM en_stage_2", false,-1);
        tracep->declBus(c+625,"top genblk1[3] engine SM INIT", false,-1, 31,0);
        tracep->declBus(c+626,"top genblk1[3] engine SM CALC_STAGE_1", false,-1, 31,0);
        tracep->declBus(c+627,"top genblk1[3] engine SM CALC_STAGE_2", false,-1, 31,0);
        tracep->declBus(c+628,"top genblk1[3] engine SM ESCAPE", false,-1, 31,0);
        tracep->declBus(c+177,"top genblk1[3] engine SM state", false,-1, 1,0);
        tracep->declBus(c+310,"top genblk1[3] engine SM next", false,-1, 1,0);
        tracep->declBus(c+606,"top genblk1[4] engine PIXEL_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+618,"top genblk1[4] engine ENGINE_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+619,"top genblk1[4] engine ENGINE_FRACT_WIDTH", false,-1, 31,0);
        tracep->declBus(c+608,"top genblk1[4] engine ITERATIONS_WIDTH", false,-1, 31,0);
        tracep->declBit(c+578,"top genblk1[4] engine clk", false,-1);
        tracep->declBit(c+620,"top genblk1[4] engine reset", false,-1);
        tracep->declBus(c+594,"top genblk1[4] engine iterations_max", false,-1, 5,0);
        tracep->declBus(c+178,"top genblk1[4] engine x0_", false,-1, 9,0);
        tracep->declBus(c+179,"top genblk1[4] engine y0_", false,-1, 9,0);
        tracep->declBus(c+595,"top genblk1[4] engine zoom", false,-1, 2,0);
        tracep->declBus(c+596,"top genblk1[4] engine x_offset", false,-1, 24,0);
        tracep->declBus(c+597,"top genblk1[4] engine y_offset", false,-1, 24,0);
        tracep->declBit(c+576,"top genblk1[4] engine full_queue", false,-1);
        tracep->declBit(c+311,"top genblk1[4] engine en_pixel_map", false,-1);
        tracep->declBus(c+180,"top genblk1[4] engine iterations", false,-1, 5,0);
        tracep->declBus(c+181,"top genblk1[4] engine xpixel", false,-1, 9,0);
        tracep->declBus(c+182,"top genblk1[4] engine ypixel", false,-1, 9,0);
        tracep->declBus(c+621,"top genblk1[4] engine ENGINE_INT_WIDTH", false,-1, 31,0);
        tracep->declBus(c+183,"top genblk1[4] engine x", false,-1, 24,0);
        tracep->declBus(c+184,"top genblk1[4] engine y", false,-1, 24,0);
        tracep->declBit(c+604,"top genblk1[4] engine finished", false,-1);
        tracep->declBit(c+256,"top genblk1[4] engine distributor_ready", false,-1);
        tracep->declBus(c+180,"top genblk1[4] engine curr_iterations", false,-1, 5,0);
        tracep->declBus(c+185,"top genblk1[4] engine zr", false,-1, 24,0);
        tracep->declBus(c+186,"top genblk1[4] engine zi", false,-1, 24,0);
        tracep->declBus(c+187,"top genblk1[4] engine zr_next", false,-1, 24,0);
        tracep->declBus(c+257,"top genblk1[4] engine zi_next", false,-1, 24,0);
        tracep->declBus(c+188,"top genblk1[4] engine zr2", false,-1, 24,0);
        tracep->declBus(c+189,"top genblk1[4] engine zi2", false,-1, 24,0);
        tracep->declBus(c+258,"top genblk1[4] engine zr2_next", false,-1, 24,0);
        tracep->declBus(c+259,"top genblk1[4] engine zi2_next", false,-1, 24,0);
        tracep->declBus(c+260,"top genblk1[4] engine zrzi", false,-1, 24,0);
        tracep->declBit(c+312,"top genblk1[4] engine en_stage_1", false,-1);
        tracep->declBit(c+313,"top genblk1[4] engine en_stage_2", false,-1);
        tracep->declBit(c+314,"top genblk1[4] engine init", false,-1);
        tracep->declBus(c+190,"top genblk1[4] engine distance", false,-1, 24,0);
        tracep->declBus(c+622,"top genblk1[4] engine max_distance", false,-1, 24,0);
        tracep->declBus(c+606,"top genblk1[4] engine pixel_map PIXEL_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+618,"top genblk1[4] engine pixel_map ENGINE_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+619,"top genblk1[4] engine pixel_map ENGINE_FRACT_WIDTH", false,-1, 31,0);
        tracep->declBit(c+578,"top genblk1[4] engine pixel_map clk", false,-1);
        tracep->declBit(c+620,"top genblk1[4] engine pixel_map reset", false,-1);
        tracep->declBit(c+311,"top genblk1[4] engine pixel_map en", false,-1);
        tracep->declBus(c+178,"top genblk1[4] engine pixel_map pixel_x_in", false,-1, 9,0);
        tracep->declBus(c+179,"top genblk1[4] engine pixel_map pixel_y_in", false,-1, 9,0);
        tracep->declBus(c+596,"top genblk1[4] engine pixel_map x_offset", false,-1, 24,0);
        tracep->declBus(c+597,"top genblk1[4] engine pixel_map y_offset", false,-1, 24,0);
        tracep->declBus(c+183,"top genblk1[4] engine pixel_map real_x", false,-1, 24,0);
        tracep->declBus(c+184,"top genblk1[4] engine pixel_map imag_y", false,-1, 24,0);
        tracep->declBus(c+181,"top genblk1[4] engine pixel_map pixel_x_out", false,-1, 9,0);
        tracep->declBus(c+182,"top genblk1[4] engine pixel_map pixel_y_out", false,-1, 9,0);
        tracep->declBus(c+623,"top genblk1[4] engine pixel_map scale_factor", false,-1, 24,0);
        tracep->declBus(c+599,"top genblk1[4] engine pixel_map r_min", false,-1, 24,0);
        tracep->declBus(c+600,"top genblk1[4] engine pixel_map i_min", false,-1, 24,0);
        tracep->declBus(c+191,"top genblk1[4] engine pixel_map r_gradient", false,-1, 24,0);
        tracep->declBus(c+192,"top genblk1[4] engine pixel_map i_gradient", false,-1, 24,0);
        tracep->declBus(c+193,"top genblk1[4] engine pixel_map pixel_x_fixed", false,-1, 24,0);
        tracep->declBus(c+194,"top genblk1[4] engine pixel_map pixel_y_fixed", false,-1, 24,0);
        tracep->declBus(c+618,"top genblk1[4] engine pixel_map M1 ENGINE_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+619,"top genblk1[4] engine pixel_map M1 ENGINE_FRACT_WIDTH", false,-1, 31,0);
        tracep->declBus(c+624,"top genblk1[4] engine pixel_map M1 a", false,-1, 24,0);
        tracep->declBus(c+193,"top genblk1[4] engine pixel_map M1 b", false,-1, 24,0);
        tracep->declBit(c+620,"top genblk1[4] engine pixel_map M1 rst", false,-1);
        tracep->declBus(c+191,"top genblk1[4] engine pixel_map M1 result", false,-1, 24,0);
        tracep->declBus(c+621,"top genblk1[4] engine pixel_map M1 ENGINE_INT_WIDTH", false,-1, 31,0);
        tracep->declQuad(c+195,"top genblk1[4] engine pixel_map M1 product", false,-1, 49,0);
        tracep->declBus(c+618,"top genblk1[4] engine pixel_map M2 ENGINE_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+619,"top genblk1[4] engine pixel_map M2 ENGINE_FRACT_WIDTH", false,-1, 31,0);
        tracep->declBus(c+624,"top genblk1[4] engine pixel_map M2 a", false,-1, 24,0);
        tracep->declBus(c+194,"top genblk1[4] engine pixel_map M2 b", false,-1, 24,0);
        tracep->declBit(c+620,"top genblk1[4] engine pixel_map M2 rst", false,-1);
        tracep->declBus(c+192,"top genblk1[4] engine pixel_map M2 result", false,-1, 24,0);
        tracep->declBus(c+621,"top genblk1[4] engine pixel_map M2 ENGINE_INT_WIDTH", false,-1, 31,0);
        tracep->declQuad(c+197,"top genblk1[4] engine pixel_map M2 product", false,-1, 49,0);
        tracep->declBus(c+608,"top genblk1[4] engine R0 WIDTH", false,-1, 31,0);
        tracep->declBit(c+578,"top genblk1[4] engine R0 clk", false,-1);
        tracep->declBit(c+314,"top genblk1[4] engine R0 rst", false,-1);
        tracep->declBit(c+313,"top genblk1[4] engine R0 en", false,-1);
        tracep->declBus(c+199,"top genblk1[4] engine R0 in", false,-1, 5,0);
        tracep->declBus(c+180,"top genblk1[4] engine R0 out", false,-1, 5,0);
        tracep->declBus(c+618,"top genblk1[4] engine calc_stage_1 ENGINE_DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+578,"top genblk1[4] engine calc_stage_1 clk", false,-1);
        tracep->declBit(c+314,"top genblk1[4] engine calc_stage_1 reset", false,-1);
        tracep->declBit(c+312,"top genblk1[4] engine calc_stage_1 en", false,-1);
        tracep->declBus(c+187,"top genblk1[4] engine calc_stage_1 zr_next", false,-1, 24,0);
        tracep->declBus(c+257,"top genblk1[4] engine calc_stage_1 zi_next", false,-1, 24,0);
        tracep->declBus(c+185,"top genblk1[4] engine calc_stage_1 zr", false,-1, 24,0);
        tracep->declBus(c+186,"top genblk1[4] engine calc_stage_1 zi", false,-1, 24,0);
        tracep->declBus(c+618,"top genblk1[4] engine calc_stage_1 R1 WIDTH", false,-1, 31,0);
        tracep->declBit(c+578,"top genblk1[4] engine calc_stage_1 R1 clk", false,-1);
        tracep->declBit(c+314,"top genblk1[4] engine calc_stage_1 R1 rst", false,-1);
        tracep->declBit(c+312,"top genblk1[4] engine calc_stage_1 R1 en", false,-1);
        tracep->declBus(c+187,"top genblk1[4] engine calc_stage_1 R1 in", false,-1, 24,0);
        tracep->declBus(c+185,"top genblk1[4] engine calc_stage_1 R1 out", false,-1, 24,0);
        tracep->declBus(c+618,"top genblk1[4] engine calc_stage_1 R2 WIDTH", false,-1, 31,0);
        tracep->declBit(c+578,"top genblk1[4] engine calc_stage_1 R2 clk", false,-1);
        tracep->declBit(c+314,"top genblk1[4] engine calc_stage_1 R2 rst", false,-1);
        tracep->declBit(c+312,"top genblk1[4] engine calc_stage_1 R2 en", false,-1);
        tracep->declBus(c+257,"top genblk1[4] engine calc_stage_1 R2 in", false,-1, 24,0);
        tracep->declBus(c+186,"top genblk1[4] engine calc_stage_1 R2 out", false,-1, 24,0);
        tracep->declBus(c+618,"top genblk1[4] engine M5 ENGINE_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+619,"top genblk1[4] engine M5 ENGINE_FRACT_WIDTH", false,-1, 31,0);
        tracep->declBus(c+185,"top genblk1[4] engine M5 a", false,-1, 24,0);
        tracep->declBus(c+185,"top genblk1[4] engine M5 b", false,-1, 24,0);
        tracep->declBit(c+314,"top genblk1[4] engine M5 rst", false,-1);
        tracep->declBus(c+258,"top genblk1[4] engine M5 result", false,-1, 24,0);
        tracep->declBus(c+621,"top genblk1[4] engine M5 ENGINE_INT_WIDTH", false,-1, 31,0);
        tracep->declQuad(c+200,"top genblk1[4] engine M5 product", false,-1, 49,0);
        tracep->declBus(c+618,"top genblk1[4] engine M6 ENGINE_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+619,"top genblk1[4] engine M6 ENGINE_FRACT_WIDTH", false,-1, 31,0);
        tracep->declBus(c+186,"top genblk1[4] engine M6 a", false,-1, 24,0);
        tracep->declBus(c+186,"top genblk1[4] engine M6 b", false,-1, 24,0);
        tracep->declBit(c+314,"top genblk1[4] engine M6 rst", false,-1);
        tracep->declBus(c+259,"top genblk1[4] engine M6 result", false,-1, 24,0);
        tracep->declBus(c+621,"top genblk1[4] engine M6 ENGINE_INT_WIDTH", false,-1, 31,0);
        tracep->declQuad(c+202,"top genblk1[4] engine M6 product", false,-1, 49,0);
        tracep->declBus(c+618,"top genblk1[4] engine calc_stage_2 ENGINE_DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+578,"top genblk1[4] engine calc_stage_2 clk", false,-1);
        tracep->declBit(c+314,"top genblk1[4] engine calc_stage_2 reset", false,-1);
        tracep->declBit(c+313,"top genblk1[4] engine calc_stage_2 en", false,-1);
        tracep->declBus(c+258,"top genblk1[4] engine calc_stage_2 zr2_next", false,-1, 24,0);
        tracep->declBus(c+259,"top genblk1[4] engine calc_stage_2 zi2_next", false,-1, 24,0);
        tracep->declBus(c+188,"top genblk1[4] engine calc_stage_2 zr2", false,-1, 24,0);
        tracep->declBus(c+189,"top genblk1[4] engine calc_stage_2 zi2", false,-1, 24,0);
        tracep->declBus(c+618,"top genblk1[4] engine calc_stage_2 R3 WIDTH", false,-1, 31,0);
        tracep->declBit(c+578,"top genblk1[4] engine calc_stage_2 R3 clk", false,-1);
        tracep->declBit(c+314,"top genblk1[4] engine calc_stage_2 R3 rst", false,-1);
        tracep->declBit(c+313,"top genblk1[4] engine calc_stage_2 R3 en", false,-1);
        tracep->declBus(c+258,"top genblk1[4] engine calc_stage_2 R3 in", false,-1, 24,0);
        tracep->declBus(c+188,"top genblk1[4] engine calc_stage_2 R3 out", false,-1, 24,0);
        tracep->declBus(c+618,"top genblk1[4] engine calc_stage_2 R4 WIDTH", false,-1, 31,0);
        tracep->declBit(c+578,"top genblk1[4] engine calc_stage_2 R4 clk", false,-1);
        tracep->declBit(c+314,"top genblk1[4] engine calc_stage_2 R4 rst", false,-1);
        tracep->declBit(c+313,"top genblk1[4] engine calc_stage_2 R4 en", false,-1);
        tracep->declBus(c+259,"top genblk1[4] engine calc_stage_2 R4 in", false,-1, 24,0);
        tracep->declBus(c+189,"top genblk1[4] engine calc_stage_2 R4 out", false,-1, 24,0);
        tracep->declBus(c+618,"top genblk1[4] engine M7 ENGINE_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+619,"top genblk1[4] engine M7 ENGINE_FRACT_WIDTH", false,-1, 31,0);
        tracep->declBus(c+185,"top genblk1[4] engine M7 a", false,-1, 24,0);
        tracep->declBus(c+186,"top genblk1[4] engine M7 b", false,-1, 24,0);
        tracep->declBit(c+314,"top genblk1[4] engine M7 rst", false,-1);
        tracep->declBus(c+260,"top genblk1[4] engine M7 result", false,-1, 24,0);
        tracep->declBus(c+621,"top genblk1[4] engine M7 ENGINE_INT_WIDTH", false,-1, 31,0);
        tracep->declQuad(c+204,"top genblk1[4] engine M7 product", false,-1, 49,0);
        tracep->declBit(c+578,"top genblk1[4] engine SM clk", false,-1);
        tracep->declBit(c+620,"top genblk1[4] engine SM rst", false,-1);
        tracep->declBit(c+604,"top genblk1[4] engine SM finished", false,-1);
        tracep->declBit(c+576,"top genblk1[4] engine SM full_queue", false,-1);
        tracep->declBit(c+256,"top genblk1[4] engine SM distributor_ready", false,-1);
        tracep->declBit(c+314,"top genblk1[4] engine SM init", false,-1);
        tracep->declBit(c+311,"top genblk1[4] engine SM en_pixel_map", false,-1);
        tracep->declBit(c+312,"top genblk1[4] engine SM en_stage_1", false,-1);
        tracep->declBit(c+313,"top genblk1[4] engine SM en_stage_2", false,-1);
        tracep->declBus(c+625,"top genblk1[4] engine SM INIT", false,-1, 31,0);
        tracep->declBus(c+626,"top genblk1[4] engine SM CALC_STAGE_1", false,-1, 31,0);
        tracep->declBus(c+627,"top genblk1[4] engine SM CALC_STAGE_2", false,-1, 31,0);
        tracep->declBus(c+628,"top genblk1[4] engine SM ESCAPE", false,-1, 31,0);
        tracep->declBus(c+206,"top genblk1[4] engine SM state", false,-1, 1,0);
        tracep->declBus(c+315,"top genblk1[4] engine SM next", false,-1, 1,0);
        tracep->declBus(c+606,"top genblk1[5] engine PIXEL_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+618,"top genblk1[5] engine ENGINE_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+619,"top genblk1[5] engine ENGINE_FRACT_WIDTH", false,-1, 31,0);
        tracep->declBus(c+608,"top genblk1[5] engine ITERATIONS_WIDTH", false,-1, 31,0);
        tracep->declBit(c+578,"top genblk1[5] engine clk", false,-1);
        tracep->declBit(c+620,"top genblk1[5] engine reset", false,-1);
        tracep->declBus(c+594,"top genblk1[5] engine iterations_max", false,-1, 5,0);
        tracep->declBus(c+207,"top genblk1[5] engine x0_", false,-1, 9,0);
        tracep->declBus(c+208,"top genblk1[5] engine y0_", false,-1, 9,0);
        tracep->declBus(c+595,"top genblk1[5] engine zoom", false,-1, 2,0);
        tracep->declBus(c+596,"top genblk1[5] engine x_offset", false,-1, 24,0);
        tracep->declBus(c+597,"top genblk1[5] engine y_offset", false,-1, 24,0);
        tracep->declBit(c+577,"top genblk1[5] engine full_queue", false,-1);
        tracep->declBit(c+316,"top genblk1[5] engine en_pixel_map", false,-1);
        tracep->declBus(c+209,"top genblk1[5] engine iterations", false,-1, 5,0);
        tracep->declBus(c+210,"top genblk1[5] engine xpixel", false,-1, 9,0);
        tracep->declBus(c+211,"top genblk1[5] engine ypixel", false,-1, 9,0);
        tracep->declBus(c+621,"top genblk1[5] engine ENGINE_INT_WIDTH", false,-1, 31,0);
        tracep->declBus(c+212,"top genblk1[5] engine x", false,-1, 24,0);
        tracep->declBus(c+213,"top genblk1[5] engine y", false,-1, 24,0);
        tracep->declBit(c+605,"top genblk1[5] engine finished", false,-1);
        tracep->declBit(c+261,"top genblk1[5] engine distributor_ready", false,-1);
        tracep->declBus(c+209,"top genblk1[5] engine curr_iterations", false,-1, 5,0);
        tracep->declBus(c+214,"top genblk1[5] engine zr", false,-1, 24,0);
        tracep->declBus(c+215,"top genblk1[5] engine zi", false,-1, 24,0);
        tracep->declBus(c+216,"top genblk1[5] engine zr_next", false,-1, 24,0);
        tracep->declBus(c+262,"top genblk1[5] engine zi_next", false,-1, 24,0);
        tracep->declBus(c+217,"top genblk1[5] engine zr2", false,-1, 24,0);
        tracep->declBus(c+218,"top genblk1[5] engine zi2", false,-1, 24,0);
        tracep->declBus(c+263,"top genblk1[5] engine zr2_next", false,-1, 24,0);
        tracep->declBus(c+264,"top genblk1[5] engine zi2_next", false,-1, 24,0);
        tracep->declBus(c+265,"top genblk1[5] engine zrzi", false,-1, 24,0);
        tracep->declBit(c+317,"top genblk1[5] engine en_stage_1", false,-1);
        tracep->declBit(c+318,"top genblk1[5] engine en_stage_2", false,-1);
        tracep->declBit(c+319,"top genblk1[5] engine init", false,-1);
        tracep->declBus(c+219,"top genblk1[5] engine distance", false,-1, 24,0);
        tracep->declBus(c+622,"top genblk1[5] engine max_distance", false,-1, 24,0);
        tracep->declBus(c+606,"top genblk1[5] engine pixel_map PIXEL_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+618,"top genblk1[5] engine pixel_map ENGINE_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+619,"top genblk1[5] engine pixel_map ENGINE_FRACT_WIDTH", false,-1, 31,0);
        tracep->declBit(c+578,"top genblk1[5] engine pixel_map clk", false,-1);
        tracep->declBit(c+620,"top genblk1[5] engine pixel_map reset", false,-1);
        tracep->declBit(c+316,"top genblk1[5] engine pixel_map en", false,-1);
        tracep->declBus(c+207,"top genblk1[5] engine pixel_map pixel_x_in", false,-1, 9,0);
        tracep->declBus(c+208,"top genblk1[5] engine pixel_map pixel_y_in", false,-1, 9,0);
        tracep->declBus(c+596,"top genblk1[5] engine pixel_map x_offset", false,-1, 24,0);
        tracep->declBus(c+597,"top genblk1[5] engine pixel_map y_offset", false,-1, 24,0);
        tracep->declBus(c+212,"top genblk1[5] engine pixel_map real_x", false,-1, 24,0);
        tracep->declBus(c+213,"top genblk1[5] engine pixel_map imag_y", false,-1, 24,0);
        tracep->declBus(c+210,"top genblk1[5] engine pixel_map pixel_x_out", false,-1, 9,0);
        tracep->declBus(c+211,"top genblk1[5] engine pixel_map pixel_y_out", false,-1, 9,0);
        tracep->declBus(c+623,"top genblk1[5] engine pixel_map scale_factor", false,-1, 24,0);
        tracep->declBus(c+599,"top genblk1[5] engine pixel_map r_min", false,-1, 24,0);
        tracep->declBus(c+600,"top genblk1[5] engine pixel_map i_min", false,-1, 24,0);
        tracep->declBus(c+220,"top genblk1[5] engine pixel_map r_gradient", false,-1, 24,0);
        tracep->declBus(c+221,"top genblk1[5] engine pixel_map i_gradient", false,-1, 24,0);
        tracep->declBus(c+222,"top genblk1[5] engine pixel_map pixel_x_fixed", false,-1, 24,0);
        tracep->declBus(c+223,"top genblk1[5] engine pixel_map pixel_y_fixed", false,-1, 24,0);
        tracep->declBus(c+618,"top genblk1[5] engine pixel_map M1 ENGINE_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+619,"top genblk1[5] engine pixel_map M1 ENGINE_FRACT_WIDTH", false,-1, 31,0);
        tracep->declBus(c+624,"top genblk1[5] engine pixel_map M1 a", false,-1, 24,0);
        tracep->declBus(c+222,"top genblk1[5] engine pixel_map M1 b", false,-1, 24,0);
        tracep->declBit(c+620,"top genblk1[5] engine pixel_map M1 rst", false,-1);
        tracep->declBus(c+220,"top genblk1[5] engine pixel_map M1 result", false,-1, 24,0);
        tracep->declBus(c+621,"top genblk1[5] engine pixel_map M1 ENGINE_INT_WIDTH", false,-1, 31,0);
        tracep->declQuad(c+224,"top genblk1[5] engine pixel_map M1 product", false,-1, 49,0);
        tracep->declBus(c+618,"top genblk1[5] engine pixel_map M2 ENGINE_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+619,"top genblk1[5] engine pixel_map M2 ENGINE_FRACT_WIDTH", false,-1, 31,0);
        tracep->declBus(c+624,"top genblk1[5] engine pixel_map M2 a", false,-1, 24,0);
        tracep->declBus(c+223,"top genblk1[5] engine pixel_map M2 b", false,-1, 24,0);
        tracep->declBit(c+620,"top genblk1[5] engine pixel_map M2 rst", false,-1);
        tracep->declBus(c+221,"top genblk1[5] engine pixel_map M2 result", false,-1, 24,0);
        tracep->declBus(c+621,"top genblk1[5] engine pixel_map M2 ENGINE_INT_WIDTH", false,-1, 31,0);
        tracep->declQuad(c+226,"top genblk1[5] engine pixel_map M2 product", false,-1, 49,0);
        tracep->declBus(c+608,"top genblk1[5] engine R0 WIDTH", false,-1, 31,0);
        tracep->declBit(c+578,"top genblk1[5] engine R0 clk", false,-1);
        tracep->declBit(c+319,"top genblk1[5] engine R0 rst", false,-1);
        tracep->declBit(c+318,"top genblk1[5] engine R0 en", false,-1);
        tracep->declBus(c+228,"top genblk1[5] engine R0 in", false,-1, 5,0);
        tracep->declBus(c+209,"top genblk1[5] engine R0 out", false,-1, 5,0);
        tracep->declBus(c+618,"top genblk1[5] engine calc_stage_1 ENGINE_DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+578,"top genblk1[5] engine calc_stage_1 clk", false,-1);
        tracep->declBit(c+319,"top genblk1[5] engine calc_stage_1 reset", false,-1);
        tracep->declBit(c+317,"top genblk1[5] engine calc_stage_1 en", false,-1);
        tracep->declBus(c+216,"top genblk1[5] engine calc_stage_1 zr_next", false,-1, 24,0);
        tracep->declBus(c+262,"top genblk1[5] engine calc_stage_1 zi_next", false,-1, 24,0);
        tracep->declBus(c+214,"top genblk1[5] engine calc_stage_1 zr", false,-1, 24,0);
        tracep->declBus(c+215,"top genblk1[5] engine calc_stage_1 zi", false,-1, 24,0);
        tracep->declBus(c+618,"top genblk1[5] engine calc_stage_1 R1 WIDTH", false,-1, 31,0);
        tracep->declBit(c+578,"top genblk1[5] engine calc_stage_1 R1 clk", false,-1);
        tracep->declBit(c+319,"top genblk1[5] engine calc_stage_1 R1 rst", false,-1);
        tracep->declBit(c+317,"top genblk1[5] engine calc_stage_1 R1 en", false,-1);
        tracep->declBus(c+216,"top genblk1[5] engine calc_stage_1 R1 in", false,-1, 24,0);
        tracep->declBus(c+214,"top genblk1[5] engine calc_stage_1 R1 out", false,-1, 24,0);
        tracep->declBus(c+618,"top genblk1[5] engine calc_stage_1 R2 WIDTH", false,-1, 31,0);
        tracep->declBit(c+578,"top genblk1[5] engine calc_stage_1 R2 clk", false,-1);
        tracep->declBit(c+319,"top genblk1[5] engine calc_stage_1 R2 rst", false,-1);
        tracep->declBit(c+317,"top genblk1[5] engine calc_stage_1 R2 en", false,-1);
        tracep->declBus(c+262,"top genblk1[5] engine calc_stage_1 R2 in", false,-1, 24,0);
        tracep->declBus(c+215,"top genblk1[5] engine calc_stage_1 R2 out", false,-1, 24,0);
        tracep->declBus(c+618,"top genblk1[5] engine M5 ENGINE_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+619,"top genblk1[5] engine M5 ENGINE_FRACT_WIDTH", false,-1, 31,0);
        tracep->declBus(c+214,"top genblk1[5] engine M5 a", false,-1, 24,0);
        tracep->declBus(c+214,"top genblk1[5] engine M5 b", false,-1, 24,0);
        tracep->declBit(c+319,"top genblk1[5] engine M5 rst", false,-1);
        tracep->declBus(c+263,"top genblk1[5] engine M5 result", false,-1, 24,0);
        tracep->declBus(c+621,"top genblk1[5] engine M5 ENGINE_INT_WIDTH", false,-1, 31,0);
        tracep->declQuad(c+229,"top genblk1[5] engine M5 product", false,-1, 49,0);
        tracep->declBus(c+618,"top genblk1[5] engine M6 ENGINE_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+619,"top genblk1[5] engine M6 ENGINE_FRACT_WIDTH", false,-1, 31,0);
        tracep->declBus(c+215,"top genblk1[5] engine M6 a", false,-1, 24,0);
        tracep->declBus(c+215,"top genblk1[5] engine M6 b", false,-1, 24,0);
        tracep->declBit(c+319,"top genblk1[5] engine M6 rst", false,-1);
        tracep->declBus(c+264,"top genblk1[5] engine M6 result", false,-1, 24,0);
        tracep->declBus(c+621,"top genblk1[5] engine M6 ENGINE_INT_WIDTH", false,-1, 31,0);
        tracep->declQuad(c+231,"top genblk1[5] engine M6 product", false,-1, 49,0);
        tracep->declBus(c+618,"top genblk1[5] engine calc_stage_2 ENGINE_DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+578,"top genblk1[5] engine calc_stage_2 clk", false,-1);
        tracep->declBit(c+319,"top genblk1[5] engine calc_stage_2 reset", false,-1);
        tracep->declBit(c+318,"top genblk1[5] engine calc_stage_2 en", false,-1);
        tracep->declBus(c+263,"top genblk1[5] engine calc_stage_2 zr2_next", false,-1, 24,0);
        tracep->declBus(c+264,"top genblk1[5] engine calc_stage_2 zi2_next", false,-1, 24,0);
        tracep->declBus(c+217,"top genblk1[5] engine calc_stage_2 zr2", false,-1, 24,0);
        tracep->declBus(c+218,"top genblk1[5] engine calc_stage_2 zi2", false,-1, 24,0);
        tracep->declBus(c+618,"top genblk1[5] engine calc_stage_2 R3 WIDTH", false,-1, 31,0);
        tracep->declBit(c+578,"top genblk1[5] engine calc_stage_2 R3 clk", false,-1);
        tracep->declBit(c+319,"top genblk1[5] engine calc_stage_2 R3 rst", false,-1);
        tracep->declBit(c+318,"top genblk1[5] engine calc_stage_2 R3 en", false,-1);
        tracep->declBus(c+263,"top genblk1[5] engine calc_stage_2 R3 in", false,-1, 24,0);
        tracep->declBus(c+217,"top genblk1[5] engine calc_stage_2 R3 out", false,-1, 24,0);
        tracep->declBus(c+618,"top genblk1[5] engine calc_stage_2 R4 WIDTH", false,-1, 31,0);
        tracep->declBit(c+578,"top genblk1[5] engine calc_stage_2 R4 clk", false,-1);
        tracep->declBit(c+319,"top genblk1[5] engine calc_stage_2 R4 rst", false,-1);
        tracep->declBit(c+318,"top genblk1[5] engine calc_stage_2 R4 en", false,-1);
        tracep->declBus(c+264,"top genblk1[5] engine calc_stage_2 R4 in", false,-1, 24,0);
        tracep->declBus(c+218,"top genblk1[5] engine calc_stage_2 R4 out", false,-1, 24,0);
        tracep->declBus(c+618,"top genblk1[5] engine M7 ENGINE_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+619,"top genblk1[5] engine M7 ENGINE_FRACT_WIDTH", false,-1, 31,0);
        tracep->declBus(c+214,"top genblk1[5] engine M7 a", false,-1, 24,0);
        tracep->declBus(c+215,"top genblk1[5] engine M7 b", false,-1, 24,0);
        tracep->declBit(c+319,"top genblk1[5] engine M7 rst", false,-1);
        tracep->declBus(c+265,"top genblk1[5] engine M7 result", false,-1, 24,0);
        tracep->declBus(c+621,"top genblk1[5] engine M7 ENGINE_INT_WIDTH", false,-1, 31,0);
        tracep->declQuad(c+233,"top genblk1[5] engine M7 product", false,-1, 49,0);
        tracep->declBit(c+578,"top genblk1[5] engine SM clk", false,-1);
        tracep->declBit(c+620,"top genblk1[5] engine SM rst", false,-1);
        tracep->declBit(c+605,"top genblk1[5] engine SM finished", false,-1);
        tracep->declBit(c+577,"top genblk1[5] engine SM full_queue", false,-1);
        tracep->declBit(c+261,"top genblk1[5] engine SM distributor_ready", false,-1);
        tracep->declBit(c+319,"top genblk1[5] engine SM init", false,-1);
        tracep->declBit(c+316,"top genblk1[5] engine SM en_pixel_map", false,-1);
        tracep->declBit(c+317,"top genblk1[5] engine SM en_stage_1", false,-1);
        tracep->declBit(c+318,"top genblk1[5] engine SM en_stage_2", false,-1);
        tracep->declBus(c+625,"top genblk1[5] engine SM INIT", false,-1, 31,0);
        tracep->declBus(c+626,"top genblk1[5] engine SM CALC_STAGE_1", false,-1, 31,0);
        tracep->declBus(c+627,"top genblk1[5] engine SM CALC_STAGE_2", false,-1, 31,0);
        tracep->declBus(c+628,"top genblk1[5] engine SM ESCAPE", false,-1, 31,0);
        tracep->declBus(c+235,"top genblk1[5] engine SM state", false,-1, 1,0);
        tracep->declBus(c+320,"top genblk1[5] engine SM next", false,-1, 1,0);
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
        tracep->fullIData(oldp+1,(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__unnamedblk1__DOT__i),32);
        tracep->fullIData(oldp+2,(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__unnamedblk1__DOT__i),32);
        tracep->fullIData(oldp+3,(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__unnamedblk1__DOT__i),32);
        tracep->fullIData(oldp+4,(vlTOPp->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__unnamedblk1__DOT__i),32);
        tracep->fullIData(oldp+5,(vlTOPp->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__unnamedblk1__DOT__i),32);
        tracep->fullIData(oldp+6,(vlTOPp->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__unnamedblk1__DOT__i),32);
        tracep->fullIData(oldp+7,(vlTOPp->top__DOT__colour_o_wire),24);
        tracep->fullSData(oldp+8,(vlTOPp->top__DOT__xpixel_wire),10);
        tracep->fullSData(oldp+9,(vlTOPp->top__DOT__ypixel_wire),10);
        tracep->fullSData(oldp+10,(vlTOPp->top__DOT__x[0]),10);
        tracep->fullSData(oldp+11,(vlTOPp->top__DOT__x[1]),10);
        tracep->fullSData(oldp+12,(vlTOPp->top__DOT__x[2]),10);
        tracep->fullSData(oldp+13,(vlTOPp->top__DOT__x[3]),10);
        tracep->fullSData(oldp+14,(vlTOPp->top__DOT__x[4]),10);
        tracep->fullSData(oldp+15,(vlTOPp->top__DOT__x[5]),10);
        tracep->fullSData(oldp+16,(vlTOPp->top__DOT__y[0]),10);
        tracep->fullSData(oldp+17,(vlTOPp->top__DOT__y[1]),10);
        tracep->fullSData(oldp+18,(vlTOPp->top__DOT__y[2]),10);
        tracep->fullSData(oldp+19,(vlTOPp->top__DOT__y[3]),10);
        tracep->fullSData(oldp+20,(vlTOPp->top__DOT__y[4]),10);
        tracep->fullSData(oldp+21,(vlTOPp->top__DOT__y[5]),10);
        tracep->fullIData(oldp+22,(vlTOPp->top__DOT__iterations_bus[0]),32);
        tracep->fullIData(oldp+23,(vlTOPp->top__DOT__iterations_bus[1]),32);
        tracep->fullIData(oldp+24,(vlTOPp->top__DOT__iterations_bus[2]),32);
        tracep->fullIData(oldp+25,(vlTOPp->top__DOT__iterations_bus[3]),32);
        tracep->fullIData(oldp+26,(vlTOPp->top__DOT__iterations_bus[4]),32);
        tracep->fullIData(oldp+27,(vlTOPp->top__DOT__iterations_bus[5]),32);
        tracep->fullSData(oldp+28,(vlTOPp->top__DOT____Vcellout__distributor__x[0]),10);
        tracep->fullSData(oldp+29,(vlTOPp->top__DOT____Vcellout__distributor__x[1]),10);
        tracep->fullSData(oldp+30,(vlTOPp->top__DOT____Vcellout__distributor__x[2]),10);
        tracep->fullSData(oldp+31,(vlTOPp->top__DOT____Vcellout__distributor__x[3]),10);
        tracep->fullSData(oldp+32,(vlTOPp->top__DOT____Vcellout__distributor__x[4]),10);
        tracep->fullSData(oldp+33,(vlTOPp->top__DOT____Vcellout__distributor__x[5]),10);
        tracep->fullSData(oldp+34,(vlTOPp->top__DOT____Vcellout__distributor__y[0]),10);
        tracep->fullSData(oldp+35,(vlTOPp->top__DOT____Vcellout__distributor__y[1]),10);
        tracep->fullSData(oldp+36,(vlTOPp->top__DOT____Vcellout__distributor__y[2]),10);
        tracep->fullSData(oldp+37,(vlTOPp->top__DOT____Vcellout__distributor__y[3]),10);
        tracep->fullSData(oldp+38,(vlTOPp->top__DOT____Vcellout__distributor__y[4]),10);
        tracep->fullSData(oldp+39,(vlTOPp->top__DOT____Vcellout__distributor__y[5]),10);
        tracep->fullSData(oldp+40,(vlTOPp->top__DOT__distributor__DOT__x0),10);
        tracep->fullSData(oldp+41,(vlTOPp->top__DOT__distributor__DOT__y0),10);
        tracep->fullIData(oldp+42,(vlTOPp->top__DOT____Vcellinp__lut_rom__iterations[0]),32);
        tracep->fullIData(oldp+43,(vlTOPp->top__DOT____Vcellinp__lut_rom__iterations[1]),32);
        tracep->fullIData(oldp+44,(vlTOPp->top__DOT____Vcellinp__lut_rom__iterations[2]),32);
        tracep->fullIData(oldp+45,(vlTOPp->top__DOT____Vcellinp__lut_rom__iterations[3]),32);
        tracep->fullIData(oldp+46,(vlTOPp->top__DOT____Vcellinp__lut_rom__iterations[4]),32);
        tracep->fullIData(oldp+47,(vlTOPp->top__DOT____Vcellinp__lut_rom__iterations[5]),32);
        tracep->fullIData(oldp+48,(vlTOPp->top__DOT____Vcellout__lut_rom__rgb_val[0]),24);
        tracep->fullIData(oldp+49,(vlTOPp->top__DOT____Vcellout__lut_rom__rgb_val[1]),24);
        tracep->fullIData(oldp+50,(vlTOPp->top__DOT____Vcellout__lut_rom__rgb_val[2]),24);
        tracep->fullIData(oldp+51,(vlTOPp->top__DOT____Vcellout__lut_rom__rgb_val[3]),24);
        tracep->fullIData(oldp+52,(vlTOPp->top__DOT____Vcellout__lut_rom__rgb_val[4]),24);
        tracep->fullIData(oldp+53,(vlTOPp->top__DOT____Vcellout__lut_rom__rgb_val[5]),24);
        tracep->fullSData(oldp+54,(vlTOPp->top__DOT__combinator_block__DOT__xpixel),10);
        tracep->fullSData(oldp+55,(vlTOPp->top__DOT__combinator_block__DOT__ypixel),10);
        tracep->fullIData(oldp+56,(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__unnamedblk2__DOT__i),32);
        tracep->fullIData(oldp+57,(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__unnamedblk2__DOT__i),32);
        tracep->fullIData(oldp+58,(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__unnamedblk2__DOT__i),32);
        tracep->fullIData(oldp+59,(vlTOPp->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__unnamedblk2__DOT__i),32);
        tracep->fullIData(oldp+60,(vlTOPp->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__unnamedblk2__DOT__i),32);
        tracep->fullIData(oldp+61,(vlTOPp->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__unnamedblk2__DOT__i),32);
        tracep->fullSData(oldp+62,(vlTOPp->top__DOT__x
                                   [0U]),10);
        tracep->fullSData(oldp+63,(vlTOPp->top__DOT__y
                                   [0U]),10);
        tracep->fullCData(oldp+64,(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__curr_iterations),6);
        tracep->fullSData(oldp+65,(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.xpixel),10);
        tracep->fullSData(oldp+66,(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.ypixel),10);
        tracep->fullIData(oldp+67,(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__x),25);
        tracep->fullIData(oldp+68,(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__y),25);
        tracep->fullIData(oldp+69,(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__zr),25);
        tracep->fullIData(oldp+70,(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__zi),25);
        tracep->fullIData(oldp+71,((0x1ffffffU & ((vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__zr2 
                                                   - vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__zi2) 
                                                  + vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__x))),25);
        tracep->fullIData(oldp+72,(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__zr2),25);
        tracep->fullIData(oldp+73,(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__zi2),25);
        tracep->fullIData(oldp+74,(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__distance),25);
        tracep->fullIData(oldp+75,((0x1ffffffU & (IData)(
                                                         (0x3fffffffULL 
                                                          & (VL_MULS_QQQ(50,50,50, 0x199aULL, 
                                                                         (0x3ffffffffffffULL 
                                                                          & VL_EXTENDS_QI(50,25, 
                                                                                (0x1ffffffU 
                                                                                & (vlTOPp->top__DOT__x
                                                                                [0U] 
                                                                                << 0xeU))))) 
                                                             >> 0x14U))))),25);
        tracep->fullIData(oldp+76,((0x1ffffffU & (IData)(
                                                         (0x3fffffffULL 
                                                          & (VL_MULS_QQQ(50,50,50, 0x199aULL, 
                                                                         (0x3ffffffffffffULL 
                                                                          & VL_EXTENDS_QI(50,25, 
                                                                                (0x1ffffffU 
                                                                                & (vlTOPp->top__DOT__y
                                                                                [0U] 
                                                                                << 0xeU))))) 
                                                             >> 0x14U))))),25);
        tracep->fullIData(oldp+77,((0x1ffffffU & (vlTOPp->top__DOT__x
                                                  [0U] 
                                                  << 0xeU))),25);
        tracep->fullIData(oldp+78,((0x1ffffffU & (vlTOPp->top__DOT__y
                                                  [0U] 
                                                  << 0xeU))),25);
        tracep->fullQData(oldp+79,((0x3ffffffffffffULL 
                                    & VL_MULS_QQQ(50,50,50, 0x199aULL, 
                                                  (0x3ffffffffffffULL 
                                                   & VL_EXTENDS_QI(50,25, 
                                                                   (0x1ffffffU 
                                                                    & (vlTOPp->top__DOT__x
                                                                       [0U] 
                                                                       << 0xeU))))))),50);
        tracep->fullQData(oldp+81,((0x3ffffffffffffULL 
                                    & VL_MULS_QQQ(50,50,50, 0x199aULL, 
                                                  (0x3ffffffffffffULL 
                                                   & VL_EXTENDS_QI(50,25, 
                                                                   (0x1ffffffU 
                                                                    & (vlTOPp->top__DOT__y
                                                                       [0U] 
                                                                       << 0xeU))))))),50);
        tracep->fullCData(oldp+83,((0x3fU & ((IData)(1U) 
                                             + (IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__curr_iterations)))),6);
        tracep->fullQData(oldp+84,((0x3ffffffffffffULL 
                                    & VL_MULS_QQQ(50,50,50, 
                                                  (0x3ffffffffffffULL 
                                                   & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__zr)), 
                                                  (0x3ffffffffffffULL 
                                                   & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__zr))))),50);
        tracep->fullQData(oldp+86,((0x3ffffffffffffULL 
                                    & VL_MULS_QQQ(50,50,50, 
                                                  (0x3ffffffffffffULL 
                                                   & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__zi)), 
                                                  (0x3ffffffffffffULL 
                                                   & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__zi))))),50);
        tracep->fullQData(oldp+88,((0x3ffffffffffffULL 
                                    & VL_MULS_QQQ(50,50,50, 
                                                  (0x3ffffffffffffULL 
                                                   & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__zr)), 
                                                  (0x3ffffffffffffULL 
                                                   & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__zi))))),50);
        tracep->fullCData(oldp+90,(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__SM__DOT__state),2);
        tracep->fullSData(oldp+91,(vlTOPp->top__DOT__x
                                   [1U]),10);
        tracep->fullSData(oldp+92,(vlTOPp->top__DOT__y
                                   [1U]),10);
        tracep->fullCData(oldp+93,(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__curr_iterations),6);
        tracep->fullSData(oldp+94,(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.xpixel),10);
        tracep->fullSData(oldp+95,(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.ypixel),10);
        tracep->fullIData(oldp+96,(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__x),25);
        tracep->fullIData(oldp+97,(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__y),25);
        tracep->fullIData(oldp+98,(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__zr),25);
        tracep->fullIData(oldp+99,(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__zi),25);
        tracep->fullIData(oldp+100,((0x1ffffffU & (
                                                   (vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__zr2 
                                                    - vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__zi2) 
                                                   + vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__x))),25);
        tracep->fullIData(oldp+101,(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__zr2),25);
        tracep->fullIData(oldp+102,(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__zi2),25);
        tracep->fullIData(oldp+103,(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__distance),25);
        tracep->fullIData(oldp+104,((0x1ffffffU & (IData)(
                                                          (0x3fffffffULL 
                                                           & (VL_MULS_QQQ(50,50,50, 0x199aULL, 
                                                                          (0x3ffffffffffffULL 
                                                                           & VL_EXTENDS_QI(50,25, 
                                                                                (0x1ffffffU 
                                                                                & (vlTOPp->top__DOT__x
                                                                                [1U] 
                                                                                << 0xeU))))) 
                                                              >> 0x14U))))),25);
        tracep->fullIData(oldp+105,((0x1ffffffU & (IData)(
                                                          (0x3fffffffULL 
                                                           & (VL_MULS_QQQ(50,50,50, 0x199aULL, 
                                                                          (0x3ffffffffffffULL 
                                                                           & VL_EXTENDS_QI(50,25, 
                                                                                (0x1ffffffU 
                                                                                & (vlTOPp->top__DOT__y
                                                                                [1U] 
                                                                                << 0xeU))))) 
                                                              >> 0x14U))))),25);
        tracep->fullIData(oldp+106,((0x1ffffffU & (
                                                   vlTOPp->top__DOT__x
                                                   [1U] 
                                                   << 0xeU))),25);
        tracep->fullIData(oldp+107,((0x1ffffffU & (
                                                   vlTOPp->top__DOT__y
                                                   [1U] 
                                                   << 0xeU))),25);
        tracep->fullQData(oldp+108,((0x3ffffffffffffULL 
                                     & VL_MULS_QQQ(50,50,50, 0x199aULL, 
                                                   (0x3ffffffffffffULL 
                                                    & VL_EXTENDS_QI(50,25, 
                                                                    (0x1ffffffU 
                                                                     & (vlTOPp->top__DOT__x
                                                                        [1U] 
                                                                        << 0xeU))))))),50);
        tracep->fullQData(oldp+110,((0x3ffffffffffffULL 
                                     & VL_MULS_QQQ(50,50,50, 0x199aULL, 
                                                   (0x3ffffffffffffULL 
                                                    & VL_EXTENDS_QI(50,25, 
                                                                    (0x1ffffffU 
                                                                     & (vlTOPp->top__DOT__y
                                                                        [1U] 
                                                                        << 0xeU))))))),50);
        tracep->fullCData(oldp+112,((0x3fU & ((IData)(1U) 
                                              + (IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__curr_iterations)))),6);
        tracep->fullQData(oldp+113,((0x3ffffffffffffULL 
                                     & VL_MULS_QQQ(50,50,50, 
                                                   (0x3ffffffffffffULL 
                                                    & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__zr)), 
                                                   (0x3ffffffffffffULL 
                                                    & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__zr))))),50);
        tracep->fullQData(oldp+115,((0x3ffffffffffffULL 
                                     & VL_MULS_QQQ(50,50,50, 
                                                   (0x3ffffffffffffULL 
                                                    & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__zi)), 
                                                   (0x3ffffffffffffULL 
                                                    & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__zi))))),50);
        tracep->fullQData(oldp+117,((0x3ffffffffffffULL 
                                     & VL_MULS_QQQ(50,50,50, 
                                                   (0x3ffffffffffffULL 
                                                    & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__zr)), 
                                                   (0x3ffffffffffffULL 
                                                    & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__zi))))),50);
        tracep->fullCData(oldp+119,(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__SM__DOT__state),2);
        tracep->fullSData(oldp+120,(vlTOPp->top__DOT__x
                                    [2U]),10);
        tracep->fullSData(oldp+121,(vlTOPp->top__DOT__y
                                    [2U]),10);
        tracep->fullCData(oldp+122,(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__curr_iterations),6);
        tracep->fullSData(oldp+123,(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.xpixel),10);
        tracep->fullSData(oldp+124,(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.ypixel),10);
        tracep->fullIData(oldp+125,(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__x),25);
        tracep->fullIData(oldp+126,(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__y),25);
        tracep->fullIData(oldp+127,(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__zr),25);
        tracep->fullIData(oldp+128,(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__zi),25);
        tracep->fullIData(oldp+129,((0x1ffffffU & (
                                                   (vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__zr2 
                                                    - vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__zi2) 
                                                   + vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__x))),25);
        tracep->fullIData(oldp+130,(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__zr2),25);
        tracep->fullIData(oldp+131,(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__zi2),25);
        tracep->fullIData(oldp+132,(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__distance),25);
        tracep->fullIData(oldp+133,((0x1ffffffU & (IData)(
                                                          (0x3fffffffULL 
                                                           & (VL_MULS_QQQ(50,50,50, 0x199aULL, 
                                                                          (0x3ffffffffffffULL 
                                                                           & VL_EXTENDS_QI(50,25, 
                                                                                (0x1ffffffU 
                                                                                & (vlTOPp->top__DOT__x
                                                                                [2U] 
                                                                                << 0xeU))))) 
                                                              >> 0x14U))))),25);
        tracep->fullIData(oldp+134,((0x1ffffffU & (IData)(
                                                          (0x3fffffffULL 
                                                           & (VL_MULS_QQQ(50,50,50, 0x199aULL, 
                                                                          (0x3ffffffffffffULL 
                                                                           & VL_EXTENDS_QI(50,25, 
                                                                                (0x1ffffffU 
                                                                                & (vlTOPp->top__DOT__y
                                                                                [2U] 
                                                                                << 0xeU))))) 
                                                              >> 0x14U))))),25);
        tracep->fullIData(oldp+135,((0x1ffffffU & (
                                                   vlTOPp->top__DOT__x
                                                   [2U] 
                                                   << 0xeU))),25);
        tracep->fullIData(oldp+136,((0x1ffffffU & (
                                                   vlTOPp->top__DOT__y
                                                   [2U] 
                                                   << 0xeU))),25);
        tracep->fullQData(oldp+137,((0x3ffffffffffffULL 
                                     & VL_MULS_QQQ(50,50,50, 0x199aULL, 
                                                   (0x3ffffffffffffULL 
                                                    & VL_EXTENDS_QI(50,25, 
                                                                    (0x1ffffffU 
                                                                     & (vlTOPp->top__DOT__x
                                                                        [2U] 
                                                                        << 0xeU))))))),50);
        tracep->fullQData(oldp+139,((0x3ffffffffffffULL 
                                     & VL_MULS_QQQ(50,50,50, 0x199aULL, 
                                                   (0x3ffffffffffffULL 
                                                    & VL_EXTENDS_QI(50,25, 
                                                                    (0x1ffffffU 
                                                                     & (vlTOPp->top__DOT__y
                                                                        [2U] 
                                                                        << 0xeU))))))),50);
        tracep->fullCData(oldp+141,((0x3fU & ((IData)(1U) 
                                              + (IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__curr_iterations)))),6);
        tracep->fullQData(oldp+142,((0x3ffffffffffffULL 
                                     & VL_MULS_QQQ(50,50,50, 
                                                   (0x3ffffffffffffULL 
                                                    & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__zr)), 
                                                   (0x3ffffffffffffULL 
                                                    & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__zr))))),50);
        tracep->fullQData(oldp+144,((0x3ffffffffffffULL 
                                     & VL_MULS_QQQ(50,50,50, 
                                                   (0x3ffffffffffffULL 
                                                    & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__zi)), 
                                                   (0x3ffffffffffffULL 
                                                    & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__zi))))),50);
        tracep->fullQData(oldp+146,((0x3ffffffffffffULL 
                                     & VL_MULS_QQQ(50,50,50, 
                                                   (0x3ffffffffffffULL 
                                                    & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__zr)), 
                                                   (0x3ffffffffffffULL 
                                                    & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__zi))))),50);
        tracep->fullCData(oldp+148,(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__SM__DOT__state),2);
        tracep->fullSData(oldp+149,(vlTOPp->top__DOT__x
                                    [3U]),10);
        tracep->fullSData(oldp+150,(vlTOPp->top__DOT__y
                                    [3U]),10);
        tracep->fullCData(oldp+151,(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__curr_iterations),6);
        tracep->fullSData(oldp+152,(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.xpixel),10);
        tracep->fullSData(oldp+153,(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.ypixel),10);
        tracep->fullIData(oldp+154,(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__x),25);
        tracep->fullIData(oldp+155,(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__y),25);
        tracep->fullIData(oldp+156,(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__zr),25);
        tracep->fullIData(oldp+157,(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__zi),25);
        tracep->fullIData(oldp+158,((0x1ffffffU & (
                                                   (vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__zr2 
                                                    - vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__zi2) 
                                                   + vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__x))),25);
        tracep->fullIData(oldp+159,(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__zr2),25);
        tracep->fullIData(oldp+160,(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__zi2),25);
        tracep->fullIData(oldp+161,(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__distance),25);
        tracep->fullIData(oldp+162,((0x1ffffffU & (IData)(
                                                          (0x3fffffffULL 
                                                           & (VL_MULS_QQQ(50,50,50, 0x199aULL, 
                                                                          (0x3ffffffffffffULL 
                                                                           & VL_EXTENDS_QI(50,25, 
                                                                                (0x1ffffffU 
                                                                                & (vlTOPp->top__DOT__x
                                                                                [3U] 
                                                                                << 0xeU))))) 
                                                              >> 0x14U))))),25);
        tracep->fullIData(oldp+163,((0x1ffffffU & (IData)(
                                                          (0x3fffffffULL 
                                                           & (VL_MULS_QQQ(50,50,50, 0x199aULL, 
                                                                          (0x3ffffffffffffULL 
                                                                           & VL_EXTENDS_QI(50,25, 
                                                                                (0x1ffffffU 
                                                                                & (vlTOPp->top__DOT__y
                                                                                [3U] 
                                                                                << 0xeU))))) 
                                                              >> 0x14U))))),25);
        tracep->fullIData(oldp+164,((0x1ffffffU & (
                                                   vlTOPp->top__DOT__x
                                                   [3U] 
                                                   << 0xeU))),25);
        tracep->fullIData(oldp+165,((0x1ffffffU & (
                                                   vlTOPp->top__DOT__y
                                                   [3U] 
                                                   << 0xeU))),25);
        tracep->fullQData(oldp+166,((0x3ffffffffffffULL 
                                     & VL_MULS_QQQ(50,50,50, 0x199aULL, 
                                                   (0x3ffffffffffffULL 
                                                    & VL_EXTENDS_QI(50,25, 
                                                                    (0x1ffffffU 
                                                                     & (vlTOPp->top__DOT__x
                                                                        [3U] 
                                                                        << 0xeU))))))),50);
        tracep->fullQData(oldp+168,((0x3ffffffffffffULL 
                                     & VL_MULS_QQQ(50,50,50, 0x199aULL, 
                                                   (0x3ffffffffffffULL 
                                                    & VL_EXTENDS_QI(50,25, 
                                                                    (0x1ffffffU 
                                                                     & (vlTOPp->top__DOT__y
                                                                        [3U] 
                                                                        << 0xeU))))))),50);
        tracep->fullCData(oldp+170,((0x3fU & ((IData)(1U) 
                                              + (IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__curr_iterations)))),6);
        tracep->fullQData(oldp+171,((0x3ffffffffffffULL 
                                     & VL_MULS_QQQ(50,50,50, 
                                                   (0x3ffffffffffffULL 
                                                    & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__zr)), 
                                                   (0x3ffffffffffffULL 
                                                    & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__zr))))),50);
        tracep->fullQData(oldp+173,((0x3ffffffffffffULL 
                                     & VL_MULS_QQQ(50,50,50, 
                                                   (0x3ffffffffffffULL 
                                                    & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__zi)), 
                                                   (0x3ffffffffffffULL 
                                                    & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__zi))))),50);
        tracep->fullQData(oldp+175,((0x3ffffffffffffULL 
                                     & VL_MULS_QQQ(50,50,50, 
                                                   (0x3ffffffffffffULL 
                                                    & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__zr)), 
                                                   (0x3ffffffffffffULL 
                                                    & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__zi))))),50);
        tracep->fullCData(oldp+177,(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__SM__DOT__state),2);
        tracep->fullSData(oldp+178,(vlTOPp->top__DOT__x
                                    [4U]),10);
        tracep->fullSData(oldp+179,(vlTOPp->top__DOT__y
                                    [4U]),10);
        tracep->fullCData(oldp+180,(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__curr_iterations),6);
        tracep->fullSData(oldp+181,(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.xpixel),10);
        tracep->fullSData(oldp+182,(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.ypixel),10);
        tracep->fullIData(oldp+183,(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__x),25);
        tracep->fullIData(oldp+184,(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__y),25);
        tracep->fullIData(oldp+185,(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__zr),25);
        tracep->fullIData(oldp+186,(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__zi),25);
        tracep->fullIData(oldp+187,((0x1ffffffU & (
                                                   (vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__zr2 
                                                    - vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__zi2) 
                                                   + vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__x))),25);
        tracep->fullIData(oldp+188,(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__zr2),25);
        tracep->fullIData(oldp+189,(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__zi2),25);
        tracep->fullIData(oldp+190,(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__distance),25);
        tracep->fullIData(oldp+191,((0x1ffffffU & (IData)(
                                                          (0x3fffffffULL 
                                                           & (VL_MULS_QQQ(50,50,50, 0x199aULL, 
                                                                          (0x3ffffffffffffULL 
                                                                           & VL_EXTENDS_QI(50,25, 
                                                                                (0x1ffffffU 
                                                                                & (vlTOPp->top__DOT__x
                                                                                [4U] 
                                                                                << 0xeU))))) 
                                                              >> 0x14U))))),25);
        tracep->fullIData(oldp+192,((0x1ffffffU & (IData)(
                                                          (0x3fffffffULL 
                                                           & (VL_MULS_QQQ(50,50,50, 0x199aULL, 
                                                                          (0x3ffffffffffffULL 
                                                                           & VL_EXTENDS_QI(50,25, 
                                                                                (0x1ffffffU 
                                                                                & (vlTOPp->top__DOT__y
                                                                                [4U] 
                                                                                << 0xeU))))) 
                                                              >> 0x14U))))),25);
        tracep->fullIData(oldp+193,((0x1ffffffU & (
                                                   vlTOPp->top__DOT__x
                                                   [4U] 
                                                   << 0xeU))),25);
        tracep->fullIData(oldp+194,((0x1ffffffU & (
                                                   vlTOPp->top__DOT__y
                                                   [4U] 
                                                   << 0xeU))),25);
        tracep->fullQData(oldp+195,((0x3ffffffffffffULL 
                                     & VL_MULS_QQQ(50,50,50, 0x199aULL, 
                                                   (0x3ffffffffffffULL 
                                                    & VL_EXTENDS_QI(50,25, 
                                                                    (0x1ffffffU 
                                                                     & (vlTOPp->top__DOT__x
                                                                        [4U] 
                                                                        << 0xeU))))))),50);
        tracep->fullQData(oldp+197,((0x3ffffffffffffULL 
                                     & VL_MULS_QQQ(50,50,50, 0x199aULL, 
                                                   (0x3ffffffffffffULL 
                                                    & VL_EXTENDS_QI(50,25, 
                                                                    (0x1ffffffU 
                                                                     & (vlTOPp->top__DOT__y
                                                                        [4U] 
                                                                        << 0xeU))))))),50);
        tracep->fullCData(oldp+199,((0x3fU & ((IData)(1U) 
                                              + (IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__curr_iterations)))),6);
        tracep->fullQData(oldp+200,((0x3ffffffffffffULL 
                                     & VL_MULS_QQQ(50,50,50, 
                                                   (0x3ffffffffffffULL 
                                                    & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__zr)), 
                                                   (0x3ffffffffffffULL 
                                                    & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__zr))))),50);
        tracep->fullQData(oldp+202,((0x3ffffffffffffULL 
                                     & VL_MULS_QQQ(50,50,50, 
                                                   (0x3ffffffffffffULL 
                                                    & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__zi)), 
                                                   (0x3ffffffffffffULL 
                                                    & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__zi))))),50);
        tracep->fullQData(oldp+204,((0x3ffffffffffffULL 
                                     & VL_MULS_QQQ(50,50,50, 
                                                   (0x3ffffffffffffULL 
                                                    & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__zr)), 
                                                   (0x3ffffffffffffULL 
                                                    & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__zi))))),50);
        tracep->fullCData(oldp+206,(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__SM__DOT__state),2);
        tracep->fullSData(oldp+207,(vlTOPp->top__DOT__x
                                    [5U]),10);
        tracep->fullSData(oldp+208,(vlTOPp->top__DOT__y
                                    [5U]),10);
        tracep->fullCData(oldp+209,(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__curr_iterations),6);
        tracep->fullSData(oldp+210,(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.xpixel),10);
        tracep->fullSData(oldp+211,(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.ypixel),10);
        tracep->fullIData(oldp+212,(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__x),25);
        tracep->fullIData(oldp+213,(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__y),25);
        tracep->fullIData(oldp+214,(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__zr),25);
        tracep->fullIData(oldp+215,(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__zi),25);
        tracep->fullIData(oldp+216,((0x1ffffffU & (
                                                   (vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__zr2 
                                                    - vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__zi2) 
                                                   + vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__x))),25);
        tracep->fullIData(oldp+217,(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__zr2),25);
        tracep->fullIData(oldp+218,(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__zi2),25);
        tracep->fullIData(oldp+219,(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__distance),25);
        tracep->fullIData(oldp+220,((0x1ffffffU & (IData)(
                                                          (0x3fffffffULL 
                                                           & (VL_MULS_QQQ(50,50,50, 0x199aULL, 
                                                                          (0x3ffffffffffffULL 
                                                                           & VL_EXTENDS_QI(50,25, 
                                                                                (0x1ffffffU 
                                                                                & (vlTOPp->top__DOT__x
                                                                                [5U] 
                                                                                << 0xeU))))) 
                                                              >> 0x14U))))),25);
        tracep->fullIData(oldp+221,((0x1ffffffU & (IData)(
                                                          (0x3fffffffULL 
                                                           & (VL_MULS_QQQ(50,50,50, 0x199aULL, 
                                                                          (0x3ffffffffffffULL 
                                                                           & VL_EXTENDS_QI(50,25, 
                                                                                (0x1ffffffU 
                                                                                & (vlTOPp->top__DOT__y
                                                                                [5U] 
                                                                                << 0xeU))))) 
                                                              >> 0x14U))))),25);
        tracep->fullIData(oldp+222,((0x1ffffffU & (
                                                   vlTOPp->top__DOT__x
                                                   [5U] 
                                                   << 0xeU))),25);
        tracep->fullIData(oldp+223,((0x1ffffffU & (
                                                   vlTOPp->top__DOT__y
                                                   [5U] 
                                                   << 0xeU))),25);
        tracep->fullQData(oldp+224,((0x3ffffffffffffULL 
                                     & VL_MULS_QQQ(50,50,50, 0x199aULL, 
                                                   (0x3ffffffffffffULL 
                                                    & VL_EXTENDS_QI(50,25, 
                                                                    (0x1ffffffU 
                                                                     & (vlTOPp->top__DOT__x
                                                                        [5U] 
                                                                        << 0xeU))))))),50);
        tracep->fullQData(oldp+226,((0x3ffffffffffffULL 
                                     & VL_MULS_QQQ(50,50,50, 0x199aULL, 
                                                   (0x3ffffffffffffULL 
                                                    & VL_EXTENDS_QI(50,25, 
                                                                    (0x1ffffffU 
                                                                     & (vlTOPp->top__DOT__y
                                                                        [5U] 
                                                                        << 0xeU))))))),50);
        tracep->fullCData(oldp+228,((0x3fU & ((IData)(1U) 
                                              + (IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__curr_iterations)))),6);
        tracep->fullQData(oldp+229,((0x3ffffffffffffULL 
                                     & VL_MULS_QQQ(50,50,50, 
                                                   (0x3ffffffffffffULL 
                                                    & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__zr)), 
                                                   (0x3ffffffffffffULL 
                                                    & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__zr))))),50);
        tracep->fullQData(oldp+231,((0x3ffffffffffffULL 
                                     & VL_MULS_QQQ(50,50,50, 
                                                   (0x3ffffffffffffULL 
                                                    & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__zi)), 
                                                   (0x3ffffffffffffULL 
                                                    & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__zi))))),50);
        tracep->fullQData(oldp+233,((0x3ffffffffffffULL 
                                     & VL_MULS_QQQ(50,50,50, 
                                                   (0x3ffffffffffffULL 
                                                    & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__zr)), 
                                                   (0x3ffffffffffffULL 
                                                    & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__zi))))),50);
        tracep->fullCData(oldp+235,(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__SM__DOT__state),2);
        tracep->fullBit(oldp+236,((((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.en_pixel_map) 
                                    & (vlTOPp->top__DOT__x
                                       [0U] == (IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.xpixel))) 
                                   & (vlTOPp->top__DOT__y
                                      [0U] == (IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.ypixel)))));
        tracep->fullIData(oldp+237,((0x1ffffffU & (
                                                   (((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__init)
                                                      ? 0U
                                                      : 
                                                     (0x1ffffffU 
                                                      & (IData)(
                                                                (0x3fffffffULL 
                                                                 & (VL_MULS_QQQ(50,50,50, 
                                                                                (0x3ffffffffffffULL 
                                                                                & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__zr)), 
                                                                                (0x3ffffffffffffULL 
                                                                                & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__zi))) 
                                                                    >> 0x14U))))) 
                                                    << 1U) 
                                                   + vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__y))),25);
        tracep->fullIData(oldp+238,(((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__init)
                                      ? 0U : (0x1ffffffU 
                                              & (IData)(
                                                        (0x3fffffffULL 
                                                         & (VL_MULS_QQQ(50,50,50, 
                                                                        (0x3ffffffffffffULL 
                                                                         & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__zr)), 
                                                                        (0x3ffffffffffffULL 
                                                                         & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__zr))) 
                                                            >> 0x14U)))))),25);
        tracep->fullIData(oldp+239,(((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__init)
                                      ? 0U : (0x1ffffffU 
                                              & (IData)(
                                                        (0x3fffffffULL 
                                                         & (VL_MULS_QQQ(50,50,50, 
                                                                        (0x3ffffffffffffULL 
                                                                         & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__zi)), 
                                                                        (0x3ffffffffffffULL 
                                                                         & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__zi))) 
                                                            >> 0x14U)))))),25);
        tracep->fullIData(oldp+240,(((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__init)
                                      ? 0U : (0x1ffffffU 
                                              & (IData)(
                                                        (0x3fffffffULL 
                                                         & (VL_MULS_QQQ(50,50,50, 
                                                                        (0x3ffffffffffffULL 
                                                                         & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__zr)), 
                                                                        (0x3ffffffffffffULL 
                                                                         & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__zi))) 
                                                            >> 0x14U)))))),25);
        tracep->fullBit(oldp+241,((((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.en_pixel_map) 
                                    & (vlTOPp->top__DOT__x
                                       [1U] == (IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.xpixel))) 
                                   & (vlTOPp->top__DOT__y
                                      [1U] == (IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.ypixel)))));
        tracep->fullIData(oldp+242,((0x1ffffffU & (
                                                   (((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__init)
                                                      ? 0U
                                                      : 
                                                     (0x1ffffffU 
                                                      & (IData)(
                                                                (0x3fffffffULL 
                                                                 & (VL_MULS_QQQ(50,50,50, 
                                                                                (0x3ffffffffffffULL 
                                                                                & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__zr)), 
                                                                                (0x3ffffffffffffULL 
                                                                                & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__zi))) 
                                                                    >> 0x14U))))) 
                                                    << 1U) 
                                                   + vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__y))),25);
        tracep->fullIData(oldp+243,(((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__init)
                                      ? 0U : (0x1ffffffU 
                                              & (IData)(
                                                        (0x3fffffffULL 
                                                         & (VL_MULS_QQQ(50,50,50, 
                                                                        (0x3ffffffffffffULL 
                                                                         & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__zr)), 
                                                                        (0x3ffffffffffffULL 
                                                                         & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__zr))) 
                                                            >> 0x14U)))))),25);
        tracep->fullIData(oldp+244,(((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__init)
                                      ? 0U : (0x1ffffffU 
                                              & (IData)(
                                                        (0x3fffffffULL 
                                                         & (VL_MULS_QQQ(50,50,50, 
                                                                        (0x3ffffffffffffULL 
                                                                         & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__zi)), 
                                                                        (0x3ffffffffffffULL 
                                                                         & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__zi))) 
                                                            >> 0x14U)))))),25);
        tracep->fullIData(oldp+245,(((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__init)
                                      ? 0U : (0x1ffffffU 
                                              & (IData)(
                                                        (0x3fffffffULL 
                                                         & (VL_MULS_QQQ(50,50,50, 
                                                                        (0x3ffffffffffffULL 
                                                                         & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__zr)), 
                                                                        (0x3ffffffffffffULL 
                                                                         & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__zi))) 
                                                            >> 0x14U)))))),25);
        tracep->fullBit(oldp+246,((((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.en_pixel_map) 
                                    & (vlTOPp->top__DOT__x
                                       [2U] == (IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.xpixel))) 
                                   & (vlTOPp->top__DOT__y
                                      [2U] == (IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.ypixel)))));
        tracep->fullIData(oldp+247,((0x1ffffffU & (
                                                   (((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__init)
                                                      ? 0U
                                                      : 
                                                     (0x1ffffffU 
                                                      & (IData)(
                                                                (0x3fffffffULL 
                                                                 & (VL_MULS_QQQ(50,50,50, 
                                                                                (0x3ffffffffffffULL 
                                                                                & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__zr)), 
                                                                                (0x3ffffffffffffULL 
                                                                                & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__zi))) 
                                                                    >> 0x14U))))) 
                                                    << 1U) 
                                                   + vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__y))),25);
        tracep->fullIData(oldp+248,(((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__init)
                                      ? 0U : (0x1ffffffU 
                                              & (IData)(
                                                        (0x3fffffffULL 
                                                         & (VL_MULS_QQQ(50,50,50, 
                                                                        (0x3ffffffffffffULL 
                                                                         & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__zr)), 
                                                                        (0x3ffffffffffffULL 
                                                                         & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__zr))) 
                                                            >> 0x14U)))))),25);
        tracep->fullIData(oldp+249,(((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__init)
                                      ? 0U : (0x1ffffffU 
                                              & (IData)(
                                                        (0x3fffffffULL 
                                                         & (VL_MULS_QQQ(50,50,50, 
                                                                        (0x3ffffffffffffULL 
                                                                         & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__zi)), 
                                                                        (0x3ffffffffffffULL 
                                                                         & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__zi))) 
                                                            >> 0x14U)))))),25);
        tracep->fullIData(oldp+250,(((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__init)
                                      ? 0U : (0x1ffffffU 
                                              & (IData)(
                                                        (0x3fffffffULL 
                                                         & (VL_MULS_QQQ(50,50,50, 
                                                                        (0x3ffffffffffffULL 
                                                                         & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__zr)), 
                                                                        (0x3ffffffffffffULL 
                                                                         & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__zi))) 
                                                            >> 0x14U)))))),25);
        tracep->fullBit(oldp+251,((((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.en_pixel_map) 
                                    & (vlTOPp->top__DOT__x
                                       [3U] == (IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.xpixel))) 
                                   & (vlTOPp->top__DOT__y
                                      [3U] == (IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.ypixel)))));
        tracep->fullIData(oldp+252,((0x1ffffffU & (
                                                   (((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__init)
                                                      ? 0U
                                                      : 
                                                     (0x1ffffffU 
                                                      & (IData)(
                                                                (0x3fffffffULL 
                                                                 & (VL_MULS_QQQ(50,50,50, 
                                                                                (0x3ffffffffffffULL 
                                                                                & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__zr)), 
                                                                                (0x3ffffffffffffULL 
                                                                                & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__zi))) 
                                                                    >> 0x14U))))) 
                                                    << 1U) 
                                                   + vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__y))),25);
        tracep->fullIData(oldp+253,(((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__init)
                                      ? 0U : (0x1ffffffU 
                                              & (IData)(
                                                        (0x3fffffffULL 
                                                         & (VL_MULS_QQQ(50,50,50, 
                                                                        (0x3ffffffffffffULL 
                                                                         & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__zr)), 
                                                                        (0x3ffffffffffffULL 
                                                                         & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__zr))) 
                                                            >> 0x14U)))))),25);
        tracep->fullIData(oldp+254,(((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__init)
                                      ? 0U : (0x1ffffffU 
                                              & (IData)(
                                                        (0x3fffffffULL 
                                                         & (VL_MULS_QQQ(50,50,50, 
                                                                        (0x3ffffffffffffULL 
                                                                         & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__zi)), 
                                                                        (0x3ffffffffffffULL 
                                                                         & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__zi))) 
                                                            >> 0x14U)))))),25);
        tracep->fullIData(oldp+255,(((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__init)
                                      ? 0U : (0x1ffffffU 
                                              & (IData)(
                                                        (0x3fffffffULL 
                                                         & (VL_MULS_QQQ(50,50,50, 
                                                                        (0x3ffffffffffffULL 
                                                                         & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__zr)), 
                                                                        (0x3ffffffffffffULL 
                                                                         & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__zi))) 
                                                            >> 0x14U)))))),25);
        tracep->fullBit(oldp+256,((((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.en_pixel_map) 
                                    & (vlTOPp->top__DOT__x
                                       [4U] == (IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.xpixel))) 
                                   & (vlTOPp->top__DOT__y
                                      [4U] == (IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.ypixel)))));
        tracep->fullIData(oldp+257,((0x1ffffffU & (
                                                   (((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__init)
                                                      ? 0U
                                                      : 
                                                     (0x1ffffffU 
                                                      & (IData)(
                                                                (0x3fffffffULL 
                                                                 & (VL_MULS_QQQ(50,50,50, 
                                                                                (0x3ffffffffffffULL 
                                                                                & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__zr)), 
                                                                                (0x3ffffffffffffULL 
                                                                                & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__zi))) 
                                                                    >> 0x14U))))) 
                                                    << 1U) 
                                                   + vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__y))),25);
        tracep->fullIData(oldp+258,(((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__init)
                                      ? 0U : (0x1ffffffU 
                                              & (IData)(
                                                        (0x3fffffffULL 
                                                         & (VL_MULS_QQQ(50,50,50, 
                                                                        (0x3ffffffffffffULL 
                                                                         & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__zr)), 
                                                                        (0x3ffffffffffffULL 
                                                                         & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__zr))) 
                                                            >> 0x14U)))))),25);
        tracep->fullIData(oldp+259,(((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__init)
                                      ? 0U : (0x1ffffffU 
                                              & (IData)(
                                                        (0x3fffffffULL 
                                                         & (VL_MULS_QQQ(50,50,50, 
                                                                        (0x3ffffffffffffULL 
                                                                         & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__zi)), 
                                                                        (0x3ffffffffffffULL 
                                                                         & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__zi))) 
                                                            >> 0x14U)))))),25);
        tracep->fullIData(oldp+260,(((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__init)
                                      ? 0U : (0x1ffffffU 
                                              & (IData)(
                                                        (0x3fffffffULL 
                                                         & (VL_MULS_QQQ(50,50,50, 
                                                                        (0x3ffffffffffffULL 
                                                                         & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__zr)), 
                                                                        (0x3ffffffffffffULL 
                                                                         & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__zi))) 
                                                            >> 0x14U)))))),25);
        tracep->fullBit(oldp+261,((((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.en_pixel_map) 
                                    & (vlTOPp->top__DOT__x
                                       [5U] == (IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.xpixel))) 
                                   & (vlTOPp->top__DOT__y
                                      [5U] == (IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.ypixel)))));
        tracep->fullIData(oldp+262,((0x1ffffffU & (
                                                   (((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__init)
                                                      ? 0U
                                                      : 
                                                     (0x1ffffffU 
                                                      & (IData)(
                                                                (0x3fffffffULL 
                                                                 & (VL_MULS_QQQ(50,50,50, 
                                                                                (0x3ffffffffffffULL 
                                                                                & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__zr)), 
                                                                                (0x3ffffffffffffULL 
                                                                                & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__zi))) 
                                                                    >> 0x14U))))) 
                                                    << 1U) 
                                                   + vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__y))),25);
        tracep->fullIData(oldp+263,(((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__init)
                                      ? 0U : (0x1ffffffU 
                                              & (IData)(
                                                        (0x3fffffffULL 
                                                         & (VL_MULS_QQQ(50,50,50, 
                                                                        (0x3ffffffffffffULL 
                                                                         & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__zr)), 
                                                                        (0x3ffffffffffffULL 
                                                                         & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__zr))) 
                                                            >> 0x14U)))))),25);
        tracep->fullIData(oldp+264,(((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__init)
                                      ? 0U : (0x1ffffffU 
                                              & (IData)(
                                                        (0x3fffffffULL 
                                                         & (VL_MULS_QQQ(50,50,50, 
                                                                        (0x3ffffffffffffULL 
                                                                         & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__zi)), 
                                                                        (0x3ffffffffffffULL 
                                                                         & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__zi))) 
                                                            >> 0x14U)))))),25);
        tracep->fullIData(oldp+265,(((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__init)
                                      ? 0U : (0x1ffffffU 
                                              & (IData)(
                                                        (0x3fffffffULL 
                                                         & (VL_MULS_QQQ(50,50,50, 
                                                                        (0x3ffffffffffffULL 
                                                                         & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__zr)), 
                                                                        (0x3ffffffffffffULL 
                                                                         & VL_EXTENDS_QI(50,25, vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__zi))) 
                                                            >> 0x14U)))))),25);
        tracep->fullIData(oldp+266,(vlTOPp->top__DOT__colour_bus_o[0]),24);
        tracep->fullIData(oldp+267,(vlTOPp->top__DOT__colour_bus_o[1]),24);
        tracep->fullIData(oldp+268,(vlTOPp->top__DOT__colour_bus_o[2]),24);
        tracep->fullIData(oldp+269,(vlTOPp->top__DOT__colour_bus_o[3]),24);
        tracep->fullIData(oldp+270,(vlTOPp->top__DOT__colour_bus_o[4]),24);
        tracep->fullIData(oldp+271,(vlTOPp->top__DOT__colour_bus_o[5]),24);
        tracep->fullIData(oldp+272,(vlTOPp->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__queue_block__colour_o),24);
        tracep->fullIData(oldp+273,(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__unnamedblk3__DOT__i),32);
        tracep->fullIData(oldp+274,(vlTOPp->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__queue_block__colour_o),24);
        tracep->fullIData(oldp+275,(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__unnamedblk3__DOT__i),32);
        tracep->fullIData(oldp+276,(vlTOPp->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__queue_block__colour_o),24);
        tracep->fullIData(oldp+277,(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__unnamedblk3__DOT__i),32);
        tracep->fullIData(oldp+278,(vlTOPp->top__DOT____Vcellout__genblk1__BRA__3__KET____DOT__queue_block__colour_o),24);
        tracep->fullIData(oldp+279,(vlTOPp->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__unnamedblk3__DOT__i),32);
        tracep->fullIData(oldp+280,(vlTOPp->top__DOT____Vcellout__genblk1__BRA__4__KET____DOT__queue_block__colour_o),24);
        tracep->fullIData(oldp+281,(vlTOPp->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__unnamedblk3__DOT__i),32);
        tracep->fullIData(oldp+282,(vlTOPp->top__DOT____Vcellout__genblk1__BRA__5__KET____DOT__queue_block__colour_o),24);
        tracep->fullIData(oldp+283,(vlTOPp->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__unnamedblk3__DOT__i),32);
        tracep->fullCData(oldp+284,(vlTOPp->top__DOT__fin_bus),6);
        tracep->fullBit(oldp+285,((1U & (IData)(vlTOPp->top__DOT__fin_bus))));
        tracep->fullBit(oldp+286,((1U & ((IData)(vlTOPp->top__DOT__fin_bus) 
                                         >> 1U))));
        tracep->fullBit(oldp+287,((1U & ((IData)(vlTOPp->top__DOT__fin_bus) 
                                         >> 2U))));
        tracep->fullBit(oldp+288,((1U & ((IData)(vlTOPp->top__DOT__fin_bus) 
                                         >> 3U))));
        tracep->fullBit(oldp+289,((1U & ((IData)(vlTOPp->top__DOT__fin_bus) 
                                         >> 4U))));
        tracep->fullBit(oldp+290,((1U & ((IData)(vlTOPp->top__DOT__fin_bus) 
                                         >> 5U))));
        tracep->fullBit(oldp+291,(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.en_pixel_map));
        tracep->fullBit(oldp+292,(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__en_stage_1));
        tracep->fullBit(oldp+293,(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__en_stage_2));
        tracep->fullBit(oldp+294,(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__init));
        tracep->fullCData(oldp+295,(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__SM__DOT__next),2);
        tracep->fullBit(oldp+296,(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.en_pixel_map));
        tracep->fullBit(oldp+297,(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__en_stage_1));
        tracep->fullBit(oldp+298,(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__en_stage_2));
        tracep->fullBit(oldp+299,(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__init));
        tracep->fullCData(oldp+300,(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__SM__DOT__next),2);
        tracep->fullBit(oldp+301,(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.en_pixel_map));
        tracep->fullBit(oldp+302,(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__en_stage_1));
        tracep->fullBit(oldp+303,(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__en_stage_2));
        tracep->fullBit(oldp+304,(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__init));
        tracep->fullCData(oldp+305,(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__SM__DOT__next),2);
        tracep->fullBit(oldp+306,(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.en_pixel_map));
        tracep->fullBit(oldp+307,(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__en_stage_1));
        tracep->fullBit(oldp+308,(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__en_stage_2));
        tracep->fullBit(oldp+309,(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__init));
        tracep->fullCData(oldp+310,(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__SM__DOT__next),2);
        tracep->fullBit(oldp+311,(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.en_pixel_map));
        tracep->fullBit(oldp+312,(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__en_stage_1));
        tracep->fullBit(oldp+313,(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__en_stage_2));
        tracep->fullBit(oldp+314,(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__init));
        tracep->fullCData(oldp+315,(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__SM__DOT__next),2);
        tracep->fullBit(oldp+316,(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.en_pixel_map));
        tracep->fullBit(oldp+317,(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__en_stage_1));
        tracep->fullBit(oldp+318,(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__en_stage_2));
        tracep->fullBit(oldp+319,(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__init));
        tracep->fullCData(oldp+320,(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__SM__DOT__next),2);
        tracep->fullSData(oldp+321,(vlTOPp->top__DOT__xpixel_bus[0]),10);
        tracep->fullSData(oldp+322,(vlTOPp->top__DOT__xpixel_bus[1]),10);
        tracep->fullSData(oldp+323,(vlTOPp->top__DOT__xpixel_bus[2]),10);
        tracep->fullSData(oldp+324,(vlTOPp->top__DOT__xpixel_bus[3]),10);
        tracep->fullSData(oldp+325,(vlTOPp->top__DOT__xpixel_bus[4]),10);
        tracep->fullSData(oldp+326,(vlTOPp->top__DOT__xpixel_bus[5]),10);
        tracep->fullSData(oldp+327,(vlTOPp->top__DOT__ypixel_bus[0]),10);
        tracep->fullSData(oldp+328,(vlTOPp->top__DOT__ypixel_bus[1]),10);
        tracep->fullSData(oldp+329,(vlTOPp->top__DOT__ypixel_bus[2]),10);
        tracep->fullSData(oldp+330,(vlTOPp->top__DOT__ypixel_bus[3]),10);
        tracep->fullSData(oldp+331,(vlTOPp->top__DOT__ypixel_bus[4]),10);
        tracep->fullSData(oldp+332,(vlTOPp->top__DOT__ypixel_bus[5]),10);
        tracep->fullIData(oldp+333,(vlTOPp->top__DOT__colour_bus_i[0]),24);
        tracep->fullIData(oldp+334,(vlTOPp->top__DOT__colour_bus_i[1]),24);
        tracep->fullIData(oldp+335,(vlTOPp->top__DOT__colour_bus_i[2]),24);
        tracep->fullIData(oldp+336,(vlTOPp->top__DOT__colour_bus_i[3]),24);
        tracep->fullIData(oldp+337,(vlTOPp->top__DOT__colour_bus_i[4]),24);
        tracep->fullIData(oldp+338,(vlTOPp->top__DOT__colour_bus_i[5]),24);
        tracep->fullIData(oldp+339,(vlTOPp->top__DOT__colour_bus_i
                                    [0U]),24);
        tracep->fullSData(oldp+340,(vlTOPp->top__DOT__xpixel_bus
                                    [0U]),10);
        tracep->fullSData(oldp+341,(vlTOPp->top__DOT__ypixel_bus
                                    [0U]),10);
        tracep->fullSData(oldp+342,(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__prev_xpixel),10);
        tracep->fullIData(oldp+343,(vlTOPp->top__DOT__colour_bus_i
                                    [1U]),24);
        tracep->fullSData(oldp+344,(vlTOPp->top__DOT__xpixel_bus
                                    [1U]),10);
        tracep->fullSData(oldp+345,(vlTOPp->top__DOT__ypixel_bus
                                    [1U]),10);
        tracep->fullSData(oldp+346,(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__prev_xpixel),10);
        tracep->fullIData(oldp+347,(vlTOPp->top__DOT__colour_bus_i
                                    [2U]),24);
        tracep->fullSData(oldp+348,(vlTOPp->top__DOT__xpixel_bus
                                    [2U]),10);
        tracep->fullSData(oldp+349,(vlTOPp->top__DOT__ypixel_bus
                                    [2U]),10);
        tracep->fullSData(oldp+350,(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__prev_xpixel),10);
        tracep->fullIData(oldp+351,(vlTOPp->top__DOT__colour_bus_i
                                    [3U]),24);
        tracep->fullSData(oldp+352,(vlTOPp->top__DOT__xpixel_bus
                                    [3U]),10);
        tracep->fullSData(oldp+353,(vlTOPp->top__DOT__ypixel_bus
                                    [3U]),10);
        tracep->fullSData(oldp+354,(vlTOPp->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__prev_xpixel),10);
        tracep->fullIData(oldp+355,(vlTOPp->top__DOT__colour_bus_i
                                    [4U]),24);
        tracep->fullSData(oldp+356,(vlTOPp->top__DOT__xpixel_bus
                                    [4U]),10);
        tracep->fullSData(oldp+357,(vlTOPp->top__DOT__ypixel_bus
                                    [4U]),10);
        tracep->fullSData(oldp+358,(vlTOPp->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__prev_xpixel),10);
        tracep->fullIData(oldp+359,(vlTOPp->top__DOT__colour_bus_i
                                    [5U]),24);
        tracep->fullSData(oldp+360,(vlTOPp->top__DOT__xpixel_bus
                                    [5U]),10);
        tracep->fullSData(oldp+361,(vlTOPp->top__DOT__ypixel_bus
                                    [5U]),10);
        tracep->fullSData(oldp+362,(vlTOPp->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__prev_xpixel),10);
        tracep->fullBit(oldp+363,((0x3fU == (IData)(vlTOPp->top__DOT__en_bus))));
        tracep->fullCData(oldp+364,(vlTOPp->top__DOT__en_bus),6);
        tracep->fullCData(oldp+365,(vlTOPp->top__DOT__full_queue_bus),6);
        tracep->fullCData(oldp+366,(vlTOPp->top__DOT__match_bus),6);
        tracep->fullIData(oldp+367,(vlTOPp->top__DOT__j),32);
        tracep->fullBit(oldp+368,(vlTOPp->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__queue_block__full_queue));
        tracep->fullBit(oldp+369,(vlTOPp->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__queue_block__en));
        tracep->fullBit(oldp+370,(vlTOPp->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__queue_block__match));
        tracep->fullIData(oldp+371,(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[0]),24);
        tracep->fullIData(oldp+372,(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[1]),24);
        tracep->fullIData(oldp+373,(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[2]),24);
        tracep->fullIData(oldp+374,(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[3]),24);
        tracep->fullIData(oldp+375,(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[4]),24);
        tracep->fullIData(oldp+376,(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[5]),24);
        tracep->fullIData(oldp+377,(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[6]),24);
        tracep->fullIData(oldp+378,(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[7]),24);
        tracep->fullIData(oldp+379,(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[8]),24);
        tracep->fullIData(oldp+380,(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[9]),24);
        tracep->fullSData(oldp+381,(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[0]),10);
        tracep->fullSData(oldp+382,(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[1]),10);
        tracep->fullSData(oldp+383,(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[2]),10);
        tracep->fullSData(oldp+384,(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[3]),10);
        tracep->fullSData(oldp+385,(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[4]),10);
        tracep->fullSData(oldp+386,(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[5]),10);
        tracep->fullSData(oldp+387,(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[6]),10);
        tracep->fullSData(oldp+388,(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[7]),10);
        tracep->fullSData(oldp+389,(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[8]),10);
        tracep->fullSData(oldp+390,(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[9]),10);
        tracep->fullSData(oldp+391,(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[0]),10);
        tracep->fullSData(oldp+392,(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[1]),10);
        tracep->fullSData(oldp+393,(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[2]),10);
        tracep->fullSData(oldp+394,(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[3]),10);
        tracep->fullSData(oldp+395,(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[4]),10);
        tracep->fullSData(oldp+396,(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[5]),10);
        tracep->fullSData(oldp+397,(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[6]),10);
        tracep->fullSData(oldp+398,(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[7]),10);
        tracep->fullSData(oldp+399,(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[8]),10);
        tracep->fullSData(oldp+400,(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[9]),10);
        tracep->fullCData(oldp+401,(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__counter),4);
        tracep->fullBit(oldp+402,(vlTOPp->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__queue_block__full_queue));
        tracep->fullBit(oldp+403,(vlTOPp->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__queue_block__en));
        tracep->fullBit(oldp+404,(vlTOPp->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__queue_block__match));
        tracep->fullIData(oldp+405,(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[0]),24);
        tracep->fullIData(oldp+406,(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[1]),24);
        tracep->fullIData(oldp+407,(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[2]),24);
        tracep->fullIData(oldp+408,(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[3]),24);
        tracep->fullIData(oldp+409,(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[4]),24);
        tracep->fullIData(oldp+410,(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[5]),24);
        tracep->fullIData(oldp+411,(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[6]),24);
        tracep->fullIData(oldp+412,(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[7]),24);
        tracep->fullIData(oldp+413,(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[8]),24);
        tracep->fullIData(oldp+414,(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[9]),24);
        tracep->fullSData(oldp+415,(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[0]),10);
        tracep->fullSData(oldp+416,(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[1]),10);
        tracep->fullSData(oldp+417,(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[2]),10);
        tracep->fullSData(oldp+418,(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[3]),10);
        tracep->fullSData(oldp+419,(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[4]),10);
        tracep->fullSData(oldp+420,(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[5]),10);
        tracep->fullSData(oldp+421,(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[6]),10);
        tracep->fullSData(oldp+422,(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[7]),10);
        tracep->fullSData(oldp+423,(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[8]),10);
        tracep->fullSData(oldp+424,(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[9]),10);
        tracep->fullSData(oldp+425,(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[0]),10);
        tracep->fullSData(oldp+426,(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[1]),10);
        tracep->fullSData(oldp+427,(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[2]),10);
        tracep->fullSData(oldp+428,(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[3]),10);
        tracep->fullSData(oldp+429,(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[4]),10);
        tracep->fullSData(oldp+430,(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[5]),10);
        tracep->fullSData(oldp+431,(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[6]),10);
        tracep->fullSData(oldp+432,(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[7]),10);
        tracep->fullSData(oldp+433,(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[8]),10);
        tracep->fullSData(oldp+434,(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[9]),10);
        tracep->fullCData(oldp+435,(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__counter),4);
        tracep->fullBit(oldp+436,(vlTOPp->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__queue_block__full_queue));
        tracep->fullBit(oldp+437,(vlTOPp->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__queue_block__en));
        tracep->fullBit(oldp+438,(vlTOPp->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__queue_block__match));
        tracep->fullIData(oldp+439,(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[0]),24);
        tracep->fullIData(oldp+440,(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[1]),24);
        tracep->fullIData(oldp+441,(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[2]),24);
        tracep->fullIData(oldp+442,(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[3]),24);
        tracep->fullIData(oldp+443,(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[4]),24);
        tracep->fullIData(oldp+444,(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[5]),24);
        tracep->fullIData(oldp+445,(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[6]),24);
        tracep->fullIData(oldp+446,(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[7]),24);
        tracep->fullIData(oldp+447,(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[8]),24);
        tracep->fullIData(oldp+448,(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[9]),24);
        tracep->fullSData(oldp+449,(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[0]),10);
        tracep->fullSData(oldp+450,(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[1]),10);
        tracep->fullSData(oldp+451,(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[2]),10);
        tracep->fullSData(oldp+452,(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[3]),10);
        tracep->fullSData(oldp+453,(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[4]),10);
        tracep->fullSData(oldp+454,(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[5]),10);
        tracep->fullSData(oldp+455,(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[6]),10);
        tracep->fullSData(oldp+456,(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[7]),10);
        tracep->fullSData(oldp+457,(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[8]),10);
        tracep->fullSData(oldp+458,(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[9]),10);
        tracep->fullSData(oldp+459,(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[0]),10);
        tracep->fullSData(oldp+460,(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[1]),10);
        tracep->fullSData(oldp+461,(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[2]),10);
        tracep->fullSData(oldp+462,(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[3]),10);
        tracep->fullSData(oldp+463,(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[4]),10);
        tracep->fullSData(oldp+464,(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[5]),10);
        tracep->fullSData(oldp+465,(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[6]),10);
        tracep->fullSData(oldp+466,(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[7]),10);
        tracep->fullSData(oldp+467,(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[8]),10);
        tracep->fullSData(oldp+468,(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[9]),10);
        tracep->fullCData(oldp+469,(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__counter),4);
        tracep->fullBit(oldp+470,(vlTOPp->top__DOT____Vcellout__genblk1__BRA__3__KET____DOT__queue_block__full_queue));
        tracep->fullBit(oldp+471,(vlTOPp->top__DOT____Vcellout__genblk1__BRA__3__KET____DOT__queue_block__en));
        tracep->fullBit(oldp+472,(vlTOPp->top__DOT____Vcellout__genblk1__BRA__3__KET____DOT__queue_block__match));
        tracep->fullIData(oldp+473,(vlTOPp->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue[0]),24);
        tracep->fullIData(oldp+474,(vlTOPp->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue[1]),24);
        tracep->fullIData(oldp+475,(vlTOPp->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue[2]),24);
        tracep->fullIData(oldp+476,(vlTOPp->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue[3]),24);
        tracep->fullIData(oldp+477,(vlTOPp->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue[4]),24);
        tracep->fullIData(oldp+478,(vlTOPp->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue[5]),24);
        tracep->fullIData(oldp+479,(vlTOPp->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue[6]),24);
        tracep->fullIData(oldp+480,(vlTOPp->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue[7]),24);
        tracep->fullIData(oldp+481,(vlTOPp->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue[8]),24);
        tracep->fullIData(oldp+482,(vlTOPp->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__colour_queue[9]),24);
        tracep->fullSData(oldp+483,(vlTOPp->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue[0]),10);
        tracep->fullSData(oldp+484,(vlTOPp->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue[1]),10);
        tracep->fullSData(oldp+485,(vlTOPp->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue[2]),10);
        tracep->fullSData(oldp+486,(vlTOPp->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue[3]),10);
        tracep->fullSData(oldp+487,(vlTOPp->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue[4]),10);
        tracep->fullSData(oldp+488,(vlTOPp->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue[5]),10);
        tracep->fullSData(oldp+489,(vlTOPp->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue[6]),10);
        tracep->fullSData(oldp+490,(vlTOPp->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue[7]),10);
        tracep->fullSData(oldp+491,(vlTOPp->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue[8]),10);
        tracep->fullSData(oldp+492,(vlTOPp->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__xqueue[9]),10);
        tracep->fullSData(oldp+493,(vlTOPp->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue[0]),10);
        tracep->fullSData(oldp+494,(vlTOPp->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue[1]),10);
        tracep->fullSData(oldp+495,(vlTOPp->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue[2]),10);
        tracep->fullSData(oldp+496,(vlTOPp->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue[3]),10);
        tracep->fullSData(oldp+497,(vlTOPp->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue[4]),10);
        tracep->fullSData(oldp+498,(vlTOPp->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue[5]),10);
        tracep->fullSData(oldp+499,(vlTOPp->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue[6]),10);
        tracep->fullSData(oldp+500,(vlTOPp->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue[7]),10);
        tracep->fullSData(oldp+501,(vlTOPp->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue[8]),10);
        tracep->fullSData(oldp+502,(vlTOPp->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__yqueue[9]),10);
        tracep->fullCData(oldp+503,(vlTOPp->top__DOT__genblk1__BRA__3__KET____DOT__queue_block__DOT__counter),4);
        tracep->fullBit(oldp+504,(vlTOPp->top__DOT____Vcellout__genblk1__BRA__4__KET____DOT__queue_block__full_queue));
        tracep->fullBit(oldp+505,(vlTOPp->top__DOT____Vcellout__genblk1__BRA__4__KET____DOT__queue_block__en));
        tracep->fullBit(oldp+506,(vlTOPp->top__DOT____Vcellout__genblk1__BRA__4__KET____DOT__queue_block__match));
        tracep->fullIData(oldp+507,(vlTOPp->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue[0]),24);
        tracep->fullIData(oldp+508,(vlTOPp->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue[1]),24);
        tracep->fullIData(oldp+509,(vlTOPp->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue[2]),24);
        tracep->fullIData(oldp+510,(vlTOPp->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue[3]),24);
        tracep->fullIData(oldp+511,(vlTOPp->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue[4]),24);
        tracep->fullIData(oldp+512,(vlTOPp->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue[5]),24);
        tracep->fullIData(oldp+513,(vlTOPp->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue[6]),24);
        tracep->fullIData(oldp+514,(vlTOPp->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue[7]),24);
        tracep->fullIData(oldp+515,(vlTOPp->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue[8]),24);
        tracep->fullIData(oldp+516,(vlTOPp->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__colour_queue[9]),24);
        tracep->fullSData(oldp+517,(vlTOPp->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue[0]),10);
        tracep->fullSData(oldp+518,(vlTOPp->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue[1]),10);
        tracep->fullSData(oldp+519,(vlTOPp->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue[2]),10);
        tracep->fullSData(oldp+520,(vlTOPp->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue[3]),10);
        tracep->fullSData(oldp+521,(vlTOPp->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue[4]),10);
        tracep->fullSData(oldp+522,(vlTOPp->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue[5]),10);
        tracep->fullSData(oldp+523,(vlTOPp->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue[6]),10);
        tracep->fullSData(oldp+524,(vlTOPp->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue[7]),10);
        tracep->fullSData(oldp+525,(vlTOPp->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue[8]),10);
        tracep->fullSData(oldp+526,(vlTOPp->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__xqueue[9]),10);
        tracep->fullSData(oldp+527,(vlTOPp->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue[0]),10);
        tracep->fullSData(oldp+528,(vlTOPp->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue[1]),10);
        tracep->fullSData(oldp+529,(vlTOPp->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue[2]),10);
        tracep->fullSData(oldp+530,(vlTOPp->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue[3]),10);
        tracep->fullSData(oldp+531,(vlTOPp->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue[4]),10);
        tracep->fullSData(oldp+532,(vlTOPp->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue[5]),10);
        tracep->fullSData(oldp+533,(vlTOPp->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue[6]),10);
        tracep->fullSData(oldp+534,(vlTOPp->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue[7]),10);
        tracep->fullSData(oldp+535,(vlTOPp->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue[8]),10);
        tracep->fullSData(oldp+536,(vlTOPp->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__yqueue[9]),10);
        tracep->fullCData(oldp+537,(vlTOPp->top__DOT__genblk1__BRA__4__KET____DOT__queue_block__DOT__counter),4);
        tracep->fullBit(oldp+538,(vlTOPp->top__DOT____Vcellout__genblk1__BRA__5__KET____DOT__queue_block__full_queue));
        tracep->fullBit(oldp+539,(vlTOPp->top__DOT____Vcellout__genblk1__BRA__5__KET____DOT__queue_block__en));
        tracep->fullBit(oldp+540,(vlTOPp->top__DOT____Vcellout__genblk1__BRA__5__KET____DOT__queue_block__match));
        tracep->fullIData(oldp+541,(vlTOPp->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue[0]),24);
        tracep->fullIData(oldp+542,(vlTOPp->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue[1]),24);
        tracep->fullIData(oldp+543,(vlTOPp->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue[2]),24);
        tracep->fullIData(oldp+544,(vlTOPp->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue[3]),24);
        tracep->fullIData(oldp+545,(vlTOPp->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue[4]),24);
        tracep->fullIData(oldp+546,(vlTOPp->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue[5]),24);
        tracep->fullIData(oldp+547,(vlTOPp->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue[6]),24);
        tracep->fullIData(oldp+548,(vlTOPp->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue[7]),24);
        tracep->fullIData(oldp+549,(vlTOPp->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue[8]),24);
        tracep->fullIData(oldp+550,(vlTOPp->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__colour_queue[9]),24);
        tracep->fullSData(oldp+551,(vlTOPp->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue[0]),10);
        tracep->fullSData(oldp+552,(vlTOPp->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue[1]),10);
        tracep->fullSData(oldp+553,(vlTOPp->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue[2]),10);
        tracep->fullSData(oldp+554,(vlTOPp->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue[3]),10);
        tracep->fullSData(oldp+555,(vlTOPp->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue[4]),10);
        tracep->fullSData(oldp+556,(vlTOPp->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue[5]),10);
        tracep->fullSData(oldp+557,(vlTOPp->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue[6]),10);
        tracep->fullSData(oldp+558,(vlTOPp->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue[7]),10);
        tracep->fullSData(oldp+559,(vlTOPp->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue[8]),10);
        tracep->fullSData(oldp+560,(vlTOPp->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__xqueue[9]),10);
        tracep->fullSData(oldp+561,(vlTOPp->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue[0]),10);
        tracep->fullSData(oldp+562,(vlTOPp->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue[1]),10);
        tracep->fullSData(oldp+563,(vlTOPp->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue[2]),10);
        tracep->fullSData(oldp+564,(vlTOPp->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue[3]),10);
        tracep->fullSData(oldp+565,(vlTOPp->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue[4]),10);
        tracep->fullSData(oldp+566,(vlTOPp->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue[5]),10);
        tracep->fullSData(oldp+567,(vlTOPp->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue[6]),10);
        tracep->fullSData(oldp+568,(vlTOPp->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue[7]),10);
        tracep->fullSData(oldp+569,(vlTOPp->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue[8]),10);
        tracep->fullSData(oldp+570,(vlTOPp->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__yqueue[9]),10);
        tracep->fullCData(oldp+571,(vlTOPp->top__DOT__genblk1__BRA__5__KET____DOT__queue_block__DOT__counter),4);
        tracep->fullBit(oldp+572,((1U & (IData)(vlTOPp->top__DOT__full_queue_bus))));
        tracep->fullBit(oldp+573,((1U & ((IData)(vlTOPp->top__DOT__full_queue_bus) 
                                         >> 1U))));
        tracep->fullBit(oldp+574,((1U & ((IData)(vlTOPp->top__DOT__full_queue_bus) 
                                         >> 2U))));
        tracep->fullBit(oldp+575,((1U & ((IData)(vlTOPp->top__DOT__full_queue_bus) 
                                         >> 3U))));
        tracep->fullBit(oldp+576,((1U & ((IData)(vlTOPp->top__DOT__full_queue_bus) 
                                         >> 4U))));
        tracep->fullBit(oldp+577,((1U & ((IData)(vlTOPp->top__DOT__full_queue_bus) 
                                         >> 5U))));
        tracep->fullBit(oldp+578,(vlTOPp->clk));
        tracep->fullBit(oldp+579,(vlTOPp->reset));
        tracep->fullBit(oldp+580,(vlTOPp->ready));
        tracep->fullIData(oldp+581,(vlTOPp->iterations_max),32);
        tracep->fullSData(oldp+582,(vlTOPp->zoom),10);
        tracep->fullSData(oldp+583,(vlTOPp->x_offset),10);
        tracep->fullSData(oldp+584,(vlTOPp->y_offset),10);
        tracep->fullCData(oldp+585,(vlTOPp->r),8);
        tracep->fullCData(oldp+586,(vlTOPp->g),8);
        tracep->fullCData(oldp+587,(vlTOPp->b),8);
        tracep->fullBit(oldp+588,(vlTOPp->first));
        tracep->fullBit(oldp+589,(vlTOPp->last_x));
        tracep->fullBit(oldp+590,(vlTOPp->last_y));
        tracep->fullBit(oldp+591,(vlTOPp->valid));
        tracep->fullBit(oldp+592,(((0x3fU == (IData)(vlTOPp->top__DOT__fin_bus)) 
                                   | (IData)(vlTOPp->reset))));
        tracep->fullIData(oldp+593,(((5U >= (7U & vlTOPp->top__DOT__j))
                                      ? vlTOPp->top__DOT__colour_bus_o
                                     [(7U & vlTOPp->top__DOT__j)]
                                      : 0U)),24);
        tracep->fullCData(oldp+594,((0x3fU & vlTOPp->iterations_max)),6);
        tracep->fullCData(oldp+595,((7U & (IData)(vlTOPp->zoom))),3);
        tracep->fullIData(oldp+596,(vlTOPp->x_offset),25);
        tracep->fullIData(oldp+597,(vlTOPp->y_offset),25);
        tracep->fullBit(oldp+598,(((VL_LTS_III(1,25,25, 0x400000U, vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__distance) 
                                    | ((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__curr_iterations) 
                                       == (0x3fU & vlTOPp->iterations_max))) 
                                   | VL_GTS_III(1,32,32, 0U, 
                                                VL_EXTENDS_II(32,25, vlSymsp->TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__PVT__distance)))));
        tracep->fullIData(oldp+599,((0x1ffffffU & ((IData)(0x1e00000U) 
                                                   + (IData)(vlTOPp->x_offset)))),25);
        tracep->fullIData(oldp+600,((0x1ffffffU & ((IData)(0x1e80000U) 
                                                   + (IData)(vlTOPp->y_offset)))),25);
        tracep->fullBit(oldp+601,(((VL_LTS_III(1,25,25, 0x400000U, vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__distance) 
                                    | ((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__curr_iterations) 
                                       == (0x3fU & vlTOPp->iterations_max))) 
                                   | VL_GTS_III(1,32,32, 0U, 
                                                VL_EXTENDS_II(32,25, vlSymsp->TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__PVT__distance)))));
        tracep->fullBit(oldp+602,(((VL_LTS_III(1,25,25, 0x400000U, vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__distance) 
                                    | ((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__curr_iterations) 
                                       == (0x3fU & vlTOPp->iterations_max))) 
                                   | VL_GTS_III(1,32,32, 0U, 
                                                VL_EXTENDS_II(32,25, vlSymsp->TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__PVT__distance)))));
        tracep->fullBit(oldp+603,(((VL_LTS_III(1,25,25, 0x400000U, vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__distance) 
                                    | ((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__curr_iterations) 
                                       == (0x3fU & vlTOPp->iterations_max))) 
                                   | VL_GTS_III(1,32,32, 0U, 
                                                VL_EXTENDS_II(32,25, vlSymsp->TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__PVT__distance)))));
        tracep->fullBit(oldp+604,(((VL_LTS_III(1,25,25, 0x400000U, vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__distance) 
                                    | ((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__curr_iterations) 
                                       == (0x3fU & vlTOPp->iterations_max))) 
                                   | VL_GTS_III(1,32,32, 0U, 
                                                VL_EXTENDS_II(32,25, vlSymsp->TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__PVT__distance)))));
        tracep->fullBit(oldp+605,(((VL_LTS_III(1,25,25, 0x400000U, vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__distance) 
                                    | ((IData)(vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__curr_iterations) 
                                       == (0x3fU & vlTOPp->iterations_max))) 
                                   | VL_GTS_III(1,32,32, 0U, 
                                                VL_EXTENDS_II(32,25, vlSymsp->TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__PVT__distance)))));
        tracep->fullIData(oldp+606,(0xaU),32);
        tracep->fullIData(oldp+607,(0x18U),32);
        tracep->fullIData(oldp+608,(6U),32);
        tracep->fullIData(oldp+609,(0x20U),32);
        tracep->fullBit(oldp+610,(vlTOPp->top__DOT__reset_engine));
        tracep->fullIData(oldp+611,(6U),32);
        tracep->fullIData(oldp+612,(0x280U),32);
        tracep->fullIData(oldp+613,(0x1e0U),32);
        tracep->fullIData(oldp+614,(0x32U),32);
        tracep->fullIData(oldp+615,(0x100U),32);
        tracep->fullIData(oldp+616,(0x2aU),32);
        tracep->fullIData(oldp+617,(4U),32);
        tracep->fullIData(oldp+618,(0x19U),32);
        tracep->fullIData(oldp+619,(0x14U),32);
        tracep->fullBit(oldp+620,(0U));
        tracep->fullIData(oldp+621,(5U),32);
        tracep->fullIData(oldp+622,(0x400000U),25);
        tracep->fullIData(oldp+623,(0x199aU),25);
        tracep->fullIData(oldp+624,(0x199aU),25);
        tracep->fullIData(oldp+625,(0U),32);
        tracep->fullIData(oldp+626,(1U),32);
        tracep->fullIData(oldp+627,(2U),32);
        tracep->fullIData(oldp+628,(3U),32);
    }
}
