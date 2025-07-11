// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"
#include "VysyxSoCFull_TLXbar_i1_o2_a32d32s4k6z3u.h"
#include "VysyxSoCFull__Syms.h"

VL_ATTR_COLD void VysyxSoCFull_TLXbar_i1_o2_a32d32s4k6z3u___stl_comb__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__0(VysyxSoCFull_TLXbar_i1_o2_a32d32s4k6z3u* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_TLXbar_i1_o2_a32d32s4k6z3u___stl_comb__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*1:0*/ __PVT___readys_filter_T_1;
    __PVT___readys_filter_T_1 = 0;
    // Body
    vlSelfRef.__PVT__readys_valid = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr.__PVT__nodeIn_d_valid) 
                                      << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__nodeIn_d_valid));
    __PVT___readys_filter_T_1 = ((~ (IData)(vlSelfRef.__PVT__readys_mask)) 
                                 & (IData)(vlSelfRef.__PVT__readys_valid));
    vlSelfRef.__PVT__readys_unready = (((4U & ((IData)(__PVT___readys_filter_T_1) 
                                               << 1U)) 
                                        | (((2U & ((IData)(__PVT___readys_filter_T_1) 
                                                   << 1U)) 
                                            | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr.__PVT__nodeIn_d_valid)) 
                                           | (IData)(__PVT___readys_filter_T_1))) 
                                       | ((IData)(vlSelfRef.__PVT__readys_mask) 
                                          << 2U));
    vlSelfRef.__PVT__readys_readys = (3U & (~ (((IData)(vlSelfRef.__PVT__readys_unready) 
                                                >> 2U) 
                                               & (IData)(vlSelfRef.__PVT__readys_unready))));
    vlSelfRef.__PVT__winner_1 = (((IData)(vlSelfRef.__PVT__readys_readys) 
                                  >> 1U) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr.__PVT__nodeIn_d_valid));
    vlSelfRef.__PVT__winner_0 = ((IData)(vlSelfRef.__PVT__readys_readys) 
                                 & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__nodeIn_d_valid));
    if ((0U == (IData)(vlSelfRef.__PVT__beatsLeft))) {
        vlSelfRef.__PVT__in_0_d_valid = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__nodeIn_d_valid) 
                                         | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr.__PVT__nodeIn_d_valid));
        vlSelfRef.__PVT__muxState_1 = vlSelfRef.__PVT__winner_1;
        vlSelfRef.__PVT__muxState_0 = vlSelfRef.__PVT__winner_0;
    } else {
        vlSelfRef.__PVT__in_0_d_valid = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__nodeIn_d_valid) 
                                          & (IData)(vlSelfRef.__PVT__state_0)) 
                                         | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr.__PVT__nodeIn_d_valid) 
                                            & (IData)(vlSelfRef.__PVT__state_1)));
        vlSelfRef.__PVT__muxState_1 = vlSelfRef.__PVT__state_1;
        vlSelfRef.__PVT__muxState_0 = vlSelfRef.__PVT__state_0;
    }
    if (vlSelfRef.__PVT__muxState_0) {
        vlSelfRef.__PVT___in_0_d_bits_T_22 = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__nodeIn_d_bits_param;
        vlSelfRef.auto_anon_in_d_bits_data = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__bypass)
                                               ? 0U
                                               : vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg);
    } else {
        vlSelfRef.__PVT___in_0_d_bits_T_22 = 0U;
        vlSelfRef.auto_anon_in_d_bits_data = 0U;
    }
    vlSelfRef.__PVT___in_0_d_bits_T_13 = (((IData)(vlSelfRef.__PVT__muxState_0)
                                            ? (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__nodeIn_d_bits_sink)
                                            : 0U) | 
                                          ((IData)(vlSelfRef.__PVT__muxState_1) 
                                           << 5U));
}
