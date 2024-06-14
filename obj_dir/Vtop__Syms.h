// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VTOP__SYMS_H_
#define _VTOP__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODULE CLASSES
#include "Vtop.h"
#include "Vtop_mandelbrot_engine.h"
#include "Vtop_queue_new.h"

// SYMS CLASS
class Vtop__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit;
    
    // SUBCELL STATE
    Vtop*                          TOPp;
    Vtop_mandelbrot_engine         TOP__top__DOT__genblk1__BRA__0__KET____DOT__engine;
    Vtop_queue_new                 TOP__top__DOT__genblk1__BRA__0__KET____DOT__queue_block;
    Vtop_mandelbrot_engine         TOP__top__DOT__genblk1__BRA__10__KET____DOT__engine;
    Vtop_queue_new                 TOP__top__DOT__genblk1__BRA__10__KET____DOT__queue_block;
    Vtop_mandelbrot_engine         TOP__top__DOT__genblk1__BRA__11__KET____DOT__engine;
    Vtop_queue_new                 TOP__top__DOT__genblk1__BRA__11__KET____DOT__queue_block;
    Vtop_mandelbrot_engine         TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine;
    Vtop_queue_new                 TOP__top__DOT__genblk1__BRA__1__KET____DOT__queue_block;
    Vtop_mandelbrot_engine         TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine;
    Vtop_queue_new                 TOP__top__DOT__genblk1__BRA__2__KET____DOT__queue_block;
    Vtop_mandelbrot_engine         TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine;
    Vtop_queue_new                 TOP__top__DOT__genblk1__BRA__3__KET____DOT__queue_block;
    Vtop_mandelbrot_engine         TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine;
    Vtop_queue_new                 TOP__top__DOT__genblk1__BRA__4__KET____DOT__queue_block;
    Vtop_mandelbrot_engine         TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine;
<<<<<<< HEAD
    
    // CREATORS
    Vtop__Syms(Vtop* topp, const char* namep);
    ~Vtop__Syms() {}
    
=======
    Vtop_queue_new                 TOP__top__DOT__genblk1__BRA__5__KET____DOT__queue_block;
    Vtop_mandelbrot_engine         TOP__top__DOT__genblk1__BRA__6__KET____DOT__engine;
    Vtop_queue_new                 TOP__top__DOT__genblk1__BRA__6__KET____DOT__queue_block;
    Vtop_mandelbrot_engine         TOP__top__DOT__genblk1__BRA__7__KET____DOT__engine;
    Vtop_queue_new                 TOP__top__DOT__genblk1__BRA__7__KET____DOT__queue_block;
    Vtop_mandelbrot_engine         TOP__top__DOT__genblk1__BRA__8__KET____DOT__engine;
    Vtop_queue_new                 TOP__top__DOT__genblk1__BRA__8__KET____DOT__queue_block;
    Vtop_mandelbrot_engine         TOP__top__DOT__genblk1__BRA__9__KET____DOT__engine;
    Vtop_queue_new                 TOP__top__DOT__genblk1__BRA__9__KET____DOT__queue_block;

    // CONSTRUCTORS
    Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp);
    ~Vtop__Syms();

>>>>>>> f286281ae43e88f0425f2bbc458afd01a3d0bcba
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
