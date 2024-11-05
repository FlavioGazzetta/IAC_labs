// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vf1_des.h"
#include "Vf1_des__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vf1_des::Vf1_des(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vf1_des__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , en{vlSymsp->TOP.en}
    , data_out{vlSymsp->TOP.data_out}
    , N{vlSymsp->TOP.N}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vf1_des::Vf1_des(const char* _vcname__)
    : Vf1_des(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vf1_des::~Vf1_des() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vf1_des___024root___eval_initial(Vf1_des___024root* vlSelf);
void Vf1_des___024root___eval_settle(Vf1_des___024root* vlSelf);
void Vf1_des___024root___eval(Vf1_des___024root* vlSelf);
#ifdef VL_DEBUG
void Vf1_des___024root___eval_debug_assertions(Vf1_des___024root* vlSelf);
#endif  // VL_DEBUG
void Vf1_des___024root___final(Vf1_des___024root* vlSelf);

static void _eval_initial_loop(Vf1_des__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vf1_des___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vf1_des___024root___eval_settle(&(vlSymsp->TOP));
        Vf1_des___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vf1_des::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vf1_des::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vf1_des___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vf1_des___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* Vf1_des::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vf1_des::final() {
    Vf1_des___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vf1_des::hierName() const { return vlSymsp->name(); }
const char* Vf1_des::modelName() const { return "Vf1_des"; }
unsigned Vf1_des::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vf1_des::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vf1_des___024root__trace_init_top(Vf1_des___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vf1_des___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vf1_des___024root*>(voidSelf);
    Vf1_des__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vf1_des___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vf1_des___024root__trace_register(Vf1_des___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vf1_des::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vf1_des___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
