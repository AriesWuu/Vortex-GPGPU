// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrtlsim_shim.h for the primary calling header

#include "Vrtlsim_shim__pch.h"
#include "Vrtlsim_shim_VX_stream_arb__N4_D69_Az207_O3.h"
#include "Vrtlsim_shim__Syms.h"

VL_ATTR_COLD void Vrtlsim_shim_VX_stream_arb__N4_D69_Az207_O3___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__out_arb__0(Vrtlsim_shim_VX_stream_arb__N4_D69_Az207_O3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N4_D69_Az207_O3___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__out_arb__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[3U] 
        = (1U & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_valid_in));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[4U] 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_valid_in) 
                 >> 1U));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[5U] 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_valid_in) 
                 >> 2U));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[6U] 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_valid_in) 
                 >> 3U));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__is_hit 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_valid_in) 
                 >> (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_index_r)));
}

VL_ATTR_COLD void Vrtlsim_shim_VX_stream_arb__N4_D69_Az207_O3___stl_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__out_arb__1(Vrtlsim_shim_VX_stream_arb__N4_D69_Az207_O3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N4_D69_Az207_O3___stl_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__out_arb__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index 
        = ((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__is_hit)
            ? (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_index_r)
            : vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0U]);
    if ((0x1a3U >= (0x1ffU & ((IData)(0x69U) * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))) {
        vlSelfRef.__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[0U] 
            = (((0U == (0x1fU & ((IData)(0x69U) * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))
                 ? 0U : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_data_in[
                         ((IData)(1U) + (0xfU & (((IData)(0x69U) 
                                                  * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
                                                 >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x69U) 
                                                  * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))))) 
               | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_data_in[
                  (0xfU & (((IData)(0x69U) * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
                           >> 5U))] >> (0x1fU & ((IData)(0x69U) 
                                                 * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))));
        vlSelfRef.__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[1U] 
            = (((0U == (0x1fU & ((IData)(0x69U) * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))
                 ? 0U : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_data_in[
                         ((IData)(2U) + (0xfU & (((IData)(0x69U) 
                                                  * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
                                                 >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x69U) 
                                                  * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))))) 
               | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_data_in[
                  ((IData)(1U) + (0xfU & (((IData)(0x69U) 
                                           * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
                                          >> 5U)))] 
                  >> (0x1fU & ((IData)(0x69U) * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))));
        vlSelfRef.__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[2U] 
            = (((0U == (0x1fU & ((IData)(0x69U) * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))
                 ? 0U : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_data_in[
                         ((IData)(3U) + (0xfU & (((IData)(0x69U) 
                                                  * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
                                                 >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x69U) 
                                                  * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))))) 
               | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_data_in[
                  ((IData)(2U) + (0xfU & (((IData)(0x69U) 
                                           * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
                                          >> 5U)))] 
                  >> (0x1fU & ((IData)(0x69U) * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))));
    } else {
        vlSelfRef.__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[0U] 
            = vlSelfRef.__Vxrand_hd6bb386b__0[0U];
        vlSelfRef.__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[1U] 
            = vlSelfRef.__Vxrand_hd6bb386b__0[1U];
        vlSelfRef.__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[2U] 
            = vlSelfRef.__Vxrand_hd6bb386b__0[2U];
    }
    vlSelfRef.__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[3U] 
        = (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index) 
            << 9U) | (0x1ffU & ((0x1a3U >= (0x1ffU 
                                            & ((IData)(0x69U) 
                                               * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))
                                 ? (((0U == (0x1fU 
                                             & ((IData)(0x69U) 
                                                * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))
                                      ? 0U : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_data_in[
                                              ((IData)(4U) 
                                               + (0xfU 
                                                  & (((IData)(0x69U) 
                                                      * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x69U) 
                                                      * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))))) 
                                    | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_data_in[
                                       ((IData)(3U) 
                                        + (0xfU & (
                                                   ((IData)(0x69U) 
                                                    * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
                                                   >> 5U)))] 
                                       >> (0x1fU & 
                                           ((IData)(0x69U) 
                                            * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))))
                                 : vlSelfRef.__Vxrand_hd6bb386b__0[3U])));
}

VL_ATTR_COLD void Vrtlsim_shim_VX_stream_arb__N4_D69_Az207_O3___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__out_arb__0(Vrtlsim_shim_VX_stream_arb__N4_D69_Az207_O3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N4_D69_Az207_O3___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__out_arb__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[3U] 
        = (1U & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_valid_in));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[4U] 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_valid_in) 
                 >> 1U));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[5U] 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_valid_in) 
                 >> 2U));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[6U] 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_valid_in) 
                 >> 3U));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__is_hit 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_valid_in) 
                 >> (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_index_r)));
}

