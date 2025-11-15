// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrtlsim_shim.h for the primary calling header

#include "Vrtlsim_shim__pch.h"
#include "Vrtlsim_shim_VX_stream_arb__N8_D22_Az17_O3.h"
#include "Vrtlsim_shim__Syms.h"

VL_INLINE_OPT void Vrtlsim_shim_VX_stream_arb__N8_D22_Az17_O3___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__0(Vrtlsim_shim_VX_stream_arb__N8_D22_Az17_O3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N8_D22_Az17_O3___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[0U] 
        = (vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [1U] ? vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [1U] : vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [2U]);
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[1U] 
        = (vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [3U] ? vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [3U] : vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [4U]);
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[2U] 
        = (vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [5U] ? vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [5U] : vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [6U]);
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[3U] 
        = (vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [7U] ? vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [7U] : vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [8U]);
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[4U] 
        = (vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [9U] ? vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [9U] : vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xaU]);
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[5U] 
        = (vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xbU] ? vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xbU] : vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xcU]);
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n[6U] 
        = (vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [0xdU] ? vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xdU] : vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0xeU]);
    vlSelfRef.__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in 
        = (((QData)((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                            [0U])) << 0x22U) | (0x3ffffffffULL 
                                                & ((0x10fU 
                                                    >= 
                                                    (0x1ffU 
                                                     & ((IData)(0x22U) 
                                                        * 
                                                        vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                        [0U])))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__per_bank_rsp_data_aos[
                                                                     (((IData)(0x21U) 
                                                                       + 
                                                                       (0x1ffU 
                                                                        & ((IData)(0x22U) 
                                                                           * 
                                                                           vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                                           [0U]))) 
                                                                      >> 5U)])) 
                                                     << 
                                                     ((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(0x22U) 
                                                           * 
                                                           vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                           [0U])))
                                                       ? 0x20U
                                                       : 
                                                      ((IData)(0x40U) 
                                                       - 
                                                       (0x1fU 
                                                        & ((IData)(0x22U) 
                                                           * 
                                                           vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                           [0U]))))) 
                                                    | (((0U 
                                                         == 
                                                         (0x1fU 
                                                          & ((IData)(0x22U) 
                                                             * 
                                                             vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                             [0U])))
                                                         ? 0ULL
                                                         : 
                                                        ((QData)((IData)(
                                                                         vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__per_bank_rsp_data_aos[
                                                                         (((IData)(0x1fU) 
                                                                           + 
                                                                           (0x1ffU 
                                                                            & ((IData)(0x22U) 
                                                                               * 
                                                                               vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                                               [0U]))) 
                                                                          >> 5U)])) 
                                                         << 
                                                         ((IData)(0x20U) 
                                                          - 
                                                          (0x1fU 
                                                           & ((IData)(0x22U) 
                                                              * 
                                                              vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                              [0U]))))) 
                                                       | ((QData)((IData)(
                                                                          vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__per_bank_rsp_data_aos[
                                                                          (0xfU 
                                                                           & (((IData)(0x22U) 
                                                                               * 
                                                                               vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                                               [0U]) 
                                                                              >> 5U))])) 
                                                          >> 
                                                          (0x1fU 
                                                           & ((IData)(0x22U) 
                                                              * 
                                                              vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                              [0U])))))
                                                    : vlSelfRef.__Vxrand_h7c43bcce__0)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_stream_arb__N8_D22_Az17_O3___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__2(Vrtlsim_shim_VX_stream_arb__N8_D22_Az17_O3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N8_D22_Az17_O3___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__2\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_ready_out)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_stream_arb__N8_D22_Az17_O3___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__3(Vrtlsim_shim_VX_stream_arb__N8_D22_Az17_O3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N8_D22_Az17_O3___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__3\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs 
        = ((0x80U & (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs) 
                      | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__valid_in)) 
                     << 1U)) | ((0x40U & (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs) 
                                           | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__valid_in)) 
                                          << 1U)) | 
                                ((0x20U & (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs) 
                                            | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__valid_in)) 
                                           << 1U)) 
                                 | ((0x10U & (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs) 
                                               | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__valid_in)) 
                                              << 1U)) 
                                    | ((8U & (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs) 
                                               | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__valid_in)) 
                                              << 1U)) 
                                       | ((4U & (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs) 
                                                  | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__valid_in)) 
                                                 << 1U)) 
                                          | (2U & (
                                                   ((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs) 
                                                    | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__valid_in)) 
                                                   << 1U))))))));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot 
        = ((~ (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs)) 
           & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__valid_in));
    vlSelfRef.ready_in = ((0xffffff80U & (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                           << 7U) & (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot))) 
                          | ((0xffffffc0U & (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                              << 6U) 
                                             & (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot))) 
                             | ((0xffffffe0U & (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                                 << 5U) 
                                                & (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot))) 
                                | ((0xfffffff0U & (
                                                   ((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                                    << 4U) 
                                                   & (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot))) 
                                   | ((0xfffffff8U 
                                       & (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                           << 3U) & (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot))) 
                                      | ((0xfffffffcU 
                                          & (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                              << 2U) 
                                             & (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot))) 
                                         | (3U & ((- (IData)((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))) 
                                                  & (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot)))))))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_stream_arb__N8_D22_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__0(Vrtlsim_shim_VX_stream_arb__N8_D22_Az17_O3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N8_D22_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY((1U & (~ ((1U != (~ (0U 
                                                 != (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__valid_in)))) 
                                      | ((vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
                                          [0U] & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__valid_in) 
                                                  >> 
                                                  vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                  [0U])) 
                                         & ((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                            == (0xffU 
                                                & ((IData)(1U) 
                                                   << 
                                                   vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                   [0U]))))))))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_generic_arbiter.sv:99: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[0].core.mem_unit.local_mem.rsp_xbar.g_multi_inputs.g_multiple_outputs.g_xbar_arbs[0].xbar_arb.g_input_select.g_arbiter.arbiter: %t: invalid arbiter grant!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/libs/VX_generic_arbiter.sv", 99, "");
            }
        }
    }
    if (vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
        vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r 
            = ((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                ? vlSelfRef.__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in
                : vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r);
    }
    if (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
         & vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
         [0U])) {
        vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r 
            = vlSelfRef.__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in;
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r = 0U;
        vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r = 1U;
    } else {
        if (vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
            vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r 
                = (1U & (vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
                         [0U] | (~ (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))));
        }
        if ((vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
             [0U] | (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out))) {
            vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r 
                = vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out;
        }
    }
    vlSelfRef.__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in 
        = (((QData)((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                            [0U])) << 0x22U) | (0x3ffffffffULL 
                                                & ((0x10fU 
                                                    >= 
                                                    (0x1ffU 
                                                     & ((IData)(0x22U) 
                                                        * 
                                                        vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                        [0U])))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__per_bank_rsp_data_aos[
                                                                     (((IData)(0x21U) 
                                                                       + 
                                                                       (0x1ffU 
                                                                        & ((IData)(0x22U) 
                                                                           * 
                                                                           vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                                           [0U]))) 
                                                                      >> 5U)])) 
                                                     << 
                                                     ((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(0x22U) 
                                                           * 
                                                           vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                           [0U])))
                                                       ? 0x20U
                                                       : 
                                                      ((IData)(0x40U) 
                                                       - 
                                                       (0x1fU 
                                                        & ((IData)(0x22U) 
                                                           * 
                                                           vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                           [0U]))))) 
                                                    | (((0U 
                                                         == 
                                                         (0x1fU 
                                                          & ((IData)(0x22U) 
                                                             * 
                                                             vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                             [0U])))
                                                         ? 0ULL
                                                         : 
                                                        ((QData)((IData)(
                                                                         vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__per_bank_rsp_data_aos[
                                                                         (((IData)(0x1fU) 
                                                                           + 
                                                                           (0x1ffU 
                                                                            & ((IData)(0x22U) 
                                                                               * 
                                                                               vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                                               [0U]))) 
                                                                          >> 5U)])) 
                                                         << 
                                                         ((IData)(0x20U) 
                                                          - 
                                                          (0x1fU 
                                                           & ((IData)(0x22U) 
                                                              * 
                                                              vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                              [0U]))))) 
                                                       | ((QData)((IData)(
                                                                          vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__per_bank_rsp_data_aos[
                                                                          (0xfU 
                                                                           & (((IData)(0x22U) 
                                                                               * 
                                                                               vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                                               [0U]) 
                                                                              >> 5U))])) 
                                                          >> 
                                                          (0x1fU 
                                                           & ((IData)(0x22U) 
                                                              * 
                                                              vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                              [0U])))))
                                                    : vlSelfRef.__Vxrand_h7c43bcce__0)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_stream_arb__N8_D22_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__1(Vrtlsim_shim_VX_stream_arb__N8_D22_Az17_O3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N8_D22_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[7U] 
        = (1U & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__valid_in));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[8U] 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__valid_in) 
                 >> 1U));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[9U] 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__valid_in) 
                 >> 2U));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xaU] 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__valid_in) 
                 >> 3U));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xbU] 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__valid_in) 
                 >> 4U));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xcU] 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__valid_in) 
                 >> 5U));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xdU] 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__valid_in) 
                 >> 6U));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xeU] 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__valid_in) 
                 >> 7U));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_ready_out)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_stream_arb__N8_D22_Az17_O3___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__2(Vrtlsim_shim_VX_stream_arb__N8_D22_Az17_O3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N8_D22_Az17_O3___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__2\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_ready_out) 
                    >> 1U)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_stream_arb__N8_D22_Az17_O3___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__3(Vrtlsim_shim_VX_stream_arb__N8_D22_Az17_O3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N8_D22_Az17_O3___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__3\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs 
        = ((0x80U & (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs) 
                      | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__valid_in)) 
                     << 1U)) | ((0x40U & (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs) 
                                           | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__valid_in)) 
                                          << 1U)) | 
                                ((0x20U & (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs) 
                                            | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__valid_in)) 
                                           << 1U)) 
                                 | ((0x10U & (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs) 
                                               | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__valid_in)) 
                                              << 1U)) 
                                    | ((8U & (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs) 
                                               | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__valid_in)) 
                                              << 1U)) 
                                       | ((4U & (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs) 
                                                  | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__valid_in)) 
                                                 << 1U)) 
                                          | (2U & (
                                                   ((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs) 
                                                    | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__valid_in)) 
                                                   << 1U))))))));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot 
        = ((~ (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs)) 
           & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__valid_in));
    vlSelfRef.ready_in = ((0xffffff80U & (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                           << 7U) & (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot))) 
                          | ((0xffffffc0U & (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                              << 6U) 
                                             & (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot))) 
                             | ((0xffffffe0U & (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                                 << 5U) 
                                                & (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot))) 
                                | ((0xfffffff0U & (
                                                   ((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                                    << 4U) 
                                                   & (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot))) 
                                   | ((0xfffffff8U 
                                       & (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                           << 3U) & (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot))) 
                                      | ((0xfffffffcU 
                                          & (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                              << 2U) 
                                             & (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot))) 
                                         | (3U & ((- (IData)((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))) 
                                                  & (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot)))))))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_stream_arb__N8_D22_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__0(Vrtlsim_shim_VX_stream_arb__N8_D22_Az17_O3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N8_D22_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY((1U & (~ ((1U != (~ (0U 
                                                 != (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__valid_in)))) 
                                      | ((vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
                                          [0U] & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__valid_in) 
                                                  >> 
                                                  vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                  [0U])) 
                                         & ((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                            == (0xffU 
                                                & ((IData)(1U) 
                                                   << 
                                                   vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                   [0U]))))))))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_generic_arbiter.sv:99: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[0].core.mem_unit.local_mem.rsp_xbar.g_multi_inputs.g_multiple_outputs.g_xbar_arbs[1].xbar_arb.g_input_select.g_arbiter.arbiter: %t: invalid arbiter grant!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/libs/VX_generic_arbiter.sv", 99, "");
            }
        }
    }
    if (vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
        vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r 
            = ((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                ? vlSelfRef.__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in
                : vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r);
    }
    if (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
         & vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
         [0U])) {
        vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r 
            = vlSelfRef.__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in;
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r = 0U;
        vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r = 1U;
    } else {
        if (vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
            vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r 
                = (1U & (vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
                         [0U] | (~ (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))));
        }
        if ((vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
             [0U] | (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out))) {
            vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r 
                = vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out;
        }
    }
    vlSelfRef.__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in 
        = (((QData)((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                            [0U])) << 0x22U) | (0x3ffffffffULL 
                                                & ((0x10fU 
                                                    >= 
                                                    (0x1ffU 
                                                     & ((IData)(0x22U) 
                                                        * 
                                                        vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                        [0U])))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__per_bank_rsp_data_aos[
                                                                     (((IData)(0x21U) 
                                                                       + 
                                                                       (0x1ffU 
                                                                        & ((IData)(0x22U) 
                                                                           * 
                                                                           vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                                           [0U]))) 
                                                                      >> 5U)])) 
                                                     << 
                                                     ((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(0x22U) 
                                                           * 
                                                           vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                           [0U])))
                                                       ? 0x20U
                                                       : 
                                                      ((IData)(0x40U) 
                                                       - 
                                                       (0x1fU 
                                                        & ((IData)(0x22U) 
                                                           * 
                                                           vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                           [0U]))))) 
                                                    | (((0U 
                                                         == 
                                                         (0x1fU 
                                                          & ((IData)(0x22U) 
                                                             * 
                                                             vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                             [0U])))
                                                         ? 0ULL
                                                         : 
                                                        ((QData)((IData)(
                                                                         vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__per_bank_rsp_data_aos[
                                                                         (((IData)(0x1fU) 
                                                                           + 
                                                                           (0x1ffU 
                                                                            & ((IData)(0x22U) 
                                                                               * 
                                                                               vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                                               [0U]))) 
                                                                          >> 5U)])) 
                                                         << 
                                                         ((IData)(0x20U) 
                                                          - 
                                                          (0x1fU 
                                                           & ((IData)(0x22U) 
                                                              * 
                                                              vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                              [0U]))))) 
                                                       | ((QData)((IData)(
                                                                          vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__per_bank_rsp_data_aos[
                                                                          (0xfU 
                                                                           & (((IData)(0x22U) 
                                                                               * 
                                                                               vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                                               [0U]) 
                                                                              >> 5U))])) 
                                                          >> 
                                                          (0x1fU 
                                                           & ((IData)(0x22U) 
                                                              * 
                                                              vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                              [0U])))))
                                                    : vlSelfRef.__Vxrand_h7c43bcce__0)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_stream_arb__N8_D22_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__1(Vrtlsim_shim_VX_stream_arb__N8_D22_Az17_O3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N8_D22_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[7U] 
        = (1U & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__valid_in));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[8U] 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__valid_in) 
                 >> 1U));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[9U] 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__valid_in) 
                 >> 2U));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xaU] 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__valid_in) 
                 >> 3U));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xbU] 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__valid_in) 
                 >> 4U));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xcU] 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__valid_in) 
                 >> 5U));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xdU] 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__valid_in) 
                 >> 6U));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xeU] 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__valid_in) 
                 >> 7U));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_ready_out) 
                    >> 1U)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_stream_arb__N8_D22_Az17_O3___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__2(Vrtlsim_shim_VX_stream_arb__N8_D22_Az17_O3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N8_D22_Az17_O3___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__2\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_ready_out) 
                    >> 2U)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_stream_arb__N8_D22_Az17_O3___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__3(Vrtlsim_shim_VX_stream_arb__N8_D22_Az17_O3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N8_D22_Az17_O3___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__3\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs 
        = ((0x80U & (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs) 
                      | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__valid_in)) 
                     << 1U)) | ((0x40U & (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs) 
                                           | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__valid_in)) 
                                          << 1U)) | 
                                ((0x20U & (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs) 
                                            | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__valid_in)) 
                                           << 1U)) 
                                 | ((0x10U & (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs) 
                                               | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__valid_in)) 
                                              << 1U)) 
                                    | ((8U & (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs) 
                                               | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__valid_in)) 
                                              << 1U)) 
                                       | ((4U & (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs) 
                                                  | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__valid_in)) 
                                                 << 1U)) 
                                          | (2U & (
                                                   ((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs) 
                                                    | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__valid_in)) 
                                                   << 1U))))))));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot 
        = ((~ (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs)) 
           & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__valid_in));
    vlSelfRef.ready_in = ((0xffffff80U & (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                           << 7U) & (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot))) 
                          | ((0xffffffc0U & (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                              << 6U) 
                                             & (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot))) 
                             | ((0xffffffe0U & (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                                 << 5U) 
                                                & (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot))) 
                                | ((0xfffffff0U & (
                                                   ((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                                    << 4U) 
                                                   & (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot))) 
                                   | ((0xfffffff8U 
                                       & (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                           << 3U) & (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot))) 
                                      | ((0xfffffffcU 
                                          & (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                              << 2U) 
                                             & (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot))) 
                                         | (3U & ((- (IData)((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))) 
                                                  & (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot)))))))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_stream_arb__N8_D22_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__0(Vrtlsim_shim_VX_stream_arb__N8_D22_Az17_O3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N8_D22_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY((1U & (~ ((1U != (~ (0U 
                                                 != (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__valid_in)))) 
                                      | ((vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
                                          [0U] & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__valid_in) 
                                                  >> 
                                                  vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                  [0U])) 
                                         & ((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                            == (0xffU 
                                                & ((IData)(1U) 
                                                   << 
                                                   vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                   [0U]))))))))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_generic_arbiter.sv:99: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[0].core.mem_unit.local_mem.rsp_xbar.g_multi_inputs.g_multiple_outputs.g_xbar_arbs[2].xbar_arb.g_input_select.g_arbiter.arbiter: %t: invalid arbiter grant!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/libs/VX_generic_arbiter.sv", 99, "");
            }
        }
    }
    if (vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
        vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r 
            = ((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                ? vlSelfRef.__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in
                : vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r);
    }
    if (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
         & vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
         [0U])) {
        vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r 
            = vlSelfRef.__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in;
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r = 0U;
        vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r = 1U;
    } else {
        if (vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
            vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r 
                = (1U & (vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
                         [0U] | (~ (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))));
        }
        if ((vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
             [0U] | (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out))) {
            vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r 
                = vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out;
        }
    }
    vlSelfRef.__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in 
        = (((QData)((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                            [0U])) << 0x22U) | (0x3ffffffffULL 
                                                & ((0x10fU 
                                                    >= 
                                                    (0x1ffU 
                                                     & ((IData)(0x22U) 
                                                        * 
                                                        vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                        [0U])))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__per_bank_rsp_data_aos[
                                                                     (((IData)(0x21U) 
                                                                       + 
                                                                       (0x1ffU 
                                                                        & ((IData)(0x22U) 
                                                                           * 
                                                                           vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                                           [0U]))) 
                                                                      >> 5U)])) 
                                                     << 
                                                     ((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(0x22U) 
                                                           * 
                                                           vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                           [0U])))
                                                       ? 0x20U
                                                       : 
                                                      ((IData)(0x40U) 
                                                       - 
                                                       (0x1fU 
                                                        & ((IData)(0x22U) 
                                                           * 
                                                           vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                           [0U]))))) 
                                                    | (((0U 
                                                         == 
                                                         (0x1fU 
                                                          & ((IData)(0x22U) 
                                                             * 
                                                             vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                             [0U])))
                                                         ? 0ULL
                                                         : 
                                                        ((QData)((IData)(
                                                                         vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__per_bank_rsp_data_aos[
                                                                         (((IData)(0x1fU) 
                                                                           + 
                                                                           (0x1ffU 
                                                                            & ((IData)(0x22U) 
                                                                               * 
                                                                               vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                                               [0U]))) 
                                                                          >> 5U)])) 
                                                         << 
                                                         ((IData)(0x20U) 
                                                          - 
                                                          (0x1fU 
                                                           & ((IData)(0x22U) 
                                                              * 
                                                              vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                              [0U]))))) 
                                                       | ((QData)((IData)(
                                                                          vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__per_bank_rsp_data_aos[
                                                                          (0xfU 
                                                                           & (((IData)(0x22U) 
                                                                               * 
                                                                               vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                                               [0U]) 
                                                                              >> 5U))])) 
                                                          >> 
                                                          (0x1fU 
                                                           & ((IData)(0x22U) 
                                                              * 
                                                              vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                              [0U])))))
                                                    : vlSelfRef.__Vxrand_h7c43bcce__0)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_stream_arb__N8_D22_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__1(Vrtlsim_shim_VX_stream_arb__N8_D22_Az17_O3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N8_D22_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[7U] 
        = (1U & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__valid_in));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[8U] 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__valid_in) 
                 >> 1U));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[9U] 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__valid_in) 
                 >> 2U));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xaU] 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__valid_in) 
                 >> 3U));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xbU] 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__valid_in) 
                 >> 4U));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xcU] 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__valid_in) 
                 >> 5U));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xdU] 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__valid_in) 
                 >> 6U));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xeU] 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__valid_in) 
                 >> 7U));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_ready_out) 
                    >> 2U)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_stream_arb__N8_D22_Az17_O3___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__2(Vrtlsim_shim_VX_stream_arb__N8_D22_Az17_O3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N8_D22_Az17_O3___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__2\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_ready_out) 
                    >> 3U)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_stream_arb__N8_D22_Az17_O3___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__3(Vrtlsim_shim_VX_stream_arb__N8_D22_Az17_O3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N8_D22_Az17_O3___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__3\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs 
        = ((0x80U & (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs) 
                      | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__valid_in)) 
                     << 1U)) | ((0x40U & (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs) 
                                           | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__valid_in)) 
                                          << 1U)) | 
                                ((0x20U & (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs) 
                                            | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__valid_in)) 
                                           << 1U)) 
                                 | ((0x10U & (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs) 
                                               | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__valid_in)) 
                                              << 1U)) 
                                    | ((8U & (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs) 
                                               | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__valid_in)) 
                                              << 1U)) 
                                       | ((4U & (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs) 
                                                  | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__valid_in)) 
                                                 << 1U)) 
                                          | (2U & (
                                                   ((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs) 
                                                    | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__valid_in)) 
                                                   << 1U))))))));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot 
        = ((~ (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs)) 
           & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__valid_in));
    vlSelfRef.ready_in = ((0xffffff80U & (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                           << 7U) & (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot))) 
                          | ((0xffffffc0U & (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                              << 6U) 
                                             & (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot))) 
                             | ((0xffffffe0U & (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                                 << 5U) 
                                                & (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot))) 
                                | ((0xfffffff0U & (
                                                   ((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                                    << 4U) 
                                                   & (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot))) 
                                   | ((0xfffffff8U 
                                       & (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                           << 3U) & (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot))) 
                                      | ((0xfffffffcU 
                                          & (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                              << 2U) 
                                             & (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot))) 
                                         | (3U & ((- (IData)((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))) 
                                                  & (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot)))))))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_stream_arb__N8_D22_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__0(Vrtlsim_shim_VX_stream_arb__N8_D22_Az17_O3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N8_D22_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY((1U & (~ ((1U != (~ (0U 
                                                 != (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__valid_in)))) 
                                      | ((vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
                                          [0U] & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__valid_in) 
                                                  >> 
                                                  vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                  [0U])) 
                                         & ((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                            == (0xffU 
                                                & ((IData)(1U) 
                                                   << 
                                                   vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                   [0U]))))))))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_generic_arbiter.sv:99: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[0].core.mem_unit.local_mem.rsp_xbar.g_multi_inputs.g_multiple_outputs.g_xbar_arbs[3].xbar_arb.g_input_select.g_arbiter.arbiter: %t: invalid arbiter grant!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/libs/VX_generic_arbiter.sv", 99, "");
            }
        }
    }
    if (vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
        vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r 
            = ((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                ? vlSelfRef.__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in
                : vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r);
    }
    if (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
         & vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
         [0U])) {
        vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r 
            = vlSelfRef.__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in;
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r = 0U;
        vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r = 1U;
    } else {
        if (vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
            vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r 
                = (1U & (vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
                         [0U] | (~ (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))));
        }
        if ((vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
             [0U] | (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out))) {
            vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r 
                = vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out;
        }
    }
    vlSelfRef.__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in 
        = (((QData)((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                            [0U])) << 0x22U) | (0x3ffffffffULL 
                                                & ((0x10fU 
                                                    >= 
                                                    (0x1ffU 
                                                     & ((IData)(0x22U) 
                                                        * 
                                                        vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                        [0U])))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__per_bank_rsp_data_aos[
                                                                     (((IData)(0x21U) 
                                                                       + 
                                                                       (0x1ffU 
                                                                        & ((IData)(0x22U) 
                                                                           * 
                                                                           vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                                           [0U]))) 
                                                                      >> 5U)])) 
                                                     << 
                                                     ((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(0x22U) 
                                                           * 
                                                           vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                           [0U])))
                                                       ? 0x20U
                                                       : 
                                                      ((IData)(0x40U) 
                                                       - 
                                                       (0x1fU 
                                                        & ((IData)(0x22U) 
                                                           * 
                                                           vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                           [0U]))))) 
                                                    | (((0U 
                                                         == 
                                                         (0x1fU 
                                                          & ((IData)(0x22U) 
                                                             * 
                                                             vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                             [0U])))
                                                         ? 0ULL
                                                         : 
                                                        ((QData)((IData)(
                                                                         vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__per_bank_rsp_data_aos[
                                                                         (((IData)(0x1fU) 
                                                                           + 
                                                                           (0x1ffU 
                                                                            & ((IData)(0x22U) 
                                                                               * 
                                                                               vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                                               [0U]))) 
                                                                          >> 5U)])) 
                                                         << 
                                                         ((IData)(0x20U) 
                                                          - 
                                                          (0x1fU 
                                                           & ((IData)(0x22U) 
                                                              * 
                                                              vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                              [0U]))))) 
                                                       | ((QData)((IData)(
                                                                          vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__per_bank_rsp_data_aos[
                                                                          (0xfU 
                                                                           & (((IData)(0x22U) 
                                                                               * 
                                                                               vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                                               [0U]) 
                                                                              >> 5U))])) 
                                                          >> 
                                                          (0x1fU 
                                                           & ((IData)(0x22U) 
                                                              * 
                                                              vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                              [0U])))))
                                                    : vlSelfRef.__Vxrand_h7c43bcce__0)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_stream_arb__N8_D22_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__1(Vrtlsim_shim_VX_stream_arb__N8_D22_Az17_O3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N8_D22_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[7U] 
        = (1U & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__valid_in));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[8U] 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__valid_in) 
                 >> 1U));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[9U] 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__valid_in) 
                 >> 2U));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xaU] 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__valid_in) 
                 >> 3U));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xbU] 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__valid_in) 
                 >> 4U));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xcU] 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__valid_in) 
                 >> 5U));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xdU] 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__valid_in) 
                 >> 6U));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xeU] 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__valid_in) 
                 >> 7U));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_ready_out) 
                    >> 3U)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_stream_arb__N8_D22_Az17_O3___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__4__KET____DOT__xbar_arb__2(Vrtlsim_shim_VX_stream_arb__N8_D22_Az17_O3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N8_D22_Az17_O3___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__4__KET____DOT__xbar_arb__2\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_ready_out) 
                    >> 4U)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_stream_arb__N8_D22_Az17_O3___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__4__KET____DOT__xbar_arb__3(Vrtlsim_shim_VX_stream_arb__N8_D22_Az17_O3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N8_D22_Az17_O3___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__4__KET____DOT__xbar_arb__3\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs 
        = ((0x80U & (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs) 
                      | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__4__KET____DOT__xbar_arb__valid_in)) 
                     << 1U)) | ((0x40U & (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs) 
                                           | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__4__KET____DOT__xbar_arb__valid_in)) 
                                          << 1U)) | 
                                ((0x20U & (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs) 
                                            | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__4__KET____DOT__xbar_arb__valid_in)) 
                                           << 1U)) 
                                 | ((0x10U & (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs) 
                                               | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__4__KET____DOT__xbar_arb__valid_in)) 
                                              << 1U)) 
                                    | ((8U & (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs) 
                                               | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__4__KET____DOT__xbar_arb__valid_in)) 
                                              << 1U)) 
                                       | ((4U & (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs) 
                                                  | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__4__KET____DOT__xbar_arb__valid_in)) 
                                                 << 1U)) 
                                          | (2U & (
                                                   ((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs) 
                                                    | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__4__KET____DOT__xbar_arb__valid_in)) 
                                                   << 1U))))))));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot 
        = ((~ (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs)) 
           & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__4__KET____DOT__xbar_arb__valid_in));
    vlSelfRef.ready_in = ((0xffffff80U & (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                           << 7U) & (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot))) 
                          | ((0xffffffc0U & (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                              << 6U) 
                                             & (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot))) 
                             | ((0xffffffe0U & (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                                 << 5U) 
                                                & (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot))) 
                                | ((0xfffffff0U & (
                                                   ((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                                    << 4U) 
                                                   & (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot))) 
                                   | ((0xfffffff8U 
                                       & (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                           << 3U) & (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot))) 
                                      | ((0xfffffffcU 
                                          & (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                              << 2U) 
                                             & (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot))) 
                                         | (3U & ((- (IData)((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))) 
                                                  & (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot)))))))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_stream_arb__N8_D22_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__4__KET____DOT__xbar_arb__0(Vrtlsim_shim_VX_stream_arb__N8_D22_Az17_O3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N8_D22_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__4__KET____DOT__xbar_arb__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY((1U & (~ ((1U != (~ (0U 
                                                 != (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__4__KET____DOT__xbar_arb__valid_in)))) 
                                      | ((vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
                                          [0U] & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__4__KET____DOT__xbar_arb__valid_in) 
                                                  >> 
                                                  vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                  [0U])) 
                                         & ((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                            == (0xffU 
                                                & ((IData)(1U) 
                                                   << 
                                                   vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                   [0U]))))))))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_generic_arbiter.sv:99: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[0].core.mem_unit.local_mem.rsp_xbar.g_multi_inputs.g_multiple_outputs.g_xbar_arbs[4].xbar_arb.g_input_select.g_arbiter.arbiter: %t: invalid arbiter grant!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/libs/VX_generic_arbiter.sv", 99, "");
            }
        }
    }
    if (vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
        vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r 
            = ((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                ? vlSelfRef.__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in
                : vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r);
    }
    if (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
         & vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
         [0U])) {
        vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r 
            = vlSelfRef.__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in;
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r = 0U;
        vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r = 1U;
    } else {
        if (vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
            vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r 
                = (1U & (vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
                         [0U] | (~ (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))));
        }
        if ((vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
             [0U] | (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out))) {
            vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r 
                = vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out;
        }
    }
    vlSelfRef.__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in 
        = (((QData)((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                            [0U])) << 0x22U) | (0x3ffffffffULL 
                                                & ((0x10fU 
                                                    >= 
                                                    (0x1ffU 
                                                     & ((IData)(0x22U) 
                                                        * 
                                                        vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                        [0U])))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__per_bank_rsp_data_aos[
                                                                     (((IData)(0x21U) 
                                                                       + 
                                                                       (0x1ffU 
                                                                        & ((IData)(0x22U) 
                                                                           * 
                                                                           vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                                           [0U]))) 
                                                                      >> 5U)])) 
                                                     << 
                                                     ((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(0x22U) 
                                                           * 
                                                           vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                           [0U])))
                                                       ? 0x20U
                                                       : 
                                                      ((IData)(0x40U) 
                                                       - 
                                                       (0x1fU 
                                                        & ((IData)(0x22U) 
                                                           * 
                                                           vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                           [0U]))))) 
                                                    | (((0U 
                                                         == 
                                                         (0x1fU 
                                                          & ((IData)(0x22U) 
                                                             * 
                                                             vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                             [0U])))
                                                         ? 0ULL
                                                         : 
                                                        ((QData)((IData)(
                                                                         vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__per_bank_rsp_data_aos[
                                                                         (((IData)(0x1fU) 
                                                                           + 
                                                                           (0x1ffU 
                                                                            & ((IData)(0x22U) 
                                                                               * 
                                                                               vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                                               [0U]))) 
                                                                          >> 5U)])) 
                                                         << 
                                                         ((IData)(0x20U) 
                                                          - 
                                                          (0x1fU 
                                                           & ((IData)(0x22U) 
                                                              * 
                                                              vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                              [0U]))))) 
                                                       | ((QData)((IData)(
                                                                          vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__per_bank_rsp_data_aos[
                                                                          (0xfU 
                                                                           & (((IData)(0x22U) 
                                                                               * 
                                                                               vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                                               [0U]) 
                                                                              >> 5U))])) 
                                                          >> 
                                                          (0x1fU 
                                                           & ((IData)(0x22U) 
                                                              * 
                                                              vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                              [0U])))))
                                                    : vlSelfRef.__Vxrand_h7c43bcce__0)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_stream_arb__N8_D22_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__4__KET____DOT__xbar_arb__1(Vrtlsim_shim_VX_stream_arb__N8_D22_Az17_O3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N8_D22_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__4__KET____DOT__xbar_arb__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[7U] 
        = (1U & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__4__KET____DOT__xbar_arb__valid_in));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[8U] 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__4__KET____DOT__xbar_arb__valid_in) 
                 >> 1U));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[9U] 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__4__KET____DOT__xbar_arb__valid_in) 
                 >> 2U));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xaU] 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__4__KET____DOT__xbar_arb__valid_in) 
                 >> 3U));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xbU] 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__4__KET____DOT__xbar_arb__valid_in) 
                 >> 4U));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xcU] 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__4__KET____DOT__xbar_arb__valid_in) 
                 >> 5U));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xdU] 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__4__KET____DOT__xbar_arb__valid_in) 
                 >> 6U));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xeU] 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__4__KET____DOT__xbar_arb__valid_in) 
                 >> 7U));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_ready_out) 
                    >> 4U)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_stream_arb__N8_D22_Az17_O3___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__5__KET____DOT__xbar_arb__2(Vrtlsim_shim_VX_stream_arb__N8_D22_Az17_O3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N8_D22_Az17_O3___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__5__KET____DOT__xbar_arb__2\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_ready_out) 
                    >> 5U)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_stream_arb__N8_D22_Az17_O3___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__5__KET____DOT__xbar_arb__3(Vrtlsim_shim_VX_stream_arb__N8_D22_Az17_O3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N8_D22_Az17_O3___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__5__KET____DOT__xbar_arb__3\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs 
        = ((0x80U & (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs) 
                      | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__5__KET____DOT__xbar_arb__valid_in)) 
                     << 1U)) | ((0x40U & (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs) 
                                           | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__5__KET____DOT__xbar_arb__valid_in)) 
                                          << 1U)) | 
                                ((0x20U & (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs) 
                                            | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__5__KET____DOT__xbar_arb__valid_in)) 
                                           << 1U)) 
                                 | ((0x10U & (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs) 
                                               | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__5__KET____DOT__xbar_arb__valid_in)) 
                                              << 1U)) 
                                    | ((8U & (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs) 
                                               | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__5__KET____DOT__xbar_arb__valid_in)) 
                                              << 1U)) 
                                       | ((4U & (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs) 
                                                  | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__5__KET____DOT__xbar_arb__valid_in)) 
                                                 << 1U)) 
                                          | (2U & (
                                                   ((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs) 
                                                    | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__5__KET____DOT__xbar_arb__valid_in)) 
                                                   << 1U))))))));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot 
        = ((~ (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs)) 
           & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__5__KET____DOT__xbar_arb__valid_in));
    vlSelfRef.ready_in = ((0xffffff80U & (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                           << 7U) & (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot))) 
                          | ((0xffffffc0U & (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                              << 6U) 
                                             & (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot))) 
                             | ((0xffffffe0U & (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                                 << 5U) 
                                                & (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot))) 
                                | ((0xfffffff0U & (
                                                   ((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                                    << 4U) 
                                                   & (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot))) 
                                   | ((0xfffffff8U 
                                       & (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                           << 3U) & (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot))) 
                                      | ((0xfffffffcU 
                                          & (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                              << 2U) 
                                             & (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot))) 
                                         | (3U & ((- (IData)((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))) 
                                                  & (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot)))))))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_stream_arb__N8_D22_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__5__KET____DOT__xbar_arb__0(Vrtlsim_shim_VX_stream_arb__N8_D22_Az17_O3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N8_D22_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__5__KET____DOT__xbar_arb__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY((1U & (~ ((1U != (~ (0U 
                                                 != (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__5__KET____DOT__xbar_arb__valid_in)))) 
                                      | ((vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
                                          [0U] & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__5__KET____DOT__xbar_arb__valid_in) 
                                                  >> 
                                                  vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                  [0U])) 
                                         & ((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                            == (0xffU 
                                                & ((IData)(1U) 
                                                   << 
                                                   vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                   [0U]))))))))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_generic_arbiter.sv:99: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[0].core.mem_unit.local_mem.rsp_xbar.g_multi_inputs.g_multiple_outputs.g_xbar_arbs[5].xbar_arb.g_input_select.g_arbiter.arbiter: %t: invalid arbiter grant!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/libs/VX_generic_arbiter.sv", 99, "");
            }
        }
    }
    if (vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
        vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r 
            = ((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                ? vlSelfRef.__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in
                : vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r);
    }
    if (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
         & vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
         [0U])) {
        vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r 
            = vlSelfRef.__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in;
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r = 0U;
        vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r = 1U;
    } else {
        if (vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
            vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r 
                = (1U & (vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
                         [0U] | (~ (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))));
        }
        if ((vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
             [0U] | (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out))) {
            vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r 
                = vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out;
        }
    }
    vlSelfRef.__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in 
        = (((QData)((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                            [0U])) << 0x22U) | (0x3ffffffffULL 
                                                & ((0x10fU 
                                                    >= 
                                                    (0x1ffU 
                                                     & ((IData)(0x22U) 
                                                        * 
                                                        vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                        [0U])))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__per_bank_rsp_data_aos[
                                                                     (((IData)(0x21U) 
                                                                       + 
                                                                       (0x1ffU 
                                                                        & ((IData)(0x22U) 
                                                                           * 
                                                                           vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                                           [0U]))) 
                                                                      >> 5U)])) 
                                                     << 
                                                     ((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(0x22U) 
                                                           * 
                                                           vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                           [0U])))
                                                       ? 0x20U
                                                       : 
                                                      ((IData)(0x40U) 
                                                       - 
                                                       (0x1fU 
                                                        & ((IData)(0x22U) 
                                                           * 
                                                           vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                           [0U]))))) 
                                                    | (((0U 
                                                         == 
                                                         (0x1fU 
                                                          & ((IData)(0x22U) 
                                                             * 
                                                             vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                             [0U])))
                                                         ? 0ULL
                                                         : 
                                                        ((QData)((IData)(
                                                                         vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__per_bank_rsp_data_aos[
                                                                         (((IData)(0x1fU) 
                                                                           + 
                                                                           (0x1ffU 
                                                                            & ((IData)(0x22U) 
                                                                               * 
                                                                               vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                                               [0U]))) 
                                                                          >> 5U)])) 
                                                         << 
                                                         ((IData)(0x20U) 
                                                          - 
                                                          (0x1fU 
                                                           & ((IData)(0x22U) 
                                                              * 
                                                              vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                              [0U]))))) 
                                                       | ((QData)((IData)(
                                                                          vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__per_bank_rsp_data_aos[
                                                                          (0xfU 
                                                                           & (((IData)(0x22U) 
                                                                               * 
                                                                               vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                                               [0U]) 
                                                                              >> 5U))])) 
                                                          >> 
                                                          (0x1fU 
                                                           & ((IData)(0x22U) 
                                                              * 
                                                              vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                              [0U])))))
                                                    : vlSelfRef.__Vxrand_h7c43bcce__0)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_stream_arb__N8_D22_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__5__KET____DOT__xbar_arb__1(Vrtlsim_shim_VX_stream_arb__N8_D22_Az17_O3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N8_D22_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__5__KET____DOT__xbar_arb__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[7U] 
        = (1U & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__5__KET____DOT__xbar_arb__valid_in));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[8U] 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__5__KET____DOT__xbar_arb__valid_in) 
                 >> 1U));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[9U] 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__5__KET____DOT__xbar_arb__valid_in) 
                 >> 2U));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xaU] 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__5__KET____DOT__xbar_arb__valid_in) 
                 >> 3U));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xbU] 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__5__KET____DOT__xbar_arb__valid_in) 
                 >> 4U));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xcU] 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__5__KET____DOT__xbar_arb__valid_in) 
                 >> 5U));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xdU] 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__5__KET____DOT__xbar_arb__valid_in) 
                 >> 6U));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xeU] 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__5__KET____DOT__xbar_arb__valid_in) 
                 >> 7U));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_ready_out) 
                    >> 5U)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_stream_arb__N8_D22_Az17_O3___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__6__KET____DOT__xbar_arb__2(Vrtlsim_shim_VX_stream_arb__N8_D22_Az17_O3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N8_D22_Az17_O3___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__6__KET____DOT__xbar_arb__2\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_ready_out) 
                    >> 6U)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_stream_arb__N8_D22_Az17_O3___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__6__KET____DOT__xbar_arb__3(Vrtlsim_shim_VX_stream_arb__N8_D22_Az17_O3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N8_D22_Az17_O3___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__6__KET____DOT__xbar_arb__3\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs 
        = ((0x80U & (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs) 
                      | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__6__KET____DOT__xbar_arb__valid_in)) 
                     << 1U)) | ((0x40U & (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs) 
                                           | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__6__KET____DOT__xbar_arb__valid_in)) 
                                          << 1U)) | 
                                ((0x20U & (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs) 
                                            | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__6__KET____DOT__xbar_arb__valid_in)) 
                                           << 1U)) 
                                 | ((0x10U & (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs) 
                                               | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__6__KET____DOT__xbar_arb__valid_in)) 
                                              << 1U)) 
                                    | ((8U & (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs) 
                                               | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__6__KET____DOT__xbar_arb__valid_in)) 
                                              << 1U)) 
                                       | ((4U & (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs) 
                                                  | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__6__KET____DOT__xbar_arb__valid_in)) 
                                                 << 1U)) 
                                          | (2U & (
                                                   ((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs) 
                                                    | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__6__KET____DOT__xbar_arb__valid_in)) 
                                                   << 1U))))))));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot 
        = ((~ (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs)) 
           & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__6__KET____DOT__xbar_arb__valid_in));
    vlSelfRef.ready_in = ((0xffffff80U & (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                           << 7U) & (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot))) 
                          | ((0xffffffc0U & (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                              << 6U) 
                                             & (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot))) 
                             | ((0xffffffe0U & (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                                 << 5U) 
                                                & (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot))) 
                                | ((0xfffffff0U & (
                                                   ((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                                    << 4U) 
                                                   & (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot))) 
                                   | ((0xfffffff8U 
                                       & (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                           << 3U) & (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot))) 
                                      | ((0xfffffffcU 
                                          & (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                              << 2U) 
                                             & (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot))) 
                                         | (3U & ((- (IData)((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))) 
                                                  & (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot)))))))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_stream_arb__N8_D22_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__6__KET____DOT__xbar_arb__0(Vrtlsim_shim_VX_stream_arb__N8_D22_Az17_O3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N8_D22_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__6__KET____DOT__xbar_arb__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY((1U & (~ ((1U != (~ (0U 
                                                 != (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__6__KET____DOT__xbar_arb__valid_in)))) 
                                      | ((vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
                                          [0U] & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__6__KET____DOT__xbar_arb__valid_in) 
                                                  >> 
                                                  vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                  [0U])) 
                                         & ((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                            == (0xffU 
                                                & ((IData)(1U) 
                                                   << 
                                                   vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                   [0U]))))))))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_generic_arbiter.sv:99: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[0].core.mem_unit.local_mem.rsp_xbar.g_multi_inputs.g_multiple_outputs.g_xbar_arbs[6].xbar_arb.g_input_select.g_arbiter.arbiter: %t: invalid arbiter grant!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/libs/VX_generic_arbiter.sv", 99, "");
            }
        }
    }
    if (vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
        vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r 
            = ((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                ? vlSelfRef.__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in
                : vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r);
    }
    if (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
         & vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
         [0U])) {
        vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r 
            = vlSelfRef.__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in;
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r = 0U;
        vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r = 1U;
    } else {
        if (vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
            vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r 
                = (1U & (vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
                         [0U] | (~ (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))));
        }
        if ((vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
             [0U] | (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out))) {
            vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r 
                = vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out;
        }
    }
    vlSelfRef.__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in 
        = (((QData)((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                            [0U])) << 0x22U) | (0x3ffffffffULL 
                                                & ((0x10fU 
                                                    >= 
                                                    (0x1ffU 
                                                     & ((IData)(0x22U) 
                                                        * 
                                                        vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                        [0U])))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__per_bank_rsp_data_aos[
                                                                     (((IData)(0x21U) 
                                                                       + 
                                                                       (0x1ffU 
                                                                        & ((IData)(0x22U) 
                                                                           * 
                                                                           vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                                           [0U]))) 
                                                                      >> 5U)])) 
                                                     << 
                                                     ((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(0x22U) 
                                                           * 
                                                           vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                           [0U])))
                                                       ? 0x20U
                                                       : 
                                                      ((IData)(0x40U) 
                                                       - 
                                                       (0x1fU 
                                                        & ((IData)(0x22U) 
                                                           * 
                                                           vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                           [0U]))))) 
                                                    | (((0U 
                                                         == 
                                                         (0x1fU 
                                                          & ((IData)(0x22U) 
                                                             * 
                                                             vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                             [0U])))
                                                         ? 0ULL
                                                         : 
                                                        ((QData)((IData)(
                                                                         vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__per_bank_rsp_data_aos[
                                                                         (((IData)(0x1fU) 
                                                                           + 
                                                                           (0x1ffU 
                                                                            & ((IData)(0x22U) 
                                                                               * 
                                                                               vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                                               [0U]))) 
                                                                          >> 5U)])) 
                                                         << 
                                                         ((IData)(0x20U) 
                                                          - 
                                                          (0x1fU 
                                                           & ((IData)(0x22U) 
                                                              * 
                                                              vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                              [0U]))))) 
                                                       | ((QData)((IData)(
                                                                          vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__per_bank_rsp_data_aos[
                                                                          (0xfU 
                                                                           & (((IData)(0x22U) 
                                                                               * 
                                                                               vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                                               [0U]) 
                                                                              >> 5U))])) 
                                                          >> 
                                                          (0x1fU 
                                                           & ((IData)(0x22U) 
                                                              * 
                                                              vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                              [0U])))))
                                                    : vlSelfRef.__Vxrand_h7c43bcce__0)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_stream_arb__N8_D22_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__6__KET____DOT__xbar_arb__1(Vrtlsim_shim_VX_stream_arb__N8_D22_Az17_O3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N8_D22_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__6__KET____DOT__xbar_arb__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[7U] 
        = (1U & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__6__KET____DOT__xbar_arb__valid_in));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[8U] 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__6__KET____DOT__xbar_arb__valid_in) 
                 >> 1U));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[9U] 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__6__KET____DOT__xbar_arb__valid_in) 
                 >> 2U));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xaU] 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__6__KET____DOT__xbar_arb__valid_in) 
                 >> 3U));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xbU] 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__6__KET____DOT__xbar_arb__valid_in) 
                 >> 4U));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xcU] 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__6__KET____DOT__xbar_arb__valid_in) 
                 >> 5U));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xdU] 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__6__KET____DOT__xbar_arb__valid_in) 
                 >> 6U));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xeU] 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__6__KET____DOT__xbar_arb__valid_in) 
                 >> 7U));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_ready_out) 
                    >> 6U)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_stream_arb__N8_D22_Az17_O3___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__7__KET____DOT__xbar_arb__2(Vrtlsim_shim_VX_stream_arb__N8_D22_Az17_O3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N8_D22_Az17_O3___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__7__KET____DOT__xbar_arb__2\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_ready_out) 
                    >> 7U)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_stream_arb__N8_D22_Az17_O3___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__7__KET____DOT__xbar_arb__3(Vrtlsim_shim_VX_stream_arb__N8_D22_Az17_O3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N8_D22_Az17_O3___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__7__KET____DOT__xbar_arb__3\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs 
        = ((0x80U & (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs) 
                      | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__7__KET____DOT__xbar_arb__valid_in)) 
                     << 1U)) | ((0x40U & (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs) 
                                           | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__7__KET____DOT__xbar_arb__valid_in)) 
                                          << 1U)) | 
                                ((0x20U & (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs) 
                                            | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__7__KET____DOT__xbar_arb__valid_in)) 
                                           << 1U)) 
                                 | ((0x10U & (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs) 
                                               | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__7__KET____DOT__xbar_arb__valid_in)) 
                                              << 1U)) 
                                    | ((8U & (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs) 
                                               | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__7__KET____DOT__xbar_arb__valid_in)) 
                                              << 1U)) 
                                       | ((4U & (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs) 
                                                  | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__7__KET____DOT__xbar_arb__valid_in)) 
                                                 << 1U)) 
                                          | (2U & (
                                                   ((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs) 
                                                    | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__7__KET____DOT__xbar_arb__valid_in)) 
                                                   << 1U))))))));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot 
        = ((~ (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs)) 
           & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__7__KET____DOT__xbar_arb__valid_in));
    vlSelfRef.ready_in = ((0xffffff80U & (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                           << 7U) & (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot))) 
                          | ((0xffffffc0U & (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                              << 6U) 
                                             & (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot))) 
                             | ((0xffffffe0U & (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                                 << 5U) 
                                                & (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot))) 
                                | ((0xfffffff0U & (
                                                   ((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                                    << 4U) 
                                                   & (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot))) 
                                   | ((0xfffffff8U 
                                       & (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                           << 3U) & (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot))) 
                                      | ((0xfffffffcU 
                                          & (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                              << 2U) 
                                             & (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot))) 
                                         | (3U & ((- (IData)((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))) 
                                                  & (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot)))))))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_stream_arb__N8_D22_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__7__KET____DOT__xbar_arb__0(Vrtlsim_shim_VX_stream_arb__N8_D22_Az17_O3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N8_D22_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__7__KET____DOT__xbar_arb__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY((1U & (~ ((1U != (~ (0U 
                                                 != (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__7__KET____DOT__xbar_arb__valid_in)))) 
                                      | ((vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
                                          [0U] & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__7__KET____DOT__xbar_arb__valid_in) 
                                                  >> 
                                                  vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                  [0U])) 
                                         & ((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                            == (0xffU 
                                                & ((IData)(1U) 
                                                   << 
                                                   vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                   [0U]))))))))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_generic_arbiter.sv:99: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[0].core.mem_unit.local_mem.rsp_xbar.g_multi_inputs.g_multiple_outputs.g_xbar_arbs[7].xbar_arb.g_input_select.g_arbiter.arbiter: %t: invalid arbiter grant!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/libs/VX_generic_arbiter.sv", 99, "");
            }
        }
    }
    if (vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
        vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r 
            = ((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                ? vlSelfRef.__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in
                : vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r);
    }
    if (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
         & vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
         [0U])) {
        vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r 
            = vlSelfRef.__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in;
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r = 0U;
        vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r = 1U;
    } else {
        if (vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
            vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r 
                = (1U & (vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
                         [0U] | (~ (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))));
        }
        if ((vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
             [0U] | (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out))) {
            vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r 
                = vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out;
        }
    }
    vlSelfRef.__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in 
        = (((QData)((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                            [0U])) << 0x22U) | (0x3ffffffffULL 
                                                & ((0x10fU 
                                                    >= 
                                                    (0x1ffU 
                                                     & ((IData)(0x22U) 
                                                        * 
                                                        vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                        [0U])))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__per_bank_rsp_data_aos[
                                                                     (((IData)(0x21U) 
                                                                       + 
                                                                       (0x1ffU 
                                                                        & ((IData)(0x22U) 
                                                                           * 
                                                                           vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                                           [0U]))) 
                                                                      >> 5U)])) 
                                                     << 
                                                     ((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(0x22U) 
                                                           * 
                                                           vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                           [0U])))
                                                       ? 0x20U
                                                       : 
                                                      ((IData)(0x40U) 
                                                       - 
                                                       (0x1fU 
                                                        & ((IData)(0x22U) 
                                                           * 
                                                           vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                           [0U]))))) 
                                                    | (((0U 
                                                         == 
                                                         (0x1fU 
                                                          & ((IData)(0x22U) 
                                                             * 
                                                             vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                             [0U])))
                                                         ? 0ULL
                                                         : 
                                                        ((QData)((IData)(
                                                                         vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__per_bank_rsp_data_aos[
                                                                         (((IData)(0x1fU) 
                                                                           + 
                                                                           (0x1ffU 
                                                                            & ((IData)(0x22U) 
                                                                               * 
                                                                               vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                                               [0U]))) 
                                                                          >> 5U)])) 
                                                         << 
                                                         ((IData)(0x20U) 
                                                          - 
                                                          (0x1fU 
                                                           & ((IData)(0x22U) 
                                                              * 
                                                              vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                              [0U]))))) 
                                                       | ((QData)((IData)(
                                                                          vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__per_bank_rsp_data_aos[
                                                                          (0xfU 
                                                                           & (((IData)(0x22U) 
                                                                               * 
                                                                               vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                                               [0U]) 
                                                                              >> 5U))])) 
                                                          >> 
                                                          (0x1fU 
                                                           & ((IData)(0x22U) 
                                                              * 
                                                              vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                              [0U])))))
                                                    : vlSelfRef.__Vxrand_h7c43bcce__0)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_stream_arb__N8_D22_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__7__KET____DOT__xbar_arb__1(Vrtlsim_shim_VX_stream_arb__N8_D22_Az17_O3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N8_D22_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__7__KET____DOT__xbar_arb__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[7U] 
        = (1U & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__7__KET____DOT__xbar_arb__valid_in));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[8U] 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__7__KET____DOT__xbar_arb__valid_in) 
                 >> 1U));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[9U] 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__7__KET____DOT__xbar_arb__valid_in) 
                 >> 2U));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xaU] 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__7__KET____DOT__xbar_arb__valid_in) 
                 >> 3U));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xbU] 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__7__KET____DOT__xbar_arb__valid_in) 
                 >> 4U));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xcU] 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__7__KET____DOT__xbar_arb__valid_in) 
                 >> 5U));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xdU] 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__7__KET____DOT__xbar_arb__valid_in) 
                 >> 6U));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xeU] 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__7__KET____DOT__xbar_arb__valid_in) 
                 >> 7U));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_ready_out) 
                    >> 7U)));
}
