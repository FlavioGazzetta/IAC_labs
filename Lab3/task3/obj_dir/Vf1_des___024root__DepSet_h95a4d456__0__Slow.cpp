// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vf1_des.h for the primary calling header

#include "verilated.h"

#include "Vf1_des___024root.h"

extern const VlUnpacked<CData/*7:0*/, 256> Vf1_des__ConstPool__TABLE_hd83060c2_0;

VL_ATTR_COLD void Vf1_des___024root___settle__TOP__0(Vf1_des___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_des__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_des___024root___settle__TOP__0\n"); );
    // Init
    CData/*7:0*/ __Vtableidx1;
    // Body
    vlSelf->data_out = vlSelf->f1_des__DOT__f1__DOT__sreg;
    __Vtableidx1 = vlSelf->f1_des__DOT__f1__DOT__current_state;
    vlSelf->f1_des__DOT__f1__DOT__next_state = Vf1_des__ConstPool__TABLE_hd83060c2_0
        [__Vtableidx1];
}

VL_ATTR_COLD void Vf1_des___024root___eval_initial(Vf1_des___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_des__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_des___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vf1_des___024root___eval_settle(Vf1_des___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_des__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_des___024root___eval_settle\n"); );
    // Body
    Vf1_des___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vf1_des___024root___final(Vf1_des___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_des__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_des___024root___final\n"); );
}

VL_ATTR_COLD void Vf1_des___024root___ctor_var_reset(Vf1_des___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_des__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_des___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->en = VL_RAND_RESET_I(1);
    vlSelf->N = VL_RAND_RESET_I(16);
    vlSelf->data_out = VL_RAND_RESET_I(8);
    vlSelf->f1_des__DOT__tick = VL_RAND_RESET_I(1);
    vlSelf->f1_des__DOT__clocktick__DOT__count = VL_RAND_RESET_I(16);
    vlSelf->f1_des__DOT__f1__DOT__current_state = VL_RAND_RESET_I(8);
    vlSelf->f1_des__DOT__f1__DOT__next_state = VL_RAND_RESET_I(8);
    vlSelf->f1_des__DOT__f1__DOT__sreg = VL_RAND_RESET_I(8);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