VL_ATTR_COLD void Vrtlsim_shim_VX_stream_arb__N4_D69_Az207_O3___stl_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__out_arb__1(Vrtlsim_shim_VX_stream_arb__N4_D69_Az207_O3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N4_D69_Az207_O3___stl_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__out_arb__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index 
        = ((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__is_hit)
            ? (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_index_r)
            : vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0U]);
    if ((0x1a3U >= (0x1ffU & ((IData)(0x69U) * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))) {
        vlSelfRef.__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[0U] 
            = (((0U == (0x1fU & ((IData)(0x69U) * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))
                 ? 0U : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_data_in[
                         ((IData)(1U) + (0xfU & (((IData)(0x69U) 
                                                  * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
                                                 >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x69U) 
                                                  * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))))) 
               | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_data_in[
                  (0xfU & (((IData)(0x69U) * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
                           >> 5U))] >> (0x1fU & ((IData)(0x69U) 
                                                 * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))));
        vlSelfRef.__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[1U] 
            = (((0U == (0x1fU & ((IData)(0x69U) * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))
                 ? 0U : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_data_in[
                         ((IData)(2U) + (0xfU & (((IData)(0x69U) 
                                                  * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
                                                 >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x69U) 
                                                  * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))))) 
               | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_data_in[
                  ((IData)(1U) + (0xfU & (((IData)(0x69U) 
                                           * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
                                          >> 5U)))] 
                  >> (0x1fU & ((IData)(0x69U) * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))));
        vlSelfRef.__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[2U] 
            = (((0U == (0x1fU & ((IData)(0x69U) * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))
                 ? 0U : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_data_in[
                         ((IData)(3U) + (0xfU & (((IData)(0x69U) 
                                                  * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
                                                 >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x69U) 
                                                  * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))))) 
               | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_data_in[
                  ((IData)(2U) + (0xfU & (((IData)(0x69U) 
                                           * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
                                          >> 5U)))] 
                  >> (0x1fU & ((IData)(0x69U) * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))));
    } else {
        vlSelfRef.__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[0U] 
            = vlSelfRef.__Vxrand_hd6bb386b__0[0U];
        vlSelfRef.__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[1U] 
            = vlSelfRef.__Vxrand_hd6bb386b__0[1U];
        vlSelfRef.__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[2U] 
            = vlSelfRef.__Vxrand_hd6bb386b__0[2U];
    }
    vlSelfRef.__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[3U] 
        = (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index) 
            << 9U) | (0x1ffU & ((0x1a3U >= (0x1ffU 
                                            & ((IData)(0x69U) 
                                               * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))
                                 ? (((0U == (0x1fU 
                                             & ((IData)(0x69U) 
                                                * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))
                                      ? 0U : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_data_in[
                                              ((IData)(4U) 
                                               + (0xfU 
                                                  & (((IData)(0x69U) 
                                                      * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x69U) 
                                                      * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))))) 
                                    | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_data_in[
                                       ((IData)(3U) 
                                        + (0xfU & (
                                                   ((IData)(0x69U) 
                                                    * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
                                                   >> 5U)))] 
                                       >> (0x1fU & 
                                           ((IData)(0x69U) 
                                            * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))))
                                 : vlSelfRef.__Vxrand_hd6bb386b__0[3U])));
}

VL_ATTR_COLD void Vrtlsim_shim_VX_stream_arb__N4_D69_Az207_O3___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__out_arb__0(Vrtlsim_shim_VX_stream_arb__N4_D69_Az207_O3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N4_D69_Az207_O3___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__out_arb__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[3U] 
        = (1U & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_valid_in));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[4U] 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_valid_in) 
                 >> 1U));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[5U] 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_valid_in) 
                 >> 2U));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[6U] 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_valid_in) 
                 >> 3U));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__is_hit 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_valid_in) 
                 >> (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_index_r)));
}

VL_ATTR_COLD void Vrtlsim_shim_VX_stream_arb__N4_D69_Az207_O3___stl_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__out_arb__1(Vrtlsim_shim_VX_stream_arb__N4_D69_Az207_O3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N4_D69_Az207_O3___stl_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__out_arb__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index 
        = ((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__is_hit)
            ? (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_index_r)
            : vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0U]);
    if ((0x1a3U >= (0x1ffU & ((IData)(0x69U) * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))) {
        vlSelfRef.__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[0U] 
            = (((0U == (0x1fU & ((IData)(0x69U) * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))
                 ? 0U : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_data_in[
                         ((IData)(1U) + (0xfU & (((IData)(0x69U) 
                                                  * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
                                                 >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x69U) 
                                                  * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))))) 
               | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_data_in[
                  (0xfU & (((IData)(0x69U) * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
                           >> 5U))] >> (0x1fU & ((IData)(0x69U) 
                                                 * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))));
        vlSelfRef.__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[1U] 
            = (((0U == (0x1fU & ((IData)(0x69U) * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))
                 ? 0U : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_data_in[
                         ((IData)(2U) + (0xfU & (((IData)(0x69U) 
                                                  * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
                                                 >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x69U) 
                                                  * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))))) 
               | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_data_in[
                  ((IData)(1U) + (0xfU & (((IData)(0x69U) 
                                           * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
                                          >> 5U)))] 
                  >> (0x1fU & ((IData)(0x69U) * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))));
        vlSelfRef.__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[2U] 
            = (((0U == (0x1fU & ((IData)(0x69U) * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))
                 ? 0U : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_data_in[
                         ((IData)(3U) + (0xfU & (((IData)(0x69U) 
                                                  * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
                                                 >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x69U) 
                                                  * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))))) 
               | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_data_in[
                  ((IData)(2U) + (0xfU & (((IData)(0x69U) 
                                           * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
                                          >> 5U)))] 
                  >> (0x1fU & ((IData)(0x69U) * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))));
    } else {
        vlSelfRef.__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[0U] 
            = vlSelfRef.__Vxrand_hd6bb386b__0[0U];
        vlSelfRef.__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[1U] 
            = vlSelfRef.__Vxrand_hd6bb386b__0[1U];
        vlSelfRef.__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[2U] 
            = vlSelfRef.__Vxrand_hd6bb386b__0[2U];
    }
    vlSelfRef.__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[3U] 
        = (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index) 
            << 9U) | (0x1ffU & ((0x1a3U >= (0x1ffU 
                                            & ((IData)(0x69U) 
                                               * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))
                                 ? (((0U == (0x1fU 
                                             & ((IData)(0x69U) 
                                                * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))
                                      ? 0U : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_data_in[
                                              ((IData)(4U) 
                                               + (0xfU 
                                                  & (((IData)(0x69U) 
                                                      * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x69U) 
                                                      * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))))) 
                                    | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_data_in[
                                       ((IData)(3U) 
                                        + (0xfU & (
                                                   ((IData)(0x69U) 
                                                    * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
                                                   >> 5U)))] 
                                       >> (0x1fU & 
                                           ((IData)(0x69U) 
                                            * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))))
                                 : vlSelfRef.__Vxrand_hd6bb386b__0[3U])));
}

VL_ATTR_COLD void Vrtlsim_shim_VX_stream_arb__N4_D69_Az207_O3___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__out_arb__0(Vrtlsim_shim_VX_stream_arb__N4_D69_Az207_O3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N4_D69_Az207_O3___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__out_arb__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[3U] 
        = (1U & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_valid_in));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[4U] 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_valid_in) 
                 >> 1U));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[5U] 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_valid_in) 
                 >> 2U));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[6U] 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_valid_in) 
                 >> 3U));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__is_hit 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_valid_in) 
                 >> (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_index_r)));
}

