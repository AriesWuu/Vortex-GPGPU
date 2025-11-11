// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrtlsim_shim.h for the primary calling header

#include "Vrtlsim_shim__pch.h"
#include "Vrtlsim_shim__Syms.h"
#include "Vrtlsim_shim___024root.h"

VL_ATTR_COLD void Vrtlsim_shim___024root___stl_comb__TOP__81(Vrtlsim_shim___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrtlsim_shim___024root___stl_comb__TOP__81\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<7>/*223:0*/ __Vtemp_6;
    // Body
    __Vtemp_6[0U] = (IData)((((QData)((IData)((0x7ffffffU 
                                               & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xbU] 
                                                   << 5U) 
                                                  | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xaU] 
                                                     >> 0x1bU))))) 
                              << 0x1bU) | (QData)((IData)(
                                                          (0x7ffffffU 
                                                           & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xaU] 
                                                               << 3U) 
                                                              | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[9U] 
                                                                 >> 0x1dU)))))));
    __Vtemp_6[1U] = ((0xffc00000U & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xcU] 
                                      << 0x1dU) | (0x1fc00000U 
                                                   & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xbU] 
                                                      >> 3U)))) 
                     | (IData)(((((QData)((IData)((0x7ffffffU 
                                                   & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xbU] 
                                                       << 5U) 
                                                      | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xaU] 
                                                         >> 0x1bU))))) 
                                  << 0x1bU) | (QData)((IData)(
                                                              (0x7ffffffU 
                                                               & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xaU] 
                                                                   << 3U) 
                                                                  | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[9U] 
                                                                     >> 0x1dU)))))) 
                                >> 0x20U)));
    __Vtemp_6[2U] = ((0xfffe0000U & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xdU] 
                                      << 0x1aU) | (0x3fe0000U 
                                                   & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xcU] 
                                                      >> 6U)))) 
                     | (0x1ffffU & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xcU] 
                                    >> 3U)));
    __Vtemp_6[3U] = ((0xfffff000U & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xeU] 
                                      << 0x17U) | (0x7ff000U 
                                                   & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xdU] 
                                                      >> 9U)))) 
                     | (0xfffU & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xdU] 
                                  >> 6U)));
    __Vtemp_6[4U] = ((0xffffff80U & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xfU] 
                                      << 0x14U) | (0xfff80U 
                                                   & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xeU] 
                                                      >> 0xcU)))) 
                     | (0x7fU & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xeU] 
                                 >> 9U)));
    __Vtemp_6[5U] = ((0xe0000000U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0x10U] 
                                     << 0xeU)) | ((0x1ffffffcU 
                                                   & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0x10U] 
                                                       << 0x11U) 
                                                      | (0x1fffcU 
                                                         & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xfU] 
                                                            >> 0xfU)))) 
                                                  | (3U 
                                                     & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xfU] 
                                                        >> 0xcU))));
    __Vtemp_6[6U] = (0xffffffU & ((0x1fffc000U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0x11U] 
                                                  << 0xeU)) 
                                  | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0x10U] 
                                     >> 0x12U)));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__seed_addr_n 
        = (0x7ffffffU & ((0xd7U >= (0xffU & ((IData)(0x1bU) 
                                             * vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__g_seed_gen__BRA__0__KET____DOT__batch_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                             [0U])))
                          ? (((0U == (0x1fU & ((IData)(0x1bU) 
                                               * vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__g_seed_gen__BRA__0__KET____DOT__batch_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                               [0U])))
                               ? 0U : (__Vtemp_6[(((IData)(0x1aU) 
                                                   + 
                                                   (0xffU 
                                                    & ((IData)(0x1bU) 
                                                       * 
                                                       vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__g_seed_gen__BRA__0__KET____DOT__batch_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                       [0U]))) 
                                                  >> 5U)] 
                                       << ((IData)(0x20U) 
                                           - (0x1fU 
                                              & ((IData)(0x1bU) 
                                                 * 
                                                 vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__g_seed_gen__BRA__0__KET____DOT__batch_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                 [0U]))))) 
                             | (__Vtemp_6[(7U & (((IData)(0x1bU) 
                                                  * 
                                                  vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__g_seed_gen__BRA__0__KET____DOT__batch_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                  [0U]) 
                                                 >> 5U))] 
                                >> (0x1fU & ((IData)(0x1bU) 
                                             * vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__g_seed_gen__BRA__0__KET____DOT__batch_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                             [0U]))))
                          : vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT____Vxrand_h2f93c73e__0));
}

VL_ATTR_COLD void Vrtlsim_shim___024root___stl_comb__TOP__82(Vrtlsim_shim___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrtlsim_shim___024root___stl_comb__TOP__82\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<7>/*223:0*/ __Vtemp_6;
    // Body
    __Vtemp_6[0U] = (IData)((((QData)((IData)((0x7ffffffU 
                                               & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xbU] 
                                                   << 5U) 
                                                  | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xaU] 
                                                     >> 0x1bU))))) 
                              << 0x1bU) | (QData)((IData)(
                                                          (0x7ffffffU 
                                                           & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xaU] 
                                                               << 3U) 
                                                              | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[9U] 
                                                                 >> 0x1dU)))))));
    __Vtemp_6[1U] = ((0xffc00000U & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xcU] 
                                      << 0x1dU) | (0x1fc00000U 
                                                   & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xbU] 
                                                      >> 3U)))) 
                     | (IData)(((((QData)((IData)((0x7ffffffU 
                                                   & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xbU] 
                                                       << 5U) 
                                                      | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xaU] 
                                                         >> 0x1bU))))) 
                                  << 0x1bU) | (QData)((IData)(
                                                              (0x7ffffffU 
                                                               & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xaU] 
                                                                   << 3U) 
                                                                  | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[9U] 
                                                                     >> 0x1dU)))))) 
                                >> 0x20U)));
    __Vtemp_6[2U] = ((0xfffe0000U & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xdU] 
                                      << 0x1aU) | (0x3fe0000U 
                                                   & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xcU] 
                                                      >> 6U)))) 
                     | (0x1ffffU & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xcU] 
                                    >> 3U)));
    __Vtemp_6[3U] = ((0xfffff000U & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xeU] 
                                      << 0x17U) | (0x7ff000U 
                                                   & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xdU] 
                                                      >> 9U)))) 
                     | (0xfffU & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xdU] 
                                  >> 6U)));
    __Vtemp_6[4U] = ((0xffffff80U & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xfU] 
                                      << 0x14U) | (0xfff80U 
                                                   & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xeU] 
                                                      >> 0xcU)))) 
                     | (0x7fU & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xeU] 
                                 >> 9U)));
    __Vtemp_6[5U] = ((0xe0000000U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0x10U] 
                                     << 0xeU)) | ((0x1ffffffcU 
                                                   & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0x10U] 
                                                       << 0x11U) 
                                                      | (0x1fffcU 
                                                         & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xfU] 
                                                            >> 0xfU)))) 
                                                  | (3U 
                                                     & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xfU] 
                                                        >> 0xcU))));
    __Vtemp_6[6U] = (0xffffffU & ((0x1fffc000U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0x11U] 
                                                  << 0xeU)) 
                                  | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0x10U] 
                                     >> 0x12U)));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__seed_addr_n 
        = (0x7ffffffU & ((0xd7U >= (0xffU & ((IData)(0x1bU) 
                                             * vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__g_seed_gen__BRA__0__KET____DOT__batch_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                             [0U])))
                          ? (((0U == (0x1fU & ((IData)(0x1bU) 
                                               * vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__g_seed_gen__BRA__0__KET____DOT__batch_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                               [0U])))
                               ? 0U : (__Vtemp_6[(((IData)(0x1aU) 
                                                   + 
                                                   (0xffU 
                                                    & ((IData)(0x1bU) 
                                                       * 
                                                       vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__g_seed_gen__BRA__0__KET____DOT__batch_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                       [0U]))) 
                                                  >> 5U)] 
                                       << ((IData)(0x20U) 
                                           - (0x1fU 
                                              & ((IData)(0x1bU) 
                                                 * 
                                                 vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__g_seed_gen__BRA__0__KET____DOT__batch_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                 [0U]))))) 
                             | (__Vtemp_6[(7U & (((IData)(0x1bU) 
                                                  * 
                                                  vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__g_seed_gen__BRA__0__KET____DOT__batch_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                  [0U]) 
                                                 >> 5U))] 
                                >> (0x1fU & ((IData)(0x1bU) 
                                             * vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__g_seed_gen__BRA__0__KET____DOT__batch_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                             [0U]))))
                          : vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT____Vxrand_h2f93c73e__0));
}

