// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VTOP_H_
#define _VTOP_H_  // guard

#include "verilated_heavy.h"

//==========

class Vtop__Syms;
class Vtop_VerilatedVcd;


//----------

VL_MODULE(Vtop) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(ready,0,0);
    VL_OUT8(r,7,0);
    VL_OUT8(g,7,0);
    VL_OUT8(b,7,0);
    VL_OUT8(first,0,0);
    VL_OUT8(last_x,0,0);
    VL_OUT8(last_y,0,0);
    VL_OUT8(valid,0,0);
    VL_IN(iterations_max,31,0);
    VL_IN(zoom,31,0);
    VL_IN(x_offset,31,0);
    VL_IN(y_offset,31,0);
    VL_OUT8(full_queue[3],0,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*0:0*/ top__DOT__reset_engine;
    CData/*0:0*/ top__DOT__fin_wire;
    CData/*0:0*/ top__DOT__en_wire;
    CData/*2:0*/ top__DOT__fin_bus;
    CData/*2:0*/ top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__counter;
    CData/*2:0*/ top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__counter;
    CData/*2:0*/ top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__counter;
    IData/*23:0*/ top__DOT__colour_o_wire;
    IData/*31:0*/ top__DOT__xpixel_wire;
    IData/*31:0*/ top__DOT__ypixel_wire;
    IData/*23:0*/ top__DOT__colour_wire;
    IData/*31:0*/ top__DOT__distributor__DOT__x0;
    IData/*31:0*/ top__DOT__distributor__DOT__y0;
    IData/*31:0*/ top__DOT__combinator_block__DOT__xpixel;
    IData/*31:0*/ top__DOT__combinator_block__DOT__ypixel;
    IData/*31:0*/ top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__x0_buff;
    IData/*31:0*/ top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__y0_buff;
    IData/*31:0*/ top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__state;
    IData/*31:0*/ top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__x;
    IData/*31:0*/ top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__y;
    IData/*31:0*/ top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__unnamedblk2__DOT__i;
    IData/*31:0*/ top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__x0_buff;
    IData/*31:0*/ top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__y0_buff;
    IData/*31:0*/ top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__state;
    IData/*31:0*/ top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__x;
    IData/*31:0*/ top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__y;
    IData/*31:0*/ top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__unnamedblk2__DOT__i;
    IData/*31:0*/ top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__x0_buff;
    IData/*31:0*/ top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__y0_buff;
    IData/*31:0*/ top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__state;
    IData/*31:0*/ top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__x;
    IData/*31:0*/ top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__y;
    IData/*31:0*/ top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__unnamedblk2__DOT__i;
    QData/*63:0*/ top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__y_tmp;
    QData/*63:0*/ top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__x2;
    QData/*63:0*/ top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__y2;
    QData/*63:0*/ top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__y_tmp;
    QData/*63:0*/ top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__x2;
    QData/*63:0*/ top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__y2;
    QData/*63:0*/ top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__y_tmp;
    QData/*63:0*/ top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__x2;
    QData/*63:0*/ top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__y2;
    IData/*31:0*/ top__DOT__x[3];
    IData/*31:0*/ top__DOT__y[3];
    IData/*31:0*/ top__DOT__iterations_bus[3];
    IData/*31:0*/ top__DOT__xpixel_bus[3];
    IData/*31:0*/ top__DOT__ypixel_bus[3];
    CData/*0:0*/ top__DOT__en_bus[3];
    IData/*23:0*/ top__DOT__colour_bus[3];
    IData/*23:0*/ top__DOT__lut_rom__DOT__lut_array[50];
    IData/*23:0*/ top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[5];
    IData/*31:0*/ top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[5];
    IData/*31:0*/ top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[5];
    IData/*23:0*/ top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[5];
    IData/*31:0*/ top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[5];
    IData/*31:0*/ top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[5];
    IData/*23:0*/ top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[5];
    IData/*31:0*/ top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[5];
    IData/*31:0*/ top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[5];
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__engine__finished;
    CData/*0:0*/ top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__queue_block__full_queue;
    CData/*0:0*/ top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__engine__finished;
    CData/*0:0*/ top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__queue_block__full_queue;
    CData/*0:0*/ top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__engine__finished;
    CData/*0:0*/ top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__queue_block__full_queue;
    CData/*0:0*/ __Vclklast__TOP__clk;
    IData/*31:0*/ top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__engine__ypixel;
    IData/*31:0*/ top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__engine__xpixel;
    IData/*31:0*/ top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__engine__iterations;
    IData/*31:0*/ top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__engine__ypixel;
    IData/*31:0*/ top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__engine__xpixel;
    IData/*31:0*/ top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__engine__iterations;
    IData/*31:0*/ top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__engine__ypixel;
    IData/*31:0*/ top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__engine__xpixel;
    IData/*31:0*/ top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__engine__iterations;
    IData/*23:0*/ top__DOT__lut_rom__DOT____Vlvbound1;
    IData/*23:0*/ top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound4;
    IData/*31:0*/ top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound5;
    IData/*31:0*/ top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound6;
    IData/*23:0*/ top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound7;
    IData/*31:0*/ top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound8;
    IData/*31:0*/ top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound9;
    IData/*23:0*/ top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound4;
    IData/*31:0*/ top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound5;
    IData/*31:0*/ top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound6;
    IData/*23:0*/ top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound7;
    IData/*31:0*/ top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound8;
    IData/*31:0*/ top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound9;
    IData/*23:0*/ top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound4;
    IData/*31:0*/ top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound5;
    IData/*31:0*/ top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound6;
    IData/*23:0*/ top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound7;
    IData/*31:0*/ top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound8;
    IData/*31:0*/ top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound9;
    IData/*23:0*/ top__DOT____Vcellout__lut_rom__rgb_val[3];
    IData/*31:0*/ top__DOT____Vcellinp__lut_rom__iterations[3];
    CData/*0:0*/ __Vm_traceActivity[2];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vtop__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtop);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vtop(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vtop();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
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
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vtop__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vtop__Syms* symsp, bool first);
  private:
    static QData _change_request(Vtop__Syms* __restrict vlSymsp);
    static QData _change_request_1(Vtop__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__4(Vtop__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(Vtop__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(Vtop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Vtop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__1(Vtop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__2(Vtop__Syms* __restrict vlSymsp);
    static void _settle__TOP__3(Vtop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceChgSub0(void* userp, VerilatedVcd* tracep);
    static void traceChgTop0(void* userp, VerilatedVcd* tracep);
    static void traceCleanup(void* userp, VerilatedVcd* /*unused*/);
    static void traceFullSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceFullTop0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitTop(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    void traceRegister(VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
