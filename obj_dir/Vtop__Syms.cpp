// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtop__Syms.h"
#include "Vtop.h"
#include "Vtop_mandelbrot_engine.h"



// FUNCTIONS
Vtop__Syms::Vtop__Syms(Vtop* topp, const char* namep)
    // Setup locals
    : __Vm_namep(namep)
    , __Vm_activity(false)
    , __Vm_baseCode(0)
    , __Vm_didInit(false)
    // Setup submodule names
    , TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine(Verilated::catName(topp->name(), "top.genblk1[0].engine"))
    , TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine(Verilated::catName(topp->name(), "top.genblk1[1].engine"))
    , TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine(Verilated::catName(topp->name(), "top.genblk1[2].engine"))
    , TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine(Verilated::catName(topp->name(), "top.genblk1[3].engine"))
    , TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine(Verilated::catName(topp->name(), "top.genblk1[4].engine"))
    , TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine(Verilated::catName(topp->name(), "top.genblk1[5].engine"))
{
    // Pointer to top level
    TOPp = topp;
    // Setup each module's pointers to their submodules
    TOPp->__PVT__top__DOT__genblk1__BRA__0__KET____DOT__engine = &TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine;
    TOPp->__PVT__top__DOT__genblk1__BRA__1__KET____DOT__engine = &TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine;
    TOPp->__PVT__top__DOT__genblk1__BRA__2__KET____DOT__engine = &TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine;
    TOPp->__PVT__top__DOT__genblk1__BRA__3__KET____DOT__engine = &TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine;
    TOPp->__PVT__top__DOT__genblk1__BRA__4__KET____DOT__engine = &TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine;
    TOPp->__PVT__top__DOT__genblk1__BRA__5__KET____DOT__engine = &TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine;
    // Setup each module's pointer back to symbol table (for public functions)
    TOPp->__Vconfigure(this, true);
    TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine.__Vconfigure(this, true);
    TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine.__Vconfigure(this, false);
    TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine.__Vconfigure(this, false);
    TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine.__Vconfigure(this, false);
    TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine.__Vconfigure(this, false);
    TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine.__Vconfigure(this, false);
}
