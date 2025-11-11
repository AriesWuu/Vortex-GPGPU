// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrtlsim_shim.h for the primary calling header

#include "Vrtlsim_shim__pch.h"
#include "Vrtlsim_shim_VX_pe_switch__pi38.h"
#include "Vrtlsim_shim__Syms.h"

VL_ATTR_COLD void Vrtlsim_shim_VX_pe_switch__pi38___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_switch__0(Vrtlsim_shim_VX_pe_switch__pi38* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_pe_switch__pi38___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_switch__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__pe_rsp_valid = ((4U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__dot8_unit__DOT__pe_serializer__DOT__shift_reg__DOT__g_shift__DOT__pipe[4U] 
                                            >> 0x10U)) 
                                     | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__muldiv_unit__DOT__rsp_buf__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                                         << 1U) | (1U 
                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__alu_int__DOT__rsp_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[6U] 
                                                      >> 0x15U))));
    vlSelfRef.__PVT__pe_rsp_data[0xbU] = ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__dot8_unit__DOT__pe_data_out[0U] 
                                           << 3U) | 
                                          (7U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__dot8_unit__DOT__pe_serializer__DOT__shift_reg__DOT__g_shift__DOT__pipe[3U] 
                                                 >> 2U)));
    vlSelfRef.__PVT__pe_rsp_data[0xcU] = ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__dot8_unit__DOT__pe_data_out[0U] 
                                           >> 0x1dU) 
                                          | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__dot8_unit__DOT__pe_data_out[1U] 
                                             << 3U));
    vlSelfRef.__PVT__pe_rsp_data[0xdU] = ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__dot8_unit__DOT__pe_data_out[1U] 
                                           >> 0x1dU) 
                                          | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__dot8_unit__DOT__pe_data_out[2U] 
                                             << 3U));
    vlSelfRef.__PVT__pe_rsp_data[0xeU] = ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__dot8_unit__DOT__pe_data_out[2U] 
                                           >> 0x1dU) 
                                          | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__dot8_unit__DOT__pe_data_out[3U] 
                                             << 3U));
    vlSelfRef.__PVT__pe_rsp_data[0xfU] = (((IData)(
                                                   (0x1fffffffffffULL 
                                                    & (((QData)((IData)(
                                                                        vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__dot8_unit__DOT__pe_serializer__DOT__shift_reg__DOT__g_shift__DOT__pipe[4U])) 
                                                        << 0x1bU) 
                                                       | ((QData)((IData)(
                                                                          vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__dot8_unit__DOT__pe_serializer__DOT__shift_reg__DOT__g_shift__DOT__pipe[3U])) 
                                                          >> 5U)))) 
                                           << 3U) | 
                                          (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__dot8_unit__DOT__pe_data_out[3U] 
                                           >> 0x1dU));
    vlSelfRef.__PVT__pe_rsp_data[0x10U] = (0xffffU 
                                           & (((IData)(
                                                       (0x1fffffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__dot8_unit__DOT__pe_serializer__DOT__shift_reg__DOT__g_shift__DOT__pipe[4U])) 
                                                            << 0x1bU) 
                                                           | ((QData)((IData)(
                                                                              vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__dot8_unit__DOT__pe_serializer__DOT__shift_reg__DOT__g_shift__DOT__pipe[3U])) 
                                                              >> 5U)))) 
                                               >> 0x1dU) 
                                              | ((IData)(
                                                         ((0x1fffffffffffULL 
                                                           & (((QData)((IData)(
                                                                               vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__dot8_unit__DOT__pe_serializer__DOT__shift_reg__DOT__g_shift__DOT__pipe[4U])) 
                                                               << 0x1bU) 
                                                              | ((QData)((IData)(
                                                                                vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__dot8_unit__DOT__pe_serializer__DOT__shift_reg__DOT__g_shift__DOT__pipe[3U])) 
                                                                 >> 5U))) 
                                                          >> 0x20U)) 
                                                 << 3U)));
    vlSelfRef.__PVT__pe_rsp_data[0U] = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_result_if__BRA__0__KET__.data[0U];
    vlSelfRef.__PVT__pe_rsp_data[1U] = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_result_if__BRA__0__KET__.data[1U];
    vlSelfRef.__PVT__pe_rsp_data[2U] = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_result_if__BRA__0__KET__.data[2U];
    vlSelfRef.__PVT__pe_rsp_data[3U] = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_result_if__BRA__0__KET__.data[3U];
    vlSelfRef.__PVT__pe_rsp_data[4U] = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_result_if__BRA__0__KET__.data[4U];
    vlSelfRef.__PVT__pe_rsp_data[5U] = ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_result_if__BRA__1__KET__.data[0U] 
                                         << 0x10U) 
                                        | vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_result_if__BRA__0__KET__.data[5U]);
    vlSelfRef.__PVT__pe_rsp_data[6U] = ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_result_if__BRA__1__KET__.data[0U] 
                                         >> 0x10U) 
                                        | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_result_if__BRA__1__KET__.data[1U] 
                                           << 0x10U));
    vlSelfRef.__PVT__pe_rsp_data[7U] = ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_result_if__BRA__1__KET__.data[1U] 
                                         >> 0x10U) 
                                        | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_result_if__BRA__1__KET__.data[2U] 
                                           << 0x10U));
    vlSelfRef.__PVT__pe_rsp_data[8U] = ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_result_if__BRA__1__KET__.data[2U] 
                                         >> 0x10U) 
                                        | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_result_if__BRA__1__KET__.data[3U] 
                                           << 0x10U));
    vlSelfRef.__PVT__pe_rsp_data[9U] = ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_result_if__BRA__1__KET__.data[3U] 
                                         >> 0x10U) 
                                        | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_result_if__BRA__1__KET__.data[4U] 
                                           << 0x10U));
    vlSelfRef.__PVT__pe_rsp_data[0xaU] = ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_result_if__BRA__1__KET__.data[4U] 
                                           >> 0x10U) 
                                          | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_result_if__BRA__1__KET__.data[5U] 
                                             << 0x10U));
    vlSelfRef.__PVT__pe_req_valid = ((((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__0__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                                       & (2U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_select))) 
                                      << 2U) | ((((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__0__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                                                  & (1U 
                                                     == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_select))) 
                                                 << 1U) 
                                                | ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__0__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                                                   & (0U 
                                                      == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_select)))));
    vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__masked_reqs 
        = ((IData)(vlSelfRef.__PVT__pe_rsp_valid) & (IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__reqs_mask));
}

