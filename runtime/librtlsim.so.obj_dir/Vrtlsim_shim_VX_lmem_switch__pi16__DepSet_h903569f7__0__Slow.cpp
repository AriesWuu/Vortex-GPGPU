// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrtlsim_shim.h for the primary calling header

#include "Vrtlsim_shim__pch.h"
#include "Vrtlsim_shim_VX_lmem_switch__pi16.h"
#include "Vrtlsim_shim__Syms.h"

extern const VlWide<9>/*287:0*/ Vrtlsim_shim__ConstPool__CONST_h52851f67_0;
extern const VlWide<18>/*575:0*/ Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0;

VL_ATTR_COLD void Vrtlsim_shim_VX_lmem_switch__pi16___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch__0(Vrtlsim_shim_VX_lmem_switch__pi16* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vrtlsim_shim_VX_lmem_switch__pi16___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vcellinp__req_global_buf__valid_in;
    __Vcellinp__req_global_buf__valid_in = 0;
    VlWide<17>/*543:0*/ __Vtemp_4;
    VlWide<9>/*287:0*/ __Vtemp_7;
    // Body
    vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__ready[1U] 
        = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_blocks__BRA__0__KET____DOT__lsu_slice__DOT__rsp_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r;
    vlSelfRef.__PVT__is_addr_local_mask = ((0xf8U & (IData)(vlSelfRef.__PVT__is_addr_local_mask)) 
                                           | ((4U & 
                                               (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0U] 
                                                >> 8U)) 
                                              | ((2U 
                                                  & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0U] 
                                                     >> 6U)) 
                                                 | (1U 
                                                    & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0U] 
                                                       >> 4U)))));
    vlSelfRef.__PVT__is_addr_local_mask = ((0xc7U & (IData)(vlSelfRef.__PVT__is_addr_local_mask)) 
                                           | ((0x20U 
                                               & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0U] 
                                                  >> 0xeU)) 
                                              | ((0x10U 
                                                  & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0U] 
                                                     >> 0xcU)) 
                                                 | (8U 
                                                    & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0U] 
                                                       >> 0xaU)))));
    vlSelfRef.__PVT__is_addr_local_mask = ((0x3fU & (IData)(vlSelfRef.__PVT__is_addr_local_mask)) 
                                           | ((0x80U 
                                               & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0U] 
                                                  >> 0x12U)) 
                                              | (0x40U 
                                                 & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0U] 
                                                    >> 0x10U))));
    vlSelfRef.__Vcellinp__rsp_arb__valid_in = (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                                                << 1U) 
                                               | (1U 
                                                  & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__core_arb__DOT__rsp_valid_out)));
    vlSelfRef.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__ready[1U] 
        = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__in_req_ready_n;
    vlSelfRef.__PVT__is_addr_global = (0U != (0xffU 
                                              & (((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0x11U] 
                                                   << 0x15U) 
                                                  | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0x11U] 
                                                     >> 0xbU)) 
                                                 & (~ (IData)(vlSelfRef.__PVT__is_addr_local_mask)))));
    vlSelfRef.__PVT__is_addr_local = (0U != (((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0x11U] 
                                               << 0x15U) 
                                              | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0x11U] 
                                                 >> 0xbU)) 
                                             & (IData)(vlSelfRef.__PVT__is_addr_local_mask)));
    __Vtemp_4[0U] = ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[0U] 
                      << 2U) | ((2U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__core_arb__DOT__rsp_data_out[0U] 
                                       >> 2U)) | (1U 
                                                  & (IData)(
                                                            (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__req_ibuf__DOT__data_table__DOT__ram
                                                             [
                                                             (7U 
                                                              & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__core_arb__DOT__rsp_data_out[0U])] 
                                                             >> 0x20U)))));
    __Vtemp_4[1U] = ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[0U] 
                      >> 0x1eU) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[1U] 
                                   << 2U));
    __Vtemp_4[2U] = ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[1U] 
                      >> 0x1eU) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[2U] 
                                   << 2U));
    __Vtemp_4[3U] = ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[2U] 
                      >> 0x1eU) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[3U] 
                                   << 2U));
    __Vtemp_4[4U] = ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[3U] 
                      >> 0x1eU) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[4U] 
                                   << 2U));
    __Vtemp_4[5U] = ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[4U] 
                      >> 0x1eU) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[5U] 
                                   << 2U));
    __Vtemp_4[6U] = ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[5U] 
                      >> 0x1eU) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[6U] 
                                   << 2U));
    __Vtemp_4[7U] = ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[6U] 
                      >> 0x1eU) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[7U] 
                                   << 2U));
    __Vtemp_4[8U] = ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                        ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U]
                        : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U]) 
                      << 0xaU) | ((0x3fcU & ((IData)(
                                                     (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__req_ibuf__DOT__data_table__DOT__ram
                                                      [
                                                      (7U 
                                                       & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__core_arb__DOT__rsp_data_out[0U])] 
                                                      >> 0x18U)) 
                                             << 2U)) 
                                  | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[7U] 
                                     >> 0x1eU)));
    __Vtemp_4[9U] = ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                        ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U]
                        : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U]) 
                      >> 0x16U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                                     ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U]
                                     : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U]) 
                                   << 0xaU));
    __Vtemp_4[0xaU] = ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                          ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U]
                          : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U]) 
                        >> 0x16U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                                       ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U]
                                       : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U]) 
                                     << 0xaU));
    __Vtemp_4[0xbU] = ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                          ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U]
                          : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U]) 
                        >> 0x16U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                                       ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U]
                                       : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U]) 
                                     << 0xaU));
    __Vtemp_4[0xcU] = ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                          ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U]
                          : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U]) 
                        >> 0x16U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                                       ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U]
                                       : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U]) 
                                     << 0xaU));
    __Vtemp_4[0xdU] = ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                          ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U]
                          : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U]) 
                        >> 0x16U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                                       ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U]
                                       : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U]) 
                                     << 0xaU));
    __Vtemp_4[0xeU] = ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                          ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U]
                          : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U]) 
                        >> 0x16U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                                       ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U]
                                       : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U]) 
                                     << 0xaU));
    __Vtemp_4[0xfU] = ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                          ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U]
                          : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U]) 
                        >> 0x16U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                                       ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U]
                                       : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U]) 
                                     << 0xaU));
    __Vtemp_4[0x10U] = ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                           ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U]
                           : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U]) 
                         >> 0x16U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                                        ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U]
                                        : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U]) 
                                      << 0xaU));
    if ((0x213U >= (0x3ffU & ((IData)(0x10aU) * (1U 
                                                 & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in))))))) {
        __Vtemp_7[0U] = (((0U == (0x1fU & ((IData)(0x10aU) 
                                           * (1U & 
                                              (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in))))))
                           ? 0U : (__Vtemp_4[((IData)(1U) 
                                              + (0x1fU 
                                                 & (((IData)(0x10aU) 
                                                     * 
                                                     (1U 
                                                      & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))) 
                                                    >> 5U)))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x10aU) 
                                                   * 
                                                   (1U 
                                                    & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))))))) 
                         | (__Vtemp_4[(0x1fU & (((IData)(0x10aU) 
                                                 * 
                                                 (1U 
                                                  & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))) 
                                                >> 5U))] 
                            >> (0x1fU & ((IData)(0x10aU) 
                                         * (1U & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))))));
        __Vtemp_7[1U] = (((0U == (0x1fU & ((IData)(0x10aU) 
                                           * (1U & 
                                              (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in))))))
                           ? 0U : (__Vtemp_4[((IData)(2U) 
                                              + (0x1fU 
                                                 & (((IData)(0x10aU) 
                                                     * 
                                                     (1U 
                                                      & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))) 
                                                    >> 5U)))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x10aU) 
                                                   * 
                                                   (1U 
                                                    & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))))))) 
                         | (__Vtemp_4[((IData)(1U) 
                                       + (0x1fU & (
                                                   ((IData)(0x10aU) 
                                                    * 
                                                    (1U 
                                                     & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))) 
                                                   >> 5U)))] 
                            >> (0x1fU & ((IData)(0x10aU) 
                                         * (1U & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))))));
        __Vtemp_7[2U] = (((0U == (0x1fU & ((IData)(0x10aU) 
                                           * (1U & 
                                              (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in))))))
                           ? 0U : (__Vtemp_4[((IData)(3U) 
                                              + (0x1fU 
                                                 & (((IData)(0x10aU) 
                                                     * 
                                                     (1U 
                                                      & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))) 
                                                    >> 5U)))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x10aU) 
                                                   * 
                                                   (1U 
                                                    & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))))))) 
                         | (__Vtemp_4[((IData)(2U) 
                                       + (0x1fU & (
                                                   ((IData)(0x10aU) 
                                                    * 
                                                    (1U 
                                                     & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))) 
                                                   >> 5U)))] 
                            >> (0x1fU & ((IData)(0x10aU) 
                                         * (1U & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))))));
        __Vtemp_7[3U] = (((0U == (0x1fU & ((IData)(0x10aU) 
                                           * (1U & 
                                              (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in))))))
                           ? 0U : (__Vtemp_4[((IData)(4U) 
                                              + (0x1fU 
                                                 & (((IData)(0x10aU) 
                                                     * 
                                                     (1U 
                                                      & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))) 
                                                    >> 5U)))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x10aU) 
                                                   * 
                                                   (1U 
                                                    & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))))))) 
                         | (__Vtemp_4[((IData)(3U) 
                                       + (0x1fU & (
                                                   ((IData)(0x10aU) 
                                                    * 
                                                    (1U 
                                                     & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))) 
                                                   >> 5U)))] 
                            >> (0x1fU & ((IData)(0x10aU) 
                                         * (1U & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))))));
        __Vtemp_7[4U] = (((0U == (0x1fU & ((IData)(0x10aU) 
                                           * (1U & 
                                              (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in))))))
                           ? 0U : (__Vtemp_4[((IData)(5U) 
                                              + (0x1fU 
                                                 & (((IData)(0x10aU) 
                                                     * 
                                                     (1U 
                                                      & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))) 
                                                    >> 5U)))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x10aU) 
                                                   * 
                                                   (1U 
                                                    & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))))))) 
                         | (__Vtemp_4[((IData)(4U) 
                                       + (0x1fU & (
                                                   ((IData)(0x10aU) 
                                                    * 
                                                    (1U 
                                                     & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))) 
                                                   >> 5U)))] 
                            >> (0x1fU & ((IData)(0x10aU) 
                                         * (1U & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))))));
        __Vtemp_7[5U] = (((0U == (0x1fU & ((IData)(0x10aU) 
                                           * (1U & 
                                              (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in))))))
                           ? 0U : (__Vtemp_4[((IData)(6U) 
                                              + (0x1fU 
                                                 & (((IData)(0x10aU) 
                                                     * 
                                                     (1U 
                                                      & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))) 
                                                    >> 5U)))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x10aU) 
                                                   * 
                                                   (1U 
                                                    & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))))))) 
                         | (__Vtemp_4[((IData)(5U) 
                                       + (0x1fU & (
                                                   ((IData)(0x10aU) 
                                                    * 
                                                    (1U 
                                                     & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))) 
                                                   >> 5U)))] 
                            >> (0x1fU & ((IData)(0x10aU) 
                                         * (1U & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))))));
        __Vtemp_7[6U] = (((0U == (0x1fU & ((IData)(0x10aU) 
                                           * (1U & 
                                              (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in))))))
                           ? 0U : (__Vtemp_4[((IData)(7U) 
                                              + (0x1fU 
                                                 & (((IData)(0x10aU) 
                                                     * 
                                                     (1U 
                                                      & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))) 
                                                    >> 5U)))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x10aU) 
                                                   * 
                                                   (1U 
                                                    & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))))))) 
                         | (__Vtemp_4[((IData)(6U) 
                                       + (0x1fU & (
                                                   ((IData)(0x10aU) 
                                                    * 
                                                    (1U 
                                                     & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))) 
                                                   >> 5U)))] 
                            >> (0x1fU & ((IData)(0x10aU) 
                                         * (1U & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))))));
        __Vtemp_7[7U] = (((0U == (0x1fU & ((IData)(0x10aU) 
                                           * (1U & 
                                              (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in))))))
                           ? 0U : (__Vtemp_4[((IData)(8U) 
                                              + (0x1fU 
                                                 & (((IData)(0x10aU) 
                                                     * 
                                                     (1U 
                                                      & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))) 
                                                    >> 5U)))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x10aU) 
                                                   * 
                                                   (1U 
                                                    & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))))))) 
                         | (__Vtemp_4[((IData)(7U) 
                                       + (0x1fU & (
                                                   ((IData)(0x10aU) 
                                                    * 
                                                    (1U 
                                                     & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))) 
                                                   >> 5U)))] 
                            >> (0x1fU & ((IData)(0x10aU) 
                                         * (1U & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))))));
        __Vtemp_7[8U] = (((0U == (0x1fU & ((IData)(0x10aU) 
                                           * (1U & 
                                              (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in))))))
                           ? 0U : (__Vtemp_4[((IData)(9U) 
                                              + (0x1fU 
                                                 & (((IData)(0x10aU) 
                                                     * 
                                                     (1U 
                                                      & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))) 
                                                    >> 5U)))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x10aU) 
                                                   * 
                                                   (1U 
                                                    & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))))))) 
                         | (__Vtemp_4[((IData)(8U) 
                                       + (0x1fU & (
                                                   ((IData)(0x10aU) 
                                                    * 
                                                    (1U 
                                                     & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))) 
                                                   >> 5U)))] 
                            >> (0x1fU & ((IData)(0x10aU) 
                                         * (1U & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))))));
    } else {
        __Vtemp_7[0U] = vlSelfRef.rsp_arb__DOT____Vxrand_h1d68f291__0[0U];
        __Vtemp_7[1U] = vlSelfRef.rsp_arb__DOT____Vxrand_h1d68f291__0[1U];
        __Vtemp_7[2U] = vlSelfRef.rsp_arb__DOT____Vxrand_h1d68f291__0[2U];
        __Vtemp_7[3U] = vlSelfRef.rsp_arb__DOT____Vxrand_h1d68f291__0[3U];
        __Vtemp_7[4U] = vlSelfRef.rsp_arb__DOT____Vxrand_h1d68f291__0[4U];
        __Vtemp_7[5U] = vlSelfRef.rsp_arb__DOT____Vxrand_h1d68f291__0[5U];
        __Vtemp_7[6U] = vlSelfRef.rsp_arb__DOT____Vxrand_h1d68f291__0[6U];
        __Vtemp_7[7U] = vlSelfRef.rsp_arb__DOT____Vxrand_h1d68f291__0[7U];
        __Vtemp_7[8U] = vlSelfRef.rsp_arb__DOT____Vxrand_h1d68f291__0[8U];
    }
    vlSelfRef.rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0U] 
        = (Vrtlsim_shim__ConstPool__CONST_h52851f67_0[0U] 
           & __Vtemp_7[0U]);
    vlSelfRef.rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[1U] 
        = (Vrtlsim_shim__ConstPool__CONST_h52851f67_0[1U] 
           & __Vtemp_7[1U]);
    vlSelfRef.rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[2U] 
        = (Vrtlsim_shim__ConstPool__CONST_h52851f67_0[2U] 
           & __Vtemp_7[2U]);
    vlSelfRef.rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[3U] 
        = (Vrtlsim_shim__ConstPool__CONST_h52851f67_0[3U] 
           & __Vtemp_7[3U]);
    vlSelfRef.rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[4U] 
        = (Vrtlsim_shim__ConstPool__CONST_h52851f67_0[4U] 
           & __Vtemp_7[4U]);
    vlSelfRef.rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[5U] 
        = (Vrtlsim_shim__ConstPool__CONST_h52851f67_0[5U] 
           & __Vtemp_7[5U]);
    vlSelfRef.rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[6U] 
        = (Vrtlsim_shim__ConstPool__CONST_h52851f67_0[6U] 
           & __Vtemp_7[6U]);
    vlSelfRef.rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[7U] 
        = (Vrtlsim_shim__ConstPool__CONST_h52851f67_0[7U] 
           & __Vtemp_7[7U]);
    vlSelfRef.rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[8U] 
        = (((IData)((0U != (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in))) 
            << 0xbU) | ((0x400U & ((~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)) 
                                   << 0xaU)) | (Vrtlsim_shim__ConstPool__CONST_h52851f67_0[8U] 
                                                & __Vtemp_7[8U])));
    vlSelfRef.__VdfgRegularize_h42ce9742_4_0 = (IData)(
                                                       (2U 
                                                        == (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)));
    __Vcellinp__req_global_buf__valid_in = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_blocks__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT__req_queue__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                                            & (IData)(vlSelfRef.__PVT__is_addr_global));
    vlSelfRef.__Vcellinp__req_local_buf__valid_in = 
        ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_blocks__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT__req_queue__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
         & (IData)(vlSelfRef.__PVT__is_addr_local));
    vlSelfRef.req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0U]);
    vlSelfRef.req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[1U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[1U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[1U]);
    vlSelfRef.req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[2U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[2U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[2U]);
    vlSelfRef.req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[3U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[3U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[3U]);
    vlSelfRef.req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[4U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[4U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[4U]);
    vlSelfRef.req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[5U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[5U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[5U]);
    vlSelfRef.req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[6U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[6U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[6U]);
    vlSelfRef.req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[7U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[7U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[7U]);
    vlSelfRef.req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[8U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[8U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[8U]);
    vlSelfRef.req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[9U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[9U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[9U]);
    vlSelfRef.req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xaU] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0xaU] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0xaU]);
    vlSelfRef.req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xbU] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0xbU] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0xbU]);
    vlSelfRef.req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xcU] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0xcU] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0xcU]);
    vlSelfRef.req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xdU] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0xdU] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0xdU]);
    vlSelfRef.req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xeU] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0xeU] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0xeU]);
    vlSelfRef.req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xfU] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0xfU] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0xfU]);
    vlSelfRef.req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0x10U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0x10U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0x10U]);
    vlSelfRef.req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0x11U] 
        = (((IData)(__Vcellinp__req_global_buf__valid_in) 
            << 0x13U) | ((0x7f800U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0x11U] 
                                      & ((~ (IData)(vlSelfRef.__PVT__is_addr_local_mask)) 
                                         << 0xbU))) 
                         | (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0x11U] 
                            & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0x11U])));
    vlSelfRef.req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0U]);
    vlSelfRef.req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[1U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[1U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[1U]);
    vlSelfRef.req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[2U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[2U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[2U]);
    vlSelfRef.req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[3U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[3U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[3U]);
    vlSelfRef.req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[4U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[4U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[4U]);
    vlSelfRef.req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[5U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[5U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[5U]);
    vlSelfRef.req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[6U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[6U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[6U]);
    vlSelfRef.req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[7U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[7U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[7U]);
    vlSelfRef.req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[8U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[8U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[8U]);
    vlSelfRef.req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[9U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[9U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[9U]);
    vlSelfRef.req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xaU] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0xaU] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0xaU]);
    vlSelfRef.req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xbU] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0xbU] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0xbU]);
    vlSelfRef.req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xcU] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0xcU] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0xcU]);
    vlSelfRef.req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xdU] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0xdU] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0xdU]);
    vlSelfRef.req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xeU] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0xeU] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0xeU]);
    vlSelfRef.req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xfU] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0xfU] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0xfU]);
    vlSelfRef.req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0x10U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0x10U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0x10U]);
    vlSelfRef.req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0x11U] 
        = (((IData)(vlSelfRef.__Vcellinp__req_local_buf__valid_in) 
            << 0x13U) | ((0xfffff800U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0x11U] 
                                         & ((IData)(vlSelfRef.__PVT__is_addr_local_mask) 
                                            << 0xbU))) 
                         | (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0x11U] 
                            & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0x11U])));
}

