// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vf1_des.h for the primary calling header

#include "verilated.h"

#include "Vf1_des___024root.h"

extern const VlUnpacked<CData/*7:0*/, 256> Vf1_des__ConstPool__TABLE_hd83060c2_0;

VL_INLINE_OPT void Vf1_des___024root___sequent__TOP__0(Vf1_des___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_des__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_des___024root___sequent__TOP__0\n"); );
    // Init
    CData/*7:0*/ __Vtableidx1;
    SData/*15:0*/ __Vdly__f1_des__DOT__clocktick__DOT__count;
    // Body
    __Vdly__f1_des__DOT__clocktick__DOT__count = vlSelf->f1_des__DOT__clocktick__DOT__count;
    if (vlSelf->rst) {
        vlSelf->f1_des__DOT__f1__DOT__sreg = 0U;
        vlSelf->f1_des__DOT__f1__DOT__current_state = 0U;
        vlSelf->f1_des__DOT__tick = 0U;
        __Vdly__f1_des__DOT__clocktick__DOT__count 
            = vlSelf->N;
    } else {
        if (vlSelf->f1_des__DOT__tick) {
            vlSelf->f1_des__DOT__f1__DOT__sreg = vlSelf->f1_des__DOT__f1__DOT__next_state;
            vlSelf->f1_des__DOT__f1__DOT__current_state 
                = vlSelf->f1_des__DOT__f1__DOT__next_state;
        }
        if (vlSelf->en) {
            if ((0U == (IData)(vlSelf->f1_des__DOT__clocktick__DOT__count))) {
                vlSelf->f1_des__DOT__tick = 1U;
                __Vdly__f1_des__DOT__clocktick__DOT__count 
                    = vlSelf->N;
            } else {
                __Vdly__f1_des__DOT__clocktick__DOT__count 
                    = (0xffffU & ((IData)(vlSelf->f1_des__DOT__clocktick__DOT__count) 
                                  - (IData)(1U)));
                vlSelf->f1_des__DOT__tick = 0U;
            }
        }
    }
    vlSelf->data_out = vlSelf->f1_des__DOT__f1__DOT__sreg;
    __Vtableidx1 = vlSelf->f1_des__DOT__f1__DOT__current_state;
    vlSelf->f1_des__DOT__f1__DOT__next_state = Vf1_des__ConstPool__TABLE_hd83060c2_0
        [__Vtableidx1];
    vlSelf->f1_des__DOT__clocktick__DOT__count = __Vdly__f1_des__DOT__clocktick__DOT__count;
}

void Vf1_des___024root___eval(Vf1_des___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_des__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_des___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vf1_des___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void Vf1_des___024root___eval_debug_assertions(Vf1_des___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_des__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_des___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->en & 0xfeU))) {
        Verilated::overWidthError("en");}
}
#endif  // VL_DEBUG
