// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtop__Syms.h"
#include "Vtop.h"
#include "Vtop___024root.h"
#include "Vtop_mandelbrot_engine.h"
#include "Vtop_queue_new.h"

// FUNCTIONS
Vtop__Syms::~Vtop__Syms()
{
}

Vtop__Syms::Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine{this, Verilated::catName(namep, "top.genblk1[0].engine")}
    , TOP__top__DOT__genblk1__BRA__0__KET____DOT__queue_block{this, Verilated::catName(namep, "top.genblk1[0].queue_block")}
    , TOP__top__DOT__genblk1__BRA__10__KET____DOT__engine{this, Verilated::catName(namep, "top.genblk1[10].engine")}
    , TOP__top__DOT__genblk1__BRA__10__KET____DOT__queue_block{this, Verilated::catName(namep, "top.genblk1[10].queue_block")}
    , TOP__top__DOT__genblk1__BRA__11__KET____DOT__engine{this, Verilated::catName(namep, "top.genblk1[11].engine")}
    , TOP__top__DOT__genblk1__BRA__11__KET____DOT__queue_block{this, Verilated::catName(namep, "top.genblk1[11].queue_block")}
    , TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine{this, Verilated::catName(namep, "top.genblk1[1].engine")}
    , TOP__top__DOT__genblk1__BRA__1__KET____DOT__queue_block{this, Verilated::catName(namep, "top.genblk1[1].queue_block")}
    , TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine{this, Verilated::catName(namep, "top.genblk1[2].engine")}
    , TOP__top__DOT__genblk1__BRA__2__KET____DOT__queue_block{this, Verilated::catName(namep, "top.genblk1[2].queue_block")}
    , TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine{this, Verilated::catName(namep, "top.genblk1[3].engine")}
    , TOP__top__DOT__genblk1__BRA__3__KET____DOT__queue_block{this, Verilated::catName(namep, "top.genblk1[3].queue_block")}
    , TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine{this, Verilated::catName(namep, "top.genblk1[4].engine")}
    , TOP__top__DOT__genblk1__BRA__4__KET____DOT__queue_block{this, Verilated::catName(namep, "top.genblk1[4].queue_block")}
    , TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine{this, Verilated::catName(namep, "top.genblk1[5].engine")}
    , TOP__top__DOT__genblk1__BRA__5__KET____DOT__queue_block{this, Verilated::catName(namep, "top.genblk1[5].queue_block")}
    , TOP__top__DOT__genblk1__BRA__6__KET____DOT__engine{this, Verilated::catName(namep, "top.genblk1[6].engine")}
    , TOP__top__DOT__genblk1__BRA__6__KET____DOT__queue_block{this, Verilated::catName(namep, "top.genblk1[6].queue_block")}
    , TOP__top__DOT__genblk1__BRA__7__KET____DOT__engine{this, Verilated::catName(namep, "top.genblk1[7].engine")}
    , TOP__top__DOT__genblk1__BRA__7__KET____DOT__queue_block{this, Verilated::catName(namep, "top.genblk1[7].queue_block")}
    , TOP__top__DOT__genblk1__BRA__8__KET____DOT__engine{this, Verilated::catName(namep, "top.genblk1[8].engine")}
    , TOP__top__DOT__genblk1__BRA__8__KET____DOT__queue_block{this, Verilated::catName(namep, "top.genblk1[8].queue_block")}
    , TOP__top__DOT__genblk1__BRA__9__KET____DOT__engine{this, Verilated::catName(namep, "top.genblk1[9].engine")}
    , TOP__top__DOT__genblk1__BRA__9__KET____DOT__queue_block{this, Verilated::catName(namep, "top.genblk1[9].queue_block")}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__top__DOT__genblk1__BRA__0__KET____DOT__engine = &TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine;
    TOP.__PVT__top__DOT__genblk1__BRA__0__KET____DOT__queue_block = &TOP__top__DOT__genblk1__BRA__0__KET____DOT__queue_block;
    TOP.__PVT__top__DOT__genblk1__BRA__10__KET____DOT__engine = &TOP__top__DOT__genblk1__BRA__10__KET____DOT__engine;
    TOP.__PVT__top__DOT__genblk1__BRA__10__KET____DOT__queue_block = &TOP__top__DOT__genblk1__BRA__10__KET____DOT__queue_block;
    TOP.__PVT__top__DOT__genblk1__BRA__11__KET____DOT__engine = &TOP__top__DOT__genblk1__BRA__11__KET____DOT__engine;
    TOP.__PVT__top__DOT__genblk1__BRA__11__KET____DOT__queue_block = &TOP__top__DOT__genblk1__BRA__11__KET____DOT__queue_block;
    TOP.__PVT__top__DOT__genblk1__BRA__1__KET____DOT__engine = &TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine;
    TOP.__PVT__top__DOT__genblk1__BRA__1__KET____DOT__queue_block = &TOP__top__DOT__genblk1__BRA__1__KET____DOT__queue_block;
    TOP.__PVT__top__DOT__genblk1__BRA__2__KET____DOT__engine = &TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine;
    TOP.__PVT__top__DOT__genblk1__BRA__2__KET____DOT__queue_block = &TOP__top__DOT__genblk1__BRA__2__KET____DOT__queue_block;
    TOP.__PVT__top__DOT__genblk1__BRA__3__KET____DOT__engine = &TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine;
    TOP.__PVT__top__DOT__genblk1__BRA__3__KET____DOT__queue_block = &TOP__top__DOT__genblk1__BRA__3__KET____DOT__queue_block;
    TOP.__PVT__top__DOT__genblk1__BRA__4__KET____DOT__engine = &TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine;
    TOP.__PVT__top__DOT__genblk1__BRA__4__KET____DOT__queue_block = &TOP__top__DOT__genblk1__BRA__4__KET____DOT__queue_block;
    TOP.__PVT__top__DOT__genblk1__BRA__5__KET____DOT__engine = &TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine;
    TOP.__PVT__top__DOT__genblk1__BRA__5__KET____DOT__queue_block = &TOP__top__DOT__genblk1__BRA__5__KET____DOT__queue_block;
    TOP.__PVT__top__DOT__genblk1__BRA__6__KET____DOT__engine = &TOP__top__DOT__genblk1__BRA__6__KET____DOT__engine;
    TOP.__PVT__top__DOT__genblk1__BRA__6__KET____DOT__queue_block = &TOP__top__DOT__genblk1__BRA__6__KET____DOT__queue_block;
    TOP.__PVT__top__DOT__genblk1__BRA__7__KET____DOT__engine = &TOP__top__DOT__genblk1__BRA__7__KET____DOT__engine;
    TOP.__PVT__top__DOT__genblk1__BRA__7__KET____DOT__queue_block = &TOP__top__DOT__genblk1__BRA__7__KET____DOT__queue_block;
    TOP.__PVT__top__DOT__genblk1__BRA__8__KET____DOT__engine = &TOP__top__DOT__genblk1__BRA__8__KET____DOT__engine;
    TOP.__PVT__top__DOT__genblk1__BRA__8__KET____DOT__queue_block = &TOP__top__DOT__genblk1__BRA__8__KET____DOT__queue_block;
    TOP.__PVT__top__DOT__genblk1__BRA__9__KET____DOT__engine = &TOP__top__DOT__genblk1__BRA__9__KET____DOT__engine;
    TOP.__PVT__top__DOT__genblk1__BRA__9__KET____DOT__queue_block = &TOP__top__DOT__genblk1__BRA__9__KET____DOT__queue_block;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__Vconfigure(true);
    TOP__top__DOT__genblk1__BRA__0__KET____DOT__queue_block.__Vconfigure(true);
    TOP__top__DOT__genblk1__BRA__10__KET____DOT__engine.__Vconfigure(false);
    TOP__top__DOT__genblk1__BRA__10__KET____DOT__queue_block.__Vconfigure(false);
    TOP__top__DOT__genblk1__BRA__11__KET____DOT__engine.__Vconfigure(false);
    TOP__top__DOT__genblk1__BRA__11__KET____DOT__queue_block.__Vconfigure(false);
    TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__Vconfigure(false);
    TOP__top__DOT__genblk1__BRA__1__KET____DOT__queue_block.__Vconfigure(false);
    TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__Vconfigure(false);
    TOP__top__DOT__genblk1__BRA__2__KET____DOT__queue_block.__Vconfigure(false);
    TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__Vconfigure(false);
    TOP__top__DOT__genblk1__BRA__3__KET____DOT__queue_block.__Vconfigure(false);
    TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__Vconfigure(false);
    TOP__top__DOT__genblk1__BRA__4__KET____DOT__queue_block.__Vconfigure(false);
    TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__Vconfigure(false);
    TOP__top__DOT__genblk1__BRA__5__KET____DOT__queue_block.__Vconfigure(false);
    TOP__top__DOT__genblk1__BRA__6__KET____DOT__engine.__Vconfigure(false);
    TOP__top__DOT__genblk1__BRA__6__KET____DOT__queue_block.__Vconfigure(false);
    TOP__top__DOT__genblk1__BRA__7__KET____DOT__engine.__Vconfigure(false);
    TOP__top__DOT__genblk1__BRA__7__KET____DOT__queue_block.__Vconfigure(false);
    TOP__top__DOT__genblk1__BRA__8__KET____DOT__engine.__Vconfigure(false);
    TOP__top__DOT__genblk1__BRA__8__KET____DOT__queue_block.__Vconfigure(false);
    TOP__top__DOT__genblk1__BRA__9__KET____DOT__engine.__Vconfigure(false);
    TOP__top__DOT__genblk1__BRA__9__KET____DOT__queue_block.__Vconfigure(false);
}
