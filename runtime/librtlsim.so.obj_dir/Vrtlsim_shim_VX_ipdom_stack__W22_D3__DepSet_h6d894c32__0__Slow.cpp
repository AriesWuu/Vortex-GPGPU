// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrtlsim_shim.h for the primary calling header

#include "Vrtlsim_shim__pch.h"
#include "Vrtlsim_shim_VX_ipdom_stack__W22_D3.h"
#include "Vrtlsim_shim__Syms.h"

VL_ATTR_COLD void Vrtlsim_shim_VX_ipdom_stack__W22_D3___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_stack__0(Vrtlsim_shim_VX_ipdom_stack__W22_D3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_ipdom_stack__W22_D3___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_stack__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*4:0*/ __PVT__raddr;
    __PVT__raddr = 0;
    // Body
    __PVT__raddr = ((0x18U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                              >> 5U)) | (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                << 1U) 
                                               | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0x1fU))));
    vlSelfRef.wr_ptr = (((IData)(vlSelfRef.__PVT__g_addressing__BRA__7__KET____DOT__wr_ptr_r) 
                         << 0xeU) | (((IData)(vlSelfRef.__PVT__g_addressing__BRA__6__KET____DOT__wr_ptr_r) 
                                      << 0xcU) | (((IData)(vlSelfRef.__PVT__g_addressing__BRA__5__KET____DOT__wr_ptr_r) 
                                                   << 0xaU) 
                                                  | (((IData)(vlSelfRef.__PVT__g_addressing__BRA__4__KET____DOT__wr_ptr_r) 
                                                      << 8U) 
                                                     | (((IData)(vlSelfRef.__PVT__g_addressing__BRA__3__KET____DOT__wr_ptr_r) 
                                                         << 6U) 
                                                        | (((IData)(vlSelfRef.__PVT__g_addressing__BRA__2__KET____DOT__wr_ptr_r) 
                                                            << 4U) 
                                                           | (((IData)(vlSelfRef.__PVT__g_addressing__BRA__1__KET____DOT__wr_ptr_r) 
                                                               << 2U) 
                                                              | (IData)(vlSelfRef.__PVT__g_addressing__BRA__0__KET____DOT__wr_ptr_r))))))));
    vlSelfRef.__PVT__g_addressing__BRA__0__KET____DOT__push_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push) 
           & (0U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelfRef.__PVT__g_addressing__BRA__1__KET____DOT__push_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push) 
           & (1U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelfRef.__PVT__g_addressing__BRA__2__KET____DOT__push_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push) 
           & (2U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelfRef.__PVT__g_addressing__BRA__3__KET____DOT__push_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push) 
           & (3U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelfRef.__PVT__g_addressing__BRA__4__KET____DOT__push_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push) 
           & (4U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelfRef.__PVT__g_addressing__BRA__5__KET____DOT__push_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push) 
           & (5U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelfRef.__PVT__g_addressing__BRA__6__KET____DOT__push_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push) 
           & (6U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelfRef.__PVT__g_addressing__BRA__7__KET____DOT__push_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push) 
           & (7U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    if (((IData)(vlSelfRef.__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_write) 
         & ((IData)(vlSelfRef.__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_waddr) 
            == (IData)(__PVT__raddr)))) {
        vlSelfRef.__Vcellout__ipdom_store__rdata[0U] 
            = vlSelfRef.__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_data[0U];
        vlSelfRef.__Vcellout__ipdom_store__rdata[1U] 
            = vlSelfRef.__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_data[1U];
        vlSelfRef.__Vcellout__ipdom_store__rdata[2U] 
            = vlSelfRef.__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_data[2U];
    } else if ((0x17U >= (IData)(__PVT__raddr))) {
        vlSelfRef.__Vcellout__ipdom_store__rdata[0U] 
            = vlSelfRef.__PVT__ipdom_store__DOT__ram
            [__PVT__raddr][0U];
        vlSelfRef.__Vcellout__ipdom_store__rdata[1U] 
            = vlSelfRef.__PVT__ipdom_store__DOT__ram
            [__PVT__raddr][1U];
        vlSelfRef.__Vcellout__ipdom_store__rdata[2U] 
            = vlSelfRef.__PVT__ipdom_store__DOT__ram
            [__PVT__raddr][2U];
    } else {
        vlSelfRef.__Vcellout__ipdom_store__rdata[0U] 
            = vlSelfRef.ipdom_store__DOT____Vxrand_h91116ad2__1[0U];
        vlSelfRef.__Vcellout__ipdom_store__rdata[1U] 
            = vlSelfRef.ipdom_store__DOT____Vxrand_h91116ad2__1[1U];
        vlSelfRef.__Vcellout__ipdom_store__rdata[2U] 
            = vlSelfRef.ipdom_store__DOT____Vxrand_h91116ad2__1[2U];
    }
    vlSelfRef.__PVT__waddr = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push)
                               ? ((0x18U & (((IData)(vlSelfRef.wr_ptr) 
                                             >> (0xfU 
                                                 & VL_SHIFTL_III(4,4,32, 
                                                                 (7U 
                                                                  & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                      << 1U) 
                                                                     | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                        >> 0x1fU))), 1U))) 
                                            << 3U)) 
                                  | (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                            << 1U) 
                                           | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                              >> 0x1fU))))
                               : (IData)(__PVT__raddr));
}

