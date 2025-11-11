// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrtlsim_shim.h for the primary calling header

#include "Vrtlsim_shim__pch.h"
#include "Vrtlsim_shim_VX_pe_switch__pi44.h"

VL_INLINE_OPT void Vrtlsim_shim_VX_pe_switch__pi44___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_switch__0(Vrtlsim_shim_VX_pe_switch__pi44* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_pe_switch__pi44___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_switch__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__unmasked_pri_reqs 
        = (2U & (((IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__unmasked_pri_reqs) 
                  | (IData)(vlSelfRef.__PVT__pe_rsp_valid)) 
                 << 1U));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_pe_switch__pi44___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_switch__1(Vrtlsim_shim_VX_pe_switch__pi44* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_pe_switch__pi44___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_switch__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__masked_pri_reqs 
        = (2U & (((IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__masked_pri_reqs) 
                  | (IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__masked_reqs)) 
                 << 1U));
}

extern const VlWide<10>/*319:0*/ Vrtlsim_shim__ConstPool__CONST_h3c6d891d_0;

VL_INLINE_OPT void Vrtlsim_shim_VX_pe_switch__pi44___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_switch__0(Vrtlsim_shim_VX_pe_switch__pi44* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_pe_switch__pi44___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_switch__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<10>/*319:0*/ __Vtemp_3;
    // Body
    vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot 
        = ((0U != (IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__masked_reqs))
            ? ((~ (IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__masked_pri_reqs)) 
               & (IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__masked_reqs))
            : ((~ (IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__unmasked_pri_reqs)) 
               & (IData)(vlSelfRef.__PVT__pe_rsp_valid)));
    if ((0x267U >= (0x3ffU & ((IData)(0x134U) * (1U 
                                                 & ((IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                    >> 1U)))))) {
        __Vtemp_3[0U] = (((0U == (0x1fU & ((IData)(0x134U) 
                                           * (1U & 
                                              ((IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                               >> 1U)))))
                           ? 0U : (vlSelfRef.__PVT__pe_rsp_data[
                                   ((IData)(1U) + (0x1fU 
                                                   & (((IData)(0x134U) 
                                                       * 
                                                       (1U 
                                                        & ((IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                           >> 1U))) 
                                                      >> 5U)))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x134U) 
                                                   * 
                                                   (1U 
                                                    & ((IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                       >> 1U))))))) 
                         | (vlSelfRef.__PVT__pe_rsp_data[
                            (0x1fU & (((IData)(0x134U) 
                                       * (1U & ((IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                >> 1U))) 
                                      >> 5U))] >> (0x1fU 
                                                   & ((IData)(0x134U) 
                                                      * 
                                                      (1U 
                                                       & ((IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                          >> 1U))))));
        __Vtemp_3[1U] = (((0U == (0x1fU & ((IData)(0x134U) 
                                           * (1U & 
                                              ((IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                               >> 1U)))))
                           ? 0U : (vlSelfRef.__PVT__pe_rsp_data[
                                   ((IData)(2U) + (0x1fU 
                                                   & (((IData)(0x134U) 
                                                       * 
                                                       (1U 
                                                        & ((IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                           >> 1U))) 
                                                      >> 5U)))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x134U) 
                                                   * 
                                                   (1U 
                                                    & ((IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                       >> 1U))))))) 
                         | (vlSelfRef.__PVT__pe_rsp_data[
                            ((IData)(1U) + (0x1fU & 
                                            (((IData)(0x134U) 
                                              * (1U 
                                                 & ((IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                    >> 1U))) 
                                             >> 5U)))] 
                            >> (0x1fU & ((IData)(0x134U) 
                                         * (1U & ((IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                  >> 1U))))));
        __Vtemp_3[2U] = (((0U == (0x1fU & ((IData)(0x134U) 
                                           * (1U & 
                                              ((IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                               >> 1U)))))
                           ? 0U : (vlSelfRef.__PVT__pe_rsp_data[
                                   ((IData)(3U) + (0x1fU 
                                                   & (((IData)(0x134U) 
                                                       * 
                                                       (1U 
                                                        & ((IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                           >> 1U))) 
                                                      >> 5U)))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x134U) 
                                                   * 
                                                   (1U 
                                                    & ((IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                       >> 1U))))))) 
                         | (vlSelfRef.__PVT__pe_rsp_data[
                            ((IData)(2U) + (0x1fU & 
                                            (((IData)(0x134U) 
                                              * (1U 
                                                 & ((IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                    >> 1U))) 
                                             >> 5U)))] 
                            >> (0x1fU & ((IData)(0x134U) 
                                         * (1U & ((IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                  >> 1U))))));
        __Vtemp_3[3U] = (((0U == (0x1fU & ((IData)(0x134U) 
                                           * (1U & 
                                              ((IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                               >> 1U)))))
                           ? 0U : (vlSelfRef.__PVT__pe_rsp_data[
                                   ((IData)(4U) + (0x1fU 
                                                   & (((IData)(0x134U) 
                                                       * 
                                                       (1U 
                                                        & ((IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                           >> 1U))) 
                                                      >> 5U)))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x134U) 
                                                   * 
                                                   (1U 
                                                    & ((IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                       >> 1U))))))) 
                         | (vlSelfRef.__PVT__pe_rsp_data[
                            ((IData)(3U) + (0x1fU & 
                                            (((IData)(0x134U) 
                                              * (1U 
                                                 & ((IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                    >> 1U))) 
                                             >> 5U)))] 
                            >> (0x1fU & ((IData)(0x134U) 
                                         * (1U & ((IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                  >> 1U))))));
        __Vtemp_3[4U] = (((0U == (0x1fU & ((IData)(0x134U) 
                                           * (1U & 
                                              ((IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                               >> 1U)))))
                           ? 0U : (vlSelfRef.__PVT__pe_rsp_data[
                                   ((IData)(5U) + (0x1fU 
                                                   & (((IData)(0x134U) 
                                                       * 
                                                       (1U 
                                                        & ((IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                           >> 1U))) 
                                                      >> 5U)))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x134U) 
                                                   * 
                                                   (1U 
                                                    & ((IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                       >> 1U))))))) 
                         | (vlSelfRef.__PVT__pe_rsp_data[
                            ((IData)(4U) + (0x1fU & 
                                            (((IData)(0x134U) 
                                              * (1U 
                                                 & ((IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                    >> 1U))) 
                                             >> 5U)))] 
                            >> (0x1fU & ((IData)(0x134U) 
                                         * (1U & ((IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                  >> 1U))))));
        __Vtemp_3[5U] = (((0U == (0x1fU & ((IData)(0x134U) 
                                           * (1U & 
                                              ((IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                               >> 1U)))))
                           ? 0U : (vlSelfRef.__PVT__pe_rsp_data[
                                   ((IData)(6U) + (0x1fU 
                                                   & (((IData)(0x134U) 
                                                       * 
                                                       (1U 
                                                        & ((IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                           >> 1U))) 
                                                      >> 5U)))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x134U) 
                                                   * 
                                                   (1U 
                                                    & ((IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                       >> 1U))))))) 
                         | (vlSelfRef.__PVT__pe_rsp_data[
                            ((IData)(5U) + (0x1fU & 
                                            (((IData)(0x134U) 
                                              * (1U 
                                                 & ((IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                    >> 1U))) 
                                             >> 5U)))] 
                            >> (0x1fU & ((IData)(0x134U) 
                                         * (1U & ((IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                  >> 1U))))));
        __Vtemp_3[6U] = (((0U == (0x1fU & ((IData)(0x134U) 
                                           * (1U & 
                                              ((IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                               >> 1U)))))
                           ? 0U : (vlSelfRef.__PVT__pe_rsp_data[
                                   ((IData)(7U) + (0x1fU 
                                                   & (((IData)(0x134U) 
                                                       * 
                                                       (1U 
                                                        & ((IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                           >> 1U))) 
                                                      >> 5U)))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x134U) 
                                                   * 
                                                   (1U 
                                                    & ((IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                       >> 1U))))))) 
                         | (vlSelfRef.__PVT__pe_rsp_data[
                            ((IData)(6U) + (0x1fU & 
                                            (((IData)(0x134U) 
                                              * (1U 
                                                 & ((IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                    >> 1U))) 
                                             >> 5U)))] 
                            >> (0x1fU & ((IData)(0x134U) 
                                         * (1U & ((IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                  >> 1U))))));
        __Vtemp_3[7U] = (((0U == (0x1fU & ((IData)(0x134U) 
                                           * (1U & 
                                              ((IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                               >> 1U)))))
                           ? 0U : (vlSelfRef.__PVT__pe_rsp_data[
                                   ((IData)(8U) + (0x1fU 
                                                   & (((IData)(0x134U) 
                                                       * 
                                                       (1U 
                                                        & ((IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                           >> 1U))) 
                                                      >> 5U)))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x134U) 
                                                   * 
                                                   (1U 
                                                    & ((IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                       >> 1U))))))) 
                         | (vlSelfRef.__PVT__pe_rsp_data[
                            ((IData)(7U) + (0x1fU & 
                                            (((IData)(0x134U) 
                                              * (1U 
                                                 & ((IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                    >> 1U))) 
                                             >> 5U)))] 
                            >> (0x1fU & ((IData)(0x134U) 
                                         * (1U & ((IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                  >> 1U))))));
        __Vtemp_3[8U] = (((0U == (0x1fU & ((IData)(0x134U) 
                                           * (1U & 
                                              ((IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                               >> 1U)))))
                           ? 0U : (vlSelfRef.__PVT__pe_rsp_data[
                                   ((IData)(9U) + (0x1fU 
                                                   & (((IData)(0x134U) 
                                                       * 
                                                       (1U 
                                                        & ((IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                           >> 1U))) 
                                                      >> 5U)))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x134U) 
                                                   * 
                                                   (1U 
                                                    & ((IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                       >> 1U))))))) 
                         | (vlSelfRef.__PVT__pe_rsp_data[
                            ((IData)(8U) + (0x1fU & 
                                            (((IData)(0x134U) 
                                              * (1U 
                                                 & ((IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                    >> 1U))) 
                                             >> 5U)))] 
                            >> (0x1fU & ((IData)(0x134U) 
                                         * (1U & ((IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                  >> 1U))))));
        __Vtemp_3[9U] = (((0U == (0x1fU & ((IData)(0x134U) 
                                           * (1U & 
                                              ((IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                               >> 1U)))))
                           ? 0U : (vlSelfRef.__PVT__pe_rsp_data[
                                   ((IData)(0xaU) + 
                                    (0x1fU & (((IData)(0x134U) 
                                               * (1U 
                                                  & ((IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                     >> 1U))) 
                                              >> 5U)))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x134U) 
                                                   * 
                                                   (1U 
                                                    & ((IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                       >> 1U))))))) 
                         | (vlSelfRef.__PVT__pe_rsp_data[
                            ((IData)(9U) + (0x1fU & 
                                            (((IData)(0x134U) 
                                              * (1U 
                                                 & ((IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                    >> 1U))) 
                                             >> 5U)))] 
                            >> (0x1fU & ((IData)(0x134U) 
                                         * (1U & ((IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                  >> 1U))))));
    } else {
        __Vtemp_3[0U] = vlSelfRef.rsp_arb__DOT____Vxrand_h62f1de2d__0[0U];
        __Vtemp_3[1U] = vlSelfRef.rsp_arb__DOT____Vxrand_h62f1de2d__0[1U];
        __Vtemp_3[2U] = vlSelfRef.rsp_arb__DOT____Vxrand_h62f1de2d__0[2U];
        __Vtemp_3[3U] = vlSelfRef.rsp_arb__DOT____Vxrand_h62f1de2d__0[3U];
        __Vtemp_3[4U] = vlSelfRef.rsp_arb__DOT____Vxrand_h62f1de2d__0[4U];
        __Vtemp_3[5U] = vlSelfRef.rsp_arb__DOT____Vxrand_h62f1de2d__0[5U];
        __Vtemp_3[6U] = vlSelfRef.rsp_arb__DOT____Vxrand_h62f1de2d__0[6U];
        __Vtemp_3[7U] = vlSelfRef.rsp_arb__DOT____Vxrand_h62f1de2d__0[7U];
        __Vtemp_3[8U] = vlSelfRef.rsp_arb__DOT____Vxrand_h62f1de2d__0[8U];
        __Vtemp_3[9U] = vlSelfRef.rsp_arb__DOT____Vxrand_h62f1de2d__0[9U];
    }
    vlSelfRef.rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[0U] 
        = (Vrtlsim_shim__ConstPool__CONST_h3c6d891d_0[0U] 
           & __Vtemp_3[0U]);
    vlSelfRef.rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[1U] 
        = (Vrtlsim_shim__ConstPool__CONST_h3c6d891d_0[1U] 
           & __Vtemp_3[1U]);
    vlSelfRef.rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[2U] 
        = (Vrtlsim_shim__ConstPool__CONST_h3c6d891d_0[2U] 
           & __Vtemp_3[2U]);
    vlSelfRef.rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[3U] 
        = (Vrtlsim_shim__ConstPool__CONST_h3c6d891d_0[3U] 
           & __Vtemp_3[3U]);
    vlSelfRef.rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[4U] 
        = (Vrtlsim_shim__ConstPool__CONST_h3c6d891d_0[4U] 
           & __Vtemp_3[4U]);
    vlSelfRef.rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[5U] 
        = (Vrtlsim_shim__ConstPool__CONST_h3c6d891d_0[5U] 
           & __Vtemp_3[5U]);
    vlSelfRef.rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[6U] 
        = (Vrtlsim_shim__ConstPool__CONST_h3c6d891d_0[6U] 
           & __Vtemp_3[6U]);
    vlSelfRef.rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[7U] 
        = (Vrtlsim_shim__ConstPool__CONST_h3c6d891d_0[7U] 
           & __Vtemp_3[7U]);
    vlSelfRef.rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[8U] 
        = (Vrtlsim_shim__ConstPool__CONST_h3c6d891d_0[8U] 
           & __Vtemp_3[8U]);
    vlSelfRef.rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[9U] 
        = ((0x100000U & ((IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                         << 0x13U)) | (Vrtlsim_shim__ConstPool__CONST_h3c6d891d_0[9U] 
                                       & __Vtemp_3[9U]));
    vlSelfRef.__PVT__pe_rsp_ready = ((- (IData)((IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))) 
                                     & (IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot));
}