VL_ATTR_COLD void Vrtlsim_shim_VX_lmem_switch__pi16___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch__0(Vrtlsim_shim_VX_lmem_switch__pi16* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vrtlsim_shim_VX_lmem_switch__pi16___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vcellinp__req_global_buf__valid_in;
    __Vcellinp__req_global_buf__valid_in = 0;
    VlWide<17>/*543:0*/ __Vtemp_4;
    VlWide<9>/*287:0*/ __Vtemp_7;
    // Body
    vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__ready[1U] 
        = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_blocks__BRA__0__KET____DOT__lsu_slice__DOT__rsp_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r;
    vlSelfRef.__PVT__is_addr_local_mask = ((0xf8U & (IData)(vlSelfRef.__PVT__is_addr_local_mask)) 
                                           | ((4U & 
                                               (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0U] 
                                                >> 8U)) 
                                              | ((2U 
                                                  & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0U] 
                                                     >> 6U)) 
                                                 | (1U 
                                                    & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0U] 
                                                       >> 4U)))));
    vlSelfRef.__PVT__is_addr_local_mask = ((0xc7U & (IData)(vlSelfRef.__PVT__is_addr_local_mask)) 
                                           | ((0x20U 
                                               & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0U] 
                                                  >> 0xeU)) 
                                              | ((0x10U 
                                                  & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0U] 
                                                     >> 0xcU)) 
                                                 | (8U 
                                                    & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0U] 
                                                       >> 0xaU)))));
    vlSelfRef.__PVT__is_addr_local_mask = ((0x3fU & (IData)(vlSelfRef.__PVT__is_addr_local_mask)) 
                                           | ((0x80U 
                                               & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0U] 
                                                  >> 0x12U)) 
                                              | (0x40U 
                                                 & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0U] 
                                                    >> 0x10U))));
    vlSelfRef.__Vcellinp__rsp_arb__valid_in = (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                                                << 1U) 
                                               | (1U 
                                                  & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__core_arb__DOT__rsp_valid_out) 
                                                     >> 1U)));
    vlSelfRef.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__ready[1U] 
        = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__in_req_ready_n;
    vlSelfRef.__PVT__is_addr_global = (0U != (0xffU 
                                              & (((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0x11U] 
                                                   << 0x15U) 
                                                  | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0x11U] 
                                                     >> 0xbU)) 
                                                 & (~ (IData)(vlSelfRef.__PVT__is_addr_local_mask)))));
    vlSelfRef.__PVT__is_addr_local = (0U != (((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0x11U] 
                                               << 0x15U) 
                                              | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0x11U] 
                                                 >> 0xbU)) 
                                             & (IData)(vlSelfRef.__PVT__is_addr_local_mask)));
    __Vtemp_4[0U] = ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[0U] 
                      << 2U) | ((2U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__core_arb__DOT__rsp_data_out[8U] 
                                       >> 6U)) | (1U 
                                                  & (IData)(
                                                            (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__req_ibuf__DOT__data_table__DOT__ram
                                                             [
                                                             (7U 
                                                              & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__core_arb__DOT__rsp_data_out[8U] 
                                                                 >> 4U))] 
                                                             >> 0x20U)))));
    __Vtemp_4[1U] = ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[0U] 
                      >> 0x1eU) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[1U] 
                                   << 2U));
    __Vtemp_4[2U] = ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[1U] 
                      >> 0x1eU) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[2U] 
                                   << 2U));
    __Vtemp_4[3U] = ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[2U] 
                      >> 0x1eU) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[3U] 
                                   << 2U));
    __Vtemp_4[4U] = ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[3U] 
                      >> 0x1eU) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[4U] 
                                   << 2U));
    __Vtemp_4[5U] = ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[4U] 
                      >> 0x1eU) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[5U] 
                                   << 2U));
    __Vtemp_4[6U] = ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[5U] 
                      >> 0x1eU) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[6U] 
                                   << 2U));
    __Vtemp_4[7U] = ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[6U] 
                      >> 0x1eU) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[7U] 
                                   << 2U));
    __Vtemp_4[8U] = ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                        ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U]
                        : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U]) 
                      << 0xaU) | ((0x3fcU & ((IData)(
                                                     (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__req_ibuf__DOT__data_table__DOT__ram
                                                      [
                                                      (7U 
                                                       & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__core_arb__DOT__rsp_data_out[8U] 
                                                          >> 4U))] 
                                                      >> 0x18U)) 
                                             << 2U)) 
                                  | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[7U] 
                                     >> 0x1eU)));
    __Vtemp_4[9U] = ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                        ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U]
                        : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U]) 
                      >> 0x16U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                                     ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U]
                                     : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U]) 
                                   << 0xaU));
    __Vtemp_4[0xaU] = ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                          ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U]
                          : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U]) 
                        >> 0x16U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                                       ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U]
                                       : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U]) 
                                     << 0xaU));
    __Vtemp_4[0xbU] = ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                          ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U]
                          : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U]) 
                        >> 0x16U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                                       ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U]
                                       : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U]) 
                                     << 0xaU));
    __Vtemp_4[0xcU] = ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                          ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U]
                          : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U]) 
                        >> 0x16U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                                       ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U]
                                       : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U]) 
                                     << 0xaU));
    __Vtemp_4[0xdU] = ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                          ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U]
                          : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U]) 
                        >> 0x16U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                                       ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U]
                                       : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U]) 
                                     << 0xaU));
    __Vtemp_4[0xeU] = ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                          ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U]
                          : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U]) 
                        >> 0x16U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                                       ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U]
                                       : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U]) 
                                     << 0xaU));
    __Vtemp_4[0xfU] = ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                          ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U]
                          : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U]) 
                        >> 0x16U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                                       ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U]
                                       : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U]) 
                                     << 0xaU));
    __Vtemp_4[0x10U] = ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                           ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U]
                           : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U]) 
                         >> 0x16U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                                        ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U]
                                        : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U]) 
                                      << 0xaU));
    if ((0x213U >= (0x3ffU & ((IData)(0x10aU) * (1U 
                                                 & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in))))))) {
        __Vtemp_7[0U] = (((0U == (0x1fU & ((IData)(0x10aU) 
                                           * (1U & 
                                              (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in))))))
                           ? 0U : (__Vtemp_4[((IData)(1U) 
                                              + (0x1fU 
                                                 & (((IData)(0x10aU) 
                                                     * 
                                                     (1U 
                                                      & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))) 
                                                    >> 5U)))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x10aU) 
                                                   * 
                                                   (1U 
                                                    & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))))))) 
                         | (__Vtemp_4[(0x1fU & (((IData)(0x10aU) 
                                                 * 
                                                 (1U 
                                                  & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))) 
                                                >> 5U))] 
                            >> (0x1fU & ((IData)(0x10aU) 
                                         * (1U & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))))));
        __Vtemp_7[1U] = (((0U == (0x1fU & ((IData)(0x10aU) 
                                           * (1U & 
                                              (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in))))))
                           ? 0U : (__Vtemp_4[((IData)(2U) 
                                              + (0x1fU 
                                                 & (((IData)(0x10aU) 
                                                     * 
                                                     (1U 
                                                      & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))) 
                                                    >> 5U)))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x10aU) 
                                                   * 
                                                   (1U 
                                                    & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))))))) 
                         | (__Vtemp_4[((IData)(1U) 
                                       + (0x1fU & (
                                                   ((IData)(0x10aU) 
                                                    * 
                                                    (1U 
                                                     & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))) 
                                                   >> 5U)))] 
                            >> (0x1fU & ((IData)(0x10aU) 
                                         * (1U & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))))));
        __Vtemp_7[2U] = (((0U == (0x1fU & ((IData)(0x10aU) 
                                           * (1U & 
                                              (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in))))))
                           ? 0U : (__Vtemp_4[((IData)(3U) 
                                              + (0x1fU 
                                                 & (((IData)(0x10aU) 
                                                     * 
                                                     (1U 
                                                      & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))) 
                                                    >> 5U)))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x10aU) 
                                                   * 
                                                   (1U 
                                                    & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))))))) 
                         | (__Vtemp_4[((IData)(2U) 
                                       + (0x1fU & (
                                                   ((IData)(0x10aU) 
                                                    * 
                                                    (1U 
                                                     & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))) 
                                                   >> 5U)))] 
                            >> (0x1fU & ((IData)(0x10aU) 
                                         * (1U & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))))));
        __Vtemp_7[3U] = (((0U == (0x1fU & ((IData)(0x10aU) 
                                           * (1U & 
                                              (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in))))))
                           ? 0U : (__Vtemp_4[((IData)(4U) 
                                              + (0x1fU 
                                                 & (((IData)(0x10aU) 
                                                     * 
                                                     (1U 
                                                      & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))) 
                                                    >> 5U)))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x10aU) 
                                                   * 
                                                   (1U 
                                                    & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))))))) 
                         | (__Vtemp_4[((IData)(3U) 
                                       + (0x1fU & (
                                                   ((IData)(0x10aU) 
                                                    * 
                                                    (1U 
                                                     & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))) 
                                                   >> 5U)))] 
                            >> (0x1fU & ((IData)(0x10aU) 
                                         * (1U & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))))));
        __Vtemp_7[4U] = (((0U == (0x1fU & ((IData)(0x10aU) 
                                           * (1U & 
                                              (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in))))))
                           ? 0U : (__Vtemp_4[((IData)(5U) 
                                              + (0x1fU 
                                                 & (((IData)(0x10aU) 
                                                     * 
                                                     (1U 
                                                      & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))) 
                                                    >> 5U)))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x10aU) 
                                                   * 
                                                   (1U 
                                                    & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))))))) 
                         | (__Vtemp_4[((IData)(4U) 
                                       + (0x1fU & (
                                                   ((IData)(0x10aU) 
                                                    * 
                                                    (1U 
                                                     & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))) 
                                                   >> 5U)))] 
                            >> (0x1fU & ((IData)(0x10aU) 
                                         * (1U & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))))));
        __Vtemp_7[5U] = (((0U == (0x1fU & ((IData)(0x10aU) 
                                           * (1U & 
                                              (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in))))))
                           ? 0U : (__Vtemp_4[((IData)(6U) 
                                              + (0x1fU 
                                                 & (((IData)(0x10aU) 
                                                     * 
                                                     (1U 
                                                      & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))) 
                                                    >> 5U)))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x10aU) 
                                                   * 
                                                   (1U 
                                                    & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))))))) 
                         | (__Vtemp_4[((IData)(5U) 
                                       + (0x1fU & (
                                                   ((IData)(0x10aU) 
                                                    * 
                                                    (1U 
                                                     & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))) 
                                                   >> 5U)))] 
                            >> (0x1fU & ((IData)(0x10aU) 
                                         * (1U & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))))));
        __Vtemp_7[6U] = (((0U == (0x1fU & ((IData)(0x10aU) 
                                           * (1U & 
                                              (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in))))))
                           ? 0U : (__Vtemp_4[((IData)(7U) 
                                              + (0x1fU 
                                                 & (((IData)(0x10aU) 
                                                     * 
                                                     (1U 
                                                      & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))) 
                                                    >> 5U)))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x10aU) 
                                                   * 
                                                   (1U 
                                                    & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))))))) 
                         | (__Vtemp_4[((IData)(6U) 
                                       + (0x1fU & (
                                                   ((IData)(0x10aU) 
                                                    * 
                                                    (1U 
                                                     & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))) 
                                                   >> 5U)))] 
                            >> (0x1fU & ((IData)(0x10aU) 
                                         * (1U & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))))));
        __Vtemp_7[7U] = (((0U == (0x1fU & ((IData)(0x10aU) 
                                           * (1U & 
                                              (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in))))))
                           ? 0U : (__Vtemp_4[((IData)(8U) 
                                              + (0x1fU 
                                                 & (((IData)(0x10aU) 
                                                     * 
                                                     (1U 
                                                      & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))) 
                                                    >> 5U)))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x10aU) 
                                                   * 
                                                   (1U 
                                                    & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))))))) 
                         | (__Vtemp_4[((IData)(7U) 
                                       + (0x1fU & (
                                                   ((IData)(0x10aU) 
                                                    * 
                                                    (1U 
                                                     & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))) 
                                                   >> 5U)))] 
                            >> (0x1fU & ((IData)(0x10aU) 
                                         * (1U & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))))));
        __Vtemp_7[8U] = (((0U == (0x1fU & ((IData)(0x10aU) 
                                           * (1U & 
                                              (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in))))))
                           ? 0U : (__Vtemp_4[((IData)(9U) 
                                              + (0x1fU 
                                                 & (((IData)(0x10aU) 
                                                     * 
                                                     (1U 
                                                      & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))) 
                                                    >> 5U)))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x10aU) 
                                                   * 
                                                   (1U 
                                                    & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))))))) 
                         | (__Vtemp_4[((IData)(8U) 
                                       + (0x1fU & (
                                                   ((IData)(0x10aU) 
                                                    * 
                                                    (1U 
                                                     & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))) 
                                                   >> 5U)))] 
                            >> (0x1fU & ((IData)(0x10aU) 
                                         * (1U & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))))));
    } else {
        __Vtemp_7[0U] = vlSelfRef.rsp_arb__DOT____Vxrand_h1d68f291__0[0U];
        __Vtemp_7[1U] = vlSelfRef.rsp_arb__DOT____Vxrand_h1d68f291__0[1U];
        __Vtemp_7[2U] = vlSelfRef.rsp_arb__DOT____Vxrand_h1d68f291__0[2U];
        __Vtemp_7[3U] = vlSelfRef.rsp_arb__DOT____Vxrand_h1d68f291__0[3U];
        __Vtemp_7[4U] = vlSelfRef.rsp_arb__DOT____Vxrand_h1d68f291__0[4U];
        __Vtemp_7[5U] = vlSelfRef.rsp_arb__DOT____Vxrand_h1d68f291__0[5U];
        __Vtemp_7[6U] = vlSelfRef.rsp_arb__DOT____Vxrand_h1d68f291__0[6U];
        __Vtemp_7[7U] = vlSelfRef.rsp_arb__DOT____Vxrand_h1d68f291__0[7U];
        __Vtemp_7[8U] = vlSelfRef.rsp_arb__DOT____Vxrand_h1d68f291__0[8U];
    }
    vlSelfRef.rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0U] 
        = (Vrtlsim_shim__ConstPool__CONST_h52851f67_0[0U] 
           & __Vtemp_7[0U]);
    vlSelfRef.rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[1U] 
        = (Vrtlsim_shim__ConstPool__CONST_h52851f67_0[1U] 
           & __Vtemp_7[1U]);
    vlSelfRef.rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[2U] 
        = (Vrtlsim_shim__ConstPool__CONST_h52851f67_0[2U] 
           & __Vtemp_7[2U]);
    vlSelfRef.rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[3U] 
        = (Vrtlsim_shim__ConstPool__CONST_h52851f67_0[3U] 
           & __Vtemp_7[3U]);
    vlSelfRef.rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[4U] 
        = (Vrtlsim_shim__ConstPool__CONST_h52851f67_0[4U] 
           & __Vtemp_7[4U]);
    vlSelfRef.rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[5U] 
        = (Vrtlsim_shim__ConstPool__CONST_h52851f67_0[5U] 
           & __Vtemp_7[5U]);
    vlSelfRef.rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[6U] 
        = (Vrtlsim_shim__ConstPool__CONST_h52851f67_0[6U] 
           & __Vtemp_7[6U]);
    vlSelfRef.rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[7U] 
        = (Vrtlsim_shim__ConstPool__CONST_h52851f67_0[7U] 
           & __Vtemp_7[7U]);
    vlSelfRef.rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[8U] 
        = (((IData)((0U != (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in))) 
            << 0xbU) | ((0x400U & ((~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)) 
                                   << 0xaU)) | (Vrtlsim_shim__ConstPool__CONST_h52851f67_0[8U] 
                                                & __Vtemp_7[8U])));
    vlSelfRef.__VdfgRegularize_h42ce9742_4_0 = (IData)(
                                                       (2U 
                                                        == (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)));
    __Vcellinp__req_global_buf__valid_in = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_blocks__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT__req_queue__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                                            & (IData)(vlSelfRef.__PVT__is_addr_global));
    vlSelfRef.__Vcellinp__req_local_buf__valid_in = 
        ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_blocks__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT__req_queue__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
         & (IData)(vlSelfRef.__PVT__is_addr_local));
    vlSelfRef.req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0U]);
    vlSelfRef.req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[1U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[1U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[1U]);
    vlSelfRef.req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[2U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[2U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[2U]);
    vlSelfRef.req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[3U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[3U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[3U]);
    vlSelfRef.req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[4U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[4U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[4U]);
    vlSelfRef.req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[5U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[5U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[5U]);
    vlSelfRef.req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[6U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[6U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[6U]);
    vlSelfRef.req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[7U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[7U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[7U]);
    vlSelfRef.req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[8U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[8U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[8U]);
    vlSelfRef.req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[9U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[9U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[9U]);
    vlSelfRef.req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xaU] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0xaU] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0xaU]);
    vlSelfRef.req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xbU] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0xbU] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0xbU]);
    vlSelfRef.req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xcU] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0xcU] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0xcU]);
    vlSelfRef.req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xdU] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0xdU] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0xdU]);
    vlSelfRef.req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xeU] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0xeU] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0xeU]);
    vlSelfRef.req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xfU] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0xfU] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0xfU]);
    vlSelfRef.req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0x10U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0x10U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0x10U]);
    vlSelfRef.req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0x11U] 
        = (((IData)(__Vcellinp__req_global_buf__valid_in) 
            << 0x13U) | ((0x7f800U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0x11U] 
                                      & ((~ (IData)(vlSelfRef.__PVT__is_addr_local_mask)) 
                                         << 0xbU))) 
                         | (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0x11U] 
                            & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0x11U])));
    vlSelfRef.req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0U]);
    vlSelfRef.req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[1U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[1U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[1U]);
    vlSelfRef.req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[2U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[2U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[2U]);
    vlSelfRef.req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[3U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[3U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[3U]);
    vlSelfRef.req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[4U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[4U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[4U]);
    vlSelfRef.req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[5U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[5U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[5U]);
    vlSelfRef.req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[6U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[6U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[6U]);
    vlSelfRef.req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[7U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[7U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[7U]);
    vlSelfRef.req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[8U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[8U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[8U]);
    vlSelfRef.req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[9U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[9U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[9U]);
    vlSelfRef.req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xaU] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0xaU] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0xaU]);
    vlSelfRef.req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xbU] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0xbU] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0xbU]);
    vlSelfRef.req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xcU] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0xcU] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0xcU]);
    vlSelfRef.req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xdU] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0xdU] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0xdU]);
    vlSelfRef.req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xeU] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0xeU] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0xeU]);
    vlSelfRef.req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xfU] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0xfU] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0xfU]);
    vlSelfRef.req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0x10U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0x10U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0x10U]);
    vlSelfRef.req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0x11U] 
        = (((IData)(vlSelfRef.__Vcellinp__req_local_buf__valid_in) 
            << 0x13U) | ((0xfffff800U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0x11U] 
                                         & ((IData)(vlSelfRef.__PVT__is_addr_local_mask) 
                                            << 0xbU))) 
                         | (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0x11U] 
                            & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0x11U])));
}