VL_ATTR_COLD void Vrtlsim_shim_VX_ipdom_stack__W22_D3___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_stack__1(Vrtlsim_shim_VX_ipdom_stack__W22_D3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_ipdom_stack__W22_D3___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_stack__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__g_addressing__BRA__0__KET____DOT__pop_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_pop) 
           & (0U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelfRef.__PVT__g_addressing__BRA__1__KET____DOT__pop_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_pop) 
           & (1U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelfRef.__PVT__g_addressing__BRA__2__KET____DOT__pop_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_pop) 
           & (2U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelfRef.__PVT__g_addressing__BRA__3__KET____DOT__pop_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_pop) 
           & (3U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelfRef.__PVT__g_addressing__BRA__4__KET____DOT__pop_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_pop) 
           & (4U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelfRef.__PVT__g_addressing__BRA__5__KET____DOT__pop_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_pop) 
           & (5U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelfRef.__PVT__g_addressing__BRA__6__KET____DOT__pop_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_pop) 
           & (6U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelfRef.__PVT__g_addressing__BRA__7__KET____DOT__pop_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_pop) 
           & (7U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelfRef.__Vcellinp__ipdom_store__write = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_pop) 
                                                | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push));
}

VL_ATTR_COLD void Vrtlsim_shim_VX_ipdom_stack__W22_D3___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_stack__0(Vrtlsim_shim_VX_ipdom_stack__W22_D3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_ipdom_stack__W22_D3___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_stack__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*4:0*/ __PVT__raddr;
    __PVT__raddr = 0;
    // Body
    __PVT__raddr = ((0x18U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                              >> 5U)) | (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                << 1U) 
                                               | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0x1fU))));
    vlSelfRef.wr_ptr = (((IData)(vlSelfRef.__PVT__g_addressing__BRA__7__KET____DOT__wr_ptr_r) 
                         << 0xeU) | (((IData)(vlSelfRef.__PVT__g_addressing__BRA__6__KET____DOT__wr_ptr_r) 
                                      << 0xcU) | (((IData)(vlSelfRef.__PVT__g_addressing__BRA__5__KET____DOT__wr_ptr_r) 
                                                   << 0xaU) 
                                                  | (((IData)(vlSelfRef.__PVT__g_addressing__BRA__4__KET____DOT__wr_ptr_r) 
                                                      << 8U) 
                                                     | (((IData)(vlSelfRef.__PVT__g_addressing__BRA__3__KET____DOT__wr_ptr_r) 
                                                         << 6U) 
                                                        | (((IData)(vlSelfRef.__PVT__g_addressing__BRA__2__KET____DOT__wr_ptr_r) 
                                                            << 4U) 
                                                           | (((IData)(vlSelfRef.__PVT__g_addressing__BRA__1__KET____DOT__wr_ptr_r) 
                                                               << 2U) 
                                                              | (IData)(vlSelfRef.__PVT__g_addressing__BRA__0__KET____DOT__wr_ptr_r))))))));
    vlSelfRef.__PVT__g_addressing__BRA__0__KET____DOT__push_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push) 
           & (0U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelfRef.__PVT__g_addressing__BRA__1__KET____DOT__push_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push) 
           & (1U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelfRef.__PVT__g_addressing__BRA__2__KET____DOT__push_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push) 
           & (2U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelfRef.__PVT__g_addressing__BRA__3__KET____DOT__push_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push) 
           & (3U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelfRef.__PVT__g_addressing__BRA__4__KET____DOT__push_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push) 
           & (4U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelfRef.__PVT__g_addressing__BRA__5__KET____DOT__push_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push) 
           & (5U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelfRef.__PVT__g_addressing__BRA__6__KET____DOT__push_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push) 
           & (6U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelfRef.__PVT__g_addressing__BRA__7__KET____DOT__push_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push) 
           & (7U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    if (((IData)(vlSelfRef.__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_write) 
         & ((IData)(vlSelfRef.__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_waddr) 
            == (IData)(__PVT__raddr)))) {
        vlSelfRef.__Vcellout__ipdom_store__rdata[0U] 
            = vlSelfRef.__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_data[0U];
        vlSelfRef.__Vcellout__ipdom_store__rdata[1U] 
            = vlSelfRef.__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_data[1U];
        vlSelfRef.__Vcellout__ipdom_store__rdata[2U] 
            = vlSelfRef.__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_data[2U];
    } else if ((0x17U >= (IData)(__PVT__raddr))) {
        vlSelfRef.__Vcellout__ipdom_store__rdata[0U] 
            = vlSelfRef.__PVT__ipdom_store__DOT__ram
            [__PVT__raddr][0U];
        vlSelfRef.__Vcellout__ipdom_store__rdata[1U] 
            = vlSelfRef.__PVT__ipdom_store__DOT__ram
            [__PVT__raddr][1U];
        vlSelfRef.__Vcellout__ipdom_store__rdata[2U] 
            = vlSelfRef.__PVT__ipdom_store__DOT__ram
            [__PVT__raddr][2U];
    } else {
        vlSelfRef.__Vcellout__ipdom_store__rdata[0U] 
            = vlSelfRef.ipdom_store__DOT____Vxrand_h91116ad2__1[0U];
        vlSelfRef.__Vcellout__ipdom_store__rdata[1U] 
            = vlSelfRef.ipdom_store__DOT____Vxrand_h91116ad2__1[1U];
        vlSelfRef.__Vcellout__ipdom_store__rdata[2U] 
            = vlSelfRef.ipdom_store__DOT____Vxrand_h91116ad2__1[2U];
    }
    vlSelfRef.__PVT__waddr = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push)
                               ? ((0x18U & (((IData)(vlSelfRef.wr_ptr) 
                                             >> (0xfU 
                                                 & VL_SHIFTL_III(4,4,32, 
                                                                 (7U 
                                                                  & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                      << 1U) 
                                                                     | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                        >> 0x1fU))), 1U))) 
                                            << 3U)) 
                                  | (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                            << 1U) 
                                           | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                              >> 0x1fU))))
                               : (IData)(__PVT__raddr));
}

VL_ATTR_COLD void Vrtlsim_shim_VX_ipdom_stack__W22_D3___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_stack__1(Vrtlsim_shim_VX_ipdom_stack__W22_D3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_ipdom_stack__W22_D3___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_stack__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__g_addressing__BRA__0__KET____DOT__pop_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_pop) 
           & (0U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelfRef.__PVT__g_addressing__BRA__1__KET____DOT__pop_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_pop) 
           & (1U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelfRef.__PVT__g_addressing__BRA__2__KET____DOT__pop_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_pop) 
           & (2U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelfRef.__PVT__g_addressing__BRA__3__KET____DOT__pop_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_pop) 
           & (3U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelfRef.__PVT__g_addressing__BRA__4__KET____DOT__pop_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_pop) 
           & (4U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelfRef.__PVT__g_addressing__BRA__5__KET____DOT__pop_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_pop) 
           & (5U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelfRef.__PVT__g_addressing__BRA__6__KET____DOT__pop_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_pop) 
           & (6U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelfRef.__PVT__g_addressing__BRA__7__KET____DOT__pop_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_pop) 
           & (7U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelfRef.__Vcellinp__ipdom_store__write = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_pop) 
                                                | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push));
}

VL_ATTR_COLD void Vrtlsim_shim_VX_ipdom_stack__W22_D3___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_stack__0(Vrtlsim_shim_VX_ipdom_stack__W22_D3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_ipdom_stack__W22_D3___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_stack__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*4:0*/ __PVT__raddr;
    __PVT__raddr = 0;
    // Body
    __PVT__raddr = ((0x18U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                              >> 5U)) | (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                << 1U) 
                                               | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0x1fU))));
    vlSelfRef.wr_ptr = (((IData)(vlSelfRef.__PVT__g_addressing__BRA__7__KET____DOT__wr_ptr_r) 
                         << 0xeU) | (((IData)(vlSelfRef.__PVT__g_addressing__BRA__6__KET____DOT__wr_ptr_r) 
                                      << 0xcU) | (((IData)(vlSelfRef.__PVT__g_addressing__BRA__5__KET____DOT__wr_ptr_r) 
                                                   << 0xaU) 
                                                  | (((IData)(vlSelfRef.__PVT__g_addressing__BRA__4__KET____DOT__wr_ptr_r) 
                                                      << 8U) 
                                                     | (((IData)(vlSelfRef.__PVT__g_addressing__BRA__3__KET____DOT__wr_ptr_r) 
                                                         << 6U) 
                                                        | (((IData)(vlSelfRef.__PVT__g_addressing__BRA__2__KET____DOT__wr_ptr_r) 
                                                            << 4U) 
                                                           | (((IData)(vlSelfRef.__PVT__g_addressing__BRA__1__KET____DOT__wr_ptr_r) 
                                                               << 2U) 
                                                              | (IData)(vlSelfRef.__PVT__g_addressing__BRA__0__KET____DOT__wr_ptr_r))))))));
    vlSelfRef.__PVT__g_addressing__BRA__0__KET____DOT__push_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push) 
           & (0U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelfRef.__PVT__g_addressing__BRA__1__KET____DOT__push_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push) 
           & (1U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelfRef.__PVT__g_addressing__BRA__2__KET____DOT__push_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push) 
           & (2U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelfRef.__PVT__g_addressing__BRA__3__KET____DOT__push_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push) 
           & (3U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelfRef.__PVT__g_addressing__BRA__4__KET____DOT__push_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push) 
           & (4U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelfRef.__PVT__g_addressing__BRA__5__KET____DOT__push_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push) 
           & (5U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelfRef.__PVT__g_addressing__BRA__6__KET____DOT__push_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push) 
           & (6U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelfRef.__PVT__g_addressing__BRA__7__KET____DOT__push_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push) 
           & (7U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    if (((IData)(vlSelfRef.__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_write) 
         & ((IData)(vlSelfRef.__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_waddr) 
            == (IData)(__PVT__raddr)))) {
        vlSelfRef.__Vcellout__ipdom_store__rdata[0U] 
            = vlSelfRef.__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_data[0U];
        vlSelfRef.__Vcellout__ipdom_store__rdata[1U] 
            = vlSelfRef.__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_data[1U];
        vlSelfRef.__Vcellout__ipdom_store__rdata[2U] 
            = vlSelfRef.__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_data[2U];
    } else if ((0x17U >= (IData)(__PVT__raddr))) {
        vlSelfRef.__Vcellout__ipdom_store__rdata[0U] 
            = vlSelfRef.__PVT__ipdom_store__DOT__ram
            [__PVT__raddr][0U];
        vlSelfRef.__Vcellout__ipdom_store__rdata[1U] 
            = vlSelfRef.__PVT__ipdom_store__DOT__ram
            [__PVT__raddr][1U];
        vlSelfRef.__Vcellout__ipdom_store__rdata[2U] 
            = vlSelfRef.__PVT__ipdom_store__DOT__ram
            [__PVT__raddr][2U];
    } else {
        vlSelfRef.__Vcellout__ipdom_store__rdata[0U] 
            = vlSelfRef.ipdom_store__DOT____Vxrand_h91116ad2__1[0U];
        vlSelfRef.__Vcellout__ipdom_store__rdata[1U] 
            = vlSelfRef.ipdom_store__DOT____Vxrand_h91116ad2__1[1U];
        vlSelfRef.__Vcellout__ipdom_store__rdata[2U] 
            = vlSelfRef.ipdom_store__DOT____Vxrand_h91116ad2__1[2U];
    }
    vlSelfRef.__PVT__waddr = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push)
                               ? ((0x18U & (((IData)(vlSelfRef.wr_ptr) 
                                             >> (0xfU 
                                                 & VL_SHIFTL_III(4,4,32, 
                                                                 (7U 
                                                                  & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                      << 1U) 
                                                                     | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                        >> 0x1fU))), 1U))) 
                                            << 3U)) 
                                  | (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                            << 1U) 
                                           | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                              >> 0x1fU))))
                               : (IData)(__PVT__raddr));
}

