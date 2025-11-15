// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrtlsim_shim.h for the primary calling header

#include "Vrtlsim_shim__pch.h"
#include "Vrtlsim_shim_VX_tcu_bhf_fadd__IC1_OC1_A2.h"

VL_ATTR_COLD void Vrtlsim_shim_VX_tcu_bhf_fadd__IC1_OC1_A2___ctor_var_reset(Vrtlsim_shim_VX_tcu_bhf_fadd__IC1_OC1_A2* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrtlsim_shim_VX_tcu_bhf_fadd__IC1_OC1_A2___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__reset = VL_RAND_RESET_I(1);
    vlSelf->__PVT__enable = VL_RAND_RESET_I(1);
    vlSelf->__PVT__frm = VL_RAND_RESET_I(3);
    vlSelf->__PVT__a = VL_RAND_RESET_Q(33);
    vlSelf->__PVT__b = VL_RAND_RESET_Q(33);
    vlSelf->__PVT__y = VL_RAND_RESET_Q(33);
    vlSelf->__PVT__fflags = VL_RAND_RESET_I(5);
    vlSelf->__PVT__s2_fflags = VL_RAND_RESET_I(5);
    vlSelf->__Vcellinp__pipe_add__data_in = VL_RAND_RESET_Q(45);
    VL_RAND_RESET_W(90, vlSelf->__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe);
    vlSelf->__PVT__rounding__DOT__isNaNOut = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rounding__DOT__common_fractOut = VL_RAND_RESET_I(23);
    vlSelf->__PVT__rounding__DOT__pegMinNonzeroMagOut = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rounding__DOT__pegMaxFiniteMagOut = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rounding__DOT__notNaN_isInfOut = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rounding__DOT__genblk2__DOT__sRoundedExp = VL_RAND_RESET_I(11);
    vlSelf->rounding__DOT____VdfgRegularize_ha91d3051_0_10 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pipe_rnd__DOT__g_shift_register__DOT__g_shift__DOT__pipe = VL_RAND_RESET_Q(38);
}