VL_ATTR_COLD void Vrtlsim_shim___024root___stl_comb__TOP__83(Vrtlsim_shim___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrtlsim_shim___024root___stl_comb__TOP__83\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<7>/*223:0*/ __Vtemp_6;
    // Body
    __Vtemp_6[0U] = (IData)((((QData)((IData)((0x7ffffffU 
                                               & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xbU] 
                                                   << 5U) 
                                                  | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xaU] 
                                                     >> 0x1bU))))) 
                              << 0x1bU) | (QData)((IData)(
                                                          (0x7ffffffU 
                                                           & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xaU] 
                                                               << 3U) 
                                                              | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[9U] 
                                                                 >> 0x1dU)))))));
    __Vtemp_6[1U] = ((0xffc00000U & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xcU] 
                                      << 0x1dU) | (0x1fc00000U 
                                                   & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xbU] 
                                                      >> 3U)))) 
                     | (IData)(((((QData)((IData)((0x7ffffffU 
                                                   & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xbU] 
                                                       << 5U) 
                                                      | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xaU] 
                                                         >> 0x1bU))))) 
                                  << 0x1bU) | (QData)((IData)(
                                                              (0x7ffffffU 
                                                               & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xaU] 
                                                                   << 3U) 
                                                                  | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[9U] 
                                                                     >> 0x1dU)))))) 
                                >> 0x20U)));
    __Vtemp_6[2U] = ((0xfffe0000U & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xdU] 
                                      << 0x1aU) | (0x3fe0000U 
                                                   & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xcU] 
                                                      >> 6U)))) 
                     | (0x1ffffU & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xcU] 
                                    >> 3U)));
    __Vtemp_6[3U] = ((0xfffff000U & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xeU] 
                                      << 0x17U) | (0x7ff000U 
                                                   & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xdU] 
                                                      >> 9U)))) 
                     | (0xfffU & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xdU] 
                                  >> 6U)));
    __Vtemp_6[4U] = ((0xffffff80U & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xfU] 
                                      << 0x14U) | (0xfff80U 
                                                   & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xeU] 
                                                      >> 0xcU)))) 
                     | (0x7fU & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xeU] 
                                 >> 9U)));
    __Vtemp_6[5U] = ((0xe0000000U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0x10U] 
                                     << 0xeU)) | ((0x1ffffffcU 
                                                   & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0x10U] 
                                                       << 0x11U) 
                                                      | (0x1fffcU 
                                                         & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xfU] 
                                                            >> 0xfU)))) 
                                                  | (3U 
                                                     & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xfU] 
                                                        >> 0xcU))));
    __Vtemp_6[6U] = (0xffffffU & ((0x1fffc000U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0x11U] 
                                                  << 0xeU)) 
                                  | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0x10U] 
                                     >> 0x12U)));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__seed_addr_n 
        = (0x7ffffffU & ((0xd7U >= (0xffU & ((IData)(0x1bU) 
                                             * vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__g_seed_gen__BRA__0__KET____DOT__batch_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                             [0U])))
                          ? (((0U == (0x1fU & ((IData)(0x1bU) 
                                               * vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__g_seed_gen__BRA__0__KET____DOT__batch_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                               [0U])))
                               ? 0U : (__Vtemp_6[(((IData)(0x1aU) 
                                                   + 
                                                   (0xffU 
                                                    & ((IData)(0x1bU) 
                                                       * 
                                                       vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__g_seed_gen__BRA__0__KET____DOT__batch_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                       [0U]))) 
                                                  >> 5U)] 
                                       << ((IData)(0x20U) 
                                           - (0x1fU 
                                              & ((IData)(0x1bU) 
                                                 * 
                                                 vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__g_seed_gen__BRA__0__KET____DOT__batch_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                 [0U]))))) 
                             | (__Vtemp_6[(7U & (((IData)(0x1bU) 
                                                  * 
                                                  vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__g_seed_gen__BRA__0__KET____DOT__batch_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                  [0U]) 
                                                 >> 5U))] 
                                >> (0x1fU & ((IData)(0x1bU) 
                                             * vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__g_seed_gen__BRA__0__KET____DOT__batch_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                             [0U]))))
                          : vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT____Vxrand_h2f93c73e__0));
}

VL_ATTR_COLD void Vrtlsim_shim___024root___stl_comb__TOP__84(Vrtlsim_shim___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrtlsim_shim___024root___stl_comb__TOP__84\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<7>/*223:0*/ __Vtemp_6;
    // Body
    __Vtemp_6[0U] = (IData)((((QData)((IData)((0x7ffffffU 
                                               & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xbU] 
                                                   << 5U) 
                                                  | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xaU] 
                                                     >> 0x1bU))))) 
                              << 0x1bU) | (QData)((IData)(
                                                          (0x7ffffffU 
                                                           & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xaU] 
                                                               << 3U) 
                                                              | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[9U] 
                                                                 >> 0x1dU)))))));
    __Vtemp_6[1U] = ((0xffc00000U & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xcU] 
                                      << 0x1dU) | (0x1fc00000U 
                                                   & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xbU] 
                                                      >> 3U)))) 
                     | (IData)(((((QData)((IData)((0x7ffffffU 
                                                   & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xbU] 
                                                       << 5U) 
                                                      | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xaU] 
                                                         >> 0x1bU))))) 
                                  << 0x1bU) | (QData)((IData)(
                                                              (0x7ffffffU 
                                                               & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xaU] 
                                                                   << 3U) 
                                                                  | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[9U] 
                                                                     >> 0x1dU)))))) 
                                >> 0x20U)));
    __Vtemp_6[2U] = ((0xfffe0000U & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xdU] 
                                      << 0x1aU) | (0x3fe0000U 
                                                   & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xcU] 
                                                      >> 6U)))) 
                     | (0x1ffffU & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xcU] 
                                    >> 3U)));
    __Vtemp_6[3U] = ((0xfffff000U & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xeU] 
                                      << 0x17U) | (0x7ff000U 
                                                   & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xdU] 
                                                      >> 9U)))) 
                     | (0xfffU & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xdU] 
                                  >> 6U)));
    __Vtemp_6[4U] = ((0xffffff80U & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xfU] 
                                      << 0x14U) | (0xfff80U 
                                                   & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xeU] 
                                                      >> 0xcU)))) 
                     | (0x7fU & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xeU] 
                                 >> 9U)));
    __Vtemp_6[5U] = ((0xe0000000U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0x10U] 
                                     << 0xeU)) | ((0x1ffffffcU 
                                                   & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0x10U] 
                                                       << 0x11U) 
                                                      | (0x1fffcU 
                                                         & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xfU] 
                                                            >> 0xfU)))) 
                                                  | (3U 
                                                     & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xfU] 
                                                        >> 0xcU))));
    __Vtemp_6[6U] = (0xffffffU & ((0x1fffc000U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0x11U] 
                                                  << 0xeU)) 
                                  | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0x10U] 
                                     >> 0x12U)));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__seed_addr_n 
        = (0x7ffffffU & ((0xd7U >= (0xffU & ((IData)(0x1bU) 
                                             * vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__g_seed_gen__BRA__0__KET____DOT__batch_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                             [0U])))
                          ? (((0U == (0x1fU & ((IData)(0x1bU) 
                                               * vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__g_seed_gen__BRA__0__KET____DOT__batch_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                               [0U])))
                               ? 0U : (__Vtemp_6[(((IData)(0x1aU) 
                                                   + 
                                                   (0xffU 
                                                    & ((IData)(0x1bU) 
                                                       * 
                                                       vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__g_seed_gen__BRA__0__KET____DOT__batch_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                       [0U]))) 
                                                  >> 5U)] 
                                       << ((IData)(0x20U) 
                                           - (0x1fU 
                                              & ((IData)(0x1bU) 
                                                 * 
                                                 vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__g_seed_gen__BRA__0__KET____DOT__batch_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                 [0U]))))) 
                             | (__Vtemp_6[(7U & (((IData)(0x1bU) 
                                                  * 
                                                  vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__g_seed_gen__BRA__0__KET____DOT__batch_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                  [0U]) 
                                                 >> 5U))] 
                                >> (0x1fU & ((IData)(0x1bU) 
                                             * vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__g_seed_gen__BRA__0__KET____DOT__batch_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                             [0U]))))
                          : vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT____Vxrand_h2f93c73e__0));
}

extern const VlWide<54>/*1727:0*/ Vrtlsim_shim__ConstPool__CONST_hb716270b_0;

VL_ATTR_COLD void Vrtlsim_shim___024root___stl_comb__TOP__85(Vrtlsim_shim___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrtlsim_shim___024root___stl_comb__TOP__85\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<54>/*1727:0*/ __Vtemp_2;
    VlWide<54>/*1727:0*/ __Vtemp_4;
    VlWide<4>/*127:0*/ __Vtemp_7;
    // Body
    __Vtemp_2[0U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U]);
    __Vtemp_2[1U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[1U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U]);
    __Vtemp_2[2U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[2U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U]);
    __Vtemp_2[3U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[3U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U]);
    __Vtemp_2[4U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[4U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U]);
    __Vtemp_2[5U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[5U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U]);
    __Vtemp_2[6U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[6U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U]);
    __Vtemp_2[7U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[7U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U]);
    __Vtemp_2[8U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[8U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U]);
    __Vtemp_2[9U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[9U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[9U]);
    __Vtemp_2[0xaU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0xaU] 
                       & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xaU]);
    __Vtemp_2[0xbU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0xbU] 
                       & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xbU]);
    __Vtemp_2[0xcU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0xcU] 
                       & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xcU]);
    __Vtemp_2[0xdU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0xdU] 
                       & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xdU]);
    __Vtemp_2[0xeU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0xeU] 
                       & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU]);
    __Vtemp_2[0xfU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0xfU] 
                       & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xfU]);
    __Vtemp_2[0x10U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x10U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x10U]);
    __Vtemp_2[0x11U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x11U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x11U]);
    __Vtemp_2[0x12U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x12U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x12U]);
    __Vtemp_2[0x13U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x13U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x13U]);
    __Vtemp_2[0x14U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x14U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x14U]);
    __Vtemp_2[0x15U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x15U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x15U]);
    __Vtemp_2[0x16U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x16U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x16U]);
    __Vtemp_2[0x17U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x17U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x17U]);
    __Vtemp_2[0x18U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x18U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x18U]);
    __Vtemp_2[0x19U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x19U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x19U]);
    __Vtemp_2[0x1aU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x1aU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                            << 0x1dU) | vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x1aU]));
    __Vtemp_2[0x1bU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x1bU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                                      << 0x1dU)));
    __Vtemp_2[0x1cU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x1cU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                                      << 0x1dU)));
    __Vtemp_2[0x1dU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x1dU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                                      << 0x1dU)));
    __Vtemp_2[0x1eU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x1eU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                                      << 0x1dU)));
    __Vtemp_2[0x1fU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x1fU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                                      << 0x1dU)));
    __Vtemp_2[0x20U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x20U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                                      << 0x1dU)));
    __Vtemp_2[0x21U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x21U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                                      << 0x1dU)));
    __Vtemp_2[0x22U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x22U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                                      << 0x1dU)));
    __Vtemp_2[0x23U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x23U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[9U] 
                                      << 0x1dU)));
    __Vtemp_2[0x24U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x24U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[9U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xaU] 
                                      << 0x1dU)));
    __Vtemp_2[0x25U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x25U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xaU] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xbU] 
                                      << 0x1dU)));
    __Vtemp_2[0x26U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x26U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xbU] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xcU] 
                                      << 0x1dU)));
    __Vtemp_2[0x27U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x27U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xcU] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xdU] 
                                      << 0x1dU)));
    __Vtemp_2[0x28U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x28U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xdU] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU] 
                                      << 0x1dU)));
    __Vtemp_2[0x29U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x29U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xfU] 
                                      << 0x1dU)));
    __Vtemp_2[0x2aU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x2aU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xfU] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x10U] 
                                      << 0x1dU)));
    __Vtemp_2[0x2bU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x2bU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x10U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x11U] 
                                      << 0x1dU)));
    __Vtemp_2[0x2cU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x2cU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x11U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x12U] 
                                      << 0x1dU)));
    __Vtemp_2[0x2dU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x2dU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x12U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x13U] 
                                      << 0x1dU)));
    __Vtemp_2[0x2eU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x2eU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x13U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x14U] 
                                      << 0x1dU)));
    __Vtemp_2[0x2fU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x2fU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x14U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x15U] 
                                      << 0x1dU)));
    __Vtemp_2[0x30U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x30U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x15U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x16U] 
                                      << 0x1dU)));
    __Vtemp_2[0x31U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x31U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x16U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x17U] 
                                      << 0x1dU)));
    __Vtemp_2[0x32U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x32U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x17U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x18U] 
                                      << 0x1dU)));
    __Vtemp_2[0x33U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x33U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x18U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x19U] 
                                      << 0x1dU)));
    __Vtemp_2[0x34U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x34U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x19U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x1aU] 
                                      << 0x1dU)));
    __Vtemp_2[0x35U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x35U] 
                        & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x1aU] 
                           >> 3U));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs2_data 
        = ((0x35cU >= ((IData)(0x103U) + (0xffU & VL_SHIFTL_III(8,32,32, 
                                                                vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__g_last_tid__DOT__last_tid_select__DOT__g_msb__DOT__g_model1__DOT__find_first__DOT__d_n
                                                                [0U], 5U))))
            ? (((0U == (0x1fU & ((IData)(0x103U) + 
                                 (0xffU & VL_SHIFTL_III(8,32,32, 
                                                        vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__g_last_tid__DOT__last_tid_select__DOT__g_msb__DOT__g_model1__DOT__find_first__DOT__d_n
                                                        [0U], 5U)))))
                 ? 0U : (__Vtemp_2[(((IData)(0x122U) 
                                     + (0xffU & VL_SHIFTL_III(8,32,32, 
                                                              vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__g_last_tid__DOT__last_tid_select__DOT__g_msb__DOT__g_model1__DOT__find_first__DOT__d_n
                                                              [0U], 5U))) 
                                    >> 5U)] << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0x103U) 
                                                      + 
                                                      (0xffU 
                                                       & VL_SHIFTL_III(8,32,32, 
                                                                       vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__g_last_tid__DOT__last_tid_select__DOT__g_msb__DOT__g_model1__DOT__find_first__DOT__d_n
                                                                       [0U], 5U))))))) 
               | (__Vtemp_2[(((IData)(0x103U) + (0xffU 
                                                 & VL_SHIFTL_III(8,32,32, 
                                                                 vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__g_last_tid__DOT__last_tid_select__DOT__g_msb__DOT__g_model1__DOT__find_first__DOT__d_n
                                                                 [0U], 5U))) 
                             >> 5U)] >> (0x1fU & ((IData)(0x103U) 
                                                  + 
                                                  (0xffU 
                                                   & VL_SHIFTL_III(8,32,32, 
                                                                   vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__g_last_tid__DOT__last_tid_select__DOT__g_msb__DOT__g_model1__DOT__find_first__DOT__d_n
                                                                   [0U], 5U))))))
            : vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vxrand_h8d944da6__1);
    __Vtemp_4[0U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U]);
    __Vtemp_4[1U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[1U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U]);
    __Vtemp_4[2U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[2U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U]);
    __Vtemp_4[3U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[3U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U]);
    __Vtemp_4[4U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[4U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U]);
    __Vtemp_4[5U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[5U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U]);
    __Vtemp_4[6U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[6U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U]);
    __Vtemp_4[7U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[7U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U]);
    __Vtemp_4[8U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[8U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U]);
    __Vtemp_4[9U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[9U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[9U]);
    __Vtemp_4[0xaU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0xaU] 
                       & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xaU]);
    __Vtemp_4[0xbU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0xbU] 
                       & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xbU]);
    __Vtemp_4[0xcU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0xcU] 
                       & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xcU]);
    __Vtemp_4[0xdU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0xdU] 
                       & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xdU]);
    __Vtemp_4[0xeU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0xeU] 
                       & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU]);
    __Vtemp_4[0xfU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0xfU] 
                       & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xfU]);
    __Vtemp_4[0x10U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x10U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x10U]);
    __Vtemp_4[0x11U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x11U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x11U]);
    __Vtemp_4[0x12U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x12U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x12U]);
    __Vtemp_4[0x13U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x13U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x13U]);
    __Vtemp_4[0x14U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x14U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x14U]);
    __Vtemp_4[0x15U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x15U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x15U]);
    __Vtemp_4[0x16U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x16U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x16U]);
    __Vtemp_4[0x17U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x17U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x17U]);
    __Vtemp_4[0x18U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x18U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x18U]);
    __Vtemp_4[0x19U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x19U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x19U]);
    __Vtemp_4[0x1aU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x1aU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                            << 0x1dU) | vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x1aU]));
    __Vtemp_4[0x1bU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x1bU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                                      << 0x1dU)));
    __Vtemp_4[0x1cU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x1cU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                                      << 0x1dU)));
    __Vtemp_4[0x1dU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x1dU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                                      << 0x1dU)));
    __Vtemp_4[0x1eU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x1eU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                                      << 0x1dU)));
    __Vtemp_4[0x1fU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x1fU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                                      << 0x1dU)));
    __Vtemp_4[0x20U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x20U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                                      << 0x1dU)));
    __Vtemp_4[0x21U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x21U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                                      << 0x1dU)));
    __Vtemp_4[0x22U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x22U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                                      << 0x1dU)));
    __Vtemp_4[0x23U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x23U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[9U] 
                                      << 0x1dU)));
    __Vtemp_4[0x24U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x24U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[9U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xaU] 
                                      << 0x1dU)));
    __Vtemp_4[0x25U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x25U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xaU] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xbU] 
                                      << 0x1dU)));
    __Vtemp_4[0x26U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x26U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xbU] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xcU] 
                                      << 0x1dU)));
    __Vtemp_4[0x27U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x27U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xcU] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xdU] 
                                      << 0x1dU)));
    __Vtemp_4[0x28U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x28U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xdU] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU] 
                                      << 0x1dU)));
    __Vtemp_4[0x29U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x29U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xfU] 
                                      << 0x1dU)));
    __Vtemp_4[0x2aU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x2aU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xfU] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x10U] 
                                      << 0x1dU)));
    __Vtemp_4[0x2bU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x2bU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x10U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x11U] 
                                      << 0x1dU)));
    __Vtemp_4[0x2cU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x2cU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x11U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x12U] 
                                      << 0x1dU)));
    __Vtemp_4[0x2dU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x2dU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x12U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x13U] 
                                      << 0x1dU)));
    __Vtemp_4[0x2eU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x2eU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x13U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x14U] 
                                      << 0x1dU)));
    __Vtemp_4[0x2fU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x2fU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x14U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x15U] 
                                      << 0x1dU)));
    __Vtemp_4[0x30U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x30U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x15U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x16U] 
                                      << 0x1dU)));
    __Vtemp_4[0x31U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x31U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x16U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x17U] 
                                      << 0x1dU)));
    __Vtemp_4[0x32U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x32U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x17U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x18U] 
                                      << 0x1dU)));
    __Vtemp_4[0x33U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x33U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x18U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x19U] 
                                      << 0x1dU)));
    __Vtemp_4[0x34U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x34U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x19U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x1aU] 
                                      << 0x1dU)));
    __Vtemp_4[0x35U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x35U] 
                        & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x1aU] 
                           >> 3U));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs1_data 
        = ((0x35cU >= ((IData)(0x203U) + (0xffU & VL_SHIFTL_III(8,32,32, 
                                                                vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__g_last_tid__DOT__last_tid_select__DOT__g_msb__DOT__g_model1__DOT__find_first__DOT__d_n
                                                                [0U], 5U))))
            ? (((0U == (0x1fU & ((IData)(0x203U) + 
                                 (0xffU & VL_SHIFTL_III(8,32,32, 
                                                        vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__g_last_tid__DOT__last_tid_select__DOT__g_msb__DOT__g_model1__DOT__find_first__DOT__d_n
                                                        [0U], 5U)))))
                 ? 0U : (__Vtemp_4[(((IData)(0x222U) 
                                     + (0xffU & VL_SHIFTL_III(8,32,32, 
                                                              vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__g_last_tid__DOT__last_tid_select__DOT__g_msb__DOT__g_model1__DOT__find_first__DOT__d_n
                                                              [0U], 5U))) 
                                    >> 5U)] << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0x203U) 
                                                      + 
                                                      (0xffU 
                                                       & VL_SHIFTL_III(8,32,32, 
                                                                       vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__g_last_tid__DOT__last_tid_select__DOT__g_msb__DOT__g_model1__DOT__find_first__DOT__d_n
                                                                       [0U], 5U))))))) 
               | (__Vtemp_4[(((IData)(0x203U) + (0xffU 
                                                 & VL_SHIFTL_III(8,32,32, 
                                                                 vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__g_last_tid__DOT__last_tid_select__DOT__g_msb__DOT__g_model1__DOT__find_first__DOT__d_n
                                                                 [0U], 5U))) 
                             >> 5U)] >> (0x1fU & ((IData)(0x203U) 
                                                  + 
                                                  (0xffU 
                                                   & VL_SHIFTL_III(8,32,32, 
                                                                   vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__g_last_tid__DOT__last_tid_select__DOT__g_msb__DOT__g_model1__DOT__find_first__DOT__d_n
                                                                   [0U], 5U))))))
            : vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vxrand_h8d944da6__0);
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn_wmask 
        = ((0xfeU & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn_wmask)) 
           | ((0U < (0xfU & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs1_data)) 
              & (0U != (7U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x1aU] 
                              >> 0x19U)))));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn_wmask 
        = ((0xfdU & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn_wmask)) 
           | (((1U < (0xfU & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs1_data)) 
               & (1U != (7U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x1aU] 
                               >> 0x19U)))) << 1U));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn_wmask 
        = ((0xfbU & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn_wmask)) 
           | (((2U < (0xfU & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs1_data)) 
               & (2U != (7U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x1aU] 
                               >> 0x19U)))) << 2U));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn_wmask 
        = ((0xf7U & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn_wmask)) 
           | (((3U < (0xfU & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs1_data)) 
               & (3U != (7U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x1aU] 
                               >> 0x19U)))) << 3U));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn_wmask 
        = ((0xefU & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn_wmask)) 
           | (((4U < (0xfU & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs1_data)) 
               & (4U != (7U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x1aU] 
                               >> 0x19U)))) << 4U));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn_wmask 
        = ((0xdfU & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn_wmask)) 
           | (((5U < (0xfU & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs1_data)) 
               & (5U != (7U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x1aU] 
                               >> 0x19U)))) << 5U));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn_wmask 
        = ((0xbfU & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn_wmask)) 
           | (((6U < (0xfU & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs1_data)) 
               & (6U != (7U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x1aU] 
                               >> 0x19U)))) << 6U));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn_wmask 
        = ((0x7fU & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn_wmask)) 
           | (((7U < (0xfU & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs1_data)) 
               & (7U != (7U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x1aU] 
                               >> 0x19U)))) << 7U));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn 
        = (((QData)((IData)((1U == (0xfU & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x19U] 
                                            >> 0xfU))))) 
            << 0x26U) | (((QData)((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn_wmask)) 
                          << 0x1eU) | (QData)((IData)(
                                                      ([&]() {
                            vlSelfRef.__Vfunc_from_fullPC__562__pc 
                                = vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs2_data;
                            vlSelfRef.__Vfunc_from_fullPC__562__Vfuncout 
                                = (vlSelfRef.__Vfunc_from_fullPC__562__pc 
                                   >> 2U);
                        }(), vlSelfRef.__Vfunc_from_fullPC__562__Vfuncout)))));
    __Vtemp_7[2U] = (((0xfffU & ((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn) 
                                 >> 4U)) | ((IData)(
                                                    (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__split 
                                                     >> 0x20U)) 
                                            >> 0x14U)) 
                     | ((0xffff000U & ((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn) 
                                       >> 4U)) | ((IData)(
                                                          (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn 
                                                           >> 0x20U)) 
                                                  << 0x1cU)));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellinp__wctl_reg__data_in[0U] 
        = (((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__split) 
            << 0xcU) | ((((3U == (0xfU & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x19U] 
                                          >> 0xfU))) 
                          << 0xbU) | (0x700U & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs1_data 
                                                << 8U))) 
                        | (((4U == (0xfU & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x19U] 
                                            >> 0xfU))) 
                            << 7U) | ((0x60U & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs1_data 
                                                << 5U)) 
                                      | ((0xeU & ((vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs2_data 
                                                   - (IData)(1U)) 
                                                  << 1U)) 
                                         | (1U == (7U 
                                                   & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs2_data)))))));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellinp__wctl_reg__data_in[1U] 
        = (((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__split) 
            >> 0x14U) | (((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn) 
                          << 0x1cU) | ((IData)((vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__split 
                                                >> 0x20U)) 
                                       << 0xcU)));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellinp__wctl_reg__data_in[2U] 
        = __Vtemp_7[2U];
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellinp__wctl_reg__data_in[3U] 
        = (((((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch.__PVT__pe_req_valid) 
              & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rsp_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)) 
             & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U]) 
            << 0xfU) | ((0x7000U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x1aU] 
                                    >> 0xdU)) | ((0xff8U 
                                                  & ((0x800U 
                                                      & (((5U 
                                                           == 
                                                           (0xfU 
                                                            & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x19U] 
                                                               >> 0xfU))) 
                                                          | (0U 
                                                             == 
                                                             (0xfU 
                                                              & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x19U] 
                                                                 >> 0xfU)))) 
                                                         << 0xbU)) 
                                                     | (0x7f8U 
                                                        & (((5U 
                                                             == 
                                                             (0xfU 
                                                              & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x19U] 
                                                                 >> 0xfU)))
                                                             ? 
                                                            ((0U 
                                                              != (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__then_tmask))
                                                              ? (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__then_tmask)
                                                              : vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs2_data)
                                                             : vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs1_data) 
                                                           << 3U)))) 
                                                 | (0xfffU 
                                                    & ((IData)(
                                                               (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn 
                                                                >> 0x20U)) 
                                                       >> 4U)))));
}

VL_ATTR_COLD void Vrtlsim_shim___024root___stl_comb__TOP__86(Vrtlsim_shim___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrtlsim_shim___024root___stl_comb__TOP__86\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<54>/*1727:0*/ __Vtemp_2;
    VlWide<54>/*1727:0*/ __Vtemp_4;
    VlWide<4>/*127:0*/ __Vtemp_7;
    // Body
    __Vtemp_2[0U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U]);
    __Vtemp_2[1U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[1U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U]);
    __Vtemp_2[2U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[2U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U]);
    __Vtemp_2[3U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[3U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U]);
    __Vtemp_2[4U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[4U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U]);
    __Vtemp_2[5U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[5U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U]);
    __Vtemp_2[6U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[6U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U]);
    __Vtemp_2[7U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[7U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U]);
    __Vtemp_2[8U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[8U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U]);
    __Vtemp_2[9U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[9U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[9U]);
    __Vtemp_2[0xaU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0xaU] 
                       & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xaU]);
    __Vtemp_2[0xbU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0xbU] 
                       & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xbU]);
    __Vtemp_2[0xcU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0xcU] 
                       & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xcU]);
    __Vtemp_2[0xdU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0xdU] 
                       & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xdU]);
    __Vtemp_2[0xeU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0xeU] 
                       & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU]);
    __Vtemp_2[0xfU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0xfU] 
                       & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xfU]);
    __Vtemp_2[0x10U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x10U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x10U]);
    __Vtemp_2[0x11U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x11U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x11U]);
    __Vtemp_2[0x12U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x12U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x12U]);
    __Vtemp_2[0x13U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x13U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x13U]);
    __Vtemp_2[0x14U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x14U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x14U]);
    __Vtemp_2[0x15U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x15U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x15U]);
    __Vtemp_2[0x16U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x16U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x16U]);
    __Vtemp_2[0x17U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x17U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x17U]);
    __Vtemp_2[0x18U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x18U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x18U]);
    __Vtemp_2[0x19U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x19U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x19U]);
    __Vtemp_2[0x1aU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x1aU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                            << 0x1dU) | vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x1aU]));
    __Vtemp_2[0x1bU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x1bU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                                      << 0x1dU)));
    __Vtemp_2[0x1cU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x1cU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                                      << 0x1dU)));
    __Vtemp_2[0x1dU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x1dU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                                      << 0x1dU)));
    __Vtemp_2[0x1eU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x1eU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                                      << 0x1dU)));
    __Vtemp_2[0x1fU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x1fU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                                      << 0x1dU)));
    __Vtemp_2[0x20U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x20U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                                      << 0x1dU)));
    __Vtemp_2[0x21U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x21U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                                      << 0x1dU)));
    __Vtemp_2[0x22U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x22U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                                      << 0x1dU)));
    __Vtemp_2[0x23U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x23U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[9U] 
                                      << 0x1dU)));
    __Vtemp_2[0x24U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x24U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[9U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xaU] 
                                      << 0x1dU)));
    __Vtemp_2[0x25U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x25U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xaU] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xbU] 
                                      << 0x1dU)));
    __Vtemp_2[0x26U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x26U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xbU] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xcU] 
                                      << 0x1dU)));
    __Vtemp_2[0x27U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x27U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xcU] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xdU] 
                                      << 0x1dU)));
    __Vtemp_2[0x28U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x28U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xdU] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU] 
                                      << 0x1dU)));
    __Vtemp_2[0x29U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x29U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xfU] 
                                      << 0x1dU)));
    __Vtemp_2[0x2aU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x2aU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xfU] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x10U] 
                                      << 0x1dU)));
    __Vtemp_2[0x2bU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x2bU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x10U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x11U] 
                                      << 0x1dU)));
    __Vtemp_2[0x2cU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x2cU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x11U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x12U] 
                                      << 0x1dU)));
    __Vtemp_2[0x2dU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x2dU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x12U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x13U] 
                                      << 0x1dU)));
    __Vtemp_2[0x2eU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x2eU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x13U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x14U] 
                                      << 0x1dU)));
    __Vtemp_2[0x2fU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x2fU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x14U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x15U] 
                                      << 0x1dU)));
    __Vtemp_2[0x30U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x30U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x15U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x16U] 
                                      << 0x1dU)));
    __Vtemp_2[0x31U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x31U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x16U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x17U] 
                                      << 0x1dU)));
    __Vtemp_2[0x32U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x32U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x17U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x18U] 
                                      << 0x1dU)));
    __Vtemp_2[0x33U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x33U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x18U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x19U] 
                                      << 0x1dU)));
    __Vtemp_2[0x34U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x34U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x19U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x1aU] 
                                      << 0x1dU)));
    __Vtemp_2[0x35U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x35U] 
                        & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x1aU] 
                           >> 3U));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs2_data 
        = ((0x35cU >= ((IData)(0x103U) + (0xffU & VL_SHIFTL_III(8,32,32, 
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
    __Vtemp_4[0U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U]);
    __Vtemp_4[1U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[1U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U]);
    __Vtemp_4[2U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[2U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U]);
    __Vtemp_4[3U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[3U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U]);
    __Vtemp_4[4U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[4U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U]);
    __Vtemp_4[5U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[5U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U]);
    __Vtemp_4[6U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[6U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U]);
    __Vtemp_4[7U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[7U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U]);
    __Vtemp_4[8U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[8U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U]);
    __Vtemp_4[9U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[9U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[9U]);
    __Vtemp_4[0xaU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0xaU] 
                       & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xaU]);
    __Vtemp_4[0xbU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0xbU] 
                       & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xbU]);
    __Vtemp_4[0xcU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0xcU] 
                       & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xcU]);
    __Vtemp_4[0xdU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0xdU] 
                       & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xdU]);
    __Vtemp_4[0xeU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0xeU] 
                       & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU]);
    __Vtemp_4[0xfU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0xfU] 
                       & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xfU]);
    __Vtemp_4[0x10U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x10U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x10U]);
    __Vtemp_4[0x11U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x11U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x11U]);
    __Vtemp_4[0x12U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x12U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x12U]);
    __Vtemp_4[0x13U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x13U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x13U]);
    __Vtemp_4[0x14U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x14U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x14U]);
    __Vtemp_4[0x15U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x15U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x15U]);
    __Vtemp_4[0x16U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x16U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x16U]);
    __Vtemp_4[0x17U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x17U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x17U]);
    __Vtemp_4[0x18U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x18U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x18U]);
    __Vtemp_4[0x19U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x19U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x19U]);
    __Vtemp_4[0x1aU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x1aU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                            << 0x1dU) | vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x1aU]));
    __Vtemp_4[0x1bU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x1bU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                                      << 0x1dU)));
    __Vtemp_4[0x1cU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x1cU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                                      << 0x1dU)));
    __Vtemp_4[0x1dU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x1dU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                                      << 0x1dU)));
    __Vtemp_4[0x1eU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x1eU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                                      << 0x1dU)));
    __Vtemp_4[0x1fU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x1fU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                                      << 0x1dU)));
    __Vtemp_4[0x20U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x20U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                                      << 0x1dU)));
    __Vtemp_4[0x21U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x21U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                                      << 0x1dU)));
    __Vtemp_4[0x22U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x22U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                                      << 0x1dU)));
    __Vtemp_4[0x23U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x23U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[9U] 
                                      << 0x1dU)));
    __Vtemp_4[0x24U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x24U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[9U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xaU] 
                                      << 0x1dU)));
    __Vtemp_4[0x25U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x25U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xaU] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xbU] 
                                      << 0x1dU)));
    __Vtemp_4[0x26U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x26U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xbU] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xcU] 
                                      << 0x1dU)));
    __Vtemp_4[0x27U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x27U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xcU] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xdU] 
                                      << 0x1dU)));
    __Vtemp_4[0x28U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x28U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xdU] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU] 
                                      << 0x1dU)));
    __Vtemp_4[0x29U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x29U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xfU] 
                                      << 0x1dU)));
    __Vtemp_4[0x2aU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x2aU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xfU] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x10U] 
                                      << 0x1dU)));
    __Vtemp_4[0x2bU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x2bU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x10U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x11U] 
                                      << 0x1dU)));
    __Vtemp_4[0x2cU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x2cU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x11U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x12U] 
                                      << 0x1dU)));
    __Vtemp_4[0x2dU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x2dU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x12U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x13U] 
                                      << 0x1dU)));
    __Vtemp_4[0x2eU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x2eU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x13U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x14U] 
                                      << 0x1dU)));
    __Vtemp_4[0x2fU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x2fU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x14U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x15U] 
                                      << 0x1dU)));
    __Vtemp_4[0x30U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x30U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x15U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x16U] 
                                      << 0x1dU)));
    __Vtemp_4[0x31U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x31U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x16U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x17U] 
                                      << 0x1dU)));
    __Vtemp_4[0x32U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x32U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x17U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x18U] 
                                      << 0x1dU)));
    __Vtemp_4[0x33U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x33U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x18U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x19U] 
                                      << 0x1dU)));
    __Vtemp_4[0x34U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x34U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x19U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x1aU] 
                                      << 0x1dU)));
    __Vtemp_4[0x35U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x35U] 
                        & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x1aU] 
                           >> 3U));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs1_data 
        = ((0x35cU >= ((IData)(0x203U) + (0xffU & VL_SHIFTL_III(8,32,32, 
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
        = ((0xfeU & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn_wmask)) 
           | ((0U < (0xfU & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs1_data)) 
              & (0U != (7U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x1aU] 
                              >> 0x19U)))));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn_wmask 
        = ((0xfdU & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn_wmask)) 
           | (((1U < (0xfU & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs1_data)) 
               & (1U != (7U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x1aU] 
                               >> 0x19U)))) << 1U));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn_wmask 
        = ((0xfbU & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn_wmask)) 
           | (((2U < (0xfU & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs1_data)) 
               & (2U != (7U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x1aU] 
                               >> 0x19U)))) << 2U));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn_wmask 
        = ((0xf7U & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn_wmask)) 
           | (((3U < (0xfU & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs1_data)) 
               & (3U != (7U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x1aU] 
                               >> 0x19U)))) << 3U));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn_wmask 
        = ((0xefU & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn_wmask)) 
           | (((4U < (0xfU & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs1_data)) 
               & (4U != (7U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x1aU] 
                               >> 0x19U)))) << 4U));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn_wmask 
        = ((0xdfU & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn_wmask)) 
           | (((5U < (0xfU & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs1_data)) 
               & (5U != (7U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x1aU] 
                               >> 0x19U)))) << 5U));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn_wmask 
        = ((0xbfU & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn_wmask)) 
           | (((6U < (0xfU & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs1_data)) 
               & (6U != (7U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x1aU] 
                               >> 0x19U)))) << 6U));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn_wmask 
        = ((0x7fU & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn_wmask)) 
           | (((7U < (0xfU & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs1_data)) 
               & (7U != (7U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x1aU] 
                               >> 0x19U)))) << 7U));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn 
        = (((QData)((IData)((1U == (0xfU & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x19U] 
                                            >> 0xfU))))) 
            << 0x26U) | (((QData)((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn_wmask)) 
                          << 0x1eU) | (QData)((IData)(
                                                      ([&]() {
                            vlSelfRef.__Vfunc_from_fullPC__1125__pc 
                                = vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs2_data;
                            vlSelfRef.__Vfunc_from_fullPC__1125__Vfuncout 
                                = (vlSelfRef.__Vfunc_from_fullPC__1125__pc 
                                   >> 2U);
                        }(), vlSelfRef.__Vfunc_from_fullPC__1125__Vfuncout)))));
    __Vtemp_7[2U] = (((0xfffU & ((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn) 
                                 >> 4U)) | ((IData)(
                                                    (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__split 
                                                     >> 0x20U)) 
                                            >> 0x14U)) 
                     | ((0xffff000U & ((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn) 
                                       >> 4U)) | ((IData)(
                                                          (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn 
                                                           >> 0x20U)) 
                                                  << 0x1cU)));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellinp__wctl_reg__data_in[0U] 
        = (((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__split) 
            << 0xcU) | ((((3U == (0xfU & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x19U] 
                                          >> 0xfU))) 
                          << 0xbU) | (0x700U & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs1_data 
                                                << 8U))) 
                        | (((4U == (0xfU & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x19U] 
                                            >> 0xfU))) 
                            << 7U) | ((0x60U & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs1_data 
                                                << 5U)) 
                                      | ((0xeU & ((vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs2_data 
                                                   - (IData)(1U)) 
                                                  << 1U)) 
                                         | (1U == (7U 
                                                   & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs2_data)))))));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellinp__wctl_reg__data_in[1U] 
        = (((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__split) 
            >> 0x14U) | (((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn) 
                          << 0x1cU) | ((IData)((vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__split 
                                                >> 0x20U)) 
                                       << 0xcU)));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellinp__wctl_reg__data_in[2U] 
        = __Vtemp_7[2U];
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellinp__wctl_reg__data_in[3U] 
        = (((((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch.__PVT__pe_req_valid) 
              & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rsp_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)) 
             & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U]) 
            << 0xfU) | ((0x7000U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x1aU] 
                                    >> 0xdU)) | ((0xff8U 
                                                  & ((0x800U 
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
                                                         << 0xbU)) 
                                                     | (0x7f8U 
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
                                                           << 3U)))) 
                                                 | (0xfffU 
                                                    & ((IData)(
                                                               (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn 
                                                                >> 0x20U)) 
                                                       >> 4U)))));
}

