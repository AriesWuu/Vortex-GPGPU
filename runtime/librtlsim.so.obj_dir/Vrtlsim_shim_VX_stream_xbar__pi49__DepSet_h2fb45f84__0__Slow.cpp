// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrtlsim_shim.h for the primary calling header

#include "Vrtlsim_shim__pch.h"
#include "Vrtlsim_shim_VX_stream_xbar__pi49.h"

VL_ATTR_COLD void Vrtlsim_shim_VX_stream_xbar__pi49___ctor_var_reset(Vrtlsim_shim_VX_stream_xbar__pi49* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrtlsim_shim_VX_stream_xbar__pi49___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->valid_in = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(272, vlSelf->data_in);
    vlSelf->sel_in = VL_RAND_RESET_I(24);
    vlSelf->ready_in = VL_RAND_RESET_I(8);
    vlSelf->valid_out = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(272, vlSelf->data_out);
    vlSelf->__PVT__sel_out = VL_RAND_RESET_I(24);
    vlSelf->ready_out = VL_RAND_RESET_I(8);
    vlSelf->__PVT__collisions = VL_RAND_RESET_I(4);
    vlSelf->__Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__valid_in = VL_RAND_RESET_I(8);
    vlSelf->__Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__valid_in = VL_RAND_RESET_I(8);
    vlSelf->__Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__valid_in = VL_RAND_RESET_I(8);
    vlSelf->__Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__valid_in = VL_RAND_RESET_I(8);
    vlSelf->__Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__4__KET____DOT__xbar_arb__valid_in = VL_RAND_RESET_I(8);
    vlSelf->__Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__5__KET____DOT__xbar_arb__valid_in = VL_RAND_RESET_I(8);
    vlSelf->__Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__6__KET____DOT__xbar_arb__valid_in = VL_RAND_RESET_I(8);
    vlSelf->__Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__7__KET____DOT__xbar_arb__valid_in = VL_RAND_RESET_I(8);
}
