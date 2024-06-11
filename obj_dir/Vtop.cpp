// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop.h"
#include "Vtop__Syms.h"

<<<<<<< HEAD
//============================================================
// Constructors

Vtop::Vtop(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtop__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , reset{vlSymsp->TOP.reset}
    , ready{vlSymsp->TOP.ready}
    , r{vlSymsp->TOP.r}
    , g{vlSymsp->TOP.g}
    , b{vlSymsp->TOP.b}
    , first{vlSymsp->TOP.first}
    , last_x{vlSymsp->TOP.last_x}
    , last_y{vlSymsp->TOP.last_y}
    , valid{vlSymsp->TOP.valid}
    , iterations_max{vlSymsp->TOP.iterations_max}
    , zoom{vlSymsp->TOP.zoom}
    , x_offset{vlSymsp->TOP.x_offset}
    , y_offset{vlSymsp->TOP.y_offset}
    , full_queue{vlSymsp->TOP.full_queue}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtop::Vtop(const char* _vcname__)
    : Vtop(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtop::~Vtop() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vtop___024root___eval_initial(Vtop___024root* vlSelf);
void Vtop___024root___eval_settle(Vtop___024root* vlSelf);
void Vtop___024root___eval(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
void Vtop___024root___final(Vtop___024root* vlSelf);

static void _eval_initial_loop(Vtop__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vtop___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vtop___024root___eval_settle(&(vlSymsp->TOP));
        Vtop___024root___eval(&(vlSymsp->TOP));
    } while (0);
}
=======
//==========
>>>>>>> 9071ddf01025cd50e54d9d98edcec68edc01fcc2

void Vtop::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtop::eval\n"); );
    Vtop__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        vlSymsp->__Vm_activity = true;
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("top.sv", 1, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vtop::_eval_initial_loop(Vtop__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("top.sv", 1, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vtop::_sequent__TOP__2(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_sequent__TOP__2\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*2:0*/ __Vdly__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__counter;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v0;
    CData/*2:0*/ __Vdlyvdim0__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v5;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v5;
    CData/*2:0*/ __Vdlyvdim0__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v5;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v5;
    CData/*2:0*/ __Vdlyvdim0__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue__v5;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue__v5;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v6;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v6;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v7;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v9;
    CData/*2:0*/ __Vdly__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__counter;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v0;
    CData/*2:0*/ __Vdlyvdim0__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v5;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v5;
    CData/*2:0*/ __Vdlyvdim0__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v5;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v5;
    CData/*2:0*/ __Vdlyvdim0__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue__v5;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue__v5;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v6;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v6;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v7;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v9;
    CData/*2:0*/ __Vdly__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__counter;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v0;
    CData/*2:0*/ __Vdlyvdim0__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v5;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v5;
    CData/*2:0*/ __Vdlyvdim0__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v5;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v5;
    CData/*2:0*/ __Vdlyvdim0__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue__v5;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue__v5;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v6;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v6;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v7;
    CData/*0:0*/ __Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v9;
    IData/*31:0*/ __Vdly__top__DOT__distributor__DOT__x0;
    IData/*31:0*/ __Vdly__top__DOT__distributor__DOT__y0;
    IData/*31:0*/ __Vdly__top__DOT__combinator_block__DOT__xpixel;
    IData/*31:0*/ __Vdly__top__DOT__combinator_block__DOT__ypixel;
    IData/*31:0*/ __Vdly__top__DOT__xpixel_wire;
    IData/*31:0*/ __Vdly__top__DOT__ypixel_wire;
    IData/*31:0*/ __Vdly__top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__state;
    IData/*31:0*/ __Vdly__top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__engine__iterations;
    IData/*31:0*/ __Vdly__top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__x;
    IData/*31:0*/ __Vdly__top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__y;
    IData/*23:0*/ __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v5;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v5;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue__v5;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v6;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue__v6;
    IData/*23:0*/ __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v6;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v7;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue__v7;
    IData/*23:0*/ __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v7;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v8;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue__v8;
    IData/*23:0*/ __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v8;
    IData/*31:0*/ __Vdly__top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__state;
    IData/*31:0*/ __Vdly__top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__engine__iterations;
    IData/*31:0*/ __Vdly__top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__x;
    IData/*31:0*/ __Vdly__top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__y;
    IData/*23:0*/ __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v5;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v5;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue__v5;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v6;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue__v6;
    IData/*23:0*/ __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v6;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v7;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue__v7;
    IData/*23:0*/ __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v7;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v8;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue__v8;
    IData/*23:0*/ __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v8;
    IData/*31:0*/ __Vdly__top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__state;
    IData/*31:0*/ __Vdly__top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__engine__iterations;
    IData/*31:0*/ __Vdly__top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__x;
    IData/*31:0*/ __Vdly__top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__y;
    IData/*23:0*/ __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v5;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v5;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue__v5;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v6;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue__v6;
    IData/*23:0*/ __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v6;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v7;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue__v7;
    IData/*23:0*/ __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v7;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v8;
    IData/*31:0*/ __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue__v8;
    IData/*23:0*/ __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v8;
    QData/*63:0*/ __Vdly__top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__y_tmp;
    QData/*63:0*/ __Vdly__top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__x2;
    QData/*63:0*/ __Vdly__top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__y2;
    QData/*63:0*/ __Vdly__top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__y_tmp;
    QData/*63:0*/ __Vdly__top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__x2;
    QData/*63:0*/ __Vdly__top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__y2;
    QData/*63:0*/ __Vdly__top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__y_tmp;
    QData/*63:0*/ __Vdly__top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__x2;
    QData/*63:0*/ __Vdly__top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__y2;
    // Body
    __Vdly__top__DOT__distributor__DOT__y0 = vlTOPp->top__DOT__distributor__DOT__y0;
    __Vdly__top__DOT__distributor__DOT__x0 = vlTOPp->top__DOT__distributor__DOT__x0;
    __Vdly__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__counter 
        = vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__counter;
    __Vdly__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__counter 
        = vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__counter;
    __Vdly__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__counter 
        = vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__counter;
    __Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue__v5 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue__v5 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue__v5 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v5 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v6 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v9 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v5 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v6 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v9 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v5 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v6 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v9 = 0U;
    __Vdly__top__DOT__ypixel_wire = vlTOPp->top__DOT__ypixel_wire;
    __Vdly__top__DOT__xpixel_wire = vlTOPp->top__DOT__xpixel_wire;
    __Vdly__top__DOT__combinator_block__DOT__ypixel 
        = vlTOPp->top__DOT__combinator_block__DOT__ypixel;
    __Vdly__top__DOT__combinator_block__DOT__xpixel 
        = vlTOPp->top__DOT__combinator_block__DOT__xpixel;
    __Vdly__top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__y2 
        = vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__y2;
    __Vdly__top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__x2 
        = vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__x2;
    __Vdly__top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__y_tmp 
        = vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__y_tmp;
    __Vdly__top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__y 
        = vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__y;
    __Vdly__top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__x 
        = vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__x;
    __Vdly__top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__y2 
        = vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__y2;
    __Vdly__top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__x2 
        = vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__x2;
    __Vdly__top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__y_tmp 
        = vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__y_tmp;
    __Vdly__top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__y 
        = vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__y;
    __Vdly__top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__x 
        = vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__x;
    __Vdly__top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__y2 
        = vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__y2;
    __Vdly__top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__x2 
        = vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__x2;
    __Vdly__top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__y_tmp 
        = vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__y_tmp;
    __Vdly__top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__y 
        = vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__y;
    __Vdly__top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__x 
        = vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__x;
    __Vdly__top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__state 
        = vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__state;
    __Vdly__top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__state 
        = vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__state;
    __Vdly__top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__state 
        = vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__state;
    __Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v5 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v0 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v6 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v7 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v5 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v0 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v6 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v7 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v5 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v0 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v6 = 0U;
    __Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v7 = 0U;
    __Vdly__top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__engine__iterations 
        = vlTOPp->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__engine__iterations;
    __Vdly__top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__engine__iterations 
        = vlTOPp->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__engine__iterations;
    __Vdly__top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__engine__iterations 
        = vlTOPp->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__engine__iterations;
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__unnamedblk1__DOT__i = 5U;
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__unnamedblk1__DOT__i = 5U;
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__unnamedblk1__DOT__i = 5U;
    }
    vlTOPp->first = 0U;
    if (vlTOPp->reset) {
        vlTOPp->first = 1U;
    }
    if (vlTOPp->reset) {
        __Vdly__top__DOT__distributor__DOT__x0 = 0U;
        __Vdly__top__DOT__distributor__DOT__y0 = 0U;
    } else {
        if (vlTOPp->top__DOT__fin_wire) {
            __Vdly__top__DOT__distributor__DOT__x0 
                = VL_MODDIV_III(32, ((IData)(3U) + vlTOPp->top__DOT__distributor__DOT__x0), (IData)(0x280U));
            __Vdly__top__DOT__distributor__DOT__y0 
                = VL_MODDIV_III(32, (vlTOPp->top__DOT__distributor__DOT__y0 
                                     + VL_DIV_III(32, 
                                                  ((IData)(3U) 
                                                   + vlTOPp->top__DOT__distributor__DOT__x0), (IData)(0x280U))), (IData)(0x1e0U));
        }
    }
    if (((IData)(vlTOPp->top__DOT__en_wire) & (IData)(vlTOPp->ready))) {
        vlTOPp->valid = 1U;
    }
    vlTOPp->last_x = 0U;
    vlTOPp->last_y = 0U;
    if (vlTOPp->reset) {
        __Vdly__top__DOT__combinator_block__DOT__xpixel = 0U;
        __Vdly__top__DOT__combinator_block__DOT__ypixel = 0U;
    }
    __Vdly__top__DOT__combinator_block__DOT__xpixel 
        = ((IData)(1U) + vlTOPp->top__DOT__combinator_block__DOT__xpixel);
    if ((0x280U <= vlTOPp->top__DOT__combinator_block__DOT__xpixel)) {
        __Vdly__top__DOT__combinator_block__DOT__ypixel 
            = ((IData)(1U) + vlTOPp->top__DOT__combinator_block__DOT__ypixel);
        vlTOPp->last_x = 1U;
        __Vdly__top__DOT__combinator_block__DOT__xpixel = 0U;
    }
    if ((0x1e0U <= vlTOPp->top__DOT__combinator_block__DOT__ypixel)) {
        vlTOPp->last_y = 1U;
        __Vdly__top__DOT__combinator_block__DOT__xpixel = 0U;
        __Vdly__top__DOT__combinator_block__DOT__ypixel = 0U;
    }
    if (((IData)(vlTOPp->top__DOT__en_wire) & (IData)(vlTOPp->ready))) {
        __Vdly__top__DOT__xpixel_wire = vlTOPp->top__DOT__combinator_block__DOT__xpixel;
        __Vdly__top__DOT__ypixel_wire = vlTOPp->top__DOT__combinator_block__DOT__ypixel;
    }
    if (((IData)(vlTOPp->top__DOT__en_wire) & (IData)(vlTOPp->ready))) {
        vlTOPp->top__DOT__colour_o_wire = vlTOPp->top__DOT__colour_wire;
    }
    if (vlTOPp->top__DOT__reset_engine) {
        __Vdly__top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__state = 2U;
        vlTOPp->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__engine__finished = 0U;
        __Vdly__top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__engine__iterations = 0U;
        __Vdly__top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__x = 0U;
        __Vdly__top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__y = 0U;
        __Vdly__top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__y_tmp = 0ULL;
        __Vdly__top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__x2 = 0ULL;
        __Vdly__top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__y2 = 0ULL;
    } else {
        if ((2U == vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__state)) {
            vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__x0_buff 
                = vlTOPp->top__DOT__x[2U];
            vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__y0_buff 
                = vlTOPp->top__DOT__y[2U];
            __Vdly__top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__state = 0U;
        } else {
            if ((0U == vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__state)) {
                __Vdly__top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__x 
                    = (((IData)((vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__x2 
                                 >> 0x18U)) - (IData)(
                                                      (vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__y2 
                                                       >> 0x18U))) 
                       + (VL_RTOIROUND_I_D(32, ((1.67772160000000000e+07 
                                                 * 
                                                 (-320.0 
                                                  + 
                                                  VL_ITOR_D_I(vlTOPp->x_offset))) 
                                                / VL_ITOR_D_I(
                                                              VL_MULS_III(32,32,32, (IData)(0x64U), vlTOPp->zoom)))) 
                          + VL_MULS_III(32,32,32, VL_DIVS_III(32, (IData)(0x1000000U), 
                                                              VL_MULS_III(32,32,32, (IData)(0x64U), vlTOPp->zoom)), 
                                        vlTOPp->top__DOT__x
                                        [2U])));
                if (((vlTOPp->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__engine__iterations 
                      >= vlTOPp->iterations_max) | 
                     (0x4000000U <= ((IData)((vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__x2 
                                              >> 0x18U)) 
                                     + (IData)((vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__y2 
                                                >> 0x18U)))))) {
                    __Vdly__top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__state = 1U;
                } else {
                    __Vdly__top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__engine__iterations 
                        = ((IData)(1U) + vlTOPp->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__engine__iterations);
                    __Vdly__top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__state = 0U;
                }
                __Vdly__top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__x2 
                    = VL_MULS_QQQ(64,64,64, VL_EXTENDS_QI(64,32, vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__x), 
                                  VL_EXTENDS_QI(64,32, vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__x));
                __Vdly__top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__y2 
                    = VL_MULS_QQQ(64,64,64, VL_EXTENDS_QI(64,32, vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__y), 
                                  VL_EXTENDS_QI(64,32, vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__y));
                __Vdly__top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__y 
                    = ((IData)((vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__y_tmp 
                                >> 0x18U)) + (VL_RTOIROUND_I_D(32, 
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
                                                            [2U])));
                __Vdly__top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__y_tmp 
                    = ((1ULL & __Vdly__top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__y_tmp) 
                       | (0xfffffffffffffffeULL & (
                                                   VL_MULS_QQQ(63,63,63, 
                                                               (0x7fffffffffffffffULL 
                                                                & VL_EXTENDS_QI(63,32, vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__x)), 
                                                               (0x7fffffffffffffffULL 
                                                                & VL_EXTENDS_QI(63,32, vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__y))) 
                                                   << 1U)));
            } else {
                if ((1U == vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__state)) {
                    vlTOPp->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__engine__finished = 1U;
                    vlTOPp->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__engine__xpixel 
                        = vlTOPp->top__DOT__x[2U];
                    vlTOPp->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__engine__ypixel 
                        = vlTOPp->top__DOT__y[2U];
                }
            }
        }
    }
    if (vlTOPp->top__DOT__reset_engine) {
        __Vdly__top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__state = 2U;
        vlTOPp->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__engine__finished = 0U;
        __Vdly__top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__engine__iterations = 0U;
        __Vdly__top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__x = 0U;
        __Vdly__top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__y = 0U;
        __Vdly__top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__y_tmp = 0ULL;
        __Vdly__top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__x2 = 0ULL;
        __Vdly__top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__y2 = 0ULL;
    } else {
        if ((2U == vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__state)) {
            vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__x0_buff 
                = vlTOPp->top__DOT__x[1U];
            vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__y0_buff 
                = vlTOPp->top__DOT__y[1U];
            __Vdly__top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__state = 0U;
        } else {
            if ((0U == vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__state)) {
                __Vdly__top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__x 
                    = (((IData)((vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__x2 
                                 >> 0x18U)) - (IData)(
                                                      (vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__y2 
                                                       >> 0x18U))) 
                       + (VL_RTOIROUND_I_D(32, ((1.67772160000000000e+07 
                                                 * 
                                                 (-320.0 
                                                  + 
                                                  VL_ITOR_D_I(vlTOPp->x_offset))) 
                                                / VL_ITOR_D_I(
                                                              VL_MULS_III(32,32,32, (IData)(0x64U), vlTOPp->zoom)))) 
                          + VL_MULS_III(32,32,32, VL_DIVS_III(32, (IData)(0x1000000U), 
                                                              VL_MULS_III(32,32,32, (IData)(0x64U), vlTOPp->zoom)), 
                                        vlTOPp->top__DOT__x
                                        [1U])));
                if (((vlTOPp->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__engine__iterations 
                      >= vlTOPp->iterations_max) | 
                     (0x4000000U <= ((IData)((vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__x2 
                                              >> 0x18U)) 
                                     + (IData)((vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__y2 
                                                >> 0x18U)))))) {
                    __Vdly__top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__state = 1U;
                } else {
                    __Vdly__top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__engine__iterations 
                        = ((IData)(1U) + vlTOPp->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__engine__iterations);
                    __Vdly__top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__state = 0U;
                }
                __Vdly__top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__x2 
                    = VL_MULS_QQQ(64,64,64, VL_EXTENDS_QI(64,32, vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__x), 
                                  VL_EXTENDS_QI(64,32, vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__x));
                __Vdly__top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__y2 
                    = VL_MULS_QQQ(64,64,64, VL_EXTENDS_QI(64,32, vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__y), 
                                  VL_EXTENDS_QI(64,32, vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__y));
                __Vdly__top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__y 
                    = ((IData)((vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__y_tmp 
                                >> 0x18U)) + (VL_RTOIROUND_I_D(32, 
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
                                                            [1U])));
                __Vdly__top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__y_tmp 
                    = ((1ULL & __Vdly__top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__y_tmp) 
                       | (0xfffffffffffffffeULL & (
                                                   VL_MULS_QQQ(63,63,63, 
                                                               (0x7fffffffffffffffULL 
                                                                & VL_EXTENDS_QI(63,32, vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__x)), 
                                                               (0x7fffffffffffffffULL 
                                                                & VL_EXTENDS_QI(63,32, vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__y))) 
                                                   << 1U)));
            } else {
                if ((1U == vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__state)) {
                    vlTOPp->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__engine__finished = 1U;
                    vlTOPp->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__engine__xpixel 
                        = vlTOPp->top__DOT__x[1U];
                    vlTOPp->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__engine__ypixel 
                        = vlTOPp->top__DOT__y[1U];
                }
            }
        }
    }
    if (vlTOPp->top__DOT__reset_engine) {
        __Vdly__top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__state = 2U;
        vlTOPp->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__engine__finished = 0U;
        __Vdly__top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__engine__iterations = 0U;
        __Vdly__top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__x = 0U;
        __Vdly__top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__y = 0U;
        __Vdly__top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__y_tmp = 0ULL;
        __Vdly__top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__x2 = 0ULL;
        __Vdly__top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__y2 = 0ULL;
    } else {
        if ((2U == vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__state)) {
            vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__x0_buff 
                = vlTOPp->top__DOT__x[0U];
            vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__y0_buff 
                = vlTOPp->top__DOT__y[0U];
            __Vdly__top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__state = 0U;
        } else {
            if ((0U == vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__state)) {
                __Vdly__top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__x 
                    = (((IData)((vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__x2 
                                 >> 0x18U)) - (IData)(
                                                      (vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__y2 
                                                       >> 0x18U))) 
                       + (VL_RTOIROUND_I_D(32, ((1.67772160000000000e+07 
                                                 * 
                                                 (-320.0 
                                                  + 
                                                  VL_ITOR_D_I(vlTOPp->x_offset))) 
                                                / VL_ITOR_D_I(
                                                              VL_MULS_III(32,32,32, (IData)(0x64U), vlTOPp->zoom)))) 
                          + VL_MULS_III(32,32,32, VL_DIVS_III(32, (IData)(0x1000000U), 
                                                              VL_MULS_III(32,32,32, (IData)(0x64U), vlTOPp->zoom)), 
                                        vlTOPp->top__DOT__x
                                        [0U])));
                if (((vlTOPp->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__engine__iterations 
                      >= vlTOPp->iterations_max) | 
                     (0x4000000U <= ((IData)((vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__x2 
                                              >> 0x18U)) 
                                     + (IData)((vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__y2 
                                                >> 0x18U)))))) {
                    __Vdly__top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__state = 1U;
                } else {
                    __Vdly__top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__engine__iterations 
                        = ((IData)(1U) + vlTOPp->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__engine__iterations);
                    __Vdly__top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__state = 0U;
                }
                __Vdly__top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__x2 
                    = VL_MULS_QQQ(64,64,64, VL_EXTENDS_QI(64,32, vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__x), 
                                  VL_EXTENDS_QI(64,32, vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__x));
                __Vdly__top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__y2 
                    = VL_MULS_QQQ(64,64,64, VL_EXTENDS_QI(64,32, vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__y), 
                                  VL_EXTENDS_QI(64,32, vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__y));
                __Vdly__top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__y 
                    = ((IData)((vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__y_tmp 
                                >> 0x18U)) + (VL_RTOIROUND_I_D(32, 
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
                                                            [0U])));
                __Vdly__top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__y_tmp 
                    = ((1ULL & __Vdly__top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__y_tmp) 
                       | (0xfffffffffffffffeULL & (
                                                   VL_MULS_QQQ(63,63,63, 
                                                               (0x7fffffffffffffffULL 
                                                                & VL_EXTENDS_QI(63,32, vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__x)), 
                                                               (0x7fffffffffffffffULL 
                                                                & VL_EXTENDS_QI(63,32, vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__y))) 
                                                   << 1U)));
            } else {
                if ((1U == vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__state)) {
                    vlTOPp->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__engine__finished = 1U;
                    vlTOPp->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__engine__xpixel 
                        = vlTOPp->top__DOT__x[0U];
                    vlTOPp->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__engine__ypixel 
                        = vlTOPp->top__DOT__y[0U];
                }
            }
        }
    }
    vlTOPp->top__DOT__distributor__DOT__y0 = __Vdly__top__DOT__distributor__DOT__y0;
    vlTOPp->top__DOT__distributor__DOT__x0 = __Vdly__top__DOT__distributor__DOT__x0;
    vlTOPp->top__DOT__combinator_block__DOT__xpixel 
        = __Vdly__top__DOT__combinator_block__DOT__xpixel;
    vlTOPp->top__DOT__combinator_block__DOT__ypixel 
        = __Vdly__top__DOT__combinator_block__DOT__ypixel;
    vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__x 
        = __Vdly__top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__x;
    vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__y 
        = __Vdly__top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__y;
    vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__y_tmp 
        = __Vdly__top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__y_tmp;
    vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__x2 
        = __Vdly__top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__x2;
    vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__y2 
        = __Vdly__top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__y2;
    vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__state 
        = __Vdly__top__DOT__genblk1__BRA__2__KET____DOT__engine__DOT__state;
    vlTOPp->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__engine__iterations 
        = __Vdly__top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__engine__iterations;
    vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__x 
        = __Vdly__top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__x;
    vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__y 
        = __Vdly__top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__y;
    vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__y_tmp 
        = __Vdly__top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__y_tmp;
    vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__x2 
        = __Vdly__top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__x2;
    vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__y2 
        = __Vdly__top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__y2;
    vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__state 
        = __Vdly__top__DOT__genblk1__BRA__1__KET____DOT__engine__DOT__state;
    vlTOPp->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__engine__iterations 
        = __Vdly__top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__engine__iterations;
    vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__x 
        = __Vdly__top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__x;
    vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__y 
        = __Vdly__top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__y;
    vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__y_tmp 
        = __Vdly__top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__y_tmp;
    vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__x2 
        = __Vdly__top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__x2;
    vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__y2 
        = __Vdly__top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__y2;
    vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__state 
        = __Vdly__top__DOT__genblk1__BRA__0__KET____DOT__engine__DOT__state;
    vlTOPp->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__engine__iterations 
        = __Vdly__top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__engine__iterations;
    vlTOPp->top__DOT__y[0U] = vlTOPp->top__DOT__distributor__DOT__y0;
    vlTOPp->top__DOT__x[2U] = VL_MODDIV_III(32, ((IData)(2U) 
                                                 + vlTOPp->top__DOT__distributor__DOT__x0), (IData)(0x280U));
    vlTOPp->top__DOT__x[1U] = VL_MODDIV_III(32, ((IData)(1U) 
                                                 + vlTOPp->top__DOT__distributor__DOT__x0), (IData)(0x280U));
    vlTOPp->top__DOT__x[0U] = vlTOPp->top__DOT__distributor__DOT__x0;
    vlTOPp->top__DOT__y[2U] = VL_MODDIV_III(32, (vlTOPp->top__DOT__distributor__DOT__y0 
                                                 + 
                                                 VL_DIV_III(32, 
                                                            ((IData)(2U) 
                                                             + vlTOPp->top__DOT__distributor__DOT__x0), (IData)(0x280U))), (IData)(0x1e0U));
    vlTOPp->top__DOT__y[1U] = VL_MODDIV_III(32, (vlTOPp->top__DOT__distributor__DOT__y0 
                                                 + 
                                                 VL_DIV_III(32, 
                                                            ((IData)(1U) 
                                                             + vlTOPp->top__DOT__distributor__DOT__x0), (IData)(0x280U))), (IData)(0x1e0U));
    vlTOPp->r = (0xffU & vlTOPp->top__DOT__colour_o_wire);
    vlTOPp->g = (0xffU & (vlTOPp->top__DOT__colour_o_wire 
                          >> 8U));
    vlTOPp->b = (0xffU & (vlTOPp->top__DOT__colour_o_wire 
                          >> 0x10U));
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__en_wire = 0U;
        __Vdly__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__counter = 0U;
        __Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v0 = 1U;
    } else {
        vlTOPp->top__DOT__en_wire = 1U;
        if ((1U & (IData)(vlTOPp->top__DOT__fin_bus))) {
            vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound4 
                = vlTOPp->top__DOT__colour_bus[0U];
            if ((4U >= (IData)(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__counter))) {
                __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v5 
                    = vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound4;
                __Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v5 = 1U;
                __Vdlyvdim0__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v5 
                    = vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__counter;
            }
            vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound5 
                = vlTOPp->top__DOT__xpixel_bus[0U];
            if ((4U >= (IData)(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__counter))) {
                __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v5 
                    = vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound5;
                __Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v5 = 1U;
                __Vdlyvdim0__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v5 
                    = vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__counter;
            }
            vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound6 
                = vlTOPp->top__DOT__ypixel_bus[0U];
            if ((4U >= (IData)(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__counter))) {
                __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue__v5 
                    = vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound6;
                __Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue__v5 = 1U;
                __Vdlyvdim0__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue__v5 
                    = vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__counter;
            }
            __Vdly__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__counter 
                = (7U & ((IData)(1U) + (IData)(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__counter)));
        }
        vlTOPp->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__queue_block__full_queue 
            = (4U == (IData)(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__counter));
        if ((((vlTOPp->top__DOT__xpixel_wire == vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue
               [0U]) & (vlTOPp->top__DOT__ypixel_wire 
                        == vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue
                        [0U])) & (0U < (IData)(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__counter)))) {
            __Vdly__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__counter 
                = (7U & ((IData)(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__counter) 
                         - (IData)(1U)));
            vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound8 
                = vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue
                [1U];
            vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound9 
                = vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue
                [1U];
            vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__unnamedblk2__DOT__i = 3U;
            vlTOPp->top__DOT__en_wire = 1U;
            vlTOPp->top__DOT__colour_wire = vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue
                [0U];
            vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound7 
                = vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue
                [1U];
            __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v6 
                = vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound8;
            __Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v6 = 1U;
            __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue__v6 
                = vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound9;
            vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound8 
                = vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue
                [2U];
            vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound9 
                = vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue
                [2U];
            __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v6 
                = vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound7;
            __Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v6 = 1U;
            __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v7 
                = vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound8;
            __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue__v7 
                = vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound9;
            vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound7 
                = vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue
                [2U];
            vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound8 
                = vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue
                [3U];
            vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound9 
                = vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue
                [3U];
            __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v7 
                = vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound7;
            __Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v7 = 1U;
            __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v8 
                = vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound8;
            __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue__v8 
                = vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound9;
            vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound7 
                = vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue
                [3U];
            __Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v9 = 1U;
            __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v8 
                = vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT____Vlvbound7;
        }
        if ((0U == (IData)(vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__counter))) {
            vlTOPp->top__DOT__en_wire = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__en_wire = 0U;
        __Vdly__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__counter = 0U;
        __Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v0 = 1U;
    } else {
        vlTOPp->top__DOT__en_wire = 1U;
        if ((2U & (IData)(vlTOPp->top__DOT__fin_bus))) {
            vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound4 
                = vlTOPp->top__DOT__colour_bus[1U];
            if ((4U >= (IData)(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__counter))) {
                __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v5 
                    = vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound4;
                __Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v5 = 1U;
                __Vdlyvdim0__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v5 
                    = vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__counter;
            }
            vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound5 
                = vlTOPp->top__DOT__xpixel_bus[1U];
            if ((4U >= (IData)(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__counter))) {
                __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v5 
                    = vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound5;
                __Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v5 = 1U;
                __Vdlyvdim0__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v5 
                    = vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__counter;
            }
            vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound6 
                = vlTOPp->top__DOT__ypixel_bus[1U];
            if ((4U >= (IData)(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__counter))) {
                __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue__v5 
                    = vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound6;
                __Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue__v5 = 1U;
                __Vdlyvdim0__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue__v5 
                    = vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__counter;
            }
            __Vdly__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__counter 
                = (7U & ((IData)(1U) + (IData)(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__counter)));
        }
        vlTOPp->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__queue_block__full_queue 
            = (4U == (IData)(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__counter));
        if ((((vlTOPp->top__DOT__xpixel_wire == vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue
               [0U]) & (vlTOPp->top__DOT__ypixel_wire 
                        == vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue
                        [0U])) & (0U < (IData)(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__counter)))) {
            __Vdly__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__counter 
                = (7U & ((IData)(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__counter) 
                         - (IData)(1U)));
            vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound8 
                = vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue
                [1U];
            vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound9 
                = vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue
                [1U];
            vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__unnamedblk2__DOT__i = 3U;
            vlTOPp->top__DOT__en_wire = 1U;
            vlTOPp->top__DOT__colour_wire = vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue
                [0U];
            vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound7 
                = vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue
                [1U];
            __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v6 
                = vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound8;
            __Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v6 = 1U;
            __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue__v6 
                = vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound9;
            vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound8 
                = vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue
                [2U];
            vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound9 
                = vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue
                [2U];
            __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v6 
                = vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound7;
            __Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v6 = 1U;
            __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v7 
                = vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound8;
            __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue__v7 
                = vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound9;
            vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound7 
                = vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue
                [2U];
            vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound8 
                = vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue
                [3U];
            vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound9 
                = vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue
                [3U];
            __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v7 
                = vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound7;
            __Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v7 = 1U;
            __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v8 
                = vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound8;
            __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue__v8 
                = vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound9;
            vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound7 
                = vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue
                [3U];
            __Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v9 = 1U;
            __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v8 
                = vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT____Vlvbound7;
        }
        if ((0U == (IData)(vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__counter))) {
            vlTOPp->top__DOT__en_wire = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__en_wire = 0U;
        __Vdly__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__counter = 0U;
        __Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v0 = 1U;
    } else {
        vlTOPp->top__DOT__en_wire = 1U;
        if ((4U & (IData)(vlTOPp->top__DOT__fin_bus))) {
            vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound4 
                = vlTOPp->top__DOT__colour_bus[2U];
            if ((4U >= (IData)(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__counter))) {
                __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v5 
                    = vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound4;
                __Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v5 = 1U;
                __Vdlyvdim0__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v5 
                    = vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__counter;
            }
            vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound5 
                = vlTOPp->top__DOT__xpixel_bus[2U];
            if ((4U >= (IData)(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__counter))) {
                __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v5 
                    = vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound5;
                __Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v5 = 1U;
                __Vdlyvdim0__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v5 
                    = vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__counter;
            }
            vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound6 
                = vlTOPp->top__DOT__ypixel_bus[2U];
            if ((4U >= (IData)(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__counter))) {
                __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue__v5 
                    = vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound6;
                __Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue__v5 = 1U;
                __Vdlyvdim0__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue__v5 
                    = vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__counter;
            }
            __Vdly__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__counter 
                = (7U & ((IData)(1U) + (IData)(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__counter)));
        }
        vlTOPp->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__queue_block__full_queue 
            = (4U == (IData)(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__counter));
        if ((((vlTOPp->top__DOT__xpixel_wire == vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue
               [0U]) & (vlTOPp->top__DOT__ypixel_wire 
                        == vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue
                        [0U])) & (0U < (IData)(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__counter)))) {
            __Vdly__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__counter 
                = (7U & ((IData)(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__counter) 
                         - (IData)(1U)));
            vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound8 
                = vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue
                [1U];
            vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound9 
                = vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue
                [1U];
            vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__unnamedblk2__DOT__i = 3U;
            vlTOPp->top__DOT__en_wire = 1U;
            vlTOPp->top__DOT__colour_wire = vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue
                [0U];
            vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound7 
                = vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue
                [1U];
            __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v6 
                = vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound8;
            __Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v6 = 1U;
            __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue__v6 
                = vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound9;
            vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound8 
                = vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue
                [2U];
            vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound9 
                = vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue
                [2U];
            __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v6 
                = vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound7;
            __Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v6 = 1U;
            __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v7 
                = vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound8;
            __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue__v7 
                = vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound9;
            vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound7 
                = vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue
                [2U];
            vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound8 
                = vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue
                [3U];
            vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound9 
                = vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue
                [3U];
            __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v7 
                = vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound7;
            __Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v7 = 1U;
            __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v8 
                = vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound8;
            __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue__v8 
                = vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound9;
            vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound7 
                = vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue
                [3U];
            __Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v9 = 1U;
            __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v8 
                = vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT____Vlvbound7;
        }
        if ((0U == (IData)(vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__counter))) {
            vlTOPp->top__DOT__en_wire = 0U;
        }
    }
    vlTOPp->top__DOT__iterations_bus[2U] = vlTOPp->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__engine__iterations;
    vlTOPp->top__DOT__iterations_bus[1U] = vlTOPp->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__engine__iterations;
    vlTOPp->top__DOT__iterations_bus[0U] = vlTOPp->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__engine__iterations;
    vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__counter 
        = __Vdly__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__counter;
    if (__Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v0) {
        vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[0U] = 0U;
        vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[1U] = 0U;
        vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[2U] = 0U;
        vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[3U] = 0U;
        vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[4U] = 0U;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v5) {
        vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[__Vdlyvdim0__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v5] 
            = __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v5;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v6) {
        vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[0U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v6;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v7) {
        vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[1U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v7;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v9) {
        vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue[2U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v8;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v0) {
        vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[0U] = 0xffffffffU;
        vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[1U] = 0xffffffffU;
        vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[2U] = 0xffffffffU;
        vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[3U] = 0xffffffffU;
        vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[4U] = 0xffffffffU;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue__v5) {
        vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[__Vdlyvdim0__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue__v5] 
            = __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue__v5;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v6) {
        vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[0U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue__v6;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v6) {
        vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[1U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue__v7;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v7) {
        vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[2U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue__v8;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v9) {
        vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__yqueue[4U] = 0xffffffffU;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v0) {
        vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[0U] = 0xffffffffU;
        vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[1U] = 0xffffffffU;
        vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[2U] = 0xffffffffU;
        vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[3U] = 0xffffffffU;
        vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[4U] = 0xffffffffU;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v5) {
        vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[__Vdlyvdim0__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v5] 
            = __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v5;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v6) {
        vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[0U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v6;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v6) {
        vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[1U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v7;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__colour_queue__v7) {
        vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[2U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v8;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue__v9) {
        vlTOPp->top__DOT__genblk1__BRA__0__KET____DOT__queue_block__DOT__xqueue[4U] = 0xffffffffU;
    }
    vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__counter 
        = __Vdly__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__counter;
    if (__Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v0) {
        vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[0U] = 0U;
        vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[1U] = 0U;
        vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[2U] = 0U;
        vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[3U] = 0U;
        vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[4U] = 0U;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v5) {
        vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[__Vdlyvdim0__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v5] 
            = __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v5;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v6) {
        vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[0U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v6;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v7) {
        vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[1U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v7;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v9) {
        vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue[2U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v8;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v0) {
        vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[0U] = 0xffffffffU;
        vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[1U] = 0xffffffffU;
        vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[2U] = 0xffffffffU;
        vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[3U] = 0xffffffffU;
        vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[4U] = 0xffffffffU;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue__v5) {
        vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[__Vdlyvdim0__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue__v5] 
            = __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue__v5;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v6) {
        vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[0U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue__v6;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v6) {
        vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[1U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue__v7;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v7) {
        vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[2U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue__v8;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v9) {
        vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__yqueue[4U] = 0xffffffffU;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v0) {
        vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[0U] = 0xffffffffU;
        vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[1U] = 0xffffffffU;
        vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[2U] = 0xffffffffU;
        vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[3U] = 0xffffffffU;
        vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[4U] = 0xffffffffU;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v5) {
        vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[__Vdlyvdim0__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v5] 
            = __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v5;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v6) {
        vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[0U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v6;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v6) {
        vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[1U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v7;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__colour_queue__v7) {
        vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[2U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v8;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue__v9) {
        vlTOPp->top__DOT__genblk1__BRA__1__KET____DOT__queue_block__DOT__xqueue[4U] = 0xffffffffU;
    }
    vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__counter 
        = __Vdly__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__counter;
    vlTOPp->top__DOT__xpixel_wire = __Vdly__top__DOT__xpixel_wire;
    vlTOPp->top__DOT__ypixel_wire = __Vdly__top__DOT__ypixel_wire;
    if (__Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v0) {
        vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[0U] = 0U;
        vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[1U] = 0U;
        vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[2U] = 0U;
        vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[3U] = 0U;
        vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[4U] = 0U;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v5) {
        vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[__Vdlyvdim0__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v5] 
            = __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v5;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v6) {
        vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[0U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v6;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v7) {
        vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[1U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v7;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v9) {
        vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue[2U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v8;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v0) {
        vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[0U] = 0xffffffffU;
        vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[1U] = 0xffffffffU;
        vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[2U] = 0xffffffffU;
        vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[3U] = 0xffffffffU;
        vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[4U] = 0xffffffffU;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue__v5) {
        vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[__Vdlyvdim0__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue__v5] 
            = __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue__v5;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v6) {
        vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[0U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue__v6;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v6) {
        vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[1U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue__v7;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v7) {
        vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[2U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue__v8;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v9) {
        vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__yqueue[4U] = 0xffffffffU;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v0) {
        vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[0U] = 0xffffffffU;
        vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[1U] = 0xffffffffU;
        vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[2U] = 0xffffffffU;
        vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[3U] = 0xffffffffU;
        vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[4U] = 0xffffffffU;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v5) {
        vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[__Vdlyvdim0__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v5] 
            = __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v5;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v6) {
        vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[0U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v6;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v6) {
        vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[1U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v7;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__colour_queue__v7) {
        vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[2U] 
            = __Vdlyvval__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v8;
    }
    if (__Vdlyvset__top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue__v9) {
        vlTOPp->top__DOT__genblk1__BRA__2__KET____DOT__queue_block__DOT__xqueue[4U] = 0xffffffffU;
    }
    vlTOPp->top__DOT__xpixel_bus[0U] = vlTOPp->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__engine__xpixel;
    vlTOPp->top__DOT__xpixel_bus[1U] = vlTOPp->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__engine__xpixel;
    vlTOPp->top__DOT__xpixel_bus[2U] = vlTOPp->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__engine__xpixel;
    vlTOPp->top__DOT__ypixel_bus[0U] = vlTOPp->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__engine__ypixel;
    vlTOPp->top__DOT__ypixel_bus[1U] = vlTOPp->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__engine__ypixel;
    vlTOPp->top__DOT__ypixel_bus[2U] = vlTOPp->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__engine__ypixel;
    vlTOPp->top__DOT__fin_bus = ((6U & (IData)(vlTOPp->top__DOT__fin_bus)) 
                                 | (IData)(vlTOPp->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__engine__finished));
    vlTOPp->top__DOT__fin_bus = ((5U & (IData)(vlTOPp->top__DOT__fin_bus)) 
                                 | ((IData)(vlTOPp->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__engine__finished) 
                                    << 1U));
    vlTOPp->top__DOT__fin_bus = ((3U & (IData)(vlTOPp->top__DOT__fin_bus)) 
                                 | ((IData)(vlTOPp->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__engine__finished) 
                                    << 2U));
    vlTOPp->top__DOT____Vcellinp__lut_rom__iterations[2U] 
        = vlTOPp->top__DOT__iterations_bus[2U];
    vlTOPp->top__DOT____Vcellinp__lut_rom__iterations[1U] 
        = vlTOPp->top__DOT__iterations_bus[1U];
    vlTOPp->top__DOT____Vcellinp__lut_rom__iterations[0U] 
        = vlTOPp->top__DOT__iterations_bus[0U];
    vlTOPp->full_queue[0U] = vlTOPp->top__DOT____Vcellout__genblk1__BRA__0__KET____DOT__queue_block__full_queue;
    vlTOPp->full_queue[1U] = vlTOPp->top__DOT____Vcellout__genblk1__BRA__1__KET____DOT__queue_block__full_queue;
    vlTOPp->full_queue[2U] = vlTOPp->top__DOT____Vcellout__genblk1__BRA__2__KET____DOT__queue_block__full_queue;
    vlTOPp->top__DOT__lut_rom__DOT____Vlvbound1 = (
                                                   (0x31U 
                                                    >= 
                                                    (0x3fU 
                                                     & vlTOPp->top__DOT____Vcellinp__lut_rom__iterations
                                                     [0U]))
                                                    ? 
                                                   vlTOPp->top__DOT__lut_rom__DOT__lut_array
                                                   [
                                                   (0x3fU 
                                                    & vlTOPp->top__DOT____Vcellinp__lut_rom__iterations
                                                    [0U])]
                                                    : 0U);
    vlTOPp->top__DOT____Vcellout__lut_rom__rgb_val[0U] 
        = vlTOPp->top__DOT__lut_rom__DOT____Vlvbound1;
    vlTOPp->top__DOT__lut_rom__DOT____Vlvbound1 = (
                                                   (0x31U 
                                                    >= 
                                                    (0x3fU 
                                                     & vlTOPp->top__DOT____Vcellinp__lut_rom__iterations
                                                     [1U]))
                                                    ? 
                                                   vlTOPp->top__DOT__lut_rom__DOT__lut_array
                                                   [
                                                   (0x3fU 
                                                    & vlTOPp->top__DOT____Vcellinp__lut_rom__iterations
                                                    [1U])]
                                                    : 0U);
    vlTOPp->top__DOT____Vcellout__lut_rom__rgb_val[1U] 
        = vlTOPp->top__DOT__lut_rom__DOT____Vlvbound1;
    vlTOPp->top__DOT__lut_rom__DOT____Vlvbound1 = (
                                                   (0x31U 
                                                    >= 
                                                    (0x3fU 
                                                     & vlTOPp->top__DOT____Vcellinp__lut_rom__iterations
                                                     [2U]))
                                                    ? 
                                                   vlTOPp->top__DOT__lut_rom__DOT__lut_array
                                                   [
                                                   (0x3fU 
                                                    & vlTOPp->top__DOT____Vcellinp__lut_rom__iterations
                                                    [2U])]
                                                    : 0U);
    vlTOPp->top__DOT____Vcellout__lut_rom__rgb_val[2U] 
        = vlTOPp->top__DOT__lut_rom__DOT____Vlvbound1;
    vlTOPp->top__DOT__colour_bus[2U] = vlTOPp->top__DOT____Vcellout__lut_rom__rgb_val
        [2U];
    vlTOPp->top__DOT__colour_bus[1U] = vlTOPp->top__DOT____Vcellout__lut_rom__rgb_val
        [1U];
    vlTOPp->top__DOT__colour_bus[0U] = vlTOPp->top__DOT____Vcellout__lut_rom__rgb_val
        [0U];
}

VL_INLINE_OPT void Vtop::_combo__TOP__4(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_combo__TOP__4\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->top__DOT__fin_wire = ((7U == (IData)(vlTOPp->top__DOT__fin_bus)) 
                                  | (IData)(vlTOPp->reset));
    vlTOPp->top__DOT__reset_engine = ((7U == (IData)(vlTOPp->top__DOT__fin_bus)) 
                                      | (IData)(vlTOPp->reset));
}

void Vtop::_eval(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__2(vlSymsp);
        vlTOPp->__Vm_traceActivity[1U] = 1U;
    }
    vlTOPp->_combo__TOP__4(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

VL_INLINE_OPT QData Vtop::_change_request(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_change_request\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Vtop::_change_request_1(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_change_request_1\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vtop::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((ready & 0xfeU))) {
        Verilated::overWidthError("ready");}
}
#endif  // VL_DEBUG
