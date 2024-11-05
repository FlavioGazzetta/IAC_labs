// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vf1_des__Syms.h"


VL_ATTR_COLD void Vf1_des___024root__trace_init_sub__TOP__0(Vf1_des___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_des__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_des___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+6,"clk", false,-1);
    tracep->declBit(c+7,"rst", false,-1);
    tracep->declBit(c+8,"en", false,-1);
    tracep->declBus(c+9,"N", false,-1, 15,0);
    tracep->declBus(c+10,"data_out", false,-1, 7,0);
    tracep->pushNamePrefix("f1_des ");
    tracep->declBus(c+11,"N_WIDTH", false,-1, 31,0);
    tracep->declBus(c+12,"D_WIDTH", false,-1, 31,0);
    tracep->declBit(c+6,"clk", false,-1);
    tracep->declBit(c+7,"rst", false,-1);
    tracep->declBit(c+8,"en", false,-1);
    tracep->declBus(c+9,"N", false,-1, 15,0);
    tracep->declBus(c+10,"data_out", false,-1, 7,0);
    tracep->declBit(c+1,"tick", false,-1);
    tracep->pushNamePrefix("clocktick ");
    tracep->declBus(c+11,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+6,"clk", false,-1);
    tracep->declBit(c+7,"rst", false,-1);
    tracep->declBit(c+8,"en", false,-1);
    tracep->declBus(c+9,"N", false,-1, 15,0);
    tracep->declBit(c+1,"tick", false,-1);
    tracep->declBus(c+2,"count", false,-1, 15,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("f1 ");
    tracep->declBit(c+7,"rst", false,-1);
    tracep->declBit(c+1,"en", false,-1);
    tracep->declBit(c+6,"clk", false,-1);
    tracep->declBus(c+10,"data_out", false,-1, 7,0);
    tracep->declBus(c+3,"current_state", false,-1, 7,0);
    tracep->declBus(c+4,"next_state", false,-1, 7,0);
    tracep->declBus(c+5,"sreg", false,-1, 7,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vf1_des___024root__trace_init_top(Vf1_des___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_des__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_des___024root__trace_init_top\n"); );
    // Body
    Vf1_des___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vf1_des___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vf1_des___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vf1_des___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vf1_des___024root__trace_register(Vf1_des___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_des__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_des___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vf1_des___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vf1_des___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vf1_des___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vf1_des___024root__trace_full_sub_0(Vf1_des___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vf1_des___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_des___024root__trace_full_top_0\n"); );
    // Init
    Vf1_des___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vf1_des___024root*>(voidSelf);
    Vf1_des__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vf1_des___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vf1_des___024root__trace_full_sub_0(Vf1_des___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_des__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_des___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->f1_des__DOT__tick));
    bufp->fullSData(oldp+2,(vlSelf->f1_des__DOT__clocktick__DOT__count),16);
    bufp->fullCData(oldp+3,(vlSelf->f1_des__DOT__f1__DOT__current_state),8);
    bufp->fullCData(oldp+4,(vlSelf->f1_des__DOT__f1__DOT__next_state),8);
    bufp->fullCData(oldp+5,(vlSelf->f1_des__DOT__f1__DOT__sreg),8);
    bufp->fullBit(oldp+6,(vlSelf->clk));
    bufp->fullBit(oldp+7,(vlSelf->rst));
    bufp->fullBit(oldp+8,(vlSelf->en));
    bufp->fullSData(oldp+9,(vlSelf->N),16);
    bufp->fullCData(oldp+10,(vlSelf->data_out),8);
    bufp->fullIData(oldp+11,(0x10U),32);
    bufp->fullIData(oldp+12,(8U),32);
}