VL_ATTR_COLD void Vrtlsim_shim_VX_pe_switch__pi38___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_switch__0(Vrtlsim_shim_VX_pe_switch__pi38* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_pe_switch__pi38___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_switch__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__pe_rsp_valid = ((4U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__dot8_unit__DOT__pe_serializer__DOT__shift_reg__DOT__g_shift__DOT__pipe[4U] 
                                            >> 0x10U)) 
                                     | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__muldiv_unit__DOT__rsp_buf__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                                         << 1U) | (1U 
                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__alu_int__DOT__rsp_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[6U] 
                                                      >> 0x15U))));
    vlSelfRef.__PVT__pe_rsp_data[0xbU] = ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__dot8_unit__DOT__pe_data_out[0U] 
                                           << 3U) | 
                                          (7U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__dot8_unit__DOT__pe_serializer__DOT__shift_reg__DOT__g_shift__DOT__pipe[3U] 
                                                 >> 2U)));
    vlSelfRef.__PVT__pe_rsp_data[0xcU] = ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__dot8_unit__DOT__pe_data_out[0U] 
                                           >> 0x1dU) 
                                          | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__dot8_unit__DOT__pe_data_out[1U] 
                                             << 3U));
    vlSelfRef.__PVT__pe_rsp_data[0xdU] = ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__dot8_unit__DOT__pe_data_out[1U] 
                                           >> 0x1dU) 
                                          | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__dot8_unit__DOT__pe_data_out[2U] 
                                             << 3U));
    vlSelfRef.__PVT__pe_rsp_data[0xeU] = ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__dot8_unit__DOT__pe_data_out[2U] 
                                           >> 0x1dU) 
                                          | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__dot8_unit__DOT__pe_data_out[3U] 
                                             << 3U));
    vlSelfRef.__PVT__pe_rsp_data[0xfU] = (((IData)(
                                                   (0x1fffffffffffULL 
                                                    & (((QData)((IData)(
                                                                        vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__dot8_unit__DOT__pe_serializer__DOT__shift_reg__DOT__g_shift__DOT__pipe[4U])) 
                                                        << 0x1bU) 
                                                       | ((QData)((IData)(
                                                                          vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__dot8_unit__DOT__pe_serializer__DOT__shift_reg__DOT__g_shift__DOT__pipe[3U])) 
                                                          >> 5U)))) 
                                           << 3U) | 
                                          (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__dot8_unit__DOT__pe_data_out[3U] 
                                           >> 0x1dU));
    vlSelfRef.__PVT__pe_rsp_data[0x10U] = (0xffffU 
                                           & (((IData)(
                                                       (0x1fffffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__dot8_unit__DOT__pe_serializer__DOT__shift_reg__DOT__g_shift__DOT__pipe[4U])) 
                                                            << 0x1bU) 
                                                           | ((QData)((IData)(
                                                                              vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__dot8_unit__DOT__pe_serializer__DOT__shift_reg__DOT__g_shift__DOT__pipe[3U])) 
                                                              >> 5U)))) 
                                               >> 0x1dU) 
                                              | ((IData)(
                                                         ((0x1fffffffffffULL 
                                                           & (((QData)((IData)(
                                                                               vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__dot8_unit__DOT__pe_serializer__DOT__shift_reg__DOT__g_shift__DOT__pipe[4U])) 
                                                               << 0x1bU) 
                                                              | ((QData)((IData)(
                                                                                vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__dot8_unit__DOT__pe_serializer__DOT__shift_reg__DOT__g_shift__DOT__pipe[3U])) 
                                                                 >> 5U))) 
                                                          >> 0x20U)) 
                                                 << 3U)));
    vlSelfRef.__PVT__pe_rsp_data[0U] = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_result_if__BRA__0__KET__.data[0U];
    vlSelfRef.__PVT__pe_rsp_data[1U] = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_result_if__BRA__0__KET__.data[1U];
    vlSelfRef.__PVT__pe_rsp_data[2U] = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_result_if__BRA__0__KET__.data[2U];
    vlSelfRef.__PVT__pe_rsp_data[3U] = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_result_if__BRA__0__KET__.data[3U];
    vlSelfRef.__PVT__pe_rsp_data[4U] = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_result_if__BRA__0__KET__.data[4U];
    vlSelfRef.__PVT__pe_rsp_data[5U] = ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_result_if__BRA__1__KET__.data[0U] 
                                         << 0x10U) 
                                        | vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_result_if__BRA__0__KET__.data[5U]);
    vlSelfRef.__PVT__pe_rsp_data[6U] = ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_result_if__BRA__1__KET__.data[0U] 
                                         >> 0x10U) 
                                        | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_result_if__BRA__1__KET__.data[1U] 
                                           << 0x10U));
    vlSelfRef.__PVT__pe_rsp_data[7U] = ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_result_if__BRA__1__KET__.data[1U] 
                                         >> 0x10U) 
                                        | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_result_if__BRA__1__KET__.data[2U] 
                                           << 0x10U));
    vlSelfRef.__PVT__pe_rsp_data[8U] = ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_result_if__BRA__1__KET__.data[2U] 
                                         >> 0x10U) 
                                        | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_result_if__BRA__1__KET__.data[3U] 
                                           << 0x10U));
    vlSelfRef.__PVT__pe_rsp_data[9U] = ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_result_if__BRA__1__KET__.data[3U] 
                                         >> 0x10U) 
                                        | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_result_if__BRA__1__KET__.data[4U] 
                                           << 0x10U));
    vlSelfRef.__PVT__pe_rsp_data[0xaU] = ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_result_if__BRA__1__KET__.data[4U] 
                                           >> 0x10U) 
                                          | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_result_if__BRA__1__KET__.data[5U] 
                                             << 0x10U));
    vlSelfRef.__PVT__pe_req_valid = ((((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__0__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                                       & (2U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_select))) 
                                      << 2U) | ((((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__0__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                                                  & (1U 
                                                     == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_select))) 
                                                 << 1U) 
                                                | ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__0__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                                                   & (0U 
                                                      == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_select)))));
    vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__masked_reqs 
        = ((IData)(vlSelfRef.__PVT__pe_rsp_valid) & (IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__reqs_mask));
}

