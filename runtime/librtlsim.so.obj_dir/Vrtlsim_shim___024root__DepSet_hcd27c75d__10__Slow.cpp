// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrtlsim_shim.h for the primary calling header

#include "Vrtlsim_shim__pch.h"
#include "Vrtlsim_shim__Syms.h"
#include "Vrtlsim_shim___024root.h"

extern const VlWide<54>/*1727:0*/ Vrtlsim_shim__ConstPool__CONST_hb216270b_0;

VL_ATTR_COLD void Vrtlsim_shim___024root___stl_comb__TOP__90(Vrtlsim_shim___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrtlsim_shim___024root___stl_comb__TOP__90\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<54>/*1727:0*/ __Vtemp_2;
    VlWide<54>/*1727:0*/ __Vtemp_4;
    VlWide<4>/*127:0*/ __Vtemp_7;
    // Body
    __Vtemp_2[0U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U]);
    __Vtemp_2[1U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[1U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U]);
    __Vtemp_2[2U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[2U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U]);
    __Vtemp_2[3U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[3U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U]);
    __Vtemp_2[4U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[4U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U]);
    __Vtemp_2[5U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[5U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U]);
    __Vtemp_2[6U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[6U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U]);
    __Vtemp_2[7U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[7U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U]);
    __Vtemp_2[8U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[8U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U]);
    __Vtemp_2[9U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[9U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[9U]);
    __Vtemp_2[0xaU] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0xaU] 
                       & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xaU]);
    __Vtemp_2[0xbU] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0xbU] 
                       & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xbU]);
    __Vtemp_2[0xcU] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0xcU] 
                       & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xcU]);
    __Vtemp_2[0xdU] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0xdU] 
                       & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xdU]);
    __Vtemp_2[0xeU] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0xeU] 
                       & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU]);
    __Vtemp_2[0xfU] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0xfU] 
                       & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xfU]);
    __Vtemp_2[0x10U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x10U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x10U]);
    __Vtemp_2[0x11U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x11U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x11U]);
    __Vtemp_2[0x12U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x12U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x12U]);
    __Vtemp_2[0x13U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x13U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x13U]);
    __Vtemp_2[0x14U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x14U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x14U]);
    __Vtemp_2[0x15U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x15U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x15U]);
    __Vtemp_2[0x16U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x16U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x16U]);
    __Vtemp_2[0x17U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x17U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x17U]);
    __Vtemp_2[0x18U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x18U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x18U]);
    __Vtemp_2[0x19U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x19U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x19U]);
    __Vtemp_2[0x1aU] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x1aU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                            << 0x1cU) | vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x1aU]));
    __Vtemp_2[0x1bU] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x1bU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                                      << 0x1cU)));
    __Vtemp_2[0x1cU] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x1cU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                                      << 0x1cU)));
    __Vtemp_2[0x1dU] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x1dU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                                      << 0x1cU)));
    __Vtemp_2[0x1eU] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x1eU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                                      << 0x1cU)));
    __Vtemp_2[0x1fU] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x1fU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                                      << 0x1cU)));
    __Vtemp_2[0x20U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x20U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                                      << 0x1cU)));
    __Vtemp_2[0x21U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x21U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                                      << 0x1cU)));
    __Vtemp_2[0x22U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x22U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                                      << 0x1cU)));
    __Vtemp_2[0x23U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x23U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[9U] 
                                      << 0x1cU)));
    __Vtemp_2[0x24U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x24U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[9U] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xaU] 
                                      << 0x1cU)));
    __Vtemp_2[0x25U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x25U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xaU] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xbU] 
                                      << 0x1cU)));
    __Vtemp_2[0x26U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x26U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xbU] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xcU] 
                                      << 0x1cU)));
    __Vtemp_2[0x27U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x27U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xcU] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xdU] 
                                      << 0x1cU)));
    __Vtemp_2[0x28U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x28U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xdU] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU] 
                                      << 0x1cU)));
    __Vtemp_2[0x29U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x29U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xfU] 
                                      << 0x1cU)));
    __Vtemp_2[0x2aU] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x2aU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xfU] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x10U] 
                                      << 0x1cU)));
    __Vtemp_2[0x2bU] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x2bU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x10U] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x11U] 
                                      << 0x1cU)));
    __Vtemp_2[0x2cU] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x2cU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x11U] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x12U] 
                                      << 0x1cU)));
    __Vtemp_2[0x2dU] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x2dU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x12U] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x13U] 
                                      << 0x1cU)));
    __Vtemp_2[0x2eU] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x2eU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x13U] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x14U] 
                                      << 0x1cU)));
    __Vtemp_2[0x2fU] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x2fU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x14U] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x15U] 
                                      << 0x1cU)));
    __Vtemp_2[0x30U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x30U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x15U] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x16U] 
                                      << 0x1cU)));
    __Vtemp_2[0x31U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x31U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x16U] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x17U] 
                                      << 0x1cU)));
    __Vtemp_2[0x32U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x32U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x17U] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x18U] 
                                      << 0x1cU)));
    __Vtemp_2[0x33U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x33U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x18U] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x19U] 
                                      << 0x1cU)));
    __Vtemp_2[0x34U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x34U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x19U] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x1aU] 
                                      << 0x1cU)));
    __Vtemp_2[0x35U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x35U] 
                        & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x1aU] 
                           >> 4U));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs2_data 
        = ((0x35bU >= ((IData)(0x103U) + (0xffU & VL_SHIFTL_III(8,32,32, 
                                                                vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__g_last_tid__DOT__last_tid_select__DOT__g_msb__DOT__g_model1__DOT__find_first__DOT__d_n
                                                                [0U], 5U))))
            ? (((0U == (0x1fU & ((IData)(0x103U) + 
                                 (0xffU & VL_SHIFTL_III(8,32,32, 
                                                        vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__g_last_tid__DOT__last_tid_select__DOT__g_msb__DOT__g_model1__DOT__find_first__DOT__d_n
                                                        [0U], 5U)))))
                 ? 0U : (__Vtemp_2[(((IData)(0x122U) 
                                     + (0xffU & VL_SHIFTL_III(8,32,32, 
                                                              vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__g_last_tid__DOT__last_tid_select__DOT__g_msb__DOT__g_model1__DOT__find_first__DOT__d_n
                                                              [0U], 5U))) 
                                    >> 5U)] << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0x103U) 
                                                      + 
                                                      (0xffU 
                                                       & VL_SHIFTL_III(8,32,32, 
                                                                       vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__g_last_tid__DOT__last_tid_select__DOT__g_msb__DOT__g_model1__DOT__find_first__DOT__d_n
                                                                       [0U], 5U))))))) 
               | (__Vtemp_2[(((IData)(0x103U) + (0xffU 
                                                 & VL_SHIFTL_III(8,32,32, 
                                                                 vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__g_last_tid__DOT__last_tid_select__DOT__g_msb__DOT__g_model1__DOT__find_first__DOT__d_n
                                                                 [0U], 5U))) 
                             >> 5U)] >> (0x1fU & ((IData)(0x103U) 
                                                  + 
                                                  (0xffU 
                                                   & VL_SHIFTL_III(8,32,32, 
                                                                   vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__g_last_tid__DOT__last_tid_select__DOT__g_msb__DOT__g_model1__DOT__find_first__DOT__d_n
                                                                   [0U], 5U))))))
            : vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vxrand_h8d944da6__1);
    __Vtemp_4[0U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U]);
    __Vtemp_4[1U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[1U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U]);
    __Vtemp_4[2U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[2U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U]);
    __Vtemp_4[3U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[3U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U]);
    __Vtemp_4[4U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[4U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U]);
    __Vtemp_4[5U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[5U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U]);
    __Vtemp_4[6U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[6U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U]);
    __Vtemp_4[7U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[7U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U]);
    __Vtemp_4[8U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[8U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U]);
    __Vtemp_4[9U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[9U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[9U]);
    __Vtemp_4[0xaU] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0xaU] 
                       & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xaU]);
    __Vtemp_4[0xbU] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0xbU] 
                       & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xbU]);
    __Vtemp_4[0xcU] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0xcU] 
                       & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xcU]);
    __Vtemp_4[0xdU] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0xdU] 
                       & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xdU]);
    __Vtemp_4[0xeU] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0xeU] 
                       & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU]);
    __Vtemp_4[0xfU] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0xfU] 
                       & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xfU]);
    __Vtemp_4[0x10U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x10U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x10U]);
    __Vtemp_4[0x11U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x11U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x11U]);
    __Vtemp_4[0x12U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x12U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x12U]);
    __Vtemp_4[0x13U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x13U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x13U]);
    __Vtemp_4[0x14U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x14U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x14U]);
    __Vtemp_4[0x15U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x15U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x15U]);
    __Vtemp_4[0x16U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x16U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x16U]);
    __Vtemp_4[0x17U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x17U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x17U]);
    __Vtemp_4[0x18U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x18U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x18U]);
    __Vtemp_4[0x19U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x19U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x19U]);
    __Vtemp_4[0x1aU] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x1aU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                            << 0x1cU) | vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x1aU]));
    __Vtemp_4[0x1bU] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x1bU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                                      << 0x1cU)));
    __Vtemp_4[0x1cU] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x1cU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                                      << 0x1cU)));
    __Vtemp_4[0x1dU] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x1dU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                                      << 0x1cU)));
    __Vtemp_4[0x1eU] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x1eU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                                      << 0x1cU)));
    __Vtemp_4[0x1fU] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x1fU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                                      << 0x1cU)));
    __Vtemp_4[0x20U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x20U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                                      << 0x1cU)));
    __Vtemp_4[0x21U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x21U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                                      << 0x1cU)));
    __Vtemp_4[0x22U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x22U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                                      << 0x1cU)));
    __Vtemp_4[0x23U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x23U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[9U] 
                                      << 0x1cU)));
    __Vtemp_4[0x24U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x24U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[9U] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xaU] 
                                      << 0x1cU)));
    __Vtemp_4[0x25U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x25U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xaU] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xbU] 
                                      << 0x1cU)));
    __Vtemp_4[0x26U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x26U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xbU] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xcU] 
                                      << 0x1cU)));
    __Vtemp_4[0x27U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x27U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xcU] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xdU] 
                                      << 0x1cU)));
    __Vtemp_4[0x28U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x28U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xdU] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU] 
                                      << 0x1cU)));
    __Vtemp_4[0x29U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x29U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xfU] 
                                      << 0x1cU)));
    __Vtemp_4[0x2aU] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x2aU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xfU] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x10U] 
                                      << 0x1cU)));
    __Vtemp_4[0x2bU] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x2bU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x10U] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x11U] 
                                      << 0x1cU)));
    __Vtemp_4[0x2cU] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x2cU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x11U] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x12U] 
                                      << 0x1cU)));
    __Vtemp_4[0x2dU] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x2dU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x12U] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x13U] 
                                      << 0x1cU)));
    __Vtemp_4[0x2eU] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x2eU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x13U] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x14U] 
                                      << 0x1cU)));
    __Vtemp_4[0x2fU] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x2fU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x14U] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x15U] 
                                      << 0x1cU)));
    __Vtemp_4[0x30U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x30U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x15U] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x16U] 
                                      << 0x1cU)));
    __Vtemp_4[0x31U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x31U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x16U] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x17U] 
                                      << 0x1cU)));
    __Vtemp_4[0x32U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x32U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x17U] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x18U] 
                                      << 0x1cU)));
    __Vtemp_4[0x33U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x33U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x18U] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x19U] 
                                      << 0x1cU)));
    __Vtemp_4[0x34U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x34U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x19U] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x1aU] 
                                      << 0x1cU)));
    __Vtemp_4[0x35U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x35U] 
                        & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x1aU] 
                           >> 4U));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs1_data 
        = ((0x35bU >= ((IData)(0x203U) + (0xffU & VL_SHIFTL_III(8,32,32, 
                                                                vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__g_last_tid__DOT__last_tid_select__DOT__g_msb__DOT__g_model1__DOT__find_first__DOT__d_n
                                                                [0U], 5U))))
            ? (((0U == (0x1fU & ((IData)(0x203U) + 
                                 (0xffU & VL_SHIFTL_III(8,32,32, 
                                                        vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__g_last_tid__DOT__last_tid_select__DOT__g_msb__DOT__g_model1__DOT__find_first__DOT__d_n
                                                        [0U], 5U)))))
                 ? 0U : (__Vtemp_4[(((IData)(0x222U) 
                                     + (0xffU & VL_SHIFTL_III(8,32,32, 
                                                              vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__g_last_tid__DOT__last_tid_select__DOT__g_msb__DOT__g_model1__DOT__find_first__DOT__d_n
                                                              [0U], 5U))) 
                                    >> 5U)] << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0x203U) 
                                                      + 
                                                      (0xffU 
                                                       & VL_SHIFTL_III(8,32,32, 
                                                                       vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__g_last_tid__DOT__last_tid_select__DOT__g_msb__DOT__g_model1__DOT__find_first__DOT__d_n
                                                                       [0U], 5U))))))) 
               | (__Vtemp_4[(((IData)(0x203U) + (0xffU 
                                                 & VL_SHIFTL_III(8,32,32, 
                                                                 vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__g_last_tid__DOT__last_tid_select__DOT__g_msb__DOT__g_model1__DOT__find_first__DOT__d_n
                                                                 [0U], 5U))) 
                             >> 5U)] >> (0x1fU & ((IData)(0x203U) 
                                                  + 
                                                  (0xffU 
                                                   & VL_SHIFTL_III(8,32,32, 
                                                                   vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__g_last_tid__DOT__last_tid_select__DOT__g_msb__DOT__g_model1__DOT__find_first__DOT__d_n
                                                                   [0U], 5U))))))
            : vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vxrand_h8d944da6__0);
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn_wmask 
        = ((0xeU & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn_wmask)) 
           | ((0U < (7U & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs1_data)) 
              & (0U != (3U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x1aU] 
                              >> 0x19U)))));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn_wmask 
        = ((0xdU & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn_wmask)) 
           | (((1U < (7U & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs1_data)) 
               & (1U != (3U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x1aU] 
                               >> 0x19U)))) << 1U));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn_wmask 
        = ((0xbU & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn_wmask)) 
           | (((2U < (7U & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs1_data)) 
               & (2U != (3U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x1aU] 
                               >> 0x19U)))) << 2U));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn_wmask 
        = ((7U & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn_wmask)) 
           | (((3U < (7U & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs1_data)) 
               & (3U != (3U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x1aU] 
                               >> 0x19U)))) << 3U));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn 
        = (((QData)((IData)((1U == (0xfU & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x19U] 
                                            >> 0xfU))))) 
            << 0x22U) | (((QData)((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn_wmask)) 
                          << 0x1eU) | (QData)((IData)(
                                                      ([&]() {
                            vlSelfRef.__Vfunc_from_fullPC__789__pc 
                                = vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs2_data;
                            vlSelfRef.__Vfunc_from_fullPC__789__Vfuncout 
                                = (vlSelfRef.__Vfunc_from_fullPC__789__pc 
                                   >> 2U);
                        }(), vlSelfRef.__Vfunc_from_fullPC__789__Vfuncout)))));
    __Vtemp_7[2U] = (((0x3fU & ((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn) 
                                >> 6U)) | ((IData)(
                                                   (((vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__split 
                                                      << 4U) 
                                                     | (QData)((IData)(
                                                                       (((3U 
                                                                          == 
                                                                          (0xfU 
                                                                           & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x19U] 
                                                                              >> 0xfU))) 
                                                                         << 3U) 
                                                                        | (7U 
                                                                           & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs1_data))))) 
                                                    >> 0x20U)) 
                                           >> 0x1aU)) 
                     | ((((5U == (0xfU & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x19U] 
                                          >> 0xfU)))
                           ? ((0U != (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__then_tmask))
                               ? (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__then_tmask)
                               : vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs2_data)
                           : vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs1_data) 
                         << 0x1dU) | ((0x3ffffc0U & 
                                       ((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn) 
                                        >> 6U)) | ((IData)(
                                                           (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn 
                                                            >> 0x20U)) 
                                                   << 0x1aU))));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellinp__wctl_reg__data_in[0U] 
        = (((IData)(((vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__split 
                      << 4U) | (QData)((IData)((((3U 
                                                  == 
                                                  (0xfU 
                                                   & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x19U] 
                                                      >> 0xfU))) 
                                                 << 3U) 
                                                | (7U 
                                                   & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs1_data)))))) 
            << 6U) | (((4U == (0xfU & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x19U] 
                                       >> 0xfU))) << 5U) 
                      | ((0x10U & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs1_data 
                                   << 4U)) | ((6U & 
                                               ((vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs2_data 
                                                 - (IData)(1U)) 
                                                << 1U)) 
                                              | (1U 
                                                 == 
                                                 (3U 
                                                  & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs2_data))))));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellinp__wctl_reg__data_in[1U] 
        = (((IData)(((vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__split 
                      << 4U) | (QData)((IData)((((3U 
                                                  == 
                                                  (0xfU 
                                                   & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x19U] 
                                                      >> 0xfU))) 
                                                 << 3U) 
                                                | (7U 
                                                   & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs1_data)))))) 
            >> 0x1aU) | (((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn) 
                          << 0x1aU) | ((IData)((((vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__split 
                                                  << 4U) 
                                                 | (QData)((IData)(
                                                                   (((3U 
                                                                      == 
                                                                      (0xfU 
                                                                       & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x19U] 
                                                                          >> 0xfU))) 
                                                                     << 3U) 
                                                                    | (7U 
                                                                       & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs1_data))))) 
                                                >> 0x20U)) 
                                       << 6U)));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellinp__wctl_reg__data_in[2U] 
        = __Vtemp_7[2U];
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellinp__wctl_reg__data_in[3U] 
        = (((((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch.__PVT__pe_req_valid) 
              & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rsp_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)) 
             & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U]) 
            << 8U) | ((0xc0U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x1aU] 
                                >> 0x13U)) | (0x3fU 
                                              & (((0x20U 
                                                   & (((5U 
                                                        == 
                                                        (0xfU 
                                                         & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x19U] 
                                                            >> 0xfU))) 
                                                       | (0U 
                                                          == 
                                                          (0xfU 
                                                           & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x19U] 
                                                              >> 0xfU)))) 
                                                      << 5U)) 
                                                  | (0x1fU 
                                                     & (((5U 
                                                          == 
                                                          (0xfU 
                                                           & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x19U] 
                                                              >> 0xfU)))
                                                          ? 
                                                         ((0U 
                                                           != (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__then_tmask))
                                                           ? (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__then_tmask)
                                                           : vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs2_data)
                                                          : vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs1_data) 
                                                        >> 3U))) 
                                                 | ((IData)(
                                                            (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn 
                                                             >> 0x20U)) 
                                                    >> 6U)))));
}