VL_ATTR_COLD void Vrtlsim_shim_VX_lmem_switch__pi16___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch__0(Vrtlsim_shim_VX_lmem_switch__pi16* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vrtlsim_shim_VX_lmem_switch__pi16___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vcellinp__req_global_buf__valid_in;
    __Vcellinp__req_global_buf__valid_in = 0;
    VlWide<17>/*543:0*/ __Vtemp_4;
    VlWide<9>/*287:0*/ __Vtemp_7;
    // Body
    vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__ready[1U] 
        = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_blocks__BRA__0__KET____DOT__lsu_slice__DOT__rsp_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r;
    vlSelfRef.__PVT__is_addr_local_mask = ((0xf8U & (IData)(vlSelfRef.__PVT__is_addr_local_mask)) 
                                           | ((4U & 
                                               (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0U] 
                                                >> 8U)) 
                                              | ((2U 
                                                  & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0U] 
                                                     >> 6U)) 
                                                 | (1U 
                                                    & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0U] 
                                                       >> 4U)))));
    vlSelfRef.__PVT__is_addr_local_mask = ((0xc7U & (IData)(vlSelfRef.__PVT__is_addr_local_mask)) 
                                           | ((0x20U 
                                               & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0U] 
                                                  >> 0xeU)) 
                                              | ((0x10U 
                                                  & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0U] 
                                                     >> 0xcU)) 
                                                 | (8U 
                                                    & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0U] 
                                                       >> 0xaU)))));
    vlSelfRef.__PVT__is_addr_local_mask = ((0x3fU & (IData)(vlSelfRef.__PVT__is_addr_local_mask)) 
                                           | ((0x80U 
                                               & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0U] 
                                                  >> 0x12U)) 
                                              | (0x40U 
                                                 & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0U] 
                                                    >> 0x10U))));
    vlSelfRef.__Vcellinp__rsp_arb__valid_in = (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                                                << 1U) 
                                               | (1U 
                                                  & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__core_arb__DOT__rsp_valid_out) 
                                                     >> 2U)));
    vlSelfRef.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__ready[1U] 
        = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__in_req_ready_n;
    vlSelfRef.__PVT__is_addr_global = (0U != (0xffU 
                                              & (((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0x11U] 
                                                   << 0x15U) 
                                                  | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0x11U] 
                                                     >> 0xbU)) 
                                                 & (~ (IData)(vlSelfRef.__PVT__is_addr_local_mask)))));
    vlSelfRef.__PVT__is_addr_local = (0U != (((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0x11U] 
                                               << 0x15U) 
                                              | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0x11U] 
                                                 >> 0xbU)) 
                                             & (IData)(vlSelfRef.__PVT__is_addr_local_mask)));
    __Vtemp_4[0U] = ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[0U] 
                      << 2U) | ((2U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__core_arb__DOT__rsp_data_out[0x10U] 
                                       >> 0xaU)) | 
                                (1U & (IData)((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__req_ibuf__DOT__data_table__DOT__ram
                                               [(7U 
                                                 & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__core_arb__DOT__rsp_data_out[0x10U] 
                                                    >> 8U))] 
                                               >> 0x20U)))));
    __Vtemp_4[1U] = ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[0U] 
                      >> 0x1eU) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[1U] 
                                   << 2U));
    __Vtemp_4[2U] = ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[1U] 
                      >> 0x1eU) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[2U] 
                                   << 2U));
    __Vtemp_4[3U] = ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[2U] 
                      >> 0x1eU) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[3U] 
                                   << 2U));
    __Vtemp_4[4U] = ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[3U] 
                      >> 0x1eU) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[4U] 
                                   << 2U));
    __Vtemp_4[5U] = ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[4U] 
                      >> 0x1eU) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[5U] 
                                   << 2U));
    __Vtemp_4[6U] = ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[5U] 
                      >> 0x1eU) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[6U] 
                                   << 2U));
    __Vtemp_4[7U] = ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[6U] 
                      >> 0x1eU) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[7U] 
                                   << 2U));
    __Vtemp_4[8U] = ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                        ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U]
                        : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U]) 
                      << 0xaU) | ((0x3fcU & ((IData)(
                                                     (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__req_ibuf__DOT__data_table__DOT__ram
                                                      [
                                                      (7U 
                                                       & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__core_arb__DOT__rsp_data_out[0x10U] 
                                                          >> 8U))] 
                                                      >> 0x18U)) 
                                             << 2U)) 
                                  | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[7U] 
                                     >> 0x1eU)));
    __Vtemp_4[9U] = ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                        ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U]
                        : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U]) 
                      >> 0x16U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                                     ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U]
                                     : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U]) 
                                   << 0xaU));
    __Vtemp_4[0xaU] = ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                          ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U]
                          : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U]) 
                        >> 0x16U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                                       ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U]
                                       : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U]) 
                                     << 0xaU));
    __Vtemp_4[0xbU] = ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                          ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U]
                          : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U]) 
                        >> 0x16U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                                       ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U]
                                       : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U]) 
                                     << 0xaU));
    __Vtemp_4[0xcU] = ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                          ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U]
                          : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U]) 
                        >> 0x16U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                                       ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U]
                                       : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U]) 
                                     << 0xaU));
    __Vtemp_4[0xdU] = ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                          ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U]
                          : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U]) 
                        >> 0x16U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                                       ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U]
                                       : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U]) 
                                     << 0xaU));
    __Vtemp_4[0xeU] = ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                          ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U]
                          : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U]) 
                        >> 0x16U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                                       ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U]
                                       : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U]) 
                                     << 0xaU));
    __Vtemp_4[0xfU] = ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                          ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U]
                          : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U]) 
                        >> 0x16U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                                       ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U]
                                       : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U]) 
                                     << 0xaU));
    __Vtemp_4[0x10U] = ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                           ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U]
                           : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U]) 
                         >> 0x16U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                                        ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U]
                                        : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U]) 
                                      << 0xaU));
    if ((0x213U >= (0x3ffU & ((IData)(0x10aU) * (1U 
                                                 & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in))))))) {
        __Vtemp_7[0U] = (((0U == (0x1fU & ((IData)(0x10aU) 
                                           * (1U & 
                                              (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in))))))
                           ? 0U : (__Vtemp_4[((IData)(1U) 
                                              + (0x1fU 
                                                 & (((IData)(0x10aU) 
                                                     * 
                                                     (1U 
                                                      & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))) 
                                                    >> 5U)))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x10aU) 
                                                   * 
                                                   (1U 
                                                    & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))))))) 
                         | (__Vtemp_4[(0x1fU & (((IData)(0x10aU) 
                                                 * 
                                                 (1U 
                                                  & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))) 
                                                >> 5U))] 
                            >> (0x1fU & ((IData)(0x10aU) 
                                         * (1U & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))))));
        __Vtemp_7[1U] = (((0U == (0x1fU & ((IData)(0x10aU) 
                                           * (1U & 
                                              (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in))))))
                           ? 0U : (__Vtemp_4[((IData)(2U) 
                                              + (0x1fU 
                                                 & (((IData)(0x10aU) 
                                                     * 
                                                     (1U 
                                                      & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))) 
                                                    >> 5U)))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x10aU) 
                                                   * 
                                                   (1U 
                                                    & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))))))) 
                         | (__Vtemp_4[((IData)(1U) 
                                       + (0x1fU & (
                                                   ((IData)(0x10aU) 
                                                    * 
                                                    (1U 
                                                     & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))) 
                                                   >> 5U)))] 
                            >> (0x1fU & ((IData)(0x10aU) 
                                         * (1U & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))))));
        __Vtemp_7[2U] = (((0U == (0x1fU & ((IData)(0x10aU) 
                                           * (1U & 
                                              (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in))))))
                           ? 0U : (__Vtemp_4[((IData)(3U) 
                                              + (0x1fU 
                                                 & (((IData)(0x10aU) 
                                                     * 
                                                     (1U 
                                                      & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))) 
                                                    >> 5U)))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x10aU) 
                                                   * 
                                                   (1U 
                                                    & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))))))) 
                         | (__Vtemp_4[((IData)(2U) 
                                       + (0x1fU & (
                                                   ((IData)(0x10aU) 
                                                    * 
                                                    (1U 
                                                     & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))) 
                                                   >> 5U)))] 
                            >> (0x1fU & ((IData)(0x10aU) 
                                         * (1U & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))))));
        __Vtemp_7[3U] = (((0U == (0x1fU & ((IData)(0x10aU) 
                                           * (1U & 
                                              (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in))))))
                           ? 0U : (__Vtemp_4[((IData)(4U) 
                                              + (0x1fU 
                                                 & (((IData)(0x10aU) 
                                                     * 
                                                     (1U 
                                                      & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))) 
                                                    >> 5U)))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x10aU) 
                                                   * 
                                                   (1U 
                                                    & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))))))) 
                         | (__Vtemp_4[((IData)(3U) 
                                       + (0x1fU & (
                                                   ((IData)(0x10aU) 
                                                    * 
                                                    (1U 
                                                     & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))) 
                                                   >> 5U)))] 
                            >> (0x1fU & ((IData)(0x10aU) 
                                         * (1U & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))))));
        __Vtemp_7[4U] = (((0U == (0x1fU & ((IData)(0x10aU) 
                                           * (1U & 
                                              (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in))))))
                           ? 0U : (__Vtemp_4[((IData)(5U) 
                                              + (0x1fU 
                                                 & (((IData)(0x10aU) 
                                                     * 
                                                     (1U 
                                                      & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))) 
                                                    >> 5U)))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x10aU) 
                                                   * 
                                                   (1U 
                                                    & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))))))) 
                         | (__Vtemp_4[((IData)(4U) 
                                       + (0x1fU & (
                                                   ((IData)(0x10aU) 
                                                    * 
                                                    (1U 
                                                     & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))) 
                                                   >> 5U)))] 
                            >> (0x1fU & ((IData)(0x10aU) 
                                         * (1U & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))))));
        __Vtemp_7[5U] = (((0U == (0x1fU & ((IData)(0x10aU) 
                                           * (1U & 
                                              (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in))))))
                           ? 0U : (__Vtemp_4[((IData)(6U) 
                                              + (0x1fU 
                                                 & (((IData)(0x10aU) 
                                                     * 
                                                     (1U 
                                                      & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))) 
                                                    >> 5U)))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x10aU) 
                                                   * 
                                                   (1U 
                                                    & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))))))) 
                         | (__Vtemp_4[((IData)(5U) 
                                       + (0x1fU & (
                                                   ((IData)(0x10aU) 
                                                    * 
                                                    (1U 
                                                     & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))) 
                                                   >> 5U)))] 
                            >> (0x1fU & ((IData)(0x10aU) 
                                         * (1U & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))))));
        __Vtemp_7[6U] = (((0U == (0x1fU & ((IData)(0x10aU) 
                                           * (1U & 
                                              (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in))))))
                           ? 0U : (__Vtemp_4[((IData)(7U) 
                                              + (0x1fU 
                                                 & (((IData)(0x10aU) 
                                                     * 
                                                     (1U 
                                                      & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))) 
                                                    >> 5U)))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x10aU) 
                                                   * 
                                                   (1U 
                                                    & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))))))) 
                         | (__Vtemp_4[((IData)(6U) 
                                       + (0x1fU & (
                                                   ((IData)(0x10aU) 
                                                    * 
                                                    (1U 
                                                     & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))) 
                                                   >> 5U)))] 
                            >> (0x1fU & ((IData)(0x10aU) 
                                         * (1U & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))))));
        __Vtemp_7[7U] = (((0U == (0x1fU & ((IData)(0x10aU) 
                                           * (1U & 
                                              (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in))))))
                           ? 0U : (__Vtemp_4[((IData)(8U) 
                                              + (0x1fU 
                                                 & (((IData)(0x10aU) 
                                                     * 
                                                     (1U 
                                                      & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))) 
                                                    >> 5U)))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x10aU) 
                                                   * 
                                                   (1U 
                                                    & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))))))) 
                         | (__Vtemp_4[((IData)(7U) 
                                       + (0x1fU & (
                                                   ((IData)(0x10aU) 
                                                    * 
                                                    (1U 
                                                     & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))) 
                                                   >> 5U)))] 
                            >> (0x1fU & ((IData)(0x10aU) 
                                         * (1U & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))))));
        __Vtemp_7[8U] = (((0U == (0x1fU & ((IData)(0x10aU) 
                                           * (1U & 
                                              (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in))))))
                           ? 0U : (__Vtemp_4[((IData)(9U) 
                                              + (0x1fU 
                                                 & (((IData)(0x10aU) 
                                                     * 
                                                     (1U 
                                                      & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))) 
                                                    >> 5U)))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x10aU) 
                                                   * 
                                                   (1U 
                                                    & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))))))) 
                         | (__Vtemp_4[((IData)(8U) 
                                       + (0x1fU & (
                                                   ((IData)(0x10aU) 
                                                    * 
                                                    (1U 
                                                     & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))) 
                                                   >> 5U)))] 
                            >> (0x1fU & ((IData)(0x10aU) 
                                         * (1U & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))))));
    } else {
        __Vtemp_7[0U] = vlSelfRef.rsp_arb__DOT____Vxrand_h1d68f291__0[0U];
        __Vtemp_7[1U] = vlSelfRef.rsp_arb__DOT____Vxrand_h1d68f291__0[1U];
        __Vtemp_7[2U] = vlSelfRef.rsp_arb__DOT____Vxrand_h1d68f291__0[2U];
        __Vtemp_7[3U] = vlSelfRef.rsp_arb__DOT____Vxrand_h1d68f291__0[3U];
        __Vtemp_7[4U] = vlSelfRef.rsp_arb__DOT____Vxrand_h1d68f291__0[4U];
        __Vtemp_7[5U] = vlSelfRef.rsp_arb__DOT____Vxrand_h1d68f291__0[5U];
        __Vtemp_7[6U] = vlSelfRef.rsp_arb__DOT____Vxrand_h1d68f291__0[6U];
        __Vtemp_7[7U] = vlSelfRef.rsp_arb__DOT____Vxrand_h1d68f291__0[7U];
        __Vtemp_7[8U] = vlSelfRef.rsp_arb__DOT____Vxrand_h1d68f291__0[8U];
    }
    vlSelfRef.rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0U] 
        = (Vrtlsim_shim__ConstPool__CONST_h52851f67_0[0U] 
           & __Vtemp_7[0U]);
    vlSelfRef.rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[1U] 
        = (Vrtlsim_shim__ConstPool__CONST_h52851f67_0[1U] 
           & __Vtemp_7[1U]);
    vlSelfRef.rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[2U] 
        = (Vrtlsim_shim__ConstPool__CONST_h52851f67_0[2U] 
           & __Vtemp_7[2U]);
    vlSelfRef.rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[3U] 
        = (Vrtlsim_shim__ConstPool__CONST_h52851f67_0[3U] 
           & __Vtemp_7[3U]);
    vlSelfRef.rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[4U] 
        = (Vrtlsim_shim__ConstPool__CONST_h52851f67_0[4U] 
           & __Vtemp_7[4U]);
    vlSelfRef.rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[5U] 
        = (Vrtlsim_shim__ConstPool__CONST_h52851f67_0[5U] 
           & __Vtemp_7[5U]);
    vlSelfRef.rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[6U] 
        = (Vrtlsim_shim__ConstPool__CONST_h52851f67_0[6U] 
           & __Vtemp_7[6U]);
    vlSelfRef.rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[7U] 
        = (Vrtlsim_shim__ConstPool__CONST_h52851f67_0[7U] 
           & __Vtemp_7[7U]);
    vlSelfRef.rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[8U] 
        = (((IData)((0U != (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in))) 
            << 0xbU) | ((0x400U & ((~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)) 
                                   << 0xaU)) | (Vrtlsim_shim__ConstPool__CONST_h52851f67_0[8U] 
                                                & __Vtemp_7[8U])));
    vlSelfRef.__VdfgRegularize_h42ce9742_4_0 = (IData)(
                                                       (2U 
                                                        == (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)));
    __Vcellinp__req_global_buf__valid_in = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_blocks__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT__req_queue__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                                            & (IData)(vlSelfRef.__PVT__is_addr_global));
    vlSelfRef.__Vcellinp__req_local_buf__valid_in = 
        ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_blocks__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT__req_queue__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
         & (IData)(vlSelfRef.__PVT__is_addr_local));
    vlSelfRef.req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0U]);
    vlSelfRef.req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[1U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[1U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[1U]);
    vlSelfRef.req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[2U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[2U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[2U]);
    vlSelfRef.req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[3U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[3U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[3U]);
    vlSelfRef.req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[4U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[4U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[4U]);
    vlSelfRef.req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[5U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[5U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[5U]);
    vlSelfRef.req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[6U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[6U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[6U]);
    vlSelfRef.req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[7U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[7U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[7U]);
    vlSelfRef.req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[8U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[8U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[8U]);
    vlSelfRef.req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[9U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[9U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[9U]);
    vlSelfRef.req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xaU] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0xaU] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0xaU]);
    vlSelfRef.req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xbU] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0xbU] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0xbU]);
    vlSelfRef.req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xcU] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0xcU] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0xcU]);
    vlSelfRef.req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xdU] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0xdU] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0xdU]);
    vlSelfRef.req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xeU] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0xeU] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0xeU]);
    vlSelfRef.req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xfU] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0xfU] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0xfU]);
    vlSelfRef.req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0x10U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0x10U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0x10U]);
    vlSelfRef.req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0x11U] 
        = (((IData)(__Vcellinp__req_global_buf__valid_in) 
            << 0x13U) | ((0x7f800U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0x11U] 
                                      & ((~ (IData)(vlSelfRef.__PVT__is_addr_local_mask)) 
                                         << 0xbU))) 
                         | (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0x11U] 
                            & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0x11U])));
    vlSelfRef.req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0U]);
    vlSelfRef.req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[1U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[1U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[1U]);
    vlSelfRef.req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[2U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[2U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[2U]);
    vlSelfRef.req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[3U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[3U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[3U]);
    vlSelfRef.req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[4U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[4U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[4U]);
    vlSelfRef.req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[5U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[5U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[5U]);
    vlSelfRef.req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[6U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[6U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[6U]);
    vlSelfRef.req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[7U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[7U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[7U]);
    vlSelfRef.req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[8U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[8U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[8U]);
    vlSelfRef.req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[9U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[9U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[9U]);
    vlSelfRef.req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xaU] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0xaU] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0xaU]);
    vlSelfRef.req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xbU] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0xbU] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0xbU]);
    vlSelfRef.req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xcU] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0xcU] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0xcU]);
    vlSelfRef.req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xdU] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0xdU] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0xdU]);
    vlSelfRef.req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xeU] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0xeU] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0xeU]);
    vlSelfRef.req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xfU] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0xfU] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0xfU]);
    vlSelfRef.req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0x10U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0x10U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0x10U]);
    vlSelfRef.req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0x11U] 
        = (((IData)(vlSelfRef.__Vcellinp__req_local_buf__valid_in) 
            << 0x13U) | ((0xfffff800U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0x11U] 
                                         & ((IData)(vlSelfRef.__PVT__is_addr_local_mask) 
                                            << 0xbU))) 
                         | (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0x11U] 
                            & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0x11U])));
}

