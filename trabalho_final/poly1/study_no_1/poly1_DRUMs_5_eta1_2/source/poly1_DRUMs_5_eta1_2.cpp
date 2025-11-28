// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "poly1_DRUMs_5_eta1_2.h"
#include "poly1_DRUMs_5_eta1_2__Syms.h"

//============================================================
// Constructors

poly1_DRUMs_5_eta1_2::poly1_DRUMs_5_eta1_2(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new poly1_DRUMs_5_eta1_2__Syms(contextp(), _vcname__, this)}
    , a{vlSymsp->TOP.a}
    , b{vlSymsp->TOP.b}
    , x{vlSymsp->TOP.x}
    , y{vlSymsp->TOP.y}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

poly1_DRUMs_5_eta1_2::poly1_DRUMs_5_eta1_2(const char* _vcname__)
    : poly1_DRUMs_5_eta1_2(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

poly1_DRUMs_5_eta1_2::~poly1_DRUMs_5_eta1_2() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void sub___024root___eval_debug_assertions(sub___024root* vlSelf);
#endif  // VL_DEBUG
void sub___024root___eval_static(sub___024root* vlSelf);
void sub___024root___eval_initial(sub___024root* vlSelf);
void sub___024root___eval_settle(sub___024root* vlSelf);
void sub___024root___eval(sub___024root* vlSelf);

void poly1_DRUMs_5_eta1_2::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate poly1_DRUMs_5_eta1_2::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    sub___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        sub___024root___eval_static(&(vlSymsp->TOP));
        sub___024root___eval_initial(&(vlSymsp->TOP));
        sub___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    sub___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
}

//============================================================
// Events and timing
bool poly1_DRUMs_5_eta1_2::eventsPending() { return false; }

uint64_t poly1_DRUMs_5_eta1_2::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* poly1_DRUMs_5_eta1_2::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void sub___024root___eval_final(sub___024root* vlSelf);

VL_ATTR_COLD void poly1_DRUMs_5_eta1_2::final() {
    sub___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* poly1_DRUMs_5_eta1_2::hierName() const { return vlSymsp->name(); }
const char* poly1_DRUMs_5_eta1_2::modelName() const { return "poly1_DRUMs_5_eta1_2"; }
unsigned poly1_DRUMs_5_eta1_2::threads() const { return 1; }