VL_ATTR_COLD void Vrtlsim_shim___024root___stl_comb__TOP__91(Vrtlsim_shim___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrtlsim_shim___024root___stl_comb__TOP__91\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<54>/*1727:0*/ __Vtemp_2;
    VlWide<54>/*1727:0*/ __Vtemp_4;
    VlWide<4>/*127:0*/ __Vtemp_7;
    // Body
    __Vtemp_2[0U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U]);
    __Vtemp_2[1U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[1U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U]);
    __Vtemp_2[2U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[2U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U]);
    __Vtemp_2[3U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[3U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U]);
    __Vtemp_2[4U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[4U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U]);
    __Vtemp_2[5U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[5U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U]);
    __Vtemp_2[6U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[6U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U]);
    __Vtemp_2[7U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[7U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U]);
    __Vtemp_2[8U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[8U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U]);
    __Vtemp_2[9U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[9U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[9U]);
    __Vtemp_2[0xaU] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0xaU] 
                       & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xaU]);
    __Vtemp_2[0xbU] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0xbU] 
                       & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xbU]);
    __Vtemp_2[0xcU] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0xcU] 
                       & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xcU]);
    __Vtemp_2[0xdU] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0xdU] 
                       & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xdU]);
    __Vtemp_2[0xeU] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0xeU] 
                       & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU]);
    __Vtemp_2[0xfU] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0xfU] 
                       & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xfU]);
    __Vtemp_2[0x10U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x10U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x10U]);
    __Vtemp_2[0x11U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x11U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x11U]);
    __Vtemp_2[0x12U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x12U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x12U]);
    __Vtemp_2[0x13U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x13U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x13U]);
    __Vtemp_2[0x14U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x14U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x14U]);
    __Vtemp_2[0x15U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x15U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x15U]);
    __Vtemp_2[0x16U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x16U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x16U]);
    __Vtemp_2[0x17U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x17U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x17U]);
    __Vtemp_2[0x18U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x18U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x18U]);
    __Vtemp_2[0x19U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x19U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x19U]);
    __Vtemp_2[0x1aU] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x1aU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                            << 0x1cU) | vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x1aU]));
    __Vtemp_2[0x1bU] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x1bU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                                      << 0x1cU)));
    __Vtemp_2[0x1cU] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x1cU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                                      << 0x1cU)));
    __Vtemp_2[0x1dU] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x1dU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                                      << 0x1cU)));
    __Vtemp_2[0x1eU] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x1eU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                                      << 0x1cU)));
    __Vtemp_2[0x1fU] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x1fU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                                      << 0x1cU)));
    __Vtemp_2[0x20U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x20U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                                      << 0x1cU)));
    __Vtemp_2[0x21U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x21U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                                      << 0x1cU)));
    __Vtemp_2[0x22U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x22U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                                      << 0x1cU)));
    __Vtemp_2[0x23U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x23U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[9U] 
                                      << 0x1cU)));
    __Vtemp_2[0x24U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x24U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[9U] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xaU] 
                                      << 0x1cU)));
    __Vtemp_2[0x25U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x25U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xaU] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xbU] 
                                      << 0x1cU)));
    __Vtemp_2[0x26U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x26U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xbU] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xcU] 
                                      << 0x1cU)));
    __Vtemp_2[0x27U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x27U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xcU] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xdU] 
                                      << 0x1cU)));
    __Vtemp_2[0x28U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x28U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xdU] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU] 
                                      << 0x1cU)));
    __Vtemp_2[0x29U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x29U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xfU] 
                                      << 0x1cU)));
    __Vtemp_2[0x2aU] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x2aU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xfU] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x10U] 
                                      << 0x1cU)));
    __Vtemp_2[0x2bU] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x2bU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x10U] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x11U] 
                                      << 0x1cU)));
    __Vtemp_2[0x2cU] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x2cU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x11U] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x12U] 
                                      << 0x1cU)));
    __Vtemp_2[0x2dU] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x2dU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x12U] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x13U] 
                                      << 0x1cU)));
    __Vtemp_2[0x2eU] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x2eU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x13U] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x14U] 
                                      << 0x1cU)));
    __Vtemp_2[0x2fU] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x2fU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x14U] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x15U] 
                                      << 0x1cU)));
    __Vtemp_2[0x30U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x30U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x15U] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x16U] 
                                      << 0x1cU)));
    __Vtemp_2[0x31U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x31U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x16U] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x17U] 
                                      << 0x1cU)));
    __Vtemp_2[0x32U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x32U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x17U] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x18U] 
                                      << 0x1cU)));
    __Vtemp_2[0x33U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x33U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x18U] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x19U] 
                                      << 0x1cU)));
    __Vtemp_2[0x34U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x34U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x19U] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x1aU] 
                                      << 0x1cU)));
    __Vtemp_2[0x35U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x35U] 
                        & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x1aU] 
                           >> 4U));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs2_data 
        = ((0x35bU >= ((IData)(0x103U) + (0xffU & VL_SHIFTL_III(8,32,32, 
                                                                vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__g_last_tid__DOT__last_tid_select__DOT__g_msb__DOT__g_model1__DOT__find_first__DOT__d_n
                                                                [0U], 5U))))
            ? (((0U == (0x1fU & ((IData)(0x103U) + 
                                 (0xffU & VL_SHIFTL_III(8,32,32, 
                                                        vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__g_last_tid__DOT__last_tid_select__DOT__g_msb__DOT__g_model1__DOT__find_first__DOT__d_n
                                                        [0U], 5U)))))
                 ? 0U : (__Vtemp_2[(((IData)(0x122U) 
                                     + (0xffU & VL_SHIFTL_III(8,32,32, 
                                                              vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__g_last_tid__DOT__last_tid_select__DOT__g_msb__DOT__g_model1__DOT__find_first__DOT__d_n
                                                              [0U], 5U))) 
                                    >> 5U)] << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0x103U) 
                                                      + 
                                                      (0xffU 
                                                       & VL_SHIFTL_III(8,32,32, 
                                                                       vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__g_last_tid__DOT__last_tid_select__DOT__g_msb__DOT__g_model1__DOT__find_first__DOT__d_n
                                                                       [0U], 5U))))))) 
               | (__Vtemp_2[(((IData)(0x103U) + (0xffU 
                                                 & VL_SHIFTL_III(8,32,32, 
                                                                 vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__g_last_tid__DOT__last_tid_select__DOT__g_msb__DOT__g_model1__DOT__find_first__DOT__d_n
                                                                 [0U], 5U))) 
                             >> 5U)] >> (0x1fU & ((IData)(0x103U) 
                                                  + 
                                                  (0xffU 
                                                   & VL_SHIFTL_III(8,32,32, 
                                                                   vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__g_last_tid__DOT__last_tid_select__DOT__g_msb__DOT__g_model1__DOT__find_first__DOT__d_n
                                                                   [0U], 5U))))))
            : vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vxrand_h8d944da6__1);
    __Vtemp_4[0U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U]);
    __Vtemp_4[1U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[1U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U]);
    __Vtemp_4[2U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[2U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U]);
    __Vtemp_4[3U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[3U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U]);
    __Vtemp_4[4U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[4U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U]);
    __Vtemp_4[5U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[5U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U]);
    __Vtemp_4[6U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[6U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U]);
    __Vtemp_4[7U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[7U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U]);
    __Vtemp_4[8U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[8U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U]);
    __Vtemp_4[9U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[9U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[9U]);
    __Vtemp_4[0xaU] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0xaU] 
                       & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xaU]);
    __Vtemp_4[0xbU] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0xbU] 
                       & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xbU]);
    __Vtemp_4[0xcU] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0xcU] 
                       & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xcU]);
    __Vtemp_4[0xdU] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0xdU] 
                       & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xdU]);
    __Vtemp_4[0xeU] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0xeU] 
                       & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU]);
    __Vtemp_4[0xfU] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0xfU] 
                       & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xfU]);
    __Vtemp_4[0x10U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x10U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x10U]);
    __Vtemp_4[0x11U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x11U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x11U]);
    __Vtemp_4[0x12U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x12U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x12U]);
    __Vtemp_4[0x13U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x13U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x13U]);
    __Vtemp_4[0x14U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x14U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x14U]);
    __Vtemp_4[0x15U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x15U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x15U]);
    __Vtemp_4[0x16U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x16U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x16U]);
    __Vtemp_4[0x17U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x17U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x17U]);
    __Vtemp_4[0x18U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x18U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x18U]);
    __Vtemp_4[0x19U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x19U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x19U]);
    __Vtemp_4[0x1aU] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x1aU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                            << 0x1cU) | vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x1aU]));
    __Vtemp_4[0x1bU] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x1bU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                                      << 0x1cU)));
    __Vtemp_4[0x1cU] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x1cU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                                      << 0x1cU)));
    __Vtemp_4[0x1dU] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x1dU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                                      << 0x1cU)));
    __Vtemp_4[0x1eU] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x1eU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                                      << 0x1cU)));
    __Vtemp_4[0x1fU] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x1fU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                                      << 0x1cU)));
    __Vtemp_4[0x20U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x20U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                                      << 0x1cU)));
    __Vtemp_4[0x21U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x21U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                                      << 0x1cU)));
    __Vtemp_4[0x22U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x22U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                                      << 0x1cU)));
    __Vtemp_4[0x23U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x23U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[9U] 
                                      << 0x1cU)));
    __Vtemp_4[0x24U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x24U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[9U] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xaU] 
                                      << 0x1cU)));
    __Vtemp_4[0x25U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x25U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xaU] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xbU] 
                                      << 0x1cU)));
    __Vtemp_4[0x26U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x26U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xbU] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xcU] 
                                      << 0x1cU)));
    __Vtemp_4[0x27U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x27U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xcU] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xdU] 
                                      << 0x1cU)));
    __Vtemp_4[0x28U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x28U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xdU] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU] 
                                      << 0x1cU)));
    __Vtemp_4[0x29U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x29U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xfU] 
                                      << 0x1cU)));
    __Vtemp_4[0x2aU] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x2aU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xfU] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x10U] 
                                      << 0x1cU)));
    __Vtemp_4[0x2bU] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x2bU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x10U] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x11U] 
                                      << 0x1cU)));
    __Vtemp_4[0x2cU] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x2cU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x11U] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x12U] 
                                      << 0x1cU)));
    __Vtemp_4[0x2dU] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x2dU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x12U] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x13U] 
                                      << 0x1cU)));
    __Vtemp_4[0x2eU] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x2eU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x13U] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x14U] 
                                      << 0x1cU)));
    __Vtemp_4[0x2fU] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x2fU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x14U] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x15U] 
                                      << 0x1cU)));
    __Vtemp_4[0x30U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x30U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x15U] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x16U] 
                                      << 0x1cU)));
    __Vtemp_4[0x31U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x31U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x16U] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x17U] 
                                      << 0x1cU)));
    __Vtemp_4[0x32U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x32U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x17U] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x18U] 
                                      << 0x1cU)));
    __Vtemp_4[0x33U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x33U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x18U] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x19U] 
                                      << 0x1cU)));
    __Vtemp_4[0x34U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x34U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x19U] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x1aU] 
                                      << 0x1cU)));
    __Vtemp_4[0x35U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x35U] 
                        & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x1aU] 
                           >> 4U));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs1_data 
        = ((0x35bU >= ((IData)(0x203U) + (0xffU & VL_SHIFTL_III(8,32,32, 
                                                                vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__g_last_tid__DOT__last_tid_select__DOT__g_msb__DOT__g_model1__DOT__find_first__DOT__d_n
                                                                [0U], 5U))))
            ? (((0U == (0x1fU & ((IData)(0x203U) + 
                                 (0xffU & VL_SHIFTL_III(8,32,32, 
                                                        vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__g_last_tid__DOT__last_tid_select__DOT__g_msb__DOT__g_model1__DOT__find_first__DOT__d_n
                                                        [0U], 5U)))))
                 ? 0U : (__Vtemp_4[(((IData)(0x222U) 
                                     + (0xffU & VL_SHIFTL_III(8,32,32, 
                                                              vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__g_last_tid__DOT__last_tid_select__DOT__g_msb__DOT__g_model1__DOT__find_first__DOT__d_n
                                                              [0U], 5U))) 
                                    >> 5U)] << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0x203U) 
                                                      + 
                                                      (0xffU 
                                                       & VL_SHIFTL_III(8,32,32, 
                                                                       vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__g_last_tid__DOT__last_tid_select__DOT__g_msb__DOT__g_model1__DOT__find_first__DOT__d_n
                                                                       [0U], 5U))))))) 
               | (__Vtemp_4[(((IData)(0x203U) + (0xffU 
                                                 & VL_SHIFTL_III(8,32,32, 
                                                                 vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__g_last_tid__DOT__last_tid_select__DOT__g_msb__DOT__g_model1__DOT__find_first__DOT__d_n
                                                                 [0U], 5U))) 
                             >> 5U)] >> (0x1fU & ((IData)(0x203U) 
                                                  + 
                                                  (0xffU 
                                                   & VL_SHIFTL_III(8,32,32, 
                                                                   vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__g_last_tid__DOT__last_tid_select__DOT__g_msb__DOT__g_model1__DOT__find_first__DOT__d_n
                                                                   [0U], 5U))))))
            : vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vxrand_h8d944da6__0);
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn_wmask 
        = ((0xeU & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn_wmask)) 
           | ((0U < (7U & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs1_data)) 
              & (0U != (3U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x1aU] 
                              >> 0x19U)))));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn_wmask 
        = ((0xdU & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn_wmask)) 
           | (((1U < (7U & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs1_data)) 
               & (1U != (3U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x1aU] 
                               >> 0x19U)))) << 1U));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn_wmask 
        = ((0xbU & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn_wmask)) 
           | (((2U < (7U & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs1_data)) 
               & (2U != (3U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x1aU] 
                               >> 0x19U)))) << 2U));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn_wmask 
        = ((7U & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn_wmask)) 
           | (((3U < (7U & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs1_data)) 
               & (3U != (3U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x1aU] 
                               >> 0x19U)))) << 3U));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn 
        = (((QData)((IData)((1U == (0xfU & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x19U] 
                                            >> 0xfU))))) 
            << 0x22U) | (((QData)((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn_wmask)) 
                          << 0x1eU) | (QData)((IData)(
                                                      ([&]() {
                            vlSelfRef.__Vfunc_from_fullPC__1184__pc 
                                = vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs2_data;
                            vlSelfRef.__Vfunc_from_fullPC__1184__Vfuncout 
                                = (vlSelfRef.__Vfunc_from_fullPC__1184__pc 
                                   >> 2U);
                        }(), vlSelfRef.__Vfunc_from_fullPC__1184__Vfuncout)))));
    __Vtemp_7[2U] = (((0x3fU & ((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn) 
                                >> 6U)) | ((IData)(
                                                   (((vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__split 
                                                      << 4U) 
                                                     | (QData)((IData)(
                                                                       (((3U 
                                                                          == 
                                                                          (0xfU 
                                                                           & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x19U] 
                                                                              >> 0xfU))) 
                                                                         << 3U) 
                                                                        | (7U 
                                                                           & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs1_data))))) 
                                                    >> 0x20U)) 
                                           >> 0x1aU)) 
                     | ((((5U == (0xfU & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x19U] 
                                          >> 0xfU)))
                           ? ((0U != (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__then_tmask))
                               ? (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__then_tmask)
                               : vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs2_data)
                           : vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs1_data) 
                         << 0x1dU) | ((0x3ffffc0U & 
                                       ((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn) 
                                        >> 6U)) | ((IData)(
                                                           (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn 
                                                            >> 0x20U)) 
                                                   << 0x1aU))));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellinp__wctl_reg__data_in[0U] 
        = (((IData)(((vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__split 
                      << 4U) | (QData)((IData)((((3U 
                                                  == 
                                                  (0xfU 
                                                   & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x19U] 
                                                      >> 0xfU))) 
                                                 << 3U) 
                                                | (7U 
                                                   & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs1_data)))))) 
            << 6U) | (((4U == (0xfU & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x19U] 
                                       >> 0xfU))) << 5U) 
                      | ((0x10U & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs1_data 
                                   << 4U)) | ((6U & 
                                               ((vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs2_data 
                                                 - (IData)(1U)) 
                                                << 1U)) 
                                              | (1U 
                                                 == 
                                                 (3U 
                                                  & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs2_data))))));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellinp__wctl_reg__data_in[1U] 
        = (((IData)(((vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__split 
                      << 4U) | (QData)((IData)((((3U 
                                                  == 
                                                  (0xfU 
                                                   & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x19U] 
                                                      >> 0xfU))) 
                                                 << 3U) 
                                                | (7U 
                                                   & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs1_data)))))) 
            >> 0x1aU) | (((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn) 
                          << 0x1aU) | ((IData)((((vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__split 
                                                  << 4U) 
                                                 | (QData)((IData)(
                                                                   (((3U 
                                                                      == 
                                                                      (0xfU 
                                                                       & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x19U] 
                                                                          >> 0xfU))) 
                                                                     << 3U) 
                                                                    | (7U 
                                                                       & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs1_data))))) 
                                                >> 0x20U)) 
                                       << 6U)));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellinp__wctl_reg__data_in[2U] 
        = __Vtemp_7[2U];
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellinp__wctl_reg__data_in[3U] 
        = (((((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch.__PVT__pe_req_valid) 
              & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rsp_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)) 
             & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U]) 
            << 8U) | ((0xc0U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x1aU] 
                                >> 0x13U)) | (0x3fU 
                                              & (((0x20U 
                                                   & (((5U 
                                                        == 
                                                        (0xfU 
                                                         & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x19U] 
                                                            >> 0xfU))) 
                                                       | (0U 
                                                          == 
                                                          (0xfU 
                                                           & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x19U] 
                                                              >> 0xfU)))) 
                                                      << 5U)) 
                                                  | (0x1fU 
                                                     & (((5U 
                                                          == 
                                                          (0xfU 
                                                           & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x19U] 
                                                              >> 0xfU)))
                                                          ? 
                                                         ((0U 
                                                           != (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__then_tmask))
                                                           ? (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__then_tmask)
                                                           : vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs2_data)
                                                          : vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs1_data) 
                                                        >> 3U))) 
                                                 | ((IData)(
                                                            (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn 
                                                             >> 0x20U)) 
                                                    >> 6U)))));
}

