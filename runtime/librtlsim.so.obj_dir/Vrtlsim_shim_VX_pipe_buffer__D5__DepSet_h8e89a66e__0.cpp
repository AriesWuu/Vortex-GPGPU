// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrtlsim_shim.h for the primary calling header

#include "Vrtlsim_shim__pch.h"
#include "Vrtlsim_shim_VX_pipe_buffer__D5.h"

VL_INLINE_OPT void Vrtlsim_shim_VX_pipe_buffer__D5___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__g_data_store__BRA__0__KET____DOT__bram_buf__0(Vrtlsim_shim_VX_pipe_buffer__D5* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                        Vrtlsim_shim_VX_pipe_buffer__D5___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__g_data_store__BRA__0__KET____DOT__bram_buf__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__g_register__DOT__ready[0U] = (1U 
                                                   & (vlSelfRef.__PVT__g_register__DOT__ready
                                                      [1U] 
                                                      | (~ 
                                                         ((IData)(vlSelfRef.__PVT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe) 
                                                          >> 5U))));
}
