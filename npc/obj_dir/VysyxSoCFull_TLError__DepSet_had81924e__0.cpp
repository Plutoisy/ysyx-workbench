// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"
#include "VysyxSoCFull_TLError.h"

VL_INLINE_OPT void VysyxSoCFull_TLError___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__1(VysyxSoCFull_TLError* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_TLError___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__nodeIn_d_valid = ((IData)(vlSelfRef.__VdfgRegularize_h8c92653e_0_3) 
                                       & (IData)(vlSelfRef.__PVT__winner_1));
    if (vlSelfRef.__PVT__muxState_1) {
        vlSelfRef.__PVT___nodeIn_d_bits_T_18 = (7U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__a_q__DOT__ram 
                                                           >> 0x36U)));
        vlSelfRef.__PVT___nodeIn_d_bits_T_24 = vlSelfRef.__PVT__da_bits_opcode;
    } else {
        vlSelfRef.__PVT___nodeIn_d_bits_T_18 = 0U;
        vlSelfRef.__PVT___nodeIn_d_bits_T_24 = 0U;
    }
}
