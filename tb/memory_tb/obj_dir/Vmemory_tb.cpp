// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vmemory_tb__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vmemory_tb::Vmemory_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vmemory_tb__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vmemory_tb::Vmemory_tb(const char* _vcname__)
    : Vmemory_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vmemory_tb::~Vmemory_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vmemory_tb___024root___eval_debug_assertions(Vmemory_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vmemory_tb___024root___eval_static(Vmemory_tb___024root* vlSelf);
void Vmemory_tb___024root___eval_initial(Vmemory_tb___024root* vlSelf);
void Vmemory_tb___024root___eval_settle(Vmemory_tb___024root* vlSelf);
void Vmemory_tb___024root___eval(Vmemory_tb___024root* vlSelf);

void Vmemory_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vmemory_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vmemory_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vmemory_tb___024root___eval_static(&(vlSymsp->TOP));
        Vmemory_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vmemory_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vmemory_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void Vmemory_tb::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step Vmemory_tb::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool Vmemory_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vmemory_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vmemory_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vmemory_tb___024root___eval_final(Vmemory_tb___024root* vlSelf);

VL_ATTR_COLD void Vmemory_tb::final() {
    Vmemory_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vmemory_tb::hierName() const { return vlSymsp->name(); }
const char* Vmemory_tb::modelName() const { return "Vmemory_tb"; }
unsigned Vmemory_tb::threads() const { return 1; }
void Vmemory_tb::prepareClone() const { contextp()->prepareClone(); }
void Vmemory_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vmemory_tb::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vmemory_tb___024root__trace_decl_types(VerilatedVcd* tracep);

void Vmemory_tb___024root__trace_init_top(Vmemory_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vmemory_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmemory_tb___024root*>(voidSelf);
    Vmemory_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vmemory_tb___024root__trace_decl_types(tracep);
    Vmemory_tb___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vmemory_tb___024root__trace_register(Vmemory_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vmemory_tb::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vmemory_tb::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vmemory_tb___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
