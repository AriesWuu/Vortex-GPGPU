// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrtlsim_shim.h for the primary calling header

#include "Vrtlsim_shim__pch.h"
#include "Vrtlsim_shim_VX_pipe_buffer__D6f.h"

VL_ATTR_COLD void Vrtlsim_shim_VX_pipe_buffer__D6f___ctor_var_reset(Vrtlsim_shim_VX_pipe_buffer__D6f* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                        Vrtlsim_shim_VX_pipe_buffer__D6f___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->valid_in = VL_RAND_RESET_I(1);
    vlSelf->ready_in = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(111, vlSelf->data_in);
    VL_RAND_RESET_W(111, vlSelf->data_out);
    vlSelf->ready_out = VL_RAND_RESET_I(1);
    vlSelf->valid_out = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__g_register__DOT__ready[__Vi0] = VL_RAND_RESET_I(1);
    }
    VL_RAND_RESET_W(112, vlSelf->__Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in);
    VL_RAND_RESET_W(112, vlSelf->__PVT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe);
}
