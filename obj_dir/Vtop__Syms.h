// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTOP__SYMS_H_
#define VERILATED_VTOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtop.h"

// INCLUDE MODULE CLASSES
#include "Vtop___024root.h"
#include "Vtop_queue_new.h"

// SYMS CLASS (contains all model state)
class Vtop__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtop* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtop___024root                 TOP;
    Vtop_queue_new                 TOP__top__DOT__genblk1__BRA__0__KET____DOT__queue_block;
    Vtop_queue_new                 TOP__top__DOT__genblk1__BRA__10__KET____DOT__queue_block;
    Vtop_queue_new                 TOP__top__DOT__genblk1__BRA__11__KET____DOT__queue_block;
    Vtop_queue_new                 TOP__top__DOT__genblk1__BRA__12__KET____DOT__queue_block;
    Vtop_queue_new                 TOP__top__DOT__genblk1__BRA__13__KET____DOT__queue_block;
    Vtop_queue_new                 TOP__top__DOT__genblk1__BRA__14__KET____DOT__queue_block;
    Vtop_queue_new                 TOP__top__DOT__genblk1__BRA__15__KET____DOT__queue_block;
    Vtop_queue_new                 TOP__top__DOT__genblk1__BRA__16__KET____DOT__queue_block;
    Vtop_queue_new                 TOP__top__DOT__genblk1__BRA__17__KET____DOT__queue_block;
    Vtop_queue_new                 TOP__top__DOT__genblk1__BRA__18__KET____DOT__queue_block;
    Vtop_queue_new                 TOP__top__DOT__genblk1__BRA__19__KET____DOT__queue_block;
    Vtop_queue_new                 TOP__top__DOT__genblk1__BRA__1__KET____DOT__queue_block;
    Vtop_queue_new                 TOP__top__DOT__genblk1__BRA__20__KET____DOT__queue_block;
    Vtop_queue_new                 TOP__top__DOT__genblk1__BRA__21__KET____DOT__queue_block;
    Vtop_queue_new                 TOP__top__DOT__genblk1__BRA__22__KET____DOT__queue_block;
    Vtop_queue_new                 TOP__top__DOT__genblk1__BRA__23__KET____DOT__queue_block;
    Vtop_queue_new                 TOP__top__DOT__genblk1__BRA__24__KET____DOT__queue_block;
    Vtop_queue_new                 TOP__top__DOT__genblk1__BRA__25__KET____DOT__queue_block;
    Vtop_queue_new                 TOP__top__DOT__genblk1__BRA__26__KET____DOT__queue_block;
    Vtop_queue_new                 TOP__top__DOT__genblk1__BRA__27__KET____DOT__queue_block;
    Vtop_queue_new                 TOP__top__DOT__genblk1__BRA__28__KET____DOT__queue_block;
    Vtop_queue_new                 TOP__top__DOT__genblk1__BRA__29__KET____DOT__queue_block;
    Vtop_queue_new                 TOP__top__DOT__genblk1__BRA__2__KET____DOT__queue_block;
    Vtop_queue_new                 TOP__top__DOT__genblk1__BRA__3__KET____DOT__queue_block;
    Vtop_queue_new                 TOP__top__DOT__genblk1__BRA__4__KET____DOT__queue_block;
    Vtop_queue_new                 TOP__top__DOT__genblk1__BRA__5__KET____DOT__queue_block;
    Vtop_queue_new                 TOP__top__DOT__genblk1__BRA__6__KET____DOT__queue_block;
    Vtop_queue_new                 TOP__top__DOT__genblk1__BRA__7__KET____DOT__queue_block;
    Vtop_queue_new                 TOP__top__DOT__genblk1__BRA__8__KET____DOT__queue_block;
    Vtop_queue_new                 TOP__top__DOT__genblk1__BRA__9__KET____DOT__queue_block;

    // CONSTRUCTORS
    Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp);
    ~Vtop__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard