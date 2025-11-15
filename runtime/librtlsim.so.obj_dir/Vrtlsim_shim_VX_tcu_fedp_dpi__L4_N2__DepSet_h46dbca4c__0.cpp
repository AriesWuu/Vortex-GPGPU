// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrtlsim_shim.h for the primary calling header

#include "Vrtlsim_shim__pch.h"
#include "Vrtlsim_shim_VX_tcu_fedp_dpi__L4_N2.h"
#include "Vrtlsim_shim__Syms.h"

void Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fadd_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, QData/*63:0*/ b, CData/*2:0*/ frm, QData/*63:0*/ &result, CData/*4:0*/ &fflags);
void Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, IData/*31:0*/ src_fmt, QData/*63:0*/ a, QData/*63:0*/ &result);
void Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmadd_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, QData/*63:0*/ b, QData/*63:0*/ c, CData/*2:0*/ frm, QData/*63:0*/ &result, CData/*4:0*/ &fflags);

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_fedp_dpi__L4_N2___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp__0(Vrtlsim_shim_VX_tcu_fedp_dpi__L4_N2* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vrtlsim_shim_VX_tcu_fedp_dpi__L4_N2___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fadd_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 
                                                                 (0xffffffff00000000ULL 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__nult_result
                                                                                [0U]))), 0xffffffff00000000ULL, 0U, vlSelfRef.__Vtask_dpi_fadd__12__result, vlSelfRef.__Vtask_dpi_fadd__12__fflags);
    vlSelfRef.__PVT__xacc = vlSelfRef.__Vtask_dpi_fadd__12__result;
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fadd_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 
                                                                 (0xffffffff00000000ULL 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__nult_result
                                                                                [1U]))), vlSelfRef.__PVT__xacc, 0U, vlSelfRef.__Vtask_dpi_fadd__12__result, vlSelfRef.__Vtask_dpi_fadd__12__fflags);
    vlSelfRef.__PVT__xacc = vlSelfRef.__Vtask_dpi_fadd__12__result;
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fadd_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 
                                                                 (0xffffffff00000000ULL 
                                                                  | (QData)((IData)(
                                                                                (vlSelfRef.__PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
                                                                                >> 0x20U)))), vlSelfRef.__PVT__xacc, 0U, vlSelfRef.__Vtask_dpi_fadd__13__result, vlSelfRef.__Vtask_dpi_fadd__13__fflags);
    vlSelfRef.__PVT__xacc = vlSelfRef.__Vtask_dpi_fadd__13__result;
    if ((1U == (7U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                      >> 3U)))) {
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 2U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                                >> 6U))))), vlSelfRef.__Vtask_dpi_f2f__0__result);
        vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__a_f 
            = vlSelfRef.__Vtask_dpi_f2f__0__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 2U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 6U))))), vlSelfRef.__Vtask_dpi_f2f__1__result);
        vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__b_f 
            = vlSelfRef.__Vtask_dpi_f2f__1__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmadd_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__a_f, vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__b_f, 0xffffffff00000000ULL, 0U, vlSelfRef.__Vtask_dpi_fmadd__2__result, vlSelfRef.__Vtask_dpi_fmadd__2__fflags);
        vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__xprod 
            = vlSelfRef.__Vtask_dpi_fmadd__2__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 2U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                                << 0xaU) 
                                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                                >> 0x16U)))))), vlSelfRef.__Vtask_dpi_f2f__0__result);
        vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__a_f 
            = vlSelfRef.__Vtask_dpi_f2f__0__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 2U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                                << 0xaU) 
                                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 0x16U)))))), vlSelfRef.__Vtask_dpi_f2f__1__result);
        vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__b_f 
            = vlSelfRef.__Vtask_dpi_f2f__1__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmadd_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__a_f, vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__b_f, vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__xprod, 0U, vlSelfRef.__Vtask_dpi_fmadd__2__result, vlSelfRef.__Vtask_dpi_fmadd__2__fflags);
        vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__xprod 
            = vlSelfRef.__Vtask_dpi_fmadd__2__result;
    } else if ((2U == (7U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                             >> 3U)))) {
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 3U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                                >> 6U))))), vlSelfRef.__Vtask_dpi_f2f__3__result);
        vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__a_f 
            = vlSelfRef.__Vtask_dpi_f2f__3__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 3U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 6U))))), vlSelfRef.__Vtask_dpi_f2f__4__result);
        vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__b_f 
            = vlSelfRef.__Vtask_dpi_f2f__4__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmadd_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__a_f, vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__b_f, 0xffffffff00000000ULL, 0U, vlSelfRef.__Vtask_dpi_fmadd__5__result, vlSelfRef.__Vtask_dpi_fmadd__5__fflags);
        vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__xprod 
            = vlSelfRef.__Vtask_dpi_fmadd__5__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 3U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                                << 0xaU) 
                                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                                >> 0x16U)))))), vlSelfRef.__Vtask_dpi_f2f__3__result);
        vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__a_f 
            = vlSelfRef.__Vtask_dpi_f2f__3__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 3U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                                << 0xaU) 
                                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 0x16U)))))), vlSelfRef.__Vtask_dpi_f2f__4__result);
        vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__b_f 
            = vlSelfRef.__Vtask_dpi_f2f__4__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmadd_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__a_f, vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__b_f, vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__xprod, 0U, vlSelfRef.__Vtask_dpi_fmadd__5__result, vlSelfRef.__Vtask_dpi_fmadd__5__fflags);
        vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__xprod 
            = vlSelfRef.__Vtask_dpi_fmadd__5__result;
    } else {
        vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__xprod 
            = vlSelfRef.__Vxrand_h7d2804ec__0;
    }
    if ((1U == (7U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                      >> 3U)))) {
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 2U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                                >> 6U))))), vlSelfRef.__Vtask_dpi_f2f__6__result);
        vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__a_f 
            = vlSelfRef.__Vtask_dpi_f2f__6__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 2U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                                >> 6U))))), vlSelfRef.__Vtask_dpi_f2f__7__result);
        vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__b_f 
            = vlSelfRef.__Vtask_dpi_f2f__7__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmadd_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__a_f, vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__b_f, 0xffffffff00000000ULL, 0U, vlSelfRef.__Vtask_dpi_fmadd__8__result, vlSelfRef.__Vtask_dpi_fmadd__8__fflags);
        vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__xprod 
            = vlSelfRef.__Vtask_dpi_fmadd__8__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 2U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[5U] 
                                                                                << 0xaU) 
                                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                                >> 0x16U)))))), vlSelfRef.__Vtask_dpi_f2f__6__result);
        vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__a_f 
            = vlSelfRef.__Vtask_dpi_f2f__6__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 2U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                                << 0xaU) 
                                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                                >> 0x16U)))))), vlSelfRef.__Vtask_dpi_f2f__7__result);
        vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__b_f 
            = vlSelfRef.__Vtask_dpi_f2f__7__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmadd_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__a_f, vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__b_f, vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__xprod, 0U, vlSelfRef.__Vtask_dpi_fmadd__8__result, vlSelfRef.__Vtask_dpi_fmadd__8__fflags);
        vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__xprod 
            = vlSelfRef.__Vtask_dpi_fmadd__8__result;
    } else if ((2U == (7U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                             >> 3U)))) {
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 3U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                                >> 6U))))), vlSelfRef.__Vtask_dpi_f2f__9__result);
        vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__a_f 
            = vlSelfRef.__Vtask_dpi_f2f__9__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 3U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                                >> 6U))))), vlSelfRef.__Vtask_dpi_f2f__10__result);
        vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__b_f 
            = vlSelfRef.__Vtask_dpi_f2f__10__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmadd_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__a_f, vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__b_f, 0xffffffff00000000ULL, 0U, vlSelfRef.__Vtask_dpi_fmadd__11__result, vlSelfRef.__Vtask_dpi_fmadd__11__fflags);
        vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__xprod 
            = vlSelfRef.__Vtask_dpi_fmadd__11__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 3U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[5U] 
                                                                                << 0xaU) 
                                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                                >> 0x16U)))))), vlSelfRef.__Vtask_dpi_f2f__9__result);
        vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__a_f 
            = vlSelfRef.__Vtask_dpi_f2f__9__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 3U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                                << 0xaU) 
                                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                                >> 0x16U)))))), vlSelfRef.__Vtask_dpi_f2f__10__result);
        vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__b_f 
            = vlSelfRef.__Vtask_dpi_f2f__10__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmadd_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__a_f, vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__b_f, vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__xprod, 0U, vlSelfRef.__Vtask_dpi_fmadd__11__result, vlSelfRef.__Vtask_dpi_fmadd__11__fflags);
        vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__xprod 
            = vlSelfRef.__Vtask_dpi_fmadd__11__result;
    } else {
        vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__xprod 
            = vlSelfRef.__Vxrand_h7d2804ec__1;
    }
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_fedp_dpi__L4_N2___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp__0(Vrtlsim_shim_VX_tcu_fedp_dpi__L4_N2* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vrtlsim_shim_VX_tcu_fedp_dpi__L4_N2___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    QData/*63:0*/ __Vdly__pipe_acc__DOT__g_shift_register__DOT__g_shift__DOT__pipe;
    __Vdly__pipe_acc__DOT__g_shift_register__DOT__g_shift__DOT__pipe = 0;
    // Body
    __Vdly__pipe_acc__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
        = vlSelfRef.__PVT__pipe_acc__DOT__g_shift_register__DOT__g_shift__DOT__pipe;
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable) {
        vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__pipe_mult__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
            = ((0xffffffffULL & vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__pipe_mult__DOT__g_shift_register__DOT__g_shift__DOT__pipe) 
               | ((QData)((IData)((IData)(vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__pipe_mult__DOT__g_shift_register__DOT__g_shift__DOT__pipe))) 
                  << 0x20U));
        vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__pipe_mult__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
            = ((0xffffffff00000000ULL & vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__pipe_mult__DOT__g_shift_register__DOT__g_shift__DOT__pipe) 
               | (IData)((IData)(vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__xprod)));
        vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__pipe_mult__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
            = ((0xffffffffULL & vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__pipe_mult__DOT__g_shift_register__DOT__g_shift__DOT__pipe) 
               | ((QData)((IData)((IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__pipe_mult__DOT__g_shift_register__DOT__g_shift__DOT__pipe))) 
                  << 0x20U));
        vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__pipe_mult__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
            = ((0xffffffff00000000ULL & vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__pipe_mult__DOT__g_shift_register__DOT__g_shift__DOT__pipe) 
               | (IData)((IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__xprod)));
        __Vdly__pipe_acc__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
            = ((0xffffffff00000000ULL & __Vdly__pipe_acc__DOT__g_shift_register__DOT__g_shift__DOT__pipe) 
               | (IData)((IData)(vlSelfRef.__PVT__xacc)));
        __Vdly__pipe_acc__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
            = ((0xffffffffULL & __Vdly__pipe_acc__DOT__g_shift_register__DOT__g_shift__DOT__pipe) 
               | ((QData)((IData)((IData)(vlSelfRef.__PVT__pipe_acc__DOT__g_shift_register__DOT__g_shift__DOT__pipe))) 
                  << 0x20U));
        vlSelfRef.__PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
            = ((0xffffffffULL & vlSelfRef.__PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe) 
               | ((QData)((IData)((IData)(vlSelfRef.__PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe))) 
                  << 0x20U));
        vlSelfRef.__PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
            = ((0xffffffff00000000ULL & vlSelfRef.__PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe) 
               | (IData)((IData)(((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                   << 0x1aU) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                                                >> 6U)))));
    }
    vlSelfRef.__PVT__pipe_acc__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
        = __Vdly__pipe_acc__DOT__g_shift_register__DOT__g_shift__DOT__pipe;
    vlSelfRef.__PVT__nult_result[1U] = (IData)((vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__pipe_mult__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
                                                >> 0x20U));
    vlSelfRef.__PVT__nult_result[0U] = (IData)((vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__pipe_mult__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
                                                >> 0x20U));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_fedp_dpi__L4_N2___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp__0(Vrtlsim_shim_VX_tcu_fedp_dpi__L4_N2* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vrtlsim_shim_VX_tcu_fedp_dpi__L4_N2___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fadd_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 
                                                                 (0xffffffff00000000ULL 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__nult_result
                                                                                [0U]))), 0xffffffff00000000ULL, 0U, vlSelfRef.__Vtask_dpi_fadd__26__result, vlSelfRef.__Vtask_dpi_fadd__26__fflags);
    vlSelfRef.__PVT__xacc = vlSelfRef.__Vtask_dpi_fadd__26__result;
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fadd_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 
                                                                 (0xffffffff00000000ULL 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__nult_result
                                                                                [1U]))), vlSelfRef.__PVT__xacc, 0U, vlSelfRef.__Vtask_dpi_fadd__26__result, vlSelfRef.__Vtask_dpi_fadd__26__fflags);
    vlSelfRef.__PVT__xacc = vlSelfRef.__Vtask_dpi_fadd__26__result;
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fadd_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 
                                                                 (0xffffffff00000000ULL 
                                                                  | (QData)((IData)(
                                                                                (vlSelfRef.__PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
                                                                                >> 0x20U)))), vlSelfRef.__PVT__xacc, 0U, vlSelfRef.__Vtask_dpi_fadd__27__result, vlSelfRef.__Vtask_dpi_fadd__27__fflags);
    vlSelfRef.__PVT__xacc = vlSelfRef.__Vtask_dpi_fadd__27__result;
    if ((1U == (7U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                      >> 3U)))) {
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 2U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                                >> 6U))))), vlSelfRef.__Vtask_dpi_f2f__14__result);
        vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__a_f 
            = vlSelfRef.__Vtask_dpi_f2f__14__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 2U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 6U))))), vlSelfRef.__Vtask_dpi_f2f__15__result);
        vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__b_f 
            = vlSelfRef.__Vtask_dpi_f2f__15__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmadd_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__a_f, vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__b_f, 0xffffffff00000000ULL, 0U, vlSelfRef.__Vtask_dpi_fmadd__16__result, vlSelfRef.__Vtask_dpi_fmadd__16__fflags);
        vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__xprod 
            = vlSelfRef.__Vtask_dpi_fmadd__16__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 2U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                                << 0xaU) 
                                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                                >> 0x16U)))))), vlSelfRef.__Vtask_dpi_f2f__14__result);
        vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__a_f 
            = vlSelfRef.__Vtask_dpi_f2f__14__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 2U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                                << 0xaU) 
                                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 0x16U)))))), vlSelfRef.__Vtask_dpi_f2f__15__result);
        vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__b_f 
            = vlSelfRef.__Vtask_dpi_f2f__15__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmadd_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__a_f, vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__b_f, vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__xprod, 0U, vlSelfRef.__Vtask_dpi_fmadd__16__result, vlSelfRef.__Vtask_dpi_fmadd__16__fflags);
        vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__xprod 
            = vlSelfRef.__Vtask_dpi_fmadd__16__result;
    } else if ((2U == (7U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                             >> 3U)))) {
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 3U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                                >> 6U))))), vlSelfRef.__Vtask_dpi_f2f__17__result);
        vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__a_f 
            = vlSelfRef.__Vtask_dpi_f2f__17__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 3U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 6U))))), vlSelfRef.__Vtask_dpi_f2f__18__result);
        vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__b_f 
            = vlSelfRef.__Vtask_dpi_f2f__18__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmadd_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__a_f, vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__b_f, 0xffffffff00000000ULL, 0U, vlSelfRef.__Vtask_dpi_fmadd__19__result, vlSelfRef.__Vtask_dpi_fmadd__19__fflags);
        vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__xprod 
            = vlSelfRef.__Vtask_dpi_fmadd__19__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 3U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                                << 0xaU) 
                                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                                >> 0x16U)))))), vlSelfRef.__Vtask_dpi_f2f__17__result);
        vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__a_f 
            = vlSelfRef.__Vtask_dpi_f2f__17__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 3U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                                << 0xaU) 
                                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 0x16U)))))), vlSelfRef.__Vtask_dpi_f2f__18__result);
        vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__b_f 
            = vlSelfRef.__Vtask_dpi_f2f__18__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmadd_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__a_f, vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__b_f, vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__xprod, 0U, vlSelfRef.__Vtask_dpi_fmadd__19__result, vlSelfRef.__Vtask_dpi_fmadd__19__fflags);
        vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__xprod 
            = vlSelfRef.__Vtask_dpi_fmadd__19__result;
    } else {
        vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__xprod 
            = vlSelfRef.__Vxrand_h7d2804ec__0;
    }
    if ((1U == (7U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                      >> 3U)))) {
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 2U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                                >> 6U))))), vlSelfRef.__Vtask_dpi_f2f__20__result);
        vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__a_f 
            = vlSelfRef.__Vtask_dpi_f2f__20__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 2U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                                >> 6U))))), vlSelfRef.__Vtask_dpi_f2f__21__result);
        vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__b_f 
            = vlSelfRef.__Vtask_dpi_f2f__21__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmadd_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__a_f, vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__b_f, 0xffffffff00000000ULL, 0U, vlSelfRef.__Vtask_dpi_fmadd__22__result, vlSelfRef.__Vtask_dpi_fmadd__22__fflags);
        vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__xprod 
            = vlSelfRef.__Vtask_dpi_fmadd__22__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 2U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[5U] 
                                                                                << 0xaU) 
                                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                                >> 0x16U)))))), vlSelfRef.__Vtask_dpi_f2f__20__result);
        vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__a_f 
            = vlSelfRef.__Vtask_dpi_f2f__20__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 2U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                                << 0xaU) 
                                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                                >> 0x16U)))))), vlSelfRef.__Vtask_dpi_f2f__21__result);
        vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__b_f 
            = vlSelfRef.__Vtask_dpi_f2f__21__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmadd_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__a_f, vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__b_f, vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__xprod, 0U, vlSelfRef.__Vtask_dpi_fmadd__22__result, vlSelfRef.__Vtask_dpi_fmadd__22__fflags);
        vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__xprod 
            = vlSelfRef.__Vtask_dpi_fmadd__22__result;
    } else if ((2U == (7U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                             >> 3U)))) {
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 3U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                                >> 6U))))), vlSelfRef.__Vtask_dpi_f2f__23__result);
        vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__a_f 
            = vlSelfRef.__Vtask_dpi_f2f__23__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 3U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                                >> 6U))))), vlSelfRef.__Vtask_dpi_f2f__24__result);
        vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__b_f 
            = vlSelfRef.__Vtask_dpi_f2f__24__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmadd_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__a_f, vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__b_f, 0xffffffff00000000ULL, 0U, vlSelfRef.__Vtask_dpi_fmadd__25__result, vlSelfRef.__Vtask_dpi_fmadd__25__fflags);
        vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__xprod 
            = vlSelfRef.__Vtask_dpi_fmadd__25__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 3U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[5U] 
                                                                                << 0xaU) 
                                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                                >> 0x16U)))))), vlSelfRef.__Vtask_dpi_f2f__23__result);
        vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__a_f 
            = vlSelfRef.__Vtask_dpi_f2f__23__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 3U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                                << 0xaU) 
                                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                                >> 0x16U)))))), vlSelfRef.__Vtask_dpi_f2f__24__result);
        vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__b_f 
            = vlSelfRef.__Vtask_dpi_f2f__24__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmadd_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__a_f, vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__b_f, vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__xprod, 0U, vlSelfRef.__Vtask_dpi_fmadd__25__result, vlSelfRef.__Vtask_dpi_fmadd__25__fflags);
        vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__xprod 
            = vlSelfRef.__Vtask_dpi_fmadd__25__result;
    } else {
        vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__xprod 
            = vlSelfRef.__Vxrand_h7d2804ec__1;
    }
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_fedp_dpi__L4_N2___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp__0(Vrtlsim_shim_VX_tcu_fedp_dpi__L4_N2* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vrtlsim_shim_VX_tcu_fedp_dpi__L4_N2___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    QData/*63:0*/ __Vdly__pipe_acc__DOT__g_shift_register__DOT__g_shift__DOT__pipe;
    __Vdly__pipe_acc__DOT__g_shift_register__DOT__g_shift__DOT__pipe = 0;
    // Body
    __Vdly__pipe_acc__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
        = vlSelfRef.__PVT__pipe_acc__DOT__g_shift_register__DOT__g_shift__DOT__pipe;
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable) {
        vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__pipe_mult__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
            = ((0xffffffffULL & vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__pipe_mult__DOT__g_shift_register__DOT__g_shift__DOT__pipe) 
               | ((QData)((IData)((IData)(vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__pipe_mult__DOT__g_shift_register__DOT__g_shift__DOT__pipe))) 
                  << 0x20U));
        vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__pipe_mult__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
            = ((0xffffffff00000000ULL & vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__pipe_mult__DOT__g_shift_register__DOT__g_shift__DOT__pipe) 
               | (IData)((IData)(vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__xprod)));
        vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__pipe_mult__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
            = ((0xffffffffULL & vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__pipe_mult__DOT__g_shift_register__DOT__g_shift__DOT__pipe) 
               | ((QData)((IData)((IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__pipe_mult__DOT__g_shift_register__DOT__g_shift__DOT__pipe))) 
                  << 0x20U));
        vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__pipe_mult__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
            = ((0xffffffff00000000ULL & vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__pipe_mult__DOT__g_shift_register__DOT__g_shift__DOT__pipe) 
               | (IData)((IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__xprod)));
        __Vdly__pipe_acc__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
            = ((0xffffffff00000000ULL & __Vdly__pipe_acc__DOT__g_shift_register__DOT__g_shift__DOT__pipe) 
               | (IData)((IData)(vlSelfRef.__PVT__xacc)));
        __Vdly__pipe_acc__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
            = ((0xffffffffULL & __Vdly__pipe_acc__DOT__g_shift_register__DOT__g_shift__DOT__pipe) 
               | ((QData)((IData)((IData)(vlSelfRef.__PVT__pipe_acc__DOT__g_shift_register__DOT__g_shift__DOT__pipe))) 
                  << 0x20U));
        vlSelfRef.__PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
            = ((0xffffffffULL & vlSelfRef.__PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe) 
               | ((QData)((IData)((IData)(vlSelfRef.__PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe))) 
                  << 0x20U));
        vlSelfRef.__PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
            = ((0xffffffff00000000ULL & vlSelfRef.__PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe) 
               | (IData)((IData)(((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                   << 0x1aU) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                                                >> 6U)))));
    }
    vlSelfRef.__PVT__pipe_acc__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
        = __Vdly__pipe_acc__DOT__g_shift_register__DOT__g_shift__DOT__pipe;
    vlSelfRef.__PVT__nult_result[1U] = (IData)((vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__pipe_mult__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
                                                >> 0x20U));
    vlSelfRef.__PVT__nult_result[0U] = (IData)((vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__pipe_mult__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
                                                >> 0x20U));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_fedp_dpi__L4_N2___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp__0(Vrtlsim_shim_VX_tcu_fedp_dpi__L4_N2* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vrtlsim_shim_VX_tcu_fedp_dpi__L4_N2___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fadd_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 
                                                                 (0xffffffff00000000ULL 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__nult_result
                                                                                [0U]))), 0xffffffff00000000ULL, 0U, vlSelfRef.__Vtask_dpi_fadd__40__result, vlSelfRef.__Vtask_dpi_fadd__40__fflags);
    vlSelfRef.__PVT__xacc = vlSelfRef.__Vtask_dpi_fadd__40__result;
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fadd_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 
                                                                 (0xffffffff00000000ULL 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__nult_result
                                                                                [1U]))), vlSelfRef.__PVT__xacc, 0U, vlSelfRef.__Vtask_dpi_fadd__40__result, vlSelfRef.__Vtask_dpi_fadd__40__fflags);
    vlSelfRef.__PVT__xacc = vlSelfRef.__Vtask_dpi_fadd__40__result;
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fadd_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 
                                                                 (0xffffffff00000000ULL 
                                                                  | (QData)((IData)(
                                                                                (vlSelfRef.__PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
                                                                                >> 0x20U)))), vlSelfRef.__PVT__xacc, 0U, vlSelfRef.__Vtask_dpi_fadd__41__result, vlSelfRef.__Vtask_dpi_fadd__41__fflags);
    vlSelfRef.__PVT__xacc = vlSelfRef.__Vtask_dpi_fadd__41__result;
    if ((1U == (7U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                      >> 3U)))) {
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 2U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                                >> 6U))))), vlSelfRef.__Vtask_dpi_f2f__28__result);
        vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__a_f 
            = vlSelfRef.__Vtask_dpi_f2f__28__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 2U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 6U))))), vlSelfRef.__Vtask_dpi_f2f__29__result);
        vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__b_f 
            = vlSelfRef.__Vtask_dpi_f2f__29__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmadd_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__a_f, vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__b_f, 0xffffffff00000000ULL, 0U, vlSelfRef.__Vtask_dpi_fmadd__30__result, vlSelfRef.__Vtask_dpi_fmadd__30__fflags);
        vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__xprod 
            = vlSelfRef.__Vtask_dpi_fmadd__30__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 2U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                                << 0xaU) 
                                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                                >> 0x16U)))))), vlSelfRef.__Vtask_dpi_f2f__28__result);
        vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__a_f 
            = vlSelfRef.__Vtask_dpi_f2f__28__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 2U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                                << 0xaU) 
                                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 0x16U)))))), vlSelfRef.__Vtask_dpi_f2f__29__result);
        vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__b_f 
            = vlSelfRef.__Vtask_dpi_f2f__29__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmadd_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__a_f, vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__b_f, vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__xprod, 0U, vlSelfRef.__Vtask_dpi_fmadd__30__result, vlSelfRef.__Vtask_dpi_fmadd__30__fflags);
        vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__xprod 
            = vlSelfRef.__Vtask_dpi_fmadd__30__result;
    } else if ((2U == (7U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                             >> 3U)))) {
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 3U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                                >> 6U))))), vlSelfRef.__Vtask_dpi_f2f__31__result);
        vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__a_f 
            = vlSelfRef.__Vtask_dpi_f2f__31__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 3U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 6U))))), vlSelfRef.__Vtask_dpi_f2f__32__result);
        vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__b_f 
            = vlSelfRef.__Vtask_dpi_f2f__32__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmadd_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__a_f, vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__b_f, 0xffffffff00000000ULL, 0U, vlSelfRef.__Vtask_dpi_fmadd__33__result, vlSelfRef.__Vtask_dpi_fmadd__33__fflags);
        vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__xprod 
            = vlSelfRef.__Vtask_dpi_fmadd__33__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 3U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                                << 0xaU) 
                                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                                >> 0x16U)))))), vlSelfRef.__Vtask_dpi_f2f__31__result);
        vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__a_f 
            = vlSelfRef.__Vtask_dpi_f2f__31__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 3U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                                << 0xaU) 
                                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 0x16U)))))), vlSelfRef.__Vtask_dpi_f2f__32__result);
        vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__b_f 
            = vlSelfRef.__Vtask_dpi_f2f__32__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmadd_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__a_f, vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__b_f, vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__xprod, 0U, vlSelfRef.__Vtask_dpi_fmadd__33__result, vlSelfRef.__Vtask_dpi_fmadd__33__fflags);
        vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__xprod 
            = vlSelfRef.__Vtask_dpi_fmadd__33__result;
    } else {
        vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__xprod 
            = vlSelfRef.__Vxrand_h7d2804ec__0;
    }
    if ((1U == (7U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                      >> 3U)))) {
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 2U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                                >> 6U))))), vlSelfRef.__Vtask_dpi_f2f__34__result);
        vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__a_f 
            = vlSelfRef.__Vtask_dpi_f2f__34__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 2U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                                >> 6U))))), vlSelfRef.__Vtask_dpi_f2f__35__result);
        vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__b_f 
            = vlSelfRef.__Vtask_dpi_f2f__35__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmadd_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__a_f, vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__b_f, 0xffffffff00000000ULL, 0U, vlSelfRef.__Vtask_dpi_fmadd__36__result, vlSelfRef.__Vtask_dpi_fmadd__36__fflags);
        vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__xprod 
            = vlSelfRef.__Vtask_dpi_fmadd__36__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 2U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[5U] 
                                                                                << 0xaU) 
                                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                                >> 0x16U)))))), vlSelfRef.__Vtask_dpi_f2f__34__result);
        vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__a_f 
            = vlSelfRef.__Vtask_dpi_f2f__34__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 2U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                                << 0xaU) 
                                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                                >> 0x16U)))))), vlSelfRef.__Vtask_dpi_f2f__35__result);
        vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__b_f 
            = vlSelfRef.__Vtask_dpi_f2f__35__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmadd_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__a_f, vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__b_f, vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__xprod, 0U, vlSelfRef.__Vtask_dpi_fmadd__36__result, vlSelfRef.__Vtask_dpi_fmadd__36__fflags);
        vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__xprod 
            = vlSelfRef.__Vtask_dpi_fmadd__36__result;
    } else if ((2U == (7U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                             >> 3U)))) {
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 3U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                                >> 6U))))), vlSelfRef.__Vtask_dpi_f2f__37__result);
        vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__a_f 
            = vlSelfRef.__Vtask_dpi_f2f__37__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 3U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                                >> 6U))))), vlSelfRef.__Vtask_dpi_f2f__38__result);
        vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__b_f 
            = vlSelfRef.__Vtask_dpi_f2f__38__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmadd_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__a_f, vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__b_f, 0xffffffff00000000ULL, 0U, vlSelfRef.__Vtask_dpi_fmadd__39__result, vlSelfRef.__Vtask_dpi_fmadd__39__fflags);
        vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__xprod 
            = vlSelfRef.__Vtask_dpi_fmadd__39__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 3U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[5U] 
                                                                                << 0xaU) 
                                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                                >> 0x16U)))))), vlSelfRef.__Vtask_dpi_f2f__37__result);
        vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__a_f 
            = vlSelfRef.__Vtask_dpi_f2f__37__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 3U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                                << 0xaU) 
                                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                                >> 0x16U)))))), vlSelfRef.__Vtask_dpi_f2f__38__result);
        vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__b_f 
            = vlSelfRef.__Vtask_dpi_f2f__38__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmadd_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__a_f, vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__b_f, vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__xprod, 0U, vlSelfRef.__Vtask_dpi_fmadd__39__result, vlSelfRef.__Vtask_dpi_fmadd__39__fflags);
        vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__xprod 
            = vlSelfRef.__Vtask_dpi_fmadd__39__result;
    } else {
        vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__xprod 
            = vlSelfRef.__Vxrand_h7d2804ec__1;
    }
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_fedp_dpi__L4_N2___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp__0(Vrtlsim_shim_VX_tcu_fedp_dpi__L4_N2* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vrtlsim_shim_VX_tcu_fedp_dpi__L4_N2___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    QData/*63:0*/ __Vdly__pipe_acc__DOT__g_shift_register__DOT__g_shift__DOT__pipe;
    __Vdly__pipe_acc__DOT__g_shift_register__DOT__g_shift__DOT__pipe = 0;
    // Body
    __Vdly__pipe_acc__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
        = vlSelfRef.__PVT__pipe_acc__DOT__g_shift_register__DOT__g_shift__DOT__pipe;
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable) {
        vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__pipe_mult__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
            = ((0xffffffffULL & vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__pipe_mult__DOT__g_shift_register__DOT__g_shift__DOT__pipe) 
               | ((QData)((IData)((IData)(vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__pipe_mult__DOT__g_shift_register__DOT__g_shift__DOT__pipe))) 
                  << 0x20U));
        vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__pipe_mult__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
            = ((0xffffffff00000000ULL & vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__pipe_mult__DOT__g_shift_register__DOT__g_shift__DOT__pipe) 
               | (IData)((IData)(vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__xprod)));
        vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__pipe_mult__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
            = ((0xffffffffULL & vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__pipe_mult__DOT__g_shift_register__DOT__g_shift__DOT__pipe) 
               | ((QData)((IData)((IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__pipe_mult__DOT__g_shift_register__DOT__g_shift__DOT__pipe))) 
                  << 0x20U));
        vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__pipe_mult__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
            = ((0xffffffff00000000ULL & vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__pipe_mult__DOT__g_shift_register__DOT__g_shift__DOT__pipe) 
               | (IData)((IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__xprod)));
        __Vdly__pipe_acc__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
            = ((0xffffffff00000000ULL & __Vdly__pipe_acc__DOT__g_shift_register__DOT__g_shift__DOT__pipe) 
               | (IData)((IData)(vlSelfRef.__PVT__xacc)));
        __Vdly__pipe_acc__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
            = ((0xffffffffULL & __Vdly__pipe_acc__DOT__g_shift_register__DOT__g_shift__DOT__pipe) 
               | ((QData)((IData)((IData)(vlSelfRef.__PVT__pipe_acc__DOT__g_shift_register__DOT__g_shift__DOT__pipe))) 
                  << 0x20U));
        vlSelfRef.__PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
            = ((0xffffffffULL & vlSelfRef.__PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe) 
               | ((QData)((IData)((IData)(vlSelfRef.__PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe))) 
                  << 0x20U));
        vlSelfRef.__PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
            = ((0xffffffff00000000ULL & vlSelfRef.__PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe) 
               | (IData)((IData)(((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                   << 0x1aU) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                                                >> 6U)))));
    }
    vlSelfRef.__PVT__pipe_acc__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
        = __Vdly__pipe_acc__DOT__g_shift_register__DOT__g_shift__DOT__pipe;
    vlSelfRef.__PVT__nult_result[1U] = (IData)((vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__pipe_mult__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
                                                >> 0x20U));
    vlSelfRef.__PVT__nult_result[0U] = (IData)((vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__pipe_mult__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
                                                >> 0x20U));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_fedp_dpi__L4_N2___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT__fedp__0(Vrtlsim_shim_VX_tcu_fedp_dpi__L4_N2* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vrtlsim_shim_VX_tcu_fedp_dpi__L4_N2___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT__fedp__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fadd_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 
                                                                 (0xffffffff00000000ULL 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__nult_result
                                                                                [0U]))), 0xffffffff00000000ULL, 0U, vlSelfRef.__Vtask_dpi_fadd__54__result, vlSelfRef.__Vtask_dpi_fadd__54__fflags);
    vlSelfRef.__PVT__xacc = vlSelfRef.__Vtask_dpi_fadd__54__result;
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fadd_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 
                                                                 (0xffffffff00000000ULL 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__nult_result
                                                                                [1U]))), vlSelfRef.__PVT__xacc, 0U, vlSelfRef.__Vtask_dpi_fadd__54__result, vlSelfRef.__Vtask_dpi_fadd__54__fflags);
    vlSelfRef.__PVT__xacc = vlSelfRef.__Vtask_dpi_fadd__54__result;
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fadd_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 
                                                                 (0xffffffff00000000ULL 
                                                                  | (QData)((IData)(
                                                                                (vlSelfRef.__PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
                                                                                >> 0x20U)))), vlSelfRef.__PVT__xacc, 0U, vlSelfRef.__Vtask_dpi_fadd__55__result, vlSelfRef.__Vtask_dpi_fadd__55__fflags);
    vlSelfRef.__PVT__xacc = vlSelfRef.__Vtask_dpi_fadd__55__result;
    if ((1U == (7U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                      >> 3U)))) {
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 2U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                                >> 6U))))), vlSelfRef.__Vtask_dpi_f2f__42__result);
        vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__a_f 
            = vlSelfRef.__Vtask_dpi_f2f__42__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 2U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 6U))))), vlSelfRef.__Vtask_dpi_f2f__43__result);
        vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__b_f 
            = vlSelfRef.__Vtask_dpi_f2f__43__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmadd_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__a_f, vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__b_f, 0xffffffff00000000ULL, 0U, vlSelfRef.__Vtask_dpi_fmadd__44__result, vlSelfRef.__Vtask_dpi_fmadd__44__fflags);
        vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__xprod 
            = vlSelfRef.__Vtask_dpi_fmadd__44__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 2U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                                << 0xaU) 
                                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                                >> 0x16U)))))), vlSelfRef.__Vtask_dpi_f2f__42__result);
        vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__a_f 
            = vlSelfRef.__Vtask_dpi_f2f__42__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 2U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                                << 0xaU) 
                                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 0x16U)))))), vlSelfRef.__Vtask_dpi_f2f__43__result);
        vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__b_f 
            = vlSelfRef.__Vtask_dpi_f2f__43__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmadd_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__a_f, vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__b_f, vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__xprod, 0U, vlSelfRef.__Vtask_dpi_fmadd__44__result, vlSelfRef.__Vtask_dpi_fmadd__44__fflags);
        vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__xprod 
            = vlSelfRef.__Vtask_dpi_fmadd__44__result;
    } else if ((2U == (7U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                             >> 3U)))) {
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 3U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                                >> 6U))))), vlSelfRef.__Vtask_dpi_f2f__45__result);
        vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__a_f 
            = vlSelfRef.__Vtask_dpi_f2f__45__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 3U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 6U))))), vlSelfRef.__Vtask_dpi_f2f__46__result);
        vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__b_f 
            = vlSelfRef.__Vtask_dpi_f2f__46__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmadd_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__a_f, vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__b_f, 0xffffffff00000000ULL, 0U, vlSelfRef.__Vtask_dpi_fmadd__47__result, vlSelfRef.__Vtask_dpi_fmadd__47__fflags);
        vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__xprod 
            = vlSelfRef.__Vtask_dpi_fmadd__47__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 3U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                                << 0xaU) 
                                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                                >> 0x16U)))))), vlSelfRef.__Vtask_dpi_f2f__45__result);
        vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__a_f 
            = vlSelfRef.__Vtask_dpi_f2f__45__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 3U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                                << 0xaU) 
                                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 0x16U)))))), vlSelfRef.__Vtask_dpi_f2f__46__result);
        vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__b_f 
            = vlSelfRef.__Vtask_dpi_f2f__46__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmadd_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__a_f, vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__b_f, vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__xprod, 0U, vlSelfRef.__Vtask_dpi_fmadd__47__result, vlSelfRef.__Vtask_dpi_fmadd__47__fflags);
        vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__xprod 
            = vlSelfRef.__Vtask_dpi_fmadd__47__result;
    } else {
        vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__xprod 
            = vlSelfRef.__Vxrand_h7d2804ec__0;
    }
    if ((1U == (7U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                      >> 3U)))) {
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 2U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                                >> 6U))))), vlSelfRef.__Vtask_dpi_f2f__48__result);
        vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__a_f 
            = vlSelfRef.__Vtask_dpi_f2f__48__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 2U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                                >> 6U))))), vlSelfRef.__Vtask_dpi_f2f__49__result);
        vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__b_f 
            = vlSelfRef.__Vtask_dpi_f2f__49__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmadd_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__a_f, vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__b_f, 0xffffffff00000000ULL, 0U, vlSelfRef.__Vtask_dpi_fmadd__50__result, vlSelfRef.__Vtask_dpi_fmadd__50__fflags);
        vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__xprod 
            = vlSelfRef.__Vtask_dpi_fmadd__50__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 2U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[5U] 
                                                                                << 0xaU) 
                                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                                >> 0x16U)))))), vlSelfRef.__Vtask_dpi_f2f__48__result);
        vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__a_f 
            = vlSelfRef.__Vtask_dpi_f2f__48__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 2U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                                << 0xaU) 
                                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                                >> 0x16U)))))), vlSelfRef.__Vtask_dpi_f2f__49__result);
        vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__b_f 
            = vlSelfRef.__Vtask_dpi_f2f__49__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmadd_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__a_f, vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__b_f, vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__xprod, 0U, vlSelfRef.__Vtask_dpi_fmadd__50__result, vlSelfRef.__Vtask_dpi_fmadd__50__fflags);
        vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__xprod 
            = vlSelfRef.__Vtask_dpi_fmadd__50__result;
    } else if ((2U == (7U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                             >> 3U)))) {
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 3U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                                >> 6U))))), vlSelfRef.__Vtask_dpi_f2f__51__result);
        vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__a_f 
            = vlSelfRef.__Vtask_dpi_f2f__51__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 3U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                                >> 6U))))), vlSelfRef.__Vtask_dpi_f2f__52__result);
        vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__b_f 
            = vlSelfRef.__Vtask_dpi_f2f__52__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmadd_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__a_f, vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__b_f, 0xffffffff00000000ULL, 0U, vlSelfRef.__Vtask_dpi_fmadd__53__result, vlSelfRef.__Vtask_dpi_fmadd__53__fflags);
        vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__xprod 
            = vlSelfRef.__Vtask_dpi_fmadd__53__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 3U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[5U] 
                                                                                << 0xaU) 
                                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                                >> 0x16U)))))), vlSelfRef.__Vtask_dpi_f2f__51__result);
        vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__a_f 
            = vlSelfRef.__Vtask_dpi_f2f__51__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 3U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                                << 0xaU) 
                                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                                >> 0x16U)))))), vlSelfRef.__Vtask_dpi_f2f__52__result);
        vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__b_f 
            = vlSelfRef.__Vtask_dpi_f2f__52__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmadd_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__a_f, vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__b_f, vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__xprod, 0U, vlSelfRef.__Vtask_dpi_fmadd__53__result, vlSelfRef.__Vtask_dpi_fmadd__53__fflags);
        vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__xprod 
            = vlSelfRef.__Vtask_dpi_fmadd__53__result;
    } else {
        vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__xprod 
            = vlSelfRef.__Vxrand_h7d2804ec__1;
    }
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_fedp_dpi__L4_N2___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT__fedp__0(Vrtlsim_shim_VX_tcu_fedp_dpi__L4_N2* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vrtlsim_shim_VX_tcu_fedp_dpi__L4_N2___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT__fedp__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    QData/*63:0*/ __Vdly__pipe_acc__DOT__g_shift_register__DOT__g_shift__DOT__pipe;
    __Vdly__pipe_acc__DOT__g_shift_register__DOT__g_shift__DOT__pipe = 0;
    // Body
    __Vdly__pipe_acc__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
        = vlSelfRef.__PVT__pipe_acc__DOT__g_shift_register__DOT__g_shift__DOT__pipe;
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable) {
        vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__pipe_mult__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
            = ((0xffffffffULL & vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__pipe_mult__DOT__g_shift_register__DOT__g_shift__DOT__pipe) 
               | ((QData)((IData)((IData)(vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__pipe_mult__DOT__g_shift_register__DOT__g_shift__DOT__pipe))) 
                  << 0x20U));
        vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__pipe_mult__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
            = ((0xffffffff00000000ULL & vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__pipe_mult__DOT__g_shift_register__DOT__g_shift__DOT__pipe) 
               | (IData)((IData)(vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__xprod)));
        vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__pipe_mult__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
            = ((0xffffffffULL & vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__pipe_mult__DOT__g_shift_register__DOT__g_shift__DOT__pipe) 
               | ((QData)((IData)((IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__pipe_mult__DOT__g_shift_register__DOT__g_shift__DOT__pipe))) 
                  << 0x20U));
        vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__pipe_mult__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
            = ((0xffffffff00000000ULL & vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__pipe_mult__DOT__g_shift_register__DOT__g_shift__DOT__pipe) 
               | (IData)((IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__xprod)));
        __Vdly__pipe_acc__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
            = ((0xffffffff00000000ULL & __Vdly__pipe_acc__DOT__g_shift_register__DOT__g_shift__DOT__pipe) 
               | (IData)((IData)(vlSelfRef.__PVT__xacc)));
        __Vdly__pipe_acc__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
            = ((0xffffffffULL & __Vdly__pipe_acc__DOT__g_shift_register__DOT__g_shift__DOT__pipe) 
               | ((QData)((IData)((IData)(vlSelfRef.__PVT__pipe_acc__DOT__g_shift_register__DOT__g_shift__DOT__pipe))) 
                  << 0x20U));
        vlSelfRef.__PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
            = ((0xffffffffULL & vlSelfRef.__PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe) 
               | ((QData)((IData)((IData)(vlSelfRef.__PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe))) 
                  << 0x20U));
        vlSelfRef.__PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
            = ((0xffffffff00000000ULL & vlSelfRef.__PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe) 
               | (IData)((IData)(((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                   << 0x1aU) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                                                >> 6U)))));
    }
    vlSelfRef.__PVT__pipe_acc__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
        = __Vdly__pipe_acc__DOT__g_shift_register__DOT__g_shift__DOT__pipe;
    vlSelfRef.__PVT__nult_result[1U] = (IData)((vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__pipe_mult__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
                                                >> 0x20U));
    vlSelfRef.__PVT__nult_result[0U] = (IData)((vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__pipe_mult__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
                                                >> 0x20U));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_fedp_dpi__L4_N2___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT__fedp__0(Vrtlsim_shim_VX_tcu_fedp_dpi__L4_N2* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vrtlsim_shim_VX_tcu_fedp_dpi__L4_N2___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT__fedp__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fadd_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 
                                                                 (0xffffffff00000000ULL 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__nult_result
                                                                                [0U]))), 0xffffffff00000000ULL, 0U, vlSelfRef.__Vtask_dpi_fadd__68__result, vlSelfRef.__Vtask_dpi_fadd__68__fflags);
    vlSelfRef.__PVT__xacc = vlSelfRef.__Vtask_dpi_fadd__68__result;
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fadd_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 
                                                                 (0xffffffff00000000ULL 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__nult_result
                                                                                [1U]))), vlSelfRef.__PVT__xacc, 0U, vlSelfRef.__Vtask_dpi_fadd__68__result, vlSelfRef.__Vtask_dpi_fadd__68__fflags);
    vlSelfRef.__PVT__xacc = vlSelfRef.__Vtask_dpi_fadd__68__result;
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fadd_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 
                                                                 (0xffffffff00000000ULL 
                                                                  | (QData)((IData)(
                                                                                (vlSelfRef.__PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
                                                                                >> 0x20U)))), vlSelfRef.__PVT__xacc, 0U, vlSelfRef.__Vtask_dpi_fadd__69__result, vlSelfRef.__Vtask_dpi_fadd__69__fflags);
    vlSelfRef.__PVT__xacc = vlSelfRef.__Vtask_dpi_fadd__69__result;
    if ((1U == (7U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                      >> 3U)))) {
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 2U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                                >> 6U))))), vlSelfRef.__Vtask_dpi_f2f__56__result);
        vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__a_f 
            = vlSelfRef.__Vtask_dpi_f2f__56__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 2U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 6U))))), vlSelfRef.__Vtask_dpi_f2f__57__result);
        vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__b_f 
            = vlSelfRef.__Vtask_dpi_f2f__57__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmadd_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__a_f, vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__b_f, 0xffffffff00000000ULL, 0U, vlSelfRef.__Vtask_dpi_fmadd__58__result, vlSelfRef.__Vtask_dpi_fmadd__58__fflags);
        vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__xprod 
            = vlSelfRef.__Vtask_dpi_fmadd__58__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 2U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                                << 0xaU) 
                                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                                >> 0x16U)))))), vlSelfRef.__Vtask_dpi_f2f__56__result);
        vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__a_f 
            = vlSelfRef.__Vtask_dpi_f2f__56__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 2U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                                << 0xaU) 
                                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 0x16U)))))), vlSelfRef.__Vtask_dpi_f2f__57__result);
        vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__b_f 
            = vlSelfRef.__Vtask_dpi_f2f__57__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmadd_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__a_f, vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__b_f, vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__xprod, 0U, vlSelfRef.__Vtask_dpi_fmadd__58__result, vlSelfRef.__Vtask_dpi_fmadd__58__fflags);
        vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__xprod 
            = vlSelfRef.__Vtask_dpi_fmadd__58__result;
    } else if ((2U == (7U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                             >> 3U)))) {
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 3U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                                >> 6U))))), vlSelfRef.__Vtask_dpi_f2f__59__result);
        vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__a_f 
            = vlSelfRef.__Vtask_dpi_f2f__59__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 3U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 6U))))), vlSelfRef.__Vtask_dpi_f2f__60__result);
        vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__b_f 
            = vlSelfRef.__Vtask_dpi_f2f__60__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmadd_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__a_f, vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__b_f, 0xffffffff00000000ULL, 0U, vlSelfRef.__Vtask_dpi_fmadd__61__result, vlSelfRef.__Vtask_dpi_fmadd__61__fflags);
        vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__xprod 
            = vlSelfRef.__Vtask_dpi_fmadd__61__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 3U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                                << 0xaU) 
                                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                                >> 0x16U)))))), vlSelfRef.__Vtask_dpi_f2f__59__result);
        vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__a_f 
            = vlSelfRef.__Vtask_dpi_f2f__59__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 3U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                                << 0xaU) 
                                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 0x16U)))))), vlSelfRef.__Vtask_dpi_f2f__60__result);
        vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__b_f 
            = vlSelfRef.__Vtask_dpi_f2f__60__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmadd_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__a_f, vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__b_f, vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__xprod, 0U, vlSelfRef.__Vtask_dpi_fmadd__61__result, vlSelfRef.__Vtask_dpi_fmadd__61__fflags);
        vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__xprod 
            = vlSelfRef.__Vtask_dpi_fmadd__61__result;
    } else {
        vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__xprod 
            = vlSelfRef.__Vxrand_h7d2804ec__0;
    }
    if ((1U == (7U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                      >> 3U)))) {
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 2U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                                >> 6U))))), vlSelfRef.__Vtask_dpi_f2f__62__result);
        vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__a_f 
            = vlSelfRef.__Vtask_dpi_f2f__62__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 2U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                                >> 6U))))), vlSelfRef.__Vtask_dpi_f2f__63__result);
        vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__b_f 
            = vlSelfRef.__Vtask_dpi_f2f__63__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmadd_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__a_f, vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__b_f, 0xffffffff00000000ULL, 0U, vlSelfRef.__Vtask_dpi_fmadd__64__result, vlSelfRef.__Vtask_dpi_fmadd__64__fflags);
        vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__xprod 
            = vlSelfRef.__Vtask_dpi_fmadd__64__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 2U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[5U] 
                                                                                << 0xaU) 
                                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                                >> 0x16U)))))), vlSelfRef.__Vtask_dpi_f2f__62__result);
        vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__a_f 
            = vlSelfRef.__Vtask_dpi_f2f__62__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 2U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                                << 0xaU) 
                                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                                >> 0x16U)))))), vlSelfRef.__Vtask_dpi_f2f__63__result);
        vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__b_f 
            = vlSelfRef.__Vtask_dpi_f2f__63__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmadd_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__a_f, vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__b_f, vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__xprod, 0U, vlSelfRef.__Vtask_dpi_fmadd__64__result, vlSelfRef.__Vtask_dpi_fmadd__64__fflags);
        vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__xprod 
            = vlSelfRef.__Vtask_dpi_fmadd__64__result;
    } else if ((2U == (7U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                             >> 3U)))) {
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 3U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                                >> 6U))))), vlSelfRef.__Vtask_dpi_f2f__65__result);
        vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__a_f 
            = vlSelfRef.__Vtask_dpi_f2f__65__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 3U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                                >> 6U))))), vlSelfRef.__Vtask_dpi_f2f__66__result);
        vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__b_f 
            = vlSelfRef.__Vtask_dpi_f2f__66__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmadd_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__a_f, vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__b_f, 0xffffffff00000000ULL, 0U, vlSelfRef.__Vtask_dpi_fmadd__67__result, vlSelfRef.__Vtask_dpi_fmadd__67__fflags);
        vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__xprod 
            = vlSelfRef.__Vtask_dpi_fmadd__67__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 3U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[5U] 
                                                                                << 0xaU) 
                                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                                >> 0x16U)))))), vlSelfRef.__Vtask_dpi_f2f__65__result);
        vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__a_f 
            = vlSelfRef.__Vtask_dpi_f2f__65__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 3U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                                << 0xaU) 
                                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                                >> 0x16U)))))), vlSelfRef.__Vtask_dpi_f2f__66__result);
        vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__b_f 
            = vlSelfRef.__Vtask_dpi_f2f__66__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmadd_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__a_f, vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__b_f, vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__xprod, 0U, vlSelfRef.__Vtask_dpi_fmadd__67__result, vlSelfRef.__Vtask_dpi_fmadd__67__fflags);
        vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__xprod 
            = vlSelfRef.__Vtask_dpi_fmadd__67__result;
    } else {
        vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__xprod 
            = vlSelfRef.__Vxrand_h7d2804ec__1;
    }
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_fedp_dpi__L4_N2___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT__fedp__0(Vrtlsim_shim_VX_tcu_fedp_dpi__L4_N2* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vrtlsim_shim_VX_tcu_fedp_dpi__L4_N2___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT__fedp__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    QData/*63:0*/ __Vdly__pipe_acc__DOT__g_shift_register__DOT__g_shift__DOT__pipe;
    __Vdly__pipe_acc__DOT__g_shift_register__DOT__g_shift__DOT__pipe = 0;
    // Body
    __Vdly__pipe_acc__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
        = vlSelfRef.__PVT__pipe_acc__DOT__g_shift_register__DOT__g_shift__DOT__pipe;
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable) {
        vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__pipe_mult__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
            = ((0xffffffffULL & vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__pipe_mult__DOT__g_shift_register__DOT__g_shift__DOT__pipe) 
               | ((QData)((IData)((IData)(vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__pipe_mult__DOT__g_shift_register__DOT__g_shift__DOT__pipe))) 
                  << 0x20U));
        vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__pipe_mult__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
            = ((0xffffffff00000000ULL & vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__pipe_mult__DOT__g_shift_register__DOT__g_shift__DOT__pipe) 
               | (IData)((IData)(vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__xprod)));
        vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__pipe_mult__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
            = ((0xffffffffULL & vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__pipe_mult__DOT__g_shift_register__DOT__g_shift__DOT__pipe) 
               | ((QData)((IData)((IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__pipe_mult__DOT__g_shift_register__DOT__g_shift__DOT__pipe))) 
                  << 0x20U));
        vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__pipe_mult__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
            = ((0xffffffff00000000ULL & vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__pipe_mult__DOT__g_shift_register__DOT__g_shift__DOT__pipe) 
               | (IData)((IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__xprod)));
        __Vdly__pipe_acc__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
            = ((0xffffffff00000000ULL & __Vdly__pipe_acc__DOT__g_shift_register__DOT__g_shift__DOT__pipe) 
               | (IData)((IData)(vlSelfRef.__PVT__xacc)));
        __Vdly__pipe_acc__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
            = ((0xffffffffULL & __Vdly__pipe_acc__DOT__g_shift_register__DOT__g_shift__DOT__pipe) 
               | ((QData)((IData)((IData)(vlSelfRef.__PVT__pipe_acc__DOT__g_shift_register__DOT__g_shift__DOT__pipe))) 
                  << 0x20U));
        vlSelfRef.__PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
            = ((0xffffffffULL & vlSelfRef.__PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe) 
               | ((QData)((IData)((IData)(vlSelfRef.__PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe))) 
                  << 0x20U));
        vlSelfRef.__PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
            = ((0xffffffff00000000ULL & vlSelfRef.__PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe) 
               | (IData)((IData)(((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                   << 0x1aU) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                                                >> 6U)))));
    }
    vlSelfRef.__PVT__pipe_acc__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
        = __Vdly__pipe_acc__DOT__g_shift_register__DOT__g_shift__DOT__pipe;
    vlSelfRef.__PVT__nult_result[1U] = (IData)((vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__pipe_mult__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
                                                >> 0x20U));
    vlSelfRef.__PVT__nult_result[0U] = (IData)((vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__pipe_mult__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
                                                >> 0x20U));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_fedp_dpi__L4_N2___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT__fedp__0(Vrtlsim_shim_VX_tcu_fedp_dpi__L4_N2* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vrtlsim_shim_VX_tcu_fedp_dpi__L4_N2___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT__fedp__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fadd_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 
                                                                 (0xffffffff00000000ULL 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__nult_result
                                                                                [0U]))), 0xffffffff00000000ULL, 0U, vlSelfRef.__Vtask_dpi_fadd__82__result, vlSelfRef.__Vtask_dpi_fadd__82__fflags);
    vlSelfRef.__PVT__xacc = vlSelfRef.__Vtask_dpi_fadd__82__result;
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fadd_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 
                                                                 (0xffffffff00000000ULL 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__nult_result
                                                                                [1U]))), vlSelfRef.__PVT__xacc, 0U, vlSelfRef.__Vtask_dpi_fadd__82__result, vlSelfRef.__Vtask_dpi_fadd__82__fflags);
    vlSelfRef.__PVT__xacc = vlSelfRef.__Vtask_dpi_fadd__82__result;
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fadd_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 
                                                                 (0xffffffff00000000ULL 
                                                                  | (QData)((IData)(
                                                                                (vlSelfRef.__PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
                                                                                >> 0x20U)))), vlSelfRef.__PVT__xacc, 0U, vlSelfRef.__Vtask_dpi_fadd__83__result, vlSelfRef.__Vtask_dpi_fadd__83__fflags);
    vlSelfRef.__PVT__xacc = vlSelfRef.__Vtask_dpi_fadd__83__result;
    if ((1U == (7U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                      >> 3U)))) {
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 2U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                                >> 6U))))), vlSelfRef.__Vtask_dpi_f2f__70__result);
        vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__a_f 
            = vlSelfRef.__Vtask_dpi_f2f__70__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 2U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 6U))))), vlSelfRef.__Vtask_dpi_f2f__71__result);
        vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__b_f 
            = vlSelfRef.__Vtask_dpi_f2f__71__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmadd_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__a_f, vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__b_f, 0xffffffff00000000ULL, 0U, vlSelfRef.__Vtask_dpi_fmadd__72__result, vlSelfRef.__Vtask_dpi_fmadd__72__fflags);
        vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__xprod 
            = vlSelfRef.__Vtask_dpi_fmadd__72__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 2U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                                << 0xaU) 
                                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                                >> 0x16U)))))), vlSelfRef.__Vtask_dpi_f2f__70__result);
        vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__a_f 
            = vlSelfRef.__Vtask_dpi_f2f__70__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 2U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                                << 0xaU) 
                                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 0x16U)))))), vlSelfRef.__Vtask_dpi_f2f__71__result);
        vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__b_f 
            = vlSelfRef.__Vtask_dpi_f2f__71__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmadd_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__a_f, vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__b_f, vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__xprod, 0U, vlSelfRef.__Vtask_dpi_fmadd__72__result, vlSelfRef.__Vtask_dpi_fmadd__72__fflags);
        vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__xprod 
            = vlSelfRef.__Vtask_dpi_fmadd__72__result;
    } else if ((2U == (7U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                             >> 3U)))) {
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 3U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                                >> 6U))))), vlSelfRef.__Vtask_dpi_f2f__73__result);
        vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__a_f 
            = vlSelfRef.__Vtask_dpi_f2f__73__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 3U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 6U))))), vlSelfRef.__Vtask_dpi_f2f__74__result);
        vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__b_f 
            = vlSelfRef.__Vtask_dpi_f2f__74__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmadd_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__a_f, vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__b_f, 0xffffffff00000000ULL, 0U, vlSelfRef.__Vtask_dpi_fmadd__75__result, vlSelfRef.__Vtask_dpi_fmadd__75__fflags);
        vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__xprod 
            = vlSelfRef.__Vtask_dpi_fmadd__75__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 3U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                                << 0xaU) 
                                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                                >> 0x16U)))))), vlSelfRef.__Vtask_dpi_f2f__73__result);
        vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__a_f 
            = vlSelfRef.__Vtask_dpi_f2f__73__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 3U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                                << 0xaU) 
                                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 0x16U)))))), vlSelfRef.__Vtask_dpi_f2f__74__result);
        vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__b_f 
            = vlSelfRef.__Vtask_dpi_f2f__74__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmadd_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__a_f, vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__b_f, vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__xprod, 0U, vlSelfRef.__Vtask_dpi_fmadd__75__result, vlSelfRef.__Vtask_dpi_fmadd__75__fflags);
        vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__xprod 
            = vlSelfRef.__Vtask_dpi_fmadd__75__result;
    } else {
        vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__xprod 
            = vlSelfRef.__Vxrand_h7d2804ec__0;
    }
    if ((1U == (7U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                      >> 3U)))) {
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 2U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                                >> 6U))))), vlSelfRef.__Vtask_dpi_f2f__76__result);
        vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__a_f 
            = vlSelfRef.__Vtask_dpi_f2f__76__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 2U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                                >> 6U))))), vlSelfRef.__Vtask_dpi_f2f__77__result);
        vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__b_f 
            = vlSelfRef.__Vtask_dpi_f2f__77__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmadd_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__a_f, vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__b_f, 0xffffffff00000000ULL, 0U, vlSelfRef.__Vtask_dpi_fmadd__78__result, vlSelfRef.__Vtask_dpi_fmadd__78__fflags);
        vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__xprod 
            = vlSelfRef.__Vtask_dpi_fmadd__78__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 2U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[5U] 
                                                                                << 0xaU) 
                                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                                >> 0x16U)))))), vlSelfRef.__Vtask_dpi_f2f__76__result);
        vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__a_f 
            = vlSelfRef.__Vtask_dpi_f2f__76__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 2U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                                << 0xaU) 
                                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                                >> 0x16U)))))), vlSelfRef.__Vtask_dpi_f2f__77__result);
        vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__b_f 
            = vlSelfRef.__Vtask_dpi_f2f__77__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmadd_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__a_f, vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__b_f, vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__xprod, 0U, vlSelfRef.__Vtask_dpi_fmadd__78__result, vlSelfRef.__Vtask_dpi_fmadd__78__fflags);
        vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__xprod 
            = vlSelfRef.__Vtask_dpi_fmadd__78__result;
    } else if ((2U == (7U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                             >> 3U)))) {
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 3U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                                >> 6U))))), vlSelfRef.__Vtask_dpi_f2f__79__result);
        vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__a_f 
            = vlSelfRef.__Vtask_dpi_f2f__79__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 3U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                                >> 6U))))), vlSelfRef.__Vtask_dpi_f2f__80__result);
        vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__b_f 
            = vlSelfRef.__Vtask_dpi_f2f__80__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmadd_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__a_f, vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__b_f, 0xffffffff00000000ULL, 0U, vlSelfRef.__Vtask_dpi_fmadd__81__result, vlSelfRef.__Vtask_dpi_fmadd__81__fflags);
        vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__xprod 
            = vlSelfRef.__Vtask_dpi_fmadd__81__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 3U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[5U] 
                                                                                << 0xaU) 
                                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                                >> 0x16U)))))), vlSelfRef.__Vtask_dpi_f2f__79__result);
        vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__a_f 
            = vlSelfRef.__Vtask_dpi_f2f__79__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 3U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                                << 0xaU) 
                                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                                >> 0x16U)))))), vlSelfRef.__Vtask_dpi_f2f__80__result);
        vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__b_f 
            = vlSelfRef.__Vtask_dpi_f2f__80__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmadd_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__a_f, vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__b_f, vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__xprod, 0U, vlSelfRef.__Vtask_dpi_fmadd__81__result, vlSelfRef.__Vtask_dpi_fmadd__81__fflags);
        vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__xprod 
            = vlSelfRef.__Vtask_dpi_fmadd__81__result;
    } else {
        vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__xprod 
            = vlSelfRef.__Vxrand_h7d2804ec__1;
    }
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_fedp_dpi__L4_N2___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT__fedp__0(Vrtlsim_shim_VX_tcu_fedp_dpi__L4_N2* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vrtlsim_shim_VX_tcu_fedp_dpi__L4_N2___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT__fedp__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    QData/*63:0*/ __Vdly__pipe_acc__DOT__g_shift_register__DOT__g_shift__DOT__pipe;
    __Vdly__pipe_acc__DOT__g_shift_register__DOT__g_shift__DOT__pipe = 0;
    // Body
    __Vdly__pipe_acc__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
        = vlSelfRef.__PVT__pipe_acc__DOT__g_shift_register__DOT__g_shift__DOT__pipe;
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable) {
        vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__pipe_mult__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
            = ((0xffffffffULL & vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__pipe_mult__DOT__g_shift_register__DOT__g_shift__DOT__pipe) 
               | ((QData)((IData)((IData)(vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__pipe_mult__DOT__g_shift_register__DOT__g_shift__DOT__pipe))) 
                  << 0x20U));
        vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__pipe_mult__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
            = ((0xffffffff00000000ULL & vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__pipe_mult__DOT__g_shift_register__DOT__g_shift__DOT__pipe) 
               | (IData)((IData)(vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__xprod)));
        vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__pipe_mult__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
            = ((0xffffffffULL & vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__pipe_mult__DOT__g_shift_register__DOT__g_shift__DOT__pipe) 
               | ((QData)((IData)((IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__pipe_mult__DOT__g_shift_register__DOT__g_shift__DOT__pipe))) 
                  << 0x20U));
        vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__pipe_mult__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
            = ((0xffffffff00000000ULL & vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__pipe_mult__DOT__g_shift_register__DOT__g_shift__DOT__pipe) 
               | (IData)((IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__xprod)));
        __Vdly__pipe_acc__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
            = ((0xffffffff00000000ULL & __Vdly__pipe_acc__DOT__g_shift_register__DOT__g_shift__DOT__pipe) 
               | (IData)((IData)(vlSelfRef.__PVT__xacc)));
        __Vdly__pipe_acc__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
            = ((0xffffffffULL & __Vdly__pipe_acc__DOT__g_shift_register__DOT__g_shift__DOT__pipe) 
               | ((QData)((IData)((IData)(vlSelfRef.__PVT__pipe_acc__DOT__g_shift_register__DOT__g_shift__DOT__pipe))) 
                  << 0x20U));
        vlSelfRef.__PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
            = ((0xffffffffULL & vlSelfRef.__PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe) 
               | ((QData)((IData)((IData)(vlSelfRef.__PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe))) 
                  << 0x20U));
        vlSelfRef.__PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
            = ((0xffffffff00000000ULL & vlSelfRef.__PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe) 
               | (IData)((IData)(((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                   << 0x1aU) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                                                >> 6U)))));
    }
    vlSelfRef.__PVT__pipe_acc__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
        = __Vdly__pipe_acc__DOT__g_shift_register__DOT__g_shift__DOT__pipe;
    vlSelfRef.__PVT__nult_result[1U] = (IData)((vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__pipe_mult__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
                                                >> 0x20U));
    vlSelfRef.__PVT__nult_result[0U] = (IData)((vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__pipe_mult__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
                                                >> 0x20U));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_fedp_dpi__L4_N2___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__0__KET____DOT__fedp__0(Vrtlsim_shim_VX_tcu_fedp_dpi__L4_N2* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vrtlsim_shim_VX_tcu_fedp_dpi__L4_N2___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__0__KET____DOT__fedp__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fadd_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 
                                                                 (0xffffffff00000000ULL 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__nult_result
                                                                                [0U]))), 0xffffffff00000000ULL, 0U, vlSelfRef.__Vtask_dpi_fadd__96__result, vlSelfRef.__Vtask_dpi_fadd__96__fflags);
    vlSelfRef.__PVT__xacc = vlSelfRef.__Vtask_dpi_fadd__96__result;
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fadd_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 
                                                                 (0xffffffff00000000ULL 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__nult_result
                                                                                [1U]))), vlSelfRef.__PVT__xacc, 0U, vlSelfRef.__Vtask_dpi_fadd__96__result, vlSelfRef.__Vtask_dpi_fadd__96__fflags);
    vlSelfRef.__PVT__xacc = vlSelfRef.__Vtask_dpi_fadd__96__result;
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fadd_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 
                                                                 (0xffffffff00000000ULL 
                                                                  | (QData)((IData)(
                                                                                (vlSelfRef.__PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
                                                                                >> 0x20U)))), vlSelfRef.__PVT__xacc, 0U, vlSelfRef.__Vtask_dpi_fadd__97__result, vlSelfRef.__Vtask_dpi_fadd__97__fflags);
    vlSelfRef.__PVT__xacc = vlSelfRef.__Vtask_dpi_fadd__97__result;
    if ((1U == (7U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                      >> 3U)))) {
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 2U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                                >> 6U))))), vlSelfRef.__Vtask_dpi_f2f__84__result);
        vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__a_f 
            = vlSelfRef.__Vtask_dpi_f2f__84__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 2U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 6U))))), vlSelfRef.__Vtask_dpi_f2f__85__result);
        vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__b_f 
            = vlSelfRef.__Vtask_dpi_f2f__85__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmadd_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__a_f, vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__b_f, 0xffffffff00000000ULL, 0U, vlSelfRef.__Vtask_dpi_fmadd__86__result, vlSelfRef.__Vtask_dpi_fmadd__86__fflags);
        vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__xprod 
            = vlSelfRef.__Vtask_dpi_fmadd__86__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 2U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                                << 0xaU) 
                                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                                >> 0x16U)))))), vlSelfRef.__Vtask_dpi_f2f__84__result);
        vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__a_f 
            = vlSelfRef.__Vtask_dpi_f2f__84__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 2U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                                << 0xaU) 
                                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 0x16U)))))), vlSelfRef.__Vtask_dpi_f2f__85__result);
        vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__b_f 
            = vlSelfRef.__Vtask_dpi_f2f__85__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmadd_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__a_f, vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__b_f, vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__xprod, 0U, vlSelfRef.__Vtask_dpi_fmadd__86__result, vlSelfRef.__Vtask_dpi_fmadd__86__fflags);
        vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__xprod 
            = vlSelfRef.__Vtask_dpi_fmadd__86__result;
    } else if ((2U == (7U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                             >> 3U)))) {
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 3U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                                >> 6U))))), vlSelfRef.__Vtask_dpi_f2f__87__result);
        vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__a_f 
            = vlSelfRef.__Vtask_dpi_f2f__87__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 3U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 6U))))), vlSelfRef.__Vtask_dpi_f2f__88__result);
        vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__b_f 
            = vlSelfRef.__Vtask_dpi_f2f__88__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmadd_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__a_f, vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__b_f, 0xffffffff00000000ULL, 0U, vlSelfRef.__Vtask_dpi_fmadd__89__result, vlSelfRef.__Vtask_dpi_fmadd__89__fflags);
        vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__xprod 
            = vlSelfRef.__Vtask_dpi_fmadd__89__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 3U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                                << 0xaU) 
                                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                                >> 0x16U)))))), vlSelfRef.__Vtask_dpi_f2f__87__result);
        vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__a_f 
            = vlSelfRef.__Vtask_dpi_f2f__87__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 3U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                                << 0xaU) 
                                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 0x16U)))))), vlSelfRef.__Vtask_dpi_f2f__88__result);
        vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__b_f 
            = vlSelfRef.__Vtask_dpi_f2f__88__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmadd_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__a_f, vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__b_f, vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__xprod, 0U, vlSelfRef.__Vtask_dpi_fmadd__89__result, vlSelfRef.__Vtask_dpi_fmadd__89__fflags);
        vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__xprod 
            = vlSelfRef.__Vtask_dpi_fmadd__89__result;
    } else {
        vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__xprod 
            = vlSelfRef.__Vxrand_h7d2804ec__0;
    }
    if ((1U == (7U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                      >> 3U)))) {
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 2U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                                >> 6U))))), vlSelfRef.__Vtask_dpi_f2f__90__result);
        vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__a_f 
            = vlSelfRef.__Vtask_dpi_f2f__90__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 2U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                                >> 6U))))), vlSelfRef.__Vtask_dpi_f2f__91__result);
        vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__b_f 
            = vlSelfRef.__Vtask_dpi_f2f__91__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmadd_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__a_f, vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__b_f, 0xffffffff00000000ULL, 0U, vlSelfRef.__Vtask_dpi_fmadd__92__result, vlSelfRef.__Vtask_dpi_fmadd__92__fflags);
        vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__xprod 
            = vlSelfRef.__Vtask_dpi_fmadd__92__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 2U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[5U] 
                                                                                << 0xaU) 
                                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                                >> 0x16U)))))), vlSelfRef.__Vtask_dpi_f2f__90__result);
        vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__a_f 
            = vlSelfRef.__Vtask_dpi_f2f__90__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 2U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                                << 0xaU) 
                                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                                >> 0x16U)))))), vlSelfRef.__Vtask_dpi_f2f__91__result);
        vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__b_f 
            = vlSelfRef.__Vtask_dpi_f2f__91__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmadd_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__a_f, vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__b_f, vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__xprod, 0U, vlSelfRef.__Vtask_dpi_fmadd__92__result, vlSelfRef.__Vtask_dpi_fmadd__92__fflags);
        vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__xprod 
            = vlSelfRef.__Vtask_dpi_fmadd__92__result;
    } else if ((2U == (7U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                             >> 3U)))) {
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 3U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                                >> 6U))))), vlSelfRef.__Vtask_dpi_f2f__93__result);
        vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__a_f 
            = vlSelfRef.__Vtask_dpi_f2f__93__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 3U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                                >> 6U))))), vlSelfRef.__Vtask_dpi_f2f__94__result);
        vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__b_f 
            = vlSelfRef.__Vtask_dpi_f2f__94__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmadd_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__a_f, vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__b_f, 0xffffffff00000000ULL, 0U, vlSelfRef.__Vtask_dpi_fmadd__95__result, vlSelfRef.__Vtask_dpi_fmadd__95__fflags);
        vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__xprod 
            = vlSelfRef.__Vtask_dpi_fmadd__95__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 3U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[5U] 
                                                                                << 0xaU) 
                                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                                >> 0x16U)))))), vlSelfRef.__Vtask_dpi_f2f__93__result);
        vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__a_f 
            = vlSelfRef.__Vtask_dpi_f2f__93__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 3U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                                << 0xaU) 
                                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                                >> 0x16U)))))), vlSelfRef.__Vtask_dpi_f2f__94__result);
        vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__b_f 
            = vlSelfRef.__Vtask_dpi_f2f__94__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmadd_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__a_f, vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__b_f, vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__xprod, 0U, vlSelfRef.__Vtask_dpi_fmadd__95__result, vlSelfRef.__Vtask_dpi_fmadd__95__fflags);
        vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__xprod 
            = vlSelfRef.__Vtask_dpi_fmadd__95__result;
    } else {
        vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__xprod 
            = vlSelfRef.__Vxrand_h7d2804ec__1;
    }
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_fedp_dpi__L4_N2___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__0__KET____DOT__fedp__0(Vrtlsim_shim_VX_tcu_fedp_dpi__L4_N2* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vrtlsim_shim_VX_tcu_fedp_dpi__L4_N2___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__0__KET____DOT__fedp__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    QData/*63:0*/ __Vdly__pipe_acc__DOT__g_shift_register__DOT__g_shift__DOT__pipe;
    __Vdly__pipe_acc__DOT__g_shift_register__DOT__g_shift__DOT__pipe = 0;
    // Body
    __Vdly__pipe_acc__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
        = vlSelfRef.__PVT__pipe_acc__DOT__g_shift_register__DOT__g_shift__DOT__pipe;
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable) {
        vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__pipe_mult__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
            = ((0xffffffffULL & vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__pipe_mult__DOT__g_shift_register__DOT__g_shift__DOT__pipe) 
               | ((QData)((IData)((IData)(vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__pipe_mult__DOT__g_shift_register__DOT__g_shift__DOT__pipe))) 
                  << 0x20U));
        vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__pipe_mult__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
            = ((0xffffffff00000000ULL & vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__pipe_mult__DOT__g_shift_register__DOT__g_shift__DOT__pipe) 
               | (IData)((IData)(vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__xprod)));
        vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__pipe_mult__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
            = ((0xffffffffULL & vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__pipe_mult__DOT__g_shift_register__DOT__g_shift__DOT__pipe) 
               | ((QData)((IData)((IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__pipe_mult__DOT__g_shift_register__DOT__g_shift__DOT__pipe))) 
                  << 0x20U));
        vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__pipe_mult__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
            = ((0xffffffff00000000ULL & vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__pipe_mult__DOT__g_shift_register__DOT__g_shift__DOT__pipe) 
               | (IData)((IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__xprod)));
        __Vdly__pipe_acc__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
            = ((0xffffffff00000000ULL & __Vdly__pipe_acc__DOT__g_shift_register__DOT__g_shift__DOT__pipe) 
               | (IData)((IData)(vlSelfRef.__PVT__xacc)));
        __Vdly__pipe_acc__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
            = ((0xffffffffULL & __Vdly__pipe_acc__DOT__g_shift_register__DOT__g_shift__DOT__pipe) 
               | ((QData)((IData)((IData)(vlSelfRef.__PVT__pipe_acc__DOT__g_shift_register__DOT__g_shift__DOT__pipe))) 
                  << 0x20U));
        vlSelfRef.__PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
            = ((0xffffffffULL & vlSelfRef.__PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe) 
               | ((QData)((IData)((IData)(vlSelfRef.__PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe))) 
                  << 0x20U));
        vlSelfRef.__PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
            = ((0xffffffff00000000ULL & vlSelfRef.__PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe) 
               | (IData)((IData)(((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                   << 0x1aU) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                                                >> 6U)))));
    }
    vlSelfRef.__PVT__pipe_acc__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
        = __Vdly__pipe_acc__DOT__g_shift_register__DOT__g_shift__DOT__pipe;
    vlSelfRef.__PVT__nult_result[1U] = (IData)((vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__pipe_mult__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
                                                >> 0x20U));
    vlSelfRef.__PVT__nult_result[0U] = (IData)((vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__pipe_mult__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
                                                >> 0x20U));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_fedp_dpi__L4_N2___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT__fedp__0(Vrtlsim_shim_VX_tcu_fedp_dpi__L4_N2* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vrtlsim_shim_VX_tcu_fedp_dpi__L4_N2___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT__fedp__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fadd_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 
                                                                 (0xffffffff00000000ULL 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__nult_result
                                                                                [0U]))), 0xffffffff00000000ULL, 0U, vlSelfRef.__Vtask_dpi_fadd__110__result, vlSelfRef.__Vtask_dpi_fadd__110__fflags);
    vlSelfRef.__PVT__xacc = vlSelfRef.__Vtask_dpi_fadd__110__result;
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fadd_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 
                                                                 (0xffffffff00000000ULL 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__nult_result
                                                                                [1U]))), vlSelfRef.__PVT__xacc, 0U, vlSelfRef.__Vtask_dpi_fadd__110__result, vlSelfRef.__Vtask_dpi_fadd__110__fflags);
    vlSelfRef.__PVT__xacc = vlSelfRef.__Vtask_dpi_fadd__110__result;
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fadd_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 
                                                                 (0xffffffff00000000ULL 
                                                                  | (QData)((IData)(
                                                                                (vlSelfRef.__PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
                                                                                >> 0x20U)))), vlSelfRef.__PVT__xacc, 0U, vlSelfRef.__Vtask_dpi_fadd__111__result, vlSelfRef.__Vtask_dpi_fadd__111__fflags);
    vlSelfRef.__PVT__xacc = vlSelfRef.__Vtask_dpi_fadd__111__result;
    if ((1U == (7U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                      >> 3U)))) {
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 2U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                                >> 6U))))), vlSelfRef.__Vtask_dpi_f2f__98__result);
        vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__a_f 
            = vlSelfRef.__Vtask_dpi_f2f__98__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 2U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 6U))))), vlSelfRef.__Vtask_dpi_f2f__99__result);
        vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__b_f 
            = vlSelfRef.__Vtask_dpi_f2f__99__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmadd_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__a_f, vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__b_f, 0xffffffff00000000ULL, 0U, vlSelfRef.__Vtask_dpi_fmadd__100__result, vlSelfRef.__Vtask_dpi_fmadd__100__fflags);
        vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__xprod 
            = vlSelfRef.__Vtask_dpi_fmadd__100__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 2U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                                << 0xaU) 
                                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                                >> 0x16U)))))), vlSelfRef.__Vtask_dpi_f2f__98__result);
        vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__a_f 
            = vlSelfRef.__Vtask_dpi_f2f__98__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 2U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                                << 0xaU) 
                                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 0x16U)))))), vlSelfRef.__Vtask_dpi_f2f__99__result);
        vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__b_f 
            = vlSelfRef.__Vtask_dpi_f2f__99__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmadd_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__a_f, vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__b_f, vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__xprod, 0U, vlSelfRef.__Vtask_dpi_fmadd__100__result, vlSelfRef.__Vtask_dpi_fmadd__100__fflags);
        vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__xprod 
            = vlSelfRef.__Vtask_dpi_fmadd__100__result;
    } else if ((2U == (7U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                             >> 3U)))) {
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 3U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                                >> 6U))))), vlSelfRef.__Vtask_dpi_f2f__101__result);
        vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__a_f 
            = vlSelfRef.__Vtask_dpi_f2f__101__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 3U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 6U))))), vlSelfRef.__Vtask_dpi_f2f__102__result);
        vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__b_f 
            = vlSelfRef.__Vtask_dpi_f2f__102__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmadd_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__a_f, vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__b_f, 0xffffffff00000000ULL, 0U, vlSelfRef.__Vtask_dpi_fmadd__103__result, vlSelfRef.__Vtask_dpi_fmadd__103__fflags);
        vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__xprod 
            = vlSelfRef.__Vtask_dpi_fmadd__103__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 3U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                                << 0xaU) 
                                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                                >> 0x16U)))))), vlSelfRef.__Vtask_dpi_f2f__101__result);
        vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__a_f 
            = vlSelfRef.__Vtask_dpi_f2f__101__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 3U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                                << 0xaU) 
                                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 0x16U)))))), vlSelfRef.__Vtask_dpi_f2f__102__result);
        vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__b_f 
            = vlSelfRef.__Vtask_dpi_f2f__102__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmadd_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__a_f, vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__b_f, vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__xprod, 0U, vlSelfRef.__Vtask_dpi_fmadd__103__result, vlSelfRef.__Vtask_dpi_fmadd__103__fflags);
        vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__xprod 
            = vlSelfRef.__Vtask_dpi_fmadd__103__result;
    } else {
        vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__xprod 
            = vlSelfRef.__Vxrand_h7d2804ec__0;
    }
    if ((1U == (7U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                      >> 3U)))) {
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 2U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                                >> 6U))))), vlSelfRef.__Vtask_dpi_f2f__104__result);
        vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__a_f 
            = vlSelfRef.__Vtask_dpi_f2f__104__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 2U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                                >> 6U))))), vlSelfRef.__Vtask_dpi_f2f__105__result);
        vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__b_f 
            = vlSelfRef.__Vtask_dpi_f2f__105__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmadd_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__a_f, vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__b_f, 0xffffffff00000000ULL, 0U, vlSelfRef.__Vtask_dpi_fmadd__106__result, vlSelfRef.__Vtask_dpi_fmadd__106__fflags);
        vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__xprod 
            = vlSelfRef.__Vtask_dpi_fmadd__106__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 2U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[5U] 
                                                                                << 0xaU) 
                                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                                >> 0x16U)))))), vlSelfRef.__Vtask_dpi_f2f__104__result);
        vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__a_f 
            = vlSelfRef.__Vtask_dpi_f2f__104__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 2U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                                << 0xaU) 
                                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                                >> 0x16U)))))), vlSelfRef.__Vtask_dpi_f2f__105__result);
        vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__b_f 
            = vlSelfRef.__Vtask_dpi_f2f__105__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmadd_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__a_f, vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__b_f, vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__xprod, 0U, vlSelfRef.__Vtask_dpi_fmadd__106__result, vlSelfRef.__Vtask_dpi_fmadd__106__fflags);
        vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__xprod 
            = vlSelfRef.__Vtask_dpi_fmadd__106__result;
    } else if ((2U == (7U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                             >> 3U)))) {
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 3U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                                >> 6U))))), vlSelfRef.__Vtask_dpi_f2f__107__result);
        vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__a_f 
            = vlSelfRef.__Vtask_dpi_f2f__107__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 3U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                                >> 6U))))), vlSelfRef.__Vtask_dpi_f2f__108__result);
        vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__b_f 
            = vlSelfRef.__Vtask_dpi_f2f__108__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmadd_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__a_f, vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__b_f, 0xffffffff00000000ULL, 0U, vlSelfRef.__Vtask_dpi_fmadd__109__result, vlSelfRef.__Vtask_dpi_fmadd__109__fflags);
        vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__xprod 
            = vlSelfRef.__Vtask_dpi_fmadd__109__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 3U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[5U] 
                                                                                << 0xaU) 
                                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                                >> 0x16U)))))), vlSelfRef.__Vtask_dpi_f2f__107__result);
        vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__a_f 
            = vlSelfRef.__Vtask_dpi_f2f__107__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, 3U, 
                                                                    (0xffffffffffff0000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                                << 0xaU) 
                                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                                >> 0x16U)))))), vlSelfRef.__Vtask_dpi_f2f__108__result);
        vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__b_f 
            = vlSelfRef.__Vtask_dpi_f2f__108__result;
        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmadd_TOP____024unit(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable, 0U, vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__a_f, vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__b_f, vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__xprod, 0U, vlSelfRef.__Vtask_dpi_fmadd__109__result, vlSelfRef.__Vtask_dpi_fmadd__109__fflags);
        vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__xprod 
            = vlSelfRef.__Vtask_dpi_fmadd__109__result;
    } else {
        vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__xprod 
            = vlSelfRef.__Vxrand_h7d2804ec__1;
    }
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_fedp_dpi__L4_N2___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT__fedp__0(Vrtlsim_shim_VX_tcu_fedp_dpi__L4_N2* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vrtlsim_shim_VX_tcu_fedp_dpi__L4_N2___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT__fedp__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    QData/*63:0*/ __Vdly__pipe_acc__DOT__g_shift_register__DOT__g_shift__DOT__pipe;
    __Vdly__pipe_acc__DOT__g_shift_register__DOT__g_shift__DOT__pipe = 0;
    // Body
    __Vdly__pipe_acc__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
        = vlSelfRef.__PVT__pipe_acc__DOT__g_shift_register__DOT__g_shift__DOT__pipe;
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__fedp_enable) {
        vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__pipe_mult__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
            = ((0xffffffffULL & vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__pipe_mult__DOT__g_shift_register__DOT__g_shift__DOT__pipe) 
               | ((QData)((IData)((IData)(vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__pipe_mult__DOT__g_shift_register__DOT__g_shift__DOT__pipe))) 
                  << 0x20U));
        vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__pipe_mult__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
            = ((0xffffffff00000000ULL & vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__pipe_mult__DOT__g_shift_register__DOT__g_shift__DOT__pipe) 
               | (IData)((IData)(vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__xprod)));
        vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__pipe_mult__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
            = ((0xffffffffULL & vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__pipe_mult__DOT__g_shift_register__DOT__g_shift__DOT__pipe) 
               | ((QData)((IData)((IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__pipe_mult__DOT__g_shift_register__DOT__g_shift__DOT__pipe))) 
                  << 0x20U));
        vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__pipe_mult__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
            = ((0xffffffff00000000ULL & vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__pipe_mult__DOT__g_shift_register__DOT__g_shift__DOT__pipe) 
               | (IData)((IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__xprod)));
        __Vdly__pipe_acc__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
            = ((0xffffffff00000000ULL & __Vdly__pipe_acc__DOT__g_shift_register__DOT__g_shift__DOT__pipe) 
               | (IData)((IData)(vlSelfRef.__PVT__xacc)));
        __Vdly__pipe_acc__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
            = ((0xffffffffULL & __Vdly__pipe_acc__DOT__g_shift_register__DOT__g_shift__DOT__pipe) 
               | ((QData)((IData)((IData)(vlSelfRef.__PVT__pipe_acc__DOT__g_shift_register__DOT__g_shift__DOT__pipe))) 
                  << 0x20U));
        vlSelfRef.__PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
            = ((0xffffffffULL & vlSelfRef.__PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe) 
               | ((QData)((IData)((IData)(vlSelfRef.__PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe))) 
                  << 0x20U));
        vlSelfRef.__PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
            = ((0xffffffff00000000ULL & vlSelfRef.__PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe) 
               | (IData)((IData)(((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                   << 0x1aU) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                                                >> 6U)))));
    }
    vlSelfRef.__PVT__pipe_acc__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
        = __Vdly__pipe_acc__DOT__g_shift_register__DOT__g_shift__DOT__pipe;
    vlSelfRef.__PVT__nult_result[1U] = (IData)((vlSelfRef.__PVT__g_prod__BRA__1__KET____DOT__pipe_mult__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
                                                >> 0x20U));
    vlSelfRef.__PVT__nult_result[0U] = (IData)((vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__pipe_mult__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
                                                >> 0x20U));
}
