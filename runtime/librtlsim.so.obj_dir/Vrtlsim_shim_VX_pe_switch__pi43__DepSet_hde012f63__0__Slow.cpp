// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrtlsim_shim.h for the primary calling header

#include "Vrtlsim_shim__pch.h"
#include "Vrtlsim_shim_VX_pe_switch__pi43.h"

VL_ATTR_COLD void Vrtlsim_shim_VX_pe_switch__pi43___eval_initial__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_switch(Vrtlsim_shim_VX_pe_switch__pi43* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_pe_switch__pi43___eval_initial__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_switch\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<6>/*191:0*/ __Vtemp_2;
    // Body
    VL_RAND_RESET_ASSIGN_W(176, __Vtemp_2);
    vlSelfRef.rsp_arb__DOT____Vxrand_h4f30e8a3__0[0U] 
        = __Vtemp_2[0U];
    vlSelfRef.rsp_arb__DOT____Vxrand_h4f30e8a3__0[1U] 
        = __Vtemp_2[1U];
    vlSelfRef.rsp_arb__DOT____Vxrand_h4f30e8a3__0[2U] 
        = __Vtemp_2[2U];
    vlSelfRef.rsp_arb__DOT____Vxrand_h4f30e8a3__0[3U] 
        = __Vtemp_2[3U];
    vlSelfRef.rsp_arb__DOT____Vxrand_h4f30e8a3__0[4U] 
        = __Vtemp_2[4U];
    vlSelfRef.rsp_arb__DOT____Vxrand_h4f30e8a3__0[5U] 
        = (0xffffU & __Vtemp_2[5U]);
}

VL_ATTR_COLD void Vrtlsim_shim_VX_pe_switch__pi43___ctor_var_reset(Vrtlsim_shim_VX_pe_switch__pi43* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_pe_switch__pi43___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->pe_sel = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pe_req_valid = VL_RAND_RESET_I(2);
    vlSelf->__PVT__pe_req_ready = VL_RAND_RESET_I(2);
    vlSelf->__PVT__pe_rsp_valid = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(352, vlSelf->__PVT__pe_rsp_data);
    vlSelf->__PVT__pe_rsp_ready = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(176, vlSelf->rsp_arb__DOT____Vxrand_h4f30e8a3__0);
    vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(177, vlSelf->rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in);
    vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__masked_pri_reqs = VL_RAND_RESET_I(2);
    vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__unmasked_pri_reqs = VL_RAND_RESET_I(2);
    vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__reqs_mask = VL_RAND_RESET_I(2);
    vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__masked_reqs = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(177, vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r);
    VL_RAND_RESET_W(177, vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r);
    vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out = VL_RAND_RESET_I(1);
}
