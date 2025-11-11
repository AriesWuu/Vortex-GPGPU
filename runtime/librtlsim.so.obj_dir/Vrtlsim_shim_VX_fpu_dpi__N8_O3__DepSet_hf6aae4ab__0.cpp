// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrtlsim_shim.h for the primary calling header

#include "Vrtlsim_shim__pch.h"
#include "Vrtlsim_shim_VX_fpu_dpi__N8_O3.h"
#include "Vrtlsim_shim__Syms.h"

void Vrtlsim_shim___024unit____Vdpiimwrap_dpi_itof_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, IData/*31:0*/ src_fmt, QData/*63:0*/ a, CData/*2:0*/ frm, QData/*63:0*/ &result, CData/*4:0*/ &fflags);
void Vrtlsim_shim___024unit____Vdpiimwrap_dpi_utof_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, IData/*31:0*/ src_fmt, QData/*63:0*/ a, CData/*2:0*/ frm, QData/*63:0*/ &result, CData/*4:0*/ &fflags);
void Vrtlsim_shim___024unit____Vdpiimwrap_dpi_ftoi_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, IData/*31:0*/ src_fmt, QData/*63:0*/ a, CData/*2:0*/ frm, QData/*63:0*/ &result, CData/*4:0*/ &fflags);
void Vrtlsim_shim___024unit____Vdpiimwrap_dpi_ftou_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, IData/*31:0*/ src_fmt, QData/*63:0*/ a, CData/*2:0*/ frm, QData/*63:0*/ &result, CData/*4:0*/ &fflags);
void Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, IData/*31:0*/ src_fmt, QData/*63:0*/ a, QData/*63:0*/ &result);
void Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fadd_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, QData/*63:0*/ b, CData/*2:0*/ frm, QData/*63:0*/ &result, CData/*4:0*/ &fflags);
void Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsub_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, QData/*63:0*/ b, CData/*2:0*/ frm, QData/*63:0*/ &result, CData/*4:0*/ &fflags);
void Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmul_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, QData/*63:0*/ b, CData/*2:0*/ frm, QData/*63:0*/ &result, CData/*4:0*/ &fflags);
void Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmadd_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, QData/*63:0*/ b, QData/*63:0*/ c, CData/*2:0*/ frm, QData/*63:0*/ &result, CData/*4:0*/ &fflags);
void Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmsub_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, QData/*63:0*/ b, QData/*63:0*/ c, CData/*2:0*/ frm, QData/*63:0*/ &result, CData/*4:0*/ &fflags);
void Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fnmadd_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, QData/*63:0*/ b, QData/*63:0*/ c, CData/*2:0*/ frm, QData/*63:0*/ &result, CData/*4:0*/ &fflags);
void Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fnmsub_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, QData/*63:0*/ b, QData/*63:0*/ c, CData/*2:0*/ frm, QData/*63:0*/ &result, CData/*4:0*/ &fflags);
void Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fclss_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, QData/*63:0*/ &result);
void Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fle_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, QData/*63:0*/ b, QData/*63:0*/ &result, CData/*4:0*/ &fflags);
void Vrtlsim_shim___024unit____Vdpiimwrap_dpi_flt_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, QData/*63:0*/ b, QData/*63:0*/ &result, CData/*4:0*/ &fflags);
void Vrtlsim_shim___024unit____Vdpiimwrap_dpi_feq_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, QData/*63:0*/ b, QData/*63:0*/ &result, CData/*4:0*/ &fflags);
void Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmin_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, QData/*63:0*/ b, QData/*63:0*/ &result, CData/*4:0*/ &fflags);
void Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmax_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, QData/*63:0*/ b, QData/*63:0*/ &result, CData/*4:0*/ &fflags);
void Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsgnj_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, QData/*63:0*/ b, QData/*63:0*/ &result);
void Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsgnjn_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, QData/*63:0*/ b, QData/*63:0*/ &result);
void Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsgnjx_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, QData/*63:0*/ b, QData/*63:0*/ &result);
void Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fdiv_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, QData/*63:0*/ b, CData/*2:0*/ frm, QData/*63:0*/ &result, CData/*4:0*/ &fflags);
void Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsqrt_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, CData/*2:0*/ frm, QData/*63:0*/ &result, CData/*4:0*/ &fflags);

VL_INLINE_OPT void Vrtlsim_shim_VX_fpu_dpi__N8_O3___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_dpi__4(Vrtlsim_shim_VX_fpu_dpi__N8_O3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_fpu_dpi__N8_O3___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_dpi__4\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot 
        = ((0U != (IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__masked_reqs))
            ? ((~ (IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__masked_pri_reqs)) 
               & (IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__masked_reqs))
            : ((~ (IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__unmasked_pri_reqs)) 
               & (IData)(vlSelfRef.__PVT__per_core_valid_out)));
    vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__v[1U] 
        = ((0xeU & vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__v
            [1U]) | (0U != (3U & (IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot))));
    vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__v[1U] 
        = ((0xbU & vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__v
            [1U]) | ((IData)((0U != (3U & ((IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                           >> 2U)))) 
                     << 2U));
    vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__v[0U] 
        = vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot;
    vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__addr[0U] 
        = ((0xeU & vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__addr
            [0U]) | (1U & ((IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                           >> 1U)));
    vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__addr[0U] 
        = ((0xbU & vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__addr
            [0U]) | (4U & ((IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                           >> 1U)));
    vlSelfRef.__PVT__g_fcvt__DOT__fcvt_ready = (1U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x29U] 
                                                     >> 2U)) 
                                                   | ((IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                                      & ((IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                         >> 2U))));
    vlSelfRef.__PVT__g_fma__DOT__fma_ready = (1U & 
                                              ((~ (
                                                   vlSelfRef.__PVT__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x20U] 
                                                   >> 0x1bU)) 
                                               | ((IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                                  & (IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot))));
    vlSelfRef.__Vcellinp__div_sqrt_arb__ready_out = 
        ((IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
         & ((IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
            >> 1U));
    vlSelfRef.__PVT__g_fncp__DOT__fncp_ready = (1U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__g_fncp__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x10U] 
                                                     >> 0xfU)) 
                                                   | ((IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                                      & ((IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                         >> 3U))));
    vlSelfRef.__PVT__g_fcvt__DOT__fcvt_fire = ((IData)(vlSelfRef.__PVT__g_fcvt__DOT__fcvt_valid) 
                                               & (IData)(vlSelfRef.__PVT__g_fcvt__DOT__fcvt_ready));
    vlSelfRef.__PVT__g_fma__DOT__fma_fire = ((IData)(vlSelfRef.__PVT__g_fma__DOT__fma_valid) 
                                             & (IData)(vlSelfRef.__PVT__g_fma__DOT__fma_ready));
    vlSelfRef.__PVT__g_fdiv__DOT__fdiv_ready = (1U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x7bU] 
                                                     >> 8U)) 
                                                   | ((IData)(vlSelfRef.__Vcellinp__div_sqrt_arb__ready_out) 
                                                      & (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x7bU] 
                                                         >> 8U))));
    vlSelfRef.__PVT__g_fsqrt__DOT__fsqrt_ready = (1U 
                                                  & ((~ 
                                                      (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x52U] 
                                                       >> 5U)) 
                                                     | ((IData)(vlSelfRef.__Vcellinp__div_sqrt_arb__ready_out) 
                                                        & (IData)(vlSelfRef.__VdfgRegularize_h2d827eb9_0_2))));
    vlSelfRef.__PVT__g_fncp__DOT__fncp_fire = ((IData)(vlSelfRef.__PVT__g_fncp__DOT__fncp_valid) 
                                               & (IData)(vlSelfRef.__PVT__g_fncp__DOT__fncp_ready));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_itof_TOP____024unit(vlSelfRef.__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xbU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_itof__9__result, vlSelfRef.__Vtask_dpi_itof__9__fflags);
    vlSelfRef.__PVT__g_fcvt__DOT__result_itof[0U] = (IData)(vlSelfRef.__Vtask_dpi_itof__9__result);
    vlSelfRef.__PVT__g_fcvt__DOT__result_itof[1U] = (IData)(
                                                            (vlSelfRef.__Vtask_dpi_itof__9__result 
                                                             >> 0x20U));
    vlSelfRef.__Vlvbound_h74d7c13e__0 = vlSelfRef.__Vtask_dpi_itof__9__fflags;
    vlSelfRef.__PVT__g_fcvt__DOT__fflags_itof = ((0xffffffffe0ULL 
                                                  & vlSelfRef.__PVT__g_fcvt__DOT__fflags_itof) 
                                                 | (IData)((IData)(vlSelfRef.__Vlvbound_h74d7c13e__0)));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_utof_TOP____024unit(vlSelfRef.__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xbU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_utof__10__result, vlSelfRef.__Vtask_dpi_utof__10__fflags);
    vlSelfRef.__PVT__g_fcvt__DOT__result_utof[0U] = (IData)(vlSelfRef.__Vtask_dpi_utof__10__result);
    vlSelfRef.__PVT__g_fcvt__DOT__result_utof[1U] = (IData)(
                                                            (vlSelfRef.__Vtask_dpi_utof__10__result 
                                                             >> 0x20U));
    vlSelfRef.__Vlvbound_hbf0332af__0 = vlSelfRef.__Vtask_dpi_utof__10__fflags;
    vlSelfRef.__PVT__g_fcvt__DOT__fflags_utof = ((0xffffffffe0ULL 
                                                  & vlSelfRef.__PVT__g_fcvt__DOT__fflags_utof) 
                                                 | (IData)((IData)(vlSelfRef.__Vlvbound_hbf0332af__0)));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_ftoi_TOP____024unit(vlSelfRef.__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xbU)), 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_ftoi__11__result, vlSelfRef.__Vtask_dpi_ftoi__11__fflags);
    vlSelfRef.__PVT__g_fcvt__DOT__result_ftoi[0U] = (IData)(vlSelfRef.__Vtask_dpi_ftoi__11__result);
    vlSelfRef.__PVT__g_fcvt__DOT__result_ftoi[1U] = (IData)(
                                                            (vlSelfRef.__Vtask_dpi_ftoi__11__result 
                                                             >> 0x20U));
    vlSelfRef.__Vlvbound_hd091cd26__0 = vlSelfRef.__Vtask_dpi_ftoi__11__fflags;
    vlSelfRef.__PVT__g_fcvt__DOT__fflags_ftoi = ((0xffffffffe0ULL 
                                                  & vlSelfRef.__PVT__g_fcvt__DOT__fflags_ftoi) 
                                                 | (IData)((IData)(vlSelfRef.__Vlvbound_hd091cd26__0)));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_ftou_TOP____024unit(vlSelfRef.__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xbU)), 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_ftou__12__result, vlSelfRef.__Vtask_dpi_ftou__12__fflags);
    vlSelfRef.__PVT__g_fcvt__DOT__result_ftou[0U] = (IData)(vlSelfRef.__Vtask_dpi_ftou__12__result);
    vlSelfRef.__PVT__g_fcvt__DOT__result_ftou[1U] = (IData)(
                                                            (vlSelfRef.__Vtask_dpi_ftou__12__result 
                                                             >> 0x20U));
    vlSelfRef.__Vlvbound_h954e09c9__0 = vlSelfRef.__Vtask_dpi_ftou__12__fflags;
    vlSelfRef.__PVT__g_fcvt__DOT__fflags_ftou = ((0xffffffffe0ULL 
                                                  & vlSelfRef.__PVT__g_fcvt__DOT__fflags_ftou) 
                                                 | (IData)((IData)(vlSelfRef.__Vlvbound_h954e09c9__0)));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSelfRef.__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                ((0x400U 
                                                                  & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U])
                                                                  ? 1U
                                                                  : 0U), 
                                                                ((0x400U 
                                                                  & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U])
                                                                  ? 0U
                                                                  : 1U), 
                                                                (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][1U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0U]))), vlSelfRef.__Vtask_dpi_f2f__13__result);
    vlSelfRef.__PVT__g_fcvt__DOT__result_f2f[0U] = (IData)(vlSelfRef.__Vtask_dpi_f2f__13__result);
    vlSelfRef.__PVT__g_fcvt__DOT__result_f2f[1U] = (IData)(
                                                           (vlSelfRef.__Vtask_dpi_f2f__13__result 
                                                            >> 0x20U));
    if (vlSelfRef.__PVT__is_itof) {
        vlSelfRef.__PVT__g_fcvt__DOT__result_fcvt[0U] 
            = vlSelfRef.__PVT__g_fcvt__DOT__result_itof[0U];
        vlSelfRef.__Vlvbound_h63f18bdd__0 = (0x1fU 
                                             & (IData)(vlSelfRef.__PVT__g_fcvt__DOT__fflags_itof));
    } else if (vlSelfRef.__PVT__is_utof) {
        vlSelfRef.__PVT__g_fcvt__DOT__result_fcvt[0U] 
            = vlSelfRef.__PVT__g_fcvt__DOT__result_utof[0U];
        vlSelfRef.__Vlvbound_h63f18bdd__0 = (0x1fU 
                                             & (IData)(vlSelfRef.__PVT__g_fcvt__DOT__fflags_utof));
    } else if (vlSelfRef.__PVT__is_ftoi) {
        vlSelfRef.__PVT__g_fcvt__DOT__result_fcvt[0U] 
            = vlSelfRef.__PVT__g_fcvt__DOT__result_ftoi[0U];
        vlSelfRef.__Vlvbound_h63f18bdd__0 = (0x1fU 
                                             & (IData)(vlSelfRef.__PVT__g_fcvt__DOT__fflags_ftoi));
    } else if (vlSelfRef.__PVT__is_ftou) {
        vlSelfRef.__PVT__g_fcvt__DOT__result_fcvt[0U] 
            = vlSelfRef.__PVT__g_fcvt__DOT__result_ftou[0U];
        vlSelfRef.__Vlvbound_h63f18bdd__0 = (0x1fU 
                                             & (IData)(vlSelfRef.__PVT__g_fcvt__DOT__fflags_ftou));
    } else {
        vlSelfRef.__PVT__g_fcvt__DOT__result_fcvt[0U] 
            = ((IData)(vlSelfRef.__PVT__is_f2f) ? vlSelfRef.__PVT__g_fcvt__DOT__result_f2f[0U]
                : 0U);
        vlSelfRef.__Vlvbound_h63f18bdd__0 = (0x1fU 
                                             & 0U);
    }
    vlSelfRef.__PVT__g_fcvt__DOT__fflags_fcvt = ((0xffffffffe0ULL 
                                                  & vlSelfRef.__PVT__g_fcvt__DOT__fflags_fcvt) 
                                                 | (IData)((IData)(vlSelfRef.__Vlvbound_h63f18bdd__0)));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_itof_TOP____024unit(vlSelfRef.__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xbU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][3U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][2U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_itof__9__result, vlSelfRef.__Vtask_dpi_itof__9__fflags);
    vlSelfRef.__PVT__g_fcvt__DOT__result_itof[2U] = (IData)(vlSelfRef.__Vtask_dpi_itof__9__result);
    vlSelfRef.__PVT__g_fcvt__DOT__result_itof[3U] = (IData)(
                                                            (vlSelfRef.__Vtask_dpi_itof__9__result 
                                                             >> 0x20U));
    vlSelfRef.__Vlvbound_h74d7c13e__0 = vlSelfRef.__Vtask_dpi_itof__9__fflags;
    vlSelfRef.__PVT__g_fcvt__DOT__fflags_itof = ((0xfffffffc1fULL 
                                                  & vlSelfRef.__PVT__g_fcvt__DOT__fflags_itof) 
                                                 | ((QData)((IData)(vlSelfRef.__Vlvbound_h74d7c13e__0)) 
                                                    << 5U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_utof_TOP____024unit(vlSelfRef.__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xbU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][3U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][2U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_utof__10__result, vlSelfRef.__Vtask_dpi_utof__10__fflags);
    vlSelfRef.__PVT__g_fcvt__DOT__result_utof[2U] = (IData)(vlSelfRef.__Vtask_dpi_utof__10__result);
    vlSelfRef.__PVT__g_fcvt__DOT__result_utof[3U] = (IData)(
                                                            (vlSelfRef.__Vtask_dpi_utof__10__result 
                                                             >> 0x20U));
    vlSelfRef.__Vlvbound_hbf0332af__0 = vlSelfRef.__Vtask_dpi_utof__10__fflags;
    vlSelfRef.__PVT__g_fcvt__DOT__fflags_utof = ((0xfffffffc1fULL 
                                                  & vlSelfRef.__PVT__g_fcvt__DOT__fflags_utof) 
                                                 | ((QData)((IData)(vlSelfRef.__Vlvbound_hbf0332af__0)) 
                                                    << 5U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_ftoi_TOP____024unit(vlSelfRef.__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xbU)), 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][3U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][2U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_ftoi__11__result, vlSelfRef.__Vtask_dpi_ftoi__11__fflags);
    vlSelfRef.__PVT__g_fcvt__DOT__result_ftoi[2U] = (IData)(vlSelfRef.__Vtask_dpi_ftoi__11__result);
    vlSelfRef.__PVT__g_fcvt__DOT__result_ftoi[3U] = (IData)(
                                                            (vlSelfRef.__Vtask_dpi_ftoi__11__result 
                                                             >> 0x20U));
    vlSelfRef.__Vlvbound_hd091cd26__0 = vlSelfRef.__Vtask_dpi_ftoi__11__fflags;
    vlSelfRef.__PVT__g_fcvt__DOT__fflags_ftoi = ((0xfffffffc1fULL 
                                                  & vlSelfRef.__PVT__g_fcvt__DOT__fflags_ftoi) 
                                                 | ((QData)((IData)(vlSelfRef.__Vlvbound_hd091cd26__0)) 
                                                    << 5U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_ftou_TOP____024unit(vlSelfRef.__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xbU)), 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][3U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][2U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_ftou__12__result, vlSelfRef.__Vtask_dpi_ftou__12__fflags);
    vlSelfRef.__PVT__g_fcvt__DOT__result_ftou[2U] = (IData)(vlSelfRef.__Vtask_dpi_ftou__12__result);
    vlSelfRef.__PVT__g_fcvt__DOT__result_ftou[3U] = (IData)(
                                                            (vlSelfRef.__Vtask_dpi_ftou__12__result 
                                                             >> 0x20U));
    vlSelfRef.__Vlvbound_h954e09c9__0 = vlSelfRef.__Vtask_dpi_ftou__12__fflags;
    vlSelfRef.__PVT__g_fcvt__DOT__fflags_ftou = ((0xfffffffc1fULL 
                                                  & vlSelfRef.__PVT__g_fcvt__DOT__fflags_ftou) 
                                                 | ((QData)((IData)(vlSelfRef.__Vlvbound_h954e09c9__0)) 
                                                    << 5U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSelfRef.__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                ((0x400U 
                                                                  & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U])
                                                                  ? 1U
                                                                  : 0U), 
                                                                ((0x400U 
                                                                  & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U])
                                                                  ? 0U
                                                                  : 1U), 
                                                                (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][3U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][2U]))), vlSelfRef.__Vtask_dpi_f2f__13__result);
    vlSelfRef.__PVT__g_fcvt__DOT__result_f2f[2U] = (IData)(vlSelfRef.__Vtask_dpi_f2f__13__result);
    vlSelfRef.__PVT__g_fcvt__DOT__result_f2f[3U] = (IData)(
                                                           (vlSelfRef.__Vtask_dpi_f2f__13__result 
                                                            >> 0x20U));
    if (vlSelfRef.__PVT__is_itof) {
        vlSelfRef.__PVT__g_fcvt__DOT__result_fcvt[1U] 
            = vlSelfRef.__PVT__g_fcvt__DOT__result_itof[2U];
        vlSelfRef.__Vlvbound_h63f18bdd__0 = (0x1fU 
                                             & (IData)(
                                                       (vlSelfRef.__PVT__g_fcvt__DOT__fflags_itof 
                                                        >> 5U)));
    } else if (vlSelfRef.__PVT__is_utof) {
        vlSelfRef.__PVT__g_fcvt__DOT__result_fcvt[1U] 
            = vlSelfRef.__PVT__g_fcvt__DOT__result_utof[2U];
        vlSelfRef.__Vlvbound_h63f18bdd__0 = (0x1fU 
                                             & (IData)(
                                                       (vlSelfRef.__PVT__g_fcvt__DOT__fflags_utof 
                                                        >> 5U)));
    } else if (vlSelfRef.__PVT__is_ftoi) {
        vlSelfRef.__PVT__g_fcvt__DOT__result_fcvt[1U] 
            = vlSelfRef.__PVT__g_fcvt__DOT__result_ftoi[2U];
        vlSelfRef.__Vlvbound_h63f18bdd__0 = (0x1fU 
                                             & (IData)(
                                                       (vlSelfRef.__PVT__g_fcvt__DOT__fflags_ftoi 
                                                        >> 5U)));
    } else if (vlSelfRef.__PVT__is_ftou) {
        vlSelfRef.__PVT__g_fcvt__DOT__result_fcvt[1U] 
            = vlSelfRef.__PVT__g_fcvt__DOT__result_ftou[2U];
        vlSelfRef.__Vlvbound_h63f18bdd__0 = (0x1fU 
                                             & (IData)(
                                                       (vlSelfRef.__PVT__g_fcvt__DOT__fflags_ftou 
                                                        >> 5U)));
    } else {
        vlSelfRef.__PVT__g_fcvt__DOT__result_fcvt[1U] 
            = ((IData)(vlSelfRef.__PVT__is_f2f) ? vlSelfRef.__PVT__g_fcvt__DOT__result_f2f[2U]
                : 0U);
        vlSelfRef.__Vlvbound_h63f18bdd__0 = (0x1fU 
                                             & 0U);
    }
    vlSelfRef.__PVT__g_fcvt__DOT__fflags_fcvt = ((0xfffffffc1fULL 
                                                  & vlSelfRef.__PVT__g_fcvt__DOT__fflags_fcvt) 
                                                 | ((QData)((IData)(vlSelfRef.__Vlvbound_h63f18bdd__0)) 
                                                    << 5U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_itof_TOP____024unit(vlSelfRef.__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xbU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][5U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][4U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_itof__9__result, vlSelfRef.__Vtask_dpi_itof__9__fflags);
    vlSelfRef.__PVT__g_fcvt__DOT__result_itof[4U] = (IData)(vlSelfRef.__Vtask_dpi_itof__9__result);
    vlSelfRef.__PVT__g_fcvt__DOT__result_itof[5U] = (IData)(
                                                            (vlSelfRef.__Vtask_dpi_itof__9__result 
                                                             >> 0x20U));
    vlSelfRef.__Vlvbound_h74d7c13e__0 = vlSelfRef.__Vtask_dpi_itof__9__fflags;
    vlSelfRef.__PVT__g_fcvt__DOT__fflags_itof = ((0xffffff83ffULL 
                                                  & vlSelfRef.__PVT__g_fcvt__DOT__fflags_itof) 
                                                 | ((QData)((IData)(vlSelfRef.__Vlvbound_h74d7c13e__0)) 
                                                    << 0xaU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_utof_TOP____024unit(vlSelfRef.__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xbU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][5U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][4U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_utof__10__result, vlSelfRef.__Vtask_dpi_utof__10__fflags);
    vlSelfRef.__PVT__g_fcvt__DOT__result_utof[4U] = (IData)(vlSelfRef.__Vtask_dpi_utof__10__result);
    vlSelfRef.__PVT__g_fcvt__DOT__result_utof[5U] = (IData)(
                                                            (vlSelfRef.__Vtask_dpi_utof__10__result 
                                                             >> 0x20U));
    vlSelfRef.__Vlvbound_hbf0332af__0 = vlSelfRef.__Vtask_dpi_utof__10__fflags;
    vlSelfRef.__PVT__g_fcvt__DOT__fflags_utof = ((0xffffff83ffULL 
                                                  & vlSelfRef.__PVT__g_fcvt__DOT__fflags_utof) 
                                                 | ((QData)((IData)(vlSelfRef.__Vlvbound_hbf0332af__0)) 
                                                    << 0xaU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_ftoi_TOP____024unit(vlSelfRef.__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xbU)), 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][5U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][4U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_ftoi__11__result, vlSelfRef.__Vtask_dpi_ftoi__11__fflags);
    vlSelfRef.__PVT__g_fcvt__DOT__result_ftoi[4U] = (IData)(vlSelfRef.__Vtask_dpi_ftoi__11__result);
    vlSelfRef.__PVT__g_fcvt__DOT__result_ftoi[5U] = (IData)(
                                                            (vlSelfRef.__Vtask_dpi_ftoi__11__result 
                                                             >> 0x20U));
    vlSelfRef.__Vlvbound_hd091cd26__0 = vlSelfRef.__Vtask_dpi_ftoi__11__fflags;
    vlSelfRef.__PVT__g_fcvt__DOT__fflags_ftoi = ((0xffffff83ffULL 
                                                  & vlSelfRef.__PVT__g_fcvt__DOT__fflags_ftoi) 
                                                 | ((QData)((IData)(vlSelfRef.__Vlvbound_hd091cd26__0)) 
                                                    << 0xaU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_ftou_TOP____024unit(vlSelfRef.__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xbU)), 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][5U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][4U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_ftou__12__result, vlSelfRef.__Vtask_dpi_ftou__12__fflags);
    vlSelfRef.__PVT__g_fcvt__DOT__result_ftou[4U] = (IData)(vlSelfRef.__Vtask_dpi_ftou__12__result);
    vlSelfRef.__PVT__g_fcvt__DOT__result_ftou[5U] = (IData)(
                                                            (vlSelfRef.__Vtask_dpi_ftou__12__result 
                                                             >> 0x20U));
    vlSelfRef.__Vlvbound_h954e09c9__0 = vlSelfRef.__Vtask_dpi_ftou__12__fflags;
    vlSelfRef.__PVT__g_fcvt__DOT__fflags_ftou = ((0xffffff83ffULL 
                                                  & vlSelfRef.__PVT__g_fcvt__DOT__fflags_ftou) 
                                                 | ((QData)((IData)(vlSelfRef.__Vlvbound_h954e09c9__0)) 
                                                    << 0xaU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSelfRef.__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                ((0x400U 
                                                                  & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U])
                                                                  ? 1U
                                                                  : 0U), 
                                                                ((0x400U 
                                                                  & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U])
                                                                  ? 0U
                                                                  : 1U), 
                                                                (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][5U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][4U]))), vlSelfRef.__Vtask_dpi_f2f__13__result);
    vlSelfRef.__PVT__g_fcvt__DOT__result_f2f[4U] = (IData)(vlSelfRef.__Vtask_dpi_f2f__13__result);
    vlSelfRef.__PVT__g_fcvt__DOT__result_f2f[5U] = (IData)(
                                                           (vlSelfRef.__Vtask_dpi_f2f__13__result 
                                                            >> 0x20U));
    if (vlSelfRef.__PVT__is_itof) {
        vlSelfRef.__PVT__g_fcvt__DOT__result_fcvt[2U] 
            = vlSelfRef.__PVT__g_fcvt__DOT__result_itof[4U];
        vlSelfRef.__Vlvbound_h63f18bdd__0 = (0x1fU 
                                             & (IData)(
                                                       (vlSelfRef.__PVT__g_fcvt__DOT__fflags_itof 
                                                        >> 0xaU)));
    } else if (vlSelfRef.__PVT__is_utof) {
        vlSelfRef.__PVT__g_fcvt__DOT__result_fcvt[2U] 
            = vlSelfRef.__PVT__g_fcvt__DOT__result_utof[4U];
        vlSelfRef.__Vlvbound_h63f18bdd__0 = (0x1fU 
                                             & (IData)(
                                                       (vlSelfRef.__PVT__g_fcvt__DOT__fflags_utof 
                                                        >> 0xaU)));
    } else if (vlSelfRef.__PVT__is_ftoi) {
        vlSelfRef.__PVT__g_fcvt__DOT__result_fcvt[2U] 
            = vlSelfRef.__PVT__g_fcvt__DOT__result_ftoi[4U];
        vlSelfRef.__Vlvbound_h63f18bdd__0 = (0x1fU 
                                             & (IData)(
                                                       (vlSelfRef.__PVT__g_fcvt__DOT__fflags_ftoi 
                                                        >> 0xaU)));
    } else if (vlSelfRef.__PVT__is_ftou) {
        vlSelfRef.__PVT__g_fcvt__DOT__result_fcvt[2U] 
            = vlSelfRef.__PVT__g_fcvt__DOT__result_ftou[4U];
        vlSelfRef.__Vlvbound_h63f18bdd__0 = (0x1fU 
                                             & (IData)(
                                                       (vlSelfRef.__PVT__g_fcvt__DOT__fflags_ftou 
                                                        >> 0xaU)));
    } else {
        vlSelfRef.__PVT__g_fcvt__DOT__result_fcvt[2U] 
            = ((IData)(vlSelfRef.__PVT__is_f2f) ? vlSelfRef.__PVT__g_fcvt__DOT__result_f2f[4U]
                : 0U);
        vlSelfRef.__Vlvbound_h63f18bdd__0 = (0x1fU 
                                             & 0U);
    }
    vlSelfRef.__PVT__g_fcvt__DOT__fflags_fcvt = ((0xffffff83ffULL 
                                                  & vlSelfRef.__PVT__g_fcvt__DOT__fflags_fcvt) 
                                                 | ((QData)((IData)(vlSelfRef.__Vlvbound_h63f18bdd__0)) 
                                                    << 0xaU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_itof_TOP____024unit(vlSelfRef.__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xbU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][7U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][6U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_itof__9__result, vlSelfRef.__Vtask_dpi_itof__9__fflags);
    vlSelfRef.__PVT__g_fcvt__DOT__result_itof[6U] = (IData)(vlSelfRef.__Vtask_dpi_itof__9__result);
    vlSelfRef.__PVT__g_fcvt__DOT__result_itof[7U] = (IData)(
                                                            (vlSelfRef.__Vtask_dpi_itof__9__result 
                                                             >> 0x20U));
    vlSelfRef.__Vlvbound_h74d7c13e__0 = vlSelfRef.__Vtask_dpi_itof__9__fflags;
    vlSelfRef.__PVT__g_fcvt__DOT__fflags_itof = ((0xfffff07fffULL 
                                                  & vlSelfRef.__PVT__g_fcvt__DOT__fflags_itof) 
                                                 | ((QData)((IData)(vlSelfRef.__Vlvbound_h74d7c13e__0)) 
                                                    << 0xfU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_utof_TOP____024unit(vlSelfRef.__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xbU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][7U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][6U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_utof__10__result, vlSelfRef.__Vtask_dpi_utof__10__fflags);
    vlSelfRef.__PVT__g_fcvt__DOT__result_utof[6U] = (IData)(vlSelfRef.__Vtask_dpi_utof__10__result);
    vlSelfRef.__PVT__g_fcvt__DOT__result_utof[7U] = (IData)(
                                                            (vlSelfRef.__Vtask_dpi_utof__10__result 
                                                             >> 0x20U));
    vlSelfRef.__Vlvbound_hbf0332af__0 = vlSelfRef.__Vtask_dpi_utof__10__fflags;
    vlSelfRef.__PVT__g_fcvt__DOT__fflags_utof = ((0xfffff07fffULL 
                                                  & vlSelfRef.__PVT__g_fcvt__DOT__fflags_utof) 
                                                 | ((QData)((IData)(vlSelfRef.__Vlvbound_hbf0332af__0)) 
                                                    << 0xfU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_ftoi_TOP____024unit(vlSelfRef.__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xbU)), 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][7U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][6U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_ftoi__11__result, vlSelfRef.__Vtask_dpi_ftoi__11__fflags);
    vlSelfRef.__PVT__g_fcvt__DOT__result_ftoi[6U] = (IData)(vlSelfRef.__Vtask_dpi_ftoi__11__result);
    vlSelfRef.__PVT__g_fcvt__DOT__result_ftoi[7U] = (IData)(
                                                            (vlSelfRef.__Vtask_dpi_ftoi__11__result 
                                                             >> 0x20U));
    vlSelfRef.__Vlvbound_hd091cd26__0 = vlSelfRef.__Vtask_dpi_ftoi__11__fflags;
    vlSelfRef.__PVT__g_fcvt__DOT__fflags_ftoi = ((0xfffff07fffULL 
                                                  & vlSelfRef.__PVT__g_fcvt__DOT__fflags_ftoi) 
                                                 | ((QData)((IData)(vlSelfRef.__Vlvbound_hd091cd26__0)) 
                                                    << 0xfU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_ftou_TOP____024unit(vlSelfRef.__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xbU)), 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][7U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][6U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_ftou__12__result, vlSelfRef.__Vtask_dpi_ftou__12__fflags);
    vlSelfRef.__PVT__g_fcvt__DOT__result_ftou[6U] = (IData)(vlSelfRef.__Vtask_dpi_ftou__12__result);
    vlSelfRef.__PVT__g_fcvt__DOT__result_ftou[7U] = (IData)(
                                                            (vlSelfRef.__Vtask_dpi_ftou__12__result 
                                                             >> 0x20U));
    vlSelfRef.__Vlvbound_h954e09c9__0 = vlSelfRef.__Vtask_dpi_ftou__12__fflags;
    vlSelfRef.__PVT__g_fcvt__DOT__fflags_ftou = ((0xfffff07fffULL 
                                                  & vlSelfRef.__PVT__g_fcvt__DOT__fflags_ftou) 
                                                 | ((QData)((IData)(vlSelfRef.__Vlvbound_h954e09c9__0)) 
                                                    << 0xfU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSelfRef.__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                ((0x400U 
                                                                  & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U])
                                                                  ? 1U
                                                                  : 0U), 
                                                                ((0x400U 
                                                                  & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U])
                                                                  ? 0U
                                                                  : 1U), 
                                                                (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][7U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][6U]))), vlSelfRef.__Vtask_dpi_f2f__13__result);
    vlSelfRef.__PVT__g_fcvt__DOT__result_f2f[6U] = (IData)(vlSelfRef.__Vtask_dpi_f2f__13__result);
    vlSelfRef.__PVT__g_fcvt__DOT__result_f2f[7U] = (IData)(
                                                           (vlSelfRef.__Vtask_dpi_f2f__13__result 
                                                            >> 0x20U));
    if (vlSelfRef.__PVT__is_itof) {
        vlSelfRef.__PVT__g_fcvt__DOT__result_fcvt[3U] 
            = vlSelfRef.__PVT__g_fcvt__DOT__result_itof[6U];
        vlSelfRef.__Vlvbound_h63f18bdd__0 = (0x1fU 
                                             & (IData)(
                                                       (vlSelfRef.__PVT__g_fcvt__DOT__fflags_itof 
                                                        >> 0xfU)));
    } else if (vlSelfRef.__PVT__is_utof) {
        vlSelfRef.__PVT__g_fcvt__DOT__result_fcvt[3U] 
            = vlSelfRef.__PVT__g_fcvt__DOT__result_utof[6U];
        vlSelfRef.__Vlvbound_h63f18bdd__0 = (0x1fU 
                                             & (IData)(
                                                       (vlSelfRef.__PVT__g_fcvt__DOT__fflags_utof 
                                                        >> 0xfU)));
    } else if (vlSelfRef.__PVT__is_ftoi) {
        vlSelfRef.__PVT__g_fcvt__DOT__result_fcvt[3U] 
            = vlSelfRef.__PVT__g_fcvt__DOT__result_ftoi[6U];
        vlSelfRef.__Vlvbound_h63f18bdd__0 = (0x1fU 
                                             & (IData)(
                                                       (vlSelfRef.__PVT__g_fcvt__DOT__fflags_ftoi 
                                                        >> 0xfU)));
    } else if (vlSelfRef.__PVT__is_ftou) {
        vlSelfRef.__PVT__g_fcvt__DOT__result_fcvt[3U] 
            = vlSelfRef.__PVT__g_fcvt__DOT__result_ftou[6U];
        vlSelfRef.__Vlvbound_h63f18bdd__0 = (0x1fU 
                                             & (IData)(
                                                       (vlSelfRef.__PVT__g_fcvt__DOT__fflags_ftou 
                                                        >> 0xfU)));
    } else {
        vlSelfRef.__PVT__g_fcvt__DOT__result_fcvt[3U] 
            = ((IData)(vlSelfRef.__PVT__is_f2f) ? vlSelfRef.__PVT__g_fcvt__DOT__result_f2f[6U]
                : 0U);
        vlSelfRef.__Vlvbound_h63f18bdd__0 = (0x1fU 
                                             & 0U);
    }
    vlSelfRef.__PVT__g_fcvt__DOT__fflags_fcvt = ((0xfffff07fffULL 
                                                  & vlSelfRef.__PVT__g_fcvt__DOT__fflags_fcvt) 
                                                 | ((QData)((IData)(vlSelfRef.__Vlvbound_h63f18bdd__0)) 
                                                    << 0xfU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_itof_TOP____024unit(vlSelfRef.__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xbU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][9U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][8U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_itof__9__result, vlSelfRef.__Vtask_dpi_itof__9__fflags);
    vlSelfRef.__PVT__g_fcvt__DOT__result_itof[8U] = (IData)(vlSelfRef.__Vtask_dpi_itof__9__result);
    vlSelfRef.__PVT__g_fcvt__DOT__result_itof[9U] = (IData)(
                                                            (vlSelfRef.__Vtask_dpi_itof__9__result 
                                                             >> 0x20U));
    vlSelfRef.__Vlvbound_h74d7c13e__0 = vlSelfRef.__Vtask_dpi_itof__9__fflags;
    vlSelfRef.__PVT__g_fcvt__DOT__fflags_itof = ((0xfffe0fffffULL 
                                                  & vlSelfRef.__PVT__g_fcvt__DOT__fflags_itof) 
                                                 | ((QData)((IData)(vlSelfRef.__Vlvbound_h74d7c13e__0)) 
                                                    << 0x14U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_utof_TOP____024unit(vlSelfRef.__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xbU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][9U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][8U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_utof__10__result, vlSelfRef.__Vtask_dpi_utof__10__fflags);
    vlSelfRef.__PVT__g_fcvt__DOT__result_utof[8U] = (IData)(vlSelfRef.__Vtask_dpi_utof__10__result);
    vlSelfRef.__PVT__g_fcvt__DOT__result_utof[9U] = (IData)(
                                                            (vlSelfRef.__Vtask_dpi_utof__10__result 
                                                             >> 0x20U));
    vlSelfRef.__Vlvbound_hbf0332af__0 = vlSelfRef.__Vtask_dpi_utof__10__fflags;
    vlSelfRef.__PVT__g_fcvt__DOT__fflags_utof = ((0xfffe0fffffULL 
                                                  & vlSelfRef.__PVT__g_fcvt__DOT__fflags_utof) 
                                                 | ((QData)((IData)(vlSelfRef.__Vlvbound_hbf0332af__0)) 
                                                    << 0x14U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_ftoi_TOP____024unit(vlSelfRef.__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xbU)), 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][9U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][8U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_ftoi__11__result, vlSelfRef.__Vtask_dpi_ftoi__11__fflags);
    vlSelfRef.__PVT__g_fcvt__DOT__result_ftoi[8U] = (IData)(vlSelfRef.__Vtask_dpi_ftoi__11__result);
    vlSelfRef.__PVT__g_fcvt__DOT__result_ftoi[9U] = (IData)(
                                                            (vlSelfRef.__Vtask_dpi_ftoi__11__result 
                                                             >> 0x20U));
    vlSelfRef.__Vlvbound_hd091cd26__0 = vlSelfRef.__Vtask_dpi_ftoi__11__fflags;
    vlSelfRef.__PVT__g_fcvt__DOT__fflags_ftoi = ((0xfffe0fffffULL 
                                                  & vlSelfRef.__PVT__g_fcvt__DOT__fflags_ftoi) 
                                                 | ((QData)((IData)(vlSelfRef.__Vlvbound_hd091cd26__0)) 
                                                    << 0x14U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_ftou_TOP____024unit(vlSelfRef.__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xbU)), 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][9U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][8U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_ftou__12__result, vlSelfRef.__Vtask_dpi_ftou__12__fflags);
    vlSelfRef.__PVT__g_fcvt__DOT__result_ftou[8U] = (IData)(vlSelfRef.__Vtask_dpi_ftou__12__result);
    vlSelfRef.__PVT__g_fcvt__DOT__result_ftou[9U] = (IData)(
                                                            (vlSelfRef.__Vtask_dpi_ftou__12__result 
                                                             >> 0x20U));
    vlSelfRef.__Vlvbound_h954e09c9__0 = vlSelfRef.__Vtask_dpi_ftou__12__fflags;
    vlSelfRef.__PVT__g_fcvt__DOT__fflags_ftou = ((0xfffe0fffffULL 
                                                  & vlSelfRef.__PVT__g_fcvt__DOT__fflags_ftou) 
                                                 | ((QData)((IData)(vlSelfRef.__Vlvbound_h954e09c9__0)) 
                                                    << 0x14U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSelfRef.__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                ((0x400U 
                                                                  & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U])
                                                                  ? 1U
                                                                  : 0U), 
                                                                ((0x400U 
                                                                  & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U])
                                                                  ? 0U
                                                                  : 1U), 
                                                                (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][9U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][8U]))), vlSelfRef.__Vtask_dpi_f2f__13__result);
    vlSelfRef.__PVT__g_fcvt__DOT__result_f2f[8U] = (IData)(vlSelfRef.__Vtask_dpi_f2f__13__result);
    vlSelfRef.__PVT__g_fcvt__DOT__result_f2f[9U] = (IData)(
                                                           (vlSelfRef.__Vtask_dpi_f2f__13__result 
                                                            >> 0x20U));
    if (vlSelfRef.__PVT__is_itof) {
        vlSelfRef.__PVT__g_fcvt__DOT__result_fcvt[4U] 
            = vlSelfRef.__PVT__g_fcvt__DOT__result_itof[8U];
        vlSelfRef.__Vlvbound_h63f18bdd__0 = (0x1fU 
                                             & (IData)(
                                                       (vlSelfRef.__PVT__g_fcvt__DOT__fflags_itof 
                                                        >> 0x14U)));
    } else if (vlSelfRef.__PVT__is_utof) {
        vlSelfRef.__PVT__g_fcvt__DOT__result_fcvt[4U] 
            = vlSelfRef.__PVT__g_fcvt__DOT__result_utof[8U];
        vlSelfRef.__Vlvbound_h63f18bdd__0 = (0x1fU 
                                             & (IData)(
                                                       (vlSelfRef.__PVT__g_fcvt__DOT__fflags_utof 
                                                        >> 0x14U)));
    } else if (vlSelfRef.__PVT__is_ftoi) {
        vlSelfRef.__PVT__g_fcvt__DOT__result_fcvt[4U] 
            = vlSelfRef.__PVT__g_fcvt__DOT__result_ftoi[8U];
        vlSelfRef.__Vlvbound_h63f18bdd__0 = (0x1fU 
                                             & (IData)(
                                                       (vlSelfRef.__PVT__g_fcvt__DOT__fflags_ftoi 
                                                        >> 0x14U)));
    } else if (vlSelfRef.__PVT__is_ftou) {
        vlSelfRef.__PVT__g_fcvt__DOT__result_fcvt[4U] 
            = vlSelfRef.__PVT__g_fcvt__DOT__result_ftou[8U];
        vlSelfRef.__Vlvbound_h63f18bdd__0 = (0x1fU 
                                             & (IData)(
                                                       (vlSelfRef.__PVT__g_fcvt__DOT__fflags_ftou 
                                                        >> 0x14U)));
    } else {
        vlSelfRef.__PVT__g_fcvt__DOT__result_fcvt[4U] 
            = ((IData)(vlSelfRef.__PVT__is_f2f) ? vlSelfRef.__PVT__g_fcvt__DOT__result_f2f[8U]
                : 0U);
        vlSelfRef.__Vlvbound_h63f18bdd__0 = (0x1fU 
                                             & 0U);
    }
    vlSelfRef.__PVT__g_fcvt__DOT__fflags_fcvt = ((0xfffe0fffffULL 
                                                  & vlSelfRef.__PVT__g_fcvt__DOT__fflags_fcvt) 
                                                 | ((QData)((IData)(vlSelfRef.__Vlvbound_h63f18bdd__0)) 
                                                    << 0x14U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_itof_TOP____024unit(vlSelfRef.__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xbU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xbU])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xaU]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_itof__9__result, vlSelfRef.__Vtask_dpi_itof__9__fflags);
    vlSelfRef.__PVT__g_fcvt__DOT__result_itof[0xaU] 
        = (IData)(vlSelfRef.__Vtask_dpi_itof__9__result);
    vlSelfRef.__PVT__g_fcvt__DOT__result_itof[0xbU] 
        = (IData)((vlSelfRef.__Vtask_dpi_itof__9__result 
                   >> 0x20U));
    vlSelfRef.__Vlvbound_h74d7c13e__0 = vlSelfRef.__Vtask_dpi_itof__9__fflags;
    vlSelfRef.__PVT__g_fcvt__DOT__fflags_itof = ((0xffc1ffffffULL 
                                                  & vlSelfRef.__PVT__g_fcvt__DOT__fflags_itof) 
                                                 | ((QData)((IData)(vlSelfRef.__Vlvbound_h74d7c13e__0)) 
                                                    << 0x19U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_utof_TOP____024unit(vlSelfRef.__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xbU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xbU])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xaU]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_utof__10__result, vlSelfRef.__Vtask_dpi_utof__10__fflags);
    vlSelfRef.__PVT__g_fcvt__DOT__result_utof[0xaU] 
        = (IData)(vlSelfRef.__Vtask_dpi_utof__10__result);
    vlSelfRef.__PVT__g_fcvt__DOT__result_utof[0xbU] 
        = (IData)((vlSelfRef.__Vtask_dpi_utof__10__result 
                   >> 0x20U));
    vlSelfRef.__Vlvbound_hbf0332af__0 = vlSelfRef.__Vtask_dpi_utof__10__fflags;
    vlSelfRef.__PVT__g_fcvt__DOT__fflags_utof = ((0xffc1ffffffULL 
                                                  & vlSelfRef.__PVT__g_fcvt__DOT__fflags_utof) 
                                                 | ((QData)((IData)(vlSelfRef.__Vlvbound_hbf0332af__0)) 
                                                    << 0x19U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_ftoi_TOP____024unit(vlSelfRef.__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xbU)), 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xbU])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xaU]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_ftoi__11__result, vlSelfRef.__Vtask_dpi_ftoi__11__fflags);
    vlSelfRef.__PVT__g_fcvt__DOT__result_ftoi[0xaU] 
        = (IData)(vlSelfRef.__Vtask_dpi_ftoi__11__result);
    vlSelfRef.__PVT__g_fcvt__DOT__result_ftoi[0xbU] 
        = (IData)((vlSelfRef.__Vtask_dpi_ftoi__11__result 
                   >> 0x20U));
    vlSelfRef.__Vlvbound_hd091cd26__0 = vlSelfRef.__Vtask_dpi_ftoi__11__fflags;
    vlSelfRef.__PVT__g_fcvt__DOT__fflags_ftoi = ((0xffc1ffffffULL 
                                                  & vlSelfRef.__PVT__g_fcvt__DOT__fflags_ftoi) 
                                                 | ((QData)((IData)(vlSelfRef.__Vlvbound_hd091cd26__0)) 
                                                    << 0x19U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_ftou_TOP____024unit(vlSelfRef.__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xbU)), 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xbU])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xaU]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_ftou__12__result, vlSelfRef.__Vtask_dpi_ftou__12__fflags);
    vlSelfRef.__PVT__g_fcvt__DOT__result_ftou[0xaU] 
        = (IData)(vlSelfRef.__Vtask_dpi_ftou__12__result);
    vlSelfRef.__PVT__g_fcvt__DOT__result_ftou[0xbU] 
        = (IData)((vlSelfRef.__Vtask_dpi_ftou__12__result 
                   >> 0x20U));
    vlSelfRef.__Vlvbound_h954e09c9__0 = vlSelfRef.__Vtask_dpi_ftou__12__fflags;
    vlSelfRef.__PVT__g_fcvt__DOT__fflags_ftou = ((0xffc1ffffffULL 
                                                  & vlSelfRef.__PVT__g_fcvt__DOT__fflags_ftou) 
                                                 | ((QData)((IData)(vlSelfRef.__Vlvbound_h954e09c9__0)) 
                                                    << 0x19U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSelfRef.__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                ((0x400U 
                                                                  & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U])
                                                                  ? 1U
                                                                  : 0U), 
                                                                ((0x400U 
                                                                  & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U])
                                                                  ? 0U
                                                                  : 1U), 
                                                                (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xbU])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xaU]))), vlSelfRef.__Vtask_dpi_f2f__13__result);
    vlSelfRef.__PVT__g_fcvt__DOT__result_f2f[0xaU] 
        = (IData)(vlSelfRef.__Vtask_dpi_f2f__13__result);
    vlSelfRef.__PVT__g_fcvt__DOT__result_f2f[0xbU] 
        = (IData)((vlSelfRef.__Vtask_dpi_f2f__13__result 
                   >> 0x20U));
    if (vlSelfRef.__PVT__is_itof) {
        vlSelfRef.__PVT__g_fcvt__DOT__result_fcvt[5U] 
            = vlSelfRef.__PVT__g_fcvt__DOT__result_itof[0xaU];
        vlSelfRef.__Vlvbound_h63f18bdd__0 = (0x1fU 
                                             & (IData)(
                                                       (vlSelfRef.__PVT__g_fcvt__DOT__fflags_itof 
                                                        >> 0x19U)));
    } else if (vlSelfRef.__PVT__is_utof) {
        vlSelfRef.__PVT__g_fcvt__DOT__result_fcvt[5U] 
            = vlSelfRef.__PVT__g_fcvt__DOT__result_utof[0xaU];
        vlSelfRef.__Vlvbound_h63f18bdd__0 = (0x1fU 
                                             & (IData)(
                                                       (vlSelfRef.__PVT__g_fcvt__DOT__fflags_utof 
                                                        >> 0x19U)));
    } else if (vlSelfRef.__PVT__is_ftoi) {
        vlSelfRef.__PVT__g_fcvt__DOT__result_fcvt[5U] 
            = vlSelfRef.__PVT__g_fcvt__DOT__result_ftoi[0xaU];
        vlSelfRef.__Vlvbound_h63f18bdd__0 = (0x1fU 
                                             & (IData)(
                                                       (vlSelfRef.__PVT__g_fcvt__DOT__fflags_ftoi 
                                                        >> 0x19U)));
    } else if (vlSelfRef.__PVT__is_ftou) {
        vlSelfRef.__PVT__g_fcvt__DOT__result_fcvt[5U] 
            = vlSelfRef.__PVT__g_fcvt__DOT__result_ftou[0xaU];
        vlSelfRef.__Vlvbound_h63f18bdd__0 = (0x1fU 
                                             & (IData)(
                                                       (vlSelfRef.__PVT__g_fcvt__DOT__fflags_ftou 
                                                        >> 0x19U)));
    } else {
        vlSelfRef.__PVT__g_fcvt__DOT__result_fcvt[5U] 
            = ((IData)(vlSelfRef.__PVT__is_f2f) ? vlSelfRef.__PVT__g_fcvt__DOT__result_f2f[0xaU]
                : 0U);
        vlSelfRef.__Vlvbound_h63f18bdd__0 = (0x1fU 
                                             & 0U);
    }
    vlSelfRef.__PVT__g_fcvt__DOT__fflags_fcvt = ((0xffc1ffffffULL 
                                                  & vlSelfRef.__PVT__g_fcvt__DOT__fflags_fcvt) 
                                                 | ((QData)((IData)(vlSelfRef.__Vlvbound_h63f18bdd__0)) 
                                                    << 0x19U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_itof_TOP____024unit(vlSelfRef.__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xbU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xdU])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xcU]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_itof__9__result, vlSelfRef.__Vtask_dpi_itof__9__fflags);
    vlSelfRef.__PVT__g_fcvt__DOT__result_itof[0xcU] 
        = (IData)(vlSelfRef.__Vtask_dpi_itof__9__result);
    vlSelfRef.__PVT__g_fcvt__DOT__result_itof[0xdU] 
        = (IData)((vlSelfRef.__Vtask_dpi_itof__9__result 
                   >> 0x20U));
    vlSelfRef.__Vlvbound_h74d7c13e__0 = vlSelfRef.__Vtask_dpi_itof__9__fflags;
    vlSelfRef.__PVT__g_fcvt__DOT__fflags_itof = ((0xf83fffffffULL 
                                                  & vlSelfRef.__PVT__g_fcvt__DOT__fflags_itof) 
                                                 | ((QData)((IData)(vlSelfRef.__Vlvbound_h74d7c13e__0)) 
                                                    << 0x1eU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_utof_TOP____024unit(vlSelfRef.__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xbU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xdU])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xcU]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_utof__10__result, vlSelfRef.__Vtask_dpi_utof__10__fflags);
    vlSelfRef.__PVT__g_fcvt__DOT__result_utof[0xcU] 
        = (IData)(vlSelfRef.__Vtask_dpi_utof__10__result);
    vlSelfRef.__PVT__g_fcvt__DOT__result_utof[0xdU] 
        = (IData)((vlSelfRef.__Vtask_dpi_utof__10__result 
                   >> 0x20U));
    vlSelfRef.__Vlvbound_hbf0332af__0 = vlSelfRef.__Vtask_dpi_utof__10__fflags;
    vlSelfRef.__PVT__g_fcvt__DOT__fflags_utof = ((0xf83fffffffULL 
                                                  & vlSelfRef.__PVT__g_fcvt__DOT__fflags_utof) 
                                                 | ((QData)((IData)(vlSelfRef.__Vlvbound_hbf0332af__0)) 
                                                    << 0x1eU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_ftoi_TOP____024unit(vlSelfRef.__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xbU)), 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xdU])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xcU]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_ftoi__11__result, vlSelfRef.__Vtask_dpi_ftoi__11__fflags);
    vlSelfRef.__PVT__g_fcvt__DOT__result_ftoi[0xcU] 
        = (IData)(vlSelfRef.__Vtask_dpi_ftoi__11__result);
    vlSelfRef.__PVT__g_fcvt__DOT__result_ftoi[0xdU] 
        = (IData)((vlSelfRef.__Vtask_dpi_ftoi__11__result 
                   >> 0x20U));
    vlSelfRef.__Vlvbound_hd091cd26__0 = vlSelfRef.__Vtask_dpi_ftoi__11__fflags;
    vlSelfRef.__PVT__g_fcvt__DOT__fflags_ftoi = ((0xf83fffffffULL 
                                                  & vlSelfRef.__PVT__g_fcvt__DOT__fflags_ftoi) 
                                                 | ((QData)((IData)(vlSelfRef.__Vlvbound_hd091cd26__0)) 
                                                    << 0x1eU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_ftou_TOP____024unit(vlSelfRef.__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xbU)), 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xdU])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xcU]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_ftou__12__result, vlSelfRef.__Vtask_dpi_ftou__12__fflags);
    vlSelfRef.__PVT__g_fcvt__DOT__result_ftou[0xcU] 
        = (IData)(vlSelfRef.__Vtask_dpi_ftou__12__result);
    vlSelfRef.__PVT__g_fcvt__DOT__result_ftou[0xdU] 
        = (IData)((vlSelfRef.__Vtask_dpi_ftou__12__result 
                   >> 0x20U));
    vlSelfRef.__Vlvbound_h954e09c9__0 = vlSelfRef.__Vtask_dpi_ftou__12__fflags;
    vlSelfRef.__PVT__g_fcvt__DOT__fflags_ftou = ((0xf83fffffffULL 
                                                  & vlSelfRef.__PVT__g_fcvt__DOT__fflags_ftou) 
                                                 | ((QData)((IData)(vlSelfRef.__Vlvbound_h954e09c9__0)) 
                                                    << 0x1eU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSelfRef.__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                ((0x400U 
                                                                  & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U])
                                                                  ? 1U
                                                                  : 0U), 
                                                                ((0x400U 
                                                                  & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U])
                                                                  ? 0U
                                                                  : 1U), 
                                                                (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xdU])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xcU]))), vlSelfRef.__Vtask_dpi_f2f__13__result);
    vlSelfRef.__PVT__g_fcvt__DOT__result_f2f[0xcU] 
        = (IData)(vlSelfRef.__Vtask_dpi_f2f__13__result);
    vlSelfRef.__PVT__g_fcvt__DOT__result_f2f[0xdU] 
        = (IData)((vlSelfRef.__Vtask_dpi_f2f__13__result 
                   >> 0x20U));
    if (vlSelfRef.__PVT__is_itof) {
        vlSelfRef.__PVT__g_fcvt__DOT__result_fcvt[6U] 
            = vlSelfRef.__PVT__g_fcvt__DOT__result_itof[0xcU];
        vlSelfRef.__Vlvbound_h63f18bdd__0 = (0x1fU 
                                             & (IData)(
                                                       (vlSelfRef.__PVT__g_fcvt__DOT__fflags_itof 
                                                        >> 0x1eU)));
    } else if (vlSelfRef.__PVT__is_utof) {
        vlSelfRef.__PVT__g_fcvt__DOT__result_fcvt[6U] 
            = vlSelfRef.__PVT__g_fcvt__DOT__result_utof[0xcU];
        vlSelfRef.__Vlvbound_h63f18bdd__0 = (0x1fU 
                                             & (IData)(
                                                       (vlSelfRef.__PVT__g_fcvt__DOT__fflags_utof 
                                                        >> 0x1eU)));
    } else if (vlSelfRef.__PVT__is_ftoi) {
        vlSelfRef.__PVT__g_fcvt__DOT__result_fcvt[6U] 
            = vlSelfRef.__PVT__g_fcvt__DOT__result_ftoi[0xcU];
        vlSelfRef.__Vlvbound_h63f18bdd__0 = (0x1fU 
                                             & (IData)(
                                                       (vlSelfRef.__PVT__g_fcvt__DOT__fflags_ftoi 
                                                        >> 0x1eU)));
    } else if (vlSelfRef.__PVT__is_ftou) {
        vlSelfRef.__PVT__g_fcvt__DOT__result_fcvt[6U] 
            = vlSelfRef.__PVT__g_fcvt__DOT__result_ftou[0xcU];
        vlSelfRef.__Vlvbound_h63f18bdd__0 = (0x1fU 
                                             & (IData)(
                                                       (vlSelfRef.__PVT__g_fcvt__DOT__fflags_ftou 
                                                        >> 0x1eU)));
    } else {
        vlSelfRef.__PVT__g_fcvt__DOT__result_fcvt[6U] 
            = ((IData)(vlSelfRef.__PVT__is_f2f) ? vlSelfRef.__PVT__g_fcvt__DOT__result_f2f[0xcU]
                : 0U);
        vlSelfRef.__Vlvbound_h63f18bdd__0 = (0x1fU 
                                             & 0U);
    }
    vlSelfRef.__PVT__g_fcvt__DOT__fflags_fcvt = ((0xf83fffffffULL 
                                                  & vlSelfRef.__PVT__g_fcvt__DOT__fflags_fcvt) 
                                                 | ((QData)((IData)(vlSelfRef.__Vlvbound_h63f18bdd__0)) 
                                                    << 0x1eU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_itof_TOP____024unit(vlSelfRef.__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xbU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xfU])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xeU]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_itof__9__result, vlSelfRef.__Vtask_dpi_itof__9__fflags);
    vlSelfRef.__PVT__g_fcvt__DOT__result_itof[0xeU] 
        = (IData)(vlSelfRef.__Vtask_dpi_itof__9__result);
    vlSelfRef.__PVT__g_fcvt__DOT__result_itof[0xfU] 
        = (IData)((vlSelfRef.__Vtask_dpi_itof__9__result 
                   >> 0x20U));
    vlSelfRef.__Vlvbound_h74d7c13e__0 = vlSelfRef.__Vtask_dpi_itof__9__fflags;
    vlSelfRef.__PVT__g_fcvt__DOT__fflags_itof = ((0x7ffffffffULL 
                                                  & vlSelfRef.__PVT__g_fcvt__DOT__fflags_itof) 
                                                 | ((QData)((IData)(vlSelfRef.__Vlvbound_h74d7c13e__0)) 
                                                    << 0x23U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_utof_TOP____024unit(vlSelfRef.__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xbU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xfU])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xeU]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_utof__10__result, vlSelfRef.__Vtask_dpi_utof__10__fflags);
    vlSelfRef.__PVT__g_fcvt__DOT__result_utof[0xeU] 
        = (IData)(vlSelfRef.__Vtask_dpi_utof__10__result);
    vlSelfRef.__PVT__g_fcvt__DOT__result_utof[0xfU] 
        = (IData)((vlSelfRef.__Vtask_dpi_utof__10__result 
                   >> 0x20U));
    vlSelfRef.__Vlvbound_hbf0332af__0 = vlSelfRef.__Vtask_dpi_utof__10__fflags;
    vlSelfRef.__PVT__g_fcvt__DOT__fflags_utof = ((0x7ffffffffULL 
                                                  & vlSelfRef.__PVT__g_fcvt__DOT__fflags_utof) 
                                                 | ((QData)((IData)(vlSelfRef.__Vlvbound_hbf0332af__0)) 
                                                    << 0x23U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_ftoi_TOP____024unit(vlSelfRef.__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xbU)), 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xfU])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xeU]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_ftoi__11__result, vlSelfRef.__Vtask_dpi_ftoi__11__fflags);
    vlSelfRef.__PVT__g_fcvt__DOT__result_ftoi[0xeU] 
        = (IData)(vlSelfRef.__Vtask_dpi_ftoi__11__result);
    vlSelfRef.__PVT__g_fcvt__DOT__result_ftoi[0xfU] 
        = (IData)((vlSelfRef.__Vtask_dpi_ftoi__11__result 
                   >> 0x20U));
    vlSelfRef.__Vlvbound_hd091cd26__0 = vlSelfRef.__Vtask_dpi_ftoi__11__fflags;
    vlSelfRef.__PVT__g_fcvt__DOT__fflags_ftoi = ((0x7ffffffffULL 
                                                  & vlSelfRef.__PVT__g_fcvt__DOT__fflags_ftoi) 
                                                 | ((QData)((IData)(vlSelfRef.__Vlvbound_hd091cd26__0)) 
                                                    << 0x23U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_ftou_TOP____024unit(vlSelfRef.__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xbU)), 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xfU])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xeU]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_ftou__12__result, vlSelfRef.__Vtask_dpi_ftou__12__fflags);
    vlSelfRef.__PVT__g_fcvt__DOT__result_ftou[0xeU] 
        = (IData)(vlSelfRef.__Vtask_dpi_ftou__12__result);
    vlSelfRef.__PVT__g_fcvt__DOT__result_ftou[0xfU] 
        = (IData)((vlSelfRef.__Vtask_dpi_ftou__12__result 
                   >> 0x20U));
    vlSelfRef.__Vlvbound_h954e09c9__0 = vlSelfRef.__Vtask_dpi_ftou__12__fflags;
    vlSelfRef.__PVT__g_fcvt__DOT__fflags_ftou = ((0x7ffffffffULL 
                                                  & vlSelfRef.__PVT__g_fcvt__DOT__fflags_ftou) 
                                                 | ((QData)((IData)(vlSelfRef.__Vlvbound_h954e09c9__0)) 
                                                    << 0x23U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSelfRef.__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                ((0x400U 
                                                                  & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U])
                                                                  ? 1U
                                                                  : 0U), 
                                                                ((0x400U 
                                                                  & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U])
                                                                  ? 0U
                                                                  : 1U), 
                                                                (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xfU])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xeU]))), vlSelfRef.__Vtask_dpi_f2f__13__result);
    vlSelfRef.__PVT__g_fcvt__DOT__result_f2f[0xeU] 
        = (IData)(vlSelfRef.__Vtask_dpi_f2f__13__result);
    vlSelfRef.__PVT__g_fcvt__DOT__result_f2f[0xfU] 
        = (IData)((vlSelfRef.__Vtask_dpi_f2f__13__result 
                   >> 0x20U));
    if (vlSelfRef.__PVT__is_itof) {
        vlSelfRef.__PVT__g_fcvt__DOT__result_fcvt[7U] 
            = vlSelfRef.__PVT__g_fcvt__DOT__result_itof[0xeU];
        vlSelfRef.__Vlvbound_h63f18bdd__0 = (0x1fU 
                                             & (IData)(
                                                       (vlSelfRef.__PVT__g_fcvt__DOT__fflags_itof 
                                                        >> 0x23U)));
    } else if (vlSelfRef.__PVT__is_utof) {
        vlSelfRef.__PVT__g_fcvt__DOT__result_fcvt[7U] 
            = vlSelfRef.__PVT__g_fcvt__DOT__result_utof[0xeU];
        vlSelfRef.__Vlvbound_h63f18bdd__0 = (0x1fU 
                                             & (IData)(
                                                       (vlSelfRef.__PVT__g_fcvt__DOT__fflags_utof 
                                                        >> 0x23U)));
    } else if (vlSelfRef.__PVT__is_ftoi) {
        vlSelfRef.__PVT__g_fcvt__DOT__result_fcvt[7U] 
            = vlSelfRef.__PVT__g_fcvt__DOT__result_ftoi[0xeU];
        vlSelfRef.__Vlvbound_h63f18bdd__0 = (0x1fU 
                                             & (IData)(
                                                       (vlSelfRef.__PVT__g_fcvt__DOT__fflags_ftoi 
                                                        >> 0x23U)));
    } else if (vlSelfRef.__PVT__is_ftou) {
        vlSelfRef.__PVT__g_fcvt__DOT__result_fcvt[7U] 
            = vlSelfRef.__PVT__g_fcvt__DOT__result_ftou[0xeU];
        vlSelfRef.__Vlvbound_h63f18bdd__0 = (0x1fU 
                                             & (IData)(
                                                       (vlSelfRef.__PVT__g_fcvt__DOT__fflags_ftou 
                                                        >> 0x23U)));
    } else {
        vlSelfRef.__PVT__g_fcvt__DOT__result_fcvt[7U] 
            = ((IData)(vlSelfRef.__PVT__is_f2f) ? vlSelfRef.__PVT__g_fcvt__DOT__result_f2f[0xeU]
                : 0U);
        vlSelfRef.__Vlvbound_h63f18bdd__0 = (0x1fU 
                                             & 0U);
    }
    vlSelfRef.__PVT__g_fcvt__DOT__fflags_fcvt = ((0x7ffffffffULL 
                                                  & vlSelfRef.__PVT__g_fcvt__DOT__fflags_fcvt) 
                                                 | ((QData)((IData)(vlSelfRef.__Vlvbound_h63f18bdd__0)) 
                                                    << 0x23U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fadd_TOP____024unit(vlSelfRef.__PVT__g_fma__DOT__fma_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_fadd__0__result, vlSelfRef.__Vtask_dpi_fadd__0__fflags);
    vlSelfRef.__PVT__g_fma__DOT__result_fadd[0U] = (IData)(vlSelfRef.__Vtask_dpi_fadd__0__result);
    vlSelfRef.__PVT__g_fma__DOT__result_fadd[1U] = (IData)(
                                                           (vlSelfRef.__Vtask_dpi_fadd__0__result 
                                                            >> 0x20U));
    vlSelfRef.__Vlvbound_h0a58540f__0 = vlSelfRef.__Vtask_dpi_fadd__0__fflags;
    vlSelfRef.__PVT__g_fma__DOT__fflags_fadd = ((0xffffffffe0ULL 
                                                 & vlSelfRef.__PVT__g_fma__DOT__fflags_fadd) 
                                                | (IData)((IData)(vlSelfRef.__Vlvbound_h0a58540f__0)));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsub_TOP____024unit(vlSelfRef.__PVT__g_fma__DOT__fma_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_fsub__1__result, vlSelfRef.__Vtask_dpi_fsub__1__fflags);
    vlSelfRef.__PVT__g_fma__DOT__result_fsub[0U] = (IData)(vlSelfRef.__Vtask_dpi_fsub__1__result);
    vlSelfRef.__PVT__g_fma__DOT__result_fsub[1U] = (IData)(
                                                           (vlSelfRef.__Vtask_dpi_fsub__1__result 
                                                            >> 0x20U));
    vlSelfRef.__Vlvbound_he8b3371d__0 = vlSelfRef.__Vtask_dpi_fsub__1__fflags;
    vlSelfRef.__PVT__g_fma__DOT__fflags_fsub = ((0xffffffffe0ULL 
                                                 & vlSelfRef.__PVT__g_fma__DOT__fflags_fsub) 
                                                | (IData)((IData)(vlSelfRef.__Vlvbound_he8b3371d__0)));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmul_TOP____024unit(vlSelfRef.__PVT__g_fma__DOT__fma_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_fmul__2__result, vlSelfRef.__Vtask_dpi_fmul__2__fflags);
    vlSelfRef.__PVT__g_fma__DOT__result_fmul[0U] = (IData)(vlSelfRef.__Vtask_dpi_fmul__2__result);
    vlSelfRef.__PVT__g_fma__DOT__result_fmul[1U] = (IData)(
                                                           (vlSelfRef.__Vtask_dpi_fmul__2__result 
                                                            >> 0x20U));
    vlSelfRef.__Vlvbound_h58dd0ee6__0 = vlSelfRef.__Vtask_dpi_fmul__2__fflags;
    vlSelfRef.__PVT__g_fma__DOT__fflags_fmul = ((0xffffffffe0ULL 
                                                 & vlSelfRef.__PVT__g_fma__DOT__fflags_fmul) 
                                                | (IData)((IData)(vlSelfRef.__Vlvbound_h58dd0ee6__0)));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmadd_TOP____024unit(vlSelfRef.__PVT__g_fma__DOT__fma_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                      >> 0xaU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][1U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0U]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][1U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0U]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [2U][1U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [2U][0U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_fmadd__3__result, vlSelfRef.__Vtask_dpi_fmadd__3__fflags);
    vlSelfRef.__PVT__g_fma__DOT__result_fmadd[0U] = (IData)(vlSelfRef.__Vtask_dpi_fmadd__3__result);
    vlSelfRef.__PVT__g_fma__DOT__result_fmadd[1U] = (IData)(
                                                            (vlSelfRef.__Vtask_dpi_fmadd__3__result 
                                                             >> 0x20U));
    vlSelfRef.__Vlvbound_h8e4774f5__0 = vlSelfRef.__Vtask_dpi_fmadd__3__fflags;
    vlSelfRef.__PVT__g_fma__DOT__fflags_fmadd = ((0xffffffffe0ULL 
                                                  & vlSelfRef.__PVT__g_fma__DOT__fflags_fmadd) 
                                                 | (IData)((IData)(vlSelfRef.__Vlvbound_h8e4774f5__0)));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmsub_TOP____024unit(vlSelfRef.__PVT__g_fma__DOT__fma_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                      >> 0xaU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][1U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0U]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][1U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0U]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [2U][1U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [2U][0U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_fmsub__4__result, vlSelfRef.__Vtask_dpi_fmsub__4__fflags);
    vlSelfRef.__PVT__g_fma__DOT__result_fmsub[0U] = (IData)(vlSelfRef.__Vtask_dpi_fmsub__4__result);
    vlSelfRef.__PVT__g_fma__DOT__result_fmsub[1U] = (IData)(
                                                            (vlSelfRef.__Vtask_dpi_fmsub__4__result 
                                                             >> 0x20U));
    vlSelfRef.__Vlvbound_h9e108cc1__0 = vlSelfRef.__Vtask_dpi_fmsub__4__fflags;
    vlSelfRef.__PVT__g_fma__DOT__fflags_fmsub = ((0xffffffffe0ULL 
                                                  & vlSelfRef.__PVT__g_fma__DOT__fflags_fmsub) 
                                                 | (IData)((IData)(vlSelfRef.__Vlvbound_h9e108cc1__0)));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fnmadd_TOP____024unit(vlSelfRef.__PVT__g_fma__DOT__fma_fire, 
                                                                   (1U 
                                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                       >> 0xaU)), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][1U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][1U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [2U][1U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [2U][0U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_fnmadd__5__result, vlSelfRef.__Vtask_dpi_fnmadd__5__fflags);
    vlSelfRef.__PVT__g_fma__DOT__result_fnmadd[0U] 
        = (IData)(vlSelfRef.__Vtask_dpi_fnmadd__5__result);
    vlSelfRef.__PVT__g_fma__DOT__result_fnmadd[1U] 
        = (IData)((vlSelfRef.__Vtask_dpi_fnmadd__5__result 
                   >> 0x20U));
    vlSelfRef.__Vlvbound_h00b49a27__0 = vlSelfRef.__Vtask_dpi_fnmadd__5__fflags;
    vlSelfRef.__PVT__g_fma__DOT__fflags_fnmadd = ((0xffffffffe0ULL 
                                                   & vlSelfRef.__PVT__g_fma__DOT__fflags_fnmadd) 
                                                  | (IData)((IData)(vlSelfRef.__Vlvbound_h00b49a27__0)));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fnmsub_TOP____024unit(vlSelfRef.__PVT__g_fma__DOT__fma_fire, 
                                                                   (1U 
                                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                       >> 0xaU)), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][1U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][1U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [2U][1U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [2U][0U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_fnmsub__6__result, vlSelfRef.__Vtask_dpi_fnmsub__6__fflags);
    vlSelfRef.__PVT__g_fma__DOT__result_fnmsub[0U] 
        = (IData)(vlSelfRef.__Vtask_dpi_fnmsub__6__result);
    vlSelfRef.__PVT__g_fma__DOT__result_fnmsub[1U] 
        = (IData)((vlSelfRef.__Vtask_dpi_fnmsub__6__result 
                   >> 0x20U));
    vlSelfRef.__Vlvbound_hb15d44e8__0 = vlSelfRef.__Vtask_dpi_fnmsub__6__fflags;
    vlSelfRef.__PVT__g_fma__DOT__fflags_fnmsub = ((0xffffffffe0ULL 
                                                   & vlSelfRef.__PVT__g_fma__DOT__fflags_fnmsub) 
                                                  | (IData)((IData)(vlSelfRef.__Vlvbound_hb15d44e8__0)));
    if (vlSelfRef.__PVT__is_fadd) {
        vlSelfRef.__PVT__g_fma__DOT__result_fma[0U] 
            = vlSelfRef.__PVT__g_fma__DOT__result_fadd[0U];
        vlSelfRef.__Vlvbound_hda7898db__0 = (0x1fU 
                                             & (IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fadd));
    } else if (vlSelfRef.__PVT__is_fsub) {
        vlSelfRef.__PVT__g_fma__DOT__result_fma[0U] 
            = vlSelfRef.__PVT__g_fma__DOT__result_fsub[0U];
        vlSelfRef.__Vlvbound_hda7898db__0 = (0x1fU 
                                             & (IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fsub));
    } else if (vlSelfRef.__PVT__is_fmul) {
        vlSelfRef.__PVT__g_fma__DOT__result_fma[0U] 
            = vlSelfRef.__PVT__g_fma__DOT__result_fmul[0U];
        vlSelfRef.__Vlvbound_hda7898db__0 = (0x1fU 
                                             & (IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fmul));
    } else if (vlSelfRef.__PVT__is_fmadd) {
        vlSelfRef.__PVT__g_fma__DOT__result_fma[0U] 
            = vlSelfRef.__PVT__g_fma__DOT__result_fmadd[0U];
        vlSelfRef.__Vlvbound_hda7898db__0 = (0x1fU 
                                             & (IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fmadd));
    } else if (vlSelfRef.__PVT__is_fmsub) {
        vlSelfRef.__PVT__g_fma__DOT__result_fma[0U] 
            = vlSelfRef.__PVT__g_fma__DOT__result_fmsub[0U];
        vlSelfRef.__Vlvbound_hda7898db__0 = (0x1fU 
                                             & (IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fmsub));
    } else if (vlSelfRef.__PVT__is_fnmadd) {
        vlSelfRef.__PVT__g_fma__DOT__result_fma[0U] 
            = vlSelfRef.__PVT__g_fma__DOT__result_fnmadd[0U];
        vlSelfRef.__Vlvbound_hda7898db__0 = (0x1fU 
                                             & (IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fnmadd));
    } else if (vlSelfRef.__PVT__is_fnmsub) {
        vlSelfRef.__PVT__g_fma__DOT__result_fma[0U] 
            = vlSelfRef.__PVT__g_fma__DOT__result_fnmsub[0U];
        vlSelfRef.__Vlvbound_hda7898db__0 = (0x1fU 
                                             & (IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fnmsub));
    } else {
        vlSelfRef.__PVT__g_fma__DOT__result_fma[0U] = 0U;
        vlSelfRef.__Vlvbound_hda7898db__0 = (0x1fU 
                                             & 0U);
    }
    vlSelfRef.__PVT__g_fma__DOT__fflags_fma = ((0xffffffffe0ULL 
                                                & vlSelfRef.__PVT__g_fma__DOT__fflags_fma) 
                                               | (IData)((IData)(vlSelfRef.__Vlvbound_hda7898db__0)));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fadd_TOP____024unit(vlSelfRef.__PVT__g_fma__DOT__fma_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][3U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][2U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][3U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][2U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_fadd__0__result, vlSelfRef.__Vtask_dpi_fadd__0__fflags);
    vlSelfRef.__PVT__g_fma__DOT__result_fadd[2U] = (IData)(vlSelfRef.__Vtask_dpi_fadd__0__result);
    vlSelfRef.__PVT__g_fma__DOT__result_fadd[3U] = (IData)(
                                                           (vlSelfRef.__Vtask_dpi_fadd__0__result 
                                                            >> 0x20U));
    vlSelfRef.__Vlvbound_h0a58540f__0 = vlSelfRef.__Vtask_dpi_fadd__0__fflags;
    vlSelfRef.__PVT__g_fma__DOT__fflags_fadd = ((0xfffffffc1fULL 
                                                 & vlSelfRef.__PVT__g_fma__DOT__fflags_fadd) 
                                                | ((QData)((IData)(vlSelfRef.__Vlvbound_h0a58540f__0)) 
                                                   << 5U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsub_TOP____024unit(vlSelfRef.__PVT__g_fma__DOT__fma_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][3U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][2U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][3U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][2U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_fsub__1__result, vlSelfRef.__Vtask_dpi_fsub__1__fflags);
    vlSelfRef.__PVT__g_fma__DOT__result_fsub[2U] = (IData)(vlSelfRef.__Vtask_dpi_fsub__1__result);
    vlSelfRef.__PVT__g_fma__DOT__result_fsub[3U] = (IData)(
                                                           (vlSelfRef.__Vtask_dpi_fsub__1__result 
                                                            >> 0x20U));
    vlSelfRef.__Vlvbound_he8b3371d__0 = vlSelfRef.__Vtask_dpi_fsub__1__fflags;
    vlSelfRef.__PVT__g_fma__DOT__fflags_fsub = ((0xfffffffc1fULL 
                                                 & vlSelfRef.__PVT__g_fma__DOT__fflags_fsub) 
                                                | ((QData)((IData)(vlSelfRef.__Vlvbound_he8b3371d__0)) 
                                                   << 5U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmul_TOP____024unit(vlSelfRef.__PVT__g_fma__DOT__fma_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][3U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][2U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][3U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][2U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_fmul__2__result, vlSelfRef.__Vtask_dpi_fmul__2__fflags);
    vlSelfRef.__PVT__g_fma__DOT__result_fmul[2U] = (IData)(vlSelfRef.__Vtask_dpi_fmul__2__result);
    vlSelfRef.__PVT__g_fma__DOT__result_fmul[3U] = (IData)(
                                                           (vlSelfRef.__Vtask_dpi_fmul__2__result 
                                                            >> 0x20U));
    vlSelfRef.__Vlvbound_h58dd0ee6__0 = vlSelfRef.__Vtask_dpi_fmul__2__fflags;
    vlSelfRef.__PVT__g_fma__DOT__fflags_fmul = ((0xfffffffc1fULL 
                                                 & vlSelfRef.__PVT__g_fma__DOT__fflags_fmul) 
                                                | ((QData)((IData)(vlSelfRef.__Vlvbound_h58dd0ee6__0)) 
                                                   << 5U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmadd_TOP____024unit(vlSelfRef.__PVT__g_fma__DOT__fma_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                      >> 0xaU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][3U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][2U]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][3U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][2U]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [2U][3U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [2U][2U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_fmadd__3__result, vlSelfRef.__Vtask_dpi_fmadd__3__fflags);
    vlSelfRef.__PVT__g_fma__DOT__result_fmadd[2U] = (IData)(vlSelfRef.__Vtask_dpi_fmadd__3__result);
    vlSelfRef.__PVT__g_fma__DOT__result_fmadd[3U] = (IData)(
                                                            (vlSelfRef.__Vtask_dpi_fmadd__3__result 
                                                             >> 0x20U));
    vlSelfRef.__Vlvbound_h8e4774f5__0 = vlSelfRef.__Vtask_dpi_fmadd__3__fflags;
    vlSelfRef.__PVT__g_fma__DOT__fflags_fmadd = ((0xfffffffc1fULL 
                                                  & vlSelfRef.__PVT__g_fma__DOT__fflags_fmadd) 
                                                 | ((QData)((IData)(vlSelfRef.__Vlvbound_h8e4774f5__0)) 
                                                    << 5U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmsub_TOP____024unit(vlSelfRef.__PVT__g_fma__DOT__fma_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                      >> 0xaU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][3U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][2U]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][3U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][2U]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [2U][3U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [2U][2U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_fmsub__4__result, vlSelfRef.__Vtask_dpi_fmsub__4__fflags);
    vlSelfRef.__PVT__g_fma__DOT__result_fmsub[2U] = (IData)(vlSelfRef.__Vtask_dpi_fmsub__4__result);
    vlSelfRef.__PVT__g_fma__DOT__result_fmsub[3U] = (IData)(
                                                            (vlSelfRef.__Vtask_dpi_fmsub__4__result 
                                                             >> 0x20U));
    vlSelfRef.__Vlvbound_h9e108cc1__0 = vlSelfRef.__Vtask_dpi_fmsub__4__fflags;
    vlSelfRef.__PVT__g_fma__DOT__fflags_fmsub = ((0xfffffffc1fULL 
                                                  & vlSelfRef.__PVT__g_fma__DOT__fflags_fmsub) 
                                                 | ((QData)((IData)(vlSelfRef.__Vlvbound_h9e108cc1__0)) 
                                                    << 5U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fnmadd_TOP____024unit(vlSelfRef.__PVT__g_fma__DOT__fma_fire, 
                                                                   (1U 
                                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                       >> 0xaU)), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][3U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][2U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][3U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][2U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [2U][3U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [2U][2U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_fnmadd__5__result, vlSelfRef.__Vtask_dpi_fnmadd__5__fflags);
    vlSelfRef.__PVT__g_fma__DOT__result_fnmadd[2U] 
        = (IData)(vlSelfRef.__Vtask_dpi_fnmadd__5__result);
    vlSelfRef.__PVT__g_fma__DOT__result_fnmadd[3U] 
        = (IData)((vlSelfRef.__Vtask_dpi_fnmadd__5__result 
                   >> 0x20U));
    vlSelfRef.__Vlvbound_h00b49a27__0 = vlSelfRef.__Vtask_dpi_fnmadd__5__fflags;
    vlSelfRef.__PVT__g_fma__DOT__fflags_fnmadd = ((0xfffffffc1fULL 
                                                   & vlSelfRef.__PVT__g_fma__DOT__fflags_fnmadd) 
                                                  | ((QData)((IData)(vlSelfRef.__Vlvbound_h00b49a27__0)) 
                                                     << 5U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fnmsub_TOP____024unit(vlSelfRef.__PVT__g_fma__DOT__fma_fire, 
                                                                   (1U 
                                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                       >> 0xaU)), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][3U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][2U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][3U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][2U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [2U][3U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [2U][2U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_fnmsub__6__result, vlSelfRef.__Vtask_dpi_fnmsub__6__fflags);
    vlSelfRef.__PVT__g_fma__DOT__result_fnmsub[2U] 
        = (IData)(vlSelfRef.__Vtask_dpi_fnmsub__6__result);
    vlSelfRef.__PVT__g_fma__DOT__result_fnmsub[3U] 
        = (IData)((vlSelfRef.__Vtask_dpi_fnmsub__6__result 
                   >> 0x20U));
    vlSelfRef.__Vlvbound_hb15d44e8__0 = vlSelfRef.__Vtask_dpi_fnmsub__6__fflags;
    vlSelfRef.__PVT__g_fma__DOT__fflags_fnmsub = ((0xfffffffc1fULL 
                                                   & vlSelfRef.__PVT__g_fma__DOT__fflags_fnmsub) 
                                                  | ((QData)((IData)(vlSelfRef.__Vlvbound_hb15d44e8__0)) 
                                                     << 5U));
    if (vlSelfRef.__PVT__is_fadd) {
        vlSelfRef.__PVT__g_fma__DOT__result_fma[1U] 
            = vlSelfRef.__PVT__g_fma__DOT__result_fadd[2U];
        vlSelfRef.__Vlvbound_hda7898db__0 = (0x1fU 
                                             & (IData)(
                                                       (vlSelfRef.__PVT__g_fma__DOT__fflags_fadd 
                                                        >> 5U)));
    } else if (vlSelfRef.__PVT__is_fsub) {
        vlSelfRef.__PVT__g_fma__DOT__result_fma[1U] 
            = vlSelfRef.__PVT__g_fma__DOT__result_fsub[2U];
        vlSelfRef.__Vlvbound_hda7898db__0 = (0x1fU 
                                             & (IData)(
                                                       (vlSelfRef.__PVT__g_fma__DOT__fflags_fsub 
                                                        >> 5U)));
    } else if (vlSelfRef.__PVT__is_fmul) {
        vlSelfRef.__PVT__g_fma__DOT__result_fma[1U] 
            = vlSelfRef.__PVT__g_fma__DOT__result_fmul[2U];
        vlSelfRef.__Vlvbound_hda7898db__0 = (0x1fU 
                                             & (IData)(
                                                       (vlSelfRef.__PVT__g_fma__DOT__fflags_fmul 
                                                        >> 5U)));
    } else if (vlSelfRef.__PVT__is_fmadd) {
        vlSelfRef.__PVT__g_fma__DOT__result_fma[1U] 
            = vlSelfRef.__PVT__g_fma__DOT__result_fmadd[2U];
        vlSelfRef.__Vlvbound_hda7898db__0 = (0x1fU 
                                             & (IData)(
                                                       (vlSelfRef.__PVT__g_fma__DOT__fflags_fmadd 
                                                        >> 5U)));
    } else if (vlSelfRef.__PVT__is_fmsub) {
        vlSelfRef.__PVT__g_fma__DOT__result_fma[1U] 
            = vlSelfRef.__PVT__g_fma__DOT__result_fmsub[2U];
        vlSelfRef.__Vlvbound_hda7898db__0 = (0x1fU 
                                             & (IData)(
                                                       (vlSelfRef.__PVT__g_fma__DOT__fflags_fmsub 
                                                        >> 5U)));
    } else if (vlSelfRef.__PVT__is_fnmadd) {
        vlSelfRef.__PVT__g_fma__DOT__result_fma[1U] 
            = vlSelfRef.__PVT__g_fma__DOT__result_fnmadd[2U];
        vlSelfRef.__Vlvbound_hda7898db__0 = (0x1fU 
                                             & (IData)(
                                                       (vlSelfRef.__PVT__g_fma__DOT__fflags_fnmadd 
                                                        >> 5U)));
    } else if (vlSelfRef.__PVT__is_fnmsub) {
        vlSelfRef.__PVT__g_fma__DOT__result_fma[1U] 
            = vlSelfRef.__PVT__g_fma__DOT__result_fnmsub[2U];
        vlSelfRef.__Vlvbound_hda7898db__0 = (0x1fU 
                                             & (IData)(
                                                       (vlSelfRef.__PVT__g_fma__DOT__fflags_fnmsub 
                                                        >> 5U)));
    } else {
        vlSelfRef.__PVT__g_fma__DOT__result_fma[1U] = 0U;
        vlSelfRef.__Vlvbound_hda7898db__0 = (0x1fU 
                                             & 0U);
    }
    vlSelfRef.__PVT__g_fma__DOT__fflags_fma = ((0xfffffffc1fULL 
                                                & vlSelfRef.__PVT__g_fma__DOT__fflags_fma) 
                                               | ((QData)((IData)(vlSelfRef.__Vlvbound_hda7898db__0)) 
                                                  << 5U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fadd_TOP____024unit(vlSelfRef.__PVT__g_fma__DOT__fma_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][5U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][4U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][5U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][4U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_fadd__0__result, vlSelfRef.__Vtask_dpi_fadd__0__fflags);
    vlSelfRef.__PVT__g_fma__DOT__result_fadd[4U] = (IData)(vlSelfRef.__Vtask_dpi_fadd__0__result);
    vlSelfRef.__PVT__g_fma__DOT__result_fadd[5U] = (IData)(
                                                           (vlSelfRef.__Vtask_dpi_fadd__0__result 
                                                            >> 0x20U));
    vlSelfRef.__Vlvbound_h0a58540f__0 = vlSelfRef.__Vtask_dpi_fadd__0__fflags;
    vlSelfRef.__PVT__g_fma__DOT__fflags_fadd = ((0xffffff83ffULL 
                                                 & vlSelfRef.__PVT__g_fma__DOT__fflags_fadd) 
                                                | ((QData)((IData)(vlSelfRef.__Vlvbound_h0a58540f__0)) 
                                                   << 0xaU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsub_TOP____024unit(vlSelfRef.__PVT__g_fma__DOT__fma_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][5U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][4U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][5U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][4U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_fsub__1__result, vlSelfRef.__Vtask_dpi_fsub__1__fflags);
    vlSelfRef.__PVT__g_fma__DOT__result_fsub[4U] = (IData)(vlSelfRef.__Vtask_dpi_fsub__1__result);
    vlSelfRef.__PVT__g_fma__DOT__result_fsub[5U] = (IData)(
                                                           (vlSelfRef.__Vtask_dpi_fsub__1__result 
                                                            >> 0x20U));
    vlSelfRef.__Vlvbound_he8b3371d__0 = vlSelfRef.__Vtask_dpi_fsub__1__fflags;
    vlSelfRef.__PVT__g_fma__DOT__fflags_fsub = ((0xffffff83ffULL 
                                                 & vlSelfRef.__PVT__g_fma__DOT__fflags_fsub) 
                                                | ((QData)((IData)(vlSelfRef.__Vlvbound_he8b3371d__0)) 
                                                   << 0xaU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmul_TOP____024unit(vlSelfRef.__PVT__g_fma__DOT__fma_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][5U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][4U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][5U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][4U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_fmul__2__result, vlSelfRef.__Vtask_dpi_fmul__2__fflags);
    vlSelfRef.__PVT__g_fma__DOT__result_fmul[4U] = (IData)(vlSelfRef.__Vtask_dpi_fmul__2__result);
    vlSelfRef.__PVT__g_fma__DOT__result_fmul[5U] = (IData)(
                                                           (vlSelfRef.__Vtask_dpi_fmul__2__result 
                                                            >> 0x20U));
    vlSelfRef.__Vlvbound_h58dd0ee6__0 = vlSelfRef.__Vtask_dpi_fmul__2__fflags;
    vlSelfRef.__PVT__g_fma__DOT__fflags_fmul = ((0xffffff83ffULL 
                                                 & vlSelfRef.__PVT__g_fma__DOT__fflags_fmul) 
                                                | ((QData)((IData)(vlSelfRef.__Vlvbound_h58dd0ee6__0)) 
                                                   << 0xaU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmadd_TOP____024unit(vlSelfRef.__PVT__g_fma__DOT__fma_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                      >> 0xaU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][5U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][4U]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][5U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][4U]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [2U][5U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [2U][4U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_fmadd__3__result, vlSelfRef.__Vtask_dpi_fmadd__3__fflags);
    vlSelfRef.__PVT__g_fma__DOT__result_fmadd[4U] = (IData)(vlSelfRef.__Vtask_dpi_fmadd__3__result);
    vlSelfRef.__PVT__g_fma__DOT__result_fmadd[5U] = (IData)(
                                                            (vlSelfRef.__Vtask_dpi_fmadd__3__result 
                                                             >> 0x20U));
    vlSelfRef.__Vlvbound_h8e4774f5__0 = vlSelfRef.__Vtask_dpi_fmadd__3__fflags;
    vlSelfRef.__PVT__g_fma__DOT__fflags_fmadd = ((0xffffff83ffULL 
                                                  & vlSelfRef.__PVT__g_fma__DOT__fflags_fmadd) 
                                                 | ((QData)((IData)(vlSelfRef.__Vlvbound_h8e4774f5__0)) 
                                                    << 0xaU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmsub_TOP____024unit(vlSelfRef.__PVT__g_fma__DOT__fma_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                      >> 0xaU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][5U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][4U]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][5U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][4U]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [2U][5U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [2U][4U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_fmsub__4__result, vlSelfRef.__Vtask_dpi_fmsub__4__fflags);
    vlSelfRef.__PVT__g_fma__DOT__result_fmsub[4U] = (IData)(vlSelfRef.__Vtask_dpi_fmsub__4__result);
    vlSelfRef.__PVT__g_fma__DOT__result_fmsub[5U] = (IData)(
                                                            (vlSelfRef.__Vtask_dpi_fmsub__4__result 
                                                             >> 0x20U));
    vlSelfRef.__Vlvbound_h9e108cc1__0 = vlSelfRef.__Vtask_dpi_fmsub__4__fflags;
    vlSelfRef.__PVT__g_fma__DOT__fflags_fmsub = ((0xffffff83ffULL 
                                                  & vlSelfRef.__PVT__g_fma__DOT__fflags_fmsub) 
                                                 | ((QData)((IData)(vlSelfRef.__Vlvbound_h9e108cc1__0)) 
                                                    << 0xaU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fnmadd_TOP____024unit(vlSelfRef.__PVT__g_fma__DOT__fma_fire, 
                                                                   (1U 
                                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                       >> 0xaU)), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][5U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][4U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][5U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][4U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [2U][5U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [2U][4U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_fnmadd__5__result, vlSelfRef.__Vtask_dpi_fnmadd__5__fflags);
    vlSelfRef.__PVT__g_fma__DOT__result_fnmadd[4U] 
        = (IData)(vlSelfRef.__Vtask_dpi_fnmadd__5__result);
    vlSelfRef.__PVT__g_fma__DOT__result_fnmadd[5U] 
        = (IData)((vlSelfRef.__Vtask_dpi_fnmadd__5__result 
                   >> 0x20U));
    vlSelfRef.__Vlvbound_h00b49a27__0 = vlSelfRef.__Vtask_dpi_fnmadd__5__fflags;
    vlSelfRef.__PVT__g_fma__DOT__fflags_fnmadd = ((0xffffff83ffULL 
                                                   & vlSelfRef.__PVT__g_fma__DOT__fflags_fnmadd) 
                                                  | ((QData)((IData)(vlSelfRef.__Vlvbound_h00b49a27__0)) 
                                                     << 0xaU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fnmsub_TOP____024unit(vlSelfRef.__PVT__g_fma__DOT__fma_fire, 
                                                                   (1U 
                                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                       >> 0xaU)), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][5U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][4U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][5U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][4U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [2U][5U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [2U][4U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_fnmsub__6__result, vlSelfRef.__Vtask_dpi_fnmsub__6__fflags);
    vlSelfRef.__PVT__g_fma__DOT__result_fnmsub[4U] 
        = (IData)(vlSelfRef.__Vtask_dpi_fnmsub__6__result);
    vlSelfRef.__PVT__g_fma__DOT__result_fnmsub[5U] 
        = (IData)((vlSelfRef.__Vtask_dpi_fnmsub__6__result 
                   >> 0x20U));
    vlSelfRef.__Vlvbound_hb15d44e8__0 = vlSelfRef.__Vtask_dpi_fnmsub__6__fflags;
    vlSelfRef.__PVT__g_fma__DOT__fflags_fnmsub = ((0xffffff83ffULL 
                                                   & vlSelfRef.__PVT__g_fma__DOT__fflags_fnmsub) 
                                                  | ((QData)((IData)(vlSelfRef.__Vlvbound_hb15d44e8__0)) 
                                                     << 0xaU));
    if (vlSelfRef.__PVT__is_fadd) {
        vlSelfRef.__PVT__g_fma__DOT__result_fma[2U] 
            = vlSelfRef.__PVT__g_fma__DOT__result_fadd[4U];
        vlSelfRef.__Vlvbound_hda7898db__0 = (0x1fU 
                                             & (IData)(
                                                       (vlSelfRef.__PVT__g_fma__DOT__fflags_fadd 
                                                        >> 0xaU)));
    } else if (vlSelfRef.__PVT__is_fsub) {
        vlSelfRef.__PVT__g_fma__DOT__result_fma[2U] 
            = vlSelfRef.__PVT__g_fma__DOT__result_fsub[4U];
        vlSelfRef.__Vlvbound_hda7898db__0 = (0x1fU 
                                             & (IData)(
                                                       (vlSelfRef.__PVT__g_fma__DOT__fflags_fsub 
                                                        >> 0xaU)));
    } else if (vlSelfRef.__PVT__is_fmul) {
        vlSelfRef.__PVT__g_fma__DOT__result_fma[2U] 
            = vlSelfRef.__PVT__g_fma__DOT__result_fmul[4U];
        vlSelfRef.__Vlvbound_hda7898db__0 = (0x1fU 
                                             & (IData)(
                                                       (vlSelfRef.__PVT__g_fma__DOT__fflags_fmul 
                                                        >> 0xaU)));
    } else if (vlSelfRef.__PVT__is_fmadd) {
        vlSelfRef.__PVT__g_fma__DOT__result_fma[2U] 
            = vlSelfRef.__PVT__g_fma__DOT__result_fmadd[4U];
        vlSelfRef.__Vlvbound_hda7898db__0 = (0x1fU 
                                             & (IData)(
                                                       (vlSelfRef.__PVT__g_fma__DOT__fflags_fmadd 
                                                        >> 0xaU)));
    } else if (vlSelfRef.__PVT__is_fmsub) {
        vlSelfRef.__PVT__g_fma__DOT__result_fma[2U] 
            = vlSelfRef.__PVT__g_fma__DOT__result_fmsub[4U];
        vlSelfRef.__Vlvbound_hda7898db__0 = (0x1fU 
                                             & (IData)(
                                                       (vlSelfRef.__PVT__g_fma__DOT__fflags_fmsub 
                                                        >> 0xaU)));
    } else if (vlSelfRef.__PVT__is_fnmadd) {
        vlSelfRef.__PVT__g_fma__DOT__result_fma[2U] 
            = vlSelfRef.__PVT__g_fma__DOT__result_fnmadd[4U];
        vlSelfRef.__Vlvbound_hda7898db__0 = (0x1fU 
                                             & (IData)(
                                                       (vlSelfRef.__PVT__g_fma__DOT__fflags_fnmadd 
                                                        >> 0xaU)));
    } else if (vlSelfRef.__PVT__is_fnmsub) {
        vlSelfRef.__PVT__g_fma__DOT__result_fma[2U] 
            = vlSelfRef.__PVT__g_fma__DOT__result_fnmsub[4U];
        vlSelfRef.__Vlvbound_hda7898db__0 = (0x1fU 
                                             & (IData)(
                                                       (vlSelfRef.__PVT__g_fma__DOT__fflags_fnmsub 
                                                        >> 0xaU)));
    } else {
        vlSelfRef.__PVT__g_fma__DOT__result_fma[2U] = 0U;
        vlSelfRef.__Vlvbound_hda7898db__0 = (0x1fU 
                                             & 0U);
    }
    vlSelfRef.__PVT__g_fma__DOT__fflags_fma = ((0xffffff83ffULL 
                                                & vlSelfRef.__PVT__g_fma__DOT__fflags_fma) 
                                               | ((QData)((IData)(vlSelfRef.__Vlvbound_hda7898db__0)) 
                                                  << 0xaU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fadd_TOP____024unit(vlSelfRef.__PVT__g_fma__DOT__fma_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][7U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][6U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][7U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][6U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_fadd__0__result, vlSelfRef.__Vtask_dpi_fadd__0__fflags);
    vlSelfRef.__PVT__g_fma__DOT__result_fadd[6U] = (IData)(vlSelfRef.__Vtask_dpi_fadd__0__result);
    vlSelfRef.__PVT__g_fma__DOT__result_fadd[7U] = (IData)(
                                                           (vlSelfRef.__Vtask_dpi_fadd__0__result 
                                                            >> 0x20U));
    vlSelfRef.__Vlvbound_h0a58540f__0 = vlSelfRef.__Vtask_dpi_fadd__0__fflags;
    vlSelfRef.__PVT__g_fma__DOT__fflags_fadd = ((0xfffff07fffULL 
                                                 & vlSelfRef.__PVT__g_fma__DOT__fflags_fadd) 
                                                | ((QData)((IData)(vlSelfRef.__Vlvbound_h0a58540f__0)) 
                                                   << 0xfU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsub_TOP____024unit(vlSelfRef.__PVT__g_fma__DOT__fma_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][7U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][6U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][7U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][6U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_fsub__1__result, vlSelfRef.__Vtask_dpi_fsub__1__fflags);
    vlSelfRef.__PVT__g_fma__DOT__result_fsub[6U] = (IData)(vlSelfRef.__Vtask_dpi_fsub__1__result);
    vlSelfRef.__PVT__g_fma__DOT__result_fsub[7U] = (IData)(
                                                           (vlSelfRef.__Vtask_dpi_fsub__1__result 
                                                            >> 0x20U));
    vlSelfRef.__Vlvbound_he8b3371d__0 = vlSelfRef.__Vtask_dpi_fsub__1__fflags;
    vlSelfRef.__PVT__g_fma__DOT__fflags_fsub = ((0xfffff07fffULL 
                                                 & vlSelfRef.__PVT__g_fma__DOT__fflags_fsub) 
                                                | ((QData)((IData)(vlSelfRef.__Vlvbound_he8b3371d__0)) 
                                                   << 0xfU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmul_TOP____024unit(vlSelfRef.__PVT__g_fma__DOT__fma_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][7U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][6U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][7U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][6U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_fmul__2__result, vlSelfRef.__Vtask_dpi_fmul__2__fflags);
    vlSelfRef.__PVT__g_fma__DOT__result_fmul[6U] = (IData)(vlSelfRef.__Vtask_dpi_fmul__2__result);
    vlSelfRef.__PVT__g_fma__DOT__result_fmul[7U] = (IData)(
                                                           (vlSelfRef.__Vtask_dpi_fmul__2__result 
                                                            >> 0x20U));
    vlSelfRef.__Vlvbound_h58dd0ee6__0 = vlSelfRef.__Vtask_dpi_fmul__2__fflags;
    vlSelfRef.__PVT__g_fma__DOT__fflags_fmul = ((0xfffff07fffULL 
                                                 & vlSelfRef.__PVT__g_fma__DOT__fflags_fmul) 
                                                | ((QData)((IData)(vlSelfRef.__Vlvbound_h58dd0ee6__0)) 
                                                   << 0xfU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmadd_TOP____024unit(vlSelfRef.__PVT__g_fma__DOT__fma_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                      >> 0xaU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][7U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][6U]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][7U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][6U]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [2U][7U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [2U][6U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_fmadd__3__result, vlSelfRef.__Vtask_dpi_fmadd__3__fflags);
    vlSelfRef.__PVT__g_fma__DOT__result_fmadd[6U] = (IData)(vlSelfRef.__Vtask_dpi_fmadd__3__result);
    vlSelfRef.__PVT__g_fma__DOT__result_fmadd[7U] = (IData)(
                                                            (vlSelfRef.__Vtask_dpi_fmadd__3__result 
                                                             >> 0x20U));
    vlSelfRef.__Vlvbound_h8e4774f5__0 = vlSelfRef.__Vtask_dpi_fmadd__3__fflags;
    vlSelfRef.__PVT__g_fma__DOT__fflags_fmadd = ((0xfffff07fffULL 
                                                  & vlSelfRef.__PVT__g_fma__DOT__fflags_fmadd) 
                                                 | ((QData)((IData)(vlSelfRef.__Vlvbound_h8e4774f5__0)) 
                                                    << 0xfU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmsub_TOP____024unit(vlSelfRef.__PVT__g_fma__DOT__fma_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                      >> 0xaU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][7U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][6U]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][7U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][6U]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [2U][7U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [2U][6U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_fmsub__4__result, vlSelfRef.__Vtask_dpi_fmsub__4__fflags);
    vlSelfRef.__PVT__g_fma__DOT__result_fmsub[6U] = (IData)(vlSelfRef.__Vtask_dpi_fmsub__4__result);
    vlSelfRef.__PVT__g_fma__DOT__result_fmsub[7U] = (IData)(
                                                            (vlSelfRef.__Vtask_dpi_fmsub__4__result 
                                                             >> 0x20U));
    vlSelfRef.__Vlvbound_h9e108cc1__0 = vlSelfRef.__Vtask_dpi_fmsub__4__fflags;
    vlSelfRef.__PVT__g_fma__DOT__fflags_fmsub = ((0xfffff07fffULL 
                                                  & vlSelfRef.__PVT__g_fma__DOT__fflags_fmsub) 
                                                 | ((QData)((IData)(vlSelfRef.__Vlvbound_h9e108cc1__0)) 
                                                    << 0xfU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fnmadd_TOP____024unit(vlSelfRef.__PVT__g_fma__DOT__fma_fire, 
                                                                   (1U 
                                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                       >> 0xaU)), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][7U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][6U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][7U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][6U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [2U][7U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [2U][6U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_fnmadd__5__result, vlSelfRef.__Vtask_dpi_fnmadd__5__fflags);
    vlSelfRef.__PVT__g_fma__DOT__result_fnmadd[6U] 
        = (IData)(vlSelfRef.__Vtask_dpi_fnmadd__5__result);
    vlSelfRef.__PVT__g_fma__DOT__result_fnmadd[7U] 
        = (IData)((vlSelfRef.__Vtask_dpi_fnmadd__5__result 
                   >> 0x20U));
    vlSelfRef.__Vlvbound_h00b49a27__0 = vlSelfRef.__Vtask_dpi_fnmadd__5__fflags;
    vlSelfRef.__PVT__g_fma__DOT__fflags_fnmadd = ((0xfffff07fffULL 
                                                   & vlSelfRef.__PVT__g_fma__DOT__fflags_fnmadd) 
                                                  | ((QData)((IData)(vlSelfRef.__Vlvbound_h00b49a27__0)) 
                                                     << 0xfU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fnmsub_TOP____024unit(vlSelfRef.__PVT__g_fma__DOT__fma_fire, 
                                                                   (1U 
                                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                       >> 0xaU)), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][7U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][6U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][7U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][6U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [2U][7U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [2U][6U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_fnmsub__6__result, vlSelfRef.__Vtask_dpi_fnmsub__6__fflags);
    vlSelfRef.__PVT__g_fma__DOT__result_fnmsub[6U] 
        = (IData)(vlSelfRef.__Vtask_dpi_fnmsub__6__result);
    vlSelfRef.__PVT__g_fma__DOT__result_fnmsub[7U] 
        = (IData)((vlSelfRef.__Vtask_dpi_fnmsub__6__result 
                   >> 0x20U));
    vlSelfRef.__Vlvbound_hb15d44e8__0 = vlSelfRef.__Vtask_dpi_fnmsub__6__fflags;
    vlSelfRef.__PVT__g_fma__DOT__fflags_fnmsub = ((0xfffff07fffULL 
                                                   & vlSelfRef.__PVT__g_fma__DOT__fflags_fnmsub) 
                                                  | ((QData)((IData)(vlSelfRef.__Vlvbound_hb15d44e8__0)) 
                                                     << 0xfU));
    if (vlSelfRef.__PVT__is_fadd) {
        vlSelfRef.__PVT__g_fma__DOT__result_fma[3U] 
            = vlSelfRef.__PVT__g_fma__DOT__result_fadd[6U];
        vlSelfRef.__Vlvbound_hda7898db__0 = (0x1fU 
                                             & (IData)(
                                                       (vlSelfRef.__PVT__g_fma__DOT__fflags_fadd 
                                                        >> 0xfU)));
    } else if (vlSelfRef.__PVT__is_fsub) {
        vlSelfRef.__PVT__g_fma__DOT__result_fma[3U] 
            = vlSelfRef.__PVT__g_fma__DOT__result_fsub[6U];
        vlSelfRef.__Vlvbound_hda7898db__0 = (0x1fU 
                                             & (IData)(
                                                       (vlSelfRef.__PVT__g_fma__DOT__fflags_fsub 
                                                        >> 0xfU)));
    } else if (vlSelfRef.__PVT__is_fmul) {
        vlSelfRef.__PVT__g_fma__DOT__result_fma[3U] 
            = vlSelfRef.__PVT__g_fma__DOT__result_fmul[6U];
        vlSelfRef.__Vlvbound_hda7898db__0 = (0x1fU 
                                             & (IData)(
                                                       (vlSelfRef.__PVT__g_fma__DOT__fflags_fmul 
                                                        >> 0xfU)));
    } else if (vlSelfRef.__PVT__is_fmadd) {
        vlSelfRef.__PVT__g_fma__DOT__result_fma[3U] 
            = vlSelfRef.__PVT__g_fma__DOT__result_fmadd[6U];
        vlSelfRef.__Vlvbound_hda7898db__0 = (0x1fU 
                                             & (IData)(
                                                       (vlSelfRef.__PVT__g_fma__DOT__fflags_fmadd 
                                                        >> 0xfU)));
    } else if (vlSelfRef.__PVT__is_fmsub) {
        vlSelfRef.__PVT__g_fma__DOT__result_fma[3U] 
            = vlSelfRef.__PVT__g_fma__DOT__result_fmsub[6U];
        vlSelfRef.__Vlvbound_hda7898db__0 = (0x1fU 
                                             & (IData)(
                                                       (vlSelfRef.__PVT__g_fma__DOT__fflags_fmsub 
                                                        >> 0xfU)));
    } else if (vlSelfRef.__PVT__is_fnmadd) {
        vlSelfRef.__PVT__g_fma__DOT__result_fma[3U] 
            = vlSelfRef.__PVT__g_fma__DOT__result_fnmadd[6U];
        vlSelfRef.__Vlvbound_hda7898db__0 = (0x1fU 
                                             & (IData)(
                                                       (vlSelfRef.__PVT__g_fma__DOT__fflags_fnmadd 
                                                        >> 0xfU)));
    } else if (vlSelfRef.__PVT__is_fnmsub) {
        vlSelfRef.__PVT__g_fma__DOT__result_fma[3U] 
            = vlSelfRef.__PVT__g_fma__DOT__result_fnmsub[6U];
        vlSelfRef.__Vlvbound_hda7898db__0 = (0x1fU 
                                             & (IData)(
                                                       (vlSelfRef.__PVT__g_fma__DOT__fflags_fnmsub 
                                                        >> 0xfU)));
    } else {
        vlSelfRef.__PVT__g_fma__DOT__result_fma[3U] = 0U;
        vlSelfRef.__Vlvbound_hda7898db__0 = (0x1fU 
                                             & 0U);
    }
    vlSelfRef.__PVT__g_fma__DOT__fflags_fma = ((0xfffff07fffULL 
                                                & vlSelfRef.__PVT__g_fma__DOT__fflags_fma) 
                                               | ((QData)((IData)(vlSelfRef.__Vlvbound_hda7898db__0)) 
                                                  << 0xfU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fadd_TOP____024unit(vlSelfRef.__PVT__g_fma__DOT__fma_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][9U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][8U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][9U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][8U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_fadd__0__result, vlSelfRef.__Vtask_dpi_fadd__0__fflags);
    vlSelfRef.__PVT__g_fma__DOT__result_fadd[8U] = (IData)(vlSelfRef.__Vtask_dpi_fadd__0__result);
    vlSelfRef.__PVT__g_fma__DOT__result_fadd[9U] = (IData)(
                                                           (vlSelfRef.__Vtask_dpi_fadd__0__result 
                                                            >> 0x20U));
    vlSelfRef.__Vlvbound_h0a58540f__0 = vlSelfRef.__Vtask_dpi_fadd__0__fflags;
    vlSelfRef.__PVT__g_fma__DOT__fflags_fadd = ((0xfffe0fffffULL 
                                                 & vlSelfRef.__PVT__g_fma__DOT__fflags_fadd) 
                                                | ((QData)((IData)(vlSelfRef.__Vlvbound_h0a58540f__0)) 
                                                   << 0x14U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsub_TOP____024unit(vlSelfRef.__PVT__g_fma__DOT__fma_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][9U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][8U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][9U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][8U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_fsub__1__result, vlSelfRef.__Vtask_dpi_fsub__1__fflags);
    vlSelfRef.__PVT__g_fma__DOT__result_fsub[8U] = (IData)(vlSelfRef.__Vtask_dpi_fsub__1__result);
    vlSelfRef.__PVT__g_fma__DOT__result_fsub[9U] = (IData)(
                                                           (vlSelfRef.__Vtask_dpi_fsub__1__result 
                                                            >> 0x20U));
    vlSelfRef.__Vlvbound_he8b3371d__0 = vlSelfRef.__Vtask_dpi_fsub__1__fflags;
    vlSelfRef.__PVT__g_fma__DOT__fflags_fsub = ((0xfffe0fffffULL 
                                                 & vlSelfRef.__PVT__g_fma__DOT__fflags_fsub) 
                                                | ((QData)((IData)(vlSelfRef.__Vlvbound_he8b3371d__0)) 
                                                   << 0x14U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmul_TOP____024unit(vlSelfRef.__PVT__g_fma__DOT__fma_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][9U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][8U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][9U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][8U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_fmul__2__result, vlSelfRef.__Vtask_dpi_fmul__2__fflags);
    vlSelfRef.__PVT__g_fma__DOT__result_fmul[8U] = (IData)(vlSelfRef.__Vtask_dpi_fmul__2__result);
    vlSelfRef.__PVT__g_fma__DOT__result_fmul[9U] = (IData)(
                                                           (vlSelfRef.__Vtask_dpi_fmul__2__result 
                                                            >> 0x20U));
    vlSelfRef.__Vlvbound_h58dd0ee6__0 = vlSelfRef.__Vtask_dpi_fmul__2__fflags;
    vlSelfRef.__PVT__g_fma__DOT__fflags_fmul = ((0xfffe0fffffULL 
                                                 & vlSelfRef.__PVT__g_fma__DOT__fflags_fmul) 
                                                | ((QData)((IData)(vlSelfRef.__Vlvbound_h58dd0ee6__0)) 
                                                   << 0x14U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmadd_TOP____024unit(vlSelfRef.__PVT__g_fma__DOT__fma_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                      >> 0xaU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][9U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][8U]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][9U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][8U]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [2U][9U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [2U][8U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_fmadd__3__result, vlSelfRef.__Vtask_dpi_fmadd__3__fflags);
    vlSelfRef.__PVT__g_fma__DOT__result_fmadd[8U] = (IData)(vlSelfRef.__Vtask_dpi_fmadd__3__result);
    vlSelfRef.__PVT__g_fma__DOT__result_fmadd[9U] = (IData)(
                                                            (vlSelfRef.__Vtask_dpi_fmadd__3__result 
                                                             >> 0x20U));
    vlSelfRef.__Vlvbound_h8e4774f5__0 = vlSelfRef.__Vtask_dpi_fmadd__3__fflags;
    vlSelfRef.__PVT__g_fma__DOT__fflags_fmadd = ((0xfffe0fffffULL 
                                                  & vlSelfRef.__PVT__g_fma__DOT__fflags_fmadd) 
                                                 | ((QData)((IData)(vlSelfRef.__Vlvbound_h8e4774f5__0)) 
                                                    << 0x14U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmsub_TOP____024unit(vlSelfRef.__PVT__g_fma__DOT__fma_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                      >> 0xaU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][9U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][8U]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][9U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][8U]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [2U][9U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [2U][8U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_fmsub__4__result, vlSelfRef.__Vtask_dpi_fmsub__4__fflags);
    vlSelfRef.__PVT__g_fma__DOT__result_fmsub[8U] = (IData)(vlSelfRef.__Vtask_dpi_fmsub__4__result);
    vlSelfRef.__PVT__g_fma__DOT__result_fmsub[9U] = (IData)(
                                                            (vlSelfRef.__Vtask_dpi_fmsub__4__result 
                                                             >> 0x20U));
    vlSelfRef.__Vlvbound_h9e108cc1__0 = vlSelfRef.__Vtask_dpi_fmsub__4__fflags;
    vlSelfRef.__PVT__g_fma__DOT__fflags_fmsub = ((0xfffe0fffffULL 
                                                  & vlSelfRef.__PVT__g_fma__DOT__fflags_fmsub) 
                                                 | ((QData)((IData)(vlSelfRef.__Vlvbound_h9e108cc1__0)) 
                                                    << 0x14U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fnmadd_TOP____024unit(vlSelfRef.__PVT__g_fma__DOT__fma_fire, 
                                                                   (1U 
                                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                       >> 0xaU)), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][9U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][8U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][9U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][8U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [2U][9U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [2U][8U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_fnmadd__5__result, vlSelfRef.__Vtask_dpi_fnmadd__5__fflags);
    vlSelfRef.__PVT__g_fma__DOT__result_fnmadd[8U] 
        = (IData)(vlSelfRef.__Vtask_dpi_fnmadd__5__result);
    vlSelfRef.__PVT__g_fma__DOT__result_fnmadd[9U] 
        = (IData)((vlSelfRef.__Vtask_dpi_fnmadd__5__result 
                   >> 0x20U));
    vlSelfRef.__Vlvbound_h00b49a27__0 = vlSelfRef.__Vtask_dpi_fnmadd__5__fflags;
    vlSelfRef.__PVT__g_fma__DOT__fflags_fnmadd = ((0xfffe0fffffULL 
                                                   & vlSelfRef.__PVT__g_fma__DOT__fflags_fnmadd) 
                                                  | ((QData)((IData)(vlSelfRef.__Vlvbound_h00b49a27__0)) 
                                                     << 0x14U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fnmsub_TOP____024unit(vlSelfRef.__PVT__g_fma__DOT__fma_fire, 
                                                                   (1U 
                                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                       >> 0xaU)), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][9U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][8U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][9U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][8U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [2U][9U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [2U][8U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_fnmsub__6__result, vlSelfRef.__Vtask_dpi_fnmsub__6__fflags);
    vlSelfRef.__PVT__g_fma__DOT__result_fnmsub[8U] 
        = (IData)(vlSelfRef.__Vtask_dpi_fnmsub__6__result);
    vlSelfRef.__PVT__g_fma__DOT__result_fnmsub[9U] 
        = (IData)((vlSelfRef.__Vtask_dpi_fnmsub__6__result 
                   >> 0x20U));
    vlSelfRef.__Vlvbound_hb15d44e8__0 = vlSelfRef.__Vtask_dpi_fnmsub__6__fflags;
    vlSelfRef.__PVT__g_fma__DOT__fflags_fnmsub = ((0xfffe0fffffULL 
                                                   & vlSelfRef.__PVT__g_fma__DOT__fflags_fnmsub) 
                                                  | ((QData)((IData)(vlSelfRef.__Vlvbound_hb15d44e8__0)) 
                                                     << 0x14U));
    if (vlSelfRef.__PVT__is_fadd) {
        vlSelfRef.__PVT__g_fma__DOT__result_fma[4U] 
            = vlSelfRef.__PVT__g_fma__DOT__result_fadd[8U];
        vlSelfRef.__Vlvbound_hda7898db__0 = (0x1fU 
                                             & (IData)(
                                                       (vlSelfRef.__PVT__g_fma__DOT__fflags_fadd 
                                                        >> 0x14U)));
    } else if (vlSelfRef.__PVT__is_fsub) {
        vlSelfRef.__PVT__g_fma__DOT__result_fma[4U] 
            = vlSelfRef.__PVT__g_fma__DOT__result_fsub[8U];
        vlSelfRef.__Vlvbound_hda7898db__0 = (0x1fU 
                                             & (IData)(
                                                       (vlSelfRef.__PVT__g_fma__DOT__fflags_fsub 
                                                        >> 0x14U)));
    } else if (vlSelfRef.__PVT__is_fmul) {
        vlSelfRef.__PVT__g_fma__DOT__result_fma[4U] 
            = vlSelfRef.__PVT__g_fma__DOT__result_fmul[8U];
        vlSelfRef.__Vlvbound_hda7898db__0 = (0x1fU 
                                             & (IData)(
                                                       (vlSelfRef.__PVT__g_fma__DOT__fflags_fmul 
                                                        >> 0x14U)));
    } else if (vlSelfRef.__PVT__is_fmadd) {
        vlSelfRef.__PVT__g_fma__DOT__result_fma[4U] 
            = vlSelfRef.__PVT__g_fma__DOT__result_fmadd[8U];
        vlSelfRef.__Vlvbound_hda7898db__0 = (0x1fU 
                                             & (IData)(
                                                       (vlSelfRef.__PVT__g_fma__DOT__fflags_fmadd 
                                                        >> 0x14U)));
    } else if (vlSelfRef.__PVT__is_fmsub) {
        vlSelfRef.__PVT__g_fma__DOT__result_fma[4U] 
            = vlSelfRef.__PVT__g_fma__DOT__result_fmsub[8U];
        vlSelfRef.__Vlvbound_hda7898db__0 = (0x1fU 
                                             & (IData)(
                                                       (vlSelfRef.__PVT__g_fma__DOT__fflags_fmsub 
                                                        >> 0x14U)));
    } else if (vlSelfRef.__PVT__is_fnmadd) {
        vlSelfRef.__PVT__g_fma__DOT__result_fma[4U] 
            = vlSelfRef.__PVT__g_fma__DOT__result_fnmadd[8U];
        vlSelfRef.__Vlvbound_hda7898db__0 = (0x1fU 
                                             & (IData)(
                                                       (vlSelfRef.__PVT__g_fma__DOT__fflags_fnmadd 
                                                        >> 0x14U)));
    } else if (vlSelfRef.__PVT__is_fnmsub) {
        vlSelfRef.__PVT__g_fma__DOT__result_fma[4U] 
            = vlSelfRef.__PVT__g_fma__DOT__result_fnmsub[8U];
        vlSelfRef.__Vlvbound_hda7898db__0 = (0x1fU 
                                             & (IData)(
                                                       (vlSelfRef.__PVT__g_fma__DOT__fflags_fnmsub 
                                                        >> 0x14U)));
    } else {
        vlSelfRef.__PVT__g_fma__DOT__result_fma[4U] = 0U;
        vlSelfRef.__Vlvbound_hda7898db__0 = (0x1fU 
                                             & 0U);
    }
    vlSelfRef.__PVT__g_fma__DOT__fflags_fma = ((0xfffe0fffffULL 
                                                & vlSelfRef.__PVT__g_fma__DOT__fflags_fma) 
                                               | ((QData)((IData)(vlSelfRef.__Vlvbound_hda7898db__0)) 
                                                  << 0x14U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fadd_TOP____024unit(vlSelfRef.__PVT__g_fma__DOT__fma_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xbU])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xaU]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0xbU])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0xaU]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_fadd__0__result, vlSelfRef.__Vtask_dpi_fadd__0__fflags);
    vlSelfRef.__PVT__g_fma__DOT__result_fadd[0xaU] 
        = (IData)(vlSelfRef.__Vtask_dpi_fadd__0__result);
    vlSelfRef.__PVT__g_fma__DOT__result_fadd[0xbU] 
        = (IData)((vlSelfRef.__Vtask_dpi_fadd__0__result 
                   >> 0x20U));
    vlSelfRef.__Vlvbound_h0a58540f__0 = vlSelfRef.__Vtask_dpi_fadd__0__fflags;
    vlSelfRef.__PVT__g_fma__DOT__fflags_fadd = ((0xffc1ffffffULL 
                                                 & vlSelfRef.__PVT__g_fma__DOT__fflags_fadd) 
                                                | ((QData)((IData)(vlSelfRef.__Vlvbound_h0a58540f__0)) 
                                                   << 0x19U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsub_TOP____024unit(vlSelfRef.__PVT__g_fma__DOT__fma_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xbU])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xaU]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0xbU])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0xaU]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_fsub__1__result, vlSelfRef.__Vtask_dpi_fsub__1__fflags);
    vlSelfRef.__PVT__g_fma__DOT__result_fsub[0xaU] 
        = (IData)(vlSelfRef.__Vtask_dpi_fsub__1__result);
    vlSelfRef.__PVT__g_fma__DOT__result_fsub[0xbU] 
        = (IData)((vlSelfRef.__Vtask_dpi_fsub__1__result 
                   >> 0x20U));
    vlSelfRef.__Vlvbound_he8b3371d__0 = vlSelfRef.__Vtask_dpi_fsub__1__fflags;
    vlSelfRef.__PVT__g_fma__DOT__fflags_fsub = ((0xffc1ffffffULL 
                                                 & vlSelfRef.__PVT__g_fma__DOT__fflags_fsub) 
                                                | ((QData)((IData)(vlSelfRef.__Vlvbound_he8b3371d__0)) 
                                                   << 0x19U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmul_TOP____024unit(vlSelfRef.__PVT__g_fma__DOT__fma_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xbU])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xaU]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0xbU])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0xaU]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_fmul__2__result, vlSelfRef.__Vtask_dpi_fmul__2__fflags);
    vlSelfRef.__PVT__g_fma__DOT__result_fmul[0xaU] 
        = (IData)(vlSelfRef.__Vtask_dpi_fmul__2__result);
    vlSelfRef.__PVT__g_fma__DOT__result_fmul[0xbU] 
        = (IData)((vlSelfRef.__Vtask_dpi_fmul__2__result 
                   >> 0x20U));
    vlSelfRef.__Vlvbound_h58dd0ee6__0 = vlSelfRef.__Vtask_dpi_fmul__2__fflags;
    vlSelfRef.__PVT__g_fma__DOT__fflags_fmul = ((0xffc1ffffffULL 
                                                 & vlSelfRef.__PVT__g_fma__DOT__fflags_fmul) 
                                                | ((QData)((IData)(vlSelfRef.__Vlvbound_h58dd0ee6__0)) 
                                                   << 0x19U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmadd_TOP____024unit(vlSelfRef.__PVT__g_fma__DOT__fma_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                      >> 0xaU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xbU])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xaU]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0xbU])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0xaU]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [2U][0xbU])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [2U][0xaU]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_fmadd__3__result, vlSelfRef.__Vtask_dpi_fmadd__3__fflags);
    vlSelfRef.__PVT__g_fma__DOT__result_fmadd[0xaU] 
        = (IData)(vlSelfRef.__Vtask_dpi_fmadd__3__result);
    vlSelfRef.__PVT__g_fma__DOT__result_fmadd[0xbU] 
        = (IData)((vlSelfRef.__Vtask_dpi_fmadd__3__result 
                   >> 0x20U));
    vlSelfRef.__Vlvbound_h8e4774f5__0 = vlSelfRef.__Vtask_dpi_fmadd__3__fflags;
    vlSelfRef.__PVT__g_fma__DOT__fflags_fmadd = ((0xffc1ffffffULL 
                                                  & vlSelfRef.__PVT__g_fma__DOT__fflags_fmadd) 
                                                 | ((QData)((IData)(vlSelfRef.__Vlvbound_h8e4774f5__0)) 
                                                    << 0x19U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmsub_TOP____024unit(vlSelfRef.__PVT__g_fma__DOT__fma_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                      >> 0xaU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xbU])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xaU]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0xbU])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0xaU]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [2U][0xbU])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [2U][0xaU]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_fmsub__4__result, vlSelfRef.__Vtask_dpi_fmsub__4__fflags);
    vlSelfRef.__PVT__g_fma__DOT__result_fmsub[0xaU] 
        = (IData)(vlSelfRef.__Vtask_dpi_fmsub__4__result);
    vlSelfRef.__PVT__g_fma__DOT__result_fmsub[0xbU] 
        = (IData)((vlSelfRef.__Vtask_dpi_fmsub__4__result 
                   >> 0x20U));
    vlSelfRef.__Vlvbound_h9e108cc1__0 = vlSelfRef.__Vtask_dpi_fmsub__4__fflags;
    vlSelfRef.__PVT__g_fma__DOT__fflags_fmsub = ((0xffc1ffffffULL 
                                                  & vlSelfRef.__PVT__g_fma__DOT__fflags_fmsub) 
                                                 | ((QData)((IData)(vlSelfRef.__Vlvbound_h9e108cc1__0)) 
                                                    << 0x19U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fnmadd_TOP____024unit(vlSelfRef.__PVT__g_fma__DOT__fma_fire, 
                                                                   (1U 
                                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                       >> 0xaU)), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xbU])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xaU]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0xbU])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0xaU]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [2U][0xbU])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [2U][0xaU]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_fnmadd__5__result, vlSelfRef.__Vtask_dpi_fnmadd__5__fflags);
    vlSelfRef.__PVT__g_fma__DOT__result_fnmadd[0xaU] 
        = (IData)(vlSelfRef.__Vtask_dpi_fnmadd__5__result);
    vlSelfRef.__PVT__g_fma__DOT__result_fnmadd[0xbU] 
        = (IData)((vlSelfRef.__Vtask_dpi_fnmadd__5__result 
                   >> 0x20U));
    vlSelfRef.__Vlvbound_h00b49a27__0 = vlSelfRef.__Vtask_dpi_fnmadd__5__fflags;
    vlSelfRef.__PVT__g_fma__DOT__fflags_fnmadd = ((0xffc1ffffffULL 
                                                   & vlSelfRef.__PVT__g_fma__DOT__fflags_fnmadd) 
                                                  | ((QData)((IData)(vlSelfRef.__Vlvbound_h00b49a27__0)) 
                                                     << 0x19U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fnmsub_TOP____024unit(vlSelfRef.__PVT__g_fma__DOT__fma_fire, 
                                                                   (1U 
                                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                       >> 0xaU)), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xbU])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xaU]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0xbU])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0xaU]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [2U][0xbU])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [2U][0xaU]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_fnmsub__6__result, vlSelfRef.__Vtask_dpi_fnmsub__6__fflags);
    vlSelfRef.__PVT__g_fma__DOT__result_fnmsub[0xaU] 
        = (IData)(vlSelfRef.__Vtask_dpi_fnmsub__6__result);
    vlSelfRef.__PVT__g_fma__DOT__result_fnmsub[0xbU] 
        = (IData)((vlSelfRef.__Vtask_dpi_fnmsub__6__result 
                   >> 0x20U));
    vlSelfRef.__Vlvbound_hb15d44e8__0 = vlSelfRef.__Vtask_dpi_fnmsub__6__fflags;
    vlSelfRef.__PVT__g_fma__DOT__fflags_fnmsub = ((0xffc1ffffffULL 
                                                   & vlSelfRef.__PVT__g_fma__DOT__fflags_fnmsub) 
                                                  | ((QData)((IData)(vlSelfRef.__Vlvbound_hb15d44e8__0)) 
                                                     << 0x19U));
    if (vlSelfRef.__PVT__is_fadd) {
        vlSelfRef.__PVT__g_fma__DOT__result_fma[5U] 
            = vlSelfRef.__PVT__g_fma__DOT__result_fadd[0xaU];
        vlSelfRef.__Vlvbound_hda7898db__0 = (0x1fU 
                                             & (IData)(
                                                       (vlSelfRef.__PVT__g_fma__DOT__fflags_fadd 
                                                        >> 0x19U)));
    } else if (vlSelfRef.__PVT__is_fsub) {
        vlSelfRef.__PVT__g_fma__DOT__result_fma[5U] 
            = vlSelfRef.__PVT__g_fma__DOT__result_fsub[0xaU];
        vlSelfRef.__Vlvbound_hda7898db__0 = (0x1fU 
                                             & (IData)(
                                                       (vlSelfRef.__PVT__g_fma__DOT__fflags_fsub 
                                                        >> 0x19U)));
    } else if (vlSelfRef.__PVT__is_fmul) {
        vlSelfRef.__PVT__g_fma__DOT__result_fma[5U] 
            = vlSelfRef.__PVT__g_fma__DOT__result_fmul[0xaU];
        vlSelfRef.__Vlvbound_hda7898db__0 = (0x1fU 
                                             & (IData)(
                                                       (vlSelfRef.__PVT__g_fma__DOT__fflags_fmul 
                                                        >> 0x19U)));
    } else if (vlSelfRef.__PVT__is_fmadd) {
        vlSelfRef.__PVT__g_fma__DOT__result_fma[5U] 
            = vlSelfRef.__PVT__g_fma__DOT__result_fmadd[0xaU];
        vlSelfRef.__Vlvbound_hda7898db__0 = (0x1fU 
                                             & (IData)(
                                                       (vlSelfRef.__PVT__g_fma__DOT__fflags_fmadd 
                                                        >> 0x19U)));
    } else if (vlSelfRef.__PVT__is_fmsub) {
        vlSelfRef.__PVT__g_fma__DOT__result_fma[5U] 
            = vlSelfRef.__PVT__g_fma__DOT__result_fmsub[0xaU];
        vlSelfRef.__Vlvbound_hda7898db__0 = (0x1fU 
                                             & (IData)(
                                                       (vlSelfRef.__PVT__g_fma__DOT__fflags_fmsub 
                                                        >> 0x19U)));
    } else if (vlSelfRef.__PVT__is_fnmadd) {
        vlSelfRef.__PVT__g_fma__DOT__result_fma[5U] 
            = vlSelfRef.__PVT__g_fma__DOT__result_fnmadd[0xaU];
        vlSelfRef.__Vlvbound_hda7898db__0 = (0x1fU 
                                             & (IData)(
                                                       (vlSelfRef.__PVT__g_fma__DOT__fflags_fnmadd 
                                                        >> 0x19U)));
    } else if (vlSelfRef.__PVT__is_fnmsub) {
        vlSelfRef.__PVT__g_fma__DOT__result_fma[5U] 
            = vlSelfRef.__PVT__g_fma__DOT__result_fnmsub[0xaU];
        vlSelfRef.__Vlvbound_hda7898db__0 = (0x1fU 
                                             & (IData)(
                                                       (vlSelfRef.__PVT__g_fma__DOT__fflags_fnmsub 
                                                        >> 0x19U)));
    } else {
        vlSelfRef.__PVT__g_fma__DOT__result_fma[5U] = 0U;
        vlSelfRef.__Vlvbound_hda7898db__0 = (0x1fU 
                                             & 0U);
    }
    vlSelfRef.__PVT__g_fma__DOT__fflags_fma = ((0xffc1ffffffULL 
                                                & vlSelfRef.__PVT__g_fma__DOT__fflags_fma) 
                                               | ((QData)((IData)(vlSelfRef.__Vlvbound_hda7898db__0)) 
                                                  << 0x19U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fadd_TOP____024unit(vlSelfRef.__PVT__g_fma__DOT__fma_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xdU])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xcU]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0xdU])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0xcU]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_fadd__0__result, vlSelfRef.__Vtask_dpi_fadd__0__fflags);
    vlSelfRef.__PVT__g_fma__DOT__result_fadd[0xcU] 
        = (IData)(vlSelfRef.__Vtask_dpi_fadd__0__result);
    vlSelfRef.__PVT__g_fma__DOT__result_fadd[0xdU] 
        = (IData)((vlSelfRef.__Vtask_dpi_fadd__0__result 
                   >> 0x20U));
    vlSelfRef.__Vlvbound_h0a58540f__0 = vlSelfRef.__Vtask_dpi_fadd__0__fflags;
    vlSelfRef.__PVT__g_fma__DOT__fflags_fadd = ((0xf83fffffffULL 
                                                 & vlSelfRef.__PVT__g_fma__DOT__fflags_fadd) 
                                                | ((QData)((IData)(vlSelfRef.__Vlvbound_h0a58540f__0)) 
                                                   << 0x1eU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsub_TOP____024unit(vlSelfRef.__PVT__g_fma__DOT__fma_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xdU])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xcU]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0xdU])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0xcU]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_fsub__1__result, vlSelfRef.__Vtask_dpi_fsub__1__fflags);
    vlSelfRef.__PVT__g_fma__DOT__result_fsub[0xcU] 
        = (IData)(vlSelfRef.__Vtask_dpi_fsub__1__result);
    vlSelfRef.__PVT__g_fma__DOT__result_fsub[0xdU] 
        = (IData)((vlSelfRef.__Vtask_dpi_fsub__1__result 
                   >> 0x20U));
    vlSelfRef.__Vlvbound_he8b3371d__0 = vlSelfRef.__Vtask_dpi_fsub__1__fflags;
    vlSelfRef.__PVT__g_fma__DOT__fflags_fsub = ((0xf83fffffffULL 
                                                 & vlSelfRef.__PVT__g_fma__DOT__fflags_fsub) 
                                                | ((QData)((IData)(vlSelfRef.__Vlvbound_he8b3371d__0)) 
                                                   << 0x1eU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmul_TOP____024unit(vlSelfRef.__PVT__g_fma__DOT__fma_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xdU])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xcU]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0xdU])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0xcU]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_fmul__2__result, vlSelfRef.__Vtask_dpi_fmul__2__fflags);
    vlSelfRef.__PVT__g_fma__DOT__result_fmul[0xcU] 
        = (IData)(vlSelfRef.__Vtask_dpi_fmul__2__result);
    vlSelfRef.__PVT__g_fma__DOT__result_fmul[0xdU] 
        = (IData)((vlSelfRef.__Vtask_dpi_fmul__2__result 
                   >> 0x20U));
    vlSelfRef.__Vlvbound_h58dd0ee6__0 = vlSelfRef.__Vtask_dpi_fmul__2__fflags;
    vlSelfRef.__PVT__g_fma__DOT__fflags_fmul = ((0xf83fffffffULL 
                                                 & vlSelfRef.__PVT__g_fma__DOT__fflags_fmul) 
                                                | ((QData)((IData)(vlSelfRef.__Vlvbound_h58dd0ee6__0)) 
                                                   << 0x1eU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmadd_TOP____024unit(vlSelfRef.__PVT__g_fma__DOT__fma_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                      >> 0xaU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xdU])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xcU]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0xdU])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0xcU]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [2U][0xdU])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [2U][0xcU]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_fmadd__3__result, vlSelfRef.__Vtask_dpi_fmadd__3__fflags);
    vlSelfRef.__PVT__g_fma__DOT__result_fmadd[0xcU] 
        = (IData)(vlSelfRef.__Vtask_dpi_fmadd__3__result);
    vlSelfRef.__PVT__g_fma__DOT__result_fmadd[0xdU] 
        = (IData)((vlSelfRef.__Vtask_dpi_fmadd__3__result 
                   >> 0x20U));
    vlSelfRef.__Vlvbound_h8e4774f5__0 = vlSelfRef.__Vtask_dpi_fmadd__3__fflags;
    vlSelfRef.__PVT__g_fma__DOT__fflags_fmadd = ((0xf83fffffffULL 
                                                  & vlSelfRef.__PVT__g_fma__DOT__fflags_fmadd) 
                                                 | ((QData)((IData)(vlSelfRef.__Vlvbound_h8e4774f5__0)) 
                                                    << 0x1eU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmsub_TOP____024unit(vlSelfRef.__PVT__g_fma__DOT__fma_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                      >> 0xaU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xdU])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xcU]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0xdU])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0xcU]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [2U][0xdU])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [2U][0xcU]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_fmsub__4__result, vlSelfRef.__Vtask_dpi_fmsub__4__fflags);
    vlSelfRef.__PVT__g_fma__DOT__result_fmsub[0xcU] 
        = (IData)(vlSelfRef.__Vtask_dpi_fmsub__4__result);
    vlSelfRef.__PVT__g_fma__DOT__result_fmsub[0xdU] 
        = (IData)((vlSelfRef.__Vtask_dpi_fmsub__4__result 
                   >> 0x20U));
    vlSelfRef.__Vlvbound_h9e108cc1__0 = vlSelfRef.__Vtask_dpi_fmsub__4__fflags;
    vlSelfRef.__PVT__g_fma__DOT__fflags_fmsub = ((0xf83fffffffULL 
                                                  & vlSelfRef.__PVT__g_fma__DOT__fflags_fmsub) 
                                                 | ((QData)((IData)(vlSelfRef.__Vlvbound_h9e108cc1__0)) 
                                                    << 0x1eU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fnmadd_TOP____024unit(vlSelfRef.__PVT__g_fma__DOT__fma_fire, 
                                                                   (1U 
                                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                       >> 0xaU)), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xdU])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xcU]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0xdU])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0xcU]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [2U][0xdU])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [2U][0xcU]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_fnmadd__5__result, vlSelfRef.__Vtask_dpi_fnmadd__5__fflags);
    vlSelfRef.__PVT__g_fma__DOT__result_fnmadd[0xcU] 
        = (IData)(vlSelfRef.__Vtask_dpi_fnmadd__5__result);
    vlSelfRef.__PVT__g_fma__DOT__result_fnmadd[0xdU] 
        = (IData)((vlSelfRef.__Vtask_dpi_fnmadd__5__result 
                   >> 0x20U));
    vlSelfRef.__Vlvbound_h00b49a27__0 = vlSelfRef.__Vtask_dpi_fnmadd__5__fflags;
    vlSelfRef.__PVT__g_fma__DOT__fflags_fnmadd = ((0xf83fffffffULL 
                                                   & vlSelfRef.__PVT__g_fma__DOT__fflags_fnmadd) 
                                                  | ((QData)((IData)(vlSelfRef.__Vlvbound_h00b49a27__0)) 
                                                     << 0x1eU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fnmsub_TOP____024unit(vlSelfRef.__PVT__g_fma__DOT__fma_fire, 
                                                                   (1U 
                                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                       >> 0xaU)), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xdU])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xcU]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0xdU])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0xcU]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [2U][0xdU])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [2U][0xcU]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_fnmsub__6__result, vlSelfRef.__Vtask_dpi_fnmsub__6__fflags);
    vlSelfRef.__PVT__g_fma__DOT__result_fnmsub[0xcU] 
        = (IData)(vlSelfRef.__Vtask_dpi_fnmsub__6__result);
    vlSelfRef.__PVT__g_fma__DOT__result_fnmsub[0xdU] 
        = (IData)((vlSelfRef.__Vtask_dpi_fnmsub__6__result 
                   >> 0x20U));
    vlSelfRef.__Vlvbound_hb15d44e8__0 = vlSelfRef.__Vtask_dpi_fnmsub__6__fflags;
    vlSelfRef.__PVT__g_fma__DOT__fflags_fnmsub = ((0xf83fffffffULL 
                                                   & vlSelfRef.__PVT__g_fma__DOT__fflags_fnmsub) 
                                                  | ((QData)((IData)(vlSelfRef.__Vlvbound_hb15d44e8__0)) 
                                                     << 0x1eU));
    if (vlSelfRef.__PVT__is_fadd) {
        vlSelfRef.__PVT__g_fma__DOT__result_fma[6U] 
            = vlSelfRef.__PVT__g_fma__DOT__result_fadd[0xcU];
        vlSelfRef.__Vlvbound_hda7898db__0 = (0x1fU 
                                             & (IData)(
                                                       (vlSelfRef.__PVT__g_fma__DOT__fflags_fadd 
                                                        >> 0x1eU)));
    } else if (vlSelfRef.__PVT__is_fsub) {
        vlSelfRef.__PVT__g_fma__DOT__result_fma[6U] 
            = vlSelfRef.__PVT__g_fma__DOT__result_fsub[0xcU];
        vlSelfRef.__Vlvbound_hda7898db__0 = (0x1fU 
                                             & (IData)(
                                                       (vlSelfRef.__PVT__g_fma__DOT__fflags_fsub 
                                                        >> 0x1eU)));
    } else if (vlSelfRef.__PVT__is_fmul) {
        vlSelfRef.__PVT__g_fma__DOT__result_fma[6U] 
            = vlSelfRef.__PVT__g_fma__DOT__result_fmul[0xcU];
        vlSelfRef.__Vlvbound_hda7898db__0 = (0x1fU 
                                             & (IData)(
                                                       (vlSelfRef.__PVT__g_fma__DOT__fflags_fmul 
                                                        >> 0x1eU)));
    } else if (vlSelfRef.__PVT__is_fmadd) {
        vlSelfRef.__PVT__g_fma__DOT__result_fma[6U] 
            = vlSelfRef.__PVT__g_fma__DOT__result_fmadd[0xcU];
        vlSelfRef.__Vlvbound_hda7898db__0 = (0x1fU 
                                             & (IData)(
                                                       (vlSelfRef.__PVT__g_fma__DOT__fflags_fmadd 
                                                        >> 0x1eU)));
    } else if (vlSelfRef.__PVT__is_fmsub) {
        vlSelfRef.__PVT__g_fma__DOT__result_fma[6U] 
            = vlSelfRef.__PVT__g_fma__DOT__result_fmsub[0xcU];
        vlSelfRef.__Vlvbound_hda7898db__0 = (0x1fU 
                                             & (IData)(
                                                       (vlSelfRef.__PVT__g_fma__DOT__fflags_fmsub 
                                                        >> 0x1eU)));
    } else if (vlSelfRef.__PVT__is_fnmadd) {
        vlSelfRef.__PVT__g_fma__DOT__result_fma[6U] 
            = vlSelfRef.__PVT__g_fma__DOT__result_fnmadd[0xcU];
        vlSelfRef.__Vlvbound_hda7898db__0 = (0x1fU 
                                             & (IData)(
                                                       (vlSelfRef.__PVT__g_fma__DOT__fflags_fnmadd 
                                                        >> 0x1eU)));
    } else if (vlSelfRef.__PVT__is_fnmsub) {
        vlSelfRef.__PVT__g_fma__DOT__result_fma[6U] 
            = vlSelfRef.__PVT__g_fma__DOT__result_fnmsub[0xcU];
        vlSelfRef.__Vlvbound_hda7898db__0 = (0x1fU 
                                             & (IData)(
                                                       (vlSelfRef.__PVT__g_fma__DOT__fflags_fnmsub 
                                                        >> 0x1eU)));
    } else {
        vlSelfRef.__PVT__g_fma__DOT__result_fma[6U] = 0U;
        vlSelfRef.__Vlvbound_hda7898db__0 = (0x1fU 
                                             & 0U);
    }
    vlSelfRef.__PVT__g_fma__DOT__fflags_fma = ((0xf83fffffffULL 
                                                & vlSelfRef.__PVT__g_fma__DOT__fflags_fma) 
                                               | ((QData)((IData)(vlSelfRef.__Vlvbound_hda7898db__0)) 
                                                  << 0x1eU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fadd_TOP____024unit(vlSelfRef.__PVT__g_fma__DOT__fma_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xfU])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xeU]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0xfU])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0xeU]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_fadd__0__result, vlSelfRef.__Vtask_dpi_fadd__0__fflags);
    vlSelfRef.__PVT__g_fma__DOT__result_fadd[0xeU] 
        = (IData)(vlSelfRef.__Vtask_dpi_fadd__0__result);
    vlSelfRef.__PVT__g_fma__DOT__result_fadd[0xfU] 
        = (IData)((vlSelfRef.__Vtask_dpi_fadd__0__result 
                   >> 0x20U));
    vlSelfRef.__Vlvbound_h0a58540f__0 = vlSelfRef.__Vtask_dpi_fadd__0__fflags;
    vlSelfRef.__PVT__g_fma__DOT__fflags_fadd = ((0x7ffffffffULL 
                                                 & vlSelfRef.__PVT__g_fma__DOT__fflags_fadd) 
                                                | ((QData)((IData)(vlSelfRef.__Vlvbound_h0a58540f__0)) 
                                                   << 0x23U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsub_TOP____024unit(vlSelfRef.__PVT__g_fma__DOT__fma_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xfU])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xeU]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0xfU])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0xeU]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_fsub__1__result, vlSelfRef.__Vtask_dpi_fsub__1__fflags);
    vlSelfRef.__PVT__g_fma__DOT__result_fsub[0xeU] 
        = (IData)(vlSelfRef.__Vtask_dpi_fsub__1__result);
    vlSelfRef.__PVT__g_fma__DOT__result_fsub[0xfU] 
        = (IData)((vlSelfRef.__Vtask_dpi_fsub__1__result 
                   >> 0x20U));
    vlSelfRef.__Vlvbound_he8b3371d__0 = vlSelfRef.__Vtask_dpi_fsub__1__fflags;
    vlSelfRef.__PVT__g_fma__DOT__fflags_fsub = ((0x7ffffffffULL 
                                                 & vlSelfRef.__PVT__g_fma__DOT__fflags_fsub) 
                                                | ((QData)((IData)(vlSelfRef.__Vlvbound_he8b3371d__0)) 
                                                   << 0x23U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmul_TOP____024unit(vlSelfRef.__PVT__g_fma__DOT__fma_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xfU])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xeU]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0xfU])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0xeU]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_fmul__2__result, vlSelfRef.__Vtask_dpi_fmul__2__fflags);
    vlSelfRef.__PVT__g_fma__DOT__result_fmul[0xeU] 
        = (IData)(vlSelfRef.__Vtask_dpi_fmul__2__result);
    vlSelfRef.__PVT__g_fma__DOT__result_fmul[0xfU] 
        = (IData)((vlSelfRef.__Vtask_dpi_fmul__2__result 
                   >> 0x20U));
    vlSelfRef.__Vlvbound_h58dd0ee6__0 = vlSelfRef.__Vtask_dpi_fmul__2__fflags;
    vlSelfRef.__PVT__g_fma__DOT__fflags_fmul = ((0x7ffffffffULL 
                                                 & vlSelfRef.__PVT__g_fma__DOT__fflags_fmul) 
                                                | ((QData)((IData)(vlSelfRef.__Vlvbound_h58dd0ee6__0)) 
                                                   << 0x23U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmadd_TOP____024unit(vlSelfRef.__PVT__g_fma__DOT__fma_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                      >> 0xaU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xfU])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xeU]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0xfU])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0xeU]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [2U][0xfU])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [2U][0xeU]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_fmadd__3__result, vlSelfRef.__Vtask_dpi_fmadd__3__fflags);
    vlSelfRef.__PVT__g_fma__DOT__result_fmadd[0xeU] 
        = (IData)(vlSelfRef.__Vtask_dpi_fmadd__3__result);
    vlSelfRef.__PVT__g_fma__DOT__result_fmadd[0xfU] 
        = (IData)((vlSelfRef.__Vtask_dpi_fmadd__3__result 
                   >> 0x20U));
    vlSelfRef.__Vlvbound_h8e4774f5__0 = vlSelfRef.__Vtask_dpi_fmadd__3__fflags;
    vlSelfRef.__PVT__g_fma__DOT__fflags_fmadd = ((0x7ffffffffULL 
                                                  & vlSelfRef.__PVT__g_fma__DOT__fflags_fmadd) 
                                                 | ((QData)((IData)(vlSelfRef.__Vlvbound_h8e4774f5__0)) 
                                                    << 0x23U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmsub_TOP____024unit(vlSelfRef.__PVT__g_fma__DOT__fma_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                      >> 0xaU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xfU])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xeU]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0xfU])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0xeU]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [2U][0xfU])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [2U][0xeU]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_fmsub__4__result, vlSelfRef.__Vtask_dpi_fmsub__4__fflags);
    vlSelfRef.__PVT__g_fma__DOT__result_fmsub[0xeU] 
        = (IData)(vlSelfRef.__Vtask_dpi_fmsub__4__result);
    vlSelfRef.__PVT__g_fma__DOT__result_fmsub[0xfU] 
        = (IData)((vlSelfRef.__Vtask_dpi_fmsub__4__result 
                   >> 0x20U));
    vlSelfRef.__Vlvbound_h9e108cc1__0 = vlSelfRef.__Vtask_dpi_fmsub__4__fflags;
    vlSelfRef.__PVT__g_fma__DOT__fflags_fmsub = ((0x7ffffffffULL 
                                                  & vlSelfRef.__PVT__g_fma__DOT__fflags_fmsub) 
                                                 | ((QData)((IData)(vlSelfRef.__Vlvbound_h9e108cc1__0)) 
                                                    << 0x23U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fnmadd_TOP____024unit(vlSelfRef.__PVT__g_fma__DOT__fma_fire, 
                                                                   (1U 
                                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                       >> 0xaU)), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xfU])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xeU]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0xfU])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0xeU]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [2U][0xfU])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [2U][0xeU]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_fnmadd__5__result, vlSelfRef.__Vtask_dpi_fnmadd__5__fflags);
    vlSelfRef.__PVT__g_fma__DOT__result_fnmadd[0xeU] 
        = (IData)(vlSelfRef.__Vtask_dpi_fnmadd__5__result);
    vlSelfRef.__PVT__g_fma__DOT__result_fnmadd[0xfU] 
        = (IData)((vlSelfRef.__Vtask_dpi_fnmadd__5__result 
                   >> 0x20U));
    vlSelfRef.__Vlvbound_h00b49a27__0 = vlSelfRef.__Vtask_dpi_fnmadd__5__fflags;
    vlSelfRef.__PVT__g_fma__DOT__fflags_fnmadd = ((0x7ffffffffULL 
                                                   & vlSelfRef.__PVT__g_fma__DOT__fflags_fnmadd) 
                                                  | ((QData)((IData)(vlSelfRef.__Vlvbound_h00b49a27__0)) 
                                                     << 0x23U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fnmsub_TOP____024unit(vlSelfRef.__PVT__g_fma__DOT__fma_fire, 
                                                                   (1U 
                                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                       >> 0xaU)), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xfU])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xeU]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0xfU])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0xeU]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [2U][0xfU])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [2U][0xeU]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_fnmsub__6__result, vlSelfRef.__Vtask_dpi_fnmsub__6__fflags);
    vlSelfRef.__PVT__g_fma__DOT__result_fnmsub[0xeU] 
        = (IData)(vlSelfRef.__Vtask_dpi_fnmsub__6__result);
    vlSelfRef.__PVT__g_fma__DOT__result_fnmsub[0xfU] 
        = (IData)((vlSelfRef.__Vtask_dpi_fnmsub__6__result 
                   >> 0x20U));
    vlSelfRef.__Vlvbound_hb15d44e8__0 = vlSelfRef.__Vtask_dpi_fnmsub__6__fflags;
    vlSelfRef.__PVT__g_fma__DOT__fflags_fnmsub = ((0x7ffffffffULL 
                                                   & vlSelfRef.__PVT__g_fma__DOT__fflags_fnmsub) 
                                                  | ((QData)((IData)(vlSelfRef.__Vlvbound_hb15d44e8__0)) 
                                                     << 0x23U));
    if (vlSelfRef.__PVT__is_fadd) {
        vlSelfRef.__PVT__g_fma__DOT__result_fma[7U] 
            = vlSelfRef.__PVT__g_fma__DOT__result_fadd[0xeU];
        vlSelfRef.__Vlvbound_hda7898db__0 = (0x1fU 
                                             & (IData)(
                                                       (vlSelfRef.__PVT__g_fma__DOT__fflags_fadd 
                                                        >> 0x23U)));
    } else if (vlSelfRef.__PVT__is_fsub) {
        vlSelfRef.__PVT__g_fma__DOT__result_fma[7U] 
            = vlSelfRef.__PVT__g_fma__DOT__result_fsub[0xeU];
        vlSelfRef.__Vlvbound_hda7898db__0 = (0x1fU 
                                             & (IData)(
                                                       (vlSelfRef.__PVT__g_fma__DOT__fflags_fsub 
                                                        >> 0x23U)));
    } else if (vlSelfRef.__PVT__is_fmul) {
        vlSelfRef.__PVT__g_fma__DOT__result_fma[7U] 
            = vlSelfRef.__PVT__g_fma__DOT__result_fmul[0xeU];
        vlSelfRef.__Vlvbound_hda7898db__0 = (0x1fU 
                                             & (IData)(
                                                       (vlSelfRef.__PVT__g_fma__DOT__fflags_fmul 
                                                        >> 0x23U)));
    } else if (vlSelfRef.__PVT__is_fmadd) {
        vlSelfRef.__PVT__g_fma__DOT__result_fma[7U] 
            = vlSelfRef.__PVT__g_fma__DOT__result_fmadd[0xeU];
        vlSelfRef.__Vlvbound_hda7898db__0 = (0x1fU 
                                             & (IData)(
                                                       (vlSelfRef.__PVT__g_fma__DOT__fflags_fmadd 
                                                        >> 0x23U)));
    } else if (vlSelfRef.__PVT__is_fmsub) {
        vlSelfRef.__PVT__g_fma__DOT__result_fma[7U] 
            = vlSelfRef.__PVT__g_fma__DOT__result_fmsub[0xeU];
        vlSelfRef.__Vlvbound_hda7898db__0 = (0x1fU 
                                             & (IData)(
                                                       (vlSelfRef.__PVT__g_fma__DOT__fflags_fmsub 
                                                        >> 0x23U)));
    } else if (vlSelfRef.__PVT__is_fnmadd) {
        vlSelfRef.__PVT__g_fma__DOT__result_fma[7U] 
            = vlSelfRef.__PVT__g_fma__DOT__result_fnmadd[0xeU];
        vlSelfRef.__Vlvbound_hda7898db__0 = (0x1fU 
                                             & (IData)(
                                                       (vlSelfRef.__PVT__g_fma__DOT__fflags_fnmadd 
                                                        >> 0x23U)));
    } else if (vlSelfRef.__PVT__is_fnmsub) {
        vlSelfRef.__PVT__g_fma__DOT__result_fma[7U] 
            = vlSelfRef.__PVT__g_fma__DOT__result_fnmsub[0xeU];
        vlSelfRef.__Vlvbound_hda7898db__0 = (0x1fU 
                                             & (IData)(
                                                       (vlSelfRef.__PVT__g_fma__DOT__fflags_fnmsub 
                                                        >> 0x23U)));
    } else {
        vlSelfRef.__PVT__g_fma__DOT__result_fma[7U] = 0U;
        vlSelfRef.__Vlvbound_hda7898db__0 = (0x1fU 
                                             & 0U);
    }
    vlSelfRef.__PVT__g_fma__DOT__fflags_fma = ((0x7ffffffffULL 
                                                & vlSelfRef.__PVT__g_fma__DOT__fflags_fma) 
                                               | ((QData)((IData)(vlSelfRef.__Vlvbound_hda7898db__0)) 
                                                  << 0x23U));
    vlSelfRef.__PVT__g_fdiv__DOT__fdiv_fire = ((IData)(vlSelfRef.__PVT__g_fdiv__DOT__fdiv_valid) 
                                               & (IData)(vlSelfRef.__PVT__g_fdiv__DOT__fdiv_ready));
    vlSelfRef.__PVT__g_fsqrt__DOT__fsqrt_fire = ((IData)(vlSelfRef.__PVT__g_fsqrt__DOT__fsqrt_valid) 
                                                 & (IData)(vlSelfRef.__PVT__g_fsqrt__DOT__fsqrt_ready));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fclss_TOP____024unit(vlSelfRef.__PVT__g_fncp__DOT__fncp_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                      >> 0xaU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][1U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0U]))), vlSelfRef.__Vtask_dpi_fclss__14__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fclss[0U] 
        = (IData)(vlSelfRef.__Vtask_dpi_fclss__14__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fclss[1U] 
        = (IData)((vlSelfRef.__Vtask_dpi_fclss__14__result 
                   >> 0x20U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fle_TOP____024unit(vlSelfRef.__PVT__g_fncp__DOT__fncp_fire, 
                                                                (1U 
                                                                 & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                    >> 0xaU)), 
                                                                (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][1U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0U]))), 
                                                                (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][1U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0U]))), vlSelfRef.__Vtask_dpi_fle__15__result, vlSelfRef.__Vtask_dpi_fle__15__fflags);
    vlSelfRef.__PVT__g_fncp__DOT__result_fle[0U] = (IData)(vlSelfRef.__Vtask_dpi_fle__15__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fle[1U] = (IData)(
                                                           (vlSelfRef.__Vtask_dpi_fle__15__result 
                                                            >> 0x20U));
    vlSelfRef.__Vlvbound_ha2cc9156__0 = vlSelfRef.__Vtask_dpi_fle__15__fflags;
    vlSelfRef.__PVT__g_fncp__DOT__fflags_fle = ((0xffffffffe0ULL 
                                                 & vlSelfRef.__PVT__g_fncp__DOT__fflags_fle) 
                                                | (IData)((IData)(vlSelfRef.__Vlvbound_ha2cc9156__0)));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_flt_TOP____024unit(vlSelfRef.__PVT__g_fncp__DOT__fncp_fire, 
                                                                (1U 
                                                                 & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                    >> 0xaU)), 
                                                                (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][1U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0U]))), 
                                                                (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][1U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0U]))), vlSelfRef.__Vtask_dpi_flt__16__result, vlSelfRef.__Vtask_dpi_flt__16__fflags);
    vlSelfRef.__PVT__g_fncp__DOT__result_flt[0U] = (IData)(vlSelfRef.__Vtask_dpi_flt__16__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_flt[1U] = (IData)(
                                                           (vlSelfRef.__Vtask_dpi_flt__16__result 
                                                            >> 0x20U));
    vlSelfRef.__Vlvbound_hf435d626__0 = vlSelfRef.__Vtask_dpi_flt__16__fflags;
    vlSelfRef.__PVT__g_fncp__DOT__fflags_flt = ((0xffffffffe0ULL 
                                                 & vlSelfRef.__PVT__g_fncp__DOT__fflags_flt) 
                                                | (IData)((IData)(vlSelfRef.__Vlvbound_hf435d626__0)));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_feq_TOP____024unit(vlSelfRef.__PVT__g_fncp__DOT__fncp_fire, 
                                                                (1U 
                                                                 & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                    >> 0xaU)), 
                                                                (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][1U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0U]))), 
                                                                (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][1U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0U]))), vlSelfRef.__Vtask_dpi_feq__17__result, vlSelfRef.__Vtask_dpi_feq__17__fflags);
    vlSelfRef.__PVT__g_fncp__DOT__result_feq[0U] = (IData)(vlSelfRef.__Vtask_dpi_feq__17__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_feq[1U] = (IData)(
                                                           (vlSelfRef.__Vtask_dpi_feq__17__result 
                                                            >> 0x20U));
    vlSelfRef.__Vlvbound_ha1a19d18__0 = vlSelfRef.__Vtask_dpi_feq__17__fflags;
    vlSelfRef.__PVT__g_fncp__DOT__fflags_feq = ((0xffffffffe0ULL 
                                                 & vlSelfRef.__PVT__g_fncp__DOT__fflags_feq) 
                                                | (IData)((IData)(vlSelfRef.__Vlvbound_ha1a19d18__0)));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmin_TOP____024unit(vlSelfRef.__PVT__g_fncp__DOT__fncp_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0U]))), vlSelfRef.__Vtask_dpi_fmin__18__result, vlSelfRef.__Vtask_dpi_fmin__18__fflags);
    vlSelfRef.__PVT__g_fncp__DOT__result_fmin[0U] = (IData)(vlSelfRef.__Vtask_dpi_fmin__18__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fmin[1U] = (IData)(
                                                            (vlSelfRef.__Vtask_dpi_fmin__18__result 
                                                             >> 0x20U));
    vlSelfRef.__Vlvbound_h198eb02e__0 = vlSelfRef.__Vtask_dpi_fmin__18__fflags;
    vlSelfRef.__PVT__g_fncp__DOT__fflags_fmin = ((0xffffffffe0ULL 
                                                  & vlSelfRef.__PVT__g_fncp__DOT__fflags_fmin) 
                                                 | (IData)((IData)(vlSelfRef.__Vlvbound_h198eb02e__0)));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmax_TOP____024unit(vlSelfRef.__PVT__g_fncp__DOT__fncp_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0U]))), vlSelfRef.__Vtask_dpi_fmax__19__result, vlSelfRef.__Vtask_dpi_fmax__19__fflags);
    vlSelfRef.__PVT__g_fncp__DOT__result_fmax[0U] = (IData)(vlSelfRef.__Vtask_dpi_fmax__19__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fmax[1U] = (IData)(
                                                            (vlSelfRef.__Vtask_dpi_fmax__19__result 
                                                             >> 0x20U));
    vlSelfRef.__Vlvbound_h3048d8db__0 = vlSelfRef.__Vtask_dpi_fmax__19__fflags;
    vlSelfRef.__PVT__g_fncp__DOT__fflags_fmax = ((0xffffffffe0ULL 
                                                  & vlSelfRef.__PVT__g_fncp__DOT__fflags_fmax) 
                                                 | (IData)((IData)(vlSelfRef.__Vlvbound_h3048d8db__0)));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsgnj_TOP____024unit(vlSelfRef.__PVT__g_fncp__DOT__fncp_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                      >> 0xaU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][1U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0U]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][1U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0U]))), vlSelfRef.__Vtask_dpi_fsgnj__20__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fsgnj[0U] 
        = (IData)(vlSelfRef.__Vtask_dpi_fsgnj__20__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fsgnj[1U] 
        = (IData)((vlSelfRef.__Vtask_dpi_fsgnj__20__result 
                   >> 0x20U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsgnjn_TOP____024unit(vlSelfRef.__PVT__g_fncp__DOT__fncp_fire, 
                                                                   (1U 
                                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                       >> 0xaU)), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][1U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][1U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0U]))), vlSelfRef.__Vtask_dpi_fsgnjn__21__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fsgnjn[0U] 
        = (IData)(vlSelfRef.__Vtask_dpi_fsgnjn__21__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fsgnjn[1U] 
        = (IData)((vlSelfRef.__Vtask_dpi_fsgnjn__21__result 
                   >> 0x20U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsgnjx_TOP____024unit(vlSelfRef.__PVT__g_fncp__DOT__fncp_fire, 
                                                                   (1U 
                                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                       >> 0xaU)), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][1U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][1U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0U]))), vlSelfRef.__Vtask_dpi_fsgnjx__22__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fsgnjx[0U] 
        = (IData)(vlSelfRef.__Vtask_dpi_fsgnjx__22__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fsgnjx[1U] 
        = (IData)((vlSelfRef.__Vtask_dpi_fsgnjx__22__result 
                   >> 0x20U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fclss_TOP____024unit(vlSelfRef.__PVT__g_fncp__DOT__fncp_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                      >> 0xaU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][3U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][2U]))), vlSelfRef.__Vtask_dpi_fclss__14__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fclss[2U] 
        = (IData)(vlSelfRef.__Vtask_dpi_fclss__14__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fclss[3U] 
        = (IData)((vlSelfRef.__Vtask_dpi_fclss__14__result 
                   >> 0x20U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fle_TOP____024unit(vlSelfRef.__PVT__g_fncp__DOT__fncp_fire, 
                                                                (1U 
                                                                 & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                    >> 0xaU)), 
                                                                (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][3U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][2U]))), 
                                                                (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][3U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][2U]))), vlSelfRef.__Vtask_dpi_fle__15__result, vlSelfRef.__Vtask_dpi_fle__15__fflags);
    vlSelfRef.__PVT__g_fncp__DOT__result_fle[2U] = (IData)(vlSelfRef.__Vtask_dpi_fle__15__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fle[3U] = (IData)(
                                                           (vlSelfRef.__Vtask_dpi_fle__15__result 
                                                            >> 0x20U));
    vlSelfRef.__Vlvbound_ha2cc9156__0 = vlSelfRef.__Vtask_dpi_fle__15__fflags;
    vlSelfRef.__PVT__g_fncp__DOT__fflags_fle = ((0xfffffffc1fULL 
                                                 & vlSelfRef.__PVT__g_fncp__DOT__fflags_fle) 
                                                | ((QData)((IData)(vlSelfRef.__Vlvbound_ha2cc9156__0)) 
                                                   << 5U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_flt_TOP____024unit(vlSelfRef.__PVT__g_fncp__DOT__fncp_fire, 
                                                                (1U 
                                                                 & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                    >> 0xaU)), 
                                                                (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][3U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][2U]))), 
                                                                (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][3U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][2U]))), vlSelfRef.__Vtask_dpi_flt__16__result, vlSelfRef.__Vtask_dpi_flt__16__fflags);
    vlSelfRef.__PVT__g_fncp__DOT__result_flt[2U] = (IData)(vlSelfRef.__Vtask_dpi_flt__16__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_flt[3U] = (IData)(
                                                           (vlSelfRef.__Vtask_dpi_flt__16__result 
                                                            >> 0x20U));
    vlSelfRef.__Vlvbound_hf435d626__0 = vlSelfRef.__Vtask_dpi_flt__16__fflags;
    vlSelfRef.__PVT__g_fncp__DOT__fflags_flt = ((0xfffffffc1fULL 
                                                 & vlSelfRef.__PVT__g_fncp__DOT__fflags_flt) 
                                                | ((QData)((IData)(vlSelfRef.__Vlvbound_hf435d626__0)) 
                                                   << 5U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_feq_TOP____024unit(vlSelfRef.__PVT__g_fncp__DOT__fncp_fire, 
                                                                (1U 
                                                                 & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                    >> 0xaU)), 
                                                                (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][3U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][2U]))), 
                                                                (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][3U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][2U]))), vlSelfRef.__Vtask_dpi_feq__17__result, vlSelfRef.__Vtask_dpi_feq__17__fflags);
    vlSelfRef.__PVT__g_fncp__DOT__result_feq[2U] = (IData)(vlSelfRef.__Vtask_dpi_feq__17__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_feq[3U] = (IData)(
                                                           (vlSelfRef.__Vtask_dpi_feq__17__result 
                                                            >> 0x20U));
    vlSelfRef.__Vlvbound_ha1a19d18__0 = vlSelfRef.__Vtask_dpi_feq__17__fflags;
    vlSelfRef.__PVT__g_fncp__DOT__fflags_feq = ((0xfffffffc1fULL 
                                                 & vlSelfRef.__PVT__g_fncp__DOT__fflags_feq) 
                                                | ((QData)((IData)(vlSelfRef.__Vlvbound_ha1a19d18__0)) 
                                                   << 5U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmin_TOP____024unit(vlSelfRef.__PVT__g_fncp__DOT__fncp_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][3U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][2U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][3U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][2U]))), vlSelfRef.__Vtask_dpi_fmin__18__result, vlSelfRef.__Vtask_dpi_fmin__18__fflags);
    vlSelfRef.__PVT__g_fncp__DOT__result_fmin[2U] = (IData)(vlSelfRef.__Vtask_dpi_fmin__18__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fmin[3U] = (IData)(
                                                            (vlSelfRef.__Vtask_dpi_fmin__18__result 
                                                             >> 0x20U));
    vlSelfRef.__Vlvbound_h198eb02e__0 = vlSelfRef.__Vtask_dpi_fmin__18__fflags;
    vlSelfRef.__PVT__g_fncp__DOT__fflags_fmin = ((0xfffffffc1fULL 
                                                  & vlSelfRef.__PVT__g_fncp__DOT__fflags_fmin) 
                                                 | ((QData)((IData)(vlSelfRef.__Vlvbound_h198eb02e__0)) 
                                                    << 5U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmax_TOP____024unit(vlSelfRef.__PVT__g_fncp__DOT__fncp_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][3U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][2U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][3U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][2U]))), vlSelfRef.__Vtask_dpi_fmax__19__result, vlSelfRef.__Vtask_dpi_fmax__19__fflags);
    vlSelfRef.__PVT__g_fncp__DOT__result_fmax[2U] = (IData)(vlSelfRef.__Vtask_dpi_fmax__19__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fmax[3U] = (IData)(
                                                            (vlSelfRef.__Vtask_dpi_fmax__19__result 
                                                             >> 0x20U));
    vlSelfRef.__Vlvbound_h3048d8db__0 = vlSelfRef.__Vtask_dpi_fmax__19__fflags;
    vlSelfRef.__PVT__g_fncp__DOT__fflags_fmax = ((0xfffffffc1fULL 
                                                  & vlSelfRef.__PVT__g_fncp__DOT__fflags_fmax) 
                                                 | ((QData)((IData)(vlSelfRef.__Vlvbound_h3048d8db__0)) 
                                                    << 5U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsgnj_TOP____024unit(vlSelfRef.__PVT__g_fncp__DOT__fncp_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                      >> 0xaU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][3U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][2U]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][3U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][2U]))), vlSelfRef.__Vtask_dpi_fsgnj__20__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fsgnj[2U] 
        = (IData)(vlSelfRef.__Vtask_dpi_fsgnj__20__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fsgnj[3U] 
        = (IData)((vlSelfRef.__Vtask_dpi_fsgnj__20__result 
                   >> 0x20U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsgnjn_TOP____024unit(vlSelfRef.__PVT__g_fncp__DOT__fncp_fire, 
                                                                   (1U 
                                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                       >> 0xaU)), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][3U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][2U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][3U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][2U]))), vlSelfRef.__Vtask_dpi_fsgnjn__21__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fsgnjn[2U] 
        = (IData)(vlSelfRef.__Vtask_dpi_fsgnjn__21__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fsgnjn[3U] 
        = (IData)((vlSelfRef.__Vtask_dpi_fsgnjn__21__result 
                   >> 0x20U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsgnjx_TOP____024unit(vlSelfRef.__PVT__g_fncp__DOT__fncp_fire, 
                                                                   (1U 
                                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                       >> 0xaU)), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][3U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][2U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][3U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][2U]))), vlSelfRef.__Vtask_dpi_fsgnjx__22__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fsgnjx[2U] 
        = (IData)(vlSelfRef.__Vtask_dpi_fsgnjx__22__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fsgnjx[3U] 
        = (IData)((vlSelfRef.__Vtask_dpi_fsgnjx__22__result 
                   >> 0x20U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fclss_TOP____024unit(vlSelfRef.__PVT__g_fncp__DOT__fncp_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                      >> 0xaU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][5U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][4U]))), vlSelfRef.__Vtask_dpi_fclss__14__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fclss[4U] 
        = (IData)(vlSelfRef.__Vtask_dpi_fclss__14__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fclss[5U] 
        = (IData)((vlSelfRef.__Vtask_dpi_fclss__14__result 
                   >> 0x20U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fle_TOP____024unit(vlSelfRef.__PVT__g_fncp__DOT__fncp_fire, 
                                                                (1U 
                                                                 & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                    >> 0xaU)), 
                                                                (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][5U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][4U]))), 
                                                                (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][5U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][4U]))), vlSelfRef.__Vtask_dpi_fle__15__result, vlSelfRef.__Vtask_dpi_fle__15__fflags);
    vlSelfRef.__PVT__g_fncp__DOT__result_fle[4U] = (IData)(vlSelfRef.__Vtask_dpi_fle__15__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fle[5U] = (IData)(
                                                           (vlSelfRef.__Vtask_dpi_fle__15__result 
                                                            >> 0x20U));
    vlSelfRef.__Vlvbound_ha2cc9156__0 = vlSelfRef.__Vtask_dpi_fle__15__fflags;
    vlSelfRef.__PVT__g_fncp__DOT__fflags_fle = ((0xffffff83ffULL 
                                                 & vlSelfRef.__PVT__g_fncp__DOT__fflags_fle) 
                                                | ((QData)((IData)(vlSelfRef.__Vlvbound_ha2cc9156__0)) 
                                                   << 0xaU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_flt_TOP____024unit(vlSelfRef.__PVT__g_fncp__DOT__fncp_fire, 
                                                                (1U 
                                                                 & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                    >> 0xaU)), 
                                                                (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][5U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][4U]))), 
                                                                (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][5U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][4U]))), vlSelfRef.__Vtask_dpi_flt__16__result, vlSelfRef.__Vtask_dpi_flt__16__fflags);
    vlSelfRef.__PVT__g_fncp__DOT__result_flt[4U] = (IData)(vlSelfRef.__Vtask_dpi_flt__16__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_flt[5U] = (IData)(
                                                           (vlSelfRef.__Vtask_dpi_flt__16__result 
                                                            >> 0x20U));
    vlSelfRef.__Vlvbound_hf435d626__0 = vlSelfRef.__Vtask_dpi_flt__16__fflags;
    vlSelfRef.__PVT__g_fncp__DOT__fflags_flt = ((0xffffff83ffULL 
                                                 & vlSelfRef.__PVT__g_fncp__DOT__fflags_flt) 
                                                | ((QData)((IData)(vlSelfRef.__Vlvbound_hf435d626__0)) 
                                                   << 0xaU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_feq_TOP____024unit(vlSelfRef.__PVT__g_fncp__DOT__fncp_fire, 
                                                                (1U 
                                                                 & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                    >> 0xaU)), 
                                                                (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][5U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][4U]))), 
                                                                (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][5U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][4U]))), vlSelfRef.__Vtask_dpi_feq__17__result, vlSelfRef.__Vtask_dpi_feq__17__fflags);
    vlSelfRef.__PVT__g_fncp__DOT__result_feq[4U] = (IData)(vlSelfRef.__Vtask_dpi_feq__17__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_feq[5U] = (IData)(
                                                           (vlSelfRef.__Vtask_dpi_feq__17__result 
                                                            >> 0x20U));
    vlSelfRef.__Vlvbound_ha1a19d18__0 = vlSelfRef.__Vtask_dpi_feq__17__fflags;
    vlSelfRef.__PVT__g_fncp__DOT__fflags_feq = ((0xffffff83ffULL 
                                                 & vlSelfRef.__PVT__g_fncp__DOT__fflags_feq) 
                                                | ((QData)((IData)(vlSelfRef.__Vlvbound_ha1a19d18__0)) 
                                                   << 0xaU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmin_TOP____024unit(vlSelfRef.__PVT__g_fncp__DOT__fncp_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][5U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][4U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][5U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][4U]))), vlSelfRef.__Vtask_dpi_fmin__18__result, vlSelfRef.__Vtask_dpi_fmin__18__fflags);
    vlSelfRef.__PVT__g_fncp__DOT__result_fmin[4U] = (IData)(vlSelfRef.__Vtask_dpi_fmin__18__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fmin[5U] = (IData)(
                                                            (vlSelfRef.__Vtask_dpi_fmin__18__result 
                                                             >> 0x20U));
    vlSelfRef.__Vlvbound_h198eb02e__0 = vlSelfRef.__Vtask_dpi_fmin__18__fflags;
    vlSelfRef.__PVT__g_fncp__DOT__fflags_fmin = ((0xffffff83ffULL 
                                                  & vlSelfRef.__PVT__g_fncp__DOT__fflags_fmin) 
                                                 | ((QData)((IData)(vlSelfRef.__Vlvbound_h198eb02e__0)) 
                                                    << 0xaU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmax_TOP____024unit(vlSelfRef.__PVT__g_fncp__DOT__fncp_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][5U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][4U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][5U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][4U]))), vlSelfRef.__Vtask_dpi_fmax__19__result, vlSelfRef.__Vtask_dpi_fmax__19__fflags);
    vlSelfRef.__PVT__g_fncp__DOT__result_fmax[4U] = (IData)(vlSelfRef.__Vtask_dpi_fmax__19__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fmax[5U] = (IData)(
                                                            (vlSelfRef.__Vtask_dpi_fmax__19__result 
                                                             >> 0x20U));
    vlSelfRef.__Vlvbound_h3048d8db__0 = vlSelfRef.__Vtask_dpi_fmax__19__fflags;
    vlSelfRef.__PVT__g_fncp__DOT__fflags_fmax = ((0xffffff83ffULL 
                                                  & vlSelfRef.__PVT__g_fncp__DOT__fflags_fmax) 
                                                 | ((QData)((IData)(vlSelfRef.__Vlvbound_h3048d8db__0)) 
                                                    << 0xaU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsgnj_TOP____024unit(vlSelfRef.__PVT__g_fncp__DOT__fncp_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                      >> 0xaU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][5U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][4U]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][5U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][4U]))), vlSelfRef.__Vtask_dpi_fsgnj__20__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fsgnj[4U] 
        = (IData)(vlSelfRef.__Vtask_dpi_fsgnj__20__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fsgnj[5U] 
        = (IData)((vlSelfRef.__Vtask_dpi_fsgnj__20__result 
                   >> 0x20U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsgnjn_TOP____024unit(vlSelfRef.__PVT__g_fncp__DOT__fncp_fire, 
                                                                   (1U 
                                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                       >> 0xaU)), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][5U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][4U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][5U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][4U]))), vlSelfRef.__Vtask_dpi_fsgnjn__21__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fsgnjn[4U] 
        = (IData)(vlSelfRef.__Vtask_dpi_fsgnjn__21__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fsgnjn[5U] 
        = (IData)((vlSelfRef.__Vtask_dpi_fsgnjn__21__result 
                   >> 0x20U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsgnjx_TOP____024unit(vlSelfRef.__PVT__g_fncp__DOT__fncp_fire, 
                                                                   (1U 
                                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                       >> 0xaU)), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][5U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][4U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][5U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][4U]))), vlSelfRef.__Vtask_dpi_fsgnjx__22__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fsgnjx[4U] 
        = (IData)(vlSelfRef.__Vtask_dpi_fsgnjx__22__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fsgnjx[5U] 
        = (IData)((vlSelfRef.__Vtask_dpi_fsgnjx__22__result 
                   >> 0x20U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fclss_TOP____024unit(vlSelfRef.__PVT__g_fncp__DOT__fncp_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                      >> 0xaU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][7U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][6U]))), vlSelfRef.__Vtask_dpi_fclss__14__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fclss[6U] 
        = (IData)(vlSelfRef.__Vtask_dpi_fclss__14__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fclss[7U] 
        = (IData)((vlSelfRef.__Vtask_dpi_fclss__14__result 
                   >> 0x20U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fle_TOP____024unit(vlSelfRef.__PVT__g_fncp__DOT__fncp_fire, 
                                                                (1U 
                                                                 & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                    >> 0xaU)), 
                                                                (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][7U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][6U]))), 
                                                                (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][7U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][6U]))), vlSelfRef.__Vtask_dpi_fle__15__result, vlSelfRef.__Vtask_dpi_fle__15__fflags);
    vlSelfRef.__PVT__g_fncp__DOT__result_fle[6U] = (IData)(vlSelfRef.__Vtask_dpi_fle__15__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fle[7U] = (IData)(
                                                           (vlSelfRef.__Vtask_dpi_fle__15__result 
                                                            >> 0x20U));
    vlSelfRef.__Vlvbound_ha2cc9156__0 = vlSelfRef.__Vtask_dpi_fle__15__fflags;
    vlSelfRef.__PVT__g_fncp__DOT__fflags_fle = ((0xfffff07fffULL 
                                                 & vlSelfRef.__PVT__g_fncp__DOT__fflags_fle) 
                                                | ((QData)((IData)(vlSelfRef.__Vlvbound_ha2cc9156__0)) 
                                                   << 0xfU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_flt_TOP____024unit(vlSelfRef.__PVT__g_fncp__DOT__fncp_fire, 
                                                                (1U 
                                                                 & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                    >> 0xaU)), 
                                                                (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][7U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][6U]))), 
                                                                (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][7U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][6U]))), vlSelfRef.__Vtask_dpi_flt__16__result, vlSelfRef.__Vtask_dpi_flt__16__fflags);
    vlSelfRef.__PVT__g_fncp__DOT__result_flt[6U] = (IData)(vlSelfRef.__Vtask_dpi_flt__16__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_flt[7U] = (IData)(
                                                           (vlSelfRef.__Vtask_dpi_flt__16__result 
                                                            >> 0x20U));
    vlSelfRef.__Vlvbound_hf435d626__0 = vlSelfRef.__Vtask_dpi_flt__16__fflags;
    vlSelfRef.__PVT__g_fncp__DOT__fflags_flt = ((0xfffff07fffULL 
                                                 & vlSelfRef.__PVT__g_fncp__DOT__fflags_flt) 
                                                | ((QData)((IData)(vlSelfRef.__Vlvbound_hf435d626__0)) 
                                                   << 0xfU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_feq_TOP____024unit(vlSelfRef.__PVT__g_fncp__DOT__fncp_fire, 
                                                                (1U 
                                                                 & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                    >> 0xaU)), 
                                                                (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][7U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][6U]))), 
                                                                (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][7U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][6U]))), vlSelfRef.__Vtask_dpi_feq__17__result, vlSelfRef.__Vtask_dpi_feq__17__fflags);
    vlSelfRef.__PVT__g_fncp__DOT__result_feq[6U] = (IData)(vlSelfRef.__Vtask_dpi_feq__17__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_feq[7U] = (IData)(
                                                           (vlSelfRef.__Vtask_dpi_feq__17__result 
                                                            >> 0x20U));
    vlSelfRef.__Vlvbound_ha1a19d18__0 = vlSelfRef.__Vtask_dpi_feq__17__fflags;
    vlSelfRef.__PVT__g_fncp__DOT__fflags_feq = ((0xfffff07fffULL 
                                                 & vlSelfRef.__PVT__g_fncp__DOT__fflags_feq) 
                                                | ((QData)((IData)(vlSelfRef.__Vlvbound_ha1a19d18__0)) 
                                                   << 0xfU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmin_TOP____024unit(vlSelfRef.__PVT__g_fncp__DOT__fncp_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][7U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][6U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][7U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][6U]))), vlSelfRef.__Vtask_dpi_fmin__18__result, vlSelfRef.__Vtask_dpi_fmin__18__fflags);
    vlSelfRef.__PVT__g_fncp__DOT__result_fmin[6U] = (IData)(vlSelfRef.__Vtask_dpi_fmin__18__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fmin[7U] = (IData)(
                                                            (vlSelfRef.__Vtask_dpi_fmin__18__result 
                                                             >> 0x20U));
    vlSelfRef.__Vlvbound_h198eb02e__0 = vlSelfRef.__Vtask_dpi_fmin__18__fflags;
    vlSelfRef.__PVT__g_fncp__DOT__fflags_fmin = ((0xfffff07fffULL 
                                                  & vlSelfRef.__PVT__g_fncp__DOT__fflags_fmin) 
                                                 | ((QData)((IData)(vlSelfRef.__Vlvbound_h198eb02e__0)) 
                                                    << 0xfU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmax_TOP____024unit(vlSelfRef.__PVT__g_fncp__DOT__fncp_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][7U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][6U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][7U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][6U]))), vlSelfRef.__Vtask_dpi_fmax__19__result, vlSelfRef.__Vtask_dpi_fmax__19__fflags);
    vlSelfRef.__PVT__g_fncp__DOT__result_fmax[6U] = (IData)(vlSelfRef.__Vtask_dpi_fmax__19__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fmax[7U] = (IData)(
                                                            (vlSelfRef.__Vtask_dpi_fmax__19__result 
                                                             >> 0x20U));
    vlSelfRef.__Vlvbound_h3048d8db__0 = vlSelfRef.__Vtask_dpi_fmax__19__fflags;
    vlSelfRef.__PVT__g_fncp__DOT__fflags_fmax = ((0xfffff07fffULL 
                                                  & vlSelfRef.__PVT__g_fncp__DOT__fflags_fmax) 
                                                 | ((QData)((IData)(vlSelfRef.__Vlvbound_h3048d8db__0)) 
                                                    << 0xfU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsgnj_TOP____024unit(vlSelfRef.__PVT__g_fncp__DOT__fncp_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                      >> 0xaU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][7U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][6U]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][7U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][6U]))), vlSelfRef.__Vtask_dpi_fsgnj__20__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fsgnj[6U] 
        = (IData)(vlSelfRef.__Vtask_dpi_fsgnj__20__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fsgnj[7U] 
        = (IData)((vlSelfRef.__Vtask_dpi_fsgnj__20__result 
                   >> 0x20U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsgnjn_TOP____024unit(vlSelfRef.__PVT__g_fncp__DOT__fncp_fire, 
                                                                   (1U 
                                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                       >> 0xaU)), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][7U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][6U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][7U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][6U]))), vlSelfRef.__Vtask_dpi_fsgnjn__21__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fsgnjn[6U] 
        = (IData)(vlSelfRef.__Vtask_dpi_fsgnjn__21__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fsgnjn[7U] 
        = (IData)((vlSelfRef.__Vtask_dpi_fsgnjn__21__result 
                   >> 0x20U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsgnjx_TOP____024unit(vlSelfRef.__PVT__g_fncp__DOT__fncp_fire, 
                                                                   (1U 
                                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                       >> 0xaU)), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][7U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][6U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][7U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][6U]))), vlSelfRef.__Vtask_dpi_fsgnjx__22__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fsgnjx[6U] 
        = (IData)(vlSelfRef.__Vtask_dpi_fsgnjx__22__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fsgnjx[7U] 
        = (IData)((vlSelfRef.__Vtask_dpi_fsgnjx__22__result 
                   >> 0x20U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fclss_TOP____024unit(vlSelfRef.__PVT__g_fncp__DOT__fncp_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                      >> 0xaU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][9U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][8U]))), vlSelfRef.__Vtask_dpi_fclss__14__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fclss[8U] 
        = (IData)(vlSelfRef.__Vtask_dpi_fclss__14__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fclss[9U] 
        = (IData)((vlSelfRef.__Vtask_dpi_fclss__14__result 
                   >> 0x20U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fle_TOP____024unit(vlSelfRef.__PVT__g_fncp__DOT__fncp_fire, 
                                                                (1U 
                                                                 & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                    >> 0xaU)), 
                                                                (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][9U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][8U]))), 
                                                                (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][9U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][8U]))), vlSelfRef.__Vtask_dpi_fle__15__result, vlSelfRef.__Vtask_dpi_fle__15__fflags);
    vlSelfRef.__PVT__g_fncp__DOT__result_fle[8U] = (IData)(vlSelfRef.__Vtask_dpi_fle__15__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fle[9U] = (IData)(
                                                           (vlSelfRef.__Vtask_dpi_fle__15__result 
                                                            >> 0x20U));
    vlSelfRef.__Vlvbound_ha2cc9156__0 = vlSelfRef.__Vtask_dpi_fle__15__fflags;
    vlSelfRef.__PVT__g_fncp__DOT__fflags_fle = ((0xfffe0fffffULL 
                                                 & vlSelfRef.__PVT__g_fncp__DOT__fflags_fle) 
                                                | ((QData)((IData)(vlSelfRef.__Vlvbound_ha2cc9156__0)) 
                                                   << 0x14U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_flt_TOP____024unit(vlSelfRef.__PVT__g_fncp__DOT__fncp_fire, 
                                                                (1U 
                                                                 & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                    >> 0xaU)), 
                                                                (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][9U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][8U]))), 
                                                                (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][9U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][8U]))), vlSelfRef.__Vtask_dpi_flt__16__result, vlSelfRef.__Vtask_dpi_flt__16__fflags);
    vlSelfRef.__PVT__g_fncp__DOT__result_flt[8U] = (IData)(vlSelfRef.__Vtask_dpi_flt__16__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_flt[9U] = (IData)(
                                                           (vlSelfRef.__Vtask_dpi_flt__16__result 
                                                            >> 0x20U));
    vlSelfRef.__Vlvbound_hf435d626__0 = vlSelfRef.__Vtask_dpi_flt__16__fflags;
    vlSelfRef.__PVT__g_fncp__DOT__fflags_flt = ((0xfffe0fffffULL 
                                                 & vlSelfRef.__PVT__g_fncp__DOT__fflags_flt) 
                                                | ((QData)((IData)(vlSelfRef.__Vlvbound_hf435d626__0)) 
                                                   << 0x14U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_feq_TOP____024unit(vlSelfRef.__PVT__g_fncp__DOT__fncp_fire, 
                                                                (1U 
                                                                 & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                    >> 0xaU)), 
                                                                (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][9U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][8U]))), 
                                                                (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][9U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][8U]))), vlSelfRef.__Vtask_dpi_feq__17__result, vlSelfRef.__Vtask_dpi_feq__17__fflags);
    vlSelfRef.__PVT__g_fncp__DOT__result_feq[8U] = (IData)(vlSelfRef.__Vtask_dpi_feq__17__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_feq[9U] = (IData)(
                                                           (vlSelfRef.__Vtask_dpi_feq__17__result 
                                                            >> 0x20U));
    vlSelfRef.__Vlvbound_ha1a19d18__0 = vlSelfRef.__Vtask_dpi_feq__17__fflags;
    vlSelfRef.__PVT__g_fncp__DOT__fflags_feq = ((0xfffe0fffffULL 
                                                 & vlSelfRef.__PVT__g_fncp__DOT__fflags_feq) 
                                                | ((QData)((IData)(vlSelfRef.__Vlvbound_ha1a19d18__0)) 
                                                   << 0x14U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmin_TOP____024unit(vlSelfRef.__PVT__g_fncp__DOT__fncp_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][9U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][8U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][9U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][8U]))), vlSelfRef.__Vtask_dpi_fmin__18__result, vlSelfRef.__Vtask_dpi_fmin__18__fflags);
    vlSelfRef.__PVT__g_fncp__DOT__result_fmin[8U] = (IData)(vlSelfRef.__Vtask_dpi_fmin__18__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fmin[9U] = (IData)(
                                                            (vlSelfRef.__Vtask_dpi_fmin__18__result 
                                                             >> 0x20U));
    vlSelfRef.__Vlvbound_h198eb02e__0 = vlSelfRef.__Vtask_dpi_fmin__18__fflags;
    vlSelfRef.__PVT__g_fncp__DOT__fflags_fmin = ((0xfffe0fffffULL 
                                                  & vlSelfRef.__PVT__g_fncp__DOT__fflags_fmin) 
                                                 | ((QData)((IData)(vlSelfRef.__Vlvbound_h198eb02e__0)) 
                                                    << 0x14U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmax_TOP____024unit(vlSelfRef.__PVT__g_fncp__DOT__fncp_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][9U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][8U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][9U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][8U]))), vlSelfRef.__Vtask_dpi_fmax__19__result, vlSelfRef.__Vtask_dpi_fmax__19__fflags);
    vlSelfRef.__PVT__g_fncp__DOT__result_fmax[8U] = (IData)(vlSelfRef.__Vtask_dpi_fmax__19__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fmax[9U] = (IData)(
                                                            (vlSelfRef.__Vtask_dpi_fmax__19__result 
                                                             >> 0x20U));
    vlSelfRef.__Vlvbound_h3048d8db__0 = vlSelfRef.__Vtask_dpi_fmax__19__fflags;
    vlSelfRef.__PVT__g_fncp__DOT__fflags_fmax = ((0xfffe0fffffULL 
                                                  & vlSelfRef.__PVT__g_fncp__DOT__fflags_fmax) 
                                                 | ((QData)((IData)(vlSelfRef.__Vlvbound_h3048d8db__0)) 
                                                    << 0x14U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsgnj_TOP____024unit(vlSelfRef.__PVT__g_fncp__DOT__fncp_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                      >> 0xaU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][9U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][8U]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][9U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][8U]))), vlSelfRef.__Vtask_dpi_fsgnj__20__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fsgnj[8U] 
        = (IData)(vlSelfRef.__Vtask_dpi_fsgnj__20__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fsgnj[9U] 
        = (IData)((vlSelfRef.__Vtask_dpi_fsgnj__20__result 
                   >> 0x20U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsgnjn_TOP____024unit(vlSelfRef.__PVT__g_fncp__DOT__fncp_fire, 
                                                                   (1U 
                                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                       >> 0xaU)), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][9U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][8U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][9U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][8U]))), vlSelfRef.__Vtask_dpi_fsgnjn__21__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fsgnjn[8U] 
        = (IData)(vlSelfRef.__Vtask_dpi_fsgnjn__21__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fsgnjn[9U] 
        = (IData)((vlSelfRef.__Vtask_dpi_fsgnjn__21__result 
                   >> 0x20U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsgnjx_TOP____024unit(vlSelfRef.__PVT__g_fncp__DOT__fncp_fire, 
                                                                   (1U 
                                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                       >> 0xaU)), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][9U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][8U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][9U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][8U]))), vlSelfRef.__Vtask_dpi_fsgnjx__22__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fsgnjx[8U] 
        = (IData)(vlSelfRef.__Vtask_dpi_fsgnjx__22__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fsgnjx[9U] 
        = (IData)((vlSelfRef.__Vtask_dpi_fsgnjx__22__result 
                   >> 0x20U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fclss_TOP____024unit(vlSelfRef.__PVT__g_fncp__DOT__fncp_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                      >> 0xaU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xbU])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xaU]))), vlSelfRef.__Vtask_dpi_fclss__14__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fclss[0xaU] 
        = (IData)(vlSelfRef.__Vtask_dpi_fclss__14__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fclss[0xbU] 
        = (IData)((vlSelfRef.__Vtask_dpi_fclss__14__result 
                   >> 0x20U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fle_TOP____024unit(vlSelfRef.__PVT__g_fncp__DOT__fncp_fire, 
                                                                (1U 
                                                                 & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                    >> 0xaU)), 
                                                                (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xbU])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xaU]))), 
                                                                (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0xbU])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0xaU]))), vlSelfRef.__Vtask_dpi_fle__15__result, vlSelfRef.__Vtask_dpi_fle__15__fflags);
    vlSelfRef.__PVT__g_fncp__DOT__result_fle[0xaU] 
        = (IData)(vlSelfRef.__Vtask_dpi_fle__15__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fle[0xbU] 
        = (IData)((vlSelfRef.__Vtask_dpi_fle__15__result 
                   >> 0x20U));
    vlSelfRef.__Vlvbound_ha2cc9156__0 = vlSelfRef.__Vtask_dpi_fle__15__fflags;
    vlSelfRef.__PVT__g_fncp__DOT__fflags_fle = ((0xffc1ffffffULL 
                                                 & vlSelfRef.__PVT__g_fncp__DOT__fflags_fle) 
                                                | ((QData)((IData)(vlSelfRef.__Vlvbound_ha2cc9156__0)) 
                                                   << 0x19U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_flt_TOP____024unit(vlSelfRef.__PVT__g_fncp__DOT__fncp_fire, 
                                                                (1U 
                                                                 & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                    >> 0xaU)), 
                                                                (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xbU])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xaU]))), 
                                                                (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0xbU])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0xaU]))), vlSelfRef.__Vtask_dpi_flt__16__result, vlSelfRef.__Vtask_dpi_flt__16__fflags);
    vlSelfRef.__PVT__g_fncp__DOT__result_flt[0xaU] 
        = (IData)(vlSelfRef.__Vtask_dpi_flt__16__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_flt[0xbU] 
        = (IData)((vlSelfRef.__Vtask_dpi_flt__16__result 
                   >> 0x20U));
    vlSelfRef.__Vlvbound_hf435d626__0 = vlSelfRef.__Vtask_dpi_flt__16__fflags;
    vlSelfRef.__PVT__g_fncp__DOT__fflags_flt = ((0xffc1ffffffULL 
                                                 & vlSelfRef.__PVT__g_fncp__DOT__fflags_flt) 
                                                | ((QData)((IData)(vlSelfRef.__Vlvbound_hf435d626__0)) 
                                                   << 0x19U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_feq_TOP____024unit(vlSelfRef.__PVT__g_fncp__DOT__fncp_fire, 
                                                                (1U 
                                                                 & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                    >> 0xaU)), 
                                                                (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xbU])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xaU]))), 
                                                                (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0xbU])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0xaU]))), vlSelfRef.__Vtask_dpi_feq__17__result, vlSelfRef.__Vtask_dpi_feq__17__fflags);
    vlSelfRef.__PVT__g_fncp__DOT__result_feq[0xaU] 
        = (IData)(vlSelfRef.__Vtask_dpi_feq__17__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_feq[0xbU] 
        = (IData)((vlSelfRef.__Vtask_dpi_feq__17__result 
                   >> 0x20U));
    vlSelfRef.__Vlvbound_ha1a19d18__0 = vlSelfRef.__Vtask_dpi_feq__17__fflags;
    vlSelfRef.__PVT__g_fncp__DOT__fflags_feq = ((0xffc1ffffffULL 
                                                 & vlSelfRef.__PVT__g_fncp__DOT__fflags_feq) 
                                                | ((QData)((IData)(vlSelfRef.__Vlvbound_ha1a19d18__0)) 
                                                   << 0x19U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmin_TOP____024unit(vlSelfRef.__PVT__g_fncp__DOT__fncp_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xbU])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xaU]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0xbU])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0xaU]))), vlSelfRef.__Vtask_dpi_fmin__18__result, vlSelfRef.__Vtask_dpi_fmin__18__fflags);
    vlSelfRef.__PVT__g_fncp__DOT__result_fmin[0xaU] 
        = (IData)(vlSelfRef.__Vtask_dpi_fmin__18__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fmin[0xbU] 
        = (IData)((vlSelfRef.__Vtask_dpi_fmin__18__result 
                   >> 0x20U));
    vlSelfRef.__Vlvbound_h198eb02e__0 = vlSelfRef.__Vtask_dpi_fmin__18__fflags;
    vlSelfRef.__PVT__g_fncp__DOT__fflags_fmin = ((0xffc1ffffffULL 
                                                  & vlSelfRef.__PVT__g_fncp__DOT__fflags_fmin) 
                                                 | ((QData)((IData)(vlSelfRef.__Vlvbound_h198eb02e__0)) 
                                                    << 0x19U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmax_TOP____024unit(vlSelfRef.__PVT__g_fncp__DOT__fncp_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xbU])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xaU]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0xbU])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0xaU]))), vlSelfRef.__Vtask_dpi_fmax__19__result, vlSelfRef.__Vtask_dpi_fmax__19__fflags);
    vlSelfRef.__PVT__g_fncp__DOT__result_fmax[0xaU] 
        = (IData)(vlSelfRef.__Vtask_dpi_fmax__19__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fmax[0xbU] 
        = (IData)((vlSelfRef.__Vtask_dpi_fmax__19__result 
                   >> 0x20U));
    vlSelfRef.__Vlvbound_h3048d8db__0 = vlSelfRef.__Vtask_dpi_fmax__19__fflags;
    vlSelfRef.__PVT__g_fncp__DOT__fflags_fmax = ((0xffc1ffffffULL 
                                                  & vlSelfRef.__PVT__g_fncp__DOT__fflags_fmax) 
                                                 | ((QData)((IData)(vlSelfRef.__Vlvbound_h3048d8db__0)) 
                                                    << 0x19U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsgnj_TOP____024unit(vlSelfRef.__PVT__g_fncp__DOT__fncp_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                      >> 0xaU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xbU])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xaU]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0xbU])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0xaU]))), vlSelfRef.__Vtask_dpi_fsgnj__20__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fsgnj[0xaU] 
        = (IData)(vlSelfRef.__Vtask_dpi_fsgnj__20__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fsgnj[0xbU] 
        = (IData)((vlSelfRef.__Vtask_dpi_fsgnj__20__result 
                   >> 0x20U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsgnjn_TOP____024unit(vlSelfRef.__PVT__g_fncp__DOT__fncp_fire, 
                                                                   (1U 
                                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                       >> 0xaU)), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xbU])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xaU]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0xbU])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0xaU]))), vlSelfRef.__Vtask_dpi_fsgnjn__21__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fsgnjn[0xaU] 
        = (IData)(vlSelfRef.__Vtask_dpi_fsgnjn__21__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fsgnjn[0xbU] 
        = (IData)((vlSelfRef.__Vtask_dpi_fsgnjn__21__result 
                   >> 0x20U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsgnjx_TOP____024unit(vlSelfRef.__PVT__g_fncp__DOT__fncp_fire, 
                                                                   (1U 
                                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                       >> 0xaU)), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xbU])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xaU]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0xbU])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0xaU]))), vlSelfRef.__Vtask_dpi_fsgnjx__22__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fsgnjx[0xaU] 
        = (IData)(vlSelfRef.__Vtask_dpi_fsgnjx__22__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fsgnjx[0xbU] 
        = (IData)((vlSelfRef.__Vtask_dpi_fsgnjx__22__result 
                   >> 0x20U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fclss_TOP____024unit(vlSelfRef.__PVT__g_fncp__DOT__fncp_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                      >> 0xaU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xdU])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xcU]))), vlSelfRef.__Vtask_dpi_fclss__14__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fclss[0xcU] 
        = (IData)(vlSelfRef.__Vtask_dpi_fclss__14__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fclss[0xdU] 
        = (IData)((vlSelfRef.__Vtask_dpi_fclss__14__result 
                   >> 0x20U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fle_TOP____024unit(vlSelfRef.__PVT__g_fncp__DOT__fncp_fire, 
                                                                (1U 
                                                                 & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                    >> 0xaU)), 
                                                                (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xdU])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xcU]))), 
                                                                (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0xdU])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0xcU]))), vlSelfRef.__Vtask_dpi_fle__15__result, vlSelfRef.__Vtask_dpi_fle__15__fflags);
    vlSelfRef.__PVT__g_fncp__DOT__result_fle[0xcU] 
        = (IData)(vlSelfRef.__Vtask_dpi_fle__15__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fle[0xdU] 
        = (IData)((vlSelfRef.__Vtask_dpi_fle__15__result 
                   >> 0x20U));
    vlSelfRef.__Vlvbound_ha2cc9156__0 = vlSelfRef.__Vtask_dpi_fle__15__fflags;
    vlSelfRef.__PVT__g_fncp__DOT__fflags_fle = ((0xf83fffffffULL 
                                                 & vlSelfRef.__PVT__g_fncp__DOT__fflags_fle) 
                                                | ((QData)((IData)(vlSelfRef.__Vlvbound_ha2cc9156__0)) 
                                                   << 0x1eU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_flt_TOP____024unit(vlSelfRef.__PVT__g_fncp__DOT__fncp_fire, 
                                                                (1U 
                                                                 & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                    >> 0xaU)), 
                                                                (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xdU])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xcU]))), 
                                                                (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0xdU])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0xcU]))), vlSelfRef.__Vtask_dpi_flt__16__result, vlSelfRef.__Vtask_dpi_flt__16__fflags);
    vlSelfRef.__PVT__g_fncp__DOT__result_flt[0xcU] 
        = (IData)(vlSelfRef.__Vtask_dpi_flt__16__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_flt[0xdU] 
        = (IData)((vlSelfRef.__Vtask_dpi_flt__16__result 
                   >> 0x20U));
    vlSelfRef.__Vlvbound_hf435d626__0 = vlSelfRef.__Vtask_dpi_flt__16__fflags;
    vlSelfRef.__PVT__g_fncp__DOT__fflags_flt = ((0xf83fffffffULL 
                                                 & vlSelfRef.__PVT__g_fncp__DOT__fflags_flt) 
                                                | ((QData)((IData)(vlSelfRef.__Vlvbound_hf435d626__0)) 
                                                   << 0x1eU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_feq_TOP____024unit(vlSelfRef.__PVT__g_fncp__DOT__fncp_fire, 
                                                                (1U 
                                                                 & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                    >> 0xaU)), 
                                                                (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xdU])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xcU]))), 
                                                                (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0xdU])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0xcU]))), vlSelfRef.__Vtask_dpi_feq__17__result, vlSelfRef.__Vtask_dpi_feq__17__fflags);
    vlSelfRef.__PVT__g_fncp__DOT__result_feq[0xcU] 
        = (IData)(vlSelfRef.__Vtask_dpi_feq__17__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_feq[0xdU] 
        = (IData)((vlSelfRef.__Vtask_dpi_feq__17__result 
                   >> 0x20U));
    vlSelfRef.__Vlvbound_ha1a19d18__0 = vlSelfRef.__Vtask_dpi_feq__17__fflags;
    vlSelfRef.__PVT__g_fncp__DOT__fflags_feq = ((0xf83fffffffULL 
                                                 & vlSelfRef.__PVT__g_fncp__DOT__fflags_feq) 
                                                | ((QData)((IData)(vlSelfRef.__Vlvbound_ha1a19d18__0)) 
                                                   << 0x1eU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmin_TOP____024unit(vlSelfRef.__PVT__g_fncp__DOT__fncp_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xdU])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xcU]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0xdU])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0xcU]))), vlSelfRef.__Vtask_dpi_fmin__18__result, vlSelfRef.__Vtask_dpi_fmin__18__fflags);
    vlSelfRef.__PVT__g_fncp__DOT__result_fmin[0xcU] 
        = (IData)(vlSelfRef.__Vtask_dpi_fmin__18__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fmin[0xdU] 
        = (IData)((vlSelfRef.__Vtask_dpi_fmin__18__result 
                   >> 0x20U));
    vlSelfRef.__Vlvbound_h198eb02e__0 = vlSelfRef.__Vtask_dpi_fmin__18__fflags;
    vlSelfRef.__PVT__g_fncp__DOT__fflags_fmin = ((0xf83fffffffULL 
                                                  & vlSelfRef.__PVT__g_fncp__DOT__fflags_fmin) 
                                                 | ((QData)((IData)(vlSelfRef.__Vlvbound_h198eb02e__0)) 
                                                    << 0x1eU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmax_TOP____024unit(vlSelfRef.__PVT__g_fncp__DOT__fncp_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xdU])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xcU]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0xdU])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0xcU]))), vlSelfRef.__Vtask_dpi_fmax__19__result, vlSelfRef.__Vtask_dpi_fmax__19__fflags);
    vlSelfRef.__PVT__g_fncp__DOT__result_fmax[0xcU] 
        = (IData)(vlSelfRef.__Vtask_dpi_fmax__19__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fmax[0xdU] 
        = (IData)((vlSelfRef.__Vtask_dpi_fmax__19__result 
                   >> 0x20U));
    vlSelfRef.__Vlvbound_h3048d8db__0 = vlSelfRef.__Vtask_dpi_fmax__19__fflags;
    vlSelfRef.__PVT__g_fncp__DOT__fflags_fmax = ((0xf83fffffffULL 
                                                  & vlSelfRef.__PVT__g_fncp__DOT__fflags_fmax) 
                                                 | ((QData)((IData)(vlSelfRef.__Vlvbound_h3048d8db__0)) 
                                                    << 0x1eU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsgnj_TOP____024unit(vlSelfRef.__PVT__g_fncp__DOT__fncp_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                      >> 0xaU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xdU])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xcU]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0xdU])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0xcU]))), vlSelfRef.__Vtask_dpi_fsgnj__20__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fsgnj[0xcU] 
        = (IData)(vlSelfRef.__Vtask_dpi_fsgnj__20__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fsgnj[0xdU] 
        = (IData)((vlSelfRef.__Vtask_dpi_fsgnj__20__result 
                   >> 0x20U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsgnjn_TOP____024unit(vlSelfRef.__PVT__g_fncp__DOT__fncp_fire, 
                                                                   (1U 
                                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                       >> 0xaU)), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xdU])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xcU]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0xdU])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0xcU]))), vlSelfRef.__Vtask_dpi_fsgnjn__21__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fsgnjn[0xcU] 
        = (IData)(vlSelfRef.__Vtask_dpi_fsgnjn__21__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fsgnjn[0xdU] 
        = (IData)((vlSelfRef.__Vtask_dpi_fsgnjn__21__result 
                   >> 0x20U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsgnjx_TOP____024unit(vlSelfRef.__PVT__g_fncp__DOT__fncp_fire, 
                                                                   (1U 
                                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                       >> 0xaU)), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xdU])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xcU]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0xdU])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0xcU]))), vlSelfRef.__Vtask_dpi_fsgnjx__22__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fsgnjx[0xcU] 
        = (IData)(vlSelfRef.__Vtask_dpi_fsgnjx__22__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fsgnjx[0xdU] 
        = (IData)((vlSelfRef.__Vtask_dpi_fsgnjx__22__result 
                   >> 0x20U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fclss_TOP____024unit(vlSelfRef.__PVT__g_fncp__DOT__fncp_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                      >> 0xaU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xfU])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xeU]))), vlSelfRef.__Vtask_dpi_fclss__14__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fclss[0xeU] 
        = (IData)(vlSelfRef.__Vtask_dpi_fclss__14__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fclss[0xfU] 
        = (IData)((vlSelfRef.__Vtask_dpi_fclss__14__result 
                   >> 0x20U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fle_TOP____024unit(vlSelfRef.__PVT__g_fncp__DOT__fncp_fire, 
                                                                (1U 
                                                                 & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                    >> 0xaU)), 
                                                                (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xfU])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xeU]))), 
                                                                (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0xfU])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0xeU]))), vlSelfRef.__Vtask_dpi_fle__15__result, vlSelfRef.__Vtask_dpi_fle__15__fflags);
    vlSelfRef.__PVT__g_fncp__DOT__result_fle[0xeU] 
        = (IData)(vlSelfRef.__Vtask_dpi_fle__15__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fle[0xfU] 
        = (IData)((vlSelfRef.__Vtask_dpi_fle__15__result 
                   >> 0x20U));
    vlSelfRef.__Vlvbound_ha2cc9156__0 = vlSelfRef.__Vtask_dpi_fle__15__fflags;
    vlSelfRef.__PVT__g_fncp__DOT__fflags_fle = ((0x7ffffffffULL 
                                                 & vlSelfRef.__PVT__g_fncp__DOT__fflags_fle) 
                                                | ((QData)((IData)(vlSelfRef.__Vlvbound_ha2cc9156__0)) 
                                                   << 0x23U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_flt_TOP____024unit(vlSelfRef.__PVT__g_fncp__DOT__fncp_fire, 
                                                                (1U 
                                                                 & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                    >> 0xaU)), 
                                                                (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xfU])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xeU]))), 
                                                                (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0xfU])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0xeU]))), vlSelfRef.__Vtask_dpi_flt__16__result, vlSelfRef.__Vtask_dpi_flt__16__fflags);
    vlSelfRef.__PVT__g_fncp__DOT__result_flt[0xeU] 
        = (IData)(vlSelfRef.__Vtask_dpi_flt__16__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_flt[0xfU] 
        = (IData)((vlSelfRef.__Vtask_dpi_flt__16__result 
                   >> 0x20U));
    vlSelfRef.__Vlvbound_hf435d626__0 = vlSelfRef.__Vtask_dpi_flt__16__fflags;
    vlSelfRef.__PVT__g_fncp__DOT__fflags_flt = ((0x7ffffffffULL 
                                                 & vlSelfRef.__PVT__g_fncp__DOT__fflags_flt) 
                                                | ((QData)((IData)(vlSelfRef.__Vlvbound_hf435d626__0)) 
                                                   << 0x23U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_feq_TOP____024unit(vlSelfRef.__PVT__g_fncp__DOT__fncp_fire, 
                                                                (1U 
                                                                 & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                    >> 0xaU)), 
                                                                (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xfU])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xeU]))), 
                                                                (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0xfU])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0xeU]))), vlSelfRef.__Vtask_dpi_feq__17__result, vlSelfRef.__Vtask_dpi_feq__17__fflags);
    vlSelfRef.__PVT__g_fncp__DOT__result_feq[0xeU] 
        = (IData)(vlSelfRef.__Vtask_dpi_feq__17__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_feq[0xfU] 
        = (IData)((vlSelfRef.__Vtask_dpi_feq__17__result 
                   >> 0x20U));
    vlSelfRef.__Vlvbound_ha1a19d18__0 = vlSelfRef.__Vtask_dpi_feq__17__fflags;
    vlSelfRef.__PVT__g_fncp__DOT__fflags_feq = ((0x7ffffffffULL 
                                                 & vlSelfRef.__PVT__g_fncp__DOT__fflags_feq) 
                                                | ((QData)((IData)(vlSelfRef.__Vlvbound_ha1a19d18__0)) 
                                                   << 0x23U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmin_TOP____024unit(vlSelfRef.__PVT__g_fncp__DOT__fncp_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xfU])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xeU]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0xfU])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0xeU]))), vlSelfRef.__Vtask_dpi_fmin__18__result, vlSelfRef.__Vtask_dpi_fmin__18__fflags);
    vlSelfRef.__PVT__g_fncp__DOT__result_fmin[0xeU] 
        = (IData)(vlSelfRef.__Vtask_dpi_fmin__18__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fmin[0xfU] 
        = (IData)((vlSelfRef.__Vtask_dpi_fmin__18__result 
                   >> 0x20U));
    vlSelfRef.__Vlvbound_h198eb02e__0 = vlSelfRef.__Vtask_dpi_fmin__18__fflags;
    vlSelfRef.__PVT__g_fncp__DOT__fflags_fmin = ((0x7ffffffffULL 
                                                  & vlSelfRef.__PVT__g_fncp__DOT__fflags_fmin) 
                                                 | ((QData)((IData)(vlSelfRef.__Vlvbound_h198eb02e__0)) 
                                                    << 0x23U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmax_TOP____024unit(vlSelfRef.__PVT__g_fncp__DOT__fncp_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xfU])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xeU]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0xfU])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0xeU]))), vlSelfRef.__Vtask_dpi_fmax__19__result, vlSelfRef.__Vtask_dpi_fmax__19__fflags);
    vlSelfRef.__PVT__g_fncp__DOT__result_fmax[0xeU] 
        = (IData)(vlSelfRef.__Vtask_dpi_fmax__19__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fmax[0xfU] 
        = (IData)((vlSelfRef.__Vtask_dpi_fmax__19__result 
                   >> 0x20U));
    vlSelfRef.__Vlvbound_h3048d8db__0 = vlSelfRef.__Vtask_dpi_fmax__19__fflags;
    vlSelfRef.__PVT__g_fncp__DOT__fflags_fmax = ((0x7ffffffffULL 
                                                  & vlSelfRef.__PVT__g_fncp__DOT__fflags_fmax) 
                                                 | ((QData)((IData)(vlSelfRef.__Vlvbound_h3048d8db__0)) 
                                                    << 0x23U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsgnj_TOP____024unit(vlSelfRef.__PVT__g_fncp__DOT__fncp_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                      >> 0xaU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xfU])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xeU]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0xfU])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0xeU]))), vlSelfRef.__Vtask_dpi_fsgnj__20__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fsgnj[0xeU] 
        = (IData)(vlSelfRef.__Vtask_dpi_fsgnj__20__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fsgnj[0xfU] 
        = (IData)((vlSelfRef.__Vtask_dpi_fsgnj__20__result 
                   >> 0x20U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsgnjn_TOP____024unit(vlSelfRef.__PVT__g_fncp__DOT__fncp_fire, 
                                                                   (1U 
                                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                       >> 0xaU)), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xfU])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xeU]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0xfU])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0xeU]))), vlSelfRef.__Vtask_dpi_fsgnjn__21__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fsgnjn[0xeU] 
        = (IData)(vlSelfRef.__Vtask_dpi_fsgnjn__21__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fsgnjn[0xfU] 
        = (IData)((vlSelfRef.__Vtask_dpi_fsgnjn__21__result 
                   >> 0x20U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsgnjx_TOP____024unit(vlSelfRef.__PVT__g_fncp__DOT__fncp_fire, 
                                                                   (1U 
                                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                       >> 0xaU)), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xfU])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xeU]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0xfU])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0xeU]))), vlSelfRef.__Vtask_dpi_fsgnjx__22__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fsgnjx[0xeU] 
        = (IData)(vlSelfRef.__Vtask_dpi_fsgnjx__22__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fsgnjx[0xfU] 
        = (IData)((vlSelfRef.__Vtask_dpi_fsgnjx__22__result 
                   >> 0x20U));
    vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged = 0U;
    if ((0x20000U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x1aU])) {
        vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged) 
                        | (IData)(vlSelfRef.__PVT__g_fcvt__DOT__fflags_fcvt))));
        vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelfRef.__PVT__g_fcvt__DOT__fflags_fcvt 
                                    >> 1U)) << 1U))));
        vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelfRef.__PVT__g_fcvt__DOT__fflags_fcvt 
                                    >> 2U)) << 2U))));
        vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelfRef.__PVT__g_fcvt__DOT__fflags_fcvt 
                                    >> 3U)) << 3U))));
        vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (0x10U & ((0xfffffff0U & (IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
                           | ((IData)((vlSelfRef.__PVT__g_fcvt__DOT__fflags_fcvt 
                                       >> 4U)) << 4U))));
    }
    if ((0x40000U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x1aU])) {
        vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged) 
                        | (IData)((vlSelfRef.__PVT__g_fcvt__DOT__fflags_fcvt 
                                   >> 5U)))));
        vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelfRef.__PVT__g_fcvt__DOT__fflags_fcvt 
                                    >> 6U)) << 1U))));
        vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelfRef.__PVT__g_fcvt__DOT__fflags_fcvt 
                                    >> 7U)) << 2U))));
        vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelfRef.__PVT__g_fcvt__DOT__fflags_fcvt 
                                    >> 8U)) << 3U))));
        vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (0x10U & ((0xfffffff0U & (IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
                           | ((IData)((vlSelfRef.__PVT__g_fcvt__DOT__fflags_fcvt 
                                       >> 9U)) << 4U))));
    }
    if ((0x80000U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x1aU])) {
        vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged) 
                        | (IData)((vlSelfRef.__PVT__g_fcvt__DOT__fflags_fcvt 
                                   >> 0xaU)))));
        vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelfRef.__PVT__g_fcvt__DOT__fflags_fcvt 
                                    >> 0xbU)) << 1U))));
        vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelfRef.__PVT__g_fcvt__DOT__fflags_fcvt 
                                    >> 0xcU)) << 2U))));
        vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelfRef.__PVT__g_fcvt__DOT__fflags_fcvt 
                                    >> 0xdU)) << 3U))));
        vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (0x10U & ((0xfffffff0U & (IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
                           | ((IData)((vlSelfRef.__PVT__g_fcvt__DOT__fflags_fcvt 
                                       >> 0xeU)) << 4U))));
    }
    if ((0x100000U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x1aU])) {
        vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged) 
                        | (IData)((vlSelfRef.__PVT__g_fcvt__DOT__fflags_fcvt 
                                   >> 0xfU)))));
        vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelfRef.__PVT__g_fcvt__DOT__fflags_fcvt 
                                    >> 0x10U)) << 1U))));
        vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelfRef.__PVT__g_fcvt__DOT__fflags_fcvt 
                                    >> 0x11U)) << 2U))));
        vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelfRef.__PVT__g_fcvt__DOT__fflags_fcvt 
                                    >> 0x12U)) << 3U))));
        vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (0x10U & ((0xfffffff0U & (IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
                           | ((IData)((vlSelfRef.__PVT__g_fcvt__DOT__fflags_fcvt 
                                       >> 0x13U)) << 4U))));
    }
    vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged = 0U;
    if ((0x20000U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x1aU])) {
        vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged) 
                        | (IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fma))));
        vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelfRef.__PVT__g_fma__DOT__fflags_fma 
                                    >> 1U)) << 1U))));
        vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelfRef.__PVT__g_fma__DOT__fflags_fma 
                                    >> 2U)) << 2U))));
        vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelfRef.__PVT__g_fma__DOT__fflags_fma 
                                    >> 3U)) << 3U))));
        vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (0x10U & ((0xfffffff0U & (IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged)) 
                           | ((IData)((vlSelfRef.__PVT__g_fma__DOT__fflags_fma 
                                       >> 4U)) << 4U))));
    }
    if ((0x40000U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x1aU])) {
        vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged) 
                        | (IData)((vlSelfRef.__PVT__g_fma__DOT__fflags_fma 
                                   >> 5U)))));
        vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelfRef.__PVT__g_fma__DOT__fflags_fma 
                                    >> 6U)) << 1U))));
        vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelfRef.__PVT__g_fma__DOT__fflags_fma 
                                    >> 7U)) << 2U))));
        vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelfRef.__PVT__g_fma__DOT__fflags_fma 
                                    >> 8U)) << 3U))));
        vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (0x10U & ((0xfffffff0U & (IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged)) 
                           | ((IData)((vlSelfRef.__PVT__g_fma__DOT__fflags_fma 
                                       >> 9U)) << 4U))));
    }
    if ((0x80000U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x1aU])) {
        vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged) 
                        | (IData)((vlSelfRef.__PVT__g_fma__DOT__fflags_fma 
                                   >> 0xaU)))));
        vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelfRef.__PVT__g_fma__DOT__fflags_fma 
                                    >> 0xbU)) << 1U))));
        vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelfRef.__PVT__g_fma__DOT__fflags_fma 
                                    >> 0xcU)) << 2U))));
        vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelfRef.__PVT__g_fma__DOT__fflags_fma 
                                    >> 0xdU)) << 3U))));
        vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (0x10U & ((0xfffffff0U & (IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged)) 
                           | ((IData)((vlSelfRef.__PVT__g_fma__DOT__fflags_fma 
                                       >> 0xeU)) << 4U))));
    }
    if ((0x100000U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x1aU])) {
        vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged) 
                        | (IData)((vlSelfRef.__PVT__g_fma__DOT__fflags_fma 
                                   >> 0xfU)))));
        vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelfRef.__PVT__g_fma__DOT__fflags_fma 
                                    >> 0x10U)) << 1U))));
        vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelfRef.__PVT__g_fma__DOT__fflags_fma 
                                    >> 0x11U)) << 2U))));
        vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelfRef.__PVT__g_fma__DOT__fflags_fma 
                                    >> 0x12U)) << 3U))));
        vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (0x10U & ((0xfffffff0U & (IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged)) 
                           | ((IData)((vlSelfRef.__PVT__g_fma__DOT__fflags_fma 
                                       >> 0x13U)) << 4U))));
    }
    if ((0x200000U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x1aU])) {
        vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged) 
                        | (IData)((vlSelfRef.__PVT__g_fcvt__DOT__fflags_fcvt 
                                   >> 0x14U)))));
        vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelfRef.__PVT__g_fcvt__DOT__fflags_fcvt 
                                    >> 0x15U)) << 1U))));
        vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelfRef.__PVT__g_fcvt__DOT__fflags_fcvt 
                                    >> 0x16U)) << 2U))));
        vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelfRef.__PVT__g_fcvt__DOT__fflags_fcvt 
                                    >> 0x17U)) << 3U))));
        vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (0x10U & ((0xfffffff0U & (IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
                           | ((IData)((vlSelfRef.__PVT__g_fcvt__DOT__fflags_fcvt 
                                       >> 0x18U)) << 4U))));
        vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged) 
                        | (IData)((vlSelfRef.__PVT__g_fma__DOT__fflags_fma 
                                   >> 0x14U)))));
        vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelfRef.__PVT__g_fma__DOT__fflags_fma 
                                    >> 0x15U)) << 1U))));
        vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelfRef.__PVT__g_fma__DOT__fflags_fma 
                                    >> 0x16U)) << 2U))));
        vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelfRef.__PVT__g_fma__DOT__fflags_fma 
                                    >> 0x17U)) << 3U))));
        vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (0x10U & ((0xfffffff0U & (IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged)) 
                           | ((IData)((vlSelfRef.__PVT__g_fma__DOT__fflags_fma 
                                       >> 0x18U)) << 4U))));
    }
    if ((0x400000U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x1aU])) {
        vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged) 
                        | (IData)((vlSelfRef.__PVT__g_fcvt__DOT__fflags_fcvt 
                                   >> 0x19U)))));
        vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelfRef.__PVT__g_fcvt__DOT__fflags_fcvt 
                                    >> 0x1aU)) << 1U))));
        vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelfRef.__PVT__g_fcvt__DOT__fflags_fcvt 
                                    >> 0x1bU)) << 2U))));
        vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelfRef.__PVT__g_fcvt__DOT__fflags_fcvt 
                                    >> 0x1cU)) << 3U))));
        vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (0x10U & ((0xfffffff0U & (IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
                           | ((IData)((vlSelfRef.__PVT__g_fcvt__DOT__fflags_fcvt 
                                       >> 0x1dU)) << 4U))));
        vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged) 
                        | (IData)((vlSelfRef.__PVT__g_fma__DOT__fflags_fma 
                                   >> 0x19U)))));
        vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelfRef.__PVT__g_fma__DOT__fflags_fma 
                                    >> 0x1aU)) << 1U))));
        vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelfRef.__PVT__g_fma__DOT__fflags_fma 
                                    >> 0x1bU)) << 2U))));
        vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelfRef.__PVT__g_fma__DOT__fflags_fma 
                                    >> 0x1cU)) << 3U))));
        vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (0x10U & ((0xfffffff0U & (IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged)) 
                           | ((IData)((vlSelfRef.__PVT__g_fma__DOT__fflags_fma 
                                       >> 0x1dU)) << 4U))));
    }
    if ((0x800000U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x1aU])) {
        vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged) 
                        | (IData)((vlSelfRef.__PVT__g_fcvt__DOT__fflags_fcvt 
                                   >> 0x1eU)))));
        vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelfRef.__PVT__g_fcvt__DOT__fflags_fcvt 
                                    >> 0x1fU)) << 1U))));
        vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelfRef.__PVT__g_fcvt__DOT__fflags_fcvt 
                                    >> 0x20U)) << 2U))));
        vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelfRef.__PVT__g_fcvt__DOT__fflags_fcvt 
                                    >> 0x21U)) << 3U))));
        vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (0x10U & ((0xfffffff0U & (IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
                           | ((IData)((vlSelfRef.__PVT__g_fcvt__DOT__fflags_fcvt 
                                       >> 0x22U)) << 4U))));
        vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged) 
                        | (IData)((vlSelfRef.__PVT__g_fma__DOT__fflags_fma 
                                   >> 0x1eU)))));
        vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelfRef.__PVT__g_fma__DOT__fflags_fma 
                                    >> 0x1fU)) << 1U))));
        vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelfRef.__PVT__g_fma__DOT__fflags_fma 
                                    >> 0x20U)) << 2U))));
        vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelfRef.__PVT__g_fma__DOT__fflags_fma 
                                    >> 0x21U)) << 3U))));
        vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (0x10U & ((0xfffffff0U & (IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged)) 
                           | ((IData)((vlSelfRef.__PVT__g_fma__DOT__fflags_fma 
                                       >> 0x22U)) << 4U))));
    }
    if ((0x1000000U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x1aU])) {
        vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged) 
                        | (IData)((vlSelfRef.__PVT__g_fcvt__DOT__fflags_fcvt 
                                   >> 0x23U)))));
        vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelfRef.__PVT__g_fcvt__DOT__fflags_fcvt 
                                    >> 0x24U)) << 1U))));
        vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelfRef.__PVT__g_fcvt__DOT__fflags_fcvt 
                                    >> 0x25U)) << 2U))));
        vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelfRef.__PVT__g_fcvt__DOT__fflags_fcvt 
                                    >> 0x26U)) << 3U))));
        vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | ((IData)((((IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged) 
                            >> 4U) | (vlSelfRef.__PVT__g_fcvt__DOT__fflags_fcvt 
                                      >> 0x27U))) << 4U));
        vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged) 
                        | (IData)((vlSelfRef.__PVT__g_fma__DOT__fflags_fma 
                                   >> 0x23U)))));
        vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelfRef.__PVT__g_fma__DOT__fflags_fma 
                                    >> 0x24U)) << 1U))));
        vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelfRef.__PVT__g_fma__DOT__fflags_fma 
                                    >> 0x25U)) << 2U))));
        vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelfRef.__PVT__g_fma__DOT__fflags_fma 
                                    >> 0x26U)) << 3U))));
        vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | ((IData)((((IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged) 
                            >> 4U) | (vlSelfRef.__PVT__g_fma__DOT__fflags_fma 
                                      >> 0x27U))) << 4U));
    }
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fdiv_TOP____024unit(vlSelfRef.__PVT__g_fdiv__DOT__fdiv_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_fdiv__7__result, vlSelfRef.__Vtask_dpi_fdiv__7__fflags);
    vlSelfRef.__PVT__g_fdiv__DOT__result_fdiv[0U] = (IData)(vlSelfRef.__Vtask_dpi_fdiv__7__result);
    vlSelfRef.__PVT__g_fdiv__DOT__result_fdiv[1U] = (IData)(
                                                            (vlSelfRef.__Vtask_dpi_fdiv__7__result 
                                                             >> 0x20U));
    vlSelfRef.__Vlvbound_hec0e4da7__0 = vlSelfRef.__Vtask_dpi_fdiv__7__fflags;
    vlSelfRef.__PVT__g_fdiv__DOT__fflags_fdiv = ((0xffffffffe0ULL 
                                                  & vlSelfRef.__PVT__g_fdiv__DOT__fflags_fdiv) 
                                                 | (IData)((IData)(vlSelfRef.__Vlvbound_hec0e4da7__0)));
    vlSelfRef.__PVT__g_fdiv__DOT__result_fdiv_r[0U] 
        = vlSelfRef.__PVT__g_fdiv__DOT__result_fdiv[0U];
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fdiv_TOP____024unit(vlSelfRef.__PVT__g_fdiv__DOT__fdiv_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][3U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][2U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][3U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][2U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_fdiv__7__result, vlSelfRef.__Vtask_dpi_fdiv__7__fflags);
    vlSelfRef.__PVT__g_fdiv__DOT__result_fdiv[2U] = (IData)(vlSelfRef.__Vtask_dpi_fdiv__7__result);
    vlSelfRef.__PVT__g_fdiv__DOT__result_fdiv[3U] = (IData)(
                                                            (vlSelfRef.__Vtask_dpi_fdiv__7__result 
                                                             >> 0x20U));
    vlSelfRef.__Vlvbound_hec0e4da7__0 = vlSelfRef.__Vtask_dpi_fdiv__7__fflags;
    vlSelfRef.__PVT__g_fdiv__DOT__fflags_fdiv = ((0xfffffffc1fULL 
                                                  & vlSelfRef.__PVT__g_fdiv__DOT__fflags_fdiv) 
                                                 | ((QData)((IData)(vlSelfRef.__Vlvbound_hec0e4da7__0)) 
                                                    << 5U));
    vlSelfRef.__PVT__g_fdiv__DOT__result_fdiv_r[1U] 
        = vlSelfRef.__PVT__g_fdiv__DOT__result_fdiv[2U];
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fdiv_TOP____024unit(vlSelfRef.__PVT__g_fdiv__DOT__fdiv_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][5U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][4U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][5U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][4U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_fdiv__7__result, vlSelfRef.__Vtask_dpi_fdiv__7__fflags);
    vlSelfRef.__PVT__g_fdiv__DOT__result_fdiv[4U] = (IData)(vlSelfRef.__Vtask_dpi_fdiv__7__result);
    vlSelfRef.__PVT__g_fdiv__DOT__result_fdiv[5U] = (IData)(
                                                            (vlSelfRef.__Vtask_dpi_fdiv__7__result 
                                                             >> 0x20U));
    vlSelfRef.__Vlvbound_hec0e4da7__0 = vlSelfRef.__Vtask_dpi_fdiv__7__fflags;
    vlSelfRef.__PVT__g_fdiv__DOT__fflags_fdiv = ((0xffffff83ffULL 
                                                  & vlSelfRef.__PVT__g_fdiv__DOT__fflags_fdiv) 
                                                 | ((QData)((IData)(vlSelfRef.__Vlvbound_hec0e4da7__0)) 
                                                    << 0xaU));
    vlSelfRef.__PVT__g_fdiv__DOT__result_fdiv_r[2U] 
        = vlSelfRef.__PVT__g_fdiv__DOT__result_fdiv[4U];
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fdiv_TOP____024unit(vlSelfRef.__PVT__g_fdiv__DOT__fdiv_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][7U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][6U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][7U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][6U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_fdiv__7__result, vlSelfRef.__Vtask_dpi_fdiv__7__fflags);
    vlSelfRef.__PVT__g_fdiv__DOT__result_fdiv[6U] = (IData)(vlSelfRef.__Vtask_dpi_fdiv__7__result);
    vlSelfRef.__PVT__g_fdiv__DOT__result_fdiv[7U] = (IData)(
                                                            (vlSelfRef.__Vtask_dpi_fdiv__7__result 
                                                             >> 0x20U));
    vlSelfRef.__Vlvbound_hec0e4da7__0 = vlSelfRef.__Vtask_dpi_fdiv__7__fflags;
    vlSelfRef.__PVT__g_fdiv__DOT__fflags_fdiv = ((0xfffff07fffULL 
                                                  & vlSelfRef.__PVT__g_fdiv__DOT__fflags_fdiv) 
                                                 | ((QData)((IData)(vlSelfRef.__Vlvbound_hec0e4da7__0)) 
                                                    << 0xfU));
    vlSelfRef.__PVT__g_fdiv__DOT__result_fdiv_r[3U] 
        = vlSelfRef.__PVT__g_fdiv__DOT__result_fdiv[6U];
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fdiv_TOP____024unit(vlSelfRef.__PVT__g_fdiv__DOT__fdiv_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][9U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][8U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][9U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][8U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_fdiv__7__result, vlSelfRef.__Vtask_dpi_fdiv__7__fflags);
    vlSelfRef.__PVT__g_fdiv__DOT__result_fdiv[8U] = (IData)(vlSelfRef.__Vtask_dpi_fdiv__7__result);
    vlSelfRef.__PVT__g_fdiv__DOT__result_fdiv[9U] = (IData)(
                                                            (vlSelfRef.__Vtask_dpi_fdiv__7__result 
                                                             >> 0x20U));
    vlSelfRef.__Vlvbound_hec0e4da7__0 = vlSelfRef.__Vtask_dpi_fdiv__7__fflags;
    vlSelfRef.__PVT__g_fdiv__DOT__fflags_fdiv = ((0xfffe0fffffULL 
                                                  & vlSelfRef.__PVT__g_fdiv__DOT__fflags_fdiv) 
                                                 | ((QData)((IData)(vlSelfRef.__Vlvbound_hec0e4da7__0)) 
                                                    << 0x14U));
    vlSelfRef.__PVT__g_fdiv__DOT__result_fdiv_r[4U] 
        = vlSelfRef.__PVT__g_fdiv__DOT__result_fdiv[8U];
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fdiv_TOP____024unit(vlSelfRef.__PVT__g_fdiv__DOT__fdiv_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xbU])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xaU]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0xbU])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0xaU]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_fdiv__7__result, vlSelfRef.__Vtask_dpi_fdiv__7__fflags);
    vlSelfRef.__PVT__g_fdiv__DOT__result_fdiv[0xaU] 
        = (IData)(vlSelfRef.__Vtask_dpi_fdiv__7__result);
    vlSelfRef.__PVT__g_fdiv__DOT__result_fdiv[0xbU] 
        = (IData)((vlSelfRef.__Vtask_dpi_fdiv__7__result 
                   >> 0x20U));
    vlSelfRef.__Vlvbound_hec0e4da7__0 = vlSelfRef.__Vtask_dpi_fdiv__7__fflags;
    vlSelfRef.__PVT__g_fdiv__DOT__fflags_fdiv = ((0xffc1ffffffULL 
                                                  & vlSelfRef.__PVT__g_fdiv__DOT__fflags_fdiv) 
                                                 | ((QData)((IData)(vlSelfRef.__Vlvbound_hec0e4da7__0)) 
                                                    << 0x19U));
    vlSelfRef.__PVT__g_fdiv__DOT__result_fdiv_r[5U] 
        = vlSelfRef.__PVT__g_fdiv__DOT__result_fdiv[0xaU];
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fdiv_TOP____024unit(vlSelfRef.__PVT__g_fdiv__DOT__fdiv_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xdU])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xcU]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0xdU])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0xcU]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_fdiv__7__result, vlSelfRef.__Vtask_dpi_fdiv__7__fflags);
    vlSelfRef.__PVT__g_fdiv__DOT__result_fdiv[0xcU] 
        = (IData)(vlSelfRef.__Vtask_dpi_fdiv__7__result);
    vlSelfRef.__PVT__g_fdiv__DOT__result_fdiv[0xdU] 
        = (IData)((vlSelfRef.__Vtask_dpi_fdiv__7__result 
                   >> 0x20U));
    vlSelfRef.__Vlvbound_hec0e4da7__0 = vlSelfRef.__Vtask_dpi_fdiv__7__fflags;
    vlSelfRef.__PVT__g_fdiv__DOT__fflags_fdiv = ((0xf83fffffffULL 
                                                  & vlSelfRef.__PVT__g_fdiv__DOT__fflags_fdiv) 
                                                 | ((QData)((IData)(vlSelfRef.__Vlvbound_hec0e4da7__0)) 
                                                    << 0x1eU));
    vlSelfRef.__PVT__g_fdiv__DOT__result_fdiv_r[6U] 
        = vlSelfRef.__PVT__g_fdiv__DOT__result_fdiv[0xcU];
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fdiv_TOP____024unit(vlSelfRef.__PVT__g_fdiv__DOT__fdiv_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xfU])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xeU]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0xfU])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0xeU]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_fdiv__7__result, vlSelfRef.__Vtask_dpi_fdiv__7__fflags);
    vlSelfRef.__PVT__g_fdiv__DOT__result_fdiv[0xeU] 
        = (IData)(vlSelfRef.__Vtask_dpi_fdiv__7__result);
    vlSelfRef.__PVT__g_fdiv__DOT__result_fdiv[0xfU] 
        = (IData)((vlSelfRef.__Vtask_dpi_fdiv__7__result 
                   >> 0x20U));
    vlSelfRef.__Vlvbound_hec0e4da7__0 = vlSelfRef.__Vtask_dpi_fdiv__7__fflags;
    vlSelfRef.__PVT__g_fdiv__DOT__fflags_fdiv = ((0x7ffffffffULL 
                                                  & vlSelfRef.__PVT__g_fdiv__DOT__fflags_fdiv) 
                                                 | ((QData)((IData)(vlSelfRef.__Vlvbound_hec0e4da7__0)) 
                                                    << 0x23U));
    vlSelfRef.__PVT__g_fdiv__DOT__result_fdiv_r[7U] 
        = vlSelfRef.__PVT__g_fdiv__DOT__result_fdiv[0xeU];
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsqrt_TOP____024unit(vlSelfRef.__PVT__g_fsqrt__DOT__fsqrt_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                      >> 0xaU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][1U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_fsqrt__8__result, vlSelfRef.__Vtask_dpi_fsqrt__8__fflags);
    vlSelfRef.__PVT__g_fsqrt__DOT__result_fsqrt[0U] 
        = (IData)(vlSelfRef.__Vtask_dpi_fsqrt__8__result);
    vlSelfRef.__PVT__g_fsqrt__DOT__result_fsqrt[1U] 
        = (IData)((vlSelfRef.__Vtask_dpi_fsqrt__8__result 
                   >> 0x20U));
    vlSelfRef.__Vlvbound_ha236a6eb__0 = vlSelfRef.__Vtask_dpi_fsqrt__8__fflags;
    vlSelfRef.__PVT__g_fsqrt__DOT__fflags_fsqrt = (
                                                   (0xffffffffe0ULL 
                                                    & vlSelfRef.__PVT__g_fsqrt__DOT__fflags_fsqrt) 
                                                   | (IData)((IData)(vlSelfRef.__Vlvbound_ha236a6eb__0)));
    vlSelfRef.__PVT__g_fsqrt__DOT__result_fsqrt_r[0U] 
        = vlSelfRef.__PVT__g_fsqrt__DOT__result_fsqrt[0U];
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsqrt_TOP____024unit(vlSelfRef.__PVT__g_fsqrt__DOT__fsqrt_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                      >> 0xaU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][3U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][2U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_fsqrt__8__result, vlSelfRef.__Vtask_dpi_fsqrt__8__fflags);
    vlSelfRef.__PVT__g_fsqrt__DOT__result_fsqrt[2U] 
        = (IData)(vlSelfRef.__Vtask_dpi_fsqrt__8__result);
    vlSelfRef.__PVT__g_fsqrt__DOT__result_fsqrt[3U] 
        = (IData)((vlSelfRef.__Vtask_dpi_fsqrt__8__result 
                   >> 0x20U));
    vlSelfRef.__Vlvbound_ha236a6eb__0 = vlSelfRef.__Vtask_dpi_fsqrt__8__fflags;
    vlSelfRef.__PVT__g_fsqrt__DOT__fflags_fsqrt = (
                                                   (0xfffffffc1fULL 
                                                    & vlSelfRef.__PVT__g_fsqrt__DOT__fflags_fsqrt) 
                                                   | ((QData)((IData)(vlSelfRef.__Vlvbound_ha236a6eb__0)) 
                                                      << 5U));
    vlSelfRef.__PVT__g_fsqrt__DOT__result_fsqrt_r[1U] 
        = vlSelfRef.__PVT__g_fsqrt__DOT__result_fsqrt[2U];
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsqrt_TOP____024unit(vlSelfRef.__PVT__g_fsqrt__DOT__fsqrt_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                      >> 0xaU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][5U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][4U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_fsqrt__8__result, vlSelfRef.__Vtask_dpi_fsqrt__8__fflags);
    vlSelfRef.__PVT__g_fsqrt__DOT__result_fsqrt[4U] 
        = (IData)(vlSelfRef.__Vtask_dpi_fsqrt__8__result);
    vlSelfRef.__PVT__g_fsqrt__DOT__result_fsqrt[5U] 
        = (IData)((vlSelfRef.__Vtask_dpi_fsqrt__8__result 
                   >> 0x20U));
    vlSelfRef.__Vlvbound_ha236a6eb__0 = vlSelfRef.__Vtask_dpi_fsqrt__8__fflags;
    vlSelfRef.__PVT__g_fsqrt__DOT__fflags_fsqrt = (
                                                   (0xffffff83ffULL 
                                                    & vlSelfRef.__PVT__g_fsqrt__DOT__fflags_fsqrt) 
                                                   | ((QData)((IData)(vlSelfRef.__Vlvbound_ha236a6eb__0)) 
                                                      << 0xaU));
    vlSelfRef.__PVT__g_fsqrt__DOT__result_fsqrt_r[2U] 
        = vlSelfRef.__PVT__g_fsqrt__DOT__result_fsqrt[4U];
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsqrt_TOP____024unit(vlSelfRef.__PVT__g_fsqrt__DOT__fsqrt_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                      >> 0xaU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][7U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][6U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_fsqrt__8__result, vlSelfRef.__Vtask_dpi_fsqrt__8__fflags);
    vlSelfRef.__PVT__g_fsqrt__DOT__result_fsqrt[6U] 
        = (IData)(vlSelfRef.__Vtask_dpi_fsqrt__8__result);
    vlSelfRef.__PVT__g_fsqrt__DOT__result_fsqrt[7U] 
        = (IData)((vlSelfRef.__Vtask_dpi_fsqrt__8__result 
                   >> 0x20U));
    vlSelfRef.__Vlvbound_ha236a6eb__0 = vlSelfRef.__Vtask_dpi_fsqrt__8__fflags;
    vlSelfRef.__PVT__g_fsqrt__DOT__fflags_fsqrt = (
                                                   (0xfffff07fffULL 
                                                    & vlSelfRef.__PVT__g_fsqrt__DOT__fflags_fsqrt) 
                                                   | ((QData)((IData)(vlSelfRef.__Vlvbound_ha236a6eb__0)) 
                                                      << 0xfU));
    vlSelfRef.__PVT__g_fsqrt__DOT__result_fsqrt_r[3U] 
        = vlSelfRef.__PVT__g_fsqrt__DOT__result_fsqrt[6U];
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsqrt_TOP____024unit(vlSelfRef.__PVT__g_fsqrt__DOT__fsqrt_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                      >> 0xaU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][9U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][8U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_fsqrt__8__result, vlSelfRef.__Vtask_dpi_fsqrt__8__fflags);
    vlSelfRef.__PVT__g_fsqrt__DOT__result_fsqrt[8U] 
        = (IData)(vlSelfRef.__Vtask_dpi_fsqrt__8__result);
    vlSelfRef.__PVT__g_fsqrt__DOT__result_fsqrt[9U] 
        = (IData)((vlSelfRef.__Vtask_dpi_fsqrt__8__result 
                   >> 0x20U));
    vlSelfRef.__Vlvbound_ha236a6eb__0 = vlSelfRef.__Vtask_dpi_fsqrt__8__fflags;
    vlSelfRef.__PVT__g_fsqrt__DOT__fflags_fsqrt = (
                                                   (0xfffe0fffffULL 
                                                    & vlSelfRef.__PVT__g_fsqrt__DOT__fflags_fsqrt) 
                                                   | ((QData)((IData)(vlSelfRef.__Vlvbound_ha236a6eb__0)) 
                                                      << 0x14U));
    vlSelfRef.__PVT__g_fsqrt__DOT__result_fsqrt_r[4U] 
        = vlSelfRef.__PVT__g_fsqrt__DOT__result_fsqrt[8U];
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsqrt_TOP____024unit(vlSelfRef.__PVT__g_fsqrt__DOT__fsqrt_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                      >> 0xaU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xbU])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xaU]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_fsqrt__8__result, vlSelfRef.__Vtask_dpi_fsqrt__8__fflags);
    vlSelfRef.__PVT__g_fsqrt__DOT__result_fsqrt[0xaU] 
        = (IData)(vlSelfRef.__Vtask_dpi_fsqrt__8__result);
    vlSelfRef.__PVT__g_fsqrt__DOT__result_fsqrt[0xbU] 
        = (IData)((vlSelfRef.__Vtask_dpi_fsqrt__8__result 
                   >> 0x20U));
    vlSelfRef.__Vlvbound_ha236a6eb__0 = vlSelfRef.__Vtask_dpi_fsqrt__8__fflags;
    vlSelfRef.__PVT__g_fsqrt__DOT__fflags_fsqrt = (
                                                   (0xffc1ffffffULL 
                                                    & vlSelfRef.__PVT__g_fsqrt__DOT__fflags_fsqrt) 
                                                   | ((QData)((IData)(vlSelfRef.__Vlvbound_ha236a6eb__0)) 
                                                      << 0x19U));
    vlSelfRef.__PVT__g_fsqrt__DOT__result_fsqrt_r[5U] 
        = vlSelfRef.__PVT__g_fsqrt__DOT__result_fsqrt[0xaU];
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsqrt_TOP____024unit(vlSelfRef.__PVT__g_fsqrt__DOT__fsqrt_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                      >> 0xaU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xdU])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xcU]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_fsqrt__8__result, vlSelfRef.__Vtask_dpi_fsqrt__8__fflags);
    vlSelfRef.__PVT__g_fsqrt__DOT__result_fsqrt[0xcU] 
        = (IData)(vlSelfRef.__Vtask_dpi_fsqrt__8__result);
    vlSelfRef.__PVT__g_fsqrt__DOT__result_fsqrt[0xdU] 
        = (IData)((vlSelfRef.__Vtask_dpi_fsqrt__8__result 
                   >> 0x20U));
    vlSelfRef.__Vlvbound_ha236a6eb__0 = vlSelfRef.__Vtask_dpi_fsqrt__8__fflags;
    vlSelfRef.__PVT__g_fsqrt__DOT__fflags_fsqrt = (
                                                   (0xf83fffffffULL 
                                                    & vlSelfRef.__PVT__g_fsqrt__DOT__fflags_fsqrt) 
                                                   | ((QData)((IData)(vlSelfRef.__Vlvbound_ha236a6eb__0)) 
                                                      << 0x1eU));
    vlSelfRef.__PVT__g_fsqrt__DOT__result_fsqrt_r[6U] 
        = vlSelfRef.__PVT__g_fsqrt__DOT__result_fsqrt[0xcU];
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsqrt_TOP____024unit(vlSelfRef.__PVT__g_fsqrt__DOT__fsqrt_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x18U] 
                                                                      >> 0xaU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xfU])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0xeU]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_fsqrt__8__result, vlSelfRef.__Vtask_dpi_fsqrt__8__fflags);
    vlSelfRef.__PVT__g_fsqrt__DOT__result_fsqrt[0xeU] 
        = (IData)(vlSelfRef.__Vtask_dpi_fsqrt__8__result);
    vlSelfRef.__PVT__g_fsqrt__DOT__result_fsqrt[0xfU] 
        = (IData)((vlSelfRef.__Vtask_dpi_fsqrt__8__result 
                   >> 0x20U));
    vlSelfRef.__Vlvbound_ha236a6eb__0 = vlSelfRef.__Vtask_dpi_fsqrt__8__fflags;
    vlSelfRef.__PVT__g_fsqrt__DOT__fflags_fsqrt = (
                                                   (0x7ffffffffULL 
                                                    & vlSelfRef.__PVT__g_fsqrt__DOT__fflags_fsqrt) 
                                                   | ((QData)((IData)(vlSelfRef.__Vlvbound_ha236a6eb__0)) 
                                                      << 0x23U));
    vlSelfRef.__PVT__g_fsqrt__DOT__result_fsqrt_r[7U] 
        = vlSelfRef.__PVT__g_fsqrt__DOT__result_fsqrt[0xeU];
    vlSelfRef.__PVT__g_fncp__DOT__result_fncp[0U] = 
        vlSelfRef.__Vxrand_h4196ae8f__0[0U];
    vlSelfRef.__PVT__g_fncp__DOT__result_fncp[1U] = 
        vlSelfRef.__Vxrand_h4196ae8f__0[1U];
    vlSelfRef.__PVT__g_fncp__DOT__result_fncp[2U] = 
        vlSelfRef.__Vxrand_h4196ae8f__0[2U];
    vlSelfRef.__PVT__g_fncp__DOT__result_fncp[3U] = 
        vlSelfRef.__Vxrand_h4196ae8f__0[3U];
    vlSelfRef.__PVT__g_fncp__DOT__result_fncp[4U] = 
        vlSelfRef.__Vxrand_h4196ae8f__0[4U];
    vlSelfRef.__PVT__g_fncp__DOT__result_fncp[5U] = 
        vlSelfRef.__Vxrand_h4196ae8f__0[5U];
    vlSelfRef.__PVT__g_fncp__DOT__result_fncp[6U] = 
        vlSelfRef.__Vxrand_h4196ae8f__0[6U];
    vlSelfRef.__PVT__g_fncp__DOT__result_fncp[7U] = 
        vlSelfRef.__Vxrand_h4196ae8f__0[7U];
    vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp = vlSelfRef.__Vxrand_h7c8dacb2__0;
    if (((((((((0U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm)) 
               | (1U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm))) 
              | (2U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm))) 
             | (3U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm))) 
            | (4U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm))) 
           | (5U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm))) 
          | (6U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm))) 
         | (7U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm)))) {
        if ((0U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm))) {
            if (vlSelfRef.__PVT__is_fcmp) {
                vlSelfRef.__PVT__g_fncp__DOT__result_fncp[0U] 
                    = vlSelfRef.__PVT__g_fncp__DOT__result_fle[0U];
                vlSelfRef.__PVT__g_fncp__DOT__result_fncp[1U] 
                    = vlSelfRef.__PVT__g_fncp__DOT__result_fle[2U];
                vlSelfRef.__PVT__g_fncp__DOT__result_fncp[2U] 
                    = vlSelfRef.__PVT__g_fncp__DOT__result_fle[4U];
                vlSelfRef.__PVT__g_fncp__DOT__result_fncp[3U] 
                    = vlSelfRef.__PVT__g_fncp__DOT__result_fle[6U];
                vlSelfRef.__PVT__g_fncp__DOT__result_fncp[4U] 
                    = vlSelfRef.__PVT__g_fncp__DOT__result_fle[8U];
                vlSelfRef.__PVT__g_fncp__DOT__result_fncp[5U] 
                    = vlSelfRef.__PVT__g_fncp__DOT__result_fle[0xaU];
                vlSelfRef.__PVT__g_fncp__DOT__result_fncp[6U] 
                    = vlSelfRef.__PVT__g_fncp__DOT__result_fle[0xcU];
                vlSelfRef.__PVT__g_fncp__DOT__result_fncp[7U] 
                    = vlSelfRef.__PVT__g_fncp__DOT__result_fle[0xeU];
            } else {
                vlSelfRef.__PVT__g_fncp__DOT__result_fncp[0U] 
                    = vlSelfRef.__PVT__g_fncp__DOT__result_fsgnj[0U];
                vlSelfRef.__PVT__g_fncp__DOT__result_fncp[1U] 
                    = vlSelfRef.__PVT__g_fncp__DOT__result_fsgnj[2U];
                vlSelfRef.__PVT__g_fncp__DOT__result_fncp[2U] 
                    = vlSelfRef.__PVT__g_fncp__DOT__result_fsgnj[4U];
                vlSelfRef.__PVT__g_fncp__DOT__result_fncp[3U] 
                    = vlSelfRef.__PVT__g_fncp__DOT__result_fsgnj[6U];
                vlSelfRef.__PVT__g_fncp__DOT__result_fncp[4U] 
                    = vlSelfRef.__PVT__g_fncp__DOT__result_fsgnj[8U];
                vlSelfRef.__PVT__g_fncp__DOT__result_fncp[5U] 
                    = vlSelfRef.__PVT__g_fncp__DOT__result_fsgnj[0xaU];
                vlSelfRef.__PVT__g_fncp__DOT__result_fncp[6U] 
                    = vlSelfRef.__PVT__g_fncp__DOT__result_fsgnj[0xcU];
                vlSelfRef.__PVT__g_fncp__DOT__result_fncp[7U] 
                    = vlSelfRef.__PVT__g_fncp__DOT__result_fsgnj[0xeU];
            }
            vlSelfRef.__Vlvbound_h1a00ea64__0 = (0x1fU 
                                                 & (IData)(vlSelfRef.__PVT__g_fncp__DOT__fflags_fle));
            vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp 
                = ((0xffffffffe0ULL & vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp) 
                   | (IData)((IData)(vlSelfRef.__Vlvbound_h1a00ea64__0)));
            vlSelfRef.__Vlvbound_h1a00ea64__0 = (0x1fU 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__g_fncp__DOT__fflags_fle 
                                                            >> 5U)));
            vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp 
                = ((0xfffffffc1fULL & vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp) 
                   | ((QData)((IData)(vlSelfRef.__Vlvbound_h1a00ea64__0)) 
                      << 5U));
            vlSelfRef.__Vlvbound_h1a00ea64__0 = (0x1fU 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__g_fncp__DOT__fflags_fle 
                                                            >> 0xaU)));
            vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp 
                = ((0xffffff83ffULL & vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp) 
                   | ((QData)((IData)(vlSelfRef.__Vlvbound_h1a00ea64__0)) 
                      << 0xaU));
            vlSelfRef.__Vlvbound_h1a00ea64__0 = (0x1fU 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__g_fncp__DOT__fflags_fle 
                                                            >> 0xfU)));
            vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp 
                = ((0xfffff07fffULL & vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp) 
                   | ((QData)((IData)(vlSelfRef.__Vlvbound_h1a00ea64__0)) 
                      << 0xfU));
            vlSelfRef.__Vlvbound_h1a00ea64__0 = (0x1fU 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__g_fncp__DOT__fflags_fle 
                                                            >> 0x14U)));
            vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp 
                = ((0xfffe0fffffULL & vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp) 
                   | ((QData)((IData)(vlSelfRef.__Vlvbound_h1a00ea64__0)) 
                      << 0x14U));
            vlSelfRef.__Vlvbound_h1a00ea64__0 = (0x1fU 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__g_fncp__DOT__fflags_fle 
                                                            >> 0x19U)));
            vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp 
                = ((0xffc1ffffffULL & vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp) 
                   | ((QData)((IData)(vlSelfRef.__Vlvbound_h1a00ea64__0)) 
                      << 0x19U));
            vlSelfRef.__Vlvbound_h1a00ea64__0 = (0x1fU 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__g_fncp__DOT__fflags_fle 
                                                            >> 0x1eU)));
            vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp 
                = ((0xf83fffffffULL & vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp) 
                   | ((QData)((IData)(vlSelfRef.__Vlvbound_h1a00ea64__0)) 
                      << 0x1eU));
            vlSelfRef.__Vlvbound_h1a00ea64__0 = (0x1fU 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__g_fncp__DOT__fflags_fle 
                                                            >> 0x23U)));
            vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp 
                = ((0x7ffffffffULL & vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp) 
                   | ((QData)((IData)(vlSelfRef.__Vlvbound_h1a00ea64__0)) 
                      << 0x23U));
        } else if ((1U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm))) {
            if (vlSelfRef.__PVT__is_fcmp) {
                vlSelfRef.__PVT__g_fncp__DOT__result_fncp[0U] 
                    = vlSelfRef.__PVT__g_fncp__DOT__result_flt[0U];
                vlSelfRef.__PVT__g_fncp__DOT__result_fncp[1U] 
                    = vlSelfRef.__PVT__g_fncp__DOT__result_flt[2U];
                vlSelfRef.__PVT__g_fncp__DOT__result_fncp[2U] 
                    = vlSelfRef.__PVT__g_fncp__DOT__result_flt[4U];
                vlSelfRef.__PVT__g_fncp__DOT__result_fncp[3U] 
                    = vlSelfRef.__PVT__g_fncp__DOT__result_flt[6U];
                vlSelfRef.__PVT__g_fncp__DOT__result_fncp[4U] 
                    = vlSelfRef.__PVT__g_fncp__DOT__result_flt[8U];
                vlSelfRef.__PVT__g_fncp__DOT__result_fncp[5U] 
                    = vlSelfRef.__PVT__g_fncp__DOT__result_flt[0xaU];
                vlSelfRef.__PVT__g_fncp__DOT__result_fncp[6U] 
                    = vlSelfRef.__PVT__g_fncp__DOT__result_flt[0xcU];
                vlSelfRef.__PVT__g_fncp__DOT__result_fncp[7U] 
                    = vlSelfRef.__PVT__g_fncp__DOT__result_flt[0xeU];
            } else {
                vlSelfRef.__PVT__g_fncp__DOT__result_fncp[0U] 
                    = vlSelfRef.__PVT__g_fncp__DOT__result_fsgnjn[0U];
                vlSelfRef.__PVT__g_fncp__DOT__result_fncp[1U] 
                    = vlSelfRef.__PVT__g_fncp__DOT__result_fsgnjn[2U];
                vlSelfRef.__PVT__g_fncp__DOT__result_fncp[2U] 
                    = vlSelfRef.__PVT__g_fncp__DOT__result_fsgnjn[4U];
                vlSelfRef.__PVT__g_fncp__DOT__result_fncp[3U] 
                    = vlSelfRef.__PVT__g_fncp__DOT__result_fsgnjn[6U];
                vlSelfRef.__PVT__g_fncp__DOT__result_fncp[4U] 
                    = vlSelfRef.__PVT__g_fncp__DOT__result_fsgnjn[8U];
                vlSelfRef.__PVT__g_fncp__DOT__result_fncp[5U] 
                    = vlSelfRef.__PVT__g_fncp__DOT__result_fsgnjn[0xaU];
                vlSelfRef.__PVT__g_fncp__DOT__result_fncp[6U] 
                    = vlSelfRef.__PVT__g_fncp__DOT__result_fsgnjn[0xcU];
                vlSelfRef.__PVT__g_fncp__DOT__result_fncp[7U] 
                    = vlSelfRef.__PVT__g_fncp__DOT__result_fsgnjn[0xeU];
            }
            vlSelfRef.__Vlvbound_h1a00ea64__1 = (0x1fU 
                                                 & (IData)(vlSelfRef.__PVT__g_fncp__DOT__fflags_flt));
            vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp 
                = ((0xffffffffe0ULL & vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp) 
                   | (IData)((IData)(vlSelfRef.__Vlvbound_h1a00ea64__1)));
            vlSelfRef.__Vlvbound_h1a00ea64__1 = (0x1fU 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__g_fncp__DOT__fflags_flt 
                                                            >> 5U)));
            vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp 
                = ((0xfffffffc1fULL & vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp) 
                   | ((QData)((IData)(vlSelfRef.__Vlvbound_h1a00ea64__1)) 
                      << 5U));
            vlSelfRef.__Vlvbound_h1a00ea64__1 = (0x1fU 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__g_fncp__DOT__fflags_flt 
                                                            >> 0xaU)));
            vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp 
                = ((0xffffff83ffULL & vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp) 
                   | ((QData)((IData)(vlSelfRef.__Vlvbound_h1a00ea64__1)) 
                      << 0xaU));
            vlSelfRef.__Vlvbound_h1a00ea64__1 = (0x1fU 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__g_fncp__DOT__fflags_flt 
                                                            >> 0xfU)));
            vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp 
                = ((0xfffff07fffULL & vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp) 
                   | ((QData)((IData)(vlSelfRef.__Vlvbound_h1a00ea64__1)) 
                      << 0xfU));
            vlSelfRef.__Vlvbound_h1a00ea64__1 = (0x1fU 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__g_fncp__DOT__fflags_flt 
                                                            >> 0x14U)));
            vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp 
                = ((0xfffe0fffffULL & vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp) 
                   | ((QData)((IData)(vlSelfRef.__Vlvbound_h1a00ea64__1)) 
                      << 0x14U));
            vlSelfRef.__Vlvbound_h1a00ea64__1 = (0x1fU 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__g_fncp__DOT__fflags_flt 
                                                            >> 0x19U)));
            vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp 
                = ((0xffc1ffffffULL & vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp) 
                   | ((QData)((IData)(vlSelfRef.__Vlvbound_h1a00ea64__1)) 
                      << 0x19U));
            vlSelfRef.__Vlvbound_h1a00ea64__1 = (0x1fU 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__g_fncp__DOT__fflags_flt 
                                                            >> 0x1eU)));
            vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp 
                = ((0xf83fffffffULL & vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp) 
                   | ((QData)((IData)(vlSelfRef.__Vlvbound_h1a00ea64__1)) 
                      << 0x1eU));
            vlSelfRef.__Vlvbound_h1a00ea64__1 = (0x1fU 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__g_fncp__DOT__fflags_flt 
                                                            >> 0x23U)));
            vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp 
                = ((0x7ffffffffULL & vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp) 
                   | ((QData)((IData)(vlSelfRef.__Vlvbound_h1a00ea64__1)) 
                      << 0x23U));
        } else if ((2U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm))) {
            if (vlSelfRef.__PVT__is_fcmp) {
                vlSelfRef.__PVT__g_fncp__DOT__result_fncp[0U] 
                    = vlSelfRef.__PVT__g_fncp__DOT__result_feq[0U];
                vlSelfRef.__PVT__g_fncp__DOT__result_fncp[1U] 
                    = vlSelfRef.__PVT__g_fncp__DOT__result_feq[2U];
                vlSelfRef.__PVT__g_fncp__DOT__result_fncp[2U] 
                    = vlSelfRef.__PVT__g_fncp__DOT__result_feq[4U];
                vlSelfRef.__PVT__g_fncp__DOT__result_fncp[3U] 
                    = vlSelfRef.__PVT__g_fncp__DOT__result_feq[6U];
                vlSelfRef.__PVT__g_fncp__DOT__result_fncp[4U] 
                    = vlSelfRef.__PVT__g_fncp__DOT__result_feq[8U];
                vlSelfRef.__PVT__g_fncp__DOT__result_fncp[5U] 
                    = vlSelfRef.__PVT__g_fncp__DOT__result_feq[0xaU];
                vlSelfRef.__PVT__g_fncp__DOT__result_fncp[6U] 
                    = vlSelfRef.__PVT__g_fncp__DOT__result_feq[0xcU];
                vlSelfRef.__PVT__g_fncp__DOT__result_fncp[7U] 
                    = vlSelfRef.__PVT__g_fncp__DOT__result_feq[0xeU];
            } else {
                vlSelfRef.__PVT__g_fncp__DOT__result_fncp[0U] 
                    = vlSelfRef.__PVT__g_fncp__DOT__result_fsgnjx[0U];
                vlSelfRef.__PVT__g_fncp__DOT__result_fncp[1U] 
                    = vlSelfRef.__PVT__g_fncp__DOT__result_fsgnjx[2U];
                vlSelfRef.__PVT__g_fncp__DOT__result_fncp[2U] 
                    = vlSelfRef.__PVT__g_fncp__DOT__result_fsgnjx[4U];
                vlSelfRef.__PVT__g_fncp__DOT__result_fncp[3U] 
                    = vlSelfRef.__PVT__g_fncp__DOT__result_fsgnjx[6U];
                vlSelfRef.__PVT__g_fncp__DOT__result_fncp[4U] 
                    = vlSelfRef.__PVT__g_fncp__DOT__result_fsgnjx[8U];
                vlSelfRef.__PVT__g_fncp__DOT__result_fncp[5U] 
                    = vlSelfRef.__PVT__g_fncp__DOT__result_fsgnjx[0xaU];
                vlSelfRef.__PVT__g_fncp__DOT__result_fncp[6U] 
                    = vlSelfRef.__PVT__g_fncp__DOT__result_fsgnjx[0xcU];
                vlSelfRef.__PVT__g_fncp__DOT__result_fncp[7U] 
                    = vlSelfRef.__PVT__g_fncp__DOT__result_fsgnjx[0xeU];
            }
            vlSelfRef.__Vlvbound_h1a00ea64__2 = (0x1fU 
                                                 & (IData)(vlSelfRef.__PVT__g_fncp__DOT__fflags_feq));
            vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp 
                = ((0xffffffffe0ULL & vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp) 
                   | (IData)((IData)(vlSelfRef.__Vlvbound_h1a00ea64__2)));
            vlSelfRef.__Vlvbound_h1a00ea64__2 = (0x1fU 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__g_fncp__DOT__fflags_feq 
                                                            >> 5U)));
            vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp 
                = ((0xfffffffc1fULL & vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp) 
                   | ((QData)((IData)(vlSelfRef.__Vlvbound_h1a00ea64__2)) 
                      << 5U));
            vlSelfRef.__Vlvbound_h1a00ea64__2 = (0x1fU 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__g_fncp__DOT__fflags_feq 
                                                            >> 0xaU)));
            vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp 
                = ((0xffffff83ffULL & vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp) 
                   | ((QData)((IData)(vlSelfRef.__Vlvbound_h1a00ea64__2)) 
                      << 0xaU));
            vlSelfRef.__Vlvbound_h1a00ea64__2 = (0x1fU 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__g_fncp__DOT__fflags_feq 
                                                            >> 0xfU)));
            vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp 
                = ((0xfffff07fffULL & vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp) 
                   | ((QData)((IData)(vlSelfRef.__Vlvbound_h1a00ea64__2)) 
                      << 0xfU));
            vlSelfRef.__Vlvbound_h1a00ea64__2 = (0x1fU 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__g_fncp__DOT__fflags_feq 
                                                            >> 0x14U)));
            vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp 
                = ((0xfffe0fffffULL & vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp) 
                   | ((QData)((IData)(vlSelfRef.__Vlvbound_h1a00ea64__2)) 
                      << 0x14U));
            vlSelfRef.__Vlvbound_h1a00ea64__2 = (0x1fU 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__g_fncp__DOT__fflags_feq 
                                                            >> 0x19U)));
            vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp 
                = ((0xffc1ffffffULL & vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp) 
                   | ((QData)((IData)(vlSelfRef.__Vlvbound_h1a00ea64__2)) 
                      << 0x19U));
            vlSelfRef.__Vlvbound_h1a00ea64__2 = (0x1fU 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__g_fncp__DOT__fflags_feq 
                                                            >> 0x1eU)));
            vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp 
                = ((0xf83fffffffULL & vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp) 
                   | ((QData)((IData)(vlSelfRef.__Vlvbound_h1a00ea64__2)) 
                      << 0x1eU));
            vlSelfRef.__Vlvbound_h1a00ea64__2 = (0x1fU 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__g_fncp__DOT__fflags_feq 
                                                            >> 0x23U)));
            vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp 
                = ((0x7ffffffffULL & vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp) 
                   | ((QData)((IData)(vlSelfRef.__Vlvbound_h1a00ea64__2)) 
                      << 0x23U));
        } else {
            if ((3U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm))) {
                vlSelfRef.__PVT__g_fncp__DOT__result_fncp[0U] 
                    = vlSelfRef.__PVT__g_fncp__DOT__result_fclss[0U];
                vlSelfRef.__PVT__g_fncp__DOT__result_fncp[1U] 
                    = vlSelfRef.__PVT__g_fncp__DOT__result_fclss[2U];
                vlSelfRef.__PVT__g_fncp__DOT__result_fncp[2U] 
                    = vlSelfRef.__PVT__g_fncp__DOT__result_fclss[4U];
                vlSelfRef.__PVT__g_fncp__DOT__result_fncp[3U] 
                    = vlSelfRef.__PVT__g_fncp__DOT__result_fclss[6U];
                vlSelfRef.__PVT__g_fncp__DOT__result_fncp[4U] 
                    = vlSelfRef.__PVT__g_fncp__DOT__result_fclss[8U];
                vlSelfRef.__PVT__g_fncp__DOT__result_fncp[5U] 
                    = vlSelfRef.__PVT__g_fncp__DOT__result_fclss[0xaU];
                vlSelfRef.__PVT__g_fncp__DOT__result_fncp[6U] 
                    = vlSelfRef.__PVT__g_fncp__DOT__result_fclss[0xcU];
                vlSelfRef.__PVT__g_fncp__DOT__result_fncp[7U] 
                    = vlSelfRef.__PVT__g_fncp__DOT__result_fclss[0xeU];
            } else if ((4U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm))) {
                vlSelfRef.__PVT__g_fncp__DOT__result_fncp[0U] 
                    = vlSelfRef.__PVT__g_fncp__DOT__result_fmvx[0U];
                vlSelfRef.__PVT__g_fncp__DOT__result_fncp[1U] 
                    = vlSelfRef.__PVT__g_fncp__DOT__result_fmvx[2U];
                vlSelfRef.__PVT__g_fncp__DOT__result_fncp[2U] 
                    = vlSelfRef.__PVT__g_fncp__DOT__result_fmvx[4U];
                vlSelfRef.__PVT__g_fncp__DOT__result_fncp[3U] 
                    = vlSelfRef.__PVT__g_fncp__DOT__result_fmvx[6U];
                vlSelfRef.__PVT__g_fncp__DOT__result_fncp[4U] 
                    = vlSelfRef.__PVT__g_fncp__DOT__result_fmvx[8U];
                vlSelfRef.__PVT__g_fncp__DOT__result_fncp[5U] 
                    = vlSelfRef.__PVT__g_fncp__DOT__result_fmvx[0xaU];
                vlSelfRef.__PVT__g_fncp__DOT__result_fncp[6U] 
                    = vlSelfRef.__PVT__g_fncp__DOT__result_fmvx[0xcU];
                vlSelfRef.__PVT__g_fncp__DOT__result_fncp[7U] 
                    = vlSelfRef.__PVT__g_fncp__DOT__result_fmvx[0xeU];
            } else if ((5U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm))) {
                vlSelfRef.__PVT__g_fncp__DOT__result_fncp[0U] 
                    = vlSelfRef.__PVT__g_fncp__DOT__result_fmvf[0U];
                vlSelfRef.__PVT__g_fncp__DOT__result_fncp[1U] 
                    = vlSelfRef.__PVT__g_fncp__DOT__result_fmvf[2U];
                vlSelfRef.__PVT__g_fncp__DOT__result_fncp[2U] 
                    = vlSelfRef.__PVT__g_fncp__DOT__result_fmvf[4U];
                vlSelfRef.__PVT__g_fncp__DOT__result_fncp[3U] 
                    = vlSelfRef.__PVT__g_fncp__DOT__result_fmvf[6U];
                vlSelfRef.__PVT__g_fncp__DOT__result_fncp[4U] 
                    = vlSelfRef.__PVT__g_fncp__DOT__result_fmvf[8U];
                vlSelfRef.__PVT__g_fncp__DOT__result_fncp[5U] 
                    = vlSelfRef.__PVT__g_fncp__DOT__result_fmvf[0xaU];
                vlSelfRef.__PVT__g_fncp__DOT__result_fncp[6U] 
                    = vlSelfRef.__PVT__g_fncp__DOT__result_fmvf[0xcU];
                vlSelfRef.__PVT__g_fncp__DOT__result_fncp[7U] 
                    = vlSelfRef.__PVT__g_fncp__DOT__result_fmvf[0xeU];
            } else if ((6U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm))) {
                vlSelfRef.__PVT__g_fncp__DOT__result_fncp[0U] 
                    = vlSelfRef.__PVT__g_fncp__DOT__result_fmin[0U];
                vlSelfRef.__PVT__g_fncp__DOT__result_fncp[1U] 
                    = vlSelfRef.__PVT__g_fncp__DOT__result_fmin[2U];
                vlSelfRef.__PVT__g_fncp__DOT__result_fncp[2U] 
                    = vlSelfRef.__PVT__g_fncp__DOT__result_fmin[4U];
                vlSelfRef.__PVT__g_fncp__DOT__result_fncp[3U] 
                    = vlSelfRef.__PVT__g_fncp__DOT__result_fmin[6U];
                vlSelfRef.__PVT__g_fncp__DOT__result_fncp[4U] 
                    = vlSelfRef.__PVT__g_fncp__DOT__result_fmin[8U];
                vlSelfRef.__PVT__g_fncp__DOT__result_fncp[5U] 
                    = vlSelfRef.__PVT__g_fncp__DOT__result_fmin[0xaU];
                vlSelfRef.__PVT__g_fncp__DOT__result_fncp[6U] 
                    = vlSelfRef.__PVT__g_fncp__DOT__result_fmin[0xcU];
                vlSelfRef.__PVT__g_fncp__DOT__result_fncp[7U] 
                    = vlSelfRef.__PVT__g_fncp__DOT__result_fmin[0xeU];
            } else {
                vlSelfRef.__PVT__g_fncp__DOT__result_fncp[0U] 
                    = vlSelfRef.__PVT__g_fncp__DOT__result_fmax[0U];
                vlSelfRef.__PVT__g_fncp__DOT__result_fncp[1U] 
                    = vlSelfRef.__PVT__g_fncp__DOT__result_fmax[2U];
                vlSelfRef.__PVT__g_fncp__DOT__result_fncp[2U] 
                    = vlSelfRef.__PVT__g_fncp__DOT__result_fmax[4U];
                vlSelfRef.__PVT__g_fncp__DOT__result_fncp[3U] 
                    = vlSelfRef.__PVT__g_fncp__DOT__result_fmax[6U];
                vlSelfRef.__PVT__g_fncp__DOT__result_fncp[4U] 
                    = vlSelfRef.__PVT__g_fncp__DOT__result_fmax[8U];
                vlSelfRef.__PVT__g_fncp__DOT__result_fncp[5U] 
                    = vlSelfRef.__PVT__g_fncp__DOT__result_fmax[0xaU];
                vlSelfRef.__PVT__g_fncp__DOT__result_fncp[6U] 
                    = vlSelfRef.__PVT__g_fncp__DOT__result_fmax[0xcU];
                vlSelfRef.__PVT__g_fncp__DOT__result_fncp[7U] 
                    = vlSelfRef.__PVT__g_fncp__DOT__result_fmax[0xeU];
            }
            if ((3U != (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm))) {
                if ((4U != (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm))) {
                    if ((5U != (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm))) {
                        if ((6U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm))) {
                            vlSelfRef.__Vlvbound_h1a00ea64__3 
                                = (0x1fU & (IData)(vlSelfRef.__PVT__g_fncp__DOT__fflags_fmin));
                            vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp 
                                = ((0xffffffffe0ULL 
                                    & vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp) 
                                   | (IData)((IData)(vlSelfRef.__Vlvbound_h1a00ea64__3)));
                            vlSelfRef.__Vlvbound_h1a00ea64__3 
                                = (0x1fU & (IData)(
                                                   (vlSelfRef.__PVT__g_fncp__DOT__fflags_fmin 
                                                    >> 5U)));
                            vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp 
                                = ((0xfffffffc1fULL 
                                    & vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp) 
                                   | ((QData)((IData)(vlSelfRef.__Vlvbound_h1a00ea64__3)) 
                                      << 5U));
                            vlSelfRef.__Vlvbound_h1a00ea64__3 
                                = (0x1fU & (IData)(
                                                   (vlSelfRef.__PVT__g_fncp__DOT__fflags_fmin 
                                                    >> 0xaU)));
                            vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp 
                                = ((0xffffff83ffULL 
                                    & vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp) 
                                   | ((QData)((IData)(vlSelfRef.__Vlvbound_h1a00ea64__3)) 
                                      << 0xaU));
                            vlSelfRef.__Vlvbound_h1a00ea64__3 
                                = (0x1fU & (IData)(
                                                   (vlSelfRef.__PVT__g_fncp__DOT__fflags_fmin 
                                                    >> 0xfU)));
                            vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp 
                                = ((0xfffff07fffULL 
                                    & vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp) 
                                   | ((QData)((IData)(vlSelfRef.__Vlvbound_h1a00ea64__3)) 
                                      << 0xfU));
                            vlSelfRef.__Vlvbound_h1a00ea64__3 
                                = (0x1fU & (IData)(
                                                   (vlSelfRef.__PVT__g_fncp__DOT__fflags_fmin 
                                                    >> 0x14U)));
                            vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp 
                                = ((0xfffe0fffffULL 
                                    & vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp) 
                                   | ((QData)((IData)(vlSelfRef.__Vlvbound_h1a00ea64__3)) 
                                      << 0x14U));
                            vlSelfRef.__Vlvbound_h1a00ea64__3 
                                = (0x1fU & (IData)(
                                                   (vlSelfRef.__PVT__g_fncp__DOT__fflags_fmin 
                                                    >> 0x19U)));
                            vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp 
                                = ((0xffc1ffffffULL 
                                    & vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp) 
                                   | ((QData)((IData)(vlSelfRef.__Vlvbound_h1a00ea64__3)) 
                                      << 0x19U));
                            vlSelfRef.__Vlvbound_h1a00ea64__3 
                                = (0x1fU & (IData)(
                                                   (vlSelfRef.__PVT__g_fncp__DOT__fflags_fmin 
                                                    >> 0x1eU)));
                            vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp 
                                = ((0xf83fffffffULL 
                                    & vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp) 
                                   | ((QData)((IData)(vlSelfRef.__Vlvbound_h1a00ea64__3)) 
                                      << 0x1eU));
                            vlSelfRef.__Vlvbound_h1a00ea64__3 
                                = (0x1fU & (IData)(
                                                   (vlSelfRef.__PVT__g_fncp__DOT__fflags_fmin 
                                                    >> 0x23U)));
                            vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp 
                                = ((0x7ffffffffULL 
                                    & vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp) 
                                   | ((QData)((IData)(vlSelfRef.__Vlvbound_h1a00ea64__3)) 
                                      << 0x23U));
                        } else {
                            vlSelfRef.__Vlvbound_h1a00ea64__4 
                                = (0x1fU & (IData)(vlSelfRef.__PVT__g_fncp__DOT__fflags_fmax));
                            vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp 
                                = ((0xffffffffe0ULL 
                                    & vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp) 
                                   | (IData)((IData)(vlSelfRef.__Vlvbound_h1a00ea64__4)));
                            vlSelfRef.__Vlvbound_h1a00ea64__4 
                                = (0x1fU & (IData)(
                                                   (vlSelfRef.__PVT__g_fncp__DOT__fflags_fmax 
                                                    >> 5U)));
                            vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp 
                                = ((0xfffffffc1fULL 
                                    & vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp) 
                                   | ((QData)((IData)(vlSelfRef.__Vlvbound_h1a00ea64__4)) 
                                      << 5U));
                            vlSelfRef.__Vlvbound_h1a00ea64__4 
                                = (0x1fU & (IData)(
                                                   (vlSelfRef.__PVT__g_fncp__DOT__fflags_fmax 
                                                    >> 0xaU)));
                            vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp 
                                = ((0xffffff83ffULL 
                                    & vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp) 
                                   | ((QData)((IData)(vlSelfRef.__Vlvbound_h1a00ea64__4)) 
                                      << 0xaU));
                            vlSelfRef.__Vlvbound_h1a00ea64__4 
                                = (0x1fU & (IData)(
                                                   (vlSelfRef.__PVT__g_fncp__DOT__fflags_fmax 
                                                    >> 0xfU)));
                            vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp 
                                = ((0xfffff07fffULL 
                                    & vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp) 
                                   | ((QData)((IData)(vlSelfRef.__Vlvbound_h1a00ea64__4)) 
                                      << 0xfU));
                            vlSelfRef.__Vlvbound_h1a00ea64__4 
                                = (0x1fU & (IData)(
                                                   (vlSelfRef.__PVT__g_fncp__DOT__fflags_fmax 
                                                    >> 0x14U)));
                            vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp 
                                = ((0xfffe0fffffULL 
                                    & vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp) 
                                   | ((QData)((IData)(vlSelfRef.__Vlvbound_h1a00ea64__4)) 
                                      << 0x14U));
                            vlSelfRef.__Vlvbound_h1a00ea64__4 
                                = (0x1fU & (IData)(
                                                   (vlSelfRef.__PVT__g_fncp__DOT__fflags_fmax 
                                                    >> 0x19U)));
                            vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp 
                                = ((0xffc1ffffffULL 
                                    & vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp) 
                                   | ((QData)((IData)(vlSelfRef.__Vlvbound_h1a00ea64__4)) 
                                      << 0x19U));
                            vlSelfRef.__Vlvbound_h1a00ea64__4 
                                = (0x1fU & (IData)(
                                                   (vlSelfRef.__PVT__g_fncp__DOT__fflags_fmax 
                                                    >> 0x1eU)));
                            vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp 
                                = ((0xf83fffffffULL 
                                    & vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp) 
                                   | ((QData)((IData)(vlSelfRef.__Vlvbound_h1a00ea64__4)) 
                                      << 0x1eU));
                            vlSelfRef.__Vlvbound_h1a00ea64__4 
                                = (0x1fU & (IData)(
                                                   (vlSelfRef.__PVT__g_fncp__DOT__fflags_fmax 
                                                    >> 0x23U)));
                            vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp 
                                = ((0x7ffffffffULL 
                                    & vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp) 
                                   | ((QData)((IData)(vlSelfRef.__Vlvbound_h1a00ea64__4)) 
                                      << 0x23U));
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.__Vcellinp__g_fcvt__DOT__shift_reg__data_in[0U] 
        = ((vlSelfRef.__PVT__g_fcvt__DOT__result_fcvt[0U] 
            << 5U) | (IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged));
    vlSelfRef.__Vcellinp__g_fcvt__DOT__shift_reg__data_in[1U] 
        = ((vlSelfRef.__PVT__g_fcvt__DOT__result_fcvt[0U] 
            >> 0x1bU) | (vlSelfRef.__PVT__g_fcvt__DOT__result_fcvt[1U] 
                         << 5U));
    vlSelfRef.__Vcellinp__g_fcvt__DOT__shift_reg__data_in[2U] 
        = ((vlSelfRef.__PVT__g_fcvt__DOT__result_fcvt[1U] 
            >> 0x1bU) | (vlSelfRef.__PVT__g_fcvt__DOT__result_fcvt[2U] 
                         << 5U));
    vlSelfRef.__Vcellinp__g_fcvt__DOT__shift_reg__data_in[3U] 
        = ((vlSelfRef.__PVT__g_fcvt__DOT__result_fcvt[2U] 
            >> 0x1bU) | (vlSelfRef.__PVT__g_fcvt__DOT__result_fcvt[3U] 
                         << 5U));
    vlSelfRef.__Vcellinp__g_fcvt__DOT__shift_reg__data_in[4U] 
        = ((vlSelfRef.__PVT__g_fcvt__DOT__result_fcvt[3U] 
            >> 0x1bU) | (vlSelfRef.__PVT__g_fcvt__DOT__result_fcvt[4U] 
                         << 5U));
    vlSelfRef.__Vcellinp__g_fcvt__DOT__shift_reg__data_in[5U] 
        = ((vlSelfRef.__PVT__g_fcvt__DOT__result_fcvt[4U] 
            >> 0x1bU) | (vlSelfRef.__PVT__g_fcvt__DOT__result_fcvt[5U] 
                         << 5U));
    vlSelfRef.__Vcellinp__g_fcvt__DOT__shift_reg__data_in[6U] 
        = ((vlSelfRef.__PVT__g_fcvt__DOT__result_fcvt[5U] 
            >> 0x1bU) | (vlSelfRef.__PVT__g_fcvt__DOT__result_fcvt[6U] 
                         << 5U));
    vlSelfRef.__Vcellinp__g_fcvt__DOT__shift_reg__data_in[7U] 
        = ((vlSelfRef.__PVT__g_fcvt__DOT__result_fcvt[6U] 
            >> 0x1bU) | (vlSelfRef.__PVT__g_fcvt__DOT__result_fcvt[7U] 
                         << 5U));
    vlSelfRef.__Vcellinp__g_fcvt__DOT__shift_reg__data_in[8U] 
        = (((IData)(vlSelfRef.__PVT__g_fcvt__DOT__fcvt_valid) 
            << 6U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__tag_store__DOT__allocator__DOT__acquire_addr_r) 
                       << 5U) | (vlSelfRef.__PVT__g_fcvt__DOT__result_fcvt[7U] 
                                 >> 0x1bU)));
    vlSelfRef.__Vcellinp__g_fma__DOT__shift_reg__data_in[0U] 
        = ((vlSelfRef.__PVT__g_fma__DOT__result_fma[0U] 
            << 5U) | (IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged));
    vlSelfRef.__Vcellinp__g_fma__DOT__shift_reg__data_in[1U] 
        = ((vlSelfRef.__PVT__g_fma__DOT__result_fma[0U] 
            >> 0x1bU) | (vlSelfRef.__PVT__g_fma__DOT__result_fma[1U] 
                         << 5U));
    vlSelfRef.__Vcellinp__g_fma__DOT__shift_reg__data_in[2U] 
        = ((vlSelfRef.__PVT__g_fma__DOT__result_fma[1U] 
            >> 0x1bU) | (vlSelfRef.__PVT__g_fma__DOT__result_fma[2U] 
                         << 5U));
    vlSelfRef.__Vcellinp__g_fma__DOT__shift_reg__data_in[3U] 
        = ((vlSelfRef.__PVT__g_fma__DOT__result_fma[2U] 
            >> 0x1bU) | (vlSelfRef.__PVT__g_fma__DOT__result_fma[3U] 
                         << 5U));
    vlSelfRef.__Vcellinp__g_fma__DOT__shift_reg__data_in[4U] 
        = ((vlSelfRef.__PVT__g_fma__DOT__result_fma[3U] 
            >> 0x1bU) | (vlSelfRef.__PVT__g_fma__DOT__result_fma[4U] 
                         << 5U));
    vlSelfRef.__Vcellinp__g_fma__DOT__shift_reg__data_in[5U] 
        = ((vlSelfRef.__PVT__g_fma__DOT__result_fma[4U] 
            >> 0x1bU) | (vlSelfRef.__PVT__g_fma__DOT__result_fma[5U] 
                         << 5U));
    vlSelfRef.__Vcellinp__g_fma__DOT__shift_reg__data_in[6U] 
        = ((vlSelfRef.__PVT__g_fma__DOT__result_fma[5U] 
            >> 0x1bU) | (vlSelfRef.__PVT__g_fma__DOT__result_fma[6U] 
                         << 5U));
    vlSelfRef.__Vcellinp__g_fma__DOT__shift_reg__data_in[7U] 
        = ((vlSelfRef.__PVT__g_fma__DOT__result_fma[6U] 
            >> 0x1bU) | (vlSelfRef.__PVT__g_fma__DOT__result_fma[7U] 
                         << 5U));
    vlSelfRef.__Vcellinp__g_fma__DOT__shift_reg__data_in[8U] 
        = (((IData)(vlSelfRef.__PVT__g_fma__DOT__fma_valid) 
            << 6U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__tag_store__DOT__allocator__DOT__acquire_addr_r) 
                       << 5U) | (vlSelfRef.__PVT__g_fma__DOT__result_fma[7U] 
                                 >> 0x1bU)));
    vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged = 0U;
    if ((0x20000U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x1aU])) {
        vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged) 
                        | (IData)(vlSelfRef.__PVT__g_fdiv__DOT__fflags_fdiv))));
        vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelfRef.__PVT__g_fdiv__DOT__fflags_fdiv 
                                    >> 1U)) << 1U))));
        vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelfRef.__PVT__g_fdiv__DOT__fflags_fdiv 
                                    >> 2U)) << 2U))));
        vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelfRef.__PVT__g_fdiv__DOT__fflags_fdiv 
                                    >> 3U)) << 3U))));
        vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (0x10U & ((0xfffffff0U & (IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
                           | ((IData)((vlSelfRef.__PVT__g_fdiv__DOT__fflags_fdiv 
                                       >> 4U)) << 4U))));
    }
    if ((0x40000U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x1aU])) {
        vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged) 
                        | (IData)((vlSelfRef.__PVT__g_fdiv__DOT__fflags_fdiv 
                                   >> 5U)))));
        vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelfRef.__PVT__g_fdiv__DOT__fflags_fdiv 
                                    >> 6U)) << 1U))));
        vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelfRef.__PVT__g_fdiv__DOT__fflags_fdiv 
                                    >> 7U)) << 2U))));
        vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelfRef.__PVT__g_fdiv__DOT__fflags_fdiv 
                                    >> 8U)) << 3U))));
        vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (0x10U & ((0xfffffff0U & (IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
                           | ((IData)((vlSelfRef.__PVT__g_fdiv__DOT__fflags_fdiv 
                                       >> 9U)) << 4U))));
    }
    if ((0x80000U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x1aU])) {
        vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged) 
                        | (IData)((vlSelfRef.__PVT__g_fdiv__DOT__fflags_fdiv 
                                   >> 0xaU)))));
        vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelfRef.__PVT__g_fdiv__DOT__fflags_fdiv 
                                    >> 0xbU)) << 1U))));
        vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelfRef.__PVT__g_fdiv__DOT__fflags_fdiv 
                                    >> 0xcU)) << 2U))));
        vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelfRef.__PVT__g_fdiv__DOT__fflags_fdiv 
                                    >> 0xdU)) << 3U))));
        vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (0x10U & ((0xfffffff0U & (IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
                           | ((IData)((vlSelfRef.__PVT__g_fdiv__DOT__fflags_fdiv 
                                       >> 0xeU)) << 4U))));
    }
    if ((0x100000U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x1aU])) {
        vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged) 
                        | (IData)((vlSelfRef.__PVT__g_fdiv__DOT__fflags_fdiv 
                                   >> 0xfU)))));
        vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelfRef.__PVT__g_fdiv__DOT__fflags_fdiv 
                                    >> 0x10U)) << 1U))));
        vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelfRef.__PVT__g_fdiv__DOT__fflags_fdiv 
                                    >> 0x11U)) << 2U))));
        vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelfRef.__PVT__g_fdiv__DOT__fflags_fdiv 
                                    >> 0x12U)) << 3U))));
        vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (0x10U & ((0xfffffff0U & (IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
                           | ((IData)((vlSelfRef.__PVT__g_fdiv__DOT__fflags_fdiv 
                                       >> 0x13U)) << 4U))));
    }
    if ((0x200000U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x1aU])) {
        vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged) 
                        | (IData)((vlSelfRef.__PVT__g_fdiv__DOT__fflags_fdiv 
                                   >> 0x14U)))));
        vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelfRef.__PVT__g_fdiv__DOT__fflags_fdiv 
                                    >> 0x15U)) << 1U))));
        vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelfRef.__PVT__g_fdiv__DOT__fflags_fdiv 
                                    >> 0x16U)) << 2U))));
        vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelfRef.__PVT__g_fdiv__DOT__fflags_fdiv 
                                    >> 0x17U)) << 3U))));
        vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (0x10U & ((0xfffffff0U & (IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
                           | ((IData)((vlSelfRef.__PVT__g_fdiv__DOT__fflags_fdiv 
                                       >> 0x18U)) << 4U))));
    }
    if ((0x400000U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x1aU])) {
        vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged) 
                        | (IData)((vlSelfRef.__PVT__g_fdiv__DOT__fflags_fdiv 
                                   >> 0x19U)))));
        vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelfRef.__PVT__g_fdiv__DOT__fflags_fdiv 
                                    >> 0x1aU)) << 1U))));
        vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelfRef.__PVT__g_fdiv__DOT__fflags_fdiv 
                                    >> 0x1bU)) << 2U))));
        vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelfRef.__PVT__g_fdiv__DOT__fflags_fdiv 
                                    >> 0x1cU)) << 3U))));
        vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (0x10U & ((0xfffffff0U & (IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
                           | ((IData)((vlSelfRef.__PVT__g_fdiv__DOT__fflags_fdiv 
                                       >> 0x1dU)) << 4U))));
    }
    vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged = 0U;
    if ((0x20000U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x1aU])) {
        vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged) 
                        | (IData)(vlSelfRef.__PVT__g_fsqrt__DOT__fflags_fsqrt))));
        vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelfRef.__PVT__g_fsqrt__DOT__fflags_fsqrt 
                                    >> 1U)) << 1U))));
        vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelfRef.__PVT__g_fsqrt__DOT__fflags_fsqrt 
                                    >> 2U)) << 2U))));
        vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelfRef.__PVT__g_fsqrt__DOT__fflags_fsqrt 
                                    >> 3U)) << 3U))));
        vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (0x10U & ((0xfffffff0U & (IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
                           | ((IData)((vlSelfRef.__PVT__g_fsqrt__DOT__fflags_fsqrt 
                                       >> 4U)) << 4U))));
    }
    if ((0x40000U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x1aU])) {
        vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged) 
                        | (IData)((vlSelfRef.__PVT__g_fsqrt__DOT__fflags_fsqrt 
                                   >> 5U)))));
        vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelfRef.__PVT__g_fsqrt__DOT__fflags_fsqrt 
                                    >> 6U)) << 1U))));
        vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelfRef.__PVT__g_fsqrt__DOT__fflags_fsqrt 
                                    >> 7U)) << 2U))));
        vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelfRef.__PVT__g_fsqrt__DOT__fflags_fsqrt 
                                    >> 8U)) << 3U))));
        vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (0x10U & ((0xfffffff0U & (IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
                           | ((IData)((vlSelfRef.__PVT__g_fsqrt__DOT__fflags_fsqrt 
                                       >> 9U)) << 4U))));
    }
    if ((0x80000U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x1aU])) {
        vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged) 
                        | (IData)((vlSelfRef.__PVT__g_fsqrt__DOT__fflags_fsqrt 
                                   >> 0xaU)))));
        vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelfRef.__PVT__g_fsqrt__DOT__fflags_fsqrt 
                                    >> 0xbU)) << 1U))));
        vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelfRef.__PVT__g_fsqrt__DOT__fflags_fsqrt 
                                    >> 0xcU)) << 2U))));
        vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelfRef.__PVT__g_fsqrt__DOT__fflags_fsqrt 
                                    >> 0xdU)) << 3U))));
        vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (0x10U & ((0xfffffff0U & (IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
                           | ((IData)((vlSelfRef.__PVT__g_fsqrt__DOT__fflags_fsqrt 
                                       >> 0xeU)) << 4U))));
    }
    if ((0x100000U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x1aU])) {
        vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged) 
                        | (IData)((vlSelfRef.__PVT__g_fsqrt__DOT__fflags_fsqrt 
                                   >> 0xfU)))));
        vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelfRef.__PVT__g_fsqrt__DOT__fflags_fsqrt 
                                    >> 0x10U)) << 1U))));
        vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelfRef.__PVT__g_fsqrt__DOT__fflags_fsqrt 
                                    >> 0x11U)) << 2U))));
        vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelfRef.__PVT__g_fsqrt__DOT__fflags_fsqrt 
                                    >> 0x12U)) << 3U))));
        vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (0x10U & ((0xfffffff0U & (IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
                           | ((IData)((vlSelfRef.__PVT__g_fsqrt__DOT__fflags_fsqrt 
                                       >> 0x13U)) << 4U))));
    }
    if ((0x200000U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x1aU])) {
        vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged) 
                        | (IData)((vlSelfRef.__PVT__g_fsqrt__DOT__fflags_fsqrt 
                                   >> 0x14U)))));
        vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelfRef.__PVT__g_fsqrt__DOT__fflags_fsqrt 
                                    >> 0x15U)) << 1U))));
        vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelfRef.__PVT__g_fsqrt__DOT__fflags_fsqrt 
                                    >> 0x16U)) << 2U))));
        vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelfRef.__PVT__g_fsqrt__DOT__fflags_fsqrt 
                                    >> 0x17U)) << 3U))));
        vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (0x10U & ((0xfffffff0U & (IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
                           | ((IData)((vlSelfRef.__PVT__g_fsqrt__DOT__fflags_fsqrt 
                                       >> 0x18U)) << 4U))));
    }
    if ((0x400000U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x1aU])) {
        vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged) 
                        | (IData)((vlSelfRef.__PVT__g_fsqrt__DOT__fflags_fsqrt 
                                   >> 0x19U)))));
        vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelfRef.__PVT__g_fsqrt__DOT__fflags_fsqrt 
                                    >> 0x1aU)) << 1U))));
        vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelfRef.__PVT__g_fsqrt__DOT__fflags_fsqrt 
                                    >> 0x1bU)) << 2U))));
        vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelfRef.__PVT__g_fsqrt__DOT__fflags_fsqrt 
                                    >> 0x1cU)) << 3U))));
        vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (0x10U & ((0xfffffff0U & (IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
                           | ((IData)((vlSelfRef.__PVT__g_fsqrt__DOT__fflags_fsqrt 
                                       >> 0x1dU)) << 4U))));
    }
    if ((0x800000U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x1aU])) {
        vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged) 
                        | (IData)((vlSelfRef.__PVT__g_fdiv__DOT__fflags_fdiv 
                                   >> 0x1eU)))));
        vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelfRef.__PVT__g_fdiv__DOT__fflags_fdiv 
                                    >> 0x1fU)) << 1U))));
        vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelfRef.__PVT__g_fdiv__DOT__fflags_fdiv 
                                    >> 0x20U)) << 2U))));
        vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelfRef.__PVT__g_fdiv__DOT__fflags_fdiv 
                                    >> 0x21U)) << 3U))));
        vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (0x10U & ((0xfffffff0U & (IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
                           | ((IData)((vlSelfRef.__PVT__g_fdiv__DOT__fflags_fdiv 
                                       >> 0x22U)) << 4U))));
        vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged) 
                        | (IData)((vlSelfRef.__PVT__g_fsqrt__DOT__fflags_fsqrt 
                                   >> 0x1eU)))));
        vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelfRef.__PVT__g_fsqrt__DOT__fflags_fsqrt 
                                    >> 0x1fU)) << 1U))));
        vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelfRef.__PVT__g_fsqrt__DOT__fflags_fsqrt 
                                    >> 0x20U)) << 2U))));
        vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelfRef.__PVT__g_fsqrt__DOT__fflags_fsqrt 
                                    >> 0x21U)) << 3U))));
        vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (0x10U & ((0xfffffff0U & (IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
                           | ((IData)((vlSelfRef.__PVT__g_fsqrt__DOT__fflags_fsqrt 
                                       >> 0x22U)) << 4U))));
    }
    vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged = 0U;
    if ((0x20000U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x1aU])) {
        vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged) 
                        | (IData)(vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp))));
        vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp 
                                    >> 1U)) << 1U))));
        vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp 
                                    >> 2U)) << 2U))));
        vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp 
                                    >> 3U)) << 3U))));
        vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (0x10U & ((0xfffffff0U & (IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged)) 
                           | ((IData)((vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp 
                                       >> 4U)) << 4U))));
    }
    if ((0x40000U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x1aU])) {
        vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged) 
                        | (IData)((vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp 
                                   >> 5U)))));
        vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp 
                                    >> 6U)) << 1U))));
        vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp 
                                    >> 7U)) << 2U))));
        vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp 
                                    >> 8U)) << 3U))));
        vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (0x10U & ((0xfffffff0U & (IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged)) 
                           | ((IData)((vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp 
                                       >> 9U)) << 4U))));
    }
    if ((0x80000U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x1aU])) {
        vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged) 
                        | (IData)((vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp 
                                   >> 0xaU)))));
        vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp 
                                    >> 0xbU)) << 1U))));
        vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp 
                                    >> 0xcU)) << 2U))));
        vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp 
                                    >> 0xdU)) << 3U))));
        vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (0x10U & ((0xfffffff0U & (IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged)) 
                           | ((IData)((vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp 
                                       >> 0xeU)) << 4U))));
    }
    if ((0x100000U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x1aU])) {
        vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged) 
                        | (IData)((vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp 
                                   >> 0xfU)))));
        vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp 
                                    >> 0x10U)) << 1U))));
        vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp 
                                    >> 0x11U)) << 2U))));
        vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp 
                                    >> 0x12U)) << 3U))));
        vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (0x10U & ((0xfffffff0U & (IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged)) 
                           | ((IData)((vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp 
                                       >> 0x13U)) << 4U))));
    }
    if ((0x200000U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x1aU])) {
        vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged) 
                        | (IData)((vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp 
                                   >> 0x14U)))));
        vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp 
                                    >> 0x15U)) << 1U))));
        vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp 
                                    >> 0x16U)) << 2U))));
        vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp 
                                    >> 0x17U)) << 3U))));
        vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (0x10U & ((0xfffffff0U & (IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged)) 
                           | ((IData)((vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp 
                                       >> 0x18U)) << 4U))));
    }
    if ((0x400000U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x1aU])) {
        vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged) 
                        | (IData)((vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp 
                                   >> 0x19U)))));
        vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp 
                                    >> 0x1aU)) << 1U))));
        vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp 
                                    >> 0x1bU)) << 2U))));
        vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp 
                                    >> 0x1cU)) << 3U))));
        vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (0x10U & ((0xfffffff0U & (IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged)) 
                           | ((IData)((vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp 
                                       >> 0x1dU)) << 4U))));
    }
    if ((0x800000U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x1aU])) {
        vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged) 
                        | (IData)((vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp 
                                   >> 0x1eU)))));
        vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp 
                                    >> 0x1fU)) << 1U))));
        vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp 
                                    >> 0x20U)) << 2U))));
        vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp 
                                    >> 0x21U)) << 3U))));
        vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (0x10U & ((0xfffffff0U & (IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged)) 
                           | ((IData)((vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp 
                                       >> 0x22U)) << 4U))));
    }
    if ((0x1000000U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0x1aU])) {
        vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged) 
                        | (IData)((vlSelfRef.__PVT__g_fdiv__DOT__fflags_fdiv 
                                   >> 0x23U)))));
        vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelfRef.__PVT__g_fdiv__DOT__fflags_fdiv 
                                    >> 0x24U)) << 1U))));
        vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelfRef.__PVT__g_fdiv__DOT__fflags_fdiv 
                                    >> 0x25U)) << 2U))));
        vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelfRef.__PVT__g_fdiv__DOT__fflags_fdiv 
                                    >> 0x26U)) << 3U))));
        vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | ((IData)((((IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged) 
                            >> 4U) | (vlSelfRef.__PVT__g_fdiv__DOT__fflags_fdiv 
                                      >> 0x27U))) << 4U));
        vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged) 
                        | (IData)((vlSelfRef.__PVT__g_fsqrt__DOT__fflags_fsqrt 
                                   >> 0x23U)))));
        vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelfRef.__PVT__g_fsqrt__DOT__fflags_fsqrt 
                                    >> 0x24U)) << 1U))));
        vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelfRef.__PVT__g_fsqrt__DOT__fflags_fsqrt 
                                    >> 0x25U)) << 2U))));
        vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelfRef.__PVT__g_fsqrt__DOT__fflags_fsqrt 
                                    >> 0x26U)) << 3U))));
        vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | ((IData)((((IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged) 
                            >> 4U) | (vlSelfRef.__PVT__g_fsqrt__DOT__fflags_fsqrt 
                                      >> 0x27U))) << 4U));
        vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged) 
                        | (IData)((vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp 
                                   >> 0x23U)))));
        vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp 
                                    >> 0x24U)) << 1U))));
        vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp 
                                    >> 0x25U)) << 2U))));
        vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged)) 
                        | ((IData)((vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp 
                                    >> 0x26U)) << 3U))));
        vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | ((IData)((((IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged) 
                            >> 4U) | (vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp 
                                      >> 0x27U))) << 4U));
    }
    vlSelfRef.__Vcellinp__g_fdiv__DOT__shift_reg__data_in[0U] 
        = ((vlSelfRef.__PVT__g_fdiv__DOT__result_fdiv_r[0U] 
            << 5U) | (IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged));
    vlSelfRef.__Vcellinp__g_fdiv__DOT__shift_reg__data_in[1U] 
        = ((vlSelfRef.__PVT__g_fdiv__DOT__result_fdiv_r[0U] 
            >> 0x1bU) | (vlSelfRef.__PVT__g_fdiv__DOT__result_fdiv_r[1U] 
                         << 5U));
    vlSelfRef.__Vcellinp__g_fdiv__DOT__shift_reg__data_in[2U] 
        = ((vlSelfRef.__PVT__g_fdiv__DOT__result_fdiv_r[1U] 
            >> 0x1bU) | (vlSelfRef.__PVT__g_fdiv__DOT__result_fdiv_r[2U] 
                         << 5U));
    vlSelfRef.__Vcellinp__g_fdiv__DOT__shift_reg__data_in[3U] 
        = ((vlSelfRef.__PVT__g_fdiv__DOT__result_fdiv_r[2U] 
            >> 0x1bU) | (vlSelfRef.__PVT__g_fdiv__DOT__result_fdiv_r[3U] 
                         << 5U));
    vlSelfRef.__Vcellinp__g_fdiv__DOT__shift_reg__data_in[4U] 
        = ((vlSelfRef.__PVT__g_fdiv__DOT__result_fdiv_r[3U] 
            >> 0x1bU) | (vlSelfRef.__PVT__g_fdiv__DOT__result_fdiv_r[4U] 
                         << 5U));
    vlSelfRef.__Vcellinp__g_fdiv__DOT__shift_reg__data_in[5U] 
        = ((vlSelfRef.__PVT__g_fdiv__DOT__result_fdiv_r[4U] 
            >> 0x1bU) | (vlSelfRef.__PVT__g_fdiv__DOT__result_fdiv_r[5U] 
                         << 5U));
    vlSelfRef.__Vcellinp__g_fdiv__DOT__shift_reg__data_in[6U] 
        = ((vlSelfRef.__PVT__g_fdiv__DOT__result_fdiv_r[5U] 
            >> 0x1bU) | (vlSelfRef.__PVT__g_fdiv__DOT__result_fdiv_r[6U] 
                         << 5U));
    vlSelfRef.__Vcellinp__g_fdiv__DOT__shift_reg__data_in[7U] 
        = ((vlSelfRef.__PVT__g_fdiv__DOT__result_fdiv_r[6U] 
            >> 0x1bU) | (vlSelfRef.__PVT__g_fdiv__DOT__result_fdiv_r[7U] 
                         << 5U));
    vlSelfRef.__Vcellinp__g_fdiv__DOT__shift_reg__data_in[8U] 
        = (((IData)(vlSelfRef.__PVT__g_fdiv__DOT__fdiv_valid) 
            << 6U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__tag_store__DOT__allocator__DOT__acquire_addr_r) 
                       << 5U) | (vlSelfRef.__PVT__g_fdiv__DOT__result_fdiv_r[7U] 
                                 >> 0x1bU)));
    vlSelfRef.__Vcellinp__g_fsqrt__DOT__shift_reg__data_in[0U] 
        = ((vlSelfRef.__PVT__g_fsqrt__DOT__result_fsqrt_r[0U] 
            << 5U) | (IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged));
    vlSelfRef.__Vcellinp__g_fsqrt__DOT__shift_reg__data_in[1U] 
        = ((vlSelfRef.__PVT__g_fsqrt__DOT__result_fsqrt_r[0U] 
            >> 0x1bU) | (vlSelfRef.__PVT__g_fsqrt__DOT__result_fsqrt_r[1U] 
                         << 5U));
    vlSelfRef.__Vcellinp__g_fsqrt__DOT__shift_reg__data_in[2U] 
        = ((vlSelfRef.__PVT__g_fsqrt__DOT__result_fsqrt_r[1U] 
            >> 0x1bU) | (vlSelfRef.__PVT__g_fsqrt__DOT__result_fsqrt_r[2U] 
                         << 5U));
    vlSelfRef.__Vcellinp__g_fsqrt__DOT__shift_reg__data_in[3U] 
        = ((vlSelfRef.__PVT__g_fsqrt__DOT__result_fsqrt_r[2U] 
            >> 0x1bU) | (vlSelfRef.__PVT__g_fsqrt__DOT__result_fsqrt_r[3U] 
                         << 5U));
    vlSelfRef.__Vcellinp__g_fsqrt__DOT__shift_reg__data_in[4U] 
        = ((vlSelfRef.__PVT__g_fsqrt__DOT__result_fsqrt_r[3U] 
            >> 0x1bU) | (vlSelfRef.__PVT__g_fsqrt__DOT__result_fsqrt_r[4U] 
                         << 5U));
    vlSelfRef.__Vcellinp__g_fsqrt__DOT__shift_reg__data_in[5U] 
        = ((vlSelfRef.__PVT__g_fsqrt__DOT__result_fsqrt_r[4U] 
            >> 0x1bU) | (vlSelfRef.__PVT__g_fsqrt__DOT__result_fsqrt_r[5U] 
                         << 5U));
    vlSelfRef.__Vcellinp__g_fsqrt__DOT__shift_reg__data_in[6U] 
        = ((vlSelfRef.__PVT__g_fsqrt__DOT__result_fsqrt_r[5U] 
            >> 0x1bU) | (vlSelfRef.__PVT__g_fsqrt__DOT__result_fsqrt_r[6U] 
                         << 5U));
    vlSelfRef.__Vcellinp__g_fsqrt__DOT__shift_reg__data_in[7U] 
        = ((vlSelfRef.__PVT__g_fsqrt__DOT__result_fsqrt_r[6U] 
            >> 0x1bU) | (vlSelfRef.__PVT__g_fsqrt__DOT__result_fsqrt_r[7U] 
                         << 5U));
    vlSelfRef.__Vcellinp__g_fsqrt__DOT__shift_reg__data_in[8U] 
        = (((IData)(vlSelfRef.__PVT__g_fsqrt__DOT__fsqrt_valid) 
            << 6U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__tag_store__DOT__allocator__DOT__acquire_addr_r) 
                       << 5U) | (vlSelfRef.__PVT__g_fsqrt__DOT__result_fsqrt_r[7U] 
                                 >> 0x1bU)));
    vlSelfRef.__Vcellinp__g_fncp__DOT__shift_reg__data_in[0U] 
        = ((vlSelfRef.__PVT__g_fncp__DOT__result_fncp[0U] 
            << 5U) | (IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged));
    vlSelfRef.__Vcellinp__g_fncp__DOT__shift_reg__data_in[1U] 
        = ((vlSelfRef.__PVT__g_fncp__DOT__result_fncp[0U] 
            >> 0x1bU) | (vlSelfRef.__PVT__g_fncp__DOT__result_fncp[1U] 
                         << 5U));
    vlSelfRef.__Vcellinp__g_fncp__DOT__shift_reg__data_in[2U] 
        = ((vlSelfRef.__PVT__g_fncp__DOT__result_fncp[1U] 
            >> 0x1bU) | (vlSelfRef.__PVT__g_fncp__DOT__result_fncp[2U] 
                         << 5U));
    vlSelfRef.__Vcellinp__g_fncp__DOT__shift_reg__data_in[3U] 
        = ((vlSelfRef.__PVT__g_fncp__DOT__result_fncp[2U] 
            >> 0x1bU) | (vlSelfRef.__PVT__g_fncp__DOT__result_fncp[3U] 
                         << 5U));
    vlSelfRef.__Vcellinp__g_fncp__DOT__shift_reg__data_in[4U] 
        = ((vlSelfRef.__PVT__g_fncp__DOT__result_fncp[3U] 
            >> 0x1bU) | (vlSelfRef.__PVT__g_fncp__DOT__result_fncp[4U] 
                         << 5U));
    vlSelfRef.__Vcellinp__g_fncp__DOT__shift_reg__data_in[5U] 
        = ((vlSelfRef.__PVT__g_fncp__DOT__result_fncp[4U] 
            >> 0x1bU) | (vlSelfRef.__PVT__g_fncp__DOT__result_fncp[5U] 
                         << 5U));
    vlSelfRef.__Vcellinp__g_fncp__DOT__shift_reg__data_in[6U] 
        = ((vlSelfRef.__PVT__g_fncp__DOT__result_fncp[5U] 
            >> 0x1bU) | (vlSelfRef.__PVT__g_fncp__DOT__result_fncp[6U] 
                         << 5U));
    vlSelfRef.__Vcellinp__g_fncp__DOT__shift_reg__data_in[7U] 
        = ((vlSelfRef.__PVT__g_fncp__DOT__result_fncp[6U] 
            >> 0x1bU) | (vlSelfRef.__PVT__g_fncp__DOT__result_fncp[7U] 
                         << 5U));
    vlSelfRef.__Vcellinp__g_fncp__DOT__shift_reg__data_in[8U] 
        = (((IData)(vlSelfRef.__PVT__g_fncp__DOT__fncp_valid) 
            << 7U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__tag_store__DOT__allocator__DOT__acquire_addr_r) 
                       << 6U) | ((((6U <= (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm)) 
                                   | (IData)(vlSelfRef.__PVT__is_fcmp)) 
                                  << 5U) | (vlSelfRef.__PVT__g_fncp__DOT__result_fncp[7U] 
                                            >> 0x1bU))));
}
