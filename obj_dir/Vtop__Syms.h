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
    Vtop_mandelbrot_engine         TOP__top__DOT__genblk1__BRA__1__KET____DOT__engine;
    Vtop_mandelbrot_engine         TOP__top__DOT__genblk1__BRA__2__KET____DOT__engine;
    Vtop_mandelbrot_engine         TOP__top__DOT__genblk1__BRA__3__KET____DOT__engine;
    Vtop_mandelbrot_engine         TOP__top__DOT__genblk1__BRA__4__KET____DOT__engine;
    Vtop_mandelbrot_engine         TOP__top__DOT__genblk1__BRA__5__KET____DOT__engine;
    
    // CREATORS
    Vtop__Syms(Vtop* topp, const char* namep);
    ~Vtop__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
