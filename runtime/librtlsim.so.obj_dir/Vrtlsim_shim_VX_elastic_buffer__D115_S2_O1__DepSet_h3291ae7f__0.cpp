// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrtlsim_shim.h for the primary calling header

#include "Vrtlsim_shim__pch.h"
#include "Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1.h"
#include "Vrtlsim_shim__Syms.h"

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__0__KET____DOT__buffer__0(Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                      Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__0__KET____DOT__buffer__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT__ready_in)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__0__KET____DOT__buffer__0(Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                      Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__0__KET____DOT__buffer__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
        if (vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) {
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[0U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[1U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[2U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[3U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[4U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[5U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[6U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[7U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[8U];
        } else {
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U];
        }
    }
    if (((IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
         & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__valid_in))) {
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[0U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[1U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[2U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[3U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[4U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[5U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[6U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[7U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[8U];
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r = 0U;
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r = 1U;
    } else {
        if (vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r 
                = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__valid_in) 
                         | (~ (IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))));
        }
        if (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__valid_in) 
             | (IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out))) {
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out;
        }
    }
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer__0(Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                      Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
        if (vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) {
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[0U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[1U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[2U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[3U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[4U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[5U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[6U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[7U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[8U];
        } else {
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U];
        }
    }
    if (((IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
         & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__valid_in))) {
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[0U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[1U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[2U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[3U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[4U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[5U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[6U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[7U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[8U];
    }
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer__1(Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                      Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r = 0U;
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r = 1U;
    } else {
        if (vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r 
                = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__valid_in) 
                         | (~ (IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))));
        }
        if (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__valid_in) 
             | (IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out))) {
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out;
        }
    }
    vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit__DOT__ready_in)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer__0(Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                      Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
        if (vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) {
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[0U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[1U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[2U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[3U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[4U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[5U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[6U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[7U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[8U];
        } else {
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U];
        }
    }
    if (((IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
         & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__valid_in))) {
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[0U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[1U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[2U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[3U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[4U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[5U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[6U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[7U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[8U];
    }
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer__1(Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                      Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r = 0U;
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r = 1U;
    } else {
        if (vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r 
                = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__valid_in) 
                         | (~ (IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))));
        }
        if (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__valid_in) 
             | (IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out))) {
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out;
        }
    }
    vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__ready_in)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__3__KET____DOT__buffer__0(Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                      Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__3__KET____DOT__buffer__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__ready_in)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__3__KET____DOT__buffer__0(Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                      Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__3__KET____DOT__buffer__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
        if (vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) {
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[0U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[1U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[2U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[3U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[4U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[5U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[6U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[7U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[8U];
        } else {
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U];
        }
    }
    if (((IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
         & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__valid_in))) {
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[0U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[1U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[2U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[3U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[4U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[5U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[6U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[7U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[8U];
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r = 0U;
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r = 1U;
    } else {
        if (vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r 
                = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__valid_in) 
                         | (~ (IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))));
        }
        if (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__valid_in) 
             | (IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out))) {
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out;
        }
    }
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__4__KET____DOT__buffer__0(Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                      Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__4__KET____DOT__buffer__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
        if (vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) {
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[0U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[1U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[2U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[3U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[4U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[5U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[6U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[7U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[8U];
        } else {
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U];
        }
    }
    if (((IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
         & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__valid_in))) {
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[0U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[1U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[2U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[3U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[4U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[5U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[6U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[7U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[8U];
    }
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__4__KET____DOT__buffer__1(Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                      Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__4__KET____DOT__buffer__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r = 0U;
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r = 1U;
    } else {
        if (vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r 
                = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__valid_in) 
                         | (~ (IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))));
        }
        if (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__valid_in) 
             | (IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out))) {
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out;
        }
    }
    vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__dispatch_unit__DOT__ready_in)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out__0(Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                      Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
        if (vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) {
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[1U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[2U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[3U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[4U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[5U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[7U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[8U];
        } else {
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U];
        }
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r = 0U;
    } else if (vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r 
            = (1U & ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                     | (~ (IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))));
    }
    if (((IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
         & (IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r))) {
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[1U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[2U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[3U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[4U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[5U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[7U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[8U];
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r = 1U;
    } else if (((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                | (IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out))) {
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r 
            = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out;
    }
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out__1(Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                      Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | (IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__per_block_execute_if__BRA__0__KET__.ready)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out__0(Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                      Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_switch.__PVT__pe_req_ready) 
                    >> (1U & (vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                              >> 0x15U)))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out__0(Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                      Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r = 0U;
    } else if (vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r 
            = (1U & ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__4__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                     | (~ (IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))));
    }
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out__1(Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                      Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
        if (vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) {
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[1U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[2U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[3U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[4U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[5U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[7U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[8U];
        } else {
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U];
        }
    }
    if (((IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
         & (IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__4__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r))) {
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[1U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[2U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[3U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[4U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[5U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[7U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[8U];
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r = 1U;
    } else if (((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__4__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                | (IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out))) {
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r 
            = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out;
    }
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out__0(Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                      Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
        if (vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) {
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[1U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[2U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[3U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[4U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[5U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[7U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[8U];
        } else {
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U];
        }
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r = 0U;
    } else if (vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r 
            = (1U & ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                     | (~ (IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))));
    }
    if (((IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
         & (IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r))) {
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[1U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[2U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[3U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[4U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[5U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[7U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[8U];
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r = 1U;
    } else if (((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                | (IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out))) {
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r 
            = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out;
    }
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out__1(Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                      Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch.__PVT__pe_req_ready) 
                    >> (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_select))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__0__KET____DOT__buffer__0(Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                      Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__0__KET____DOT__buffer__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT__ready_in)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__0__KET____DOT__buffer__0(Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                      Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__0__KET____DOT__buffer__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
        if (vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) {
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[0U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[1U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[2U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[3U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[4U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[5U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[6U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[7U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[8U];
        } else {
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U];
        }
    }
    if (((IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
         & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__valid_in))) {
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[0U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[1U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[2U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[3U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[4U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[5U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[6U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[7U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[8U];
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r = 0U;
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r = 1U;
    } else {
        if (vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r 
                = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__valid_in) 
                         | (~ (IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))));
        }
        if (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__valid_in) 
             | (IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out))) {
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out;
        }
    }
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer__0(Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                      Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
        if (vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) {
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[0U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[1U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[2U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[3U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[4U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[5U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[6U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[7U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[8U];
        } else {
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U];
        }
    }
    if (((IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
         & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__valid_in))) {
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[0U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[1U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[2U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[3U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[4U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[5U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[6U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[7U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[8U];
    }
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer__1(Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                      Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r = 0U;
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r = 1U;
    } else {
        if (vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r 
                = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__valid_in) 
                         | (~ (IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))));
        }
        if (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__valid_in) 
             | (IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out))) {
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out;
        }
    }
    vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit__DOT__ready_in)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer__0(Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                      Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
        if (vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) {
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[0U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[1U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[2U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[3U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[4U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[5U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[6U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[7U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[8U];
        } else {
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U];
        }
    }
    if (((IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
         & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__valid_in))) {
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[0U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[1U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[2U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[3U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[4U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[5U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[6U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[7U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[8U];
    }
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer__1(Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                      Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r = 0U;
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r = 1U;
    } else {
        if (vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r 
                = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__valid_in) 
                         | (~ (IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))));
        }
        if (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__valid_in) 
             | (IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out))) {
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out;
        }
    }
    vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__ready_in)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__3__KET____DOT__buffer__0(Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                      Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__3__KET____DOT__buffer__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__ready_in)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__3__KET____DOT__buffer__0(Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                      Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__3__KET____DOT__buffer__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
        if (vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) {
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[0U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[1U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[2U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[3U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[4U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[5U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[6U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[7U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[8U];
        } else {
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U];
        }
    }
    if (((IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
         & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__valid_in))) {
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[0U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[1U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[2U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[3U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[4U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[5U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[6U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[7U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[8U];
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r = 0U;
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r = 1U;
    } else {
        if (vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r 
                = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__valid_in) 
                         | (~ (IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))));
        }
        if (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__valid_in) 
             | (IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out))) {
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out;
        }
    }
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__4__KET____DOT__buffer__0(Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                      Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__4__KET____DOT__buffer__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
        if (vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) {
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[0U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[1U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[2U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[3U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[4U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[5U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[6U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[7U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[8U];
        } else {
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U];
        }
    }
    if (((IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
         & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__valid_in))) {
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[0U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[1U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[2U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[3U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[4U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[5U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[6U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[7U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[8U];
    }
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__4__KET____DOT__buffer__1(Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                      Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__4__KET____DOT__buffer__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r = 0U;
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r = 1U;
    } else {
        if (vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r 
                = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__valid_in) 
                         | (~ (IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))));
        }
        if (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__valid_in) 
             | (IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out))) {
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out;
        }
    }
    vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__dispatch_unit__DOT__ready_in)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out__0(Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                      Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
        if (vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) {
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[1U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[2U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[3U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[4U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[5U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[7U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[8U];
        } else {
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U];
        }
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r = 0U;
    } else if (vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r 
            = (1U & ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                     | (~ (IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))));
    }
    if (((IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
         & (IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r))) {
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[1U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[2U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[3U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[4U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[5U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[7U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[8U];
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r = 1U;
    } else if (((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                | (IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out))) {
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r 
            = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out;
    }
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out__1(Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                      Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | (IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__per_block_execute_if__BRA__0__KET__.ready)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out__0(Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                      Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_switch.__PVT__pe_req_ready) 
                    >> (1U & (vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                              >> 0x15U)))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out__0(Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                      Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r = 0U;
    } else if (vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r 
            = (1U & ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__4__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                     | (~ (IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))));
    }
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out__1(Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                      Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
        if (vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) {
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[1U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[2U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[3U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[4U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[5U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[7U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[8U];
        } else {
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U];
        }
    }
    if (((IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
         & (IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__4__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r))) {
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[1U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[2U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[3U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[4U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[5U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[7U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[8U];
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r = 1U;
    } else if (((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__4__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                | (IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out))) {
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r 
            = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out;
    }
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out__0(Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                      Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
        if (vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) {
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[1U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[2U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[3U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[4U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[5U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[7U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[8U];
        } else {
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U];
        }
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r = 0U;
    } else if (vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r 
            = (1U & ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                     | (~ (IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))));
    }
    if (((IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
         & (IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r))) {
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[1U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[2U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[3U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[4U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[5U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[7U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[8U];
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r = 1U;
    } else if (((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                | (IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out))) {
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r 
            = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out;
    }
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out__1(Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                      Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch.__PVT__pe_req_ready) 
                    >> (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_select))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__0__KET____DOT__buffer__0(Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                      Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__0__KET____DOT__buffer__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT__ready_in)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__0__KET____DOT__buffer__0(Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                      Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__0__KET____DOT__buffer__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
        if (vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) {
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[0U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[1U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[2U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[3U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[4U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[5U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[6U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[7U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[8U];
        } else {
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U];
        }
    }
    if (((IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
         & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__valid_in))) {
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[0U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[1U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[2U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[3U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[4U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[5U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[6U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[7U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[8U];
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r = 0U;
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r = 1U;
    } else {
        if (vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r 
                = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__valid_in) 
                         | (~ (IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))));
        }
        if (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__valid_in) 
             | (IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out))) {
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out;
        }
    }
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer__0(Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                      Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
        if (vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) {
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[0U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[1U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[2U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[3U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[4U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[5U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[6U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[7U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[8U];
        } else {
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U];
        }
    }
    if (((IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
         & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__valid_in))) {
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[0U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[1U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[2U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[3U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[4U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[5U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[6U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[7U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[8U];
    }
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer__1(Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                      Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r = 0U;
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r = 1U;
    } else {
        if (vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r 
                = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__valid_in) 
                         | (~ (IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))));
        }
        if (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__valid_in) 
             | (IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out))) {
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out;
        }
    }
    vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit__DOT__ready_in)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer__0(Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                      Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
        if (vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) {
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[0U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[1U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[2U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[3U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[4U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[5U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[6U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[7U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[8U];
        } else {
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U];
        }
    }
    if (((IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
         & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__valid_in))) {
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[0U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[1U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[2U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[3U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[4U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[5U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[6U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[7U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[8U];
    }
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer__1(Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                      Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r = 0U;
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r = 1U;
    } else {
        if (vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r 
                = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__valid_in) 
                         | (~ (IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))));
        }
        if (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__valid_in) 
             | (IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out))) {
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out;
        }
    }
    vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__ready_in)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__3__KET____DOT__buffer__0(Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                      Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__3__KET____DOT__buffer__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__ready_in)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__3__KET____DOT__buffer__0(Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                      Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__3__KET____DOT__buffer__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
        if (vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) {
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[0U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[1U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[2U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[3U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[4U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[5U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[6U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[7U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[8U];
        } else {
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U];
        }
    }
    if (((IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
         & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__valid_in))) {
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[0U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[1U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[2U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[3U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[4U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[5U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[6U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[7U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[8U];
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r = 0U;
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r = 1U;
    } else {
        if (vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r 
                = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__valid_in) 
                         | (~ (IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))));
        }
        if (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__valid_in) 
             | (IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out))) {
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out;
        }
    }
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__4__KET____DOT__buffer__0(Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                      Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__4__KET____DOT__buffer__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
        if (vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) {
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[0U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[1U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[2U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[3U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[4U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[5U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[6U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[7U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[8U];
        } else {
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U];
        }
    }
    if (((IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
         & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__valid_in))) {
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[0U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[1U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[2U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[3U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[4U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[5U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[6U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[7U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[8U];
    }
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__4__KET____DOT__buffer__1(Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                      Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__4__KET____DOT__buffer__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r = 0U;
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r = 1U;
    } else {
        if (vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r 
                = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__valid_in) 
                         | (~ (IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))));
        }
        if (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__valid_in) 
             | (IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out))) {
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out;
        }
    }
    vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__dispatch_unit__DOT__ready_in)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out__0(Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                      Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
        if (vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) {
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[1U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[2U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[3U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[4U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[5U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[7U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[8U];
        } else {
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U];
        }
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r = 0U;
    } else if (vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r 
            = (1U & ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                     | (~ (IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))));
    }
    if (((IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
         & (IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r))) {
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[1U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[2U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[3U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[4U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[5U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[7U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[8U];
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r = 1U;
    } else if (((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                | (IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out))) {
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r 
            = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out;
    }
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out__1(Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                      Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | (IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__per_block_execute_if__BRA__0__KET__.ready)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out__0(Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                      Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_switch.__PVT__pe_req_ready) 
                    >> (1U & (vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                              >> 0x15U)))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out__0(Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                      Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r = 0U;
    } else if (vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r 
            = (1U & ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__4__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                     | (~ (IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))));
    }
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out__1(Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                      Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
        if (vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) {
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[1U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[2U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[3U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[4U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[5U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[7U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[8U];
        } else {
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U];
        }
    }
    if (((IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
         & (IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__4__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r))) {
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[1U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[2U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[3U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[4U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[5U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[7U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[8U];
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r = 1U;
    } else if (((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__4__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                | (IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out))) {
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r 
            = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out;
    }
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out__0(Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                      Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
        if (vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) {
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[1U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[2U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[3U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[4U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[5U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[7U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[8U];
        } else {
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U];
        }
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r = 0U;
    } else if (vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r 
            = (1U & ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                     | (~ (IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))));
    }
    if (((IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
         & (IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r))) {
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[1U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[2U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[3U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[4U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[5U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[7U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[8U];
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r = 1U;
    } else if (((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                | (IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out))) {
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r 
            = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out;
    }
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out__1(Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                      Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch.__PVT__pe_req_ready) 
                    >> (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_select))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__0__KET____DOT__buffer__0(Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                      Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__0__KET____DOT__buffer__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT__ready_in)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__0__KET____DOT__buffer__0(Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                      Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__0__KET____DOT__buffer__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
        if (vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) {
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[0U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[1U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[2U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[3U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[4U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[5U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[6U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[7U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[8U];
        } else {
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U];
        }
    }
    if (((IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
         & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__valid_in))) {
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[0U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[1U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[2U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[3U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[4U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[5U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[6U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[7U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[8U];
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r = 0U;
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r = 1U;
    } else {
        if (vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r 
                = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__valid_in) 
                         | (~ (IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))));
        }
        if (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__valid_in) 
             | (IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out))) {
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out;
        }
    }
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer__0(Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                      Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
        if (vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) {
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[0U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[1U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[2U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[3U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[4U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[5U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[6U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[7U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[8U];
        } else {
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U];
        }
    }
    if (((IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
         & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__valid_in))) {
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[0U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[1U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[2U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[3U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[4U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[5U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[6U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[7U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[8U];
    }
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer__1(Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                      Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r = 0U;
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r = 1U;
    } else {
        if (vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r 
                = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__valid_in) 
                         | (~ (IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))));
        }
        if (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__valid_in) 
             | (IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out))) {
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out;
        }
    }
    vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit__DOT__ready_in)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer__0(Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                      Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
        if (vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) {
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[0U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[1U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[2U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[3U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[4U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[5U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[6U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[7U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[8U];
        } else {
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U];
        }
    }
    if (((IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
         & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__valid_in))) {
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[0U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[1U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[2U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[3U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[4U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[5U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[6U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[7U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[8U];
    }
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer__1(Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                      Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r = 0U;
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r = 1U;
    } else {
        if (vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r 
                = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__valid_in) 
                         | (~ (IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))));
        }
        if (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__valid_in) 
             | (IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out))) {
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out;
        }
    }
    vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__ready_in)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__3__KET____DOT__buffer__0(Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                      Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__3__KET____DOT__buffer__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__ready_in)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__3__KET____DOT__buffer__0(Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                      Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__3__KET____DOT__buffer__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
        if (vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) {
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[0U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[1U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[2U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[3U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[4U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[5U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[6U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[7U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[8U];
        } else {
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U];
        }
    }
    if (((IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
         & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__valid_in))) {
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[0U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[1U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[2U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[3U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[4U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[5U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[6U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[7U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[8U];
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r = 0U;
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r = 1U;
    } else {
        if (vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r 
                = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__valid_in) 
                         | (~ (IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))));
        }
        if (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__valid_in) 
             | (IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out))) {
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out;
        }
    }
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__4__KET____DOT__buffer__0(Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                      Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__4__KET____DOT__buffer__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
        if (vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) {
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[0U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[1U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[2U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[3U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[4U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[5U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[6U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[7U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[8U];
        } else {
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U];
        }
    }
    if (((IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
         & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__valid_in))) {
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[0U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[1U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[2U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[3U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[4U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[5U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[6U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[7U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__data_in[8U];
    }
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__4__KET____DOT__buffer__1(Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                      Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__4__KET____DOT__buffer__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r = 0U;
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r = 1U;
    } else {
        if (vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r 
                = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__valid_in) 
                         | (~ (IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))));
        }
        if (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__4__KET____DOT__buffer__valid_in) 
             | (IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out))) {
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out;
        }
    }
    vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__dispatch_unit__DOT__ready_in)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out__0(Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                      Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
        if (vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) {
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[1U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[2U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[3U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[4U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[5U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[7U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[8U];
        } else {
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U];
        }
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r = 0U;
    } else if (vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r 
            = (1U & ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                     | (~ (IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))));
    }
    if (((IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
         & (IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r))) {
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[1U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[2U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[3U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[4U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[5U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[7U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[8U];
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r = 1U;
    } else if (((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                | (IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out))) {
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r 
            = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out;
    }
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out__1(Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                      Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | (IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__per_block_execute_if__BRA__0__KET__.ready)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out__0(Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                      Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_switch.__PVT__pe_req_ready) 
                    >> (1U & (vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                              >> 0x15U)))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out__0(Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                      Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r = 0U;
    } else if (vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r 
            = (1U & ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__4__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                     | (~ (IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))));
    }
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out__1(Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                      Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
        if (vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) {
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[1U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[2U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[3U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[4U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[5U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[7U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[8U];
        } else {
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U];
        }
    }
    if (((IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
         & (IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__4__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r))) {
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[1U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[2U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[3U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[4U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[5U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[7U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[8U];
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r = 1U;
    } else if (((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__4__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                | (IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out))) {
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r 
            = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out;
    }
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out__0(Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                      Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
        if (vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) {
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[1U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[2U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[3U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[4U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[5U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[7U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[8U];
        } else {
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U];
            vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U];
        }
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r = 0U;
    } else if (vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r 
            = (1U & ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                     | (~ (IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))));
    }
    if (((IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
         & (IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r))) {
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[1U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[2U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[3U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[4U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[5U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[7U];
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[8U];
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r = 1U;
    } else if (((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                | (IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out))) {
        vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r 
            = vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out;
    }
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out__1(Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                      Vrtlsim_shim_VX_elastic_buffer__D115_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch.__PVT__pe_req_ready) 
                    >> (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_select))));
}
