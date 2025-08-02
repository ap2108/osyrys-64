// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vhazard_unit_tb__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vhazard_unit_tb::Vhazard_unit_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vhazard_unit_tb__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vhazard_unit_tb::Vhazard_unit_tb(const char* _vcname__)
    : Vhazard_unit_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vhazard_unit_tb::~Vhazard_unit_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vhazard_unit_tb___024root___eval_debug_assertions(Vhazard_unit_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vhazard_unit_tb___024root___eval_static(Vhazard_unit_tb___024root* vlSelf);
void Vhazard_unit_tb___024root___eval_initial(Vhazard_unit_tb___024root* vlSelf);
void Vhazard_unit_tb___024root___eval_settle(Vhazard_unit_tb___024root* vlSelf);
void Vhazard_unit_tb___024root___eval(Vhazard_unit_tb___024root* vlSelf);

void Vhazard_unit_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vhazard_unit_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vhazard_unit_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vhazard_unit_tb___024root___eval_static(&(vlSymsp->TOP));
        Vhazard_unit_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vhazard_unit_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vhazard_unit_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void Vhazard_unit_tb::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step Vhazard_unit_tb::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool Vhazard_unit_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vhazard_unit_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vhazard_unit_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vhazard_unit_tb___024root___eval_final(Vhazard_unit_tb___024root* vlSelf);

VL_ATTR_COLD void Vhazard_unit_tb::final() {
    Vhazard_unit_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vhazard_unit_tb::hierName() const { return vlSymsp->name(); }
const char* Vhazard_unit_tb::modelName() const { return "Vhazard_unit_tb"; }
unsigned Vhazard_unit_tb::threads() const { return 1; }
void Vhazard_unit_tb::prepareClone() const { contextp()->prepareClone(); }
void Vhazard_unit_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vhazard_unit_tb::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vhazard_unit_tb___024root__trace_decl_types(VerilatedVcd* tracep);

void Vhazard_unit_tb___024root__trace_init_top(Vhazard_unit_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vhazard_unit_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vhazard_unit_tb___024root*>(voidSelf);
    Vhazard_unit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vhazard_unit_tb___024root__trace_decl_types(tracep);
    Vhazard_unit_tb___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vhazard_unit_tb___024root__trace_register(Vhazard_unit_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vhazard_unit_tb::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vhazard_unit_tb::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vhazard_unit_tb___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
