// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VTOP_H_
#define VERILATED_VTOP_H_  // guard

#include "verilated.h"

class Vtop__Syms;
class Vtop___024root;
class VerilatedVcdC;
class Vtop_queue_new;


// This class is the main interface to the Verilated model
class Vtop VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vtop__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clk,0,0);
    VL_IN8(&reset,0,0);
    VL_IN8(&ready,0,0);
    VL_OUT8(&r,7,0);
    VL_OUT8(&g,7,0);
    VL_OUT8(&b,7,0);
    VL_OUT8(&first,0,0);
    VL_OUT8(&last_x,0,0);
    VL_OUT8(&last_y,0,0);
    VL_OUT8(&valid,0,0);
    VL_IN(&iterations_max,31,0);
    VL_IN(&zoom,31,0);
    VL_IN(&x_offset,31,0);
    VL_IN(&y_offset,31,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    Vtop_queue_new* const __PVT__top__DOT__genblk1__BRA__0__KET____DOT__queue_block;
    Vtop_queue_new* const __PVT__top__DOT__genblk1__BRA__1__KET____DOT__queue_block;
    Vtop_queue_new* const __PVT__top__DOT__genblk1__BRA__2__KET____DOT__queue_block;
    Vtop_queue_new* const __PVT__top__DOT__genblk1__BRA__3__KET____DOT__queue_block;
    Vtop_queue_new* const __PVT__top__DOT__genblk1__BRA__4__KET____DOT__queue_block;
    Vtop_queue_new* const __PVT__top__DOT__genblk1__BRA__5__KET____DOT__queue_block;
    Vtop_queue_new* const __PVT__top__DOT__genblk1__BRA__6__KET____DOT__queue_block;
    Vtop_queue_new* const __PVT__top__DOT__genblk1__BRA__7__KET____DOT__queue_block;
    Vtop_queue_new* const __PVT__top__DOT__genblk1__BRA__8__KET____DOT__queue_block;
    Vtop_queue_new* const __PVT__top__DOT__genblk1__BRA__9__KET____DOT__queue_block;
    Vtop_queue_new* const __PVT__top__DOT__genblk1__BRA__10__KET____DOT__queue_block;
    Vtop_queue_new* const __PVT__top__DOT__genblk1__BRA__11__KET____DOT__queue_block;
    Vtop_queue_new* const __PVT__top__DOT__genblk1__BRA__12__KET____DOT__queue_block;
    Vtop_queue_new* const __PVT__top__DOT__genblk1__BRA__13__KET____DOT__queue_block;
    Vtop_queue_new* const __PVT__top__DOT__genblk1__BRA__14__KET____DOT__queue_block;
    Vtop_queue_new* const __PVT__top__DOT__genblk1__BRA__15__KET____DOT__queue_block;
    Vtop_queue_new* const __PVT__top__DOT__genblk1__BRA__16__KET____DOT__queue_block;
    Vtop_queue_new* const __PVT__top__DOT__genblk1__BRA__17__KET____DOT__queue_block;
    Vtop_queue_new* const __PVT__top__DOT__genblk1__BRA__18__KET____DOT__queue_block;
    Vtop_queue_new* const __PVT__top__DOT__genblk1__BRA__19__KET____DOT__queue_block;
    Vtop_queue_new* const __PVT__top__DOT__genblk1__BRA__20__KET____DOT__queue_block;
    Vtop_queue_new* const __PVT__top__DOT__genblk1__BRA__21__KET____DOT__queue_block;
    Vtop_queue_new* const __PVT__top__DOT__genblk1__BRA__22__KET____DOT__queue_block;
    Vtop_queue_new* const __PVT__top__DOT__genblk1__BRA__23__KET____DOT__queue_block;
    Vtop_queue_new* const __PVT__top__DOT__genblk1__BRA__24__KET____DOT__queue_block;
    Vtop_queue_new* const __PVT__top__DOT__genblk1__BRA__25__KET____DOT__queue_block;
    Vtop_queue_new* const __PVT__top__DOT__genblk1__BRA__26__KET____DOT__queue_block;
    Vtop_queue_new* const __PVT__top__DOT__genblk1__BRA__27__KET____DOT__queue_block;
    Vtop_queue_new* const __PVT__top__DOT__genblk1__BRA__28__KET____DOT__queue_block;
    Vtop_queue_new* const __PVT__top__DOT__genblk1__BRA__29__KET____DOT__queue_block;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vtop___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vtop(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vtop(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vtop();
  private:
    VL_UNCOPYABLE(Vtop);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    std::unique_ptr<VerilatedTraceConfig> traceConfig() const override final;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard