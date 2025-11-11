// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrtlsim_shim.h for the primary calling header

#include "Vrtlsim_shim__pch.h"
#include "Vrtlsim_shim_VX_lmem_switch__pi16.h"

extern const VlWide<9>/*287:0*/ Vrtlsim_shim__ConstPool__CONST_h52851f67_0;

VL_ATTR_COLD void Vrtlsim_shim_VX_lmem_switch__pi16___eval_initial__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch(Vrtlsim_shim_VX_lmem_switch__pi16* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vrtlsim_shim_VX_lmem_switch__pi16___eval_initial__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<9>/*287:0*/ __Vtemp_1;
    // Body
    VL_RAND_RESET_ASSIGN_W(266, __Vtemp_1);
    vlSelfRef.rsp_arb__DOT____Vxrand_h1d68f291__0[0U] 
        = (Vrtlsim_shim__ConstPool__CONST_h52851f67_0[0U] 
           & __Vtemp_1[0U]);
    vlSelfRef.rsp_arb__DOT____Vxrand_h1d68f291__0[1U] 
        = (Vrtlsim_shim__ConstPool__CONST_h52851f67_0[1U] 
           & __Vtemp_1[1U]);
    vlSelfRef.rsp_arb__DOT____Vxrand_h1d68f291__0[2U] 
        = (Vrtlsim_shim__ConstPool__CONST_h52851f67_0[2U] 
           & __Vtemp_1[2U]);
    vlSelfRef.rsp_arb__DOT____Vxrand_h1d68f291__0[3U] 
        = (Vrtlsim_shim__ConstPool__CONST_h52851f67_0[3U] 
           & __Vtemp_1[3U]);
    vlSelfRef.rsp_arb__DOT____Vxrand_h1d68f291__0[4U] 
        = (Vrtlsim_shim__ConstPool__CONST_h52851f67_0[4U] 
           & __Vtemp_1[4U]);
    vlSelfRef.rsp_arb__DOT____Vxrand_h1d68f291__0[5U] 
        = (Vrtlsim_shim__ConstPool__CONST_h52851f67_0[5U] 
           & __Vtemp_1[5U]);
    vlSelfRef.rsp_arb__DOT____Vxrand_h1d68f291__0[6U] 
        = (Vrtlsim_shim__ConstPool__CONST_h52851f67_0[6U] 
           & __Vtemp_1[6U]);
    vlSelfRef.rsp_arb__DOT____Vxrand_h1d68f291__0[7U] 
        = (Vrtlsim_shim__ConstPool__CONST_h52851f67_0[7U] 
           & __Vtemp_1[7U]);
    vlSelfRef.rsp_arb__DOT____Vxrand_h1d68f291__0[8U] 
        = (Vrtlsim_shim__ConstPool__CONST_h52851f67_0[8U] 
           & __Vtemp_1[8U]);
}

VL_ATTR_COLD void Vrtlsim_shim_VX_lmem_switch__pi16___ctor_var_reset(Vrtlsim_shim_VX_lmem_switch__pi16* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vrtlsim_shim_VX_lmem_switch__pi16___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->__PVT__is_addr_local_mask = VL_RAND_RESET_I(8);
    vlSelf->__PVT__is_addr_global = VL_RAND_RESET_I(1);
    vlSelf->__PVT__is_addr_local = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__req_local_buf__valid_in = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__rsp_arb__ready_in = VL_RAND_RESET_I(2);
    vlSelf->__Vcellinp__rsp_arb__valid_in = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__ready[__Vi0] = VL_RAND_RESET_I(1);
    }
    VL_RAND_RESET_W(564, vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in);
    VL_RAND_RESET_W(564, vlSelf->__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__ready[__Vi0] = VL_RAND_RESET_I(1);
    }
    VL_RAND_RESET_W(564, vlSelf->req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in);
    VL_RAND_RESET_W(564, vlSelf->__PVT__req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe);
    VL_RAND_RESET_W(266, vlSelf->rsp_arb__DOT____Vxrand_h1d68f291__0);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__ready[__Vi0] = VL_RAND_RESET_I(1);
    }
    VL_RAND_RESET_W(268, vlSelf->rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in);
    VL_RAND_RESET_W(268, vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe);
    vlSelf->__VdfgRegularize_h42ce9742_4_0 = VL_RAND_RESET_I(1);
}