VL_ATTR_COLD void Vrtlsim_shim___024root___stl_comb__TOP__87(Vrtlsim_shim___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrtlsim_shim___024root___stl_comb__TOP__87\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<54>/*1727:0*/ __Vtemp_2;
    VlWide<54>/*1727:0*/ __Vtemp_4;
    VlWide<4>/*127:0*/ __Vtemp_7;
    // Body
    __Vtemp_2[0U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U]);
    __Vtemp_2[1U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[1U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U]);
    __Vtemp_2[2U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[2U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U]);
    __Vtemp_2[3U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[3U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U]);
    __Vtemp_2[4U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[4U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U]);
    __Vtemp_2[5U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[5U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U]);
    __Vtemp_2[6U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[6U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U]);
    __Vtemp_2[7U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[7U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U]);
    __Vtemp_2[8U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[8U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U]);
    __Vtemp_2[9U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[9U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[9U]);
    __Vtemp_2[0xaU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0xaU] 
                       & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xaU]);
    __Vtemp_2[0xbU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0xbU] 
                       & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xbU]);
    __Vtemp_2[0xcU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0xcU] 
                       & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xcU]);
    __Vtemp_2[0xdU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0xdU] 
                       & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xdU]);
    __Vtemp_2[0xeU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0xeU] 
                       & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU]);
    __Vtemp_2[0xfU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0xfU] 
                       & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xfU]);
    __Vtemp_2[0x10U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x10U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x10U]);
    __Vtemp_2[0x11U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x11U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x11U]);
    __Vtemp_2[0x12U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x12U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x12U]);
    __Vtemp_2[0x13U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x13U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x13U]);
    __Vtemp_2[0x14U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x14U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x14U]);
    __Vtemp_2[0x15U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x15U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x15U]);
    __Vtemp_2[0x16U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x16U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x16U]);
    __Vtemp_2[0x17U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x17U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x17U]);
    __Vtemp_2[0x18U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x18U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x18U]);
    __Vtemp_2[0x19U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x19U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x19U]);
    __Vtemp_2[0x1aU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x1aU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                            << 0x1dU) | vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x1aU]));
    __Vtemp_2[0x1bU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x1bU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                                      << 0x1dU)));
    __Vtemp_2[0x1cU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x1cU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                                      << 0x1dU)));
    __Vtemp_2[0x1dU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x1dU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                                      << 0x1dU)));
    __Vtemp_2[0x1eU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x1eU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                                      << 0x1dU)));
    __Vtemp_2[0x1fU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x1fU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                                      << 0x1dU)));
    __Vtemp_2[0x20U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x20U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                                      << 0x1dU)));
    __Vtemp_2[0x21U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x21U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                                      << 0x1dU)));
    __Vtemp_2[0x22U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x22U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                                      << 0x1dU)));
    __Vtemp_2[0x23U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x23U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[9U] 
                                      << 0x1dU)));
    __Vtemp_2[0x24U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x24U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[9U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xaU] 
                                      << 0x1dU)));
    __Vtemp_2[0x25U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x25U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xaU] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xbU] 
                                      << 0x1dU)));
    __Vtemp_2[0x26U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x26U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xbU] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xcU] 
                                      << 0x1dU)));
    __Vtemp_2[0x27U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x27U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xcU] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xdU] 
                                      << 0x1dU)));
    __Vtemp_2[0x28U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x28U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xdU] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU] 
                                      << 0x1dU)));
    __Vtemp_2[0x29U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x29U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xfU] 
                                      << 0x1dU)));
    __Vtemp_2[0x2aU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x2aU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xfU] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x10U] 
                                      << 0x1dU)));
    __Vtemp_2[0x2bU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x2bU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x10U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x11U] 
                                      << 0x1dU)));
    __Vtemp_2[0x2cU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x2cU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x11U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x12U] 
                                      << 0x1dU)));
    __Vtemp_2[0x2dU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x2dU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x12U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x13U] 
                                      << 0x1dU)));
    __Vtemp_2[0x2eU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x2eU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x13U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x14U] 
                                      << 0x1dU)));
    __Vtemp_2[0x2fU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x2fU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x14U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x15U] 
                                      << 0x1dU)));
    __Vtemp_2[0x30U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x30U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x15U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x16U] 
                                      << 0x1dU)));
    __Vtemp_2[0x31U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x31U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x16U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x17U] 
                                      << 0x1dU)));
    __Vtemp_2[0x32U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x32U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x17U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x18U] 
                                      << 0x1dU)));
    __Vtemp_2[0x33U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x33U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x18U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x19U] 
                                      << 0x1dU)));
    __Vtemp_2[0x34U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x34U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x19U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x1aU] 
                                      << 0x1dU)));
    __Vtemp_2[0x35U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x35U] 
                        & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x1aU] 
                           >> 3U));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs2_data 
        = ((0x35cU >= ((IData)(0x103U) + (0xffU & VL_SHIFTL_III(8,32,32, 
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
    __Vtemp_4[0U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U]);
    __Vtemp_4[1U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[1U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U]);
    __Vtemp_4[2U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[2U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U]);
    __Vtemp_4[3U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[3U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U]);
    __Vtemp_4[4U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[4U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U]);
    __Vtemp_4[5U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[5U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U]);
    __Vtemp_4[6U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[6U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U]);
    __Vtemp_4[7U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[7U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U]);
    __Vtemp_4[8U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[8U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U]);
    __Vtemp_4[9U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[9U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[9U]);
    __Vtemp_4[0xaU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0xaU] 
                       & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xaU]);
    __Vtemp_4[0xbU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0xbU] 
                       & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xbU]);
    __Vtemp_4[0xcU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0xcU] 
                       & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xcU]);
    __Vtemp_4[0xdU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0xdU] 
                       & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xdU]);
    __Vtemp_4[0xeU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0xeU] 
                       & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU]);
    __Vtemp_4[0xfU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0xfU] 
                       & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xfU]);
    __Vtemp_4[0x10U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x10U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x10U]);
    __Vtemp_4[0x11U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x11U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x11U]);
    __Vtemp_4[0x12U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x12U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x12U]);
    __Vtemp_4[0x13U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x13U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x13U]);
    __Vtemp_4[0x14U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x14U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x14U]);
    __Vtemp_4[0x15U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x15U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x15U]);
    __Vtemp_4[0x16U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x16U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x16U]);
    __Vtemp_4[0x17U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x17U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x17U]);
    __Vtemp_4[0x18U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x18U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x18U]);
    __Vtemp_4[0x19U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x19U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x19U]);
    __Vtemp_4[0x1aU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x1aU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                            << 0x1dU) | vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x1aU]));
    __Vtemp_4[0x1bU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x1bU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                                      << 0x1dU)));
    __Vtemp_4[0x1cU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x1cU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                                      << 0x1dU)));
    __Vtemp_4[0x1dU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x1dU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                                      << 0x1dU)));
    __Vtemp_4[0x1eU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x1eU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                                      << 0x1dU)));
    __Vtemp_4[0x1fU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x1fU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                                      << 0x1dU)));
    __Vtemp_4[0x20U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x20U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                                      << 0x1dU)));
    __Vtemp_4[0x21U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x21U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                                      << 0x1dU)));
    __Vtemp_4[0x22U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x22U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                                      << 0x1dU)));
    __Vtemp_4[0x23U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x23U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[9U] 
                                      << 0x1dU)));
    __Vtemp_4[0x24U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x24U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[9U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xaU] 
                                      << 0x1dU)));
    __Vtemp_4[0x25U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x25U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xaU] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xbU] 
                                      << 0x1dU)));
    __Vtemp_4[0x26U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x26U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xbU] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xcU] 
                                      << 0x1dU)));
    __Vtemp_4[0x27U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x27U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xcU] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xdU] 
                                      << 0x1dU)));
    __Vtemp_4[0x28U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x28U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xdU] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU] 
                                      << 0x1dU)));
    __Vtemp_4[0x29U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x29U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xfU] 
                                      << 0x1dU)));
    __Vtemp_4[0x2aU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x2aU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xfU] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x10U] 
                                      << 0x1dU)));
    __Vtemp_4[0x2bU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x2bU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x10U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x11U] 
                                      << 0x1dU)));
    __Vtemp_4[0x2cU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x2cU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x11U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x12U] 
                                      << 0x1dU)));
    __Vtemp_4[0x2dU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x2dU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x12U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x13U] 
                                      << 0x1dU)));
    __Vtemp_4[0x2eU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x2eU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x13U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x14U] 
                                      << 0x1dU)));
    __Vtemp_4[0x2fU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x2fU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x14U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x15U] 
                                      << 0x1dU)));
    __Vtemp_4[0x30U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x30U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x15U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x16U] 
                                      << 0x1dU)));
    __Vtemp_4[0x31U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x31U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x16U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x17U] 
                                      << 0x1dU)));
    __Vtemp_4[0x32U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x32U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x17U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x18U] 
                                      << 0x1dU)));
    __Vtemp_4[0x33U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x33U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x18U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x19U] 
                                      << 0x1dU)));
    __Vtemp_4[0x34U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x34U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x19U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x1aU] 
                                      << 0x1dU)));
    __Vtemp_4[0x35U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x35U] 
                        & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x1aU] 
                           >> 3U));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs1_data 
        = ((0x35cU >= ((IData)(0x203U) + (0xffU & VL_SHIFTL_III(8,32,32, 
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
        = ((0xfeU & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn_wmask)) 
           | ((0U < (0xfU & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs1_data)) 
              & (0U != (7U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x1aU] 
                              >> 0x19U)))));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn_wmask 
        = ((0xfdU & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn_wmask)) 
           | (((1U < (0xfU & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs1_data)) 
               & (1U != (7U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x1aU] 
                               >> 0x19U)))) << 1U));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn_wmask 
        = ((0xfbU & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn_wmask)) 
           | (((2U < (0xfU & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs1_data)) 
               & (2U != (7U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x1aU] 
                               >> 0x19U)))) << 2U));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn_wmask 
        = ((0xf7U & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn_wmask)) 
           | (((3U < (0xfU & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs1_data)) 
               & (3U != (7U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x1aU] 
                               >> 0x19U)))) << 3U));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn_wmask 
        = ((0xefU & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn_wmask)) 
           | (((4U < (0xfU & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs1_data)) 
               & (4U != (7U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x1aU] 
                               >> 0x19U)))) << 4U));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn_wmask 
        = ((0xdfU & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn_wmask)) 
           | (((5U < (0xfU & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs1_data)) 
               & (5U != (7U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x1aU] 
                               >> 0x19U)))) << 5U));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn_wmask 
        = ((0xbfU & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn_wmask)) 
           | (((6U < (0xfU & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs1_data)) 
               & (6U != (7U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x1aU] 
                               >> 0x19U)))) << 6U));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn_wmask 
        = ((0x7fU & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn_wmask)) 
           | (((7U < (0xfU & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs1_data)) 
               & (7U != (7U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x1aU] 
                               >> 0x19U)))) << 7U));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn 
        = (((QData)((IData)((1U == (0xfU & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x19U] 
                                            >> 0xfU))))) 
            << 0x26U) | (((QData)((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn_wmask)) 
                          << 0x1eU) | (QData)((IData)(
                                                      ([&]() {
                            vlSelfRef.__Vfunc_from_fullPC__1688__pc 
                                = vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs2_data;
                            vlSelfRef.__Vfunc_from_fullPC__1688__Vfuncout 
                                = (vlSelfRef.__Vfunc_from_fullPC__1688__pc 
                                   >> 2U);
                        }(), vlSelfRef.__Vfunc_from_fullPC__1688__Vfuncout)))));
    __Vtemp_7[2U] = (((0xfffU & ((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn) 
                                 >> 4U)) | ((IData)(
                                                    (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__split 
                                                     >> 0x20U)) 
                                            >> 0x14U)) 
                     | ((0xffff000U & ((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn) 
                                       >> 4U)) | ((IData)(
                                                          (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn 
                                                           >> 0x20U)) 
                                                  << 0x1cU)));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellinp__wctl_reg__data_in[0U] 
        = (((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__split) 
            << 0xcU) | ((((3U == (0xfU & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x19U] 
                                          >> 0xfU))) 
                          << 0xbU) | (0x700U & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs1_data 
                                                << 8U))) 
                        | (((4U == (0xfU & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x19U] 
                                            >> 0xfU))) 
                            << 7U) | ((0x60U & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs1_data 
                                                << 5U)) 
                                      | ((0xeU & ((vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs2_data 
                                                   - (IData)(1U)) 
                                                  << 1U)) 
                                         | (1U == (7U 
                                                   & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs2_data)))))));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellinp__wctl_reg__data_in[1U] 
        = (((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__split) 
            >> 0x14U) | (((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn) 
                          << 0x1cU) | ((IData)((vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__split 
                                                >> 0x20U)) 
                                       << 0xcU)));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellinp__wctl_reg__data_in[2U] 
        = __Vtemp_7[2U];
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellinp__wctl_reg__data_in[3U] 
        = (((((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch.__PVT__pe_req_valid) 
              & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rsp_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)) 
             & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U]) 
            << 0xfU) | ((0x7000U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x1aU] 
                                    >> 0xdU)) | ((0xff8U 
                                                  & ((0x800U 
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
                                                         << 0xbU)) 
                                                     | (0x7f8U 
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
                                                           << 3U)))) 
                                                 | (0xfffU 
                                                    & ((IData)(
                                                               (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn 
                                                                >> 0x20U)) 
                                                       >> 4U)))));
}

