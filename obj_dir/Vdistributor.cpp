// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vdistributor.h"
#include "Vdistributor__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vdistributor::Vdistributor(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vdistributor__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , reset{vlSymsp->TOP.reset}
    , fin_bus{vlSymsp->TOP.fin_bus}
    , xcoord{vlSymsp->TOP.xcoord}
    , ycoord{vlSymsp->TOP.ycoord}
    , reset_engines{vlSymsp->TOP.reset_engines}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vdistributor::Vdistributor(const char* _vcname__)
    : Vdistributor(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vdistributor::~Vdistributor() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vdistributor___024root___eval_initial(Vdistributor___024root* vlSelf);
void Vdistributor___024root___eval_settle(Vdistributor___024root* vlSelf);
void Vdistributor___024root___eval(Vdistributor___024root* vlSelf);
#ifdef VL_DEBUG
void Vdistributor___024root___eval_debug_assertions(Vdistributor___024root* vlSelf);
#endif  // VL_DEBUG
void Vdistributor___024root___final(Vdistributor___024root* vlSelf);

static void _eval_initial_loop(Vdistributor__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vdistributor___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vdistributor___024root___eval_settle(&(vlSymsp->TOP));
        Vdistributor___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vdistributor::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vdistributor::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vdistributor___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vdistributor___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* Vdistributor::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vdistributor::final() {
    Vdistributor___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vdistributor::hierName() const { return vlSymsp->name(); }
const char* Vdistributor::modelName() const { return "Vdistributor"; }
unsigned Vdistributor::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vdistributor::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vdistributor___024root__trace_init_top(Vdistributor___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vdistributor___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdistributor___024root*>(voidSelf);
    Vdistributor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vdistributor___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vdistributor___024root__trace_register(Vdistributor___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vdistributor::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vdistributor___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
