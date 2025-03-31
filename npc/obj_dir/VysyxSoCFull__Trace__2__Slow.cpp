// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VysyxSoCFull__Syms.h"


VL_ATTR_COLD void VysyxSoCFull___024root__trace_full_sub_1(VysyxSoCFull___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_full_sub_1\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<4>/*127:0*/ __Vtemp_h86dd19ff__0;
    VlWide<8>/*255:0*/ __Vtemp_h55a83eeb__0;
    VlWide<4>/*127:0*/ __Vtemp_h3d9295b4__0;
    VlWide<8>/*255:0*/ __Vtemp_h5e09b441__0;
    VlWide<8>/*255:0*/ __Vtemp_h4c5f8146__0;
    VlWide<5>/*159:0*/ __Vtemp_h180e0517__0;
    // Body
    bufp->fullIData(oldp+8425,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__queue_arw_deq_q__DOT__full)
                                 ? (IData)((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__queue_arw_deq_q__DOT__ram 
                                            >> 0x19U))
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___atomics_auto_out_a_bits_address)),32);
    bufp->fullCData(oldp+8426,((0xffU & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__queue_arw_deq_q__DOT__full)
                                          ? (IData)(
                                                    (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__queue_arw_deq_q__DOT__ram 
                                                     >> 0x11U))
                                          : (~ (0x7fffU 
                                                & (((IData)(0x3ffU) 
                                                    << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___atomics_auto_out_a_bits_size)) 
                                                   >> 2U)))))),8);
    bufp->fullCData(oldp+8427,((7U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__queue_arw_deq_q__DOT__full)
                                       ? (IData)((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__queue_arw_deq_q__DOT__ram 
                                                  >> 0xeU))
                                       : ((0U != (3U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___atomics_auto_out_a_bits_size) 
                                                     >> 1U)))
                                           ? 2U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___atomics_auto_out_a_bits_size))))),3);
    bufp->fullBit(oldp+8428,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__nodeOut_wdeq_q__DOT__full) 
                              | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__Vcellinp__nodeOut_wdeq_q__io_enq_valid))));
    bufp->fullIData(oldp+8429,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__nodeOut_wdeq_q__DOT__full)
                                 ? (IData)((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__nodeOut_wdeq_q__DOT__ram 
                                            >> 5U))
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___atomics_auto_out_a_bits_data)),32);
    bufp->fullCData(oldp+8430,((0xfU & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__nodeOut_wdeq_q__DOT__full)
                                         ? (IData)(
                                                   (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__nodeOut_wdeq_q__DOT__ram 
                                                    >> 1U))
                                         : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___atomics_auto_out_a_bits_mask)))),4);
    bufp->fullBit(oldp+8431,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__nodeOut_wdeq_q__DOT__full)
                                     ? (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__nodeOut_wdeq_q__DOT__ram)
                                     : (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__a_last)))));
    bufp->fullBit(oldp+8432,((((~ ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__queue_arw_deq_q__DOT__full)
                                    ? (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__queue_arw_deq_q__DOT__ram)
                                    : (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___atomics_auto_out_a_bits_opcode) 
                                          >> 2U)))) 
                               & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__queue_arw_deq_q__DOT__full) 
                                  | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__out_arw_valid))) 
                              & (((0x8000U & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__Queue1_BundleMap_8__DOT__full)) 
                                              << 0xfU)) 
                                  | ((0x4000U & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__Queue1_BundleMap_7__DOT__full)) 
                                                 << 0xeU)) 
                                     | ((0x2000U & 
                                         ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__Queue1_BundleMap_6__DOT__full)) 
                                          << 0xdU)) 
                                        | ((0x1000U 
                                            & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__Queue1_BundleMap_5__DOT__full)) 
                                               << 0xcU)) 
                                           | ((0x800U 
                                               & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__Queue1_BundleMap_4__DOT__full)) 
                                                  << 0xbU)) 
                                              | ((0x400U 
                                                  & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__Queue1_BundleMap_3__DOT__full)) 
                                                     << 0xaU)) 
                                                 | ((0x200U 
                                                     & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__Queue1_BundleMap_2__DOT__full)) 
                                                        << 9U)) 
                                                    | ((0x100U 
                                                        & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__Queue1_BundleMap_1__DOT__full)) 
                                                           << 8U)) 
                                                       | ((0x80U 
                                                           & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__Queue1_BundleMap__DOT__full)) 
                                                              << 7U)) 
                                                          | ((0x40U 
                                                              & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__Queue17_BundleMap_6__DOT__full)) 
                                                                 << 6U)) 
                                                             | ((0x20U 
                                                                 & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__Queue17_BundleMap_5__DOT__full)) 
                                                                    << 5U)) 
                                                                | ((0x10U 
                                                                    & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__Queue17_BundleMap_4__DOT__full)) 
                                                                       << 4U)) 
                                                                   | ((8U 
                                                                       & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__Queue17_BundleMap_3__DOT__full)) 
                                                                          << 3U)) 
                                                                      | ((4U 
                                                                          & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__Queue17_BundleMap_2__DOT__full)) 
                                                                             << 2U)) 
                                                                         | ((2U 
                                                                             & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__Queue17_BundleMap_1__DOT__full)) 
                                                                                << 1U)) 
                                                                            | (1U 
                                                                               & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__Queue17_BundleMap__DOT__full)))))))))))))))))) 
                                 >> (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.auto_out_awid))))));
    bufp->fullBit(oldp+8433,((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__queue_arw_deq_q__DOT__full)
                                ? (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__queue_arw_deq_q__DOT__ram)
                                : (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___atomics_auto_out_a_bits_opcode) 
                                      >> 2U))) & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__queue_arw_deq_q__DOT__full) 
                                                  | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__out_arw_valid)))));
    bufp->fullBit(oldp+8434,(((~ ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__queue_arw_deq_q__DOT__full)
                                   ? (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__queue_arw_deq_q__DOT__ram)
                                   : (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___atomics_auto_out_a_bits_opcode) 
                                         >> 2U)))) 
                              & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__queue_arw_deq_q__DOT__full) 
                                 | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__out_arw_valid)))));
    bufp->fullIData(oldp+8435,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__bypass)
                                 ? 0U : vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg)),32);
    __Vtemp_h86dd19ff__0[0U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__header;
    __Vtemp_h86dd19ff__0[1U] = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__full) 
                                & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__ram 
                                           >> 0x22U)));
    __Vtemp_h86dd19ff__0[2U] = (IData)((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__header)) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__full)
                                                            ? (IData)(
                                                                      (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__ram 
                                                                       >> 1U))
                                                            : vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___mbypass_auto_in_1_d_bits_data)))));
    __Vtemp_h86dd19ff__0[3U] = (IData)(((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__header)) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__full)
                                                             ? (IData)(
                                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__ram 
                                                                        >> 1U))
                                                             : vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___mbypass_auto_in_1_d_bits_data)))) 
                                        >> 0x20U));
    bufp->fullIData(oldp+8436,((((0U == (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__state) 
                                                  << 5U)))
                                  ? 0U : (__Vtemp_h86dd19ff__0[
                                          (((IData)(0x1fU) 
                                            + (0x7fU 
                                               & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__state) 
                                                  << 5U))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__state) 
                                                    << 5U))))) 
                                | (__Vtemp_h86dd19ff__0[
                                   (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__state))] 
                                   >> (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__state) 
                                                << 5U))))),32);
    bufp->fullSData(oldp+8437,((0xffffU & (((0U == 
                                             (0x10U 
                                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source) 
                                                 << 1U)))
                                             ? 0U : 
                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_1[
                                             (((IData)(0xfU) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source) 
                                                     << 1U))) 
                                              >> 5U)] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x10U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source) 
                                                     << 1U))))) 
                                           | (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_1[
                                              (3U & 
                                               ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source) 
                                                >> 4U))] 
                                              >> (0x10U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source) 
                                                     << 1U)))))),16);
    bufp->fullBit(oldp+8438,((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_domain)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT____VdfgTmp_h7298eac2__0))));
    bufp->fullSData(oldp+8439,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT___clr_T) 
                                 & ((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source)) 
                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__io_key_0)))
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_source)
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__Memory
                                [(7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source))])),16);
    bufp->fullBit(oldp+8440,((0x7fU & ((((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_domain)) 
                                        >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT____VdfgTmp_h7298eac2__0)))));
    bufp->fullSData(oldp+8441,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT___clr_T) 
                                 & ((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source)) 
                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__io_key_0)))
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_source)
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__data_ext__DOT__Memory
                                [(7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source))])),16);
    bufp->fullBit(oldp+8442,((0x3fU & ((((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_domain)) 
                                        >> 2U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT____VdfgTmp_h7298eac2__0)))));
    bufp->fullSData(oldp+8443,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT___clr_T) 
                                 & ((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source)) 
                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__io_key_0)))
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_source)
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__data_ext__DOT__Memory
                                [(7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source))])),16);
    bufp->fullBit(oldp+8444,((0x1fU & ((((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_domain)) 
                                        >> 3U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT____VdfgTmp_h7298eac2__0)))));
    bufp->fullSData(oldp+8445,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT___clr_T) 
                                 & ((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source)) 
                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__io_key_0)))
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_source)
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__data_ext__DOT__Memory
                                [(7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source))])),16);
    bufp->fullBit(oldp+8446,((0xfU & ((((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_domain)) 
                                       >> 4U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT____VdfgTmp_h7298eac2__0)))));
    bufp->fullSData(oldp+8447,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT___clr_T) 
                                 & ((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source)) 
                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__io_key_0)))
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_source)
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__data_ext__DOT__Memory
                                [(7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source))])),16);
    bufp->fullBit(oldp+8448,((7U & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_domain)) 
                                     >> 5U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT____VdfgTmp_h7298eac2__0)))));
    bufp->fullSData(oldp+8449,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT___clr_T) 
                                 & ((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source)) 
                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__io_key_0)))
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_source)
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__data_ext__DOT__Memory
                                [(7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source))])),16);
    bufp->fullBit(oldp+8450,((3U & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_domain)) 
                                     >> 6U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT____VdfgTmp_h7298eac2__0)))));
    bufp->fullSData(oldp+8451,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT___clr_T) 
                                 & ((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source)) 
                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__io_key_0)))
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_source)
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__data_ext__DOT__Memory
                                [(7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source))])),16);
    bufp->fullBit(oldp+8452,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT____VdfgTmp_h7298eac2__0) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_domain)) 
                                 >> 7U))));
    bufp->fullSData(oldp+8453,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT___clr_T) 
                                 & ((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source)) 
                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__io_key_0)))
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_source)
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__data_ext__DOT__Memory
                                [(7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source))])),16);
    bufp->fullBit(oldp+8454,((((0U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__count_6)) 
                               & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__write_6) 
                                  != (1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___atomics_auto_out_a_bits_opcode) 
                                               >> 2U))))) 
                              | (0x10U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__count_6)))));
    bufp->fullBit(oldp+8455,((((0U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__count_5)) 
                               & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__write_5) 
                                  != (1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___atomics_auto_out_a_bits_opcode) 
                                               >> 2U))))) 
                              | (0x10U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__count_5)))));
    bufp->fullBit(oldp+8456,((((0U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__count_3)) 
                               & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__write_3) 
                                  != (1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___atomics_auto_out_a_bits_opcode) 
                                               >> 2U))))) 
                              | (0x10U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__count_3)))));
    bufp->fullBit(oldp+8457,((((0U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__count_1)) 
                               & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__write_1) 
                                  != (1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___atomics_auto_out_a_bits_opcode) 
                                               >> 2U))))) 
                              | (0x10U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__count_1)))));
    bufp->fullBit(oldp+8458,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__queue_arw_deq_q__DOT__full) 
                              | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__out_arw_valid))));
    bufp->fullBit(oldp+8459,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__queue_arw_deq_q__DOT__full)
                                     ? (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__queue_arw_deq_q__DOT__ram)
                                     : (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___atomics_auto_out_a_bits_opcode) 
                                           >> 2U))))));
    __Vtemp_h55a83eeb__0[0U] = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__mem_0;
    __Vtemp_h55a83eeb__0[1U] = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__mem_1;
    __Vtemp_h55a83eeb__0[2U] = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__mem_2;
    __Vtemp_h55a83eeb__0[3U] = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__mem_3;
    __Vtemp_h55a83eeb__0[4U] = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__mem_4;
    __Vtemp_h55a83eeb__0[5U] = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__mem_5;
    __Vtemp_h55a83eeb__0[6U] = (IData)((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__mem_7)) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__mem_6))));
    __Vtemp_h55a83eeb__0[7U] = (IData)(((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__mem_7)) 
                                          << 0x20U) 
                                         | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__mem_6))) 
                                        >> 0x20U));
    bufp->fullIData(oldp+8460,((((0U == (0x1fU & (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT___index_T) 
                                                   << 5U) 
                                                  ^ 
                                                  ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__VdfgTmp_h4436d783__0) 
                                                   << 7U))))
                                  ? 0U : (__Vtemp_h55a83eeb__0[
                                          (((IData)(0x1fU) 
                                            + (0xffU 
                                               & (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT___index_T) 
                                                   << 5U) 
                                                  ^ 
                                                  ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__VdfgTmp_h4436d783__0) 
                                                   << 7U)))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT___index_T) 
                                                     << 5U) 
                                                    ^ 
                                                    ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__VdfgTmp_h4436d783__0) 
                                                     << 7U)))))) 
                                | (__Vtemp_h55a83eeb__0[
                                   (7U & ((0x7ffffffU 
                                           & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT___index_T)) 
                                          ^ (0x7fffffcU 
                                             & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__VdfgTmp_h4436d783__0) 
                                                << 2U))))] 
                                   >> (0x1fU & (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT___index_T) 
                                                 << 5U) 
                                                ^ ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__VdfgTmp_h4436d783__0) 
                                                   << 7U)))))),32);
    bufp->fullBit(oldp+8461,(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__full) 
                              | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_valid) 
                                 & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_opcode)))));
    bufp->fullIData(oldp+8462,(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__full)
                                 ? (IData)((vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__ram 
                                            >> 3U))
                                 : vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_data)),32);
    bufp->fullCData(oldp+8463,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__full)
                                       ? (IData)((vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__ram 
                                                  >> 1U))
                                       : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__d_resp)))),2);
    bufp->fullBit(oldp+8464,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__full)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__ram)
                                     : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT____Vcellinp__nodeIn_rdeq_q__io_enq_bits_last)))));
    bufp->fullIData(oldp+8465,(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__full)
                                 ? (IData)((vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__ram 
                                            >> 5U))
                                 : vlSelf->ysyxSoCFull__DOT__fpga__DOT___atomics_auto_out_a_bits_data)),32);
    bufp->fullCData(oldp+8466,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__full)
                                         ? (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__ram 
                                                    >> 1U))
                                         : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT___atomics_auto_out_a_bits_mask)))),4);
    bufp->fullBit(oldp+8467,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__full)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__ram)
                                     : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__a_last)))));
    bufp->fullQData(oldp+8468,((((QData)((IData)(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__full)
                                                   ? (IData)(
                                                             (vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__ram 
                                                              >> 5U))
                                                   : vlSelf->ysyxSoCFull__DOT__fpga__DOT___atomics_auto_out_a_bits_data))) 
                                 << 4U) | (QData)((IData)(
                                                          (0xfU 
                                                           & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__full)
                                                               ? (IData)(
                                                                         (vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__ram 
                                                                          >> 1U))
                                                               : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT___atomics_auto_out_a_bits_mask))))))),36);
    bufp->fullBit(oldp+8470,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____VdfgTmp_h3deb4dd1__0))));
    bufp->fullBit(oldp+8471,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____VdfgTmp_h6bd82316__0))));
    bufp->fullCData(oldp+8472,(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4yank_2_auto_in_bresp) 
                                | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___q_bdeq_q_io_deq_bits_id)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__error_1)
                                    : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__error_0)))),2);
    bufp->fullCData(oldp+8473,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___q_bdeq_q_io_deq_bits_id)
                                       ? ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_3__DOT__empty)
                                           ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4frag_auto_out_awecho_extra_id)
                                           : ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_3__DOT___ram_ext_R0_data) 
                                              >> 1U))
                                       : ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_2__DOT__empty)
                                           ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4frag_auto_out_awecho_extra_id)
                                           : ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_2__DOT___ram_ext_R0_data) 
                                              >> 1U))))),3);
    bufp->fullCData(oldp+8474,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4frag_auto_in_rid)
                                       ? (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_1__DOT__maybe_full)) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_1__DOT__ptr_match))
                                           ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4frag_auto_out_arecho_extra_id)
                                           : ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_1__DOT___ram_ext_R0_data) 
                                              >> 1U))
                                       : (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap__DOT__maybe_full)) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap__DOT__ptr_match))
                                           ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4frag_auto_out_arecho_extra_id)
                                           : ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap__DOT___ram_ext_R0_data) 
                                              >> 1U))))),3);
    bufp->fullBit(oldp+8475,((1U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4frag_auto_in_rid)
                                      ? (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_1__DOT__maybe_full)) 
                                          & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_1__DOT__ptr_match))
                                          ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__ar_last)
                                          : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_1__DOT___ram_ext_R0_data))
                                      : (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap__DOT__maybe_full)) 
                                          & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap__DOT__ptr_match))
                                          ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__ar_last)
                                          : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap__DOT___ram_ext_R0_data))) 
                                    & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__full)
                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__ram)
                                        : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT____Vcellinp__nodeIn_rdeq_q__io_enq_bits_last))))));
    bufp->fullBit(oldp+8476,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4frag_auto_in_rid)
                                     ? (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_1__DOT__maybe_full)) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_1__DOT__ptr_match))
                                         ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__ar_last)
                                         : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_1__DOT___ram_ext_R0_data))
                                     : (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap__DOT__maybe_full)) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap__DOT__ptr_match))
                                         ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__ar_last)
                                         : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap__DOT___ram_ext_R0_data))))));
    bufp->fullBit(oldp+8477,(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4yank_2_auto_in_arready) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__ar_last))));
    bufp->fullBit(oldp+8478,(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__in_awready) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__aw_last))));
    bufp->fullBit(oldp+8479,(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4yank_2_auto_in_wready) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT____VdfgTmp_ha2215a43__0))));
    bufp->fullBit(oldp+8480,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__full)) 
                              & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__VdfgTmp_h3deb4dd1__0))));
    bufp->fullBit(oldp+8481,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q__DOT__full)) 
                              & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__VdfgTmp_h6bd82316__0))));
    bufp->fullCData(oldp+8482,(((0xeU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___q_bdeq_q_io_deq_bits_id)
                                           ? ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_3__DOT__empty)
                                               ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4frag_auto_out_awecho_extra_id)
                                               : ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_3__DOT___ram_ext_R0_data) 
                                                  >> 1U))
                                           : ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_2__DOT__empty)
                                               ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4frag_auto_out_awecho_extra_id)
                                               : ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_2__DOT___ram_ext_R0_data) 
                                                  >> 1U))) 
                                         << 1U)) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___q_bdeq_q_io_deq_bits_id))),4);
    bufp->fullCData(oldp+8483,(((0xeU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4frag_auto_in_rid)
                                           ? (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_1__DOT__maybe_full)) 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_1__DOT__ptr_match))
                                               ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4frag_auto_out_arecho_extra_id)
                                               : ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_1__DOT___ram_ext_R0_data) 
                                                  >> 1U))
                                           : (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap__DOT__maybe_full)) 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap__DOT__ptr_match))
                                               ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4frag_auto_out_arecho_extra_id)
                                               : ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap__DOT___ram_ext_R0_data) 
                                                  >> 1U))) 
                                         << 1U)) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4frag_auto_in_rid))),4);
    bufp->fullBit(oldp+8484,((1U & ((~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap__DOT__maybe_full)) 
                                        & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap__DOT__ptr_match))) 
                                    | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT____Vcellinp__Queue4_BundleMap__io_enq_valid)))));
    bufp->fullBit(oldp+8485,((1U & ((~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_1__DOT__maybe_full)) 
                                        & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_1__DOT__ptr_match))) 
                                    | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT____Vcellinp__Queue4_BundleMap_1__io_enq_valid)))));
    bufp->fullBit(oldp+8486,((1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_2__DOT__empty)) 
                                    | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT____Vcellinp__Queue4_BundleMap_2__io_enq_valid)))));
    bufp->fullBit(oldp+8487,((1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_3__DOT__empty)) 
                                    | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT____Vcellinp__Queue4_BundleMap_3__io_enq_valid)))));
    bufp->fullIData(oldp+8488,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__bypass)
                                 ? 0U : vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg)),32);
    __Vtemp_h3d9295b4__0[0U] = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__header;
    __Vtemp_h3d9295b4__0[1U] = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__full) 
                                & (IData)((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__ram 
                                           >> 0x22U)));
    __Vtemp_h3d9295b4__0[2U] = (IData)((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__header)) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__full)
                                                            ? (IData)(
                                                                      (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__ram 
                                                                       >> 1U))
                                                            : vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___mbypass_auto_in_1_d_bits_data)))));
    __Vtemp_h3d9295b4__0[3U] = (IData)(((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__header)) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__full)
                                                             ? (IData)(
                                                                       (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__ram 
                                                                        >> 1U))
                                                             : vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___mbypass_auto_in_1_d_bits_data)))) 
                                        >> 0x20U));
    bufp->fullIData(oldp+8489,((((0U == (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__state) 
                                                  << 5U)))
                                  ? 0U : (__Vtemp_h3d9295b4__0[
                                          (((IData)(0x1fU) 
                                            + (0x7fU 
                                               & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__state) 
                                                  << 5U))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__state) 
                                                    << 5U))))) 
                                | (__Vtemp_h3d9295b4__0[
                                   (3U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__state))] 
                                   >> (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__state) 
                                                << 5U))))),32);
    bufp->fullSData(oldp+8490,((0xffffU & (((0U == 
                                             (0x10U 
                                              & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source) 
                                                 << 1U)))
                                             ? 0U : 
                                            (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_1[
                                             (((IData)(0xfU) 
                                               + (0x70U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source) 
                                                     << 1U))) 
                                              >> 5U)] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x10U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source) 
                                                     << 1U))))) 
                                           | (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_1[
                                              (3U & 
                                               ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source) 
                                                >> 4U))] 
                                              >> (0x10U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source) 
                                                     << 1U)))))),16);
    bufp->fullIData(oldp+8491,((4U | ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___clr_T) 
                                        & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__io_key_0)))
                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT____Vcellinp__cam__io_alloc_bits)
                                        : vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__data_ext__DOT__Memory
                                       [0U]) << 0x10U))),32);
    bufp->fullSData(oldp+8492,((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___clr_T) 
                                 & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__io_key_0)))
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT____Vcellinp__cam__io_alloc_bits)
                                 : vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__data_ext__DOT__Memory
                                [0U])),16);
    bufp->fullBit(oldp+8493,((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_domain)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____VdfgTmp_h7298eac2__0))));
    bufp->fullSData(oldp+8494,((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT___clr_T) 
                                 & ((7U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source)) 
                                    == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__io_key_0)))
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_source)
                                 : vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__Memory
                                [(7U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source))])),16);
    bufp->fullBit(oldp+8495,((0x7fU & ((((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_domain)) 
                                        >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____VdfgTmp_h7298eac2__0)))));
    bufp->fullSData(oldp+8496,((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT___clr_T) 
                                 & ((7U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source)) 
                                    == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__io_key_0)))
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_source)
                                 : vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__data_ext__DOT__Memory
                                [(7U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source))])),16);
    bufp->fullBit(oldp+8497,((0x3fU & ((((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_domain)) 
                                        >> 2U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____VdfgTmp_h7298eac2__0)))));
    bufp->fullSData(oldp+8498,((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT___clr_T) 
                                 & ((7U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source)) 
                                    == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__io_key_0)))
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_source)
                                 : vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__data_ext__DOT__Memory
                                [(7U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source))])),16);
    bufp->fullBit(oldp+8499,((0x1fU & ((((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_domain)) 
                                        >> 3U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____VdfgTmp_h7298eac2__0)))));
    bufp->fullSData(oldp+8500,((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT___clr_T) 
                                 & ((7U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source)) 
                                    == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__io_key_0)))
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_source)
                                 : vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__data_ext__DOT__Memory
                                [(7U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source))])),16);
    bufp->fullBit(oldp+8501,((0xfU & ((((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_domain)) 
                                       >> 4U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____VdfgTmp_h7298eac2__0)))));
    bufp->fullSData(oldp+8502,((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT___clr_T) 
                                 & ((7U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source)) 
                                    == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__io_key_0)))
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_source)
                                 : vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__data_ext__DOT__Memory
                                [(7U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source))])),16);
    bufp->fullBit(oldp+8503,((7U & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_domain)) 
                                     >> 5U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____VdfgTmp_h7298eac2__0)))));
    bufp->fullSData(oldp+8504,((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT___clr_T) 
                                 & ((7U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source)) 
                                    == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__io_key_0)))
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_source)
                                 : vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__data_ext__DOT__Memory
                                [(7U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source))])),16);
    bufp->fullBit(oldp+8505,((3U & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_domain)) 
                                     >> 6U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____VdfgTmp_h7298eac2__0)))));
    bufp->fullSData(oldp+8506,((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT___clr_T) 
                                 & ((7U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source)) 
                                    == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__io_key_0)))
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_source)
                                 : vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__data_ext__DOT__Memory
                                [(7U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source))])),16);
    bufp->fullBit(oldp+8507,(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____VdfgTmp_h7298eac2__0) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_domain)) 
                                 >> 7U))));
    bufp->fullSData(oldp+8508,((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT___clr_T) 
                                 & ((7U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source)) 
                                    == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__io_key_0)))
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_source)
                                 : vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__data_ext__DOT__Memory
                                [(7U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source))])),16);
    bufp->fullBit(oldp+8509,((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_6)) 
                               & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__write_6) 
                                  != (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgTmp_he7c815ba__0))))) 
                              | (0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_6)))));
    bufp->fullBit(oldp+8510,((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_5)) 
                               & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__write_5) 
                                  != (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgTmp_he7c815ba__0))))) 
                              | (0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_5)))));
    bufp->fullBit(oldp+8511,((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_3)) 
                               & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__write_3) 
                                  != (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgTmp_he7c815ba__0))))) 
                              | (0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_3)))));
    bufp->fullBit(oldp+8512,((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_1)) 
                               & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__write_1) 
                                  != (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgTmp_he7c815ba__0))))) 
                              | (0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_1)))));
    bufp->fullCData(oldp+8513,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__full)
                                         ? (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__ram 
                                                    >> 0x2dU))
                                         : (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.auto_out_awid)))),4);
    bufp->fullIData(oldp+8514,(((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                 ? (IData)((vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram 
                                            >> 5U))
                                 : vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.auto_out_wdata)),32);
    bufp->fullCData(oldp+8515,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                         ? (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram 
                                                    >> 1U))
                                         : (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.auto_out_wstrb)))),4);
    bufp->fullBit(oldp+8516,((1U == ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__w_counter))
                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__wbeats_valid)
                                      : (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__w_counter)))));
    bufp->fullCData(oldp+8517,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q__DOT__full)
                                         ? (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q__DOT__ram 
                                                    >> 0x2dU))
                                         : (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.auto_out_awid)))),4);
    bufp->fullQData(oldp+8518,((((QData)((IData)((0xfU 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q__DOT__full)
                                                      ? (IData)(
                                                                (vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q__DOT__ram 
                                                                 >> 0x2dU))
                                                      : (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.auto_out_awid))))) 
                                 << 0x21U) | (((QData)((IData)(
                                                               (~ 
                                                                (((~ 
                                                                   (vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__addr 
                                                                    >> 2U)) 
                                                                  << 2U) 
                                                                 | (3U 
                                                                    & ((~ 
                                                                        ((IData)(3U) 
                                                                         << (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT___deq_q_io_deq_bits_size))) 
                                                                       | (~ vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__addr))))))) 
                                               << 1U) 
                                              | (QData)((IData)(
                                                                (1U 
                                                                 & (~ (IData)(
                                                                              (0U 
                                                                               != (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__len)))))))))),37);
    bufp->fullQData(oldp+8520,((((QData)((IData)((0xfU 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__full)
                                                      ? (IData)(
                                                                (vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__ram 
                                                                 >> 0x2dU))
                                                      : (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.auto_out_awid))))) 
                                 << 0x21U) | (((QData)((IData)(
                                                               (~ 
                                                                (((~ 
                                                                   (vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__addr_1 
                                                                    >> 2U)) 
                                                                  << 2U) 
                                                                 | (3U 
                                                                    & ((~ 
                                                                        ((IData)(3U) 
                                                                         << (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size))) 
                                                                       | (~ vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__addr_1))))))) 
                                               << 1U) 
                                              | (QData)((IData)(
                                                                (1U 
                                                                 & (~ (IData)(
                                                                              (0U 
                                                                               != (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__len_1)))))))))),37);
    bufp->fullQData(oldp+8522,((((QData)((IData)(((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                                   ? (IData)(
                                                             (vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram 
                                                              >> 5U))
                                                   : vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.auto_out_wdata))) 
                                 << 4U) | (QData)((IData)(
                                                          (0xfU 
                                                           & ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                                               ? (IData)(
                                                                         (vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram 
                                                                          >> 1U))
                                                               : (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.auto_out_wstrb))))))),36);
    bufp->fullSData(oldp+8524,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__w_counter))
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__wbeats_valid)
                                 : (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__w_counter))),9);
    bufp->fullBit(oldp+8525,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram)
                                     : (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.auto_out_wlast)))));
    bufp->fullBit(oldp+8526,((((0U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__count_6)) 
                               & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__write_6) 
                                  != (1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT___atomics_auto_out_a_bits_opcode) 
                                               >> 2U))))) 
                              | (0x10U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__count_6)))));
    bufp->fullBit(oldp+8527,((((0U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__count_5)) 
                               & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__write_5) 
                                  != (1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT___atomics_auto_out_a_bits_opcode) 
                                               >> 2U))))) 
                              | (0x10U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__count_5)))));
    bufp->fullBit(oldp+8528,((((0U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__count_3)) 
                               & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__write_3) 
                                  != (1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT___atomics_auto_out_a_bits_opcode) 
                                               >> 2U))))) 
                              | (0x10U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__count_3)))));
    bufp->fullBit(oldp+8529,((((0U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__count_1)) 
                               & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__write_1) 
                                  != (1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT___atomics_auto_out_a_bits_opcode) 
                                               >> 2U))))) 
                              | (0x10U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__count_1)))));
    __Vtemp_h5e09b441__0[0U] = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__mem_0;
    __Vtemp_h5e09b441__0[1U] = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__mem_1;
    __Vtemp_h5e09b441__0[2U] = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__mem_2;
    __Vtemp_h5e09b441__0[3U] = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__mem_3;
    __Vtemp_h5e09b441__0[4U] = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__mem_4;
    __Vtemp_h5e09b441__0[5U] = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__mem_5;
    __Vtemp_h5e09b441__0[6U] = (IData)((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__mem_7)) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__mem_6))));
    __Vtemp_h5e09b441__0[7U] = (IData)(((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__mem_7)) 
                                          << 0x20U) 
                                         | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__mem_6))) 
                                        >> 0x20U));
    bufp->fullIData(oldp+8530,((((0U == (0x1fU & (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT___index_T) 
                                                   << 5U) 
                                                  ^ 
                                                  ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__VdfgTmp_h4436d783__0) 
                                                   << 7U))))
                                  ? 0U : (__Vtemp_h5e09b441__0[
                                          (((IData)(0x1fU) 
                                            + (0xffU 
                                               & (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT___index_T) 
                                                   << 5U) 
                                                  ^ 
                                                  ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__VdfgTmp_h4436d783__0) 
                                                   << 7U)))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT___index_T) 
                                                     << 5U) 
                                                    ^ 
                                                    ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__VdfgTmp_h4436d783__0) 
                                                     << 7U)))))) 
                                | (__Vtemp_h5e09b441__0[
                                   (7U & ((0x7ffffffU 
                                           & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT___index_T)) 
                                          ^ (0x7fffffcU 
                                             & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__VdfgTmp_h4436d783__0) 
                                                << 2U))))] 
                                   >> (0x1fU & (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT___index_T) 
                                                 << 5U) 
                                                ^ ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__VdfgTmp_h4436d783__0) 
                                                   << 7U)))))),32);
    __Vtemp_h4c5f8146__0[0U] = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__mem_0;
    __Vtemp_h4c5f8146__0[1U] = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__mem_1;
    __Vtemp_h4c5f8146__0[2U] = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__mem_2;
    __Vtemp_h4c5f8146__0[3U] = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__mem_3;
    __Vtemp_h4c5f8146__0[4U] = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__mem_4;
    __Vtemp_h4c5f8146__0[5U] = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__mem_5;
    __Vtemp_h4c5f8146__0[6U] = (IData)((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__mem_7)) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__mem_6))));
    __Vtemp_h4c5f8146__0[7U] = (IData)(((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__mem_7)) 
                                          << 0x20U) 
                                         | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__mem_6))) 
                                        >> 0x20U));
    bufp->fullIData(oldp+8531,((((0U == (0x1fU & (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT___index_T) 
                                                   << 5U) 
                                                  ^ 
                                                  ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__VdfgTmp_h4436d783__0) 
                                                   << 7U))))
                                  ? 0U : (__Vtemp_h4c5f8146__0[
                                          (((IData)(0x1fU) 
                                            + (0xffU 
                                               & (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT___index_T) 
                                                   << 5U) 
                                                  ^ 
                                                  ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__VdfgTmp_h4436d783__0) 
                                                   << 7U)))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT___index_T) 
                                                     << 5U) 
                                                    ^ 
                                                    ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__VdfgTmp_h4436d783__0) 
                                                     << 7U)))))) 
                                | (__Vtemp_h4c5f8146__0[
                                   (7U & ((0x7ffffffU 
                                           & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT___index_T)) 
                                          ^ (0x7fffffcU 
                                             & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__VdfgTmp_h4436d783__0) 
                                                << 2U))))] 
                                   >> (0x1fU & (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT___index_T) 
                                                 << 5U) 
                                                ^ ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__VdfgTmp_h4436d783__0) 
                                                   << 7U)))))),32);
    bufp->fullCData(oldp+8532,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__data),8);
    bufp->fullCData(oldp+8533,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__bit_cnt),8);
    bufp->fullIData(oldp+8534,(vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata),32);
    bufp->fullBit(oldp+8535,(vlSelf->ysyxSoCFull__DOT___asic_spi_sck));
    bufp->fullCData(oldp+8536,(vlSelf->ysyxSoCFull__DOT___asic_spi_ss),8);
    bufp->fullBit(oldp+8537,(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi));
    bufp->fullBit(oldp+8538,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ack_q));
    bufp->fullIData(oldp+8539,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q),32);
    bufp->fullBit(oldp+8540,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__do_bypass_catcher_1__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))));
    bufp->fullBit(oldp+8541,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__do_bypass_catcher_1__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+8542,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__do_bypass_catcher_1__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+8543,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__do_bypass_catcher_1__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+8544,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.io_deq_valid));
    bufp->fullBit(oldp+8545,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.io_deq_valid));
    bufp->fullBit(oldp+8546,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.io_deq_valid));
    bufp->fullBit(oldp+8547,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.io_deq_valid));
    bufp->fullBit(oldp+8548,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.io_deq_valid));
    bufp->fullBit(oldp+8549,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck));
    bufp->fullBit(oldp+8550,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n));
    bufp->fullCData(oldp+8551,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                 ? 0xeU : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                            ? 0xbU : 
                                           (0xfU & 
                                            ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                              ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                 >> 0x14U)
                                              : ((3U 
                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                  ? 
                                                 (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                  >> 0x10U)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                   ? 
                                                  (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                   >> 0xcU)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                    ? 
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                    >> 8U)
                                                    : 
                                                   ((6U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                     ? 
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                     >> 4U)
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                      ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr
                                                      : 0U)))))))))),4);
    bufp->fullBit(oldp+8552,((8U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+8553,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck));
    bufp->fullBit(oldp+8554,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n));
    bufp->fullBit(oldp+8555,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)))));
    bufp->fullBit(oldp+8556,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state))));
    bufp->fullBit(oldp+8557,((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__INIT__DOT__counter))));
    bufp->fullBit(oldp+8558,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__init_sck));
    bufp->fullBit(oldp+8559,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__init_ce_n));
    bufp->fullCData(oldp+8560,(((8U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__INIT__DOT__counter))
                                 ? (1U & (0x35U >> 
                                          (7U & ((IData)(7U) 
                                                 - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__INIT__DOT__counter)))))
                                 : 0U)),4);
    bufp->fullBit(oldp+8561,((0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullCData(oldp+8562,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state),2);
    bufp->fullCData(oldp+8563,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__INIT__DOT__counter),8);
    bufp->fullBit(oldp+8564,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state));
    bufp->fullCData(oldp+8565,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter),8);
    bufp->fullIData(oldp+8566,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr),24);
    bufp->fullCData(oldp+8567,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                       >> 1U) - (IData)(3U)))),2);
    bufp->fullBit(oldp+8568,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state));
    bufp->fullCData(oldp+8569,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter),8);
    bufp->fullIData(oldp+8570,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr),24);
    bufp->fullBit(oldp+8571,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)))));
    bufp->fullIData(oldp+8572,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q),32);
    bufp->fullBit(oldp+8573,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q));
    bufp->fullBit(oldp+8574,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_q));
    bufp->fullCData(oldp+8575,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q),8);
    bufp->fullSData(oldp+8576,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[0]),13);
    bufp->fullSData(oldp+8577,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[1]),13);
    bufp->fullSData(oldp+8578,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[2]),13);
    bufp->fullSData(oldp+8579,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[3]),13);
    bufp->fullSData(oldp+8580,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[4]),13);
    bufp->fullSData(oldp+8581,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[5]),13);
    bufp->fullSData(oldp+8582,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[6]),13);
    bufp->fullSData(oldp+8583,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[7]),13);
    bufp->fullCData(oldp+8584,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_q),4);
    bufp->fullCData(oldp+8585,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_state_q),4);
    bufp->fullCData(oldp+8586,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_q),4);
    bufp->fullIData(oldp+8587,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data0_q),32);
    bufp->fullIData(oldp+8588,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__idx),32);
    bufp->fullCData(oldp+8589,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q),4);
    bufp->fullBit(oldp+8590,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_spi_irq_out));
    bufp->fullIData(oldp+8591,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_prdata),32);
    bufp->fullBit(oldp+8592,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_pready));
    bufp->fullSData(oldp+8593,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider),16);
    bufp->fullSData(oldp+8594,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl),14);
    bufp->fullCData(oldp+8595,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss),8);
    bufp->fullWData(oldp+8596,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data),128);
    bufp->fullBit(oldp+8600,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                    >> 9U))));
    bufp->fullBit(oldp+8601,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                    >> 0xaU))));
    bufp->fullCData(oldp+8602,((0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))),7);
    bufp->fullBit(oldp+8603,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                    >> 8U))));
    bufp->fullBit(oldp+8604,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                    >> 0xbU))));
    bufp->fullBit(oldp+8605,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                    >> 0xcU))));
    bufp->fullBit(oldp+8606,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                    >> 0xdU))));
    bufp->fullBit(oldp+8607,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip));
    bufp->fullBit(oldp+8608,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge));
    bufp->fullBit(oldp+8609,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge));
    bufp->fullBit(oldp+8610,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)))))));
    bufp->fullSData(oldp+8611,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt),16);
    bufp->fullBit(oldp+8612,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullBit(oldp+8613,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullCData(oldp+8614,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt),8);
    bufp->fullCData(oldp+8615,((0xffU & ((0x800U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                          ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                                             - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                          : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                             - (IData)(1U))))),8);
    bufp->fullCData(oldp+8616,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos),8);
    bufp->fullBit(oldp+8617,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk));
    bufp->fullBit(oldp+8618,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk));
    bufp->fullBit(oldp+8619,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                       >> 1U)))));
    bufp->fullBit(oldp+8620,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))));
    bufp->fullBit(oldp+8621,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt));
    bufp->fullBit(oldp+8622,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                    >> 1U))));
    bufp->fullBit(oldp+8623,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable));
    bufp->fullBit(oldp+8624,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
    bufp->fullCData(oldp+8625,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier),4);
    bufp->fullCData(oldp+8626,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir),4);
    bufp->fullCData(oldp+8627,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr),2);
    bufp->fullCData(oldp+8628,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr),5);
    bufp->fullCData(oldp+8629,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr),8);
    bufp->fullCData(oldp+8630,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr),8);
    bufp->fullSData(oldp+8631,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl),16);
    bufp->fullCData(oldp+8632,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch),8);
    bufp->fullBit(oldp+8633,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc));
    bufp->fullBit(oldp+8634,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
    bufp->fullBit(oldp+8635,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset));
    bufp->fullSData(oldp+8636,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc),16);
    bufp->fullCData(oldp+8637,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level),4);
    bufp->fullBit(oldp+8638,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset));
    bufp->fullBit(oldp+8639,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset));
    bufp->fullBit(oldp+8640,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                    >> 7U))));
    bufp->fullBit(oldp+8641,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                    >> 4U))));
    bufp->fullBit(oldp+8642,((IData)((0x10U != (0x12U 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+8643,((IData)((0x11U == (0x11U 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+8644,((IData)((0x14U == (0x14U 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+8645,((IData)((0x18U == (0x18U 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullCData(oldp+8646,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
                                 << 7U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r) 
                                            << 6U) 
                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r) 
                                               << 5U) 
                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r) 
                                                  << 4U) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                                                     << 3U) 
                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                                                        << 2U) 
                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                                                           << 1U) 
                                                          | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r))))))))),8);
    bufp->fullBit(oldp+8647,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
    bufp->fullBit(oldp+8648,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    bufp->fullBit(oldp+8649,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                    >> 1U))));
    bufp->fullBit(oldp+8650,((1U & (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))));
    bufp->fullBit(oldp+8651,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                    >> 2U))));
    bufp->fullBit(oldp+8652,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
    bufp->fullBit(oldp+8653,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
    bufp->fullBit(oldp+8654,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
    bufp->fullBit(oldp+8655,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r));
    bufp->fullBit(oldp+8656,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r));
    bufp->fullBit(oldp+8657,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r));
    bufp->fullBit(oldp+8658,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r));
    bufp->fullBit(oldp+8659,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r));
    bufp->fullBit(oldp+8660,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    bufp->fullBit(oldp+8661,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r));
    bufp->fullBit(oldp+8662,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r));
    bufp->fullBit(oldp+8663,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
    bufp->fullBit(oldp+8664,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
    bufp->fullBit(oldp+8665,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
    bufp->fullBit(oldp+8666,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
    bufp->fullBit(oldp+8667,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
    bufp->fullBit(oldp+8668,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push));
    bufp->fullBit(oldp+8669,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop));
    bufp->fullBit(oldp+8670,((0U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                     [0U] | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                             [1U] | 
                                             (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                              [2U] 
                                              | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                 [3U] 
                                                 | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                    [4U] 
                                                    | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                       [5U] 
                                                       | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                          [6U] 
                                                          | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                             [7U] 
                                                             | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                [8U] 
                                                                | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                   [9U] 
                                                                   | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                      [0xaU] 
                                                                      | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                         [0xbU] 
                                                                         | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                            [0xcU] 
                                                                            | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                               [0xdU] 
                                                                               | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                                [0xeU] 
                                                                                | vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                                [0xfU]))))))))))))))))));
    bufp->fullBit(oldp+8671,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    bufp->fullCData(oldp+8672,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count),5);
    bufp->fullCData(oldp+8673,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count),5);
    bufp->fullCData(oldp+8674,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate),3);
    bufp->fullCData(oldp+8675,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate),4);
    bufp->fullSData(oldp+8676,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t),10);
    bufp->fullBit(oldp+8677,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))))));
    bufp->fullCData(oldp+8678,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
    bufp->fullCData(oldp+8679,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value),8);
    bufp->fullBit(oldp+8680,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out));
    bufp->fullBit(oldp+8681,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in));
    bufp->fullCData(oldp+8682,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
    bufp->fullBit(oldp+8683,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d));
    bufp->fullBit(oldp+8684,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d));
    bufp->fullBit(oldp+8685,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d));
    bufp->fullBit(oldp+8686,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d));
    bufp->fullBit(oldp+8687,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d));
    bufp->fullBit(oldp+8688,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d));
    bufp->fullBit(oldp+8689,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d));
    bufp->fullBit(oldp+8690,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d));
    bufp->fullBit(oldp+8691,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d));
    bufp->fullBit(oldp+8692,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d));
    bufp->fullBit(oldp+8693,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d));
    bufp->fullBit(oldp+8694,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d));
    bufp->fullBit(oldp+8695,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d));
    bufp->fullBit(oldp+8696,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))));
    bufp->fullBit(oldp+8697,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))));
    bufp->fullBit(oldp+8698,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))));
    bufp->fullBit(oldp+8699,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))));
    bufp->fullBit(oldp+8700,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))));
    bufp->fullBit(oldp+8701,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
    bufp->fullBit(oldp+8702,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
    bufp->fullBit(oldp+8703,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
    bufp->fullBit(oldp+8704,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
    bufp->fullBit(oldp+8705,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
    bufp->fullBit(oldp+8706,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
    bufp->fullCData(oldp+8707,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
    bufp->fullCData(oldp+8708,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
    bufp->fullCData(oldp+8709,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
    bufp->fullBit(oldp+8710,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
    bufp->fullBit(oldp+8711,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
    bufp->fullBit(oldp+8712,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
    bufp->fullBit(oldp+8713,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in));
    bufp->fullBit(oldp+8714,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
    bufp->fullCData(oldp+8715,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
    bufp->fullBit(oldp+8716,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
    bufp->fullSData(oldp+8717,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
    bufp->fullBit(oldp+8718,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    bufp->fullBit(oldp+8719,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
    bufp->fullBit(oldp+8720,((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+8721,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+8722,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullCData(oldp+8723,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                        - (IData)(1U)))),4);
    bufp->fullSData(oldp+8724,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
    bufp->fullCData(oldp+8725,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                         >> 2U))),8);
    bufp->fullCData(oldp+8726,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
    bufp->fullCData(oldp+8727,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
    bufp->fullCData(oldp+8728,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
    bufp->fullCData(oldp+8729,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
    bufp->fullCData(oldp+8730,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
    bufp->fullCData(oldp+8731,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
    bufp->fullCData(oldp+8732,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
    bufp->fullCData(oldp+8733,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
    bufp->fullCData(oldp+8734,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
    bufp->fullCData(oldp+8735,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
    bufp->fullCData(oldp+8736,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
    bufp->fullCData(oldp+8737,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
    bufp->fullCData(oldp+8738,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
    bufp->fullCData(oldp+8739,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
    bufp->fullCData(oldp+8740,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
    bufp->fullCData(oldp+8741,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
    bufp->fullCData(oldp+8742,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
    bufp->fullCData(oldp+8743,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
    bufp->fullCData(oldp+8744,((0xfU & ((IData)(1U) 
                                        + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
    bufp->fullCData(oldp+8745,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0U]),3);
    bufp->fullCData(oldp+8746,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [1U]),3);
    bufp->fullCData(oldp+8747,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [2U]),3);
    bufp->fullCData(oldp+8748,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [3U]),3);
    bufp->fullCData(oldp+8749,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [4U]),3);
    bufp->fullCData(oldp+8750,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [5U]),3);
    bufp->fullCData(oldp+8751,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [6U]),3);
    bufp->fullCData(oldp+8752,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [7U]),3);
    bufp->fullCData(oldp+8753,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [8U]),3);
    bufp->fullCData(oldp+8754,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [9U]),3);
    bufp->fullCData(oldp+8755,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xaU]),3);
    bufp->fullCData(oldp+8756,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xbU]),3);
    bufp->fullCData(oldp+8757,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xcU]),3);
    bufp->fullCData(oldp+8758,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xdU]),3);
    bufp->fullCData(oldp+8759,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xeU]),3);
    bufp->fullCData(oldp+8760,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xfU]),3);
    bufp->fullCData(oldp+8761,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                         >> 3U))),8);
    bufp->fullCData(oldp+8762,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
    bufp->fullCData(oldp+8763,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
    bufp->fullCData(oldp+8764,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
    bufp->fullBit(oldp+8765,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    bufp->fullBit(oldp+8766,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
    bufp->fullBit(oldp+8767,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
    bufp->fullBit(oldp+8768,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
    bufp->fullBit(oldp+8769,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
    bufp->fullCData(oldp+8770,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
    bufp->fullCData(oldp+8771,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
    bufp->fullCData(oldp+8772,((0xfU & ((IData)(1U) 
                                        + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
    bufp->fullBit(oldp+8773,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_ss) 
                                    >> 7U))));
    bufp->fullBit(oldp+8774,(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss));
    bufp->fullBit(oldp+8775,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__do_bypass_catcher_1__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))));
    bufp->fullBit(oldp+8776,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__do_bypass_catcher_1__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+8777,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__do_bypass_catcher_1__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+8778,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__do_bypass_catcher_1__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+8779,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.io_deq_valid));
    bufp->fullBit(oldp+8780,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.io_deq_valid));
    bufp->fullBit(oldp+8781,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.io_deq_valid));
    bufp->fullBit(oldp+8782,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.io_deq_valid));
    bufp->fullBit(oldp+8783,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.io_deq_valid));
    bufp->fullCData(oldp+8784,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__ridx_ridx_bin),4);
    bufp->fullBit(oldp+8785,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__valid_reg));
    bufp->fullBit(oldp+8786,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+8787,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+8788,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullCData(oldp+8789,((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
                                 << 3U) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0) 
                                            << 2U) 
                                           | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0))))),4);
    bufp->fullBit(oldp+8790,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+8791,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+8792,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+8793,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0));
    bufp->fullBit(oldp+8794,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
    bufp->fullBit(oldp+8795,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
    bufp->fullBit(oldp+8796,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0));
    bufp->fullBit(oldp+8797,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
    bufp->fullBit(oldp+8798,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
    bufp->fullBit(oldp+8799,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0));
    bufp->fullBit(oldp+8800,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
    bufp->fullBit(oldp+8801,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
    bufp->fullCData(oldp+8802,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__ridx_ridx_bin),4);
    bufp->fullBit(oldp+8803,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__valid_reg));
    bufp->fullBit(oldp+8804,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+8805,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+8806,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullCData(oldp+8807,((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
                                 << 3U) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0) 
                                            << 2U) 
                                           | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0))))),4);
    bufp->fullBit(oldp+8808,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+8809,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+8810,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+8811,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0));
    bufp->fullBit(oldp+8812,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
    bufp->fullBit(oldp+8813,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
    bufp->fullBit(oldp+8814,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0));
    bufp->fullBit(oldp+8815,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
    bufp->fullBit(oldp+8816,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
    bufp->fullBit(oldp+8817,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0));
    bufp->fullBit(oldp+8818,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
    bufp->fullBit(oldp+8819,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
    bufp->fullCData(oldp+8820,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__ridx_ridx_bin),4);
    bufp->fullBit(oldp+8821,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__valid_reg));
    bufp->fullBit(oldp+8822,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+8823,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+8824,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullCData(oldp+8825,((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
                                 << 3U) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0) 
                                            << 2U) 
                                           | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0))))),4);
    bufp->fullBit(oldp+8826,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+8827,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+8828,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+8829,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0));
    bufp->fullBit(oldp+8830,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
    bufp->fullBit(oldp+8831,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
    bufp->fullBit(oldp+8832,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0));
    bufp->fullBit(oldp+8833,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
    bufp->fullBit(oldp+8834,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
    bufp->fullBit(oldp+8835,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0));
    bufp->fullBit(oldp+8836,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
    bufp->fullBit(oldp+8837,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
    bufp->fullCData(oldp+8838,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__ridx_ridx_bin),4);
    bufp->fullBit(oldp+8839,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__valid_reg));
    bufp->fullBit(oldp+8840,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+8841,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+8842,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullCData(oldp+8843,((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
                                 << 3U) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0) 
                                            << 2U) 
                                           | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0))))),4);
    bufp->fullBit(oldp+8844,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+8845,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+8846,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+8847,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0));
    bufp->fullBit(oldp+8848,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
    bufp->fullBit(oldp+8849,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
    bufp->fullBit(oldp+8850,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0));
    bufp->fullBit(oldp+8851,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
    bufp->fullBit(oldp+8852,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
    bufp->fullBit(oldp+8853,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0));
    bufp->fullBit(oldp+8854,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
    bufp->fullBit(oldp+8855,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
    bufp->fullCData(oldp+8856,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__ridx_ridx_bin),4);
    bufp->fullBit(oldp+8857,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__valid_reg));
    bufp->fullBit(oldp+8858,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+8859,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+8860,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullCData(oldp+8861,((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
                                 << 3U) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0) 
                                            << 2U) 
                                           | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0))))),4);
    bufp->fullBit(oldp+8862,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+8863,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+8864,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+8865,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0));
    bufp->fullBit(oldp+8866,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
    bufp->fullBit(oldp+8867,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
    bufp->fullBit(oldp+8868,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0));
    bufp->fullBit(oldp+8869,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
    bufp->fullBit(oldp+8870,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
    bufp->fullBit(oldp+8871,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0));
    bufp->fullBit(oldp+8872,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
    bufp->fullBit(oldp+8873,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
    bufp->fullCData(oldp+8874,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__ridx_ridx_bin),4);
    bufp->fullBit(oldp+8875,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__valid_reg));
    bufp->fullBit(oldp+8876,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+8877,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+8878,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullCData(oldp+8879,((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
                                 << 3U) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0) 
                                            << 2U) 
                                           | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0))))),4);
    bufp->fullBit(oldp+8880,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+8881,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+8882,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+8883,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0));
    bufp->fullBit(oldp+8884,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
    bufp->fullBit(oldp+8885,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
    bufp->fullBit(oldp+8886,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0));
    bufp->fullBit(oldp+8887,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
    bufp->fullBit(oldp+8888,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
    bufp->fullBit(oldp+8889,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0));
    bufp->fullBit(oldp+8890,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
    bufp->fullBit(oldp+8891,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
    bufp->fullCData(oldp+8892,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__ridx_ridx_bin),4);
    bufp->fullBit(oldp+8893,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__valid_reg));
    bufp->fullBit(oldp+8894,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+8895,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+8896,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullCData(oldp+8897,((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
                                 << 3U) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0) 
                                            << 2U) 
                                           | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0))))),4);
    bufp->fullBit(oldp+8898,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+8899,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+8900,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+8901,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0));
    bufp->fullBit(oldp+8902,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
    bufp->fullBit(oldp+8903,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
    bufp->fullBit(oldp+8904,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0));
    bufp->fullBit(oldp+8905,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
    bufp->fullBit(oldp+8906,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
    bufp->fullBit(oldp+8907,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0));
    bufp->fullBit(oldp+8908,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
    bufp->fullBit(oldp+8909,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
    bufp->fullCData(oldp+8910,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__ridx_ridx_bin),4);
    bufp->fullBit(oldp+8911,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__valid_reg));
    bufp->fullBit(oldp+8912,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+8913,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+8914,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullCData(oldp+8915,((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
                                 << 3U) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0) 
                                            << 2U) 
                                           | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0))))),4);
    bufp->fullBit(oldp+8916,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+8917,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+8918,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+8919,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0));
    bufp->fullBit(oldp+8920,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
    bufp->fullBit(oldp+8921,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
    bufp->fullBit(oldp+8922,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0));
    bufp->fullBit(oldp+8923,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
    bufp->fullBit(oldp+8924,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
    bufp->fullBit(oldp+8925,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0));
    bufp->fullBit(oldp+8926,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
    bufp->fullBit(oldp+8927,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
    bufp->fullCData(oldp+8928,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__ridx_ridx_bin),4);
    bufp->fullBit(oldp+8929,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__valid_reg));
    bufp->fullBit(oldp+8930,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+8931,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+8932,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullCData(oldp+8933,((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
                                 << 3U) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0) 
                                            << 2U) 
                                           | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0))))),4);
    bufp->fullBit(oldp+8934,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+8935,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+8936,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+8937,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0));
    bufp->fullBit(oldp+8938,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
    bufp->fullBit(oldp+8939,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
    bufp->fullBit(oldp+8940,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0));
    bufp->fullBit(oldp+8941,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
    bufp->fullBit(oldp+8942,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
    bufp->fullBit(oldp+8943,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0));
    bufp->fullBit(oldp+8944,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
    bufp->fullBit(oldp+8945,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
    bufp->fullCData(oldp+8946,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__ridx_ridx_bin),4);
    bufp->fullBit(oldp+8947,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__valid_reg));
    bufp->fullBit(oldp+8948,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+8949,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+8950,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullCData(oldp+8951,((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
                                 << 3U) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0) 
                                            << 2U) 
                                           | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0))))),4);
    bufp->fullBit(oldp+8952,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+8953,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+8954,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+8955,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0));
    bufp->fullBit(oldp+8956,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
    bufp->fullBit(oldp+8957,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
    bufp->fullBit(oldp+8958,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0));
    bufp->fullBit(oldp+8959,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
    bufp->fullBit(oldp+8960,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
    bufp->fullBit(oldp+8961,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0));
    bufp->fullBit(oldp+8962,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
    bufp->fullBit(oldp+8963,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
    bufp->fullBit(oldp+8964,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+8965,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__ridx_ridx_bin));
    bufp->fullBit(oldp+8966,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__valid_reg));
    bufp->fullBit(oldp+8967,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+8968,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+8969,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+8970,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+8971,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+8972,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+8973,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+8974,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__ridx_ridx_bin));
    bufp->fullBit(oldp+8975,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__valid_reg));
    bufp->fullBit(oldp+8976,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+8977,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+8978,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+8979,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+8980,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+8981,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+8982,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+8983,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__ridx_ridx_bin));
    bufp->fullBit(oldp+8984,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__valid_reg));
    bufp->fullBit(oldp+8985,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+8986,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+8987,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+8988,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+8989,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+8990,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+8991,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+8992,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__ridx_ridx_bin));
    bufp->fullBit(oldp+8993,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__valid_reg));
    bufp->fullBit(oldp+8994,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+8995,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+8996,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+8997,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+8998,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+8999,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    bufp->fullCData(oldp+9000,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                                 ? (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__VdfgTmp_h53fdc2be__0)
                                 : 0U)),4);
    bufp->fullCData(oldp+9001,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                                 ? (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__VdfgTmp_h53fdc2be__0)
                                 : 0U)),4);
    bufp->fullCData(oldp+9002,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                                 ? (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__VdfgTmp_h53fdc2be__0)
                                 : 0U)),4);
    bufp->fullCData(oldp+9003,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                                 ? (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__VdfgTmp_h53fdc2be__0)
                                 : 0U)),4);
    bufp->fullCData(oldp+9004,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                                 ? (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__VdfgTmp_h53fdc2be__0)
                                 : 0U)),4);
    bufp->fullCData(oldp+9005,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                                 ? (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__VdfgTmp_h53fdc2be__0)
                                 : 0U)),4);
    bufp->fullSData(oldp+9006,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__Line_Address[0]),13);
    bufp->fullSData(oldp+9007,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__Line_Address[1]),13);
    bufp->fullSData(oldp+9008,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__Line_Address[2]),13);
    bufp->fullSData(oldp+9009,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__Line_Address[3]),13);
    bufp->fullSData(oldp+9010,(((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__read_flag)
                                 ? 0xffffU : 0U)),16);
    bufp->fullSData(oldp+9011,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dout),16);
    bufp->fullCData(oldp+9012,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__CAS_Latency),3);
    bufp->fullCData(oldp+9013,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__Brust_Length),3);
    bufp->fullCData(oldp+9014,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__L_Bank),2);
    bufp->fullCData(oldp+9015,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dqm_buf1),2);
    bufp->fullCData(oldp+9016,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__R_Counter),4);
    bufp->fullCData(oldp+9017,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__W_Counter),4);
    bufp->fullBit(oldp+9018,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__read_flag));
    bufp->fullSData(oldp+9019,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__R_Address),9);
    bufp->fullSData(oldp+9020,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__W_Address),9);
    bufp->fullSData(oldp+9021,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__W_Data),16);
    bufp->fullIData(oldp+9022,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__r_sdram_address),22);
    bufp->fullIData(oldp+9023,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__w_sdram_address),22);
    bufp->fullCData(oldp+9024,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__Length),4);
    bufp->fullSData(oldp+9025,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__Line_Address[0]),13);
    bufp->fullSData(oldp+9026,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__Line_Address[1]),13);
    bufp->fullSData(oldp+9027,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__Line_Address[2]),13);
    bufp->fullSData(oldp+9028,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__Line_Address[3]),13);
    bufp->fullSData(oldp+9029,(((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__read_flag)
                                 ? 0xffffU : 0U)),16);
    bufp->fullSData(oldp+9030,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dout),16);
    bufp->fullCData(oldp+9031,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__CAS_Latency),3);
    bufp->fullCData(oldp+9032,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__Brust_Length),3);
    bufp->fullCData(oldp+9033,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__L_Bank),2);
    bufp->fullCData(oldp+9034,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dqm_buf1),2);
    bufp->fullCData(oldp+9035,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__R_Counter),4);
    bufp->fullCData(oldp+9036,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__W_Counter),4);
    bufp->fullBit(oldp+9037,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__read_flag));
    bufp->fullSData(oldp+9038,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__R_Address),9);
    bufp->fullSData(oldp+9039,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__W_Address),9);
    bufp->fullSData(oldp+9040,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__W_Data),16);
    bufp->fullIData(oldp+9041,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__r_sdram_address),22);
    bufp->fullIData(oldp+9042,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__w_sdram_address),22);
    bufp->fullCData(oldp+9043,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__Length),4);
    bufp->fullSData(oldp+9044,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__Line_Address[0]),13);
    bufp->fullSData(oldp+9045,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__Line_Address[1]),13);
    bufp->fullSData(oldp+9046,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__Line_Address[2]),13);
    bufp->fullSData(oldp+9047,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__Line_Address[3]),13);
    bufp->fullSData(oldp+9048,(((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__read_flag)
                                 ? 0xffffU : 0U)),16);
    bufp->fullSData(oldp+9049,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dout),16);
    bufp->fullCData(oldp+9050,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__CAS_Latency),3);
    bufp->fullCData(oldp+9051,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__Brust_Length),3);
    bufp->fullCData(oldp+9052,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__L_Bank),2);
    bufp->fullCData(oldp+9053,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dqm_buf1),2);
    bufp->fullCData(oldp+9054,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__R_Counter),4);
    bufp->fullCData(oldp+9055,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__W_Counter),4);
    bufp->fullBit(oldp+9056,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__read_flag));
    bufp->fullSData(oldp+9057,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__R_Address),9);
    bufp->fullSData(oldp+9058,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__W_Address),9);
    bufp->fullSData(oldp+9059,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__W_Data),16);
    bufp->fullIData(oldp+9060,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__r_sdram_address),22);
    bufp->fullIData(oldp+9061,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__w_sdram_address),22);
    bufp->fullCData(oldp+9062,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__Length),4);
    bufp->fullSData(oldp+9063,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__Line_Address[0]),13);
    bufp->fullSData(oldp+9064,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__Line_Address[1]),13);
    bufp->fullSData(oldp+9065,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__Line_Address[2]),13);
    bufp->fullSData(oldp+9066,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__Line_Address[3]),13);
    bufp->fullSData(oldp+9067,(((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__read_flag)
                                 ? 0xffffU : 0U)),16);
    bufp->fullSData(oldp+9068,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dout),16);
    bufp->fullCData(oldp+9069,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__CAS_Latency),3);
    bufp->fullCData(oldp+9070,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__Brust_Length),3);
    bufp->fullCData(oldp+9071,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__L_Bank),2);
    bufp->fullCData(oldp+9072,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dqm_buf1),2);
    bufp->fullCData(oldp+9073,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__R_Counter),4);
    bufp->fullCData(oldp+9074,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__W_Counter),4);
    bufp->fullBit(oldp+9075,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__read_flag));
    bufp->fullSData(oldp+9076,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__R_Address),9);
    bufp->fullSData(oldp+9077,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__W_Address),9);
    bufp->fullSData(oldp+9078,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__W_Data),16);
    bufp->fullIData(oldp+9079,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__r_sdram_address),22);
    bufp->fullIData(oldp+9080,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__w_sdram_address),22);
    bufp->fullCData(oldp+9081,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__Length),4);
    bufp->fullBit(oldp+9082,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__do_bypass_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))));
    bufp->fullBit(oldp+9083,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__do_bypass_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9084,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__do_bypass_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9085,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__do_bypass_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_2));
    bufp->fullCData(oldp+9086,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__widx_gray),4);
    bufp->fullCData(oldp+9087,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__widx_gray),4);
    bufp->fullCData(oldp+9088,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__widx_gray),4);
    bufp->fullCData(oldp+9089,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__widx_gray),4);
    bufp->fullCData(oldp+9090,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__widx_gray),4);
    bufp->fullBit(oldp+9091,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__widx_gray));
    bufp->fullBit(oldp+9092,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__widx_gray));
    bufp->fullBit(oldp+9093,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__io_enq_ready));
    bufp->fullBit(oldp+9094,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__io_enq_ready));
    bufp->fullBit(oldp+9095,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__io_enq_ready));
    bufp->fullBit(oldp+9096,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__io_enq_ready));
    bufp->fullBit(oldp+9097,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__io_enq_ready));
    bufp->fullBit(oldp+9098,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__io_enq_ready_0));
    bufp->fullBit(oldp+9099,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__widx_widx_bin));
    bufp->fullBit(oldp+9100,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__ready_reg));
    bufp->fullBit(oldp+9101,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9102,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9103,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9104,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9105,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9106,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9107,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__unnamedblk1__DOT__widx));
    bufp->fullBit(oldp+9108,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__io_enq_ready_0));
    bufp->fullBit(oldp+9109,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__widx_widx_bin));
    bufp->fullBit(oldp+9110,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__ready_reg));
    bufp->fullBit(oldp+9111,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9112,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9113,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9114,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9115,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9116,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9117,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__unnamedblk1__DOT__widx));
    bufp->fullBit(oldp+9118,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__widx_gray))));
    bufp->fullBit(oldp+9119,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__widx_gray) 
                                    >> 1U))));
    bufp->fullBit(oldp+9120,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__widx_gray) 
                                    >> 2U))));
    bufp->fullBit(oldp+9121,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__widx_gray) 
                                    >> 3U))));
    bufp->fullBit(oldp+9122,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__widx_gray))));
    bufp->fullBit(oldp+9123,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__widx_gray) 
                                    >> 1U))));
    bufp->fullBit(oldp+9124,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__widx_gray) 
                                    >> 2U))));
    bufp->fullBit(oldp+9125,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__widx_gray) 
                                    >> 3U))));
    bufp->fullBit(oldp+9126,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__widx_gray))));
    bufp->fullBit(oldp+9127,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__widx_gray) 
                                    >> 1U))));
    bufp->fullBit(oldp+9128,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__widx_gray) 
                                    >> 2U))));
    bufp->fullBit(oldp+9129,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__widx_gray) 
                                    >> 3U))));
    bufp->fullBit(oldp+9130,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__widx_gray))));
    bufp->fullBit(oldp+9131,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__widx_gray) 
                                    >> 1U))));
    bufp->fullBit(oldp+9132,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__widx_gray) 
                                    >> 2U))));
    bufp->fullBit(oldp+9133,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__widx_gray) 
                                    >> 3U))));
    bufp->fullBit(oldp+9134,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__widx_gray))));
    bufp->fullBit(oldp+9135,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__widx_gray) 
                                    >> 1U))));
    bufp->fullBit(oldp+9136,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__widx_gray) 
                                    >> 2U))));
    bufp->fullBit(oldp+9137,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__widx_gray) 
                                    >> 3U))));
    bufp->fullCData(oldp+9138,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__widx_widx_bin),4);
    bufp->fullBit(oldp+9139,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__ready_reg));
    bufp->fullCData(oldp+9140,((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                 << 3U) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                            << 2U) 
                                           | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0))))),4);
    bufp->fullBit(oldp+9141,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9142,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9143,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9144,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0));
    bufp->fullBit(oldp+9145,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
    bufp->fullBit(oldp+9146,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
    bufp->fullBit(oldp+9147,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0));
    bufp->fullBit(oldp+9148,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
    bufp->fullBit(oldp+9149,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
    bufp->fullBit(oldp+9150,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0));
    bufp->fullBit(oldp+9151,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
    bufp->fullBit(oldp+9152,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
    bufp->fullBit(oldp+9153,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9154,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9155,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullCData(oldp+9156,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__unnamedblk2__DOT__widx_incremented),4);
    bufp->fullCData(oldp+9157,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__unnamedblk2__DOT__widx),4);
    bufp->fullCData(oldp+9158,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__widx_widx_bin),4);
    bufp->fullBit(oldp+9159,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__ready_reg));
    bufp->fullCData(oldp+9160,((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                 << 3U) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                            << 2U) 
                                           | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0))))),4);
    bufp->fullBit(oldp+9161,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9162,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9163,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9164,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0));
    bufp->fullBit(oldp+9165,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
    bufp->fullBit(oldp+9166,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
    bufp->fullBit(oldp+9167,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0));
    bufp->fullBit(oldp+9168,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
    bufp->fullBit(oldp+9169,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
    bufp->fullBit(oldp+9170,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0));
    bufp->fullBit(oldp+9171,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
    bufp->fullBit(oldp+9172,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
    bufp->fullBit(oldp+9173,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9174,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9175,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullCData(oldp+9176,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__unnamedblk2__DOT__widx_incremented),4);
    bufp->fullCData(oldp+9177,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__unnamedblk2__DOT__widx),4);
    bufp->fullCData(oldp+9178,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__widx_widx_bin),4);
    bufp->fullBit(oldp+9179,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__ready_reg));
    bufp->fullCData(oldp+9180,((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                 << 3U) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                            << 2U) 
                                           | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0))))),4);
    bufp->fullBit(oldp+9181,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9182,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9183,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9184,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0));
    bufp->fullBit(oldp+9185,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
    bufp->fullBit(oldp+9186,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
    bufp->fullBit(oldp+9187,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0));
    bufp->fullBit(oldp+9188,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
    bufp->fullBit(oldp+9189,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
    bufp->fullBit(oldp+9190,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0));
    bufp->fullBit(oldp+9191,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
    bufp->fullBit(oldp+9192,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
    bufp->fullBit(oldp+9193,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9194,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9195,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullCData(oldp+9196,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__unnamedblk2__DOT__widx_incremented),4);
    bufp->fullCData(oldp+9197,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__unnamedblk2__DOT__widx),4);
    bufp->fullCData(oldp+9198,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__widx_widx_bin),4);
    bufp->fullBit(oldp+9199,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__ready_reg));
    bufp->fullCData(oldp+9200,((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                 << 3U) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                            << 2U) 
                                           | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0))))),4);
    bufp->fullBit(oldp+9201,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9202,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9203,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9204,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0));
    bufp->fullBit(oldp+9205,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
    bufp->fullBit(oldp+9206,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
    bufp->fullBit(oldp+9207,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0));
    bufp->fullBit(oldp+9208,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
    bufp->fullBit(oldp+9209,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
    bufp->fullBit(oldp+9210,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0));
    bufp->fullBit(oldp+9211,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
    bufp->fullBit(oldp+9212,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
    bufp->fullBit(oldp+9213,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9214,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9215,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullCData(oldp+9216,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__unnamedblk2__DOT__widx_incremented),4);
    bufp->fullCData(oldp+9217,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__unnamedblk2__DOT__widx),4);
    bufp->fullCData(oldp+9218,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__widx_widx_bin),4);
    bufp->fullBit(oldp+9219,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__ready_reg));
    bufp->fullCData(oldp+9220,((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                 << 3U) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                            << 2U) 
                                           | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0))))),4);
    bufp->fullBit(oldp+9221,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9222,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9223,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9224,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0));
    bufp->fullBit(oldp+9225,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
    bufp->fullBit(oldp+9226,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
    bufp->fullBit(oldp+9227,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0));
    bufp->fullBit(oldp+9228,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
    bufp->fullBit(oldp+9229,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
    bufp->fullBit(oldp+9230,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0));
    bufp->fullBit(oldp+9231,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
    bufp->fullBit(oldp+9232,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
    bufp->fullBit(oldp+9233,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9234,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9235,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullCData(oldp+9236,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__unnamedblk2__DOT__widx_incremented),4);
    bufp->fullCData(oldp+9237,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__unnamedblk2__DOT__widx),4);
    bufp->fullBit(oldp+9238,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__do_bypass_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))));
    bufp->fullBit(oldp+9239,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__do_bypass_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9240,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__do_bypass_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9241,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__do_bypass_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_2));
    bufp->fullCData(oldp+9242,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__widx_gray),4);
    bufp->fullCData(oldp+9243,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__widx_gray),4);
    bufp->fullCData(oldp+9244,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__widx_gray),4);
    bufp->fullCData(oldp+9245,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__widx_gray),4);
    bufp->fullCData(oldp+9246,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__widx_gray),4);
    bufp->fullBit(oldp+9247,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__widx_gray));
    bufp->fullBit(oldp+9248,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__widx_gray));
    bufp->fullBit(oldp+9249,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__io_enq_ready));
    bufp->fullBit(oldp+9250,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__io_enq_ready));
    bufp->fullBit(oldp+9251,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__io_enq_ready));
    bufp->fullBit(oldp+9252,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__io_enq_ready));
    bufp->fullBit(oldp+9253,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__io_enq_ready));
    bufp->fullBit(oldp+9254,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__io_enq_ready_0));
    bufp->fullBit(oldp+9255,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__widx_widx_bin));
    bufp->fullBit(oldp+9256,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__ready_reg));
    bufp->fullBit(oldp+9257,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9258,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9259,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9260,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9261,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9262,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9263,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__unnamedblk1__DOT__widx));
    bufp->fullBit(oldp+9264,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__io_enq_ready_0));
    bufp->fullBit(oldp+9265,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__widx_widx_bin));
    bufp->fullBit(oldp+9266,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__ready_reg));
    bufp->fullBit(oldp+9267,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9268,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9269,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9270,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9271,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9272,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9273,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__unnamedblk1__DOT__widx));
    bufp->fullBit(oldp+9274,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__widx_gray))));
    bufp->fullBit(oldp+9275,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__widx_gray) 
                                    >> 1U))));
    bufp->fullBit(oldp+9276,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__widx_gray) 
                                    >> 2U))));
    bufp->fullBit(oldp+9277,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__widx_gray) 
                                    >> 3U))));
    bufp->fullBit(oldp+9278,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__widx_gray))));
    bufp->fullBit(oldp+9279,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__widx_gray) 
                                    >> 1U))));
    bufp->fullBit(oldp+9280,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__widx_gray) 
                                    >> 2U))));
    bufp->fullBit(oldp+9281,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__widx_gray) 
                                    >> 3U))));
    bufp->fullBit(oldp+9282,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__widx_gray))));
    bufp->fullBit(oldp+9283,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__widx_gray) 
                                    >> 1U))));
    bufp->fullBit(oldp+9284,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__widx_gray) 
                                    >> 2U))));
    bufp->fullBit(oldp+9285,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__widx_gray) 
                                    >> 3U))));
    bufp->fullBit(oldp+9286,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__widx_gray))));
    bufp->fullBit(oldp+9287,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__widx_gray) 
                                    >> 1U))));
    bufp->fullBit(oldp+9288,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__widx_gray) 
                                    >> 2U))));
    bufp->fullBit(oldp+9289,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__widx_gray) 
                                    >> 3U))));
    bufp->fullBit(oldp+9290,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__widx_gray))));
    bufp->fullBit(oldp+9291,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__widx_gray) 
                                    >> 1U))));
    bufp->fullBit(oldp+9292,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__widx_gray) 
                                    >> 2U))));
    bufp->fullBit(oldp+9293,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__widx_gray) 
                                    >> 3U))));
    bufp->fullCData(oldp+9294,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__widx_widx_bin),4);
    bufp->fullBit(oldp+9295,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__ready_reg));
    bufp->fullCData(oldp+9296,((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                 << 3U) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                            << 2U) 
                                           | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0))))),4);
    bufp->fullBit(oldp+9297,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9298,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9299,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9300,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0));
    bufp->fullBit(oldp+9301,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
    bufp->fullBit(oldp+9302,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
    bufp->fullBit(oldp+9303,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0));
    bufp->fullBit(oldp+9304,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
    bufp->fullBit(oldp+9305,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
    bufp->fullBit(oldp+9306,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0));
    bufp->fullBit(oldp+9307,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
    bufp->fullBit(oldp+9308,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
    bufp->fullBit(oldp+9309,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9310,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9311,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullCData(oldp+9312,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__unnamedblk2__DOT__widx_incremented),4);
    bufp->fullCData(oldp+9313,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__unnamedblk2__DOT__widx),4);
    bufp->fullCData(oldp+9314,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__widx_widx_bin),4);
    bufp->fullBit(oldp+9315,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__ready_reg));
    bufp->fullCData(oldp+9316,((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                 << 3U) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                            << 2U) 
                                           | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0))))),4);
    bufp->fullBit(oldp+9317,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9318,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9319,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9320,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0));
    bufp->fullBit(oldp+9321,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
    bufp->fullBit(oldp+9322,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
    bufp->fullBit(oldp+9323,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0));
    bufp->fullBit(oldp+9324,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
    bufp->fullBit(oldp+9325,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
    bufp->fullBit(oldp+9326,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0));
    bufp->fullBit(oldp+9327,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
    bufp->fullBit(oldp+9328,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
    bufp->fullBit(oldp+9329,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9330,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9331,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullCData(oldp+9332,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__unnamedblk2__DOT__widx_incremented),4);
    bufp->fullCData(oldp+9333,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__unnamedblk2__DOT__widx),4);
    bufp->fullCData(oldp+9334,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__widx_widx_bin),4);
    bufp->fullBit(oldp+9335,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__ready_reg));
    bufp->fullCData(oldp+9336,((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                 << 3U) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                            << 2U) 
                                           | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0))))),4);
    bufp->fullBit(oldp+9337,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9338,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9339,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9340,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0));
    bufp->fullBit(oldp+9341,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
    bufp->fullBit(oldp+9342,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
    bufp->fullBit(oldp+9343,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0));
    bufp->fullBit(oldp+9344,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
    bufp->fullBit(oldp+9345,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
    bufp->fullBit(oldp+9346,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0));
    bufp->fullBit(oldp+9347,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
    bufp->fullBit(oldp+9348,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
    bufp->fullBit(oldp+9349,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9350,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9351,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullCData(oldp+9352,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__unnamedblk2__DOT__widx_incremented),4);
    bufp->fullCData(oldp+9353,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__unnamedblk2__DOT__widx),4);
    bufp->fullCData(oldp+9354,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__widx_widx_bin),4);
    bufp->fullBit(oldp+9355,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__ready_reg));
    bufp->fullCData(oldp+9356,((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                 << 3U) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                            << 2U) 
                                           | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0))))),4);
    bufp->fullBit(oldp+9357,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9358,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9359,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9360,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0));
    bufp->fullBit(oldp+9361,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
    bufp->fullBit(oldp+9362,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
    bufp->fullBit(oldp+9363,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0));
    bufp->fullBit(oldp+9364,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
    bufp->fullBit(oldp+9365,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
    bufp->fullBit(oldp+9366,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0));
    bufp->fullBit(oldp+9367,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
    bufp->fullBit(oldp+9368,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
    bufp->fullBit(oldp+9369,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9370,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9371,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullCData(oldp+9372,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__unnamedblk2__DOT__widx_incremented),4);
    bufp->fullCData(oldp+9373,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__unnamedblk2__DOT__widx),4);
    bufp->fullCData(oldp+9374,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__widx_widx_bin),4);
    bufp->fullBit(oldp+9375,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__ready_reg));
    bufp->fullCData(oldp+9376,((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                 << 3U) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                            << 2U) 
                                           | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0))))),4);
    bufp->fullBit(oldp+9377,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9378,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9379,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9380,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0));
    bufp->fullBit(oldp+9381,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
    bufp->fullBit(oldp+9382,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
    bufp->fullBit(oldp+9383,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0));
    bufp->fullBit(oldp+9384,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
    bufp->fullBit(oldp+9385,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
    bufp->fullBit(oldp+9386,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0));
    bufp->fullBit(oldp+9387,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
    bufp->fullBit(oldp+9388,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
    bufp->fullBit(oldp+9389,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9390,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9391,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullCData(oldp+9392,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__unnamedblk2__DOT__widx_incremented),4);
    bufp->fullCData(oldp+9393,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__unnamedblk2__DOT__widx),4);
    bufp->fullCData(oldp+9394,(vlSelf->ysyxSoCFull__DOT__flash__DOT__state),3);
    bufp->fullCData(oldp+9395,(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter),8);
    bufp->fullIData(oldp+9396,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data),32);
    bufp->fullBit(oldp+9397,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                              & (0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))));
    bufp->fullBit(oldp+9398,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__nodeOut_c_valid));
    bufp->fullBit(oldp+9399,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__nodeOut_e_valid));
    bufp->fullBit(oldp+9400,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___sourceA_io_a_valid));
    bufp->fullBit(oldp+9401,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___sourceC_io_c_valid));
    bufp->fullBit(oldp+9402,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__extract__io_i_valid));
    bufp->fullBit(oldp+9403,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT___clr_T));
    bufp->fullBit(oldp+9404,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___sourceD_io_d_valid));
    bufp->fullBit(oldp+9405,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_8));
    bufp->fullCData(oldp+9406,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out),8);
    bufp->fullBit(oldp+9407,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__nodeOut_c_valid));
    bufp->fullBit(oldp+9408,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__nodeOut_e_valid));
    bufp->fullBit(oldp+9409,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___sourceA_io_a_valid));
    bufp->fullBit(oldp+9410,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___sourceC_io_c_valid));
    bufp->fullBit(oldp+9411,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__extract__io_i_valid));
    bufp->fullBit(oldp+9412,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT___clr_T));
    bufp->fullBit(oldp+9413,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___sourceD_io_d_valid));
    bufp->fullBit(oldp+9414,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___GEN_8));
    bufp->fullBit(oldp+9415,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9416,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9417,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9418,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9419,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9420,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9421,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9422,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9423,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9424,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9425,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9426,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9427,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9428,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9429,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9430,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9431,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9432,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9433,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9434,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9435,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9436,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9437,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9438,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9439,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9440,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9441,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9442,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9443,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9444,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9445,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9446,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9447,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9448,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9449,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9450,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9451,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9452,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9453,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9454,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9455,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9456,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9457,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__cke_q));
    bufp->fullBit(oldp+9458,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                    >> 3U))));
    bufp->fullBit(oldp+9459,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                    >> 2U))));
    bufp->fullBit(oldp+9460,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                    >> 1U))));
    bufp->fullBit(oldp+9461,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))));
    bufp->fullCData(oldp+9462,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q),2);
    bufp->fullCData(oldp+9463,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q),4);
    bufp->fullBit(oldp+9464,(((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)) 
                              | (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))));
    bufp->fullCData(oldp+9465,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q),4);
    bufp->fullSData(oldp+9466,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q),13);
    bufp->fullCData(oldp+9467,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q),4);
    bufp->fullIData(oldp+9468,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q),17);
    bufp->fullWData(oldp+9469,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dbg_state),80);
    bufp->fullCData(oldp+9472,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))),3);
    bufp->fullCData(oldp+9473,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q))),2);
    bufp->fullCData(oldp+9474,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q) 
                                      >> 2U))),2);
    bufp->fullCData(oldp+9475,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__ridx_gray),4);
    bufp->fullCData(oldp+9476,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__ridx_gray),4);
    bufp->fullCData(oldp+9477,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__ridx_gray),4);
    bufp->fullCData(oldp+9478,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__ridx_gray),4);
    bufp->fullCData(oldp+9479,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__ridx_gray),4);
    bufp->fullBit(oldp+9480,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__ridx_gray));
    bufp->fullBit(oldp+9481,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__ridx_gray));
    bufp->fullCData(oldp+9482,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__ridx_gray),4);
    bufp->fullCData(oldp+9483,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__ridx_gray),4);
    bufp->fullCData(oldp+9484,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__ridx_gray),4);
    bufp->fullCData(oldp+9485,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__ridx_gray),4);
    bufp->fullCData(oldp+9486,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__ridx_gray),4);
    bufp->fullBit(oldp+9487,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__ridx_gray));
    bufp->fullBit(oldp+9488,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__ridx_gray));
    bufp->fullBit(oldp+9489,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__ridx));
    bufp->fullBit(oldp+9490,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__valid));
    bufp->fullBit(oldp+9491,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__ridx));
    bufp->fullBit(oldp+9492,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__valid));
    bufp->fullBit(oldp+9493,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__ridx));
    bufp->fullBit(oldp+9494,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__valid));
    bufp->fullBit(oldp+9495,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__ridx));
    bufp->fullBit(oldp+9496,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__valid));
    bufp->fullBit(oldp+9497,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__ridx_gray))));
    bufp->fullBit(oldp+9498,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__ridx_gray) 
                                    >> 1U))));
    bufp->fullBit(oldp+9499,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__ridx_gray) 
                                    >> 2U))));
    bufp->fullBit(oldp+9500,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__ridx_gray) 
                                    >> 3U))));
    bufp->fullBit(oldp+9501,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__ridx_gray))));
    bufp->fullBit(oldp+9502,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__ridx_gray) 
                                    >> 1U))));
    bufp->fullBit(oldp+9503,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__ridx_gray) 
                                    >> 2U))));
    bufp->fullBit(oldp+9504,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__ridx_gray) 
                                    >> 3U))));
    bufp->fullBit(oldp+9505,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__ridx_gray))));
    bufp->fullBit(oldp+9506,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__ridx_gray) 
                                    >> 1U))));
    bufp->fullBit(oldp+9507,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__ridx_gray) 
                                    >> 2U))));
    bufp->fullBit(oldp+9508,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__ridx_gray) 
                                    >> 3U))));
    bufp->fullBit(oldp+9509,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__ridx_gray))));
    bufp->fullBit(oldp+9510,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__ridx_gray) 
                                    >> 1U))));
    bufp->fullBit(oldp+9511,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__ridx_gray) 
                                    >> 2U))));
    bufp->fullBit(oldp+9512,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__ridx_gray) 
                                    >> 3U))));
    bufp->fullBit(oldp+9513,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__ridx_gray))));
    bufp->fullBit(oldp+9514,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__ridx_gray) 
                                    >> 1U))));
    bufp->fullBit(oldp+9515,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__ridx_gray) 
                                    >> 2U))));
    bufp->fullBit(oldp+9516,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__ridx_gray) 
                                    >> 3U))));
    bufp->fullBit(oldp+9517,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__ridx_gray))));
    bufp->fullBit(oldp+9518,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__ridx_gray) 
                                    >> 1U))));
    bufp->fullBit(oldp+9519,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__ridx_gray) 
                                    >> 2U))));
    bufp->fullBit(oldp+9520,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__ridx_gray) 
                                    >> 3U))));
    bufp->fullBit(oldp+9521,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__ridx_gray))));
    bufp->fullBit(oldp+9522,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__ridx_gray) 
                                    >> 1U))));
    bufp->fullBit(oldp+9523,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__ridx_gray) 
                                    >> 2U))));
    bufp->fullBit(oldp+9524,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__ridx_gray) 
                                    >> 3U))));
    bufp->fullBit(oldp+9525,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__ridx_gray))));
    bufp->fullBit(oldp+9526,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__ridx_gray) 
                                    >> 1U))));
    bufp->fullBit(oldp+9527,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__ridx_gray) 
                                    >> 2U))));
    bufp->fullBit(oldp+9528,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__ridx_gray) 
                                    >> 3U))));
    bufp->fullBit(oldp+9529,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__ridx_gray))));
    bufp->fullBit(oldp+9530,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__ridx_gray) 
                                    >> 1U))));
    bufp->fullBit(oldp+9531,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__ridx_gray) 
                                    >> 2U))));
    bufp->fullBit(oldp+9532,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__ridx_gray) 
                                    >> 3U))));
    bufp->fullBit(oldp+9533,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__ridx_gray))));
    bufp->fullBit(oldp+9534,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__ridx_gray) 
                                    >> 1U))));
    bufp->fullBit(oldp+9535,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__ridx_gray) 
                                    >> 2U))));
    bufp->fullBit(oldp+9536,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__ridx_gray) 
                                    >> 3U))));
    bufp->fullIData(oldp+9537,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_data_in_w),32);
    bufp->fullSData(oldp+9538,((0xffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_data_in_w)),16);
    bufp->fullSData(oldp+9539,((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_data_in_w 
                                >> 0x10U)),16);
    bufp->fullBit(oldp+9540,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9541,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9542,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9543,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9544,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9545,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9546,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9547,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9548,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9549,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9550,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9551,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9552,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9553,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9554,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9555,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9556,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9557,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9558,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqa__DOT__io_deq_q__DOT__io_enq_ready_0));
    bufp->fullBit(oldp+9559,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqa__DOT__fq__DOT__do_flow));
    bufp->fullBit(oldp+9560,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqa__DOT__fq__DOT__do_enq));
    bufp->fullBit(oldp+9561,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqa__DOT__fq__DOT__do_deq));
    bufp->fullBit(oldp+9562,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqa__DOT__fq__DOT__ren));
    bufp->fullBit(oldp+9563,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqb__DOT__io_deq_q__DOT__io_enq_ready_0));
    bufp->fullBit(oldp+9564,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqb__DOT__fq__DOT__do_flow));
    bufp->fullBit(oldp+9565,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqb__DOT__fq__DOT__do_enq));
    bufp->fullBit(oldp+9566,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqb__DOT__fq__DOT__do_deq));
    bufp->fullBit(oldp+9567,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqb__DOT__fq__DOT__ren));
    bufp->fullBit(oldp+9568,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqc__DOT__io_deq_q__DOT__io_enq_ready_0));
    bufp->fullBit(oldp+9569,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqc__DOT__fq__DOT__do_flow));
    bufp->fullBit(oldp+9570,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqc__DOT__fq__DOT__do_enq));
    bufp->fullBit(oldp+9571,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqc__DOT__fq__DOT__do_deq));
    bufp->fullBit(oldp+9572,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqc__DOT__fq__DOT__ren));
    bufp->fullBit(oldp+9573,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqd__DOT__io_deq_q__DOT__io_enq_ready_0));
    bufp->fullBit(oldp+9574,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqd__DOT__fq__DOT__do_flow));
    bufp->fullBit(oldp+9575,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqd__DOT__fq__DOT__do_enq));
    bufp->fullBit(oldp+9576,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqd__DOT__fq__DOT__do_deq));
    bufp->fullBit(oldp+9577,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqd__DOT__fq__DOT__ren));
    bufp->fullBit(oldp+9578,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqe__DOT__io_deq_q__DOT__io_enq_ready_0));
    bufp->fullBit(oldp+9579,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqe__DOT__fq__DOT__do_flow));
    bufp->fullBit(oldp+9580,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqe__DOT__fq__DOT__do_enq));
    bufp->fullBit(oldp+9581,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqe__DOT__fq__DOT__do_deq));
    bufp->fullBit(oldp+9582,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqe__DOT__fq__DOT__ren));
    bufp->fullBit(oldp+9583,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9584,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9585,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9586,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9587,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9588,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9589,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9590,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9591,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9592,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9593,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9594,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9595,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9596,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9597,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9598,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9599,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9600,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9601,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9602,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9603,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9604,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9605,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9606,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9607,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9608,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9609,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9610,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9611,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9612,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9613,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9614,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9615,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9616,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9617,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9618,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9619,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9620,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9621,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9622,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9623,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9624,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9625,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9626,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9627,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9628,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9629,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9630,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9631,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9632,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9633,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9634,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9635,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9636,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9637,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9638,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9639,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9640,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9641,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9642,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9643,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9644,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9645,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9646,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqa__DOT__io_deq_q__DOT__io_enq_ready_0));
    bufp->fullBit(oldp+9647,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqa__DOT__fq__DOT__do_flow));
    bufp->fullBit(oldp+9648,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqa__DOT__fq__DOT__do_enq));
    bufp->fullBit(oldp+9649,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqa__DOT__fq__DOT__do_deq));
    bufp->fullBit(oldp+9650,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqa__DOT__fq__DOT__ren));
    bufp->fullBit(oldp+9651,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqb__DOT__io_deq_q__DOT__io_enq_ready_0));
    bufp->fullBit(oldp+9652,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqb__DOT__fq__DOT__do_flow));
    bufp->fullBit(oldp+9653,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqb__DOT__fq__DOT__do_enq));
    bufp->fullBit(oldp+9654,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqb__DOT__fq__DOT__do_deq));
    bufp->fullBit(oldp+9655,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqb__DOT__fq__DOT__ren));
    bufp->fullBit(oldp+9656,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqc__DOT__io_deq_q__DOT__io_enq_ready_0));
    bufp->fullBit(oldp+9657,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqc__DOT__fq__DOT__do_flow));
    bufp->fullBit(oldp+9658,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqc__DOT__fq__DOT__do_enq));
    bufp->fullBit(oldp+9659,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqc__DOT__fq__DOT__do_deq));
    bufp->fullBit(oldp+9660,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqc__DOT__fq__DOT__ren));
    bufp->fullBit(oldp+9661,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqd__DOT__io_deq_q__DOT__io_enq_ready_0));
    bufp->fullBit(oldp+9662,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqd__DOT__fq__DOT__do_flow));
    bufp->fullBit(oldp+9663,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqd__DOT__fq__DOT__do_enq));
    bufp->fullBit(oldp+9664,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqd__DOT__fq__DOT__do_deq));
    bufp->fullBit(oldp+9665,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqd__DOT__fq__DOT__ren));
    bufp->fullBit(oldp+9666,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqe__DOT__io_deq_q__DOT__io_enq_ready_0));
    bufp->fullBit(oldp+9667,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqe__DOT__fq__DOT__do_flow));
    bufp->fullBit(oldp+9668,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqe__DOT__fq__DOT__do_enq));
    bufp->fullBit(oldp+9669,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqe__DOT__fq__DOT__do_deq));
    bufp->fullBit(oldp+9670,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqe__DOT__fq__DOT__ren));
    bufp->fullBit(oldp+9671,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9672,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9673,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9674,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9675,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9676,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9677,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9678,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9679,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9680,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9681,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9682,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9683,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9684,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9685,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9686,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9687,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9688,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9689,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9690,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9691,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9692,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9693,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9694,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9695,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9696,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9697,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9698,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9699,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9700,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9701,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9702,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9703,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9704,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9705,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9706,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9707,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9708,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9709,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9710,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9711,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9712,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9713,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9714,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9715,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullCData(oldp+9716,(((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT____VdfgTmp_h299493e7__0)
                                 ? 0xfU : 0U)),4);
    bufp->fullCData(oldp+9717,(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd),8);
    bufp->fullIData(oldp+9718,(vlSelf->ysyxSoCFull__DOT__psram__DOT__addr),24);
    bufp->fullCData(oldp+9719,(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter),8);
    bufp->fullCData(oldp+9720,(vlSelf->ysyxSoCFull__DOT__psram__DOT__state),4);
    bufp->fullCData(oldp+9721,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__ridx),4);
    bufp->fullBit(oldp+9722,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__valid));
    bufp->fullCData(oldp+9723,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__ridx),4);
    bufp->fullBit(oldp+9724,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__valid));
    bufp->fullCData(oldp+9725,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__ridx),4);
    bufp->fullBit(oldp+9726,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__valid));
    bufp->fullCData(oldp+9727,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__ridx),4);
    bufp->fullBit(oldp+9728,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__valid));
    bufp->fullCData(oldp+9729,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__ridx),4);
    bufp->fullBit(oldp+9730,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__valid));
    bufp->fullCData(oldp+9731,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__ridx),4);
    bufp->fullBit(oldp+9732,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__valid));
    bufp->fullBit(oldp+9733,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9734,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9735,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9736,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9737,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9738,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9739,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9740,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9741,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9742,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9743,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9744,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9745,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9746,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9747,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9748,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9749,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9750,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9751,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9752,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9753,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9754,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9755,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9756,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9757,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9758,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9759,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9760,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9761,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9762,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9763,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9764,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9765,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9766,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9767,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9768,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9769,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9770,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9771,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9772,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9773,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9774,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullCData(oldp+9775,((0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.auto_out_awid))),4);
    bufp->fullBit(oldp+9776,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__nodeIn_a_ready));
    bufp->fullBit(oldp+9777,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___fixer_1_auto_anon_out_a_valid));
    bufp->fullBit(oldp+9778,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__in_0_a_ready));
    bufp->fullBit(oldp+9779,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__nodeOut_a_valid));
    bufp->fullCData(oldp+9780,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___atomics_auto_out_a_bits_opcode),3);
    bufp->fullCData(oldp+9781,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___atomics_auto_out_a_bits_param),3);
    bufp->fullCData(oldp+9782,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___atomics_auto_out_a_bits_size),3);
    bufp->fullCData(oldp+9783,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___atomics_auto_out_a_bits_source),7);
    bufp->fullIData(oldp+9784,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___atomics_auto_out_a_bits_address),32);
    bufp->fullCData(oldp+9785,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___atomics_auto_out_a_bits_mask),4);
    bufp->fullIData(oldp+9786,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___atomics_auto_out_a_bits_data),32);
    bufp->fullBit(oldp+9787,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__source_i_ready));
    bufp->fullBit(oldp+9788,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__source_i_valid));
    bufp->fullBit(oldp+9789,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__winner_1));
    bufp->fullBit(oldp+9790,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__muxState_1));
    bufp->fullCData(oldp+9791,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.auto_out_awid),5);
    bufp->fullCData(oldp+9792,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.auto_out_awecho_tl_state_size),4);
    bufp->fullCData(oldp+9793,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.auto_out_awecho_tl_state_source),7);
    bufp->fullBit(oldp+9794,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.auto_out_awid) 
                                    >> 4U))));
    bufp->fullBit(oldp+9795,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater__DOT__io_enq_ready_0));
    bufp->fullBit(oldp+9796,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__nodeOut_a_valid));
    bufp->fullCData(oldp+9797,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.auto_node_in_in_d_bits_param),2);
    bufp->fullCData(oldp+9798,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.auto_node_in_in_d_bits_sink),5);
    bufp->fullBit(oldp+9799,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__nodeIn_1_a_ready));
    bufp->fullBit(oldp+9800,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__stall));
    bufp->fullIData(oldp+9801,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__header),32);
    bufp->fullBit(oldp+9802,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__io_q_ready_0));
    bufp->fullBit(oldp+9803,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT___clr_T));
    bufp->fullBit(oldp+9804,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT___clr_T));
    bufp->fullBit(oldp+9805,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT___clr_T));
    bufp->fullBit(oldp+9806,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT___clr_T));
    bufp->fullBit(oldp+9807,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT___clr_T));
    bufp->fullBit(oldp+9808,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT___clr_T));
    bufp->fullBit(oldp+9809,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT___clr_T));
    bufp->fullBit(oldp+9810,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT___clr_T));
    bufp->fullBit(oldp+9811,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__io_i_ready_0));
    bufp->fullBit(oldp+9812,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___xbar_auto_anon_out_1_a_valid));
    bufp->fullSData(oldp+9813,((0x1fffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___atomics_auto_out_a_bits_address)),13);
    bufp->fullBit(oldp+9814,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__anonIn_a_ready));
    bufp->fullBit(oldp+9815,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+9816,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.auto_in_a_ready));
    bufp->fullBit(oldp+9817,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___xbar_auto_anon_out_0_a_valid));
    bufp->fullSData(oldp+9818,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.Queue17_BundleMap_1__DOT____Vcellinp__ram_ext__W0_data),12);
    bufp->fullSData(oldp+9819,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.Queue17_BundleMap_10__DOT____Vcellinp__ram_ext__W0_data),12);
    bufp->fullBit(oldp+9820,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__idStall_4));
    bufp->fullBit(oldp+9821,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__idStall_2));
    bufp->fullBit(oldp+9822,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__idStall_0));
    bufp->fullCData(oldp+9823,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__r_beats1),3);
    bufp->fullBit(oldp+9824,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__a_last));
    bufp->fullBit(oldp+9825,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__stall));
    bufp->fullBit(oldp+9826,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__out_arw_valid));
    bufp->fullBit(oldp+9827,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__inc));
    bufp->fullBit(oldp+9828,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__inc_1));
    bufp->fullBit(oldp+9829,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__inc_2));
    bufp->fullBit(oldp+9830,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__inc_3));
    bufp->fullBit(oldp+9831,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__inc_4));
    bufp->fullBit(oldp+9832,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__inc_5));
    bufp->fullBit(oldp+9833,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__inc_6));
    bufp->fullBit(oldp+9834,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                               >> 7U) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___inc_T_22))));
    bufp->fullBit(oldp+9835,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                               >> 8U) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___inc_T_22))));
    bufp->fullBit(oldp+9836,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                               >> 9U) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___inc_T_22))));
    bufp->fullBit(oldp+9837,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                               >> 0xaU) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___inc_T_22))));
    bufp->fullBit(oldp+9838,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                               >> 0xbU) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___inc_T_22))));
    bufp->fullBit(oldp+9839,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                               >> 0xcU) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___inc_T_22))));
    bufp->fullBit(oldp+9840,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                               >> 0xdU) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___inc_T_22))));
    bufp->fullBit(oldp+9841,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                               >> 0xeU) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___inc_T_22))));
    bufp->fullBit(oldp+9842,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                               >> 0xfU) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___inc_T_22))));
    bufp->fullBit(oldp+9843,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                               >> 0x10U) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___inc_T_22))));
    bufp->fullBit(oldp+9844,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                               >> 0x11U) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___inc_T_22))));
    bufp->fullBit(oldp+9845,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                               >> 0x12U) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___inc_T_22))));
    bufp->fullBit(oldp+9846,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                               >> 0x13U) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___inc_T_22))));
    bufp->fullBit(oldp+9847,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                               >> 0x14U) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___inc_T_22))));
    bufp->fullBit(oldp+9848,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                               >> 0x15U) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___inc_T_22))));
    bufp->fullBit(oldp+9849,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                               >> 0x16U) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___inc_T_22))));
    bufp->fullBit(oldp+9850,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__Vcellinp__nodeOut_wdeq_q__io_enq_valid));
    bufp->fullBit(oldp+9851,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__nodeOut_wdeq_q__DOT__do_enq));
    bufp->fullCData(oldp+9852,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__Vcellinp__queue_arw_deq_q__io_enq_bits_id),5);
    bufp->fullCData(oldp+9853,((0xffU & (~ (0x7fffU 
                                            & (((IData)(0x3ffU) 
                                                << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___atomics_auto_out_a_bits_size)) 
                                               >> 2U))))),8);
    bufp->fullCData(oldp+9854,(((0U != (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___atomics_auto_out_a_bits_size) 
                                              >> 1U)))
                                 ? 2U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___atomics_auto_out_a_bits_size))),3);
    bufp->fullCData(oldp+9855,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___atomics_auto_out_a_bits_size),4);
    bufp->fullBit(oldp+9856,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___atomics_auto_out_a_bits_opcode) 
                                       >> 2U)))));
    bufp->fullBit(oldp+9857,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___inc_T_22));
    bufp->fullBit(oldp+9858,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__bypass));
    bufp->fullBit(oldp+9859,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__stall));
    bufp->fullCData(oldp+9860,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__ridx),4);
    bufp->fullBit(oldp+9861,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__valid));
    bufp->fullBit(oldp+9862,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9863,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9864,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9865,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9866,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9867,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9868,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9869,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9870,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9871,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9872,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9873,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9874,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9875,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9876,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9877,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9878,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9879,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9880,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9881,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9882,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9883,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9884,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9885,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9886,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9887,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9888,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9889,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9890,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9891,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9892,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9893,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9894,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9895,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9896,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9897,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9898,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9899,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+9900,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9901,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9902,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+9903,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+9904,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.auto_out_awvalid));
    bufp->fullCData(oldp+9905,((0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.auto_out_awid))),4);
    bufp->fullIData(oldp+9906,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.auto_out_awaddr),32);
    bufp->fullCData(oldp+9907,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.auto_out_awlen),8);
    bufp->fullCData(oldp+9908,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.auto_out_awsize),3);
    bufp->fullBit(oldp+9909,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.auto_out_wvalid));
    bufp->fullIData(oldp+9910,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.auto_out_wdata),32);
    bufp->fullCData(oldp+9911,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.auto_out_wstrb),4);
    bufp->fullBit(oldp+9912,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.auto_out_wlast));
    bufp->fullBit(oldp+9913,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.auto_out_arvalid));
    bufp->fullBit(oldp+9914,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__nodeIn_a_ready));
    bufp->fullBit(oldp+9915,(vlSelf->ysyxSoCFull__DOT__fpga__DOT___fixer_1_auto_anon_out_a_valid));
    bufp->fullBit(oldp+9916,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__in_0_a_ready));
    bufp->fullBit(oldp+9917,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__nodeOut_a_valid));
    bufp->fullCData(oldp+9918,(vlSelf->ysyxSoCFull__DOT__fpga__DOT___atomics_auto_out_a_bits_opcode),3);
    bufp->fullCData(oldp+9919,(vlSelf->ysyxSoCFull__DOT__fpga__DOT___atomics_auto_out_a_bits_param),3);
    bufp->fullCData(oldp+9920,(vlSelf->ysyxSoCFull__DOT__fpga__DOT___atomics_auto_out_a_bits_size),4);
    bufp->fullCData(oldp+9921,(vlSelf->ysyxSoCFull__DOT__fpga__DOT___atomics_auto_out_a_bits_source),7);
    bufp->fullIData(oldp+9922,(vlSelf->ysyxSoCFull__DOT__fpga__DOT___atomics_auto_out_a_bits_address),32);
    bufp->fullCData(oldp+9923,(vlSelf->ysyxSoCFull__DOT__fpga__DOT___atomics_auto_out_a_bits_mask),4);
    bufp->fullIData(oldp+9924,(vlSelf->ysyxSoCFull__DOT__fpga__DOT___atomics_auto_out_a_bits_data),32);
    bufp->fullBit(oldp+9925,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__source_i_ready));
    bufp->fullBit(oldp+9926,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__source_i_valid));
    bufp->fullBit(oldp+9927,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__winner_1));
    bufp->fullBit(oldp+9928,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__muxState_1));
    bufp->fullBit(oldp+9929,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeIn_awready));
    bufp->fullBit(oldp+9930,(vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4yank_2_auto_in_wready));
    bufp->fullBit(oldp+9931,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4yank_2_auto_in_becho_real_last)))));
    bufp->fullBit(oldp+9932,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeIn_bvalid));
    bufp->fullBit(oldp+9933,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___q_bdeq_q_io_deq_bits_id));
    bufp->fullCData(oldp+9934,(vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4yank_2_auto_in_bresp),2);
    bufp->fullBit(oldp+9935,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__r_out_ready));
    bufp->fullBit(oldp+9936,(vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4frag_auto_in_rid));
    bufp->fullBit(oldp+9937,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.auto_anon_in_a_ready));
    bufp->fullBit(oldp+9938,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeOut_d_ready));
    bufp->fullBit(oldp+9939,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_valid));
    bufp->fullCData(oldp+9940,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_opcode),3);
    bufp->fullCData(oldp+9941,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_size),3);
    bufp->fullCData(oldp+9942,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_source),4);
    bufp->fullBit(oldp+9943,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_denied));
    bufp->fullIData(oldp+9944,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_data),32);
    bufp->fullBit(oldp+9945,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_corrupt));
    bufp->fullBit(oldp+9946,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__w_out_ready));
    bufp->fullCData(oldp+9947,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__d_resp),2);
    bufp->fullCData(oldp+9948,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__d_last_beats1),3);
    bufp->fullBit(oldp+9949,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__b_allow));
    bufp->fullBit(oldp+9950,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_valid) 
                              & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_opcode))));
    bufp->fullBit(oldp+9951,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_source) 
                                    >> 3U))));
    bufp->fullBit(oldp+9952,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT____Vcellinp__nodeIn_rdeq_q__io_enq_bits_last));
    bufp->fullBit(oldp+9953,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+9954,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT____Vcellinp__q_bdeq_q__io_enq_valid));
    bufp->fullBit(oldp+9955,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT____Vcellinp__q_bdeq_q__io_deq_ready));
    bufp->fullBit(oldp+9956,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+9957,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+9958,(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT___tl2axi4_1_auto_out_awvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____VdfgTmp_h3deb4dd1__0))));
    bufp->fullBit(oldp+9959,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+9960,(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT___tl2axi4_1_auto_out_arvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____VdfgTmp_h6bd82316__0))));
    bufp->fullBit(oldp+9961,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+9962,(vlSelf->ysyxSoCFull__DOT__fpga__DOT___tl2axi4_1_auto_out_awvalid));
    bufp->fullCData(oldp+9963,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___queue_arw_deq_q_io_deq_bits_id))),4);
    bufp->fullCData(oldp+9964,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___queue_arw_deq_q_io_deq_bits_echo_tl_state_size),4);
    bufp->fullCData(oldp+9965,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___queue_arw_deq_q_io_deq_bits_echo_tl_state_source),7);
    bufp->fullBit(oldp+9966,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___queue_arw_deq_q_io_deq_bits_id) 
                                    >> 4U))));
    bufp->fullBit(oldp+9967,(vlSelf->ysyxSoCFull__DOT__fpga__DOT___tl2axi4_1_auto_out_arvalid));
    bufp->fullBit(oldp+9968,(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4yank_2_auto_in_becho_real_last) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeIn_bvalid))));
    bufp->fullBit(oldp+9969,(vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4yank_2_auto_in_awready));
    bufp->fullBit(oldp+9970,(vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4yank_2_auto_in_becho_real_last));
    bufp->fullBit(oldp+9971,(vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4yank_2_auto_in_arready));
    bufp->fullBit(oldp+9972,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__in_awready));
    bufp->fullBit(oldp+9973,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.auto_out_awvalid));
    bufp->fullCData(oldp+9974,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.auto_out_awid),5);
    bufp->fullCData(oldp+9975,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.auto_out_awecho_tl_state_size),4);
    bufp->fullCData(oldp+9976,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.auto_out_awecho_tl_state_source),7);
    bufp->fullBit(oldp+9977,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.auto_out_arvalid));
    bufp->fullBit(oldp+9978,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.auto_out_awid) 
                                    >> 4U))));
    bufp->fullCData(oldp+9979,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___queue_arw_deq_q_io_deq_bits_id),5);
    bufp->fullBit(oldp+9980,(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_4) 
                              & ((IData)(1U) << (0xfU 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___queue_arw_deq_q_io_deq_bits_id))))));
    bufp->fullBit(oldp+9981,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap__DOT__do_enq));
    bufp->fullSData(oldp+9982,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_10__DOT____Vcellinp__ram_ext__W0_data),12);
    bufp->fullBit(oldp+9983,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_4) 
                                         & (((IData)(1U) 
                                             << (0xfU 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___queue_arw_deq_q_io_deq_bits_id))) 
                                            >> 1U)))));
    bufp->fullBit(oldp+9984,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_1__DOT__do_enq));
    bufp->fullBit(oldp+9985,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_12) 
                                         & (((IData)(1U) 
                                             << (0xfU 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___queue_arw_deq_q_io_deq_bits_id))) 
                                            >> 3U)))));
    bufp->fullBit(oldp+9986,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_10__DOT__do_enq));
    bufp->fullBit(oldp+9987,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_12) 
                                        & (((IData)(1U) 
                                            << (0xfU 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___queue_arw_deq_q_io_deq_bits_id))) 
                                           >> 4U)))));
    bufp->fullBit(oldp+9988,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_11__DOT__do_enq));
    bufp->fullBit(oldp+9989,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_12) 
                                        & (((IData)(1U) 
                                            << (0xfU 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___queue_arw_deq_q_io_deq_bits_id))) 
                                           >> 5U)))));
    bufp->fullBit(oldp+9990,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_12__DOT__do_enq));
    bufp->fullBit(oldp+9991,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_12) 
                                        & (((IData)(1U) 
                                            << (0xfU 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___queue_arw_deq_q_io_deq_bits_id))) 
                                           >> 6U)))));
    bufp->fullBit(oldp+9992,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_13__DOT__do_enq));
    bufp->fullBit(oldp+9993,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_4) 
                                         & (((IData)(1U) 
                                             << (0xfU 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___queue_arw_deq_q_io_deq_bits_id))) 
                                            >> 2U)))));
    bufp->fullBit(oldp+9994,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_2__DOT__do_enq));
    bufp->fullBit(oldp+9995,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_4) 
                                         & (((IData)(1U) 
                                             << (0xfU 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___queue_arw_deq_q_io_deq_bits_id))) 
                                            >> 3U)))));
    bufp->fullBit(oldp+9996,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_3__DOT__do_enq));
    bufp->fullBit(oldp+9997,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_4) 
                                        & (((IData)(1U) 
                                            << (0xfU 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___queue_arw_deq_q_io_deq_bits_id))) 
                                           >> 4U)))));
    bufp->fullBit(oldp+9998,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_4__DOT__do_enq));
    bufp->fullBit(oldp+9999,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_4) 
                                        & (((IData)(1U) 
                                            << (0xfU 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___queue_arw_deq_q_io_deq_bits_id))) 
                                           >> 5U)))));
    bufp->fullBit(oldp+10000,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_5__DOT__do_enq));
    bufp->fullBit(oldp+10001,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_4) 
                                         & (((IData)(1U) 
                                             << (0xfU 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___queue_arw_deq_q_io_deq_bits_id))) 
                                            >> 6U)))));
    bufp->fullBit(oldp+10002,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_6__DOT__do_enq));
    bufp->fullBit(oldp+10003,(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_12) 
                               & ((IData)(1U) << (0xfU 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___queue_arw_deq_q_io_deq_bits_id))))));
    bufp->fullBit(oldp+10004,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_7__DOT__do_enq));
    bufp->fullBit(oldp+10005,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_12) 
                                          & (((IData)(1U) 
                                              << (0xfU 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___queue_arw_deq_q_io_deq_bits_id))) 
                                             >> 1U)))));
    bufp->fullBit(oldp+10006,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_8__DOT__do_enq));
    bufp->fullBit(oldp+10007,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_12) 
                                          & (((IData)(1U) 
                                              << (0xfU 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___queue_arw_deq_q_io_deq_bits_id))) 
                                             >> 2U)))));
    bufp->fullBit(oldp+10008,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_9__DOT__do_enq));
    bufp->fullBit(oldp+10009,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_4) 
                                         & (((IData)(1U) 
                                             << (0xfU 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___queue_arw_deq_q_io_deq_bits_id))) 
                                            >> 7U)))));
    bufp->fullBit(oldp+10010,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_4) 
                                        & (((IData)(1U) 
                                            << (0xfU 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___queue_arw_deq_q_io_deq_bits_id))) 
                                           >> 8U)))));
    bufp->fullBit(oldp+10011,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_12) 
                                        & (((IData)(1U) 
                                            << (0xfU 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___queue_arw_deq_q_io_deq_bits_id))) 
                                           >> 8U)))));
    bufp->fullBit(oldp+10012,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_12) 
                                        & (((IData)(1U) 
                                            << (0xfU 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___queue_arw_deq_q_io_deq_bits_id))) 
                                           >> 9U)))));
    bufp->fullBit(oldp+10013,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_12) 
                                        & (((IData)(1U) 
                                            << (0xfU 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___queue_arw_deq_q_io_deq_bits_id))) 
                                           >> 0xaU)))));
    bufp->fullBit(oldp+10014,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_12) 
                                        & (((IData)(1U) 
                                            << (0xfU 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___queue_arw_deq_q_io_deq_bits_id))) 
                                           >> 0xbU)))));
    bufp->fullBit(oldp+10015,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_12) 
                                       & (((IData)(1U) 
                                           << (0xfU 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___queue_arw_deq_q_io_deq_bits_id))) 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+10016,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_12) 
                                     & (((IData)(1U) 
                                         << (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___queue_arw_deq_q_io_deq_bits_id))) 
                                        >> 0xdU)))));
    bufp->fullBit(oldp+10017,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_12) 
                                     & (((IData)(1U) 
                                         << (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___queue_arw_deq_q_io_deq_bits_id))) 
                                        >> 0xeU)))));
    bufp->fullBit(oldp+10018,(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_12) 
                               & (((IData)(1U) << (0xfU 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___queue_arw_deq_q_io_deq_bits_id))) 
                                  >> 0xfU))));
    bufp->fullBit(oldp+10019,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_4) 
                                        & (((IData)(1U) 
                                            << (0xfU 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___queue_arw_deq_q_io_deq_bits_id))) 
                                           >> 9U)))));
    bufp->fullBit(oldp+10020,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_4) 
                                        & (((IData)(1U) 
                                            << (0xfU 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___queue_arw_deq_q_io_deq_bits_id))) 
                                           >> 0xaU)))));
    bufp->fullBit(oldp+10021,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_4) 
                                        & (((IData)(1U) 
                                            << (0xfU 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___queue_arw_deq_q_io_deq_bits_id))) 
                                           >> 0xbU)))));
    bufp->fullBit(oldp+10022,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_4) 
                                       & (((IData)(1U) 
                                           << (0xfU 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___queue_arw_deq_q_io_deq_bits_id))) 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+10023,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_4) 
                                     & (((IData)(1U) 
                                         << (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___queue_arw_deq_q_io_deq_bits_id))) 
                                        >> 0xdU)))));
    bufp->fullBit(oldp+10024,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_4) 
                                     & (((IData)(1U) 
                                         << (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___queue_arw_deq_q_io_deq_bits_id))) 
                                        >> 0xeU)))));
    bufp->fullBit(oldp+10025,(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_4) 
                               & (((IData)(1U) << (0xfU 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___queue_arw_deq_q_io_deq_bits_id))) 
                                  >> 0xfU))));
    bufp->fullBit(oldp+10026,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_12) 
                                         & (((IData)(1U) 
                                             << (0xfU 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___queue_arw_deq_q_io_deq_bits_id))) 
                                            >> 7U)))));
    bufp->fullBit(oldp+10027,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT____Vcellinp__Queue4_BundleMap__io_enq_valid));
    bufp->fullBit(oldp+10028,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap__DOT__do_enq));
    bufp->fullBit(oldp+10029,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT____Vcellinp__Queue4_BundleMap_1__io_enq_valid));
    bufp->fullBit(oldp+10030,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_1__DOT__do_enq));
    bufp->fullBit(oldp+10031,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT____Vcellinp__Queue4_BundleMap_2__io_enq_valid));
    bufp->fullBit(oldp+10032,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT____Vcellinp__Queue4_BundleMap_2__io_deq_ready));
    bufp->fullBit(oldp+10033,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_2__DOT__do_deq));
    bufp->fullBit(oldp+10034,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_2__DOT__do_enq));
    bufp->fullBit(oldp+10035,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT____Vcellinp__Queue4_BundleMap_3__io_enq_valid));
    bufp->fullBit(oldp+10036,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT____Vcellinp__Queue4_BundleMap_3__io_deq_ready));
    bufp->fullBit(oldp+10037,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_3__DOT__do_deq));
    bufp->fullBit(oldp+10038,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_3__DOT__do_enq));
    bufp->fullBit(oldp+10039,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater__DOT__io_enq_ready_0));
    bufp->fullBit(oldp+10040,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__nodeOut_a_valid));
    bufp->fullBit(oldp+10041,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_in_in_a_ready));
    bufp->fullBit(oldp+10042,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_d_ready));
    bufp->fullBit(oldp+10043,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_in_in_d_valid));
    bufp->fullCData(oldp+10044,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_in_in_d_bits_opcode),3);
    bufp->fullCData(oldp+10045,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_in_in_d_bits_param),2);
    bufp->fullCData(oldp+10046,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_in_in_d_bits_size),3);
    bufp->fullCData(oldp+10047,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_in_in_d_bits_source),4);
    bufp->fullCData(oldp+10048,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_in_in_d_bits_sink),5);
    bufp->fullBit(oldp+10049,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_in_in_d_bits_denied));
    bufp->fullBit(oldp+10050,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_in_in_d_bits_corrupt));
    bufp->fullBit(oldp+10051,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__nodeIn_1_a_ready));
    bufp->fullBit(oldp+10052,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__stall));
    bufp->fullBit(oldp+10053,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_out_out_a_valid));
    bufp->fullBit(oldp+10054,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+10055,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__do_enq));
    bufp->fullIData(oldp+10056,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__header),32);
    bufp->fullBit(oldp+10057,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__io_q_ready_0));
    bufp->fullBit(oldp+10058,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT___clr_T));
    bufp->fullBit(oldp+10059,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT___clr_T));
    bufp->fullBit(oldp+10060,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT___clr_T));
    bufp->fullBit(oldp+10061,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT___clr_T));
    bufp->fullBit(oldp+10062,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT___clr_T));
    bufp->fullBit(oldp+10063,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT___clr_T));
    bufp->fullBit(oldp+10064,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT___clr_T));
    bufp->fullBit(oldp+10065,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT___clr_T));
    bufp->fullBit(oldp+10066,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__io_i_ready_0));
    bufp->fullBit(oldp+10067,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_ready));
    bufp->fullBit(oldp+10068,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__io_q_ready_0));
    bufp->fullBit(oldp+10069,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___clr_T));
    bufp->fullBit(oldp+10070,(vlSelf->ysyxSoCFull__DOT__fpga__DOT___xbar_auto_anon_out_2_a_valid));
    bufp->fullCData(oldp+10071,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT___atomics_auto_out_a_bits_size))),3);
    bufp->fullSData(oldp+10072,((0x1fffU & vlSelf->ysyxSoCFull__DOT__fpga__DOT___atomics_auto_out_a_bits_address)),13);
    bufp->fullBit(oldp+10073,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__anonIn_a_ready));
    bufp->fullBit(oldp+10074,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+10075,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__nodeIn_a_ready));
    bufp->fullBit(oldp+10076,(vlSelf->ysyxSoCFull__DOT__fpga__DOT___xbar_auto_anon_out_1_a_valid));
    bufp->fullIData(oldp+10077,((0x7fffffffU & vlSelf->ysyxSoCFull__DOT__fpga__DOT___atomics_auto_out_a_bits_address)),31);
    bufp->fullBit(oldp+10078,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_4));
    bufp->fullBit(oldp+10079,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_2));
    bufp->fullBit(oldp+10080,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_0));
    bufp->fullCData(oldp+10081,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__r_beats1),6);
    bufp->fullBit(oldp+10082,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__a_last));
    bufp->fullBit(oldp+10083,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__stall));
    bufp->fullBit(oldp+10084,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_valid));
    bufp->fullBit(oldp+10085,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__inc));
    bufp->fullBit(oldp+10086,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__inc_1));
    bufp->fullBit(oldp+10087,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__inc_2));
    bufp->fullBit(oldp+10088,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__inc_3));
    bufp->fullBit(oldp+10089,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__inc_4));
    bufp->fullBit(oldp+10090,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__inc_5));
    bufp->fullBit(oldp+10091,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__inc_6));
    bufp->fullBit(oldp+10092,(((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                >> 7U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T_22))));
    bufp->fullBit(oldp+10093,(((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                >> 8U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T_22))));
    bufp->fullBit(oldp+10094,(((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                >> 9U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T_22))));
    bufp->fullBit(oldp+10095,(((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                >> 0xaU) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T_22))));
    bufp->fullBit(oldp+10096,(((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                >> 0xbU) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T_22))));
    bufp->fullBit(oldp+10097,(((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                >> 0xcU) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T_22))));
    bufp->fullBit(oldp+10098,(((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                >> 0xdU) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T_22))));
    bufp->fullBit(oldp+10099,(((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                >> 0xeU) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T_22))));
    bufp->fullBit(oldp+10100,(((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                >> 0xfU) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T_22))));
    bufp->fullBit(oldp+10101,(((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                >> 0x10U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T_22))));
    bufp->fullBit(oldp+10102,(((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                >> 0x11U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T_22))));
    bufp->fullBit(oldp+10103,(((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                >> 0x12U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T_22))));
    bufp->fullBit(oldp+10104,(((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                >> 0x13U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T_22))));
    bufp->fullBit(oldp+10105,(((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                >> 0x14U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T_22))));
    bufp->fullBit(oldp+10106,(((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                >> 0x15U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T_22))));
    bufp->fullBit(oldp+10107,(((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                >> 0x16U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T_22))));
    bufp->fullBit(oldp+10108,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____Vcellinp__nodeOut_wdeq_q__io_enq_valid));
    bufp->fullBit(oldp+10109,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__do_enq));
    bufp->fullCData(oldp+10110,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id),5);
    bufp->fullCData(oldp+10111,((0xffU & (~ (0x7fffffU 
                                             & (((IData)(0x3ffU) 
                                                 << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT___atomics_auto_out_a_bits_size)) 
                                                >> 2U))))),8);
    bufp->fullCData(oldp+10112,(((0U != (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT___atomics_auto_out_a_bits_size) 
                                               >> 1U)))
                                  ? 2U : (7U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT___atomics_auto_out_a_bits_size)))),3);
    bufp->fullBit(oldp+10113,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgTmp_he7c815ba__0)))));
    bufp->fullBit(oldp+10114,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____Vcellinp__queue_arw_deq_q__io_deq_ready));
    bufp->fullBit(oldp+10115,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+10116,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___queue_arw_deq_q_io_deq_bits_wen));
    bufp->fullBit(oldp+10117,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_q__DOT__do_enq));
    bufp->fullBit(oldp+10118,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.auto_in_a_ready));
    bufp->fullBit(oldp+10119,(vlSelf->ysyxSoCFull__DOT__fpga__DOT___xbar_auto_anon_out_0_a_valid));
    bufp->fullBit(oldp+10120,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__requestAIO_0_1));
    bufp->fullBit(oldp+10121,((0U == (vlSelf->ysyxSoCFull__DOT__fpga__DOT___atomics_auto_out_a_bits_address 
                                      >> 0x1eU))));
    bufp->fullBit(oldp+10122,(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__nodeOut_awvalid));
    bufp->fullIData(oldp+10123,((~ (((~ (vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__addr_1 
                                         >> 2U)) << 2U) 
                                    | (3U & ((~ ((IData)(3U) 
                                                 << (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size))) 
                                             | (~ vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__addr_1)))))),32);
    bufp->fullCData(oldp+10124,(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size),3);
    bufp->fullBit(oldp+10125,((1U & (~ (IData)((0U 
                                                != (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__len_1)))))));
    bufp->fullBit(oldp+10126,(((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT____VdfgTmp_ha2215a43__0))));
    bufp->fullBit(oldp+10127,(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0));
    bufp->fullIData(oldp+10128,((~ (((~ (vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__addr 
                                         >> 2U)) << 2U) 
                                    | (3U & ((~ ((IData)(3U) 
                                                 << (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT___deq_q_io_deq_bits_size))) 
                                             | (~ vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__addr)))))),32);
    bufp->fullCData(oldp+10129,(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT___deq_q_io_deq_bits_size),3);
    bufp->fullBit(oldp+10130,((1U & (~ (IData)((0U 
                                                != (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__len)))))));
    bufp->fullBit(oldp+10131,(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__do_enq));
    bufp->fullBit(oldp+10132,(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+10133,(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT___wcounter_T));
    bufp->fullCData(oldp+10134,(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__len),8);
    bufp->fullIData(oldp+10135,(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__addr),32);
    bufp->fullCData(oldp+10136,(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__len_1),8);
    bufp->fullIData(oldp+10137,(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__addr_1),32);
    bufp->fullBit(oldp+10138,(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__wbeats_valid));
    bufp->fullBit(oldp+10139,(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready));
    bufp->fullIData(oldp+10140,(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr),32);
    bufp->fullCData(oldp+10141,(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT___deq_q_io_deq_bits_len),8);
    bufp->fullBit(oldp+10142,(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q__DOT__do_enq));
    bufp->fullBit(oldp+10143,(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready));
    bufp->fullBit(oldp+10144,(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
    bufp->fullIData(oldp+10145,(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr),32);
    bufp->fullCData(oldp+10146,(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len),8);
    bufp->fullBit(oldp+10147,(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq));
    bufp->fullBit(oldp+10148,(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready));
    bufp->fullBit(oldp+10149,(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+10150,(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+10151,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_ready));
    bufp->fullCData(oldp+10152,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_param),2);
    bufp->fullCData(oldp+10153,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_sink),6);
    bufp->fullBit(oldp+10154,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_1_d_ready));
    bufp->fullCData(oldp+10155,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.__PVT__readys_valid),2);
    bufp->fullCData(oldp+10156,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.__PVT__readys_unready),4);
    bufp->fullCData(oldp+10157,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.__PVT__readys_readys),2);
    bufp->fullBit(oldp+10158,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.__PVT__winner_0));
    bufp->fullBit(oldp+10159,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.__PVT__winner_1));
    bufp->fullBit(oldp+10160,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.__PVT__muxState_0));
    bufp->fullBit(oldp+10161,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.__PVT__muxState_1));
    bufp->fullBit(oldp+10162,((6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_opcode))));
    bufp->fullBit(oldp+10163,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__ferr.__PVT__da_ready));
    bufp->fullBit(oldp+10164,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__ferr.__PVT__a_q_io_deq_ready));
    bufp->fullBit(oldp+10165,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT___GEN_4) 
                               & ((IData)(1U) << (0xfU 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.auto_out_awid))))));
    bufp->fullBit(oldp+10166,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue17_BundleMap__DOT__do_enq));
    bufp->fullSData(oldp+10167,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.Queue17_BundleMap_1__DOT____Vcellinp__ram_ext__W0_data),12);
    bufp->fullBit(oldp+10168,((0x7fffU & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT___GEN_4) 
                                          & (((IData)(1U) 
                                              << (0xfU 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.auto_out_awid))) 
                                             >> 1U)))));
    bufp->fullBit(oldp+10169,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue17_BundleMap_1__DOT__do_enq));
    bufp->fullBit(oldp+10170,((0x1fffU & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT___GEN_12) 
                                          & (((IData)(1U) 
                                              << (0xfU 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.auto_out_awid))) 
                                             >> 3U)))));
    bufp->fullBit(oldp+10171,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue17_BundleMap_10__DOT__do_enq));
    bufp->fullSData(oldp+10172,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.Queue17_BundleMap_10__DOT____Vcellinp__ram_ext__W0_data),12);
    bufp->fullBit(oldp+10173,((0xfffU & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT___GEN_12) 
                                         & (((IData)(1U) 
                                             << (0xfU 
                                                 & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.auto_out_awid))) 
                                            >> 4U)))));
    bufp->fullBit(oldp+10174,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue17_BundleMap_11__DOT__do_enq));
    bufp->fullBit(oldp+10175,((0x7ffU & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT___GEN_12) 
                                         & (((IData)(1U) 
                                             << (0xfU 
                                                 & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.auto_out_awid))) 
                                            >> 5U)))));
    bufp->fullBit(oldp+10176,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue17_BundleMap_12__DOT__do_enq));
    bufp->fullBit(oldp+10177,((0x3ffU & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT___GEN_12) 
                                         & (((IData)(1U) 
                                             << (0xfU 
                                                 & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.auto_out_awid))) 
                                            >> 6U)))));
    bufp->fullBit(oldp+10178,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue17_BundleMap_13__DOT__do_enq));
    bufp->fullBit(oldp+10179,((0x3fffU & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT___GEN_4) 
                                          & (((IData)(1U) 
                                              << (0xfU 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.auto_out_awid))) 
                                             >> 2U)))));
    bufp->fullBit(oldp+10180,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue17_BundleMap_2__DOT__do_enq));
    bufp->fullBit(oldp+10181,((0x1fffU & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT___GEN_4) 
                                          & (((IData)(1U) 
                                              << (0xfU 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.auto_out_awid))) 
                                             >> 3U)))));
    bufp->fullBit(oldp+10182,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue17_BundleMap_3__DOT__do_enq));
    bufp->fullBit(oldp+10183,((0xfffU & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT___GEN_4) 
                                         & (((IData)(1U) 
                                             << (0xfU 
                                                 & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.auto_out_awid))) 
                                            >> 4U)))));
    bufp->fullBit(oldp+10184,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue17_BundleMap_4__DOT__do_enq));
    bufp->fullBit(oldp+10185,((0x7ffU & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT___GEN_4) 
                                         & (((IData)(1U) 
                                             << (0xfU 
                                                 & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.auto_out_awid))) 
                                            >> 5U)))));
    bufp->fullBit(oldp+10186,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue17_BundleMap_5__DOT__do_enq));
    bufp->fullBit(oldp+10187,((0x3ffU & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT___GEN_4) 
                                         & (((IData)(1U) 
                                             << (0xfU 
                                                 & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.auto_out_awid))) 
                                            >> 6U)))));
    bufp->fullBit(oldp+10188,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue17_BundleMap_6__DOT__do_enq));
    bufp->fullBit(oldp+10189,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT___GEN_12) 
                               & ((IData)(1U) << (0xfU 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.auto_out_awid))))));
    bufp->fullBit(oldp+10190,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue17_BundleMap_7__DOT__do_enq));
    bufp->fullBit(oldp+10191,((0x7fffU & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT___GEN_12) 
                                          & (((IData)(1U) 
                                              << (0xfU 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.auto_out_awid))) 
                                             >> 1U)))));
    bufp->fullBit(oldp+10192,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue17_BundleMap_8__DOT__do_enq));
    bufp->fullBit(oldp+10193,((0x3fffU & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT___GEN_12) 
                                          & (((IData)(1U) 
                                              << (0xfU 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.auto_out_awid))) 
                                             >> 2U)))));
    bufp->fullBit(oldp+10194,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__Queue17_BundleMap_9__DOT__do_enq));
    bufp->fullBit(oldp+10195,((0x1ffU & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT___GEN_4) 
                                         & (((IData)(1U) 
                                             << (0xfU 
                                                 & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.auto_out_awid))) 
                                            >> 7U)))));
    bufp->fullBit(oldp+10196,((0xffU & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT___GEN_4) 
                                        & (((IData)(1U) 
                                            << (0xfU 
                                                & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.auto_out_awid))) 
                                           >> 8U)))));
    bufp->fullBit(oldp+10197,((0xffU & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT___GEN_12) 
                                        & (((IData)(1U) 
                                            << (0xfU 
                                                & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.auto_out_awid))) 
                                           >> 8U)))));
    bufp->fullBit(oldp+10198,((0x7fU & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT___GEN_12) 
                                        & (((IData)(1U) 
                                            << (0xfU 
                                                & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.auto_out_awid))) 
                                           >> 9U)))));
    bufp->fullBit(oldp+10199,((0x3fU & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT___GEN_12) 
                                        & (((IData)(1U) 
                                            << (0xfU 
                                                & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.auto_out_awid))) 
                                           >> 0xaU)))));
    bufp->fullBit(oldp+10200,((0x1fU & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT___GEN_12) 
                                        & (((IData)(1U) 
                                            << (0xfU 
                                                & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.auto_out_awid))) 
                                           >> 0xbU)))));
    bufp->fullBit(oldp+10201,((0xfU & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT___GEN_12) 
                                       & (((IData)(1U) 
                                           << (0xfU 
                                               & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.auto_out_awid))) 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+10202,((7U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT___GEN_12) 
                                     & (((IData)(1U) 
                                         << (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.auto_out_awid))) 
                                        >> 0xdU)))));
    bufp->fullBit(oldp+10203,((3U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT___GEN_12) 
                                     & (((IData)(1U) 
                                         << (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.auto_out_awid))) 
                                        >> 0xeU)))));
    bufp->fullBit(oldp+10204,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT___GEN_12) 
                               & (((IData)(1U) << (0xfU 
                                                   & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.auto_out_awid))) 
                                  >> 0xfU))));
    bufp->fullBit(oldp+10205,((0x7fU & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT___GEN_4) 
                                        & (((IData)(1U) 
                                            << (0xfU 
                                                & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.auto_out_awid))) 
                                           >> 9U)))));
    bufp->fullBit(oldp+10206,((0x3fU & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT___GEN_4) 
                                        & (((IData)(1U) 
                                            << (0xfU 
                                                & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.auto_out_awid))) 
                                           >> 0xaU)))));
    bufp->fullBit(oldp+10207,((0x1fU & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT___GEN_4) 
                                        & (((IData)(1U) 
                                            << (0xfU 
                                                & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.auto_out_awid))) 
                                           >> 0xbU)))));
    bufp->fullBit(oldp+10208,((0xfU & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT___GEN_4) 
                                       & (((IData)(1U) 
                                           << (0xfU 
                                               & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.auto_out_awid))) 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+10209,((7U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT___GEN_4) 
                                     & (((IData)(1U) 
                                         << (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.auto_out_awid))) 
                                        >> 0xdU)))));
    bufp->fullBit(oldp+10210,((3U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT___GEN_4) 
                                     & (((IData)(1U) 
                                         << (0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.auto_out_awid))) 
                                        >> 0xeU)))));
    bufp->fullBit(oldp+10211,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT___GEN_4) 
                               & (((IData)(1U) << (0xfU 
                                                   & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.auto_out_awid))) 
                                  >> 0xfU))));
    bufp->fullBit(oldp+10212,((0x1ffU & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT___GEN_12) 
                                         & (((IData)(1U) 
                                             << (0xfU 
                                                 & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.auto_out_awid))) 
                                            >> 7U)))));
    bufp->fullBit(oldp+10213,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__idStall_4));
    bufp->fullBit(oldp+10214,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__idStall_2));
    bufp->fullBit(oldp+10215,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__idStall_0));
    bufp->fullCData(oldp+10216,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__r_beats1),3);
    bufp->fullBit(oldp+10217,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__a_last));
    bufp->fullBit(oldp+10218,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__stall));
    bufp->fullBit(oldp+10219,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__out_arw_valid));
    bufp->fullBit(oldp+10220,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__inc));
    bufp->fullBit(oldp+10221,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__inc_1));
    bufp->fullBit(oldp+10222,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__inc_2));
    bufp->fullBit(oldp+10223,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__inc_3));
    bufp->fullBit(oldp+10224,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__inc_4));
    bufp->fullBit(oldp+10225,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__inc_5));
    bufp->fullBit(oldp+10226,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__inc_6));
    bufp->fullBit(oldp+10227,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                >> 7U) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___inc_T_22))));
    bufp->fullBit(oldp+10228,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                >> 8U) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___inc_T_22))));
    bufp->fullBit(oldp+10229,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                >> 9U) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___inc_T_22))));
    bufp->fullBit(oldp+10230,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                >> 0xaU) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___inc_T_22))));
    bufp->fullBit(oldp+10231,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                >> 0xbU) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___inc_T_22))));
    bufp->fullBit(oldp+10232,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                >> 0xcU) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___inc_T_22))));
    bufp->fullBit(oldp+10233,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                >> 0xdU) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___inc_T_22))));
    bufp->fullBit(oldp+10234,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                >> 0xeU) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___inc_T_22))));
    bufp->fullBit(oldp+10235,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                >> 0xfU) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___inc_T_22))));
    bufp->fullBit(oldp+10236,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                >> 0x10U) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___inc_T_22))));
    bufp->fullBit(oldp+10237,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                >> 0x11U) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___inc_T_22))));
    bufp->fullBit(oldp+10238,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                >> 0x12U) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___inc_T_22))));
    bufp->fullBit(oldp+10239,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                >> 0x13U) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___inc_T_22))));
    bufp->fullBit(oldp+10240,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                >> 0x14U) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___inc_T_22))));
    bufp->fullBit(oldp+10241,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                >> 0x15U) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___inc_T_22))));
    bufp->fullBit(oldp+10242,(((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                                >> 0x16U) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___inc_T_22))));
    bufp->fullBit(oldp+10243,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__Vcellinp__nodeOut_wdeq_q__io_enq_valid));
    bufp->fullBit(oldp+10244,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__nodeOut_wdeq_q__DOT__do_enq));
    bufp->fullCData(oldp+10245,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__Vcellinp__queue_arw_deq_q__io_enq_bits_id),5);
    bufp->fullCData(oldp+10246,((0xffU & (~ (0x7fffU 
                                             & (((IData)(0x3ffU) 
                                                 << 
                                                 (7U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT___atomics_auto_out_a_bits_size))) 
                                                >> 2U))))),8);
    bufp->fullCData(oldp+10247,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__Vcellinp__queue_arw_deq_q__io_enq_bits_size),3);
    bufp->fullCData(oldp+10248,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT___atomics_auto_out_a_bits_size))),4);
    bufp->fullBit(oldp+10249,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT___atomics_auto_out_a_bits_opcode) 
                                        >> 2U)))));
    bufp->fullBit(oldp+10250,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__Vcellinp__queue_arw_deq_q__io_deq_ready));
    bufp->fullBit(oldp+10251,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__queue_arw_deq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+10252,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_wen));
    bufp->fullBit(oldp+10253,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__queue_arw_deq_q__DOT__do_enq));
    bufp->fullBit(oldp+10254,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__nodeIn_a_ready));
    bufp->fullBit(oldp+10255,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT___bar_auto_out_0_a_valid));
    bufp->fullBit(oldp+10256,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT___bar_auto_out_0_d_ready));
    bufp->fullBit(oldp+10257,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__nodeIn_d_valid));
    bufp->fullCData(oldp+10258,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error__DOT___nodeIn_d_bits_T_24),3);
    bufp->fullCData(oldp+10259,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error__DOT___nodeIn_d_bits_T_19),4);
    bufp->fullCData(oldp+10260,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error__DOT___nodeIn_d_bits_T_16),4);
    bufp->fullBit(oldp+10261,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__muxState_1));
    bufp->fullBit(oldp+10262,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error__DOT___nodeIn_d_bits_T_3));
    bufp->fullBit(oldp+10263,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__bypass));
    bufp->fullBit(oldp+10264,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__stall));
    bufp->fullBit(oldp+10265,((6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_in_in_d_bits_opcode))));
    bufp->fullBit(oldp+10266,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__da_ready));
    bufp->fullBit(oldp+10267,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__winner_1));
    bufp->fullBit(oldp+10268,((6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error__DOT___nodeIn_d_bits_T_24))));
    bufp->fullCData(oldp+10269,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__ridx),4);
    bufp->fullBit(oldp+10270,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__valid));
    bufp->fullCData(oldp+10271,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__ridx),4);
    bufp->fullBit(oldp+10272,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__valid));
    bufp->fullBit(oldp+10273,(vlSelf->clock));
    bufp->fullBit(oldp+10274,(vlSelf->reset));
    bufp->fullSData(oldp+10275,(vlSelf->externalPins_gpio_out),16);
    bufp->fullSData(oldp+10276,(vlSelf->externalPins_gpio_in),16);
    bufp->fullCData(oldp+10277,(vlSelf->externalPins_gpio_seg_0),8);
    bufp->fullCData(oldp+10278,(vlSelf->externalPins_gpio_seg_1),8);
    bufp->fullCData(oldp+10279,(vlSelf->externalPins_gpio_seg_2),8);
    bufp->fullCData(oldp+10280,(vlSelf->externalPins_gpio_seg_3),8);
    bufp->fullCData(oldp+10281,(vlSelf->externalPins_gpio_seg_4),8);
    bufp->fullCData(oldp+10282,(vlSelf->externalPins_gpio_seg_5),8);
    bufp->fullCData(oldp+10283,(vlSelf->externalPins_gpio_seg_6),8);
    bufp->fullCData(oldp+10284,(vlSelf->externalPins_gpio_seg_7),8);
    bufp->fullBit(oldp+10285,(vlSelf->externalPins_ps2_clk));
    bufp->fullBit(oldp+10286,(vlSelf->externalPins_ps2_data));
    bufp->fullCData(oldp+10287,(vlSelf->externalPins_vga_r),8);
    bufp->fullCData(oldp+10288,(vlSelf->externalPins_vga_g),8);
    bufp->fullCData(oldp+10289,(vlSelf->externalPins_vga_b),8);
    bufp->fullBit(oldp+10290,(vlSelf->externalPins_vga_hsync));
    bufp->fullBit(oldp+10291,(vlSelf->externalPins_vga_vsync));
    bufp->fullBit(oldp+10292,(vlSelf->externalPins_vga_valid));
    bufp->fullBit(oldp+10293,(vlSelf->externalPins_uart_rx));
    bufp->fullBit(oldp+10294,(vlSelf->externalPins_uart_tx));
    bufp->fullBit(oldp+10295,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__io_c2b_rst_reg__DOT__reg_0));
    bufp->fullBit(oldp+10296,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__io_c2b_rst_reg__DOT__reg_0));
    bufp->fullBit(oldp+10297,(((IData)(vlSelf->ysyxSoCFull__DOT___bitrev_miso) 
                               & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                  | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                       & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                       ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                       : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                     >> 0x1fU)))));
    bufp->fullCData(oldp+10298,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__din),4);
    bufp->fullBit(oldp+10299,((1U & (~ (IData)(vlSelf->clock)))));
    bufp->fullBit(oldp+10300,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                                 : (0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel))));
    bufp->fullIData(oldp+10301,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel)
                                  ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                      << 0x18U) | (
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                    << 0x10U) 
                                                   | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                       << 8U) 
                                                      | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                  : 0U)),32);
    bufp->fullIData(oldp+10302,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                  ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                  : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)),32);
    bufp->fullCData(oldp+10303,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
                                       | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15) 
                                            << 0x1eU) 
                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14) 
                                               << 0x1cU) 
                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13) 
                                                  << 0x1aU) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12) 
                                                     << 0x18U) 
                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11) 
                                                        << 0x16U) 
                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10) 
                                                           << 0x14U) 
                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9) 
                                                              << 0x12U) 
                                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8) 
                                                                 << 0x10U) 
                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7) 
                                                                    << 0xeU) 
                                                                   | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6) 
                                                                       << 0xcU) 
                                                                      | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5) 
                                                                          << 0xaU) 
                                                                         | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4) 
                                                                             << 8U) 
                                                                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3) 
                                                                                << 6U) 
                                                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1) 
                                                                                << 2U) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0)))))))))))))))) 
                                          >> (0x1fU 
                                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9) 
                                                 << 1U)))))),2);
    bufp->fullIData(oldp+10304,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                   ? ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                       ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                       : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)
                                   : 0U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1)
                                              ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r
                                              : 0U) 
                                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                                ? (
                                                   (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                      ? 
                                                     ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                       ? 
                                                      (vlSelf->__VdfgTmp_hf132a334__0 
                                                       >> 0x18U)
                                                       : 0U)
                                                      : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3)) 
                                                    << 0x18U) 
                                                   | ((0xff0000U 
                                                       & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                            ? 
                                                           ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                             ? 
                                                            (vlSelf->__VdfgTmp_hf132a334__0 
                                                             >> 0x10U)
                                                             : 0U)
                                                            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2)) 
                                                          << 0x10U)) 
                                                      | ((0xff00U 
                                                          & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                               ? 
                                                              ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                                ? 
                                                               (vlSelf->__VdfgTmp_hf132a334__0 
                                                                >> 8U)
                                                                : 0U)
                                                               : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1)) 
                                                             << 8U)) 
                                                         | (0xffU 
                                                            & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                                ? 
                                                               ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                                 ? vlSelf->__VdfgTmp_hf132a334__0
                                                                 : 0U)
                                                                : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0))))))
                                                : 0U)))),32);
    bufp->fullCData(oldp+10305,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                   ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold)
                                   : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                             ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                 ? 0U
                                                 : 3U)
                                             : 0U))),2);
    bufp->fullBit(oldp+10306,((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
                                  << 0xfU) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last) 
                                               << 0xeU) 
                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last) 
                                                  << 0xdU) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last) 
                                                     << 0xcU) 
                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last) 
                                                        << 0xbU) 
                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last) 
                                                           << 0xaU) 
                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last) 
                                                              << 9U) 
                                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last) 
                                                                 << 8U) 
                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last) 
                                                                    << 7U) 
                                                                   | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last) 
                                                                       << 6U) 
                                                                      | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last) 
                                                                          << 5U) 
                                                                         | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last) 
                                                                             << 4U) 
                                                                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last) 
                                                                                << 3U) 
                                                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last)))))))))))))))) 
                                >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))));
    bufp->fullBit(oldp+10307,((1U & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
                                       << 0xfU) | (
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last) 
                                                    << 0xeU) 
                                                   | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last) 
                                                       << 0xdU) 
                                                      | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last) 
                                                          << 0xcU) 
                                                         | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last) 
                                                             << 0xbU) 
                                                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last) 
                                                                << 0xaU) 
                                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last) 
                                                                   << 9U) 
                                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last) 
                                                                      << 8U) 
                                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last) 
                                                                         << 7U) 
                                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last) 
                                                                            << 6U) 
                                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last) 
                                                                               << 5U) 
                                                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last)))))))))))))))) 
                                     >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)))));
    bufp->fullCData(oldp+10308,((3U & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                                          ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_0)
                                          : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0))
                                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
                                            | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15) 
                                                 << 0x1eU) 
                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14) 
                                                    << 0x1cU) 
                                                   | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13) 
                                                       << 0x1aU) 
                                                      | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12) 
                                                          << 0x18U) 
                                                         | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11) 
                                                             << 0x16U) 
                                                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10) 
                                                                << 0x14U) 
                                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9) 
                                                                   << 0x12U) 
                                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8) 
                                                                      << 0x10U) 
                                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7) 
                                                                         << 0xeU) 
                                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6) 
                                                                            << 0xcU) 
                                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5) 
                                                                               << 0xaU) 
                                                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1) 
                                                                                << 2U) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0)))))))))))))))) 
                                               >> (0x1fU 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9) 
                                                      << 1U))))
                                         : 0U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_1)
                                                    : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_1))
                                                   ? 
                                                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4yank_auto_in_bresp) 
                                                   | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___q_bdeq_q_io_deq_bits_id)
                                                       ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__error_1)
                                                       : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__error_0)))
                                                   : 0U)))),2);
    bufp->fullIData(oldp+10309,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
                                   ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                        ? ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                            ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                            : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)
                                        : 0U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1)
                                                   ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r
                                                   : 0U) 
                                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                                     ? 
                                                    ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                        ? 
                                                       ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                         ? 
                                                        (vlSelf->__VdfgTmp_hf132a334__0 
                                                         >> 0x18U)
                                                         : 0U)
                                                        : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3)) 
                                                      << 0x18U) 
                                                     | ((0xff0000U 
                                                         & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                              ? 
                                                             ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                               ? 
                                                              (vlSelf->__VdfgTmp_hf132a334__0 
                                                               >> 0x10U)
                                                               : 0U)
                                                              : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2)) 
                                                            << 0x10U)) 
                                                        | ((0xff00U 
                                                            & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                                 ? 
                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                                  ? 
                                                                 (vlSelf->__VdfgTmp_hf132a334__0 
                                                                  >> 8U)
                                                                  : 0U)
                                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1)) 
                                                               << 8U)) 
                                                           | (0xffU 
                                                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                                  ? 
                                                                 ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                                   ? vlSelf->__VdfgTmp_hf132a334__0
                                                                   : 0U)
                                                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0))))))
                                                     : 0U)))
                                   : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1)
                                             ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__full)
                                                 ? (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__ram 
                                                            >> 3U))
                                                 : vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_data)
                                             : 0U))),32);
    bufp->fullCData(oldp+10310,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
                                         ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold)
                                              : 0U) 
                                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                    ? 0U
                                                    : 3U)
                                                : 0U))
                                         : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1)
                                                   ? 
                                                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__full)
                                                    ? (IData)(
                                                              (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__ram 
                                                               >> 1U))
                                                    : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__d_resp))
                                                   : 0U)))),2);
    bufp->fullBit(oldp+10311,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready) 
                               & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                                   ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
                                      >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1)))));
    bufp->fullBit(oldp+10312,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__do_bypass));
    bufp->fullBit(oldp+10313,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0));
    bufp->fullBit(oldp+10314,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__q_grant) 
                               & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__d_first) 
                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__xmit) 
                                     & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_ready) 
                                        & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.io_deq_valid)))))));
    bufp->fullBit(oldp+10315,(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset));
    bufp->fullCData(oldp+10316,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__read_state))
                                  ? ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                      ? 0U : (3U & 
                                              ((2U 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                                    ? 0U
                                                    : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_rresp))
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                                    ? 
                                                   (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
                                                      ? 
                                                     (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold)
                                                        : 0U) 
                                                      | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                                          ? 
                                                         ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                           ? 0U
                                                           : 3U)
                                                          : 0U))
                                                      : 0U) 
                                                    | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1)
                                                        ? 
                                                       ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__full)
                                                         ? (IData)(
                                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__ram 
                                                                    >> 1U))
                                                         : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__d_resp))
                                                        : 0U))
                                                    : 0U))))
                                  : 0U)),2);
    bufp->fullCData(oldp+10317,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__write_state))
                                  ? ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                      ? 0U : (3U & 
                                              ((2U 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                                    ? 0U
                                                    : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_bresp))
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                                    ? 
                                                   ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                                                       ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_0)
                                                       : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0))
                                                      ? 
                                                     ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
                                                      | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15) 
                                                           << 0x1eU) 
                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14) 
                                                              << 0x1cU) 
                                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13) 
                                                                 << 0x1aU) 
                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12) 
                                                                    << 0x18U) 
                                                                   | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11) 
                                                                       << 0x16U) 
                                                                      | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10) 
                                                                          << 0x14U) 
                                                                         | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9) 
                                                                             << 0x12U) 
                                                                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8) 
                                                                                << 0x10U) 
                                                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1) 
                                                                                << 2U) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0)))))))))))))))) 
                                                         >> 
                                                         (0x1fU 
                                                          & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9) 
                                                             << 1U))))
                                                      : 0U) 
                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                                                         ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_1)
                                                         : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_1))
                                                        ? 
                                                       ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4yank_auto_in_bresp) 
                                                        | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___q_bdeq_q_io_deq_bits_id)
                                                            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__error_1)
                                                            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__error_0)))
                                                        : 0U))
                                                    : 0U))))
                                  : 0U)),2);
    bufp->fullCData(oldp+10318,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__read_state))
                                  ? ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                      ? 0U : (3U & 
                                              ((2U 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                                    ? 0U
                                                    : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_rresp))
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                                    ? 
                                                   (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
                                                      ? 
                                                     (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold)
                                                        : 0U) 
                                                      | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                                          ? 
                                                         ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                           ? 0U
                                                           : 3U)
                                                          : 0U))
                                                      : 0U) 
                                                    | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1)
                                                        ? 
                                                       ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__full)
                                                         ? (IData)(
                                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__ram 
                                                                    >> 1U))
                                                         : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__d_resp))
                                                        : 0U))
                                                    : 0U))))
                                  : 0U)),2);
    bufp->fullCData(oldp+10319,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__write_state))
                                  ? ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                      ? 0U : (3U & 
                                              ((2U 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                                    ? 0U
                                                    : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_bresp))
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                                    ? 
                                                   ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                                                       ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_0)
                                                       : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0))
                                                      ? 
                                                     ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
                                                      | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15) 
                                                           << 0x1eU) 
                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14) 
                                                              << 0x1cU) 
                                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13) 
                                                                 << 0x1aU) 
                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12) 
                                                                    << 0x18U) 
                                                                   | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11) 
                                                                       << 0x16U) 
                                                                      | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10) 
                                                                          << 0x14U) 
                                                                         | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9) 
                                                                             << 0x12U) 
                                                                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8) 
                                                                                << 0x10U) 
                                                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1) 
                                                                                << 2U) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0)))))))))))))))) 
                                                         >> 
                                                         (0x1fU 
                                                          & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9) 
                                                             << 1U))))
                                                      : 0U) 
                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                                                         ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_1)
                                                         : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_1))
                                                        ? 
                                                       ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4yank_auto_in_bresp) 
                                                        | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___q_bdeq_q_io_deq_bits_id)
                                                            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__error_1)
                                                            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__error_0)))
                                                        : 0U))
                                                    : 0U))))
                                  : 0U)),2);
    bufp->fullCData(oldp+10320,(((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                  ? 0U : (3U & ((2U 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                                  ? 0U
                                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_rresp))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                                  ? 
                                                 (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
                                                    ? 
                                                   (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold)
                                                      : 0U) 
                                                    | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                                        ? 
                                                       ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                         ? 0U
                                                         : 3U)
                                                        : 0U))
                                                    : 0U) 
                                                  | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1)
                                                      ? 
                                                     ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__full)
                                                       ? (IData)(
                                                                 (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__ram 
                                                                  >> 1U))
                                                       : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__d_resp))
                                                      : 0U))
                                                  : 0U))))),2);
    bufp->fullCData(oldp+10321,(((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                  ? 0U : (3U & ((2U 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                                  ? 0U
                                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_bresp))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                                  ? 
                                                 ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_0)
                                                     : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0))
                                                    ? 
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
                                                    | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15) 
                                                         << 0x1eU) 
                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14) 
                                                            << 0x1cU) 
                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13) 
                                                               << 0x1aU) 
                                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12) 
                                                                  << 0x18U) 
                                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11) 
                                                                     << 0x16U) 
                                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10) 
                                                                        << 0x14U) 
                                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9) 
                                                                           << 0x12U) 
                                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8) 
                                                                              << 0x10U) 
                                                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1) 
                                                                                << 2U) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0)))))))))))))))) 
                                                       >> 
                                                       (0x1fU 
                                                        & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9) 
                                                           << 1U))))
                                                    : 0U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                                                       ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_1)
                                                       : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_1))
                                                      ? 
                                                     ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4yank_auto_in_bresp) 
                                                      | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___q_bdeq_q_io_deq_bits_id)
                                                          ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__error_1)
                                                          : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__error_0)))
                                                      : 0U))
                                                  : 0U))))),2);
    bufp->fullBit(oldp+10322,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->fullBit(oldp+10323,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                                : (0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))));
    bufp->fullCData(oldp+10324,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout),4);
    bufp->fullBit(oldp+10325,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done));
    bufp->fullBit(oldp+10326,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_pwrite));
    bufp->fullBit(oldp+10327,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we));
    bufp->fullBit(oldp+10328,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re));
    bufp->fullBit(oldp+10329,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask));
    bufp->fullBit(oldp+10330,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
    bufp->fullBit(oldp+10331,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir_read));
    bufp->fullBit(oldp+10332,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read));
    bufp->fullBit(oldp+10333,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read));
    bufp->fullBit(oldp+10334,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write));
    bufp->fullBit(oldp+10335,(vlSelf->ysyxSoCFull__DOT___bitrev_miso));
    bufp->fullBit(oldp+10336,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                     | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                          & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                          ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                          : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                        >> 0x1fU)))));
    bufp->fullCData(oldp+10337,(vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd),8);
    bufp->fullIData(oldp+10338,(vlSelf->ysyxSoCFull__DOT__flash__DOT__addr),24);
    bufp->fullIData(oldp+10339,(((0xfffffeU & (vlSelf->ysyxSoCFull__DOT__flash__DOT__addr 
                                               << 1U)) 
                                 | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi))),32);
    bufp->fullIData(oldp+10340,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap),32);
    bufp->fullBit(oldp+10341,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__do_bypass));
    bufp->fullBit(oldp+10342,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0));
    bufp->fullBit(oldp+10343,(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__q_grant) 
                               & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__d_first) 
                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__xmit) 
                                     & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_ready) 
                                        & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.io_deq_valid)))))));
    bufp->fullCData(oldp+10344,((vlSelf->ysyxSoCFull__DOT__psram__DOT____VdfgTmp_h6b154942__0 
                                 >> 0x1cU)),4);
    bufp->fullBit(oldp+10345,(vlSelf->ysyxSoCFull__DOT__psram__DOT__QPI_MODE));
    bufp->fullIData(oldp+10346,(vlSelf->ysyxSoCFull__DOT__psram__DOT__data),32);
    bufp->fullIData(oldp+10347,(vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata),32);
    bufp->fullIData(oldp+10348,(vlSelf->ysyxSoCFull__DOT__psram__DOT__data_bswap),32);
    bufp->fullIData(oldp+10349,(((vlSelf->ysyxSoCFull__DOT__psram__DOT__data 
                                  << 0x18U) | ((0xff0000U 
                                                & (vlSelf->ysyxSoCFull__DOT__psram__DOT__data 
                                                   << 8U)) 
                                               | ((0xff00U 
                                                   & (vlSelf->ysyxSoCFull__DOT__psram__DOT__data 
                                                      >> 8U)) 
                                                  | (vlSelf->ysyxSoCFull__DOT__psram__DOT__data 
                                                     >> 0x18U))))),32);
    bufp->fullBit(oldp+10350,((1U & (((0U == (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))) 
                                      | (7U == (7U 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))))
                                      ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                         >> 2U) : (
                                                   ((0x2000U 
                                                     & (IData)(vlSelf->ysyxSoCFull__DOT___asic_sdram_a))
                                                     ? 7U
                                                     : 
                                                    (7U 
                                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))) 
                                                   >> 2U)))));
    bufp->fullBit(oldp+10351,((1U & (((0U == (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))) 
                                      | (7U == (7U 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))))
                                      ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                         >> 1U) : (
                                                   ((0x2000U 
                                                     & (IData)(vlSelf->ysyxSoCFull__DOT___asic_sdram_a))
                                                     ? 7U
                                                     : 
                                                    (7U 
                                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))) 
                                                   >> 1U)))));
    bufp->fullBit(oldp+10352,((1U & (((0U == (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))) 
                                      | (7U == (7U 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))))
                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q)
                                      : ((0x2000U & (IData)(vlSelf->ysyxSoCFull__DOT___asic_sdram_a))
                                          ? 7U : (7U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q)))))));
    bufp->fullBit(oldp+10353,((1U & (((0U == (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))) 
                                      | (7U == (7U 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))))
                                      ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                         >> 2U) : (
                                                   ((0x2000U 
                                                     & (IData)(vlSelf->ysyxSoCFull__DOT___asic_sdram_a))
                                                     ? 
                                                    (7U 
                                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))
                                                     : 7U) 
                                                   >> 2U)))));
    bufp->fullBit(oldp+10354,((1U & (((0U == (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))) 
                                      | (7U == (7U 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))))
                                      ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                         >> 1U) : (
                                                   ((0x2000U 
                                                     & (IData)(vlSelf->ysyxSoCFull__DOT___asic_sdram_a))
                                                     ? 
                                                    (7U 
                                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))
                                                     : 7U) 
                                                   >> 1U)))));
    bufp->fullBit(oldp+10355,((1U & (((0U == (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))) 
                                      | (7U == (7U 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))))
                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q)
                                      : ((0x2000U & (IData)(vlSelf->ysyxSoCFull__DOT___asic_sdram_a))
                                          ? (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))
                                          : 7U)))));
    bufp->fullBit(oldp+10356,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0)))));
    bufp->fullBit(oldp+10357,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0)))));
    bufp->fullCData(oldp+10358,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                                  ? (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__VdfgTmp_h53fdc2be__0)
                                  : 0U)),4);
    bufp->fullCData(oldp+10359,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                                  ? (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__VdfgTmp_h53fdc2be__0)
                                  : 0U)),4);
    bufp->fullCData(oldp+10360,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                                  ? (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__VdfgTmp_h53fdc2be__0)
                                  : 0U)),4);
    bufp->fullCData(oldp+10361,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                                  ? (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__VdfgTmp_h53fdc2be__0)
                                  : 0U)),4);
    bufp->fullBit(oldp+10362,(0U));
    bufp->fullCData(oldp+10363,(1U),3);
    bufp->fullBit(oldp+10364,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr));
    bufp->fullIData(oldp+10365,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_prdata),32);
    bufp->fullBit(oldp+10366,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pslverr));
    bufp->fullBit(oldp+10367,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pslverr));
    bufp->fullCData(oldp+10368,(0U),4);
    bufp->fullCData(oldp+10369,(0U),8);
    bufp->fullCData(oldp+10370,(0U),2);
    bufp->fullSData(oldp+10371,(1U),16);
    bufp->fullBit(oldp+10372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_1_last));
    bufp->fullBit(oldp+10373,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_1_last));
    bufp->fullBit(oldp+10374,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_2_last));
    bufp->fullBit(oldp+10375,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_2_last));
    bufp->fullBit(oldp+10376,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_3_last));
    bufp->fullBit(oldp+10377,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_3_last));
    bufp->fullBit(oldp+10378,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_4_last));
    bufp->fullBit(oldp+10379,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_4_last));
    bufp->fullBit(oldp+10380,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_5_last));
    bufp->fullBit(oldp+10381,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_5_last));
    bufp->fullBit(oldp+10382,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_6_last));
    bufp->fullBit(oldp+10383,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_6_last));
    bufp->fullBit(oldp+10384,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_7_last));
    bufp->fullBit(oldp+10385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_7_last));
    bufp->fullBit(oldp+10386,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_8_last));
    bufp->fullBit(oldp+10387,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_8_last));
    bufp->fullBit(oldp+10388,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_9_last));
    bufp->fullBit(oldp+10389,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_9_last));
    bufp->fullBit(oldp+10390,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_10_last));
    bufp->fullBit(oldp+10391,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_10_last));
    bufp->fullBit(oldp+10392,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_11_last));
    bufp->fullBit(oldp+10393,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_11_last));
    bufp->fullBit(oldp+10394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_12_last));
    bufp->fullBit(oldp+10395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_12_last));
    bufp->fullBit(oldp+10396,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_13_last));
    bufp->fullBit(oldp+10397,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_13_last));
    bufp->fullBit(oldp+10398,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_14_last));
    bufp->fullBit(oldp+10399,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_14_last));
    bufp->fullBit(oldp+10400,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_15_last));
    bufp->fullBit(oldp+10401,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_15_last));
    bufp->fullBit(oldp+10402,(1U));
    bufp->fullIData(oldp+10403,(0U),32);
    __Vtemp_h180e0517__0[0U] = 0x743d2564U;
    __Vtemp_h180e0517__0[1U] = 0x6d656f75U;
    __Vtemp_h180e0517__0[2U] = 0x6b5f7469U;
    __Vtemp_h180e0517__0[3U] = 0x656c696eU;
    __Vtemp_h180e0517__0[4U] = 0x74696cU;
    bufp->fullWData(oldp+10404,(__Vtemp_h180e0517__0),152);
    bufp->fullIData(oldp+10409,(0x20U),32);
    bufp->fullCData(oldp+10410,(0U),3);
    bufp->fullIData(oldp+10411,(1U),32);
    bufp->fullIData(oldp+10412,(2U),32);
    bufp->fullCData(oldp+10413,(0U),5);
    bufp->fullBit(oldp+10414,(0U));
    bufp->fullIData(oldp+10415,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata),32);
    bufp->fullCData(oldp+10416,(2U),3);
    bufp->fullCData(oldp+10417,(0xfU),4);
    bufp->fullIData(oldp+10418,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_araddr),32);
    bufp->fullBit(oldp+10419,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_arvalid));
    bufp->fullBit(oldp+10420,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_arready));
    bufp->fullCData(oldp+10421,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_arid),4);
    bufp->fullCData(oldp+10422,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_arlen),8);
    bufp->fullCData(oldp+10423,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_arsize),3);
    bufp->fullCData(oldp+10424,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_arburst),2);
    bufp->fullIData(oldp+10425,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_rdata),32);
    bufp->fullCData(oldp+10426,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_rresp),2);
    bufp->fullBit(oldp+10427,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_rvalid));
    bufp->fullBit(oldp+10428,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_rready));
    bufp->fullBit(oldp+10429,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_rlast));
    bufp->fullCData(oldp+10430,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_rid),4);
    bufp->fullIData(oldp+10431,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_awaddr),32);
    bufp->fullBit(oldp+10432,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_awvalid));
    bufp->fullBit(oldp+10433,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_awready));
    bufp->fullCData(oldp+10434,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_awid),4);
    bufp->fullCData(oldp+10435,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_awlen),8);
    bufp->fullCData(oldp+10436,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_awsize),3);
    bufp->fullCData(oldp+10437,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_awburst),2);
    bufp->fullIData(oldp+10438,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_wdata),32);
    bufp->fullCData(oldp+10439,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_wstrb),4);
    bufp->fullBit(oldp+10440,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_wvalid));
    bufp->fullBit(oldp+10441,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_wready));
    bufp->fullBit(oldp+10442,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_wlast));
    bufp->fullCData(oldp+10443,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_bresp),2);
    bufp->fullBit(oldp+10444,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_bvalid));
    bufp->fullBit(oldp+10445,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_bready));
    bufp->fullCData(oldp+10446,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_bid),4);
    bufp->fullIData(oldp+10447,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_araddr),32);
    bufp->fullBit(oldp+10448,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_arvalid));
    bufp->fullBit(oldp+10449,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_arready));
    bufp->fullCData(oldp+10450,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_arid),4);
    bufp->fullCData(oldp+10451,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_arlen),8);
    bufp->fullCData(oldp+10452,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_arsize),3);
    bufp->fullCData(oldp+10453,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_arburst),2);
    bufp->fullIData(oldp+10454,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_rdata),32);
    bufp->fullCData(oldp+10455,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_rresp),2);
    bufp->fullBit(oldp+10456,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_rvalid));
    bufp->fullBit(oldp+10457,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_rready));
    bufp->fullBit(oldp+10458,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_rlast));
    bufp->fullCData(oldp+10459,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_rid),4);
    bufp->fullIData(oldp+10460,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_awaddr),32);
    bufp->fullBit(oldp+10461,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_awvalid));
    bufp->fullBit(oldp+10462,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_awready));
    bufp->fullCData(oldp+10463,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_awid),4);
    bufp->fullCData(oldp+10464,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_awlen),8);
    bufp->fullCData(oldp+10465,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_awsize),3);
    bufp->fullCData(oldp+10466,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_awburst),2);
    bufp->fullIData(oldp+10467,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_wdata),32);
    bufp->fullCData(oldp+10468,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_wstrb),4);
    bufp->fullBit(oldp+10469,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_wvalid));
    bufp->fullBit(oldp+10470,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_wready));
    bufp->fullBit(oldp+10471,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_wlast));
    bufp->fullCData(oldp+10472,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_bresp),2);
    bufp->fullBit(oldp+10473,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_bvalid));
    bufp->fullBit(oldp+10474,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_bready));
    bufp->fullCData(oldp+10475,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_bid),4);
    bufp->fullBit(oldp+10476,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_IFU__DOT__start_read_delay));
    bufp->fullCData(oldp+10477,(3U),3);
    bufp->fullCData(oldp+10478,(4U),3);
    bufp->fullCData(oldp+10479,(5U),3);
    bufp->fullIData(oldp+10480,(0x30000000U),32);
    bufp->fullCData(oldp+10481,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__read_choose),3);
    bufp->fullCData(oldp+10482,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__write_choose),3);
    bufp->fullBit(oldp+10483,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_arready));
    bufp->fullIData(oldp+10484,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_rdata),32);
    bufp->fullCData(oldp+10485,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_rresp),2);
    bufp->fullBit(oldp+10486,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_rvalid));
    bufp->fullBit(oldp+10487,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_rlast));
    bufp->fullCData(oldp+10488,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_rid),4);
    bufp->fullBit(oldp+10489,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_awready));
    bufp->fullBit(oldp+10490,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_wready));
    bufp->fullCData(oldp+10491,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_bresp),2);
    bufp->fullBit(oldp+10492,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_bvalid));
    bufp->fullCData(oldp+10493,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_bid),4);
    bufp->fullCData(oldp+10494,(1U),2);
    bufp->fullCData(oldp+10495,(2U),2);
    bufp->fullCData(oldp+10496,(0x35U),8);
    bufp->fullBit(oldp+10497,(0U));
    bufp->fullBit(oldp+10498,(1U));
    bufp->fullCData(oldp+10499,(0x15U),8);
    bufp->fullCData(oldp+10500,(0xebU),8);
    bufp->fullCData(oldp+10501,(0x38U),8);
    bufp->fullIData(oldp+10502,(0x64U),32);
    bufp->fullIData(oldp+10503,(0x18U),32);
    bufp->fullIData(oldp+10504,(9U),32);
    bufp->fullIData(oldp+10505,(2U),32);
    bufp->fullIData(oldp+10506,(4U),32);
    bufp->fullIData(oldp+10507,(8U),32);
    bufp->fullIData(oldp+10508,(0xdU),32);
    bufp->fullIData(oldp+10509,(0x2000U),32);
    bufp->fullIData(oldp+10510,(0x2710U),32);
    bufp->fullIData(oldp+10511,(0x30cU),32);
    bufp->fullCData(oldp+10512,(7U),4);
    bufp->fullCData(oldp+10513,(3U),4);
    bufp->fullCData(oldp+10514,(5U),4);
    bufp->fullCData(oldp+10515,(4U),4);
    bufp->fullCData(oldp+10516,(6U),4);
    bufp->fullCData(oldp+10517,(2U),4);
    bufp->fullCData(oldp+10518,(1U),4);
    bufp->fullSData(oldp+10519,(0x20U),13);
    bufp->fullCData(oldp+10520,(8U),4);
    bufp->fullCData(oldp+10521,(9U),4);
    bufp->fullIData(oldp+10522,(0xaU),32);
    bufp->fullIData(oldp+10523,(6U),32);
    bufp->fullIData(oldp+10524,(0x11U),32);
    bufp->fullIData(oldp+10525,(0x3fffffffU),32);
    bufp->fullIData(oldp+10526,(1U),32);
    bufp->fullCData(oldp+10527,(0xaU),4);
    bufp->fullIData(oldp+10528,(0xbU),32);
    bufp->fullIData(oldp+10529,(0x10U),32);
    bufp->fullIData(oldp+10530,(5U),32);
    bufp->fullIData(oldp+10531,(0x30U),32);
    bufp->fullIData(oldp+10532,(0x48U),32);
    bufp->fullIData(oldp+10533,(0x188U),32);
    bufp->fullIData(oldp+10534,(0x190U),32);
    bufp->fullIData(oldp+10535,(0x23U),32);
    bufp->fullIData(oldp+10536,(0x203U),32);
    bufp->fullIData(oldp+10537,(0x20dU),32);
    bufp->fullQData(oldp+10538,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_1__DOT__ram_ext__DOT__Memory[0]),51);
    bufp->fullQData(oldp+10540,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_1__DOT__ram_ext__DOT__Memory[1]),51);
    bufp->fullQData(oldp+10542,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_1__DOT__ram_ext__DOT__Memory[2]),51);
    bufp->fullQData(oldp+10544,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_1__DOT__ram_ext__DOT__Memory[3]),51);
    bufp->fullQData(oldp+10546,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_1__DOT__ram_ext__DOT__Memory[4]),51);
    bufp->fullQData(oldp+10548,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_1__DOT__ram_ext__DOT__Memory[5]),51);
    bufp->fullQData(oldp+10550,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_1__DOT__ram_ext__DOT__Memory[6]),51);
    bufp->fullQData(oldp+10552,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_1__DOT__ram_ext__DOT__Memory[7]),51);
    bufp->fullQData(oldp+10554,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_10__DOT__ram_ext__DOT__Memory[0]),51);
    bufp->fullQData(oldp+10556,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_10__DOT__ram_ext__DOT__Memory[1]),51);
    bufp->fullQData(oldp+10558,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_10__DOT__ram_ext__DOT__Memory[2]),51);
    bufp->fullQData(oldp+10560,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_10__DOT__ram_ext__DOT__Memory[3]),51);
    bufp->fullQData(oldp+10562,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_10__DOT__ram_ext__DOT__Memory[4]),51);
    bufp->fullQData(oldp+10564,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_10__DOT__ram_ext__DOT__Memory[5]),51);
    bufp->fullQData(oldp+10566,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_10__DOT__ram_ext__DOT__Memory[6]),51);
    bufp->fullQData(oldp+10568,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_10__DOT__ram_ext__DOT__Memory[7]),51);
    bufp->fullQData(oldp+10570,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_11__DOT__ram_ext__DOT__Memory[0]),51);
    bufp->fullQData(oldp+10572,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_11__DOT__ram_ext__DOT__Memory[1]),51);
    bufp->fullQData(oldp+10574,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_11__DOT__ram_ext__DOT__Memory[2]),51);
    bufp->fullQData(oldp+10576,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_11__DOT__ram_ext__DOT__Memory[3]),51);
    bufp->fullQData(oldp+10578,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_11__DOT__ram_ext__DOT__Memory[4]),51);
    bufp->fullQData(oldp+10580,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_11__DOT__ram_ext__DOT__Memory[5]),51);
    bufp->fullQData(oldp+10582,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_11__DOT__ram_ext__DOT__Memory[6]),51);
    bufp->fullQData(oldp+10584,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_11__DOT__ram_ext__DOT__Memory[7]),51);
    bufp->fullQData(oldp+10586,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_12__DOT__ram_ext__DOT__Memory[0]),51);
    bufp->fullQData(oldp+10588,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_12__DOT__ram_ext__DOT__Memory[1]),51);
    bufp->fullQData(oldp+10590,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_12__DOT__ram_ext__DOT__Memory[2]),51);
    bufp->fullQData(oldp+10592,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_12__DOT__ram_ext__DOT__Memory[3]),51);
    bufp->fullQData(oldp+10594,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_12__DOT__ram_ext__DOT__Memory[4]),51);
    bufp->fullQData(oldp+10596,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_12__DOT__ram_ext__DOT__Memory[5]),51);
    bufp->fullQData(oldp+10598,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_12__DOT__ram_ext__DOT__Memory[6]),51);
    bufp->fullQData(oldp+10600,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_12__DOT__ram_ext__DOT__Memory[7]),51);
    bufp->fullQData(oldp+10602,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_13__DOT__ram_ext__DOT__Memory[0]),51);
    bufp->fullQData(oldp+10604,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_13__DOT__ram_ext__DOT__Memory[1]),51);
    bufp->fullQData(oldp+10606,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_13__DOT__ram_ext__DOT__Memory[2]),51);
    bufp->fullQData(oldp+10608,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_13__DOT__ram_ext__DOT__Memory[3]),51);
    bufp->fullQData(oldp+10610,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_13__DOT__ram_ext__DOT__Memory[4]),51);
    bufp->fullQData(oldp+10612,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_13__DOT__ram_ext__DOT__Memory[5]),51);
    bufp->fullQData(oldp+10614,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_13__DOT__ram_ext__DOT__Memory[6]),51);
    bufp->fullQData(oldp+10616,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_13__DOT__ram_ext__DOT__Memory[7]),51);
    bufp->fullQData(oldp+10618,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_14__DOT__ram_ext__DOT__Memory[0]),51);
    bufp->fullQData(oldp+10620,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_14__DOT__ram_ext__DOT__Memory[1]),51);
    bufp->fullQData(oldp+10622,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_14__DOT__ram_ext__DOT__Memory[2]),51);
    bufp->fullQData(oldp+10624,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_14__DOT__ram_ext__DOT__Memory[3]),51);
    bufp->fullQData(oldp+10626,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_14__DOT__ram_ext__DOT__Memory[4]),51);
    bufp->fullQData(oldp+10628,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_14__DOT__ram_ext__DOT__Memory[5]),51);
    bufp->fullQData(oldp+10630,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_14__DOT__ram_ext__DOT__Memory[6]),51);
    bufp->fullQData(oldp+10632,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_14__DOT__ram_ext__DOT__Memory[7]),51);
    bufp->fullQData(oldp+10634,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_15__DOT__ram_ext__DOT__Memory[0]),51);
    bufp->fullQData(oldp+10636,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_15__DOT__ram_ext__DOT__Memory[1]),51);
    bufp->fullQData(oldp+10638,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_15__DOT__ram_ext__DOT__Memory[2]),51);
    bufp->fullQData(oldp+10640,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_15__DOT__ram_ext__DOT__Memory[3]),51);
    bufp->fullQData(oldp+10642,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_15__DOT__ram_ext__DOT__Memory[4]),51);
    bufp->fullQData(oldp+10644,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_15__DOT__ram_ext__DOT__Memory[5]),51);
    bufp->fullQData(oldp+10646,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_15__DOT__ram_ext__DOT__Memory[6]),51);
    bufp->fullQData(oldp+10648,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_15__DOT__ram_ext__DOT__Memory[7]),51);
    bufp->fullQData(oldp+10650,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_2__DOT__ram_ext__DOT__Memory[0]),51);
    bufp->fullQData(oldp+10652,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_2__DOT__ram_ext__DOT__Memory[1]),51);
    bufp->fullQData(oldp+10654,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_2__DOT__ram_ext__DOT__Memory[2]),51);
    bufp->fullQData(oldp+10656,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_2__DOT__ram_ext__DOT__Memory[3]),51);
    bufp->fullQData(oldp+10658,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_2__DOT__ram_ext__DOT__Memory[4]),51);
    bufp->fullQData(oldp+10660,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_2__DOT__ram_ext__DOT__Memory[5]),51);
    bufp->fullQData(oldp+10662,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_2__DOT__ram_ext__DOT__Memory[6]),51);
    bufp->fullQData(oldp+10664,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_2__DOT__ram_ext__DOT__Memory[7]),51);
    bufp->fullQData(oldp+10666,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_3__DOT__ram_ext__DOT__Memory[0]),51);
    bufp->fullQData(oldp+10668,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_3__DOT__ram_ext__DOT__Memory[1]),51);
    bufp->fullQData(oldp+10670,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_3__DOT__ram_ext__DOT__Memory[2]),51);
    bufp->fullQData(oldp+10672,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_3__DOT__ram_ext__DOT__Memory[3]),51);
    bufp->fullQData(oldp+10674,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_3__DOT__ram_ext__DOT__Memory[4]),51);
    bufp->fullQData(oldp+10676,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_3__DOT__ram_ext__DOT__Memory[5]),51);
    bufp->fullQData(oldp+10678,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_3__DOT__ram_ext__DOT__Memory[6]),51);
    bufp->fullQData(oldp+10680,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_3__DOT__ram_ext__DOT__Memory[7]),51);
    bufp->fullQData(oldp+10682,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_4__DOT__ram_ext__DOT__Memory[0]),51);
    bufp->fullQData(oldp+10684,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_4__DOT__ram_ext__DOT__Memory[1]),51);
    bufp->fullQData(oldp+10686,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_4__DOT__ram_ext__DOT__Memory[2]),51);
    bufp->fullQData(oldp+10688,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_4__DOT__ram_ext__DOT__Memory[3]),51);
    bufp->fullQData(oldp+10690,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_4__DOT__ram_ext__DOT__Memory[4]),51);
    bufp->fullQData(oldp+10692,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_4__DOT__ram_ext__DOT__Memory[5]),51);
    bufp->fullQData(oldp+10694,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_4__DOT__ram_ext__DOT__Memory[6]),51);
    bufp->fullQData(oldp+10696,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_4__DOT__ram_ext__DOT__Memory[7]),51);
    bufp->fullQData(oldp+10698,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_5__DOT__ram_ext__DOT__Memory[0]),51);
    bufp->fullQData(oldp+10700,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_5__DOT__ram_ext__DOT__Memory[1]),51);
    bufp->fullQData(oldp+10702,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_5__DOT__ram_ext__DOT__Memory[2]),51);
    bufp->fullQData(oldp+10704,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_5__DOT__ram_ext__DOT__Memory[3]),51);
    bufp->fullQData(oldp+10706,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_5__DOT__ram_ext__DOT__Memory[4]),51);
    bufp->fullQData(oldp+10708,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_5__DOT__ram_ext__DOT__Memory[5]),51);
    bufp->fullQData(oldp+10710,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_5__DOT__ram_ext__DOT__Memory[6]),51);
    bufp->fullQData(oldp+10712,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_5__DOT__ram_ext__DOT__Memory[7]),51);
    bufp->fullQData(oldp+10714,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_6__DOT__ram_ext__DOT__Memory[0]),51);
    bufp->fullQData(oldp+10716,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_6__DOT__ram_ext__DOT__Memory[1]),51);
    bufp->fullQData(oldp+10718,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_6__DOT__ram_ext__DOT__Memory[2]),51);
    bufp->fullQData(oldp+10720,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_6__DOT__ram_ext__DOT__Memory[3]),51);
    bufp->fullQData(oldp+10722,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_6__DOT__ram_ext__DOT__Memory[4]),51);
    bufp->fullQData(oldp+10724,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_6__DOT__ram_ext__DOT__Memory[5]),51);
    bufp->fullQData(oldp+10726,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_6__DOT__ram_ext__DOT__Memory[6]),51);
    bufp->fullQData(oldp+10728,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_6__DOT__ram_ext__DOT__Memory[7]),51);
    bufp->fullQData(oldp+10730,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_7__DOT__ram_ext__DOT__Memory[0]),51);
    bufp->fullQData(oldp+10732,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_7__DOT__ram_ext__DOT__Memory[1]),51);
    bufp->fullQData(oldp+10734,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_7__DOT__ram_ext__DOT__Memory[2]),51);
    bufp->fullQData(oldp+10736,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_7__DOT__ram_ext__DOT__Memory[3]),51);
    bufp->fullQData(oldp+10738,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_7__DOT__ram_ext__DOT__Memory[4]),51);
    bufp->fullQData(oldp+10740,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_7__DOT__ram_ext__DOT__Memory[5]),51);
    bufp->fullQData(oldp+10742,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_7__DOT__ram_ext__DOT__Memory[6]),51);
    bufp->fullQData(oldp+10744,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_7__DOT__ram_ext__DOT__Memory[7]),51);
    bufp->fullQData(oldp+10746,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_8__DOT__ram_ext__DOT__Memory[0]),51);
    bufp->fullQData(oldp+10748,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_8__DOT__ram_ext__DOT__Memory[1]),51);
    bufp->fullQData(oldp+10750,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_8__DOT__ram_ext__DOT__Memory[2]),51);
    bufp->fullQData(oldp+10752,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_8__DOT__ram_ext__DOT__Memory[3]),51);
    bufp->fullQData(oldp+10754,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_8__DOT__ram_ext__DOT__Memory[4]),51);
    bufp->fullQData(oldp+10756,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_8__DOT__ram_ext__DOT__Memory[5]),51);
    bufp->fullQData(oldp+10758,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_8__DOT__ram_ext__DOT__Memory[6]),51);
    bufp->fullQData(oldp+10760,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_8__DOT__ram_ext__DOT__Memory[7]),51);
    bufp->fullQData(oldp+10762,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_9__DOT__ram_ext__DOT__Memory[0]),51);
    bufp->fullQData(oldp+10764,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_9__DOT__ram_ext__DOT__Memory[1]),51);
    bufp->fullQData(oldp+10766,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_9__DOT__ram_ext__DOT__Memory[2]),51);
    bufp->fullQData(oldp+10768,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_9__DOT__ram_ext__DOT__Memory[3]),51);
    bufp->fullQData(oldp+10770,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_9__DOT__ram_ext__DOT__Memory[4]),51);
    bufp->fullQData(oldp+10772,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_9__DOT__ram_ext__DOT__Memory[5]),51);
    bufp->fullQData(oldp+10774,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_9__DOT__ram_ext__DOT__Memory[6]),51);
    bufp->fullQData(oldp+10776,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_9__DOT__ram_ext__DOT__Memory[7]),51);
    bufp->fullQData(oldp+10778,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq_q__DOT__ram),49);
    bufp->fullQData(oldp+10780,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq_q_1__DOT__ram),49);
    bufp->fullQData(oldp+10782,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram),37);
    bufp->fullIData(oldp+10784,(3U),32);
    bufp->fullCData(oldp+10785,(7U),3);
    bufp->fullCData(oldp+10786,(6U),3);
    bufp->fullIData(oldp+10787,(0x400000U),32);
    bufp->fullCData(oldp+10788,(3U),7);
    bufp->fullCData(oldp+10789,(1U),7);
}