VL_ATTR_COLD void Vrtlsim_shim___024root___stl_comb__TOP__88(Vrtlsim_shim___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrtlsim_shim___024root___stl_comb__TOP__88\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<54>/*1727:0*/ __Vtemp_2;
    VlWide<54>/*1727:0*/ __Vtemp_4;
    VlWide<4>/*127:0*/ __Vtemp_7;
    // Body
    __Vtemp_2[0U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U]);
    __Vtemp_2[1U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[1U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U]);
    __Vtemp_2[2U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[2U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U]);
    __Vtemp_2[3U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[3U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U]);
    __Vtemp_2[4U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[4U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U]);
    __Vtemp_2[5U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[5U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U]);
    __Vtemp_2[6U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[6U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U]);
    __Vtemp_2[7U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[7U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U]);
    __Vtemp_2[8U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[8U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U]);
    __Vtemp_2[9U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[9U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[9U]);
    __Vtemp_2[0xaU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0xaU] 
                       & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xaU]);
    __Vtemp_2[0xbU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0xbU] 
                       & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xbU]);
    __Vtemp_2[0xcU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0xcU] 
                       & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xcU]);
    __Vtemp_2[0xdU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0xdU] 
                       & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xdU]);
    __Vtemp_2[0xeU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0xeU] 
                       & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU]);
    __Vtemp_2[0xfU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0xfU] 
                       & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xfU]);
    __Vtemp_2[0x10U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x10U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x10U]);
    __Vtemp_2[0x11U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x11U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x11U]);
    __Vtemp_2[0x12U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x12U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x12U]);
    __Vtemp_2[0x13U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x13U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x13U]);
    __Vtemp_2[0x14U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x14U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x14U]);
    __Vtemp_2[0x15U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x15U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x15U]);
    __Vtemp_2[0x16U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x16U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x16U]);
    __Vtemp_2[0x17U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x17U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x17U]);
    __Vtemp_2[0x18U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x18U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x18U]);
    __Vtemp_2[0x19U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x19U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x19U]);
    __Vtemp_2[0x1aU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x1aU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                            << 0x1dU) | vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x1aU]));
    __Vtemp_2[0x1bU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x1bU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                                      << 0x1dU)));
    __Vtemp_2[0x1cU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x1cU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                                      << 0x1dU)));
    __Vtemp_2[0x1dU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x1dU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                                      << 0x1dU)));
    __Vtemp_2[0x1eU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x1eU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                                      << 0x1dU)));
    __Vtemp_2[0x1fU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x1fU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                                      << 0x1dU)));
    __Vtemp_2[0x20U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x20U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                                      << 0x1dU)));
    __Vtemp_2[0x21U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x21U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                                      << 0x1dU)));
    __Vtemp_2[0x22U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x22U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                                      << 0x1dU)));
    __Vtemp_2[0x23U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x23U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[9U] 
                                      << 0x1dU)));
    __Vtemp_2[0x24U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x24U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[9U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xaU] 
                                      << 0x1dU)));
    __Vtemp_2[0x25U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x25U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xaU] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xbU] 
                                      << 0x1dU)));
    __Vtemp_2[0x26U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x26U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xbU] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xcU] 
                                      << 0x1dU)));
    __Vtemp_2[0x27U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x27U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xcU] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xdU] 
                                      << 0x1dU)));
    __Vtemp_2[0x28U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x28U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xdU] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU] 
                                      << 0x1dU)));
    __Vtemp_2[0x29U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x29U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xfU] 
                                      << 0x1dU)));
    __Vtemp_2[0x2aU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x2aU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xfU] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x10U] 
                                      << 0x1dU)));
    __Vtemp_2[0x2bU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x2bU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x10U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x11U] 
                                      << 0x1dU)));
    __Vtemp_2[0x2cU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x2cU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x11U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x12U] 
                                      << 0x1dU)));
    __Vtemp_2[0x2dU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x2dU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x12U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x13U] 
                                      << 0x1dU)));
    __Vtemp_2[0x2eU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x2eU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x13U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x14U] 
                                      << 0x1dU)));
    __Vtemp_2[0x2fU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x2fU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x14U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x15U] 
                                      << 0x1dU)));
    __Vtemp_2[0x30U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x30U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x15U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x16U] 
                                      << 0x1dU)));
    __Vtemp_2[0x31U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x31U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x16U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x17U] 
                                      << 0x1dU)));
    __Vtemp_2[0x32U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x32U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x17U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x18U] 
                                      << 0x1dU)));
    __Vtemp_2[0x33U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x33U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x18U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x19U] 
                                      << 0x1dU)));
    __Vtemp_2[0x34U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x34U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x19U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x1aU] 
                                      << 0x1dU)));
    __Vtemp_2[0x35U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x35U] 
                        & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x1aU] 
                           >> 3U));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs2_data 
        = ((0x35cU >= ((IData)(0x103U) + (0xffU & VL_SHIFTL_III(8,32,32, 
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
    __Vtemp_4[0U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U]);
    __Vtemp_4[1U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[1U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U]);
    __Vtemp_4[2U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[2U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U]);
    __Vtemp_4[3U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[3U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U]);
    __Vtemp_4[4U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[4U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U]);
    __Vtemp_4[5U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[5U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U]);
    __Vtemp_4[6U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[6U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U]);
    __Vtemp_4[7U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[7U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U]);
    __Vtemp_4[8U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[8U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U]);
    __Vtemp_4[9U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[9U] 
                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[9U]);
    __Vtemp_4[0xaU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0xaU] 
                       & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xaU]);
    __Vtemp_4[0xbU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0xbU] 
                       & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xbU]);
    __Vtemp_4[0xcU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0xcU] 
                       & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xcU]);
    __Vtemp_4[0xdU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0xdU] 
                       & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xdU]);
    __Vtemp_4[0xeU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0xeU] 
                       & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU]);
    __Vtemp_4[0xfU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0xfU] 
                       & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xfU]);
    __Vtemp_4[0x10U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x10U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x10U]);
    __Vtemp_4[0x11U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x11U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x11U]);
    __Vtemp_4[0x12U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x12U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x12U]);
    __Vtemp_4[0x13U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x13U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x13U]);
    __Vtemp_4[0x14U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x14U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x14U]);
    __Vtemp_4[0x15U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x15U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x15U]);
    __Vtemp_4[0x16U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x16U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x16U]);
    __Vtemp_4[0x17U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x17U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x17U]);
    __Vtemp_4[0x18U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x18U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x18U]);
    __Vtemp_4[0x19U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x19U] 
                        & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x19U]);
    __Vtemp_4[0x1aU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x1aU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                            << 0x1dU) | vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x1aU]));
    __Vtemp_4[0x1bU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x1bU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                                      << 0x1dU)));
    __Vtemp_4[0x1cU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x1cU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                                      << 0x1dU)));
    __Vtemp_4[0x1dU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x1dU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                                      << 0x1dU)));
    __Vtemp_4[0x1eU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x1eU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                                      << 0x1dU)));
    __Vtemp_4[0x1fU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x1fU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                                      << 0x1dU)));
    __Vtemp_4[0x20U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x20U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                                      << 0x1dU)));
    __Vtemp_4[0x21U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x21U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                                      << 0x1dU)));
    __Vtemp_4[0x22U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x22U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                                      << 0x1dU)));
    __Vtemp_4[0x23U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x23U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[9U] 
                                      << 0x1dU)));
    __Vtemp_4[0x24U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x24U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[9U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xaU] 
                                      << 0x1dU)));
    __Vtemp_4[0x25U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x25U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xaU] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xbU] 
                                      << 0x1dU)));
    __Vtemp_4[0x26U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x26U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xbU] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xcU] 
                                      << 0x1dU)));
    __Vtemp_4[0x27U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x27U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xcU] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xdU] 
                                      << 0x1dU)));
    __Vtemp_4[0x28U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x28U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xdU] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU] 
                                      << 0x1dU)));
    __Vtemp_4[0x29U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x29U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xfU] 
                                      << 0x1dU)));
    __Vtemp_4[0x2aU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x2aU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xfU] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x10U] 
                                      << 0x1dU)));
    __Vtemp_4[0x2bU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x2bU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x10U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x11U] 
                                      << 0x1dU)));
    __Vtemp_4[0x2cU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x2cU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x11U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x12U] 
                                      << 0x1dU)));
    __Vtemp_4[0x2dU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x2dU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x12U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x13U] 
                                      << 0x1dU)));
    __Vtemp_4[0x2eU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x2eU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x13U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x14U] 
                                      << 0x1dU)));
    __Vtemp_4[0x2fU] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x2fU] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x14U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x15U] 
                                      << 0x1dU)));
    __Vtemp_4[0x30U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x30U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x15U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x16U] 
                                      << 0x1dU)));
    __Vtemp_4[0x31U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x31U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x16U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x17U] 
                                      << 0x1dU)));
    __Vtemp_4[0x32U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x32U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x17U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x18U] 
                                      << 0x1dU)));
    __Vtemp_4[0x33U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x33U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x18U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x19U] 
                                      << 0x1dU)));
    __Vtemp_4[0x34U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x34U] 
                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x19U] 
                            >> 3U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x1aU] 
                                      << 0x1dU)));
    __Vtemp_4[0x35U] = (Vrtlsim_shim__ConstPool__CONST_hb716270b_0[0x35U] 
                        & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x1aU] 
                           >> 3U));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs1_data 
        = ((0x35cU >= ((IData)(0x203U) + (0xffU & VL_SHIFTL_III(8,32,32, 
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
        = ((0xfeU & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn_wmask)) 
           | ((0U < (0xfU & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs1_data)) 
              & (0U != (7U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x1aU] 
                              >> 0x19U)))));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn_wmask 
        = ((0xfdU & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn_wmask)) 
           | (((1U < (0xfU & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs1_data)) 
               & (1U != (7U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x1aU] 
                               >> 0x19U)))) << 1U));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn_wmask 
        = ((0xfbU & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn_wmask)) 
           | (((2U < (0xfU & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs1_data)) 
               & (2U != (7U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x1aU] 
                               >> 0x19U)))) << 2U));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn_wmask 
        = ((0xf7U & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn_wmask)) 
           | (((3U < (0xfU & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs1_data)) 
               & (3U != (7U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x1aU] 
                               >> 0x19U)))) << 3U));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn_wmask 
        = ((0xefU & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn_wmask)) 
           | (((4U < (0xfU & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs1_data)) 
               & (4U != (7U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x1aU] 
                               >> 0x19U)))) << 4U));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn_wmask 
        = ((0xdfU & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn_wmask)) 
           | (((5U < (0xfU & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs1_data)) 
               & (5U != (7U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x1aU] 
                               >> 0x19U)))) << 5U));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn_wmask 
        = ((0xbfU & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn_wmask)) 
           | (((6U < (0xfU & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs1_data)) 
               & (6U != (7U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x1aU] 
                               >> 0x19U)))) << 6U));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn_wmask 
        = ((0x7fU & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn_wmask)) 
           | (((7U < (0xfU & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs1_data)) 
               & (7U != (7U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x1aU] 
                               >> 0x19U)))) << 7U));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn 
        = (((QData)((IData)((1U == (0xfU & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x19U] 
                                            >> 0xfU))))) 
            << 0x26U) | (((QData)((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn_wmask)) 
                          << 0x1eU) | (QData)((IData)(
                                                      ([&]() {
                            vlSelfRef.__Vfunc_from_fullPC__2251__pc 
                                = vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs2_data;
                            vlSelfRef.__Vfunc_from_fullPC__2251__Vfuncout 
                                = (vlSelfRef.__Vfunc_from_fullPC__2251__pc 
                                   >> 2U);
                        }(), vlSelfRef.__Vfunc_from_fullPC__2251__Vfuncout)))));
    __Vtemp_7[2U] = (((0xfffU & ((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn) 
                                 >> 4U)) | ((IData)(
                                                    (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__split 
                                                     >> 0x20U)) 
                                            >> 0x14U)) 
                     | ((0xffff000U & ((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn) 
                                       >> 4U)) | ((IData)(
                                                          (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn 
                                                           >> 0x20U)) 
                                                  << 0x1cU)));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellinp__wctl_reg__data_in[0U] 
        = (((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__split) 
            << 0xcU) | ((((3U == (0xfU & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x19U] 
                                          >> 0xfU))) 
                          << 0xbU) | (0x700U & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs1_data 
                                                << 8U))) 
                        | (((4U == (0xfU & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x19U] 
                                            >> 0xfU))) 
                            << 7U) | ((0x60U & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs1_data 
                                                << 5U)) 
                                      | ((0xeU & ((vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs2_data 
                                                   - (IData)(1U)) 
                                                  << 1U)) 
                                         | (1U == (7U 
                                                   & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs2_data)))))));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellinp__wctl_reg__data_in[1U] 
        = (((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__split) 
            >> 0x14U) | (((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn) 
                          << 0x1cU) | ((IData)((vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__split 
                                                >> 0x20U)) 
                                       << 0xcU)));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellinp__wctl_reg__data_in[2U] 
        = __Vtemp_7[2U];
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellinp__wctl_reg__data_in[3U] 
        = (((((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch.__PVT__pe_req_valid) 
              & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rsp_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)) 
             & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U]) 
            << 0xfU) | ((0x7000U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__buf_out.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0x1aU] 
                                    >> 0xdU)) | ((0xff8U 
                                                  & ((0x800U 
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
                                                         << 0xbU)) 
                                                     | (0x7f8U 
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
                                                           << 3U)))) 
                                                 | (0xfffU 
                                                    & ((IData)(
                                                               (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn 
                                                                >> 0x20U)) 
                                                       >> 4U)))));
}