VL_ATTR_COLD void Vrtlsim_shim_VX_pe_switch__pi38___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_switch__0(Vrtlsim_shim_VX_pe_switch__pi38* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_pe_switch__pi38___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_switch__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__pe_rsp_valid = ((4U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__dot8_unit__DOT__pe_serializer__DOT__shift_reg__DOT__g_shift__DOT__pipe[4U] 
                                            >> 0x10U)) 
                                     | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__muldiv_unit__DOT__rsp_buf__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                                         << 1U) | (1U 
                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__alu_int__DOT__rsp_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[6U] 
                                                      >> 0x15U))));
    vlSelfRef.__PVT__pe_rsp_data[0xbU] = ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__dot8_unit__DOT__pe_data_out[0U] 
                                           << 3U) | 
                                          (7U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__dot8_unit__DOT__pe_serializer__DOT__shift_reg__DOT__g_shift__DOT__pipe[3U] 
                                                 >> 2U)));
    vlSelfRef.__PVT__pe_rsp_data[0xcU] = ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__dot8_unit__DOT__pe_data_out[0U] 
                                           >> 0x1dU) 
                                          | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__dot8_unit__DOT__pe_data_out[1U] 
                                             << 3U));
    vlSelfRef.__PVT__pe_rsp_data[0xdU] = ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__dot8_unit__DOT__pe_data_out[1U] 
                                           >> 0x1dU) 
                                          | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__dot8_unit__DOT__pe_data_out[2U] 
                                             << 3U));
    vlSelfRef.__PVT__pe_rsp_data[0xeU] = ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__dot8_unit__DOT__pe_data_out[2U] 
                                           >> 0x1dU) 
                                          | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__dot8_unit__DOT__pe_data_out[3U] 
                                             << 3U));
    vlSelfRef.__PVT__pe_rsp_data[0xfU] = (((IData)(
                                                   (0x1fffffffffffULL 
                                                    & (((QData)((IData)(
                                                                        vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__dot8_unit__DOT__pe_serializer__DOT__shift_reg__DOT__g_shift__DOT__pipe[4U])) 
                                                        << 0x1bU) 
                                                       | ((QData)((IData)(
                                                                          vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__dot8_unit__DOT__pe_serializer__DOT__shift_reg__DOT__g_shift__DOT__pipe[3U])) 
                                                          >> 5U)))) 
                                           << 3U) | 
                                          (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__dot8_unit__DOT__pe_data_out[3U] 
                                           >> 0x1dU));
    vlSelfRef.__PVT__pe_rsp_data[0x10U] = (0xffffU 
                                           & (((IData)(
                                                       (0x1fffffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__dot8_unit__DOT__pe_serializer__DOT__shift_reg__DOT__g_shift__DOT__pipe[4U])) 
                                                            << 0x1bU) 
                                                           | ((QData)((IData)(
                                                                              vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__dot8_unit__DOT__pe_serializer__DOT__shift_reg__DOT__g_shift__DOT__pipe[3U])) 
                                                              >> 5U)))) 
                                               >> 0x1dU) 
                                              | ((IData)(
                                                         ((0x1fffffffffffULL 
                                                           & (((QData)((IData)(
                                                                               vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__dot8_unit__DOT__pe_serializer__DOT__shift_reg__DOT__g_shift__DOT__pipe[4U])) 
                                                               << 0x1bU) 
                                                              | ((QData)((IData)(
                                                                                vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__dot8_unit__DOT__pe_serializer__DOT__shift_reg__DOT__g_shift__DOT__pipe[3U])) 
                                                                 >> 5U))) 
                                                          >> 0x20U)) 
                                                 << 3U)));
    vlSelfRef.__PVT__pe_rsp_data[0U] = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_result_if__BRA__0__KET__.data[0U];
    vlSelfRef.__PVT__pe_rsp_data[1U] = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_result_if__BRA__0__KET__.data[1U];
    vlSelfRef.__PVT__pe_rsp_data[2U] = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_result_if__BRA__0__KET__.data[2U];
    vlSelfRef.__PVT__pe_rsp_data[3U] = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_result_if__BRA__0__KET__.data[3U];
    vlSelfRef.__PVT__pe_rsp_data[4U] = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_result_if__BRA__0__KET__.data[4U];
    vlSelfRef.__PVT__pe_rsp_data[5U] = ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_result_if__BRA__1__KET__.data[0U] 
                                         << 0x10U) 
                                        | vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_result_if__BRA__0__KET__.data[5U]);
    vlSelfRef.__PVT__pe_rsp_data[6U] = ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_result_if__BRA__1__KET__.data[0U] 
                                         >> 0x10U) 
                                        | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_result_if__BRA__1__KET__.data[1U] 
                                           << 0x10U));
    vlSelfRef.__PVT__pe_rsp_data[7U] = ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_result_if__BRA__1__KET__.data[1U] 
                                         >> 0x10U) 
                                        | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_result_if__BRA__1__KET__.data[2U] 
                                           << 0x10U));
    vlSelfRef.__PVT__pe_rsp_data[8U] = ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_result_if__BRA__1__KET__.data[2U] 
                                         >> 0x10U) 
                                        | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_result_if__BRA__1__KET__.data[3U] 
                                           << 0x10U));
    vlSelfRef.__PVT__pe_rsp_data[9U] = ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_result_if__BRA__1__KET__.data[3U] 
                                         >> 0x10U) 
                                        | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_result_if__BRA__1__KET__.data[4U] 
                                           << 0x10U));
    vlSelfRef.__PVT__pe_rsp_data[0xaU] = ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_result_if__BRA__1__KET__.data[4U] 
                                           >> 0x10U) 
                                          | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_result_if__BRA__1__KET__.data[5U] 
                                             << 0x10U));
    vlSelfRef.__PVT__pe_req_valid = ((((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__0__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                                       & (2U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_select))) 
                                      << 2U) | ((((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__0__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                                                  & (1U 
                                                     == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_select))) 
                                                 << 1U) 
                                                | ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__0__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                                                   & (0U 
                                                      == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_select)))));
    vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__masked_reqs 
        = ((IData)(vlSelfRef.__PVT__pe_rsp_valid) & (IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__reqs_mask));
}