VL_ATTR_COLD void Vrtlsim_shim___024root___stl_comb__TOP__92(Vrtlsim_shim___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrtlsim_shim___024root___stl_comb__TOP__92\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<54>/*1727:0*/ __Vtemp_2;
    VlWide<54>/*1727:0*/ __Vtemp_4;
    VlWide<4>/*127:0*/ __Vtemp_7;
    // Body
    __Vtemp_2[0U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U]);
    __Vtemp_2[1U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[1U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U]);
    __Vtemp_2[2U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[2U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U]);
    __Vtemp_2[3U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[3U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U]);
    __Vtemp_2[4U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[4U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U]);
    __Vtemp_2[5U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[5U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U]);
    __Vtemp_2[6U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[6U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U]);
    __Vtemp_2[7U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[7U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U]);
    __Vtemp_2[8U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[8U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U]);
    __Vtemp_2[9U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[9U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[9U]);
    __Vtemp_2[0xaU] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0xaU] 
                       & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xaU]);
    __Vtemp_2[0xbU] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0xbU] 
                       & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xbU]);
    __Vtemp_2[0xcU] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0xcU] 
                       & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xcU]);
    __Vtemp_2[0xdU] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0xdU] 
                       & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xdU]);
    __Vtemp_2[0xeU] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0xeU] 
                       & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU]);
    __Vtemp_2[0xfU] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0xfU] 
                       & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xfU]);
    __Vtemp_2[0x10U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x10U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x10U]);
    __Vtemp_2[0x11U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x11U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x11U]);
    __Vtemp_2[0x12U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x12U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x12U]);
    __Vtemp_2[0x13U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x13U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x13U]);
    __Vtemp_2[0x14U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x14U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x14U]);
    __Vtemp_2[0x15U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x15U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x15U]);
    __Vtemp_2[0x16U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x16U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x16U]);
    __Vtemp_2[0x17U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x17U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x17U]);
    __Vtemp_2[0x18U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x18U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x18U]);
    __Vtemp_2[0x19U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x19U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x19U]);
    __Vtemp_2[0x1aU] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x1aU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                            << 0x1cU) | vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x1aU]));
    __Vtemp_2[0x1bU] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x1bU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                                      << 0x1cU)));
    __Vtemp_2[0x1cU] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x1cU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                                      << 0x1cU)));
    __Vtemp_2[0x1dU] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x1dU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                                      << 0x1cU)));
    __Vtemp_2[0x1eU] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x1eU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                                      << 0x1cU)));
    __Vtemp_2[0x1fU] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x1fU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                                      << 0x1cU)));
    __Vtemp_2[0x20U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x20U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                                      << 0x1cU)));
    __Vtemp_2[0x21U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x21U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                                      << 0x1cU)));
    __Vtemp_2[0x22U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x22U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                                      << 0x1cU)));
    __Vtemp_2[0x23U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x23U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[9U] 
                                      << 0x1cU)));
    __Vtemp_2[0x24U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x24U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[9U] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xaU] 
                                      << 0x1cU)));
    __Vtemp_2[0x25U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x25U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xaU] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xbU] 
                                      << 0x1cU)));
    __Vtemp_2[0x26U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x26U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xbU] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xcU] 
                                      << 0x1cU)));
    __Vtemp_2[0x27U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x27U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xcU] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xdU] 
                                      << 0x1cU)));
    __Vtemp_2[0x28U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x28U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xdU] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU] 
                                      << 0x1cU)));
    __Vtemp_2[0x29U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x29U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xfU] 
                                      << 0x1cU)));
    __Vtemp_2[0x2aU] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x2aU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xfU] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x10U] 
                                      << 0x1cU)));
    __Vtemp_2[0x2bU] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x2bU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x10U] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x11U] 
                                      << 0x1cU)));
    __Vtemp_2[0x2cU] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x2cU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x11U] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x12U] 
                                      << 0x1cU)));
    __Vtemp_2[0x2dU] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x2dU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x12U] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x13U] 
                                      << 0x1cU)));
    __Vtemp_2[0x2eU] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x2eU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x13U] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x14U] 
                                      << 0x1cU)));
    __Vtemp_2[0x2fU] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x2fU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x14U] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x15U] 
                                      << 0x1cU)));
    __Vtemp_2[0x30U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x30U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x15U] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x16U] 
                                      << 0x1cU)));
    __Vtemp_2[0x31U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x31U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x16U] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x17U] 
                                      << 0x1cU)));
    __Vtemp_2[0x32U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x32U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x17U] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x18U] 
                                      << 0x1cU)));
    __Vtemp_2[0x33U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x33U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x18U] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x19U] 
                                      << 0x1cU)));
    __Vtemp_2[0x34U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x34U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x19U] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x1aU] 
                                      << 0x1cU)));
    __Vtemp_2[0x35U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x35U] 
                        & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x1aU] 
                           >> 4U));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs2_data 
        = ((0x35bU >= ((IData)(0x103U) + (0xffU & VL_SHIFTL_III(8,32,32, 
                                                                vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__g_last_tid__DOT__last_tid_select__DOT__g_msb__DOT__g_model1__DOT__find_first__DOT__d_n
                                                                [0U], 5U))))
            ? (((0U == (0x1fU & ((IData)(0x103U) + 
                                 (0xffU & VL_SHIFTL_III(8,32,32, 
                                                        vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__g_last_tid__DOT__last_tid_select__DOT__g_msb__DOT__g_model1__DOT__find_first__DOT__d_n
                                                        [0U], 5U)))))
                 ? 0U : (__Vtemp_2[(((IData)(0x122U) 
                                     + (0xffU & VL_SHIFTL_III(8,32,32, 
                                                              vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__g_last_tid__DOT__last_tid_select__DOT__g_msb__DOT__g_model1__DOT__find_first__DOT__d_n
                                                              [0U], 5U))) 
                                    >> 5U)] << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0x103U) 
                                                      + 
                                                      (0xffU 
                                                       & VL_SHIFTL_III(8,32,32, 
                                                                       vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__g_last_tid__DOT__last_tid_select__DOT__g_msb__DOT__g_model1__DOT__find_first__DOT__d_n
                                                                       [0U], 5U))))))) 
               | (__Vtemp_2[(((IData)(0x103U) + (0xffU 
                                                 & VL_SHIFTL_III(8,32,32, 
                                                                 vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__g_last_tid__DOT__last_tid_select__DOT__g_msb__DOT__g_model1__DOT__find_first__DOT__d_n
                                                                 [0U], 5U))) 
                             >> 5U)] >> (0x1fU & ((IData)(0x103U) 
                                                  + 
                                                  (0xffU 
                                                   & VL_SHIFTL_III(8,32,32, 
                                                                   vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__g_last_tid__DOT__last_tid_select__DOT__g_msb__DOT__g_model1__DOT__find_first__DOT__d_n
                                                                   [0U], 5U))))))
            : vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vxrand_h8d944da6__1);
    __Vtemp_4[0U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U]);
    __Vtemp_4[1U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[1U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U]);
    __Vtemp_4[2U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[2U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U]);
    __Vtemp_4[3U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[3U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U]);
    __Vtemp_4[4U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[4U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U]);
    __Vtemp_4[5U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[5U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U]);
    __Vtemp_4[6U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[6U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U]);
    __Vtemp_4[7U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[7U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U]);
    __Vtemp_4[8U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[8U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U]);
    __Vtemp_4[9U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[9U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[9U]);
    __Vtemp_4[0xaU] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0xaU] 
                       & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xaU]);
    __Vtemp_4[0xbU] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0xbU] 
                       & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xbU]);
    __Vtemp_4[0xcU] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0xcU] 
                       & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xcU]);
    __Vtemp_4[0xdU] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0xdU] 
                       & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xdU]);
    __Vtemp_4[0xeU] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0xeU] 
                       & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU]);
    __Vtemp_4[0xfU] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0xfU] 
                       & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xfU]);
    __Vtemp_4[0x10U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x10U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x10U]);
    __Vtemp_4[0x11U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x11U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x11U]);
    __Vtemp_4[0x12U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x12U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x12U]);
    __Vtemp_4[0x13U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x13U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x13U]);
    __Vtemp_4[0x14U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x14U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x14U]);
    __Vtemp_4[0x15U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x15U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x15U]);
    __Vtemp_4[0x16U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x16U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x16U]);
    __Vtemp_4[0x17U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x17U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x17U]);
    __Vtemp_4[0x18U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x18U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x18U]);
    __Vtemp_4[0x19U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x19U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x19U]);
    __Vtemp_4[0x1aU] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x1aU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                            << 0x1cU) | vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x1aU]));
    __Vtemp_4[0x1bU] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x1bU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                                      << 0x1cU)));
    __Vtemp_4[0x1cU] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x1cU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                                      << 0x1cU)));
    __Vtemp_4[0x1dU] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x1dU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                                      << 0x1cU)));
    __Vtemp_4[0x1eU] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x1eU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                                      << 0x1cU)));
    __Vtemp_4[0x1fU] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x1fU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                                      << 0x1cU)));
    __Vtemp_4[0x20U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x20U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                                      << 0x1cU)));
    __Vtemp_4[0x21U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x21U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                                      << 0x1cU)));
    __Vtemp_4[0x22U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x22U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                                      << 0x1cU)));
    __Vtemp_4[0x23U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x23U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[9U] 
                                      << 0x1cU)));
    __Vtemp_4[0x24U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x24U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[9U] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xaU] 
                                      << 0x1cU)));
    __Vtemp_4[0x25U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x25U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xaU] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xbU] 
                                      << 0x1cU)));
    __Vtemp_4[0x26U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x26U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xbU] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xcU] 
                                      << 0x1cU)));
    __Vtemp_4[0x27U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x27U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xcU] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xdU] 
                                      << 0x1cU)));
    __Vtemp_4[0x28U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x28U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xdU] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU] 
                                      << 0x1cU)));
    __Vtemp_4[0x29U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x29U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xfU] 
                                      << 0x1cU)));
    __Vtemp_4[0x2aU] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x2aU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xfU] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x10U] 
                                      << 0x1cU)));
    __Vtemp_4[0x2bU] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x2bU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x10U] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x11U] 
                                      << 0x1cU)));
    __Vtemp_4[0x2cU] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x2cU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x11U] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x12U] 
                                      << 0x1cU)));
    __Vtemp_4[0x2dU] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x2dU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x12U] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x13U] 
                                      << 0x1cU)));
    __Vtemp_4[0x2eU] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x2eU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x13U] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x14U] 
                                      << 0x1cU)));
    __Vtemp_4[0x2fU] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x2fU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x14U] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x15U] 
                                      << 0x1cU)));
    __Vtemp_4[0x30U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x30U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x15U] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x16U] 
                                      << 0x1cU)));
    __Vtemp_4[0x31U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x31U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x16U] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x17U] 
                                      << 0x1cU)));
    __Vtemp_4[0x32U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x32U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x17U] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x18U] 
                                      << 0x1cU)));
    __Vtemp_4[0x33U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x33U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x18U] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x19U] 
                                      << 0x1cU)));
    __Vtemp_4[0x34U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x34U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x19U] 
                            >> 4U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x1aU] 
                                      << 0x1cU)));
    __Vtemp_4[0x35U] = (Vrtlsim_shim__ConstPool__CONST_hb216270b_0[0x35U] 
                        & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x1aU] 
                           >> 4U));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs1_data 
        = ((0x35bU >= ((IData)(0x203U) + (0xffU & VL_SHIFTL_III(8,32,32, 
                                                                vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__g_last_tid__DOT__last_tid_select__DOT__g_msb__DOT__g_model1__DOT__find_first__DOT__d_n
                                                                [0U], 5U))))
            ? (((0U == (0x1fU & ((IData)(0x203U) + 
                                 (0xffU & VL_SHIFTL_III(8,32,32, 
                                                        vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__g_last_tid__DOT__last_tid_select__DOT__g_msb__DOT__g_model1__DOT__find_first__DOT__d_n
                                                        [0U], 5U)))))
                 ? 0U : (__Vtemp_4[(((IData)(0x222U) 
                                     + (0xffU & VL_SHIFTL_III(8,32,32, 
                                                              vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__g_last_tid__DOT__last_tid_select__DOT__g_msb__DOT__g_model1__DOT__find_first__DOT__d_n
                                                              [0U], 5U))) 
                                    >> 5U)] << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0x203U) 
                                                      + 
                                                      (0xffU 
                                                       & VL_SHIFTL_III(8,32,32, 
                                                                       vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__g_last_tid__DOT__last_tid_select__DOT__g_msb__DOT__g_model1__DOT__find_first__DOT__d_n
                                                                       [0U], 5U))))))) 
               | (__Vtemp_4[(((IData)(0x203U) + (0xffU 
                                                 & VL_SHIFTL_III(8,32,32, 
                                                                 vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__g_last_tid__DOT__last_tid_select__DOT__g_msb__DOT__g_model1__DOT__find_first__DOT__d_n
                                                                 [0U], 5U))) 
                             >> 5U)] >> (0x1fU & ((IData)(0x203U) 
                                                  + 
                                                  (0xffU 
                                                   & VL_SHIFTL_III(8,32,32, 
                                                                   vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__g_last_tid__DOT__last_tid_select__DOT__g_msb__DOT__g_model1__DOT__find_first__DOT__d_n
                                                                   [0U], 5U))))))
            : vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vxrand_h8d944da6__0);
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn_wmask 
        = ((0xeU & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn_wmask)) 
           | ((0U < (7U & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs1_data)) 
              & (0U != (3U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x1aU] 
                              >> 0x19U)))));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn_wmask 
        = ((0xdU & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn_wmask)) 
           | (((1U < (7U & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs1_data)) 
               & (1U != (3U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x1aU] 
                               >> 0x19U)))) << 1U));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn_wmask 
        = ((0xbU & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn_wmask)) 
           | (((2U < (7U & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs1_data)) 
               & (2U != (3U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x1aU] 
                               >> 0x19U)))) << 2U));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn_wmask 
        = ((7U & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn_wmask)) 
           | (((3U < (7U & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs1_data)) 
               & (3U != (3U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x1aU] 
                               >> 0x19U)))) << 3U));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn 
        = (((QData)((IData)((1U == (0xfU & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x19U] 
                                            >> 0xfU))))) 
            << 0x22U) | (((QData)((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn_wmask)) 
                          << 0x1eU) | (QData)((IData)(
                                                      ([&]() {
                            vlSelfRef.__Vfunc_from_fullPC__1579__pc 
                                = vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs2_data;
                            vlSelfRef.__Vfunc_from_fullPC__1579__Vfuncout 
                                = (vlSelfRef.__Vfunc_from_fullPC__1579__pc 
                                   >> 2U);
                        }(), vlSelfRef.__Vfunc_from_fullPC__1579__Vfuncout)))));
    __Vtemp_7[2U] = (((0x3fU & ((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn) 
                                >> 6U)) | ((IData)(
                                                   (((vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__split 
                                                      << 4U) 
                                                     | (QData)((IData)(
                                                                       (((3U 
                                                                          == 
                                                                          (0xfU 
                                                                           & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x19U] 
                                                                              >> 0xfU))) 
                                                                         << 3U) 
                                                                        | (7U 
                                                                           & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs1_data))))) 
                                                    >> 0x20U)) 
                                           >> 0x1aU)) 
                     | ((((5U == (0xfU & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x19U] 
                                          >> 0xfU)))
                           ? ((0U != (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__then_tmask))
                               ? (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__then_tmask)
                               : vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs2_data)
                           : vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs1_data) 
                         << 0x1dU) | ((0x3ffffc0U & 
                                       ((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn) 
                                        >> 6U)) | ((IData)(
                                                           (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn 
                                                            >> 0x20U)) 
                                                   << 0x1aU))));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellinp__wctl_reg__data_in[0U] 
        = (((IData)(((vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__split 
                      << 4U) | (QData)((IData)((((3U 
                                                  == 
                                                  (0xfU 
                                                   & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x19U] 
                                                      >> 0xfU))) 
                                                 << 3U) 
                                                | (7U 
                                                   & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs1_data)))))) 
            << 6U) | (((4U == (0xfU & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x19U] 
                                       >> 0xfU))) << 5U) 
                      | ((0x10U & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs1_data 
                                   << 4U)) | ((6U & 
                                               ((vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs2_data 
                                                 - (IData)(1U)) 
                                                << 1U)) 
                                              | (1U 
                                                 == 
                                                 (3U 
                                                  & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs2_data))))));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellinp__wctl_reg__data_in[1U] 
        = (((IData)(((vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__split 
                      << 4U) | (QData)((IData)((((3U 
                                                  == 
                                                  (0xfU 
                                                   & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x19U] 
                                                      >> 0xfU))) 
                                                 << 3U) 
                                                | (7U 
                                                   & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs1_data)))))) 
            >> 0x1aU) | (((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn) 
                          << 0x1aU) | ((IData)((((vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__split 
                                                  << 4U) 
                                                 | (QData)((IData)(
                                                                   (((3U 
                                                                      == 
                                                                      (0xfU 
                                                                       & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x19U] 
                                                                          >> 0xfU))) 
                                                                     << 3U) 
                                                                    | (7U 
                                                                       & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs1_data))))) 
                                                >> 0x20U)) 
                                       << 6U)));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellinp__wctl_reg__data_in[2U] 
        = __Vtemp_7[2U];
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellinp__wctl_reg__data_in[3U] 
        = (((((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch.__PVT__pe_req_valid) 
              & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rsp_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)) 
             & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U]) 
            << 8U) | ((0xc0U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x1aU] 
                                >> 0x13U)) | (0x3fU 
                                              & (((0x20U 
                                                   & (((5U 
                                                        == 
                                                        (0xfU 
                                                         & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x19U] 
                                                            >> 0xfU))) 
                                                       | (0U 
                                                          == 
                                                          (0xfU 
                                                           & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x19U] 
                                                              >> 0xfU)))) 
                                                      << 5U)) 
                                                  | (0x1fU 
                                                     & (((5U 
                                                          == 
                                                          (0xfU 
                                                           & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x19U] 
                                                              >> 0xfU)))
                                                          ? 
                                                         ((0U 
                                                           != (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__then_tmask))
                                                           ? (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__then_tmask)
                                                           : vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs2_data)
                                                          : vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs1_data) 
                                                        >> 3U))) 
                                                 | ((IData)(
                                                            (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn 
                                                             >> 0x20U)) 
                                                    >> 6U)))));
}
