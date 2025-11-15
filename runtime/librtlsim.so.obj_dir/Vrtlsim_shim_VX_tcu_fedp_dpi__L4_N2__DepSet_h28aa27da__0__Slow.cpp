// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrtlsim_shim.h for the primary calling header

#include "Vrtlsim_shim__pch.h"
#include "Vrtlsim_shim_VX_tcu_fedp_dpi__L4_N2.h"

VL_ATTR_COLD void Vrtlsim_shim_VX_tcu_fedp_dpi__L4_N2___eval_initial__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp(Vrtlsim_shim_VX_tcu_fedp_dpi__L4_N2* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vrtlsim_shim_VX_tcu_fedp_dpi__L4_N2___eval_initial__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vxrand_h7d2804ec__1 = VL_RAND_RESET_ASSIGN_Q(64);
    vlSelfRef.__Vxrand_h7d2804ec__0 = VL_RAND_RESET_ASSIGN_Q(64);
}

VL_ATTR_COLD void Vrtlsim_shim_VX_tcu_fedp_dpi__L4_N2___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp__0(Vrtlsim_shim_VX_tcu_fedp_dpi__L4_N2* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vrtlsim_shim_VX_tcu_fedp_dpi__L4_N2___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__nult_result[0U] = (IData)((vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__pipe_mult__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
                                                >> 0x20U));
    vlSelfRef.__PVT__nult_result[1U] = (IData)((vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__pipe_mult__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
                                                >> 0x20U));
}

VL_ATTR_COLD void Vrtlsim_shim_VX_tcu_fedp_dpi__L4_N2___ctor_var_reset(Vrtlsim_shim_VX_tcu_fedp_dpi__L4_N2* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vrtlsim_shim_VX_tcu_fedp_dpi__L4_N2___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__Vxrand_h7d2804ec__1 = VL_RAND_RESET_Q(64);
    vlSelf->__Vxrand_h7d2804ec__0 = VL_RAND_RESET_Q(64);
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->enable = VL_RAND_RESET_I(1);
    vlSelf->fmt_s = VL_RAND_RESET_I(3);
    vlSelf->fmt_d = VL_RAND_RESET_I(3);
    vlSelf->a_row = VL_RAND_RESET_Q(64);
    vlSelf->b_col = VL_RAND_RESET_Q(64);
    vlSelf->c_val = VL_RAND_RESET_I(32);
    vlSelf->d_val = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__nult_result[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__PVT__xacc = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__a_f = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__b_f = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__xprod = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__g_prod__BRA__1__KET____DOT__a_f = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__g_prod__BRA__1__KET____DOT__b_f = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__g_prod__BRA__1__KET____DOT__xprod = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__pipe_acc__DOT__g_shift_register__DOT__g_shift__DOT__pipe = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__g_prod__BRA__0__KET____DOT__pipe_mult__DOT__g_shift_register__DOT__g_shift__DOT__pipe = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__g_prod__BRA__1__KET____DOT__pipe_mult__DOT__g_shift_register__DOT__g_shift__DOT__pipe = VL_RAND_RESET_Q(64);
    vlSelf->__Vtask_dpi_f2f__0__result = 0;
    vlSelf->__Vtask_dpi_f2f__1__result = 0;
    vlSelf->__Vtask_dpi_fmadd__2__result = 0;
    vlSelf->__Vtask_dpi_fmadd__2__fflags = 0;
    vlSelf->__Vtask_dpi_f2f__3__result = 0;
    vlSelf->__Vtask_dpi_f2f__4__result = 0;
    vlSelf->__Vtask_dpi_fmadd__5__result = 0;
    vlSelf->__Vtask_dpi_fmadd__5__fflags = 0;
    vlSelf->__Vtask_dpi_f2f__6__result = 0;
    vlSelf->__Vtask_dpi_f2f__7__result = 0;
    vlSelf->__Vtask_dpi_fmadd__8__result = 0;
    vlSelf->__Vtask_dpi_fmadd__8__fflags = 0;
    vlSelf->__Vtask_dpi_f2f__9__result = 0;
    vlSelf->__Vtask_dpi_f2f__10__result = 0;
    vlSelf->__Vtask_dpi_fmadd__11__result = 0;
    vlSelf->__Vtask_dpi_fmadd__11__fflags = 0;
    vlSelf->__Vtask_dpi_fadd__12__result = 0;
    vlSelf->__Vtask_dpi_fadd__12__fflags = 0;
    vlSelf->__Vtask_dpi_fadd__13__result = 0;
    vlSelf->__Vtask_dpi_fadd__13__fflags = 0;
    vlSelf->__Vtask_dpi_f2f__14__result = 0;
    vlSelf->__Vtask_dpi_f2f__15__result = 0;
    vlSelf->__Vtask_dpi_fmadd__16__result = 0;
    vlSelf->__Vtask_dpi_fmadd__16__fflags = 0;
    vlSelf->__Vtask_dpi_f2f__17__result = 0;
    vlSelf->__Vtask_dpi_f2f__18__result = 0;
    vlSelf->__Vtask_dpi_fmadd__19__result = 0;
    vlSelf->__Vtask_dpi_fmadd__19__fflags = 0;
    vlSelf->__Vtask_dpi_f2f__20__result = 0;
    vlSelf->__Vtask_dpi_f2f__21__result = 0;
    vlSelf->__Vtask_dpi_fmadd__22__result = 0;
    vlSelf->__Vtask_dpi_fmadd__22__fflags = 0;
    vlSelf->__Vtask_dpi_f2f__23__result = 0;
    vlSelf->__Vtask_dpi_f2f__24__result = 0;
    vlSelf->__Vtask_dpi_fmadd__25__result = 0;
    vlSelf->__Vtask_dpi_fmadd__25__fflags = 0;
    vlSelf->__Vtask_dpi_fadd__26__result = 0;
    vlSelf->__Vtask_dpi_fadd__26__fflags = 0;
    vlSelf->__Vtask_dpi_fadd__27__result = 0;
    vlSelf->__Vtask_dpi_fadd__27__fflags = 0;
    vlSelf->__Vtask_dpi_f2f__28__result = 0;
    vlSelf->__Vtask_dpi_f2f__29__result = 0;
    vlSelf->__Vtask_dpi_fmadd__30__result = 0;
    vlSelf->__Vtask_dpi_fmadd__30__fflags = 0;
    vlSelf->__Vtask_dpi_f2f__31__result = 0;
    vlSelf->__Vtask_dpi_f2f__32__result = 0;
    vlSelf->__Vtask_dpi_fmadd__33__result = 0;
    vlSelf->__Vtask_dpi_fmadd__33__fflags = 0;
    vlSelf->__Vtask_dpi_f2f__34__result = 0;
    vlSelf->__Vtask_dpi_f2f__35__result = 0;
    vlSelf->__Vtask_dpi_fmadd__36__result = 0;
    vlSelf->__Vtask_dpi_fmadd__36__fflags = 0;
    vlSelf->__Vtask_dpi_f2f__37__result = 0;
    vlSelf->__Vtask_dpi_f2f__38__result = 0;
    vlSelf->__Vtask_dpi_fmadd__39__result = 0;
    vlSelf->__Vtask_dpi_fmadd__39__fflags = 0;
    vlSelf->__Vtask_dpi_fadd__40__result = 0;
    vlSelf->__Vtask_dpi_fadd__40__fflags = 0;
    vlSelf->__Vtask_dpi_fadd__41__result = 0;
    vlSelf->__Vtask_dpi_fadd__41__fflags = 0;
    vlSelf->__Vtask_dpi_f2f__42__result = 0;
    vlSelf->__Vtask_dpi_f2f__43__result = 0;
    vlSelf->__Vtask_dpi_fmadd__44__result = 0;
    vlSelf->__Vtask_dpi_fmadd__44__fflags = 0;
    vlSelf->__Vtask_dpi_f2f__45__result = 0;
    vlSelf->__Vtask_dpi_f2f__46__result = 0;
    vlSelf->__Vtask_dpi_fmadd__47__result = 0;
    vlSelf->__Vtask_dpi_fmadd__47__fflags = 0;
    vlSelf->__Vtask_dpi_f2f__48__result = 0;
    vlSelf->__Vtask_dpi_f2f__49__result = 0;
    vlSelf->__Vtask_dpi_fmadd__50__result = 0;
    vlSelf->__Vtask_dpi_fmadd__50__fflags = 0;
    vlSelf->__Vtask_dpi_f2f__51__result = 0;
    vlSelf->__Vtask_dpi_f2f__52__result = 0;
    vlSelf->__Vtask_dpi_fmadd__53__result = 0;
    vlSelf->__Vtask_dpi_fmadd__53__fflags = 0;
    vlSelf->__Vtask_dpi_fadd__54__result = 0;
    vlSelf->__Vtask_dpi_fadd__54__fflags = 0;
    vlSelf->__Vtask_dpi_fadd__55__result = 0;
    vlSelf->__Vtask_dpi_fadd__55__fflags = 0;
    vlSelf->__Vtask_dpi_f2f__56__result = 0;
    vlSelf->__Vtask_dpi_f2f__57__result = 0;
    vlSelf->__Vtask_dpi_fmadd__58__result = 0;
    vlSelf->__Vtask_dpi_fmadd__58__fflags = 0;
    vlSelf->__Vtask_dpi_f2f__59__result = 0;
    vlSelf->__Vtask_dpi_f2f__60__result = 0;
    vlSelf->__Vtask_dpi_fmadd__61__result = 0;
    vlSelf->__Vtask_dpi_fmadd__61__fflags = 0;
    vlSelf->__Vtask_dpi_f2f__62__result = 0;
    vlSelf->__Vtask_dpi_f2f__63__result = 0;
    vlSelf->__Vtask_dpi_fmadd__64__result = 0;
    vlSelf->__Vtask_dpi_fmadd__64__fflags = 0;
    vlSelf->__Vtask_dpi_f2f__65__result = 0;
    vlSelf->__Vtask_dpi_f2f__66__result = 0;
    vlSelf->__Vtask_dpi_fmadd__67__result = 0;
    vlSelf->__Vtask_dpi_fmadd__67__fflags = 0;
    vlSelf->__Vtask_dpi_fadd__68__result = 0;
    vlSelf->__Vtask_dpi_fadd__68__fflags = 0;
    vlSelf->__Vtask_dpi_fadd__69__result = 0;
    vlSelf->__Vtask_dpi_fadd__69__fflags = 0;
    vlSelf->__Vtask_dpi_f2f__70__result = 0;
    vlSelf->__Vtask_dpi_f2f__71__result = 0;
    vlSelf->__Vtask_dpi_fmadd__72__result = 0;
    vlSelf->__Vtask_dpi_fmadd__72__fflags = 0;
    vlSelf->__Vtask_dpi_f2f__73__result = 0;
    vlSelf->__Vtask_dpi_f2f__74__result = 0;
    vlSelf->__Vtask_dpi_fmadd__75__result = 0;
    vlSelf->__Vtask_dpi_fmadd__75__fflags = 0;
    vlSelf->__Vtask_dpi_f2f__76__result = 0;
    vlSelf->__Vtask_dpi_f2f__77__result = 0;
    vlSelf->__Vtask_dpi_fmadd__78__result = 0;
    vlSelf->__Vtask_dpi_fmadd__78__fflags = 0;
    vlSelf->__Vtask_dpi_f2f__79__result = 0;
    vlSelf->__Vtask_dpi_f2f__80__result = 0;
    vlSelf->__Vtask_dpi_fmadd__81__result = 0;
    vlSelf->__Vtask_dpi_fmadd__81__fflags = 0;
    vlSelf->__Vtask_dpi_fadd__82__result = 0;
    vlSelf->__Vtask_dpi_fadd__82__fflags = 0;
    vlSelf->__Vtask_dpi_fadd__83__result = 0;
    vlSelf->__Vtask_dpi_fadd__83__fflags = 0;
    vlSelf->__Vtask_dpi_f2f__84__result = 0;
    vlSelf->__Vtask_dpi_f2f__85__result = 0;
    vlSelf->__Vtask_dpi_fmadd__86__result = 0;
    vlSelf->__Vtask_dpi_fmadd__86__fflags = 0;
    vlSelf->__Vtask_dpi_f2f__87__result = 0;
    vlSelf->__Vtask_dpi_f2f__88__result = 0;
    vlSelf->__Vtask_dpi_fmadd__89__result = 0;
    vlSelf->__Vtask_dpi_fmadd__89__fflags = 0;
    vlSelf->__Vtask_dpi_f2f__90__result = 0;
    vlSelf->__Vtask_dpi_f2f__91__result = 0;
    vlSelf->__Vtask_dpi_fmadd__92__result = 0;
    vlSelf->__Vtask_dpi_fmadd__92__fflags = 0;
    vlSelf->__Vtask_dpi_f2f__93__result = 0;
    vlSelf->__Vtask_dpi_f2f__94__result = 0;
    vlSelf->__Vtask_dpi_fmadd__95__result = 0;
    vlSelf->__Vtask_dpi_fmadd__95__fflags = 0;
    vlSelf->__Vtask_dpi_fadd__96__result = 0;
    vlSelf->__Vtask_dpi_fadd__96__fflags = 0;
    vlSelf->__Vtask_dpi_fadd__97__result = 0;
    vlSelf->__Vtask_dpi_fadd__97__fflags = 0;
    vlSelf->__Vtask_dpi_f2f__98__result = 0;
    vlSelf->__Vtask_dpi_f2f__99__result = 0;
    vlSelf->__Vtask_dpi_fmadd__100__result = 0;
    vlSelf->__Vtask_dpi_fmadd__100__fflags = 0;
    vlSelf->__Vtask_dpi_f2f__101__result = 0;
    vlSelf->__Vtask_dpi_f2f__102__result = 0;
    vlSelf->__Vtask_dpi_fmadd__103__result = 0;
    vlSelf->__Vtask_dpi_fmadd__103__fflags = 0;
    vlSelf->__Vtask_dpi_f2f__104__result = 0;
    vlSelf->__Vtask_dpi_f2f__105__result = 0;
    vlSelf->__Vtask_dpi_fmadd__106__result = 0;
    vlSelf->__Vtask_dpi_fmadd__106__fflags = 0;
    vlSelf->__Vtask_dpi_f2f__107__result = 0;
    vlSelf->__Vtask_dpi_f2f__108__result = 0;
    vlSelf->__Vtask_dpi_fmadd__109__result = 0;
    vlSelf->__Vtask_dpi_fmadd__109__fflags = 0;
    vlSelf->__Vtask_dpi_fadd__110__result = 0;
    vlSelf->__Vtask_dpi_fadd__110__fflags = 0;
    vlSelf->__Vtask_dpi_fadd__111__result = 0;
    vlSelf->__Vtask_dpi_fadd__111__fflags = 0;
}
