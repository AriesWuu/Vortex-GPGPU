// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrtlsim_shim.h for the primary calling header

#include "Vrtlsim_shim__pch.h"
#include "Vrtlsim_shim__Syms.h"
#include "Vrtlsim_shim___024root.h"

VL_ATTR_COLD void Vrtlsim_shim___024root___stl_comb__TOP__15(Vrtlsim_shim___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrtlsim_shim___024root___stl_comb__TOP__15\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_switch__DOT__pe_rsp_ready;
    rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_switch__DOT__pe_rsp_ready = 0;
    // Body
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_switch__DOT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot 
        = ((0U != (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_switch__DOT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__masked_reqs))
            ? ((~ (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_switch__DOT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__masked_pri_reqs)) 
               & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_switch__DOT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__masked_reqs))
            : ((~ (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_switch__DOT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__unmasked_pri_reqs)) 
               & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_switch__DOT__pe_rsp_valid)));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_switch__DOT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__v[1U] 
        = ((0xeU & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_switch__DOT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__v
            [1U]) | (0U != (3U & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_switch__DOT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot))));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_switch__DOT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__v[1U] 
        = ((0xbU & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_switch__DOT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__v
            [1U]) | (4U & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_switch__DOT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot)));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_switch__DOT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__v[0U] 
        = vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_switch__DOT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot;
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_switch__DOT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__addr[0U] 
        = ((0xeU & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_switch__DOT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__addr
            [0U]) | (1U & ((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_switch__DOT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                           >> 1U)));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_switch__DOT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__addr[0U] 
        = (0xbU & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_switch__DOT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__addr
           [0U]);
    rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_switch__DOT__pe_rsp_ready 
        = ((0xfffffffcU & (((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_switch__DOT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                            << 2U) & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_switch__DOT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot))) 
           | (3U & ((- (IData)((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_switch__DOT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))) 
                    & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_switch__DOT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot))));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__muldiv_unit__DOT__rsp_buf__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__muldiv_unit__DOT__rsp_buf__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | ((IData)(rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_switch__DOT__pe_rsp_ready) 
                    >> 1U)));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__alu_int__DOT____Vcellinp__branch_reg__data_in 
        = (((QData)((IData)(((((vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__alu_int__DOT__rsp_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                                >> 6U) & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__alu_int__DOT__rsp_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[6U] 
                                          >> 0x14U)) 
                              & (IData)(rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_switch__DOT__pe_rsp_ready)) 
                             & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_result_if__BRA__0__KET__.data[0U]))) 
            << 0x21U) | (((QData)((IData)((3U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_result_if__BRA__0__KET__.data[5U] 
                                                 >> 0xcU)))) 
                          << 0x1fU) | (QData)((IData)(
                                                      ((0x40000000U 
                                                        & (((((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__alu_int__DOT__is_br_less)
                                                               ? vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__alu_int__DOT__br_result
                                                               : 
                                                              (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__alu_int__DOT__br_result 
                                                               >> 1U)) 
                                                             ^ (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__alu_int__DOT__is_br_neg)) 
                                                            | (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__alu_int__DOT__is_br_static)) 
                                                           << 0x1eU)) 
                                                       | vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__alu_int__DOT__br_dest)))));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__dot8_unit__DOT__pe_enable 
        = (1U & ((~ (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__dot8_unit__DOT__pe_serializer__DOT__shift_reg__DOT__g_shift__DOT__pipe[4U] 
                     >> 0xfU)) | ((IData)(rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_switch__DOT__pe_rsp_ready) 
                                  >> 2U)));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__alu_int__DOT__rsp_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__ready[1U] 
        = (1U & (IData)(rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_switch__DOT__pe_rsp_ready));
}

VL_ATTR_COLD void Vrtlsim_shim___024root___stl_comb__TOP__42(Vrtlsim_shim___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrtlsim_shim___024root___stl_comb__TOP__42\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ __Vtemp_2;
    // Body
    __Vtemp_2[0U] = (IData)((((QData)((IData)((0xfffffffU 
                                               & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[6U] 
                                                   << 2U) 
                                                  | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[5U] 
                                                     >> 0x1eU))))) 
                              << 0x1cU) | (QData)((IData)(
                                                          (0xfffffffU 
                                                           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[5U])))));
    __Vtemp_2[1U] = ((0xff000000U & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[7U] 
                                      << 0x1cU) | (0xf000000U 
                                                   & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[6U] 
                                                      >> 4U)))) 
                     | (IData)(((((QData)((IData)((0xfffffffU 
                                                   & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[6U] 
                                                       << 2U) 
                                                      | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[5U] 
                                                         >> 0x1eU))))) 
                                  << 0x1cU) | (QData)((IData)(
                                                              (0xfffffffU 
                                                               & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[5U])))) 
                                >> 0x20U)));
    __Vtemp_2[2U] = ((0xfff00000U & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[8U] 
                                      << 0x1aU) | (0x3f00000U 
                                                   & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[7U] 
                                                      >> 6U)))) 
                     | (0xfffffU & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[7U] 
                                    >> 4U)));
    __Vtemp_2[3U] = (0xffffU & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[8U] 
                                >> 6U));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__seed_addr_n 
        = (0xfffffffU & ((0x6fU >= (0x7fU & ((IData)(0x1cU) 
                                             * vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__g_seed_gen__BRA__0__KET____DOT__batch_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                             [0U])))
                          ? (((0U == (0x1fU & ((IData)(0x1cU) 
                                               * vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__g_seed_gen__BRA__0__KET____DOT__batch_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                               [0U])))
                               ? 0U : (__Vtemp_2[(((IData)(0x1bU) 
                                                   + 
                                                   (0x7fU 
                                                    & ((IData)(0x1cU) 
                                                       * 
                                                       vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__g_seed_gen__BRA__0__KET____DOT__batch_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                       [0U]))) 
                                                  >> 5U)] 
                                       << ((IData)(0x20U) 
                                           - (0x1fU 
                                              & ((IData)(0x1cU) 
                                                 * 
                                                 vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__g_seed_gen__BRA__0__KET____DOT__batch_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                 [0U]))))) 
                             | (__Vtemp_2[(3U & (((IData)(0x1cU) 
                                                  * 
                                                  vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__g_seed_gen__BRA__0__KET____DOT__batch_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                  [0U]) 
                                                 >> 5U))] 
                                >> (0x1fU & ((IData)(0x1cU) 
                                             * vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__g_seed_gen__BRA__0__KET____DOT__batch_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                             [0U]))))
                          : vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT____Vxrand_h3993d74f__0));
}