VL_ATTR_COLD void Vrtlsim_shim_VX_ipdom_stack__W22_D3___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_stack__1(Vrtlsim_shim_VX_ipdom_stack__W22_D3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_ipdom_stack__W22_D3___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_stack__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__g_addressing__BRA__0__KET____DOT__pop_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_pop) 
           & (0U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelfRef.__PVT__g_addressing__BRA__1__KET____DOT__pop_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_pop) 
           & (1U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelfRef.__PVT__g_addressing__BRA__2__KET____DOT__pop_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_pop) 
           & (2U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelfRef.__PVT__g_addressing__BRA__3__KET____DOT__pop_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_pop) 
           & (3U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelfRef.__PVT__g_addressing__BRA__4__KET____DOT__pop_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_pop) 
           & (4U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelfRef.__PVT__g_addressing__BRA__5__KET____DOT__pop_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_pop) 
           & (5U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelfRef.__PVT__g_addressing__BRA__6__KET____DOT__pop_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_pop) 
           & (6U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelfRef.__PVT__g_addressing__BRA__7__KET____DOT__pop_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_pop) 
           & (7U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelfRef.__Vcellinp__ipdom_store__write = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_pop) 
                                                | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push));
}

VL_ATTR_COLD void Vrtlsim_shim_VX_ipdom_stack__W22_D3___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_stack__0(Vrtlsim_shim_VX_ipdom_stack__W22_D3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_ipdom_stack__W22_D3___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_stack__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*4:0*/ __PVT__raddr;
    __PVT__raddr = 0;
    // Body
    __PVT__raddr = ((0x18U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                              >> 5U)) | (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                << 1U) 
                                               | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0x1fU))));
    vlSelfRef.wr_ptr = (((IData)(vlSelfRef.__PVT__g_addressing__BRA__7__KET____DOT__wr_ptr_r) 
                         << 0xeU) | (((IData)(vlSelfRef.__PVT__g_addressing__BRA__6__KET____DOT__wr_ptr_r) 
                                      << 0xcU) | (((IData)(vlSelfRef.__PVT__g_addressing__BRA__5__KET____DOT__wr_ptr_r) 
                                                   << 0xaU) 
                                                  | (((IData)(vlSelfRef.__PVT__g_addressing__BRA__4__KET____DOT__wr_ptr_r) 
                                                      << 8U) 
                                                     | (((IData)(vlSelfRef.__PVT__g_addressing__BRA__3__KET____DOT__wr_ptr_r) 
                                                         << 6U) 
                                                        | (((IData)(vlSelfRef.__PVT__g_addressing__BRA__2__KET____DOT__wr_ptr_r) 
                                                            << 4U) 
                                                           | (((IData)(vlSelfRef.__PVT__g_addressing__BRA__1__KET____DOT__wr_ptr_r) 
                                                               << 2U) 
                                                              | (IData)(vlSelfRef.__PVT__g_addressing__BRA__0__KET____DOT__wr_ptr_r))))))));
    vlSelfRef.__PVT__g_addressing__BRA__0__KET____DOT__push_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push) 
           & (0U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelfRef.__PVT__g_addressing__BRA__1__KET____DOT__push_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push) 
           & (1U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelfRef.__PVT__g_addressing__BRA__2__KET____DOT__push_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push) 
           & (2U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelfRef.__PVT__g_addressing__BRA__3__KET____DOT__push_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push) 
           & (3U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelfRef.__PVT__g_addressing__BRA__4__KET____DOT__push_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push) 
           & (4U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelfRef.__PVT__g_addressing__BRA__5__KET____DOT__push_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push) 
           & (5U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelfRef.__PVT__g_addressing__BRA__6__KET____DOT__push_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push) 
           & (6U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelfRef.__PVT__g_addressing__BRA__7__KET____DOT__push_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push) 
           & (7U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    if (((IData)(vlSelfRef.__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_write) 
         & ((IData)(vlSelfRef.__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_waddr) 
            == (IData)(__PVT__raddr)))) {
        vlSelfRef.__Vcellout__ipdom_store__rdata[0U] 
            = vlSelfRef.__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_data[0U];
        vlSelfRef.__Vcellout__ipdom_store__rdata[1U] 
            = vlSelfRef.__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_data[1U];
        vlSelfRef.__Vcellout__ipdom_store__rdata[2U] 
            = vlSelfRef.__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_data[2U];
    } else if ((0x17U >= (IData)(__PVT__raddr))) {
        vlSelfRef.__Vcellout__ipdom_store__rdata[0U] 
            = vlSelfRef.__PVT__ipdom_store__DOT__ram
            [__PVT__raddr][0U];
        vlSelfRef.__Vcellout__ipdom_store__rdata[1U] 
            = vlSelfRef.__PVT__ipdom_store__DOT__ram
            [__PVT__raddr][1U];
        vlSelfRef.__Vcellout__ipdom_store__rdata[2U] 
            = vlSelfRef.__PVT__ipdom_store__DOT__ram
            [__PVT__raddr][2U];
    } else {
        vlSelfRef.__Vcellout__ipdom_store__rdata[0U] 
            = vlSelfRef.ipdom_store__DOT____Vxrand_h91116ad2__1[0U];
        vlSelfRef.__Vcellout__ipdom_store__rdata[1U] 
            = vlSelfRef.ipdom_store__DOT____Vxrand_h91116ad2__1[1U];
        vlSelfRef.__Vcellout__ipdom_store__rdata[2U] 
            = vlSelfRef.ipdom_store__DOT____Vxrand_h91116ad2__1[2U];
    }
    vlSelfRef.__PVT__waddr = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push)
                               ? ((0x18U & (((IData)(vlSelfRef.wr_ptr) 
                                             >> (0xfU 
                                                 & VL_SHIFTL_III(4,4,32, 
                                                                 (7U 
                                                                  & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                      << 1U) 
                                                                     | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                        >> 0x1fU))), 1U))) 
                                            << 3U)) 
                                  | (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                            << 1U) 
                                           | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                              >> 0x1fU))))
                               : (IData)(__PVT__raddr));
}

VL_ATTR_COLD void Vrtlsim_shim_VX_ipdom_stack__W22_D3___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_stack__1(Vrtlsim_shim_VX_ipdom_stack__W22_D3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_ipdom_stack__W22_D3___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_stack__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__g_addressing__BRA__0__KET____DOT__pop_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_pop) 
           & (0U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelfRef.__PVT__g_addressing__BRA__1__KET____DOT__pop_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_pop) 
           & (1U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelfRef.__PVT__g_addressing__BRA__2__KET____DOT__pop_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_pop) 
           & (2U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelfRef.__PVT__g_addressing__BRA__3__KET____DOT__pop_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_pop) 
           & (3U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelfRef.__PVT__g_addressing__BRA__4__KET____DOT__pop_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_pop) 
           & (4U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelfRef.__PVT__g_addressing__BRA__5__KET____DOT__pop_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_pop) 
           & (5U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelfRef.__PVT__g_addressing__BRA__6__KET____DOT__pop_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_pop) 
           & (6U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelfRef.__PVT__g_addressing__BRA__7__KET____DOT__pop_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_pop) 
           & (7U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelfRef.__Vcellinp__ipdom_store__write = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_pop) 
                                                | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push));
}
