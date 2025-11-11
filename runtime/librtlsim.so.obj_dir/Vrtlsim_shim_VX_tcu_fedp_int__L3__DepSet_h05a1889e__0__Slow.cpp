// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrtlsim_shim.h for the primary calling header

#include "Vrtlsim_shim__pch.h"
#include "Vrtlsim_shim_VX_tcu_fedp_int__L3.h"

VL_ATTR_COLD void Vrtlsim_shim_VX_tcu_fedp_int__L3___eval_initial__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_int__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp(Vrtlsim_shim_VX_tcu_fedp_int__L3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vrtlsim_shim_VX_tcu_fedp_int__L3___eval_initial__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_int__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vxrand_h877b71b9__0 = (0x7ffffU & VL_RAND_RESET_ASSIGN_I(19));
}

VL_ATTR_COLD void Vrtlsim_shim_VX_tcu_fedp_int__L3___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_int__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp__0(Vrtlsim_shim_VX_tcu_fedp_int__L3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vrtlsim_shim_VX_tcu_fedp_int__L3___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_int__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__mult_result[0U] = vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__pipe_sel__DOT__g_shift_register__DOT__g_shift__DOT__pipe;
    vlSelfRef.__PVT__red_in[0U][0U] = vlSelfRef.__PVT__mult_result
        [0U];
}

VL_ATTR_COLD void Vrtlsim_shim_VX_tcu_fedp_int__L3___ctor_var_reset(Vrtlsim_shim_VX_tcu_fedp_int__L3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vrtlsim_shim_VX_tcu_fedp_int__L3___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__Vxrand_h877b71b9__0 = VL_RAND_RESET_I(19);
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->enable = VL_RAND_RESET_I(1);
    vlSelf->fmt_s = VL_RAND_RESET_I(3);
    vlSelf->fmt_d = VL_RAND_RESET_I(3);
    vlSelf->a_row = VL_RAND_RESET_I(32);
    vlSelf->b_col = VL_RAND_RESET_I(32);
    vlSelf->c_val = VL_RAND_RESET_I(32);
    vlSelf->d_val = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__mult_result[__Vi0] = VL_RAND_RESET_I(19);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 1; ++__Vi1) {
            vlSelf->__PVT__red_in[__Vi0][__Vi1] = VL_RAND_RESET_I(19);
        }
    }
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__prod_i8_1a = VL_RAND_RESET_I(17);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__prod_i8_1b = VL_RAND_RESET_I(17);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__prod_u8_1a = VL_RAND_RESET_I(17);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__prod_u8_1b = VL_RAND_RESET_I(17);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__prod_i4_1a = VL_RAND_RESET_I(10);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__prod_i4_1b = VL_RAND_RESET_I(10);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__prod_u4_1a = VL_RAND_RESET_I(10);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__prod_u4_1b = VL_RAND_RESET_I(10);
    vlSelf->__PVT__pipe_fmt_s__DOT__g_shift_register__DOT__g_shift__DOT__pipe = VL_RAND_RESET_I(3);
    vlSelf->__PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__pipe_acc__DOT__g_shift_register__DOT__g_shift__DOT__pipe = VL_RAND_RESET_I(32);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__pipe_sel__DOT__g_shift_register__DOT__g_shift__DOT__pipe = VL_RAND_RESET_I(19);
}