VL_ATTR_COLD void Vrtlsim_shim_VX_lmem_switch__pi16___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch__0(Vrtlsim_shim_VX_lmem_switch__pi16* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vrtlsim_shim_VX_lmem_switch__pi16___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vcellinp__req_global_buf__valid_in;
    __Vcellinp__req_global_buf__valid_in = 0;
    VlWide<17>/*543:0*/ __Vtemp_4;
    VlWide<9>/*287:0*/ __Vtemp_7;
    // Body
    vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__ready[1U] 
        = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_blocks__BRA__0__KET____DOT__lsu_slice__DOT__rsp_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r;
    vlSelfRef.__PVT__is_addr_local_mask = ((0xf8U & (IData)(vlSelfRef.__PVT__is_addr_local_mask)) 
                                           | ((4U & 
                                               (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0U] 
                                                >> 8U)) 
                                              | ((2U 
                                                  & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0U] 
                                                     >> 6U)) 
                                                 | (1U 
                                                    & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0U] 
                                                       >> 4U)))));
    vlSelfRef.__PVT__is_addr_local_mask = ((0xc7U & (IData)(vlSelfRef.__PVT__is_addr_local_mask)) 
                                           | ((0x20U 
                                               & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0U] 
                                                  >> 0xeU)) 
                                              | ((0x10U 
                                                  & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0U] 
                                                     >> 0xcU)) 
                                                 | (8U 
                                                    & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0U] 
                                                       >> 0xaU)))));
    vlSelfRef.__PVT__is_addr_local_mask = ((0x3fU & (IData)(vlSelfRef.__PVT__is_addr_local_mask)) 
                                           | ((0x80U 
                                               & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0U] 
                                                  >> 0x12U)) 
                                              | (0x40U 
                                                 & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0U] 
                                                    >> 0x10U))));
    vlSelfRef.__Vcellinp__rsp_arb__valid_in = (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                                                << 1U) 
                                               | (1U 
                                                  & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__core_arb__DOT__rsp_valid_out) 
                                                     >> 3U)));
    vlSelfRef.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__ready[1U] 
        = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__in_req_ready_n;
    vlSelfRef.__PVT__is_addr_global = (0U != (0xffU 
                                              & (((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0x11U] 
                                                   << 0x15U) 
                                                  | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0x11U] 
                                                     >> 0xbU)) 
                                                 & (~ (IData)(vlSelfRef.__PVT__is_addr_local_mask)))));
    vlSelfRef.__PVT__is_addr_local = (0U != (((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0x11U] 
                                               << 0x15U) 
                                              | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0x11U] 
                                                 >> 0xbU)) 
                                             & (IData)(vlSelfRef.__PVT__is_addr_local_mask)));
    __Vtemp_4[0U] = ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[0U] 
                      << 2U) | ((2U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__core_arb__DOT__rsp_data_out[0x18U] 
                                       >> 0xeU)) | 
                                (1U & (IData)((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__req_ibuf__DOT__data_table__DOT__ram
                                               [(7U 
                                                 & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__core_arb__DOT__rsp_data_out[0x18U] 
                                                    >> 0xcU))] 
                                               >> 0x20U)))));
    __Vtemp_4[1U] = ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[0U] 
                      >> 0x1eU) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[1U] 
                                   << 2U));
    __Vtemp_4[2U] = ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[1U] 
                      >> 0x1eU) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[2U] 
                                   << 2U));
    __Vtemp_4[3U] = ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[2U] 
                      >> 0x1eU) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[3U] 
                                   << 2U));
    __Vtemp_4[4U] = ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[3U] 
                      >> 0x1eU) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[4U] 
                                   << 2U));
    __Vtemp_4[5U] = ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[4U] 
                      >> 0x1eU) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[5U] 
                                   << 2U));
    __Vtemp_4[6U] = ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[5U] 
                      >> 0x1eU) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[6U] 
                                   << 2U));
    __Vtemp_4[7U] = ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[6U] 
                      >> 0x1eU) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[7U] 
                                   << 2U));
    __Vtemp_4[8U] = ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                        ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U]
                        : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U]) 
                      << 0xaU) | ((0x3fcU & ((IData)(
                                                     (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__req_ibuf__DOT__data_table__DOT__ram
                                                      [
                                                      (7U 
                                                       & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__core_arb__DOT__rsp_data_out[0x18U] 
                                                          >> 0xcU))] 
                                                      >> 0x18U)) 
                                             << 2U)) 
                                  | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT____Vcellout__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__in_rsp_data[7U] 
                                     >> 0x1eU)));
    __Vtemp_4[9U] = ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                        ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U]
                        : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U]) 
                      >> 0x16U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                                     ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U]
                                     : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U]) 
                                   << 0xaU));
    __Vtemp_4[0xaU] = ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                          ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U]
                          : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U]) 
                        >> 0x16U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                                       ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U]
                                       : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U]) 
                                     << 0xaU));
    __Vtemp_4[0xbU] = ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                          ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U]
                          : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U]) 
                        >> 0x16U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                                       ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U]
                                       : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U]) 
                                     << 0xaU));
    __Vtemp_4[0xcU] = ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                          ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U]
                          : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U]) 
                        >> 0x16U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                                       ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U]
                                       : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U]) 
                                     << 0xaU));
    __Vtemp_4[0xdU] = ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                          ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U]
                          : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U]) 
                        >> 0x16U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                                       ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U]
                                       : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U]) 
                                     << 0xaU));
    __Vtemp_4[0xeU] = ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                          ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U]
                          : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U]) 
                        >> 0x16U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                                       ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U]
                                       : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U]) 
                                     << 0xaU));
    __Vtemp_4[0xfU] = ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                          ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U]
                          : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U]) 
                        >> 0x16U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                                       ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U]
                                       : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U]) 
                                     << 0xaU));
    __Vtemp_4[0x10U] = ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                           ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U]
                           : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U]) 
                         >> 0x16U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                                        ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U]
                                        : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_rsp_arb__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U]) 
                                      << 0xaU));
    if ((0x213U >= (0x3ffU & ((IData)(0x10aU) * (1U 
                                                 & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in))))))) {
        __Vtemp_7[0U] = (((0U == (0x1fU & ((IData)(0x10aU) 
                                           * (1U & 
                                              (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in))))))
                           ? 0U : (__Vtemp_4[((IData)(1U) 
                                              + (0x1fU 
                                                 & (((IData)(0x10aU) 
                                                     * 
                                                     (1U 
                                                      & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))) 
                                                    >> 5U)))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x10aU) 
                                                   * 
                                                   (1U 
                                                    & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))))))) 
                         | (__Vtemp_4[(0x1fU & (((IData)(0x10aU) 
                                                 * 
                                                 (1U 
                                                  & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))) 
                                                >> 5U))] 
                            >> (0x1fU & ((IData)(0x10aU) 
                                         * (1U & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))))));
        __Vtemp_7[1U] = (((0U == (0x1fU & ((IData)(0x10aU) 
                                           * (1U & 
                                              (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in))))))
                           ? 0U : (__Vtemp_4[((IData)(2U) 
                                              + (0x1fU 
                                                 & (((IData)(0x10aU) 
                                                     * 
                                                     (1U 
                                                      & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))) 
                                                    >> 5U)))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x10aU) 
                                                   * 
                                                   (1U 
                                                    & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))))))) 
                         | (__Vtemp_4[((IData)(1U) 
                                       + (0x1fU & (
                                                   ((IData)(0x10aU) 
                                                    * 
                                                    (1U 
                                                     & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))) 
                                                   >> 5U)))] 
                            >> (0x1fU & ((IData)(0x10aU) 
                                         * (1U & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))))));
        __Vtemp_7[2U] = (((0U == (0x1fU & ((IData)(0x10aU) 
                                           * (1U & 
                                              (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in))))))
                           ? 0U : (__Vtemp_4[((IData)(3U) 
                                              + (0x1fU 
                                                 & (((IData)(0x10aU) 
                                                     * 
                                                     (1U 
                                                      & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))) 
                                                    >> 5U)))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x10aU) 
                                                   * 
                                                   (1U 
                                                    & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))))))) 
                         | (__Vtemp_4[((IData)(2U) 
                                       + (0x1fU & (
                                                   ((IData)(0x10aU) 
                                                    * 
                                                    (1U 
                                                     & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))) 
                                                   >> 5U)))] 
                            >> (0x1fU & ((IData)(0x10aU) 
                                         * (1U & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))))));
        __Vtemp_7[3U] = (((0U == (0x1fU & ((IData)(0x10aU) 
                                           * (1U & 
                                              (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in))))))
                           ? 0U : (__Vtemp_4[((IData)(4U) 
                                              + (0x1fU 
                                                 & (((IData)(0x10aU) 
                                                     * 
                                                     (1U 
                                                      & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))) 
                                                    >> 5U)))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x10aU) 
                                                   * 
                                                   (1U 
                                                    & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))))))) 
                         | (__Vtemp_4[((IData)(3U) 
                                       + (0x1fU & (
                                                   ((IData)(0x10aU) 
                                                    * 
                                                    (1U 
                                                     & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))) 
                                                   >> 5U)))] 
                            >> (0x1fU & ((IData)(0x10aU) 
                                         * (1U & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))))));
        __Vtemp_7[4U] = (((0U == (0x1fU & ((IData)(0x10aU) 
                                           * (1U & 
                                              (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in))))))
                           ? 0U : (__Vtemp_4[((IData)(5U) 
                                              + (0x1fU 
                                                 & (((IData)(0x10aU) 
                                                     * 
                                                     (1U 
                                                      & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))) 
                                                    >> 5U)))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x10aU) 
                                                   * 
                                                   (1U 
                                                    & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))))))) 
                         | (__Vtemp_4[((IData)(4U) 
                                       + (0x1fU & (
                                                   ((IData)(0x10aU) 
                                                    * 
                                                    (1U 
                                                     & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))) 
                                                   >> 5U)))] 
                            >> (0x1fU & ((IData)(0x10aU) 
                                         * (1U & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))))));
        __Vtemp_7[5U] = (((0U == (0x1fU & ((IData)(0x10aU) 
                                           * (1U & 
                                              (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in))))))
                           ? 0U : (__Vtemp_4[((IData)(6U) 
                                              + (0x1fU 
                                                 & (((IData)(0x10aU) 
                                                     * 
                                                     (1U 
                                                      & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))) 
                                                    >> 5U)))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x10aU) 
                                                   * 
                                                   (1U 
                                                    & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))))))) 
                         | (__Vtemp_4[((IData)(5U) 
                                       + (0x1fU & (
                                                   ((IData)(0x10aU) 
                                                    * 
                                                    (1U 
                                                     & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))) 
                                                   >> 5U)))] 
                            >> (0x1fU & ((IData)(0x10aU) 
                                         * (1U & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))))));
        __Vtemp_7[6U] = (((0U == (0x1fU & ((IData)(0x10aU) 
                                           * (1U & 
                                              (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in))))))
                           ? 0U : (__Vtemp_4[((IData)(7U) 
                                              + (0x1fU 
                                                 & (((IData)(0x10aU) 
                                                     * 
                                                     (1U 
                                                      & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))) 
                                                    >> 5U)))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x10aU) 
                                                   * 
                                                   (1U 
                                                    & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))))))) 
                         | (__Vtemp_4[((IData)(6U) 
                                       + (0x1fU & (
                                                   ((IData)(0x10aU) 
                                                    * 
                                                    (1U 
                                                     & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))) 
                                                   >> 5U)))] 
                            >> (0x1fU & ((IData)(0x10aU) 
                                         * (1U & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))))));
        __Vtemp_7[7U] = (((0U == (0x1fU & ((IData)(0x10aU) 
                                           * (1U & 
                                              (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in))))))
                           ? 0U : (__Vtemp_4[((IData)(8U) 
                                              + (0x1fU 
                                                 & (((IData)(0x10aU) 
                                                     * 
                                                     (1U 
                                                      & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))) 
                                                    >> 5U)))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x10aU) 
                                                   * 
                                                   (1U 
                                                    & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))))))) 
                         | (__Vtemp_4[((IData)(7U) 
                                       + (0x1fU & (
                                                   ((IData)(0x10aU) 
                                                    * 
                                                    (1U 
                                                     & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))) 
                                                   >> 5U)))] 
                            >> (0x1fU & ((IData)(0x10aU) 
                                         * (1U & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))))));
        __Vtemp_7[8U] = (((0U == (0x1fU & ((IData)(0x10aU) 
                                           * (1U & 
                                              (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in))))))
                           ? 0U : (__Vtemp_4[((IData)(9U) 
                                              + (0x1fU 
                                                 & (((IData)(0x10aU) 
                                                     * 
                                                     (1U 
                                                      & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))) 
                                                    >> 5U)))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x10aU) 
                                                   * 
                                                   (1U 
                                                    & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))))))) 
                         | (__Vtemp_4[((IData)(8U) 
                                       + (0x1fU & (
                                                   ((IData)(0x10aU) 
                                                    * 
                                                    (1U 
                                                     & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))) 
                                                   >> 5U)))] 
                            >> (0x1fU & ((IData)(0x10aU) 
                                         * (1U & (~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)))))));
    } else {
        __Vtemp_7[0U] = vlSelfRef.rsp_arb__DOT____Vxrand_h1d68f291__0[0U];
        __Vtemp_7[1U] = vlSelfRef.rsp_arb__DOT____Vxrand_h1d68f291__0[1U];
        __Vtemp_7[2U] = vlSelfRef.rsp_arb__DOT____Vxrand_h1d68f291__0[2U];
        __Vtemp_7[3U] = vlSelfRef.rsp_arb__DOT____Vxrand_h1d68f291__0[3U];
        __Vtemp_7[4U] = vlSelfRef.rsp_arb__DOT____Vxrand_h1d68f291__0[4U];
        __Vtemp_7[5U] = vlSelfRef.rsp_arb__DOT____Vxrand_h1d68f291__0[5U];
        __Vtemp_7[6U] = vlSelfRef.rsp_arb__DOT____Vxrand_h1d68f291__0[6U];
        __Vtemp_7[7U] = vlSelfRef.rsp_arb__DOT____Vxrand_h1d68f291__0[7U];
        __Vtemp_7[8U] = vlSelfRef.rsp_arb__DOT____Vxrand_h1d68f291__0[8U];
    }
    vlSelfRef.rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0U] 
        = (Vrtlsim_shim__ConstPool__CONST_h52851f67_0[0U] 
           & __Vtemp_7[0U]);
    vlSelfRef.rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[1U] 
        = (Vrtlsim_shim__ConstPool__CONST_h52851f67_0[1U] 
           & __Vtemp_7[1U]);
    vlSelfRef.rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[2U] 
        = (Vrtlsim_shim__ConstPool__CONST_h52851f67_0[2U] 
           & __Vtemp_7[2U]);
    vlSelfRef.rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[3U] 
        = (Vrtlsim_shim__ConstPool__CONST_h52851f67_0[3U] 
           & __Vtemp_7[3U]);
    vlSelfRef.rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[4U] 
        = (Vrtlsim_shim__ConstPool__CONST_h52851f67_0[4U] 
           & __Vtemp_7[4U]);
    vlSelfRef.rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[5U] 
        = (Vrtlsim_shim__ConstPool__CONST_h52851f67_0[5U] 
           & __Vtemp_7[5U]);
    vlSelfRef.rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[6U] 
        = (Vrtlsim_shim__ConstPool__CONST_h52851f67_0[6U] 
           & __Vtemp_7[6U]);
    vlSelfRef.rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[7U] 
        = (Vrtlsim_shim__ConstPool__CONST_h52851f67_0[7U] 
           & __Vtemp_7[7U]);
    vlSelfRef.rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[8U] 
        = (((IData)((0U != (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in))) 
            << 0xbU) | ((0x400U & ((~ (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)) 
                                   << 0xaU)) | (Vrtlsim_shim__ConstPool__CONST_h52851f67_0[8U] 
                                                & __Vtemp_7[8U])));
    vlSelfRef.__VdfgRegularize_h42ce9742_4_0 = (IData)(
                                                       (2U 
                                                        == (IData)(vlSelfRef.__Vcellinp__rsp_arb__valid_in)));
    __Vcellinp__req_global_buf__valid_in = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_blocks__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT__req_queue__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                                            & (IData)(vlSelfRef.__PVT__is_addr_global));
    vlSelfRef.__Vcellinp__req_local_buf__valid_in = 
        ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_blocks__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT__req_queue__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
         & (IData)(vlSelfRef.__PVT__is_addr_local));
    vlSelfRef.req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0U]);
    vlSelfRef.req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[1U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[1U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[1U]);
    vlSelfRef.req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[2U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[2U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[2U]);
    vlSelfRef.req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[3U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[3U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[3U]);
    vlSelfRef.req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[4U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[4U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[4U]);
    vlSelfRef.req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[5U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[5U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[5U]);
    vlSelfRef.req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[6U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[6U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[6U]);
    vlSelfRef.req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[7U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[7U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[7U]);
    vlSelfRef.req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[8U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[8U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[8U]);
    vlSelfRef.req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[9U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[9U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[9U]);
    vlSelfRef.req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xaU] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0xaU] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0xaU]);
    vlSelfRef.req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xbU] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0xbU] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0xbU]);
    vlSelfRef.req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xcU] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0xcU] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0xcU]);
    vlSelfRef.req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xdU] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0xdU] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0xdU]);
    vlSelfRef.req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xeU] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0xeU] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0xeU]);
    vlSelfRef.req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xfU] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0xfU] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0xfU]);
    vlSelfRef.req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0x10U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0x10U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0x10U]);
    vlSelfRef.req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0x11U] 
        = (((IData)(__Vcellinp__req_global_buf__valid_in) 
            << 0x13U) | ((0x7f800U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0x11U] 
                                      & ((~ (IData)(vlSelfRef.__PVT__is_addr_local_mask)) 
                                         << 0xbU))) 
                         | (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0x11U] 
                            & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0x11U])));
    vlSelfRef.req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0U]);
    vlSelfRef.req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[1U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[1U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[1U]);
    vlSelfRef.req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[2U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[2U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[2U]);
    vlSelfRef.req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[3U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[3U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[3U]);
    vlSelfRef.req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[4U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[4U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[4U]);
    vlSelfRef.req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[5U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[5U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[5U]);
    vlSelfRef.req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[6U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[6U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[6U]);
    vlSelfRef.req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[7U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[7U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[7U]);
    vlSelfRef.req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[8U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[8U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[8U]);
    vlSelfRef.req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[9U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[9U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[9U]);
    vlSelfRef.req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xaU] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0xaU] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0xaU]);
    vlSelfRef.req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xbU] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0xbU] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0xbU]);
    vlSelfRef.req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xcU] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0xcU] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0xcU]);
    vlSelfRef.req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xdU] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0xdU] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0xdU]);
    vlSelfRef.req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xeU] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0xeU] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0xeU]);
    vlSelfRef.req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0xfU] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0xfU] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0xfU]);
    vlSelfRef.req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0x10U] 
        = (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0x10U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0x10U]);
    vlSelfRef.req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0x11U] 
        = (((IData)(vlSelfRef.__Vcellinp__req_local_buf__valid_in) 
            << 0x13U) | ((0xfffff800U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0x11U] 
                                         & ((IData)(vlSelfRef.__PVT__is_addr_local_mask) 
                                            << 0xbU))) 
                         | (Vrtlsim_shim__ConstPool__CONST_h6e9ab14f_0[0x11U] 
                            & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0x11U])));
}
