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
    tracep->declBit(c+166,"clk", false,-1);
    tracep->declBit(c+167,"reset", false,-1);
    tracep->declBit(c+168,"ready", false,-1);
    tracep->declBus(c+169,"iterations_max", false,-1, 31,0);
    tracep->declBus(c+170,"zoom", false,-1, 31,0);
    tracep->declBus(c+171,"x_offset", false,-1, 31,0);
    tracep->declBus(c+172,"y_offset", false,-1, 31,0);
    tracep->declBus(c+173,"r", false,-1, 7,0);
    tracep->declBus(c+174,"g", false,-1, 7,0);
    tracep->declBus(c+175,"b", false,-1, 7,0);
    tracep->declBit(c+176,"first", false,-1);
    tracep->declBit(c+177,"last_x", false,-1);
    tracep->declBit(c+178,"last_y", false,-1);
    tracep->declBit(c+179,"valid", false,-1);
    for (int i = 0; i < 3; ++i) {
        tracep->declBit(c+180+i*1,"full_queue", true,(i+0));
    }
    tracep->pushNamePrefix("top ");
    tracep->declBus(c+194,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+195,"RBG_SIZE", false,-1, 31,0);
    tracep->declBus(c+196,"NUM_ENGINES", false,-1, 31,0);
    tracep->declBus(c+194,"ITERATIONS_WIDTH", false,-1, 31,0);
    tracep->declBit(c+166,"clk", false,-1);
    tracep->declBit(c+167,"reset", false,-1);
    tracep->declBit(c+168,"ready", false,-1);
    tracep->declBus(c+169,"iterations_max", false,-1, 31,0);
    tracep->declBus(c+170,"zoom", false,-1, 31,0);
    tracep->declBus(c+171,"x_offset", false,-1, 31,0);
    tracep->declBus(c+172,"y_offset", false,-1, 31,0);
    tracep->declBus(c+173,"r", false,-1, 7,0);
    tracep->declBus(c+174,"g", false,-1, 7,0);
    tracep->declBus(c+175,"b", false,-1, 7,0);
    tracep->declBit(c+176,"first", false,-1);
    tracep->declBit(c+177,"last_x", false,-1);
    tracep->declBit(c+178,"last_y", false,-1);
    tracep->declBit(c+179,"valid", false,-1);
    for (int i = 0; i < 3; ++i) {
        tracep->declBit(c+180+i*1,"full_queue", true,(i+0));
    }
    tracep->declBus(c+4,"colour_o_wire", false,-1, 23,0);
    tracep->declBus(c+5,"xpixel_wire", false,-1, 31,0);
    tracep->declBus(c+6,"ypixel_wire", false,-1, 31,0);
    tracep->declBus(c+7,"colour_wire", false,-1, 23,0);
    tracep->declBit(c+183,"reset_engine", false,-1);
    tracep->declBit(c+184,"fin_wire", false,-1);
    tracep->declBit(c+8,"en_wire", false,-1);
    tracep->declBus(c+9,"fin_bus", false,-1, 2,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+10+i*1,"x", true,(i+0), 31,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+13+i*1,"y", true,(i+0), 31,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+16+i*1,"iterations_bus", true,(i+0), 31,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+19+i*1,"xpixel_bus", true,(i+0), 31,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+22+i*1,"ypixel_bus", true,(i+0), 31,0);
    }
    tracep->declBus(c+25,"en_bus", false,-1, 2,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+26+i*1,"colour_bus", true,(i+0), 23,0);
    }
    tracep->pushNamePrefix("combinator_block ");
    tracep->declBus(c+194,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+195,"RBG_SIZE", false,-1, 31,0);
    tracep->declBus(c+197,"SCREEN_WIDTH", false,-1, 31,0);
    tracep->declBus(c+198,"SCREEN_HEIGHT", false,-1, 31,0);
    tracep->declBit(c+166,"clk", false,-1);
    tracep->declBit(c+167,"reset", false,-1);
    tracep->declBus(c+7,"colour_i", false,-1, 23,0);
    tracep->declBit(c+8,"en", false,-1);
    tracep->declBit(c+168,"ready", false,-1);
    tracep->declBit(c+184,"fin_flag", false,-1);
    tracep->declBus(c+5,"next_xpixel", false,-1, 31,0);
    tracep->declBus(c+6,"next_ypixel", false,-1, 31,0);
    tracep->declBus(c+4,"colour_o", false,-1, 23,0);
    tracep->declBit(c+176,"first", false,-1);
    tracep->declBit(c+177,"last_x", false,-1);
    tracep->declBit(c+178,"last_y", false,-1);
    tracep->declBit(c+179,"valid", false,-1);
    tracep->declBus(c+29,"xpixel", false,-1, 31,0);
    tracep->declBus(c+30,"ypixel", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("distributor ");
    tracep->declBus(c+194,"PIXEL_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+197,"SCREEN_WIDTH", false,-1, 31,0);
    tracep->declBus(c+198,"SCREEN_HEIGHT", false,-1, 31,0);
    tracep->declBus(c+196,"NUM_ENGINES", false,-1, 31,0);
    tracep->declBit(c+166,"clk", false,-1);
    tracep->declBit(c+167,"reset", false,-1);
    tracep->declBit(c+184,"fin_flag", false,-1);
    tracep->declBus(c+31,"x1", false,-1, 31,0);
    tracep->declBus(c+32,"x2", false,-1, 31,0);
    tracep->declBus(c+33,"x3", false,-1, 31,0);
    tracep->declBus(c+34,"y1", false,-1, 31,0);
    tracep->declBus(c+35,"y2", false,-1, 31,0);
    tracep->declBus(c+36,"y3", false,-1, 31,0);
    tracep->declBus(c+31,"x0", false,-1, 31,0);
    tracep->declBus(c+34,"y0", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("genblk1[0] ");
    tracep->pushNamePrefix("engine ");
    tracep->declBus(c+194,"PIXEL_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+194,"fp_bits", false,-1, 31,0);
    tracep->declBus(c+195,"fp_bot", false,-1, 31,0);
    tracep->declBus(c+194,"ITERATIONS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+197,"SCREEN_WIDTH", false,-1, 31,0);
    tracep->declBus(c+198,"SCREEN_HEIGHT", false,-1, 31,0);
    tracep->declBus(c+199,"SCALE_FACTOR", false,-1, 31,0);
    tracep->declBit(c+166,"clk", false,-1);
    tracep->declBit(c+183,"reset", false,-1);
    tracep->declBus(c+169,"iterations_max", false,-1, 31,0);
    tracep->declBus(c+37,"x0_", false,-1, 31,0);
    tracep->declBus(c+38,"y0_", false,-1, 31,0);
    tracep->declBus(c+170,"zoom", false,-1, 31,0);
    tracep->declBus(c+171,"x_offset", false,-1, 31,0);
    tracep->declBus(c+172,"y_offset", false,-1, 31,0);
    tracep->declBit(c+39,"finished", false,-1);
    tracep->declBus(c+40,"iterations", false,-1, 31,0);
    tracep->declBus(c+41,"xpixel", false,-1, 31,0);
    tracep->declBus(c+42,"ypixel", false,-1, 31,0);
    tracep->declBus(c+200,"fp_top", false,-1, 31,0);
    tracep->declBus(c+201,"fp_square_top", false,-1, 31,0);
    tracep->declBus(c+185,"x0", false,-1, 31,0);
    tracep->declBus(c+186,"y0", false,-1, 31,0);
    tracep->declBus(c+43,"x0_buff", false,-1, 31,0);
    tracep->declBus(c+44,"y0_buff", false,-1, 31,0);
    tracep->declBus(c+187,"x_min", false,-1, 31,0);
    tracep->declBus(c+188,"y_min", false,-1, 31,0);
    tracep->declBus(c+189,"step", false,-1, 31,0);
    tracep->declBus(c+45,"state", false,-1, 31,0);
    tracep->declBus(c+46,"x", false,-1, 31,0);
    tracep->declBus(c+47,"y", false,-1, 31,0);
    tracep->declQuad(c+48,"y_tmp", false,-1, 63,0);
    tracep->declQuad(c+50,"x2", false,-1, 63,0);
    tracep->declQuad(c+52,"y2", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("queue_block ");
    tracep->declBus(c+194,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+202,"QUEUE_SIZE", false,-1, 31,0);
    tracep->declBus(c+196,"COUNTER_SIZE", false,-1, 31,0);
    tracep->declBus(c+195,"RBG_SIZE", false,-1, 31,0);
    tracep->declBit(c+166,"clk", false,-1);
    tracep->declBit(c+167,"reset", false,-1);
    tracep->declBit(c+54,"fin_flag", false,-1);
    tracep->declBus(c+55,"colour_i", false,-1, 23,0);
    tracep->declBus(c+56,"xpixel_i", false,-1, 31,0);
    tracep->declBus(c+57,"ypixel_i", false,-1, 31,0);
    tracep->declBus(c+5,"xpixel_check", false,-1, 31,0);
    tracep->declBus(c+6,"ypixel_check", false,-1, 31,0);
    tracep->declBus(c+7,"colour_o", false,-1, 23,0);
    tracep->declBit(c+58,"full_queue", false,-1);
    tracep->declBit(c+59,"en", false,-1);
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+60+i*1,"colour_queue", true,(i+0), 23,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+65+i*1,"xqueue", true,(i+0), 31,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+70+i*1,"yqueue", true,(i+0), 31,0);
    }
    tracep->declBus(c+75,"counter", false,-1, 2,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+76,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+77,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("genblk1[1] ");
    tracep->pushNamePrefix("engine ");
    tracep->declBus(c+194,"PIXEL_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+194,"fp_bits", false,-1, 31,0);
    tracep->declBus(c+195,"fp_bot", false,-1, 31,0);
    tracep->declBus(c+194,"ITERATIONS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+197,"SCREEN_WIDTH", false,-1, 31,0);
    tracep->declBus(c+198,"SCREEN_HEIGHT", false,-1, 31,0);
    tracep->declBus(c+199,"SCALE_FACTOR", false,-1, 31,0);
    tracep->declBit(c+166,"clk", false,-1);
    tracep->declBit(c+183,"reset", false,-1);
    tracep->declBus(c+169,"iterations_max", false,-1, 31,0);
    tracep->declBus(c+78,"x0_", false,-1, 31,0);
    tracep->declBus(c+79,"y0_", false,-1, 31,0);
    tracep->declBus(c+170,"zoom", false,-1, 31,0);
    tracep->declBus(c+171,"x_offset", false,-1, 31,0);
    tracep->declBus(c+172,"y_offset", false,-1, 31,0);
    tracep->declBit(c+80,"finished", false,-1);
    tracep->declBus(c+81,"iterations", false,-1, 31,0);
    tracep->declBus(c+82,"xpixel", false,-1, 31,0);
    tracep->declBus(c+83,"ypixel", false,-1, 31,0);
    tracep->declBus(c+200,"fp_top", false,-1, 31,0);
    tracep->declBus(c+201,"fp_square_top", false,-1, 31,0);
    tracep->declBus(c+190,"x0", false,-1, 31,0);
    tracep->declBus(c+191,"y0", false,-1, 31,0);
    tracep->declBus(c+84,"x0_buff", false,-1, 31,0);
    tracep->declBus(c+85,"y0_buff", false,-1, 31,0);
    tracep->declBus(c+187,"x_min", false,-1, 31,0);
    tracep->declBus(c+188,"y_min", false,-1, 31,0);
    tracep->declBus(c+189,"step", false,-1, 31,0);
    tracep->declBus(c+86,"state", false,-1, 31,0);
    tracep->declBus(c+87,"x", false,-1, 31,0);
    tracep->declBus(c+88,"y", false,-1, 31,0);
    tracep->declQuad(c+89,"y_tmp", false,-1, 63,0);
    tracep->declQuad(c+91,"x2", false,-1, 63,0);
    tracep->declQuad(c+93,"y2", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("queue_block ");
    tracep->declBus(c+194,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+202,"QUEUE_SIZE", false,-1, 31,0);
    tracep->declBus(c+196,"COUNTER_SIZE", false,-1, 31,0);
    tracep->declBus(c+195,"RBG_SIZE", false,-1, 31,0);
    tracep->declBit(c+166,"clk", false,-1);
    tracep->declBit(c+167,"reset", false,-1);
    tracep->declBit(c+95,"fin_flag", false,-1);
    tracep->declBus(c+96,"colour_i", false,-1, 23,0);
    tracep->declBus(c+97,"xpixel_i", false,-1, 31,0);
    tracep->declBus(c+98,"ypixel_i", false,-1, 31,0);
    tracep->declBus(c+5,"xpixel_check", false,-1, 31,0);
    tracep->declBus(c+6,"ypixel_check", false,-1, 31,0);
    tracep->declBus(c+7,"colour_o", false,-1, 23,0);
    tracep->declBit(c+99,"full_queue", false,-1);
    tracep->declBit(c+100,"en", false,-1);
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+101+i*1,"colour_queue", true,(i+0), 23,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+106+i*1,"xqueue", true,(i+0), 31,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+111+i*1,"yqueue", true,(i+0), 31,0);
    }
    tracep->declBus(c+116,"counter", false,-1, 2,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+2,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+117,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+118,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("genblk1[2] ");
    tracep->pushNamePrefix("engine ");
    tracep->declBus(c+194,"PIXEL_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+194,"fp_bits", false,-1, 31,0);
    tracep->declBus(c+195,"fp_bot", false,-1, 31,0);
    tracep->declBus(c+194,"ITERATIONS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+197,"SCREEN_WIDTH", false,-1, 31,0);
    tracep->declBus(c+198,"SCREEN_HEIGHT", false,-1, 31,0);
    tracep->declBus(c+199,"SCALE_FACTOR", false,-1, 31,0);
    tracep->declBit(c+166,"clk", false,-1);
    tracep->declBit(c+183,"reset", false,-1);
    tracep->declBus(c+169,"iterations_max", false,-1, 31,0);
    tracep->declBus(c+119,"x0_", false,-1, 31,0);
    tracep->declBus(c+120,"y0_", false,-1, 31,0);
    tracep->declBus(c+170,"zoom", false,-1, 31,0);
    tracep->declBus(c+171,"x_offset", false,-1, 31,0);
    tracep->declBus(c+172,"y_offset", false,-1, 31,0);
    tracep->declBit(c+121,"finished", false,-1);
    tracep->declBus(c+122,"iterations", false,-1, 31,0);
    tracep->declBus(c+123,"xpixel", false,-1, 31,0);
    tracep->declBus(c+124,"ypixel", false,-1, 31,0);
    tracep->declBus(c+200,"fp_top", false,-1, 31,0);
    tracep->declBus(c+201,"fp_square_top", false,-1, 31,0);
    tracep->declBus(c+192,"x0", false,-1, 31,0);
    tracep->declBus(c+193,"y0", false,-1, 31,0);
    tracep->declBus(c+125,"x0_buff", false,-1, 31,0);
    tracep->declBus(c+126,"y0_buff", false,-1, 31,0);
    tracep->declBus(c+187,"x_min", false,-1, 31,0);
    tracep->declBus(c+188,"y_min", false,-1, 31,0);
    tracep->declBus(c+189,"step", false,-1, 31,0);
    tracep->declBus(c+127,"state", false,-1, 31,0);
    tracep->declBus(c+128,"x", false,-1, 31,0);
    tracep->declBus(c+129,"y", false,-1, 31,0);
    tracep->declQuad(c+130,"y_tmp", false,-1, 63,0);
    tracep->declQuad(c+132,"x2", false,-1, 63,0);
    tracep->declQuad(c+134,"y2", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("queue_block ");
    tracep->declBus(c+194,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+202,"QUEUE_SIZE", false,-1, 31,0);
    tracep->declBus(c+196,"COUNTER_SIZE", false,-1, 31,0);
    tracep->declBus(c+195,"RBG_SIZE", false,-1, 31,0);
    tracep->declBit(c+166,"clk", false,-1);
    tracep->declBit(c+167,"reset", false,-1);
    tracep->declBit(c+136,"fin_flag", false,-1);
    tracep->declBus(c+137,"colour_i", false,-1, 23,0);
    tracep->declBus(c+138,"xpixel_i", false,-1, 31,0);
    tracep->declBus(c+139,"ypixel_i", false,-1, 31,0);
    tracep->declBus(c+5,"xpixel_check", false,-1, 31,0);
    tracep->declBus(c+6,"ypixel_check", false,-1, 31,0);
    tracep->declBus(c+7,"colour_o", false,-1, 23,0);
    tracep->declBit(c+140,"full_queue", false,-1);
    tracep->declBit(c+141,"en", false,-1);
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+142+i*1,"colour_queue", true,(i+0), 23,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+147+i*1,"xqueue", true,(i+0), 31,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+152+i*1,"yqueue", true,(i+0), 31,0);
    }
    tracep->declBus(c+157,"counter", false,-1, 2,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+3,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+158,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+159,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lut_rom ");
    tracep->declBus(c+194,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+195,"RBG_SIZE", false,-1, 31,0);
    tracep->declBus(c+203,"MAX_ITERATION", false,-1, 31,0);
    tracep->declBus(c+196,"NUM_ENGINES", false,-1, 31,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+160+i*1,"iterations", true,(i+0), 31,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+163+i*1,"rgb_val", true,(i+0), 23,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+204,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
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
    bufp->fullIData(oldp+4,(vlSelf->top__DOT__colour_o_wire),24);
    bufp->fullIData(oldp+5,(vlSelf->top__DOT__xpixel_wire),32);
    bufp->fullIData(oldp+6,(vlSelf->top__DOT__ypixel_wire),32);
    bufp->fullIData(oldp+7,(vlSelf->top__DOT__colour_wire),24);
    bufp->fullBit(oldp+8,((7U == (IData)(vlSelf->top__DOT__en_bus))));
    bufp->fullCData(oldp+9,(vlSelf->top__DOT__fin_bus),3);
    bufp->fullIData(oldp+10,(vlSelf->top__DOT__x[0]),32);
    bufp->fullIData(oldp+11,(vlSelf->top__DOT__x[1]),32);
    bufp->fullIData(oldp+12,(vlSelf->top__DOT__x[2]),32);
    bufp->fullIData(oldp+13,(vlSelf->top__DOT__y[0]),32);
    bufp->fullIData(oldp+14,(vlSelf->top__DOT__y[1]),32);
    bufp->fullIData(oldp+15,(vlSelf->top__DOT__y[2]),32);
    bufp->fullIData(oldp+16,(vlSelf->top__DOT__iterations_bus[0]),32);
    bufp->fullIData(oldp+17,(vlSelf->top__DOT__iterations_bus[1]),32);
    bufp->fullIData(oldp+18,(vlSelf->top__DOT__iterations_bus[2]),32);
    bufp->fullIData(oldp+19,(vlSelf->top__DOT__xpixel_bus[0]),32);
    bufp->fullIData(oldp+20,(vlSelf->top__DOT__xpixel_bus[1]),32);
    bufp->fullIData(oldp+21,(vlSelf->top__DOT__xpixel_bus[2]),32);
    bufp->fullIData(oldp+22,(vlSelf->top__DOT__ypixel_bus[0]),32);
    bufp->fullIData(oldp+23,(vlSelf->top__DOT__ypixel_bus[1]),32);
    bufp->fullIData(oldp+24,(vlSelf->top__DOT__ypixel_bus[2]),32);
    bufp->fullCData(oldp+25,(vlSelf->top__DOT__en_bus),3);
    bufp->fullIData(oldp+26,(vlSelf->top__DOT__colour_bus[0]),24);
    bufp->fullIData(oldp+27,(vlSelf->top__DOT__colour_bus[1]),24);
    bufp->fullIData(oldp+28,(vlSelf->top__DOT__colour_bus[2]),24);
    bufp->fullIData(oldp+29,(vlSelf->top__DOT__combinator_block__DOT__xpixel),32);
    bufp->fullIData(oldp+30,(vlSelf->top__DOT__combinator_block__DOT__ypixel),32);
    bufp->fullIData(oldp+31,(vlSelf->top__DOT__distributor__DOT__x0),32);
    bufp->fullIData(oldp+32,(VL_MODDIV_III(32, ((IData)(1U) 
                                                + vlSelf->top__DOT__distributor__DOT__x0), (IData)(0x280U))),32);
    bufp->fullIData(oldp+33,(VL_MODDIV_III(32, ((IData)(2U) 
                                                + vlSelf->top__DOT__distributor__DOT__x0), (IData)(0x280U))),32);
    bufp->fullIData(oldp+34,(vlSelf->top__DOT__distributor__DOT__y0),32);
    bufp->fullIData(oldp+35,(VL_MODDIV_III(32, (vlSelf->top__DOT__distributor__DOT__y0 
                                                + VL_DIV_III(32, 
                                                             ((IData)(1U) 
                                                              + vlSelf->top__DOT__distributor__DOT__x0), (IData)(0x280U))), (IData)(0x1e0U))),32);
    bufp->fullIData(oldp+36,(VL_MODDIV_III(32, (vlSelf->top__DOT__distributor__DOT__y0 
                                                + VL_DIV_III(32, 
                                                             ((IData)(2U) 
                                                              + vlSelf->top__DOT__distributor__DOT__x0), (IData)(0x280U))), (IData)(0x1e0U))),32);
    bufp->fullIData(oldp+37,(vlSelf->top__DOT__x[0U]),32);
    bufp->fullIData(oldp+38,(vlSelf->top__DOT__y[0U]),32);
    bufp->fullBit(oldp+39,(vlSelf->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__engine__finished));
    bufp->fullIData(oldp+40,(vlSelf->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__engine__iterations),32);
    bufp->fullIData(oldp+41,(vlSelf->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__engine__xpixel),32);
    bufp->fullIData(oldp+42,(vlSelf->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__engine__ypixel),32);
    bufp->fullIData(oldp+43,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__x0_buff),32);
    bufp->fullIData(oldp+44,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__y0_buff),32);
    bufp->fullIData(oldp+45,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__state),32);
    bufp->fullIData(oldp+46,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__x),32);
    bufp->fullIData(oldp+47,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__y),32);
    bufp->fullQData(oldp+48,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__y_tmp),64);
    bufp->fullQData(oldp+50,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__x2),64);
    bufp->fullQData(oldp+52,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__y2),64);
    bufp->fullBit(oldp+54,((1U & (IData)(vlSelf->top__DOT__fin_bus))));
    bufp->fullIData(oldp+55,(vlSelf->top__DOT__colour_bus
                             [0U]),24);
    bufp->fullIData(oldp+56,(vlSelf->top__DOT__xpixel_bus
                             [0U]),32);
    bufp->fullIData(oldp+57,(vlSelf->top__DOT__ypixel_bus
                             [0U]),32);
    bufp->fullBit(oldp+58,(vlSelf->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__queue_block__full_queue));
    bufp->fullBit(oldp+59,(vlSelf->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__queue_block__en));
    bufp->fullIData(oldp+60,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[0]),24);
    bufp->fullIData(oldp+61,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[1]),24);
    bufp->fullIData(oldp+62,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[2]),24);
    bufp->fullIData(oldp+63,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[3]),24);
    bufp->fullIData(oldp+64,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[4]),24);
    bufp->fullIData(oldp+65,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[0]),32);
    bufp->fullIData(oldp+66,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[1]),32);
    bufp->fullIData(oldp+67,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[2]),32);
    bufp->fullIData(oldp+68,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[3]),32);
    bufp->fullIData(oldp+69,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[4]),32);
    bufp->fullIData(oldp+70,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[0]),32);
    bufp->fullIData(oldp+71,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[1]),32);
    bufp->fullIData(oldp+72,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[2]),32);
    bufp->fullIData(oldp+73,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[3]),32);
    bufp->fullIData(oldp+74,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[4]),32);
    bufp->fullCData(oldp+75,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__counter),3);
    bufp->fullIData(oldp+76,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+77,(vlSelf->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__unnamedblk3__DOT__i),32);
    bufp->fullIData(oldp+78,(vlSelf->top__DOT__x[1U]),32);
    bufp->fullIData(oldp+79,(vlSelf->top__DOT__y[1U]),32);
    bufp->fullBit(oldp+80,(vlSelf->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__engine__finished));
    bufp->fullIData(oldp+81,(vlSelf->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__engine__iterations),32);
    bufp->fullIData(oldp+82,(vlSelf->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__engine__xpixel),32);
    bufp->fullIData(oldp+83,(vlSelf->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__engine__ypixel),32);
    bufp->fullIData(oldp+84,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__x0_buff),32);
    bufp->fullIData(oldp+85,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__y0_buff),32);
    bufp->fullIData(oldp+86,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__state),32);
    bufp->fullIData(oldp+87,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__x),32);
    bufp->fullIData(oldp+88,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__y),32);
    bufp->fullQData(oldp+89,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__y_tmp),64);
    bufp->fullQData(oldp+91,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__x2),64);
    bufp->fullQData(oldp+93,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__y2),64);
    bufp->fullBit(oldp+95,((1U & ((IData)(vlSelf->top__DOT__fin_bus) 
                                  >> 1U))));
    bufp->fullIData(oldp+96,(vlSelf->top__DOT__colour_bus
                             [1U]),24);
    bufp->fullIData(oldp+97,(vlSelf->top__DOT__xpixel_bus
                             [1U]),32);
    bufp->fullIData(oldp+98,(vlSelf->top__DOT__ypixel_bus
                             [1U]),32);
    bufp->fullBit(oldp+99,(vlSelf->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__queue_block__full_queue));
    bufp->fullBit(oldp+100,(vlSelf->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__queue_block__en));
    bufp->fullIData(oldp+101,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[0]),24);
    bufp->fullIData(oldp+102,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[1]),24);
    bufp->fullIData(oldp+103,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[2]),24);
    bufp->fullIData(oldp+104,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[3]),24);
    bufp->fullIData(oldp+105,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[4]),24);
    bufp->fullIData(oldp+106,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[0]),32);
    bufp->fullIData(oldp+107,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[1]),32);
    bufp->fullIData(oldp+108,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[2]),32);
    bufp->fullIData(oldp+109,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[3]),32);
    bufp->fullIData(oldp+110,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[4]),32);
    bufp->fullIData(oldp+111,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[0]),32);
    bufp->fullIData(oldp+112,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[1]),32);
    bufp->fullIData(oldp+113,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[2]),32);
    bufp->fullIData(oldp+114,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[3]),32);
    bufp->fullIData(oldp+115,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[4]),32);
    bufp->fullCData(oldp+116,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__counter),3);
    bufp->fullIData(oldp+117,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+118,(vlSelf->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__unnamedblk3__DOT__i),32);
    bufp->fullIData(oldp+119,(vlSelf->top__DOT__x[2U]),32);
    bufp->fullIData(oldp+120,(vlSelf->top__DOT__y[2U]),32);
    bufp->fullBit(oldp+121,(vlSelf->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__engine__finished));
    bufp->fullIData(oldp+122,(vlSelf->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__engine__iterations),32);
    bufp->fullIData(oldp+123,(vlSelf->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__engine__xpixel),32);
    bufp->fullIData(oldp+124,(vlSelf->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__engine__ypixel),32);
    bufp->fullIData(oldp+125,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__x0_buff),32);
    bufp->fullIData(oldp+126,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__y0_buff),32);
    bufp->fullIData(oldp+127,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__state),32);
    bufp->fullIData(oldp+128,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__x),32);
    bufp->fullIData(oldp+129,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__y),32);
    bufp->fullQData(oldp+130,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__y_tmp),64);
    bufp->fullQData(oldp+132,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__x2),64);
    bufp->fullQData(oldp+134,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__y2),64);
    bufp->fullBit(oldp+136,((1U & ((IData)(vlSelf->top__DOT__fin_bus) 
                                   >> 2U))));
    bufp->fullIData(oldp+137,(vlSelf->top__DOT__colour_bus
                              [2U]),24);
    bufp->fullIData(oldp+138,(vlSelf->top__DOT__xpixel_bus
                              [2U]),32);
    bufp->fullIData(oldp+139,(vlSelf->top__DOT__ypixel_bus
                              [2U]),32);
    bufp->fullBit(oldp+140,(vlSelf->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__queue_block__full_queue));
    bufp->fullBit(oldp+141,(vlSelf->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__queue_block__en));
    bufp->fullIData(oldp+142,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[0]),24);
    bufp->fullIData(oldp+143,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[1]),24);
    bufp->fullIData(oldp+144,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[2]),24);
    bufp->fullIData(oldp+145,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[3]),24);
    bufp->fullIData(oldp+146,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[4]),24);
    bufp->fullIData(oldp+147,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[0]),32);
    bufp->fullIData(oldp+148,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[1]),32);
    bufp->fullIData(oldp+149,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[2]),32);
    bufp->fullIData(oldp+150,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[3]),32);
    bufp->fullIData(oldp+151,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[4]),32);
    bufp->fullIData(oldp+152,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[0]),32);
    bufp->fullIData(oldp+153,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[1]),32);
    bufp->fullIData(oldp+154,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[2]),32);
    bufp->fullIData(oldp+155,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[3]),32);
    bufp->fullIData(oldp+156,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[4]),32);
    bufp->fullCData(oldp+157,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__counter),3);
    bufp->fullIData(oldp+158,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+159,(vlSelf->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__unnamedblk3__DOT__i),32);
    bufp->fullIData(oldp+160,(vlSelf->top__DOT____Vcellinp__lut_rom__iterations[0]),32);
    bufp->fullIData(oldp+161,(vlSelf->top__DOT____Vcellinp__lut_rom__iterations[1]),32);
    bufp->fullIData(oldp+162,(vlSelf->top__DOT____Vcellinp__lut_rom__iterations[2]),32);
    bufp->fullIData(oldp+163,(vlSelf->top__DOT____Vcellout__lut_rom__rgb_val[0]),24);
    bufp->fullIData(oldp+164,(vlSelf->top__DOT____Vcellout__lut_rom__rgb_val[1]),24);
    bufp->fullIData(oldp+165,(vlSelf->top__DOT____Vcellout__lut_rom__rgb_val[2]),24);
    bufp->fullBit(oldp+166,(vlSelf->clk));
    bufp->fullBit(oldp+167,(vlSelf->reset));
    bufp->fullBit(oldp+168,(vlSelf->ready));
    bufp->fullIData(oldp+169,(vlSelf->iterations_max),32);
    bufp->fullIData(oldp+170,(vlSelf->zoom),32);
    bufp->fullIData(oldp+171,(vlSelf->x_offset),32);
    bufp->fullIData(oldp+172,(vlSelf->y_offset),32);
    bufp->fullCData(oldp+173,(vlSelf->r),8);
    bufp->fullCData(oldp+174,(vlSelf->g),8);
    bufp->fullCData(oldp+175,(vlSelf->b),8);
    bufp->fullBit(oldp+176,(vlSelf->first));
    bufp->fullBit(oldp+177,(vlSelf->last_x));
    bufp->fullBit(oldp+178,(vlSelf->last_y));
    bufp->fullBit(oldp+179,(vlSelf->valid));
    bufp->fullBit(oldp+180,(vlSelf->full_queue[0]));
    bufp->fullBit(oldp+181,(vlSelf->full_queue[1]));
    bufp->fullBit(oldp+182,(vlSelf->full_queue[2]));
    bufp->fullBit(oldp+183,(vlSelf->top__DOT__reset_engine));
    bufp->fullBit(oldp+184,(vlSelf->top__DOT__fin_wire));
    bufp->fullIData(oldp+185,((VL_RTOIROUND_I_D(((1.67772160000000000e+07 
                                                  * 
                                                  (-320.0 
                                                   + 
                                                   VL_ISTOR_D_I(32, vlSelf->x_offset))) 
                                                 / 
                                                 VL_ISTOR_D_I(32, 
                                                              ((IData)(0x64U) 
                                                               * vlSelf->zoom)))) 
                               + VL_MULS_III(32, VL_DIVS_III(32, (IData)(0x1000000U), 
                                                             VL_MULS_III(32, (IData)(0x64U), vlSelf->zoom)), 
                                             vlSelf->top__DOT__x
                                             [0U]))),32);
    bufp->fullIData(oldp+186,((VL_RTOIROUND_I_D(((1.67772160000000000e+07 
                                                  * 
                                                  (-240.0 
                                                   + 
                                                   VL_ISTOR_D_I(32, vlSelf->y_offset))) 
                                                 / 
                                                 VL_ISTOR_D_I(32, 
                                                              ((IData)(0x64U) 
                                                               * vlSelf->zoom)))) 
                               + VL_MULS_III(32, VL_DIVS_III(32, (IData)(0x1000000U), 
                                                             VL_MULS_III(32, (IData)(0x64U), vlSelf->zoom)), 
                                             vlSelf->top__DOT__y
                                             [0U]))),32);
    bufp->fullIData(oldp+187,(VL_RTOIROUND_I_D(((1.67772160000000000e+07 
                                                 * 
                                                 (-320.0 
                                                  + 
                                                  VL_ISTOR_D_I(32, vlSelf->x_offset))) 
                                                / VL_ISTOR_D_I(32, 
                                                               ((IData)(0x64U) 
                                                                * vlSelf->zoom))))),32);
    bufp->fullIData(oldp+188,(VL_RTOIROUND_I_D(((1.67772160000000000e+07 
                                                 * 
                                                 (-240.0 
                                                  + 
                                                  VL_ISTOR_D_I(32, vlSelf->y_offset))) 
                                                / VL_ISTOR_D_I(32, 
                                                               ((IData)(0x64U) 
                                                                * vlSelf->zoom))))),32);
    bufp->fullIData(oldp+189,(VL_DIVS_III(32, (IData)(0x1000000U), 
                                          VL_MULS_III(32, (IData)(0x64U), vlSelf->zoom))),32);
    bufp->fullIData(oldp+190,((VL_RTOIROUND_I_D(((1.67772160000000000e+07 
                                                  * 
                                                  (-320.0 
                                                   + 
                                                   VL_ISTOR_D_I(32, vlSelf->x_offset))) 
                                                 / 
                                                 VL_ISTOR_D_I(32, 
                                                              ((IData)(0x64U) 
                                                               * vlSelf->zoom)))) 
                               + VL_MULS_III(32, VL_DIVS_III(32, (IData)(0x1000000U), 
                                                             VL_MULS_III(32, (IData)(0x64U), vlSelf->zoom)), 
                                             vlSelf->top__DOT__x
                                             [1U]))),32);
    bufp->fullIData(oldp+191,((VL_RTOIROUND_I_D(((1.67772160000000000e+07 
                                                  * 
                                                  (-240.0 
                                                   + 
                                                   VL_ISTOR_D_I(32, vlSelf->y_offset))) 
                                                 / 
                                                 VL_ISTOR_D_I(32, 
                                                              ((IData)(0x64U) 
                                                               * vlSelf->zoom)))) 
                               + VL_MULS_III(32, VL_DIVS_III(32, (IData)(0x1000000U), 
                                                             VL_MULS_III(32, (IData)(0x64U), vlSelf->zoom)), 
                                             vlSelf->top__DOT__y
                                             [1U]))),32);
    bufp->fullIData(oldp+192,((VL_RTOIROUND_I_D(((1.67772160000000000e+07 
                                                  * 
                                                  (-320.0 
                                                   + 
                                                   VL_ISTOR_D_I(32, vlSelf->x_offset))) 
                                                 / 
                                                 VL_ISTOR_D_I(32, 
                                                              ((IData)(0x64U) 
                                                               * vlSelf->zoom)))) 
                               + VL_MULS_III(32, VL_DIVS_III(32, (IData)(0x1000000U), 
                                                             VL_MULS_III(32, (IData)(0x64U), vlSelf->zoom)), 
                                             vlSelf->top__DOT__x
                                             [2U]))),32);
    bufp->fullIData(oldp+193,((VL_RTOIROUND_I_D(((1.67772160000000000e+07 
                                                  * 
                                                  (-240.0 
                                                   + 
                                                   VL_ISTOR_D_I(32, vlSelf->y_offset))) 
                                                 / 
                                                 VL_ISTOR_D_I(32, 
                                                              ((IData)(0x64U) 
                                                               * vlSelf->zoom)))) 
                               + VL_MULS_III(32, VL_DIVS_III(32, (IData)(0x1000000U), 
                                                             VL_MULS_III(32, (IData)(0x64U), vlSelf->zoom)), 
                                             vlSelf->top__DOT__y
                                             [2U]))),32);
    bufp->fullIData(oldp+194,(0x20U),32);
    bufp->fullIData(oldp+195,(0x18U),32);
    bufp->fullIData(oldp+196,(3U),32);
    bufp->fullIData(oldp+197,(0x280U),32);
    bufp->fullIData(oldp+198,(0x1e0U),32);
    bufp->fullIData(oldp+199,(0x1000000U),32);
    bufp->fullIData(oldp+200,(8U),32);
    bufp->fullIData(oldp+201,(0x37U),32);
    bufp->fullIData(oldp+202,(5U),32);
    bufp->fullIData(oldp+203,(0x32U),32);
    bufp->fullIData(oldp+204,(3U),32);
}