VL_ATTR_COLD void Vrtlsim_shim_VX_pe_switch__pi38___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_switch__0(Vrtlsim_shim_VX_pe_switch__pi38* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_pe_switch__pi38___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_switch__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__pe_rsp_valid = ((4U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__dot8_unit__DOT__pe_serializer__DOT__shift_reg__DOT__g_shift__DOT__pipe[4U] 
                                            >> 0x10U)) 
                                     | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__muldiv_unit__DOT__rsp_buf__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                                         << 1U) | (1U 
                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__alu_int__DOT__rsp_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[6U] 
                                                      >> 0x15U))));
    vlSelfRef.__PVT__pe_rsp_data[0xbU] = ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__dot8_unit__DOT__pe_data_out[0U] 
                                           << 3U) | 
                                          (7U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__dot8_unit__DOT__pe_serializer__DOT__shift_reg__DOT__g_shift__DOT__pipe[3U] 
                                                 >> 2U)));
    vlSelfRef.__PVT__pe_rsp_data[0xcU] = ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__dot8_unit__DOT__pe_data_out[0U] 
                                           >> 0x1dU) 
                                          | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__dot8_unit__DOT__pe_data_out[1U] 
                                             << 3U));
    vlSelfRef.__PVT__pe_rsp_data[0xdU] = ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__dot8_unit__DOT__pe_data_out[1U] 
                                           >> 0x1dU) 
                                          | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__dot8_unit__DOT__pe_data_out[2U] 
                                             << 3U));
    vlSelfRef.__PVT__pe_rsp_data[0xeU] = ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__dot8_unit__DOT__pe_data_out[2U] 
                                           >> 0x1dU) 
                                          | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__dot8_unit__DOT__pe_data_out[3U] 
                                             << 3U));
    vlSelfRef.__PVT__pe_rsp_data[0xfU] = (((IData)(
                                                   (0x1fffffffffffULL 
                                                    & (((QData)((IData)(
                                                                        vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__dot8_unit__DOT__pe_serializer__DOT__shift_reg__DOT__g_shift__DOT__pipe[4U])) 
                                                        << 0x1bU) 
                                                       | ((QData)((IData)(
                                                                          vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__dot8_unit__DOT__pe_serializer__DOT__shift_reg__DOT__g_shift__DOT__pipe[3U])) 
                                                          >> 5U)))) 
                                           << 3U) | 
                                          (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__dot8_unit__DOT__pe_data_out[3U] 
                                           >> 0x1dU));
    vlSelfRef.__PVT__pe_rsp_data[0x10U] = (0xffffU 
                                           & (((IData)(
                                                       (0x1fffffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__dot8_unit__DOT__pe_serializer__DOT__shift_reg__DOT__g_shift__DOT__pipe[4U])) 
                                                            << 0x1bU) 
                                                           | ((QData)((IData)(
                                                                              vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__dot8_unit__DOT__pe_serializer__DOT__shift_reg__DOT__g_shift__DOT__pipe[3U])) 
                                                              >> 5U)))) 
                                               >> 0x1dU) 
                                              | ((IData)(
                                                         ((0x1fffffffffffULL 
                                                           & (((QData)((IData)(
                                                                               vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__dot8_unit__DOT__pe_serializer__DOT__shift_reg__DOT__g_shift__DOT__pipe[4U])) 
                                                               << 0x1bU) 
                                                              | ((QData)((IData)(
                                                                                vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__dot8_unit__DOT__pe_serializer__DOT__shift_reg__DOT__g_shift__DOT__pipe[3U])) 
                                                                 >> 5U))) 
                                                          >> 0x20U)) 
                                                 << 3U)));
    vlSelfRef.__PVT__pe_rsp_data[0U] = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_result_if__BRA__0__KET__.data[0U];
    vlSelfRef.__PVT__pe_rsp_data[1U] = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_result_if__BRA__0__KET__.data[1U];
    vlSelfRef.__PVT__pe_rsp_data[2U] = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_result_if__BRA__0__KET__.data[2U];
    vlSelfRef.__PVT__pe_rsp_data[3U] = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_result_if__BRA__0__KET__.data[3U];
    vlSelfRef.__PVT__pe_rsp_data[4U] = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_result_if__BRA__0__KET__.data[4U];
    vlSelfRef.__PVT__pe_rsp_data[5U] = ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_result_if__BRA__1__KET__.data[0U] 
                                         << 0x10U) 
                                        | vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_result_if__BRA__0__KET__.data[5U]);
    vlSelfRef.__PVT__pe_rsp_data[6U] = ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_result_if__BRA__1__KET__.data[0U] 
                                         >> 0x10U) 
                                        | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_result_if__BRA__1__KET__.data[1U] 
                                           << 0x10U));
    vlSelfRef.__PVT__pe_rsp_data[7U] = ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_result_if__BRA__1__KET__.data[1U] 
                                         >> 0x10U) 
                                        | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_result_if__BRA__1__KET__.data[2U] 
                                           << 0x10U));
    vlSelfRef.__PVT__pe_rsp_data[8U] = ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_result_if__BRA__1__KET__.data[2U] 
                                         >> 0x10U) 
                                        | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_result_if__BRA__1__KET__.data[3U] 
                                           << 0x10U));
    vlSelfRef.__PVT__pe_rsp_data[9U] = ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_result_if__BRA__1__KET__.data[3U] 
                                         >> 0x10U) 
                                        | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_result_if__BRA__1__KET__.data[4U] 
                                           << 0x10U));
    vlSelfRef.__PVT__pe_rsp_data[0xaU] = ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_result_if__BRA__1__KET__.data[4U] 
                                           >> 0x10U) 
                                          | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_result_if__BRA__1__KET__.data[5U] 
                                             << 0x10U));
    vlSelfRef.__PVT__pe_req_valid = ((((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__0__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                                       & (2U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_select))) 
                                      << 2U) | ((((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__0__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                                                  & (1U 
                                                     == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_select))) 
                                                 << 1U) 
                                                | ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__0__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                                                   & (0U 
                                                      == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_select)))));
    vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__masked_reqs 
        = ((IData)(vlSelfRef.__PVT__pe_rsp_valid) & (IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__reqs_mask));
}
