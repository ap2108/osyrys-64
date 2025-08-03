// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vreader_tb__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vreader_tb::Vreader_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vreader_tb__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vreader_tb::Vreader_tb(const char* _vcname__)
    : Vreader_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vreader_tb::~Vreader_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vreader_tb___024root___eval_debug_assertions(Vreader_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vreader_tb___024root___eval_static(Vreader_tb___024root* vlSelf);
void Vreader_tb___024root___eval_initial(Vreader_tb___024root* vlSelf);
void Vreader_tb___024root___eval_settle(Vreader_tb___024root* vlSelf);
void Vreader_tb___024root___eval(Vreader_tb___024root* vlSelf);

void Vreader_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vreader_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vreader_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vreader_tb___024root___eval_static(&(vlSymsp->TOP));
        Vreader_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vreader_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vreader_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void Vreader_tb::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step Vreader_tb::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool Vreader_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vreader_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vreader_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vreader_tb___024root___eval_final(Vreader_tb___024root* vlSelf);

VL_ATTR_COLD void Vreader_tb::final() {
    Vreader_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vreader_tb::hierName() const { return vlSymsp->name(); }
const char* Vreader_tb::modelName() const { return "Vreader_tb"; }
unsigned Vreader_tb::threads() const { return 1; }
void Vreader_tb::prepareClone() const { contextp()->prepareClone(); }
void Vreader_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vreader_tb::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vreader_tb___024root__trace_decl_types(VerilatedVcd* tracep);

void Vreader_tb___024root__trace_init_top(Vreader_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vreader_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vreader_tb___024root*>(voidSelf);
    Vreader_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vreader_tb___024root__trace_decl_types(tracep);
    Vreader_tb___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vreader_tb___024root__trace_register(Vreader_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vreader_tb::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vreader_tb::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vreader_tb___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
