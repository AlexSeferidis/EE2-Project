// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtop.h"
#include "Vtop__Syms.h"
#include "verilated_vcd_c.h"

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
    , __PVT__top__DOT__genblk1__BRA__0__KET____DOT__queue_block{vlSymsp->TOP.__PVT__top__DOT__genblk1__BRA__0__KET____DOT__queue_block}
    , __PVT__top__DOT__genblk1__BRA__1__KET____DOT__queue_block{vlSymsp->TOP.__PVT__top__DOT__genblk1__BRA__1__KET____DOT__queue_block}
    , __PVT__top__DOT__genblk1__BRA__2__KET____DOT__queue_block{vlSymsp->TOP.__PVT__top__DOT__genblk1__BRA__2__KET____DOT__queue_block}
    , __PVT__top__DOT__genblk1__BRA__3__KET____DOT__queue_block{vlSymsp->TOP.__PVT__top__DOT__genblk1__BRA__3__KET____DOT__queue_block}
    , __PVT__top__DOT__genblk1__BRA__4__KET____DOT__queue_block{vlSymsp->TOP.__PVT__top__DOT__genblk1__BRA__4__KET____DOT__queue_block}
    , __PVT__top__DOT__genblk1__BRA__5__KET____DOT__queue_block{vlSymsp->TOP.__PVT__top__DOT__genblk1__BRA__5__KET____DOT__queue_block}
    , __PVT__top__DOT__genblk1__BRA__6__KET____DOT__queue_block{vlSymsp->TOP.__PVT__top__DOT__genblk1__BRA__6__KET____DOT__queue_block}
    , __PVT__top__DOT__genblk1__BRA__7__KET____DOT__queue_block{vlSymsp->TOP.__PVT__top__DOT__genblk1__BRA__7__KET____DOT__queue_block}
    , __PVT__top__DOT__genblk1__BRA__8__KET____DOT__queue_block{vlSymsp->TOP.__PVT__top__DOT__genblk1__BRA__8__KET____DOT__queue_block}
    , __PVT__top__DOT__genblk1__BRA__9__KET____DOT__queue_block{vlSymsp->TOP.__PVT__top__DOT__genblk1__BRA__9__KET____DOT__queue_block}
    , __PVT__top__DOT__genblk1__BRA__10__KET____DOT__queue_block{vlSymsp->TOP.__PVT__top__DOT__genblk1__BRA__10__KET____DOT__queue_block}
    , __PVT__top__DOT__genblk1__BRA__11__KET____DOT__queue_block{vlSymsp->TOP.__PVT__top__DOT__genblk1__BRA__11__KET____DOT__queue_block}
    , __PVT__top__DOT__genblk1__BRA__12__KET____DOT__queue_block{vlSymsp->TOP.__PVT__top__DOT__genblk1__BRA__12__KET____DOT__queue_block}
    , __PVT__top__DOT__genblk1__BRA__13__KET____DOT__queue_block{vlSymsp->TOP.__PVT__top__DOT__genblk1__BRA__13__KET____DOT__queue_block}
    , __PVT__top__DOT__genblk1__BRA__14__KET____DOT__queue_block{vlSymsp->TOP.__PVT__top__DOT__genblk1__BRA__14__KET____DOT__queue_block}
    , __PVT__top__DOT__genblk1__BRA__15__KET____DOT__queue_block{vlSymsp->TOP.__PVT__top__DOT__genblk1__BRA__15__KET____DOT__queue_block}
    , __PVT__top__DOT__genblk1__BRA__16__KET____DOT__queue_block{vlSymsp->TOP.__PVT__top__DOT__genblk1__BRA__16__KET____DOT__queue_block}
    , __PVT__top__DOT__genblk1__BRA__17__KET____DOT__queue_block{vlSymsp->TOP.__PVT__top__DOT__genblk1__BRA__17__KET____DOT__queue_block}
    , __PVT__top__DOT__genblk1__BRA__18__KET____DOT__queue_block{vlSymsp->TOP.__PVT__top__DOT__genblk1__BRA__18__KET____DOT__queue_block}
    , __PVT__top__DOT__genblk1__BRA__19__KET____DOT__queue_block{vlSymsp->TOP.__PVT__top__DOT__genblk1__BRA__19__KET____DOT__queue_block}
    , __PVT__top__DOT__genblk1__BRA__20__KET____DOT__queue_block{vlSymsp->TOP.__PVT__top__DOT__genblk1__BRA__20__KET____DOT__queue_block}
    , __PVT__top__DOT__genblk1__BRA__21__KET____DOT__queue_block{vlSymsp->TOP.__PVT__top__DOT__genblk1__BRA__21__KET____DOT__queue_block}
    , __PVT__top__DOT__genblk1__BRA__22__KET____DOT__queue_block{vlSymsp->TOP.__PVT__top__DOT__genblk1__BRA__22__KET____DOT__queue_block}
    , __PVT__top__DOT__genblk1__BRA__23__KET____DOT__queue_block{vlSymsp->TOP.__PVT__top__DOT__genblk1__BRA__23__KET____DOT__queue_block}
    , __PVT__top__DOT__genblk1__BRA__24__KET____DOT__queue_block{vlSymsp->TOP.__PVT__top__DOT__genblk1__BRA__24__KET____DOT__queue_block}
    , __PVT__top__DOT__genblk1__BRA__25__KET____DOT__queue_block{vlSymsp->TOP.__PVT__top__DOT__genblk1__BRA__25__KET____DOT__queue_block}
    , __PVT__top__DOT__genblk1__BRA__26__KET____DOT__queue_block{vlSymsp->TOP.__PVT__top__DOT__genblk1__BRA__26__KET____DOT__queue_block}
    , __PVT__top__DOT__genblk1__BRA__27__KET____DOT__queue_block{vlSymsp->TOP.__PVT__top__DOT__genblk1__BRA__27__KET____DOT__queue_block}
    , __PVT__top__DOT__genblk1__BRA__28__KET____DOT__queue_block{vlSymsp->TOP.__PVT__top__DOT__genblk1__BRA__28__KET____DOT__queue_block}
    , __PVT__top__DOT__genblk1__BRA__29__KET____DOT__queue_block{vlSymsp->TOP.__PVT__top__DOT__genblk1__BRA__29__KET____DOT__queue_block}
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

void Vtop::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtop::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtop___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vtop___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* Vtop::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vtop::final() {
    Vtop___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtop::hierName() const { return vlSymsp->name(); }
const char* Vtop::modelName() const { return "Vtop"; }
unsigned Vtop::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vtop::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vtop___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtop::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vtop___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}