VL_ATTR_COLD void Vrtlsim_shim_VX_stream_arb__N4_D69_Az207_O3___stl_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__out_arb__1(Vrtlsim_shim_VX_stream_arb__N4_D69_Az207_O3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N4_D69_Az207_O3___stl_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__out_arb__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index 
        = ((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__is_hit)
            ? (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_index_r)
            : vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
           [0U]);
    if ((0x1a3U >= (0x1ffU & ((IData)(0x69U) * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))) {
        vlSelfRef.__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[0U] 
            = (((0U == (0x1fU & ((IData)(0x69U) * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))
                 ? 0U : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_data_in[
                         ((IData)(1U) + (0xfU & (((IData)(0x69U) 
                                                  * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
                                                 >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x69U) 
                                                  * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))))) 
               | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_data_in[
                  (0xfU & (((IData)(0x69U) * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
                           >> 5U))] >> (0x1fU & ((IData)(0x69U) 
                                                 * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))));
        vlSelfRef.__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[1U] 
            = (((0U == (0x1fU & ((IData)(0x69U) * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))
                 ? 0U : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_data_in[
                         ((IData)(2U) + (0xfU & (((IData)(0x69U) 
                                                  * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
                                                 >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x69U) 
                                                  * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))))) 
               | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_data_in[
                  ((IData)(1U) + (0xfU & (((IData)(0x69U) 
                                           * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
                                          >> 5U)))] 
                  >> (0x1fU & ((IData)(0x69U) * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))));
        vlSelfRef.__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[2U] 
            = (((0U == (0x1fU & ((IData)(0x69U) * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))
                 ? 0U : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_data_in[
                         ((IData)(3U) + (0xfU & (((IData)(0x69U) 
                                                  * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
                                                 >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x69U) 
                                                  * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))))) 
               | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_data_in[
                  ((IData)(2U) + (0xfU & (((IData)(0x69U) 
                                           * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
                                          >> 5U)))] 
                  >> (0x1fU & ((IData)(0x69U) * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))));
    } else {
        vlSelfRef.__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[0U] 
            = vlSelfRef.__Vxrand_hd6bb386b__0[0U];
        vlSelfRef.__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[1U] 
            = vlSelfRef.__Vxrand_hd6bb386b__0[1U];
        vlSelfRef.__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[2U] 
            = vlSelfRef.__Vxrand_hd6bb386b__0[2U];
    }
    vlSelfRef.__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[3U] 
        = (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index) 
            << 9U) | (0x1ffU & ((0x1a3U >= (0x1ffU 
                                            & ((IData)(0x69U) 
                                               * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))
                                 ? (((0U == (0x1fU 
                                             & ((IData)(0x69U) 
                                                * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))
                                      ? 0U : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_data_in[
                                              ((IData)(4U) 
                                               + (0xfU 
                                                  & (((IData)(0x69U) 
                                                      * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x69U) 
                                                      * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))))) 
                                    | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__arb_data_in[
                                       ((IData)(3U) 
                                        + (0xfU & (
                                                   ((IData)(0x69U) 
                                                    * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
                                                   >> 5U)))] 
                                       >> (0x1fU & 
                                           ((IData)(0x69U) 
                                            * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))))
                                 : vlSelfRef.__Vxrand_hd6bb386b__0[3U])));
}
