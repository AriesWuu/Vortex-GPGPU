// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrtlsim_shim.h for the primary calling header

#include "Vrtlsim_shim__pch.h"
#include "Vrtlsim_shim_VX_stream_arb__N5_Dae_Az17_O1.h"

VL_ATTR_COLD void Vrtlsim_shim_VX_stream_arb__N5_Dae_Az17_O1___eval_initial__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__commit_arb(Vrtlsim_shim_VX_stream_arb__N5_Dae_Az17_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N5_Dae_Az17_O1___eval_initial__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__commit_arb\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<6>/*191:0*/ __Vtemp_2;
    // Body
    VL_RAND_RESET_ASSIGN_W(174, __Vtemp_2);
    vlSelfRef.__Vxrand_hee798222__0[0U] = __Vtemp_2[0U];
    vlSelfRef.__Vxrand_hee798222__0[1U] = __Vtemp_2[1U];
    vlSelfRef.__Vxrand_hee798222__0[2U] = __Vtemp_2[2U];
    vlSelfRef.__Vxrand_hee798222__0[3U] = __Vtemp_2[3U];
    vlSelfRef.__Vxrand_hee798222__0[4U] = __Vtemp_2[4U];
    vlSelfRef.__Vxrand_hee798222__0[5U] = (0x3fffU 
                                           & __Vtemp_2[5U]);
    vlSelfRef.g_input_select__DOT__g_arbiter__DOT__arbiter__DOT____Vxrand_h8d96407a__0 
        = (1U & VL_RAND_RESET_ASSIGN_I(1));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[7U] = 0U;
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[8U] = 1U;
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[9U] = 2U;
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xaU] = 3U;
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xbU] = 4U;
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xcU] = 0U;
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xdU] = 0U;
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xeU] = 0U;
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xcU] = 0U;
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xdU] = 0U;
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xeU] = 0U;
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__ready[1U] = 1U;
}

VL_ATTR_COLD void Vrtlsim_shim_VX_stream_arb__N5_Dae_Az17_O1___ctor_var_reset(Vrtlsim_shim_VX_stream_arb__N5_Dae_Az17_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N5_Dae_Az17_O1___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_RAND_RESET_W(174, vlSelf->__Vxrand_hee798222__0);
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->valid_in = VL_RAND_RESET_I(5);
    VL_RAND_RESET_W(870, vlSelf->data_in);
    vlSelf->ready_in = VL_RAND_RESET_I(5);
    vlSelf->valid_out = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(174, vlSelf->data_out);
    vlSelf->ready_out = VL_RAND_RESET_I(1);
    vlSelf->__PVT__sel_out = VL_RAND_RESET_I(3);
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot = VL_RAND_RESET_I(5);
    vlSelf->g_input_select__DOT__g_arbiter__DOT__arbiter__DOT____Vxrand_h8d96407a__0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 15; ++__Vi0) {
        vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 15; ++__Vi0) {
        vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__ready[__Vi0] = VL_RAND_RESET_I(1);
    }
    VL_RAND_RESET_W(178, vlSelf->g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in);
    VL_RAND_RESET_W(178, vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe);
}
