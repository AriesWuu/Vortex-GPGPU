// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrtlsim_shim.h for the primary calling header

#include "Vrtlsim_shim__pch.h"
#include "Vrtlsim_shim_VX_stream_arb__N8_D6b_Az207_O3.h"

VL_ATTR_COLD void Vrtlsim_shim_VX_stream_arb__N8_D6b_Az207_O3___eval_initial__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__out_arb(Vrtlsim_shim_VX_stream_arb__N8_D6b_Az207_O3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N8_D6b_Az207_O3___eval_initial__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__out_arb\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ __Vtemp_2;
    // Body
    VL_RAND_RESET_ASSIGN_W(107, __Vtemp_2);
    vlSelfRef.__Vxrand_hc512771a__0[0U] = __Vtemp_2[0U];
    vlSelfRef.__Vxrand_hc512771a__0[1U] = __Vtemp_2[1U];
    vlSelfRef.__Vxrand_hc512771a__0[2U] = __Vtemp_2[2U];
    vlSelfRef.__Vxrand_hc512771a__0[3U] = (0x7ffU & 
                                           __Vtemp_2[3U]);
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[7U] = 0U;
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[8U] = 1U;
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[9U] = 2U;
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xaU] = 3U;
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xbU] = 4U;
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xcU] = 5U;
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xdU] = 6U;
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0xeU] = 7U;
}

VL_ATTR_COLD void Vrtlsim_shim_VX_stream_arb__N8_D6b_Az207_O3___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__out_arb__2(Vrtlsim_shim_VX_stream_arb__N8_D6b_Az207_O3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N8_D6b_Az207_O3___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__out_arb__2\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0U] 
        = (vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [1U] ? vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [1U] : vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [2U]);
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[1U] 
        = (vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [3U] ? vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [3U] : vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [4U]);
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[2U] 
        = (vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [5U] ? vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [5U] : vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [6U]);
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[3U] 
        = (vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [7U] ? vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [7U] : vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [8U]);
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[4U] 
        = (vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [9U] ? vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [9U] : vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xaU]);
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[5U] 
        = (vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xbU] ? vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xbU] : vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xcU]);
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[6U] 
        = (vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xdU] ? vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xdU] : vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xeU]);
}

VL_ATTR_COLD void Vrtlsim_shim_VX_stream_arb__N8_D6b_Az207_O3___ctor_var_reset(Vrtlsim_shim_VX_stream_arb__N8_D6b_Az207_O3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N8_D6b_Az207_O3___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_RAND_RESET_W(107, vlSelf->__Vxrand_hc512771a__0);
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->valid_in = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(856, vlSelf->data_in);
    vlSelf->ready_in = VL_RAND_RESET_I(8);
    vlSelf->valid_out = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(107, vlSelf->data_out);
    vlSelf->ready_out = VL_RAND_RESET_I(1);
    vlSelf->sel_out = VL_RAND_RESET_I(3);
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index = VL_RAND_RESET_I(3);
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(110, vlSelf->__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in);
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_index_r = VL_RAND_RESET_I(3);
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__is_hit = VL_RAND_RESET_I(1);
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 15; ++__Vi0) {
        vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 15; ++__Vi0) {
        vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[__Vi0] = VL_RAND_RESET_I(3);
    }
    VL_RAND_RESET_W(110, vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r);
    VL_RAND_RESET_W(110, vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r);
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out = VL_RAND_RESET_I(1);
}
