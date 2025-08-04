// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"
#include "VysyxSoCFull_AsyncQueueSink_UInt32.h"

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSink_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__4(VysyxSoCFull_AsyncQueueSink_UInt32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_AsyncQueueSink_UInt32___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__4\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.__Vcellinp__sink_valid_0__reset))) 
           && (IData)(vlSelfRef.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.__Vcellinp__sink_valid_0__reset))) 
           && (IData)(vlSelfRef.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelfRef.__Vcellinp__sink_valid_0__reset))) 
           && (IData)(vlSelfRef.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelfRef.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelfRef.__Vcellinp__sink_valid_0__reset))) 
           && (IData)(vlSelfRef.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelfRef.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelfRef.__Vcellinp__sink_valid_0__reset))) 
           && (IData)(vlSelfRef.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelfRef.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (~ (IData)(vlSelfRef.__Vcellinp__sink_valid_0__reset)));
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSink_UInt32___nba_comb__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__1(VysyxSoCFull_AsyncQueueSink_UInt32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_AsyncQueueSink_UInt32___nba_comb__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ridx = (((IData)(vlSelfRef.__VdfgRegularize_h865e5b43_1_1) 
                              << 3U) | (IData)(vlSelfRef.__PVT___index_T));
    vlSelfRef.__PVT__valid = ((IData)(vlSelfRef.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                              & ((IData)(vlSelfRef.__PVT__ridx) 
                                 != ((((IData)(vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
                                       << 3U) | ((IData)(vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0) 
                                                 << 2U)) 
                                     | (((IData)(vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                         << 1U) | (IData)(vlSelfRef.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0)))));
}
