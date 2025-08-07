// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"
#include "VysyxSoCFull__Syms.h"
#include "VysyxSoCFull___024root.h"

extern const VlUnpacked<CData/*1:0*/, 512> VysyxSoCFull__ConstPool__TABLE_h10952357_0;

VL_INLINE_OPT void VysyxSoCFull___024root___nba_comb__TOP__0(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram
        [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom];
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__nodeOut_e_valid 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__bypass_c)) 
           & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.io_deq_valid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___GEN_8 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__nodeIn_1_e_ready) 
           & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.io_deq_valid));
    vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__nodeOut_e_valid 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__bypass_c)) 
           & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.io_deq_valid));
    vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___GEN_8 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__nodeIn_1_e_ready) 
           & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.io_deq_valid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT___clr_T 
        = ((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__free)) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__q_release) 
              & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__c_first) 
                 & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__xmit) 
                    & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__nodeIn_1_c_ready) 
                       & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.io_deq_valid))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___sourceC_io_c_valid 
        = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.io_deq_valid) 
           & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__stall)) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__xmit)));
    vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT___clr_T 
        = ((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__free)) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__q_release) 
              & ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__c_first) 
                 & ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__xmit) 
                    & ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__nodeIn_1_c_ready) 
                       & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.io_deq_valid))))));
    vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___sourceC_io_c_valid 
        = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.io_deq_valid) 
           & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__stall)) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__xmit)));
    vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___sourceD_io_d_valid 
        = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.io_deq_valid) 
           & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__stall)) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__xmit)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__extract__io_i_valid 
        = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.io_deq_valid) 
           & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__stall)) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__xmit)));
    vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__extract__io_i_valid 
        = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.io_deq_valid) 
           & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__stall)) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__xmit)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___sourceD_io_d_valid 
        = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.io_deq_valid) 
           & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__stall)) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__xmit)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_rd_w 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q)) 
           & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid) 
               | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q)) 
              & ((4U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)) 
                 & (((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q) 
                         | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q))) 
                     | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)) 
                    | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awvalid)) 
                       | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q)) 
           & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awvalid) 
               | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q)) 
              & ((4U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)) 
                 & ((((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)) 
                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q)) 
                     | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q)) 
                    | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid)) 
                       | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q))))));
    if ((8U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_top_apb_state))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_pwrite 
            = (1U & ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_top_apb_state) 
                               >> 2U))) && ((1U & (~ 
                                                   ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_top_apb_state) 
                                                    >> 1U))) 
                                            && ((1U 
                                                 & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_top_apb_state))) 
                                                && (1U 
                                                    & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_pready)))))));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_pwdata = 0U;
        if ((4U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_top_apb_state))) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_paddr = 0U;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_top_apb_nextstate = 0U;
        } else if ((2U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_top_apb_state))) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_paddr = 0U;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_top_apb_nextstate = 0U;
        } else if ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_top_apb_state))) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_paddr = 0U;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_top_apb_nextstate 
                = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_pready)
                    ? 0U : 9U);
        } else {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_paddr = 0x18U;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_top_apb_nextstate 
                = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_pready)
                    ? 9U : 8U);
        }
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_penable 
            = (1U & ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_top_apb_state) 
                               >> 2U))) && ((1U & (~ 
                                                   ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_top_apb_state) 
                                                    >> 1U))) 
                                            && (1U 
                                                & ((1U 
                                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_top_apb_state))
                                                    ? 
                                                   (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_pready))
                                                    : 
                                                   (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_pready)))))));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_psel 
            = (1U & ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_top_apb_state) 
                               >> 2U))) && ((1U & (~ 
                                                   ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_top_apb_state) 
                                                    >> 1U))) 
                                            && (1U 
                                                & ((1U 
                                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_top_apb_state))
                                                    ? 
                                                   (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_pready))
                                                    : 
                                                   (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_pready)))))));
    } else if ((4U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_top_apb_state))) {
        if ((2U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_top_apb_state))) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_pwrite 
                = (1U & ((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_top_apb_state))) 
                         && (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_pready)))));
            if ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_top_apb_state))) {
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_pwdata = 0U;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_paddr = 0U;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_top_apb_nextstate 
                    = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_spi_irq_out)
                        ? 8U : 7U);
            } else {
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_pwdata = 0x1140U;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_paddr = 0x10U;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_top_apb_nextstate 
                    = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_pready)
                        ? 7U : 6U);
            }
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_penable 
                = (1U & ((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_top_apb_state))) 
                         && (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_pready)))));
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_psel 
                = (1U & ((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_top_apb_state))) 
                         && (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_pready)))));
        } else if ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_top_apb_state))) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_pwrite 
                = (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_pready)));
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_pwdata = 1U;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_paddr = 0x18U;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_penable 
                = (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_pready)));
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_top_apb_nextstate 
                = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_pready)
                    ? 6U : 5U);
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_psel 
                = (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_pready)));
        } else {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_pwrite 
                = (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_pready)));
            if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_pready) {
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_pwdata 
                    = (0x3000000U | (0xffffffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr));
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_top_apb_nextstate = 5U;
            } else {
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_pwdata 
                    = (0x3000000U | (0xffffffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr));
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_top_apb_nextstate = 4U;
            }
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_paddr = 4U;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_penable 
                = (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_pready)));
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_psel 
                = (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_pready)));
        }
    } else if ((2U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_top_apb_state))) {
        if ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_top_apb_state))) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_pwrite 
                = (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_pready)));
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_pwdata = 0U;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_paddr = 0U;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_penable 
                = (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_pready)));
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_top_apb_nextstate 
                = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_pready)
                    ? 4U : 3U);
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_psel 
                = (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_pready)));
        } else {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_pwrite 
                = (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_pready)));
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_pwdata = 1U;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_paddr = 0x14U;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_penable 
                = (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_pready)));
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_top_apb_nextstate 
                = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_pready)
                    ? 3U : 2U);
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_psel 
                = (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_pready)));
        }
    } else {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_pwrite 
            = (1U & ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_top_apb_state)) 
                     && (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwrite)));
        if ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_top_apb_state))) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_pwdata 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_paddr 
                = (0x3fffffffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr);
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_top_apb_nextstate 
                = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_pready)
                    ? 0U : 1U);
        } else {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_pwdata = 0U;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_paddr = 0U;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_top_apb_nextstate 
                = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_psel) 
                    & (0x10000000U == (0x30000000U 
                                       & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)))
                    ? 1U : (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_psel) 
                             & (0x30000000U == (0x30000000U 
                                                & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)))
                             ? 2U : 0U));
        }
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_penable 
            = (1U & ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_top_apb_state)) 
                     && (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable)));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_psel 
            = (1U & ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_top_apb_state)) 
                     && (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_psel)));
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT____VdfgRegularize_h86c3254d_0_1 
        = ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
               >> 7U)) & (0U == (7U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r 
        = (0xffU & ((4U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)
                     ? ((2U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)
                         ? ((1U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)
                             ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch)
                             : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr))
                         : ((1U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)
                             ? (((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
                                   << 7U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r) 
                                             << 6U)) 
                                 | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r) 
                                     << 5U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r) 
                                               << 4U))) 
                                | ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                                     << 3U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                                               << 2U)) 
                                   | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                                       << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r))))
                             : 0U)) : ((2U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)
                                        ? ((1U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)
                                            ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr)
                                            : (0xc0U 
                                               | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir)))
                                        : ((1U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)
                                            ? ((0x80U 
                                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl) 
                                                   >> 8U)
                                                : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier))
                                            : ((0x80U 
                                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl)
                                                : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                               [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom])))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter) 
           == ((IData)(1U) + (0xffU & ((IData)(7U) 
                                       + VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size), 1U)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout 
        = ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
            ? 3U : ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                     ? 8U : (0xfU & ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                      ? (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                         >> 0x14U) : 
                                     ((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                       ? (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                          >> 0x10U)
                                       : ((4U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                           ? (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                              >> 0xcU)
                                           : ((5U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                               ? (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                                  >> 8U)
                                               : ((6U 
                                                   == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                   ? 
                                                  (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                                   >> 4U)
                                                   : 
                                                  ((7U 
                                                    == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                    ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr
                                                    : 
                                                   ((8U 
                                                     == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                     ? 
                                                    ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0) 
                                                     >> 4U)
                                                     : 
                                                    ((9U 
                                                      == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                      ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)
                                                      : 
                                                     ((0xaU 
                                                       == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                       ? 
                                                      ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                                       >> 4U)
                                                       : 
                                                      ((0xbU 
                                                        == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                        ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1)
                                                        : 
                                                       ((0xcU 
                                                         == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                         ? 
                                                        (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                                         >> 0x14U)
                                                         : 
                                                        ((0xdU 
                                                          == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                          ? 
                                                         (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                                          >> 0x10U)
                                                          : 
                                                         ((0xeU 
                                                           == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                           ? 
                                                          (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                                           >> 0x1cU)
                                                           : 
                                                          (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                                           >> 0x18U)))))))))))))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd 
        = ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
    if ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state))) {
        vlSelfRef.ysyxSoCFull__DOT___asic_psram_sck 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__init_sck;
        vlSelfRef.ysyxSoCFull__DOT___asic_psram_ce_n 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__init_ce_n;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten = 0xfU;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout 
            = (0xfU & ((8U > (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__INIT__DOT__counter))
                        ? (1U & (0x35U >> (7U & ((IData)(7U) 
                                                 - (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__INIT__DOT__counter)))))
                        : 0U));
    } else if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we) {
        vlSelfRef.ysyxSoCFull__DOT___asic_psram_sck 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck;
        vlSelfRef.ysyxSoCFull__DOT___asic_psram_ce_n 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten 
            = (0xfU & (- (IData)((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n))))));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout 
            = (0xfU & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout));
    } else {
        vlSelfRef.ysyxSoCFull__DOT___asic_psram_sck 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck;
        vlSelfRef.ysyxSoCFull__DOT___asic_psram_ce_n 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten 
            = (0xfU & (- (IData)((8U > (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout 
            = (0xfU & ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                        ? 0xeU : ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                   ? 0xbU : ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                              ? (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                 >> 0x14U)
                                              : ((3U 
                                                  == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                  ? 
                                                 (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                  >> 0x10U)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                   ? 
                                                  (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                   >> 0xcU)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                    ? 
                                                   (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                    >> 8U)
                                                    : 
                                                   ((6U 
                                                     == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                     ? 
                                                    (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                     >> 4U)
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                      ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr
                                                      : 0U)))))))));
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr 
        = ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re) 
           & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                  >> 7U)) & (6U == (7U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir_read 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re) 
           & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                  >> 7U)) & (2U == (7U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re) 
           & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                  >> 7U)) & (5U == (7U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_8 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___hints_auto_out_e_bits_sink)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__nodeOut_e_valid));
    vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___GEN_8 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___hints_auto_out_e_bits_sink)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__nodeOut_e_valid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___c_first_T_1 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__nodeIn_1_c_ready) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___sourceC_io_c_valid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__nodeOut_c_valid 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__bypass_c)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___sourceC_io_c_valid));
    vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___c_first_T_1 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__nodeIn_1_c_ready) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___sourceC_io_c_valid));
    vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__nodeOut_c_valid 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__bypass_c)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___sourceC_io_c_valid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___sourceA_io_a_valid 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT___GEN)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__extract__io_i_valid));
    vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___sourceA_io_a_valid 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT___GEN)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__extract__io_i_valid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT____VdfgRegularize_h86c3254d_0_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT____VdfgRegularize_h86c3254d_0_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat 
        = ((0U == (7U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_paddr 
                         >> 2U))) ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U]
            : ((1U == (7U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_paddr 
                             >> 2U))) ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U]
                : ((2U == (7U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_paddr 
                                 >> 2U))) ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U]
                    : ((3U == (7U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_paddr 
                                     >> 2U))) ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U]
                        : ((4U == (7U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_paddr 
                                         >> 2U))) ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl)
                            : ((5U == (7U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_paddr 
                                             >> 2U)))
                                ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider)
                                : ((6U == (7U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_paddr 
                                                 >> 2U)))
                                    ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss)
                                    : 0U)))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0)
             ? ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_top_apb_state))
                 ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_prdata
                 : ((9U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_top_apb_state))
                     ? (((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_prdata 
                          << 0x18U) | (0xff0000U & 
                                       (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_prdata 
                                        << 8U))) | 
                        ((0xff00U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_prdata 
                                     >> 8U)) | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_prdata 
                                                >> 0x18U)))
                     : 0U)) : 0U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1)
                                       ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel)
                                           ? (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                               << 0x18U) 
                                              | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                  << 0x10U) 
                                                 | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                     << 8U) 
                                                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                           : 0U) : 0U) 
                                     | (((0U == (3U 
                                                 & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                                    >> 0x1cU)))
                                          ? (((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                               [3U] 
                                               << 0x18U) 
                                              | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                 [2U] 
                                                 << 0x10U)) 
                                             | ((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                 [1U] 
                                                 << 8U) 
                                                | vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                [0U]))
                                          : 0U) | (
                                                   ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3)
                                                     ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__reg_in_prdata
                                                     : 0U) 
                                                   | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4)
                                                        ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__reg_in_prdata
                                                        : 0U) 
                                                      | ((2U 
                                                          == 
                                                          (3U 
                                                           & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                                              >> 0x1cU)))
                                                          ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_prdata
                                                          : 0U))))));
    vlSelfRef.__Vtableidx19 = (((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re) 
                                  << 8U) | ((0x16U 
                                             == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)) 
                                            << 7U)) 
                                | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we) 
                                    << 6U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done) 
                                              << 5U))) 
                               | ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel)
                                     ? 2U : 1U) << 3U) 
                                  | (((8U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__INIT__DOT__counter)) 
                                      << 2U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate 
        = VysyxSoCFull__ConstPool__TABLE_h10952357_0
        [vlSelfRef.__Vtableidx19];
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready 
        = (1U & (~ (((~ (((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_top_apb_state)) 
                          | (9U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_top_apb_state))) 
                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_pready))) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0)) 
                    | (((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1)) 
                       | ((IData)(((0U == (0x30000000U 
                                           & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)) 
                                   & (~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                           ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                                           : (0x16U 
                                              == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))) 
                                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel))))) 
                          | (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pready)) 
                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3)) 
                             | (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pready)) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4)) 
                                | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pready)) 
                                   & (0x20000000U == 
                                      (0x30000000U 
                                       & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr))))))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h150067cf_0_0 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_penable) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_psel));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state) {
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate 
                = (0x16U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter));
        }
    } else {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd;
    }
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state) {
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate 
                = (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)));
        }
    } else {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr;
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_dio__en0 
        = (0xfU & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___GEN_7 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___c_first_T_1) 
           & ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_counter_1)) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___GEN_5)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___c_first_T_1 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__c_q__DOT__full)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__nodeOut_c_valid));
    vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___GEN_7 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___c_first_T_1) 
           & ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_counter_1)) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___GEN_5)));
    vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___c_first_T_1 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__err__DOT__c_q__DOT__full)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__nodeOut_c_valid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT____VdfgRegularize_h456d727f_0_0 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready) 
            & (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))) 
           | (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out0 
        = ((0xcU & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out0)) 
           | (3U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten) 
                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out1 
        = ((3U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out1)) 
           | (0xcU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten) 
                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch 
        = ((((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h150067cf_0_0) 
               & (0xcU == (0x1cU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_paddr))) 
              << 3U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h150067cf_0_0) 
                         & (8U == (0x1cU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_paddr))) 
                        << 2U)) | ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h150067cf_0_0) 
                                     & (4U == (0x1cU 
                                               & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_paddr))) 
                                    << 1U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h150067cf_0_0) 
                                              & (0U 
                                                 == 
                                                 (0x1cU 
                                                  & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_paddr))))) 
           & (- (IData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_pwrite))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_7 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___c_first_T_1) 
           & ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__c_first_counter_1)) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_5)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___GEN_7 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___c_first_T_1) 
           & ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__c_first_counter_1)) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_5)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___GEN_7 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___c_first_T_1) 
           & ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__c_first_counter_1)) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_5)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___GEN_7 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___c_first_T_1) 
           & ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1)) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_5)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___GEN_7 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___c_first_T_1) 
           & ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__c_first_counter_1)) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_5)));
    vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___GEN_7 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___c_first_T_1) 
           & ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__c_first_counter_1)) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___GEN_5)));
    vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___GEN_7 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___c_first_T_1) 
           & ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__c_first_counter_1)) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___GEN_5)));
    vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___GEN_7 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___c_first_T_1) 
           & ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__c_first_counter_1)) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___GEN_5)));
    vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___GEN_7 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___c_first_T_1) 
           & ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1)) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___GEN_5)));
    vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___GEN_7 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___c_first_T_1) 
           & ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__c_first_counter_1)) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___GEN_5)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwrite)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT____VdfgRegularize_h456d727f_0_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwrite) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT____VdfgRegularize_h456d727f_0_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid) 
           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full) 
              | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full) 
            << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state) 
                       << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full) 
            << 2U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_1 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_3 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___GEN_1 
        = (((0xcU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_1) 
                     << 2U)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full) 
                                 << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state))) 
           | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_1) 
               << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___GEN_2 
        = (((0xcU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_3) 
                     << 2U)) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full) 
                                << 1U)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_3) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready 
        = (((0x10U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_1) 
                      << 2U)) | ((8U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___GEN_1)) 
                                 | (7U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___GEN_1) 
                                          | ((4U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_1)) 
                                             | (3U 
                                                & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___GEN_1) 
                                                   >> 2U))))))) 
           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask) 
              << 3U));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready_1 
        = (((0x10U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_3) 
                      << 2U)) | ((8U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___GEN_2)) 
                                 | (7U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___GEN_2) 
                                          | ((4U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_3)) 
                                             | (3U 
                                                & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___GEN_2) 
                                                   >> 2U))))))) 
           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1) 
              << 3U));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys 
        = (7U & (~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready) 
                     >> 3U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1 
        = (7U & (~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready_1) 
                     >> 3U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready_1))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
            >> 1U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
            >> 2U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2;
    } else {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid 
            = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid) 
                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0)) 
               | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1) 
                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)) 
                  | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2))));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2;
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1) 
            >> 2U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2;
    } else {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid 
            = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid) 
                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0)) 
               | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2)));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2;
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_rlast 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0) 
           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1) 
              | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
             ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg)
             : 0U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1)
                        ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rid_r)
                        : 0U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                  ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_id)
                                  : 0U)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0)
             ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_in_bresp)
             : 0U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2)
                       ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1)
                           ? 0U : 3U) : 0U));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0)
             ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg)
             : 0U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2)
                       ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_id)
                       : 0U));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last 
        = (1U & (((((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last) 
                      << 0xfU) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last) 
                                  << 0xeU)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last) 
                                                << 0xdU) 
                                               | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last) 
                                                  << 0xcU))) 
                   | ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last) 
                        << 0xbU) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last) 
                                    << 0xaU)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last) 
                                                  << 9U) 
                                                 | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last) 
                                                    << 8U)))) 
                  | (((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last) 
                        << 7U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last) 
                                  << 6U)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last) 
                                              << 5U) 
                                             | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last) 
                                                << 4U))) 
                     | ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last) 
                          << 3U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last) 
                                    << 2U)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last) 
                                                << 1U) 
                                               | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last))))) 
                 >> (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid));
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_comb__TOP__3(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__3\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__io_deq_valid_0 
        = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.auto_node_out_out_a_valid) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__full));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__do_enq 
        = ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__full)) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT___inject_io_i_ready))) 
           & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__full)) 
              & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.auto_node_out_out_a_valid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__in_0_a_ready 
        = (1U & (((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___atomics_auto_out_a_bits_address 
                   >> 0x1fU) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__nodeIn_a_ready)) 
                 | ((~ (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___atomics_auto_out_a_bits_address 
                        >> 0x1fU)) & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__a_q__DOT__full)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___a_first_T_1 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__in_0_a_ready) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__nodeOut_a_valid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__source_i_ready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__in_0_a_ready) 
           & ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__beatsLeft))
               ? (2U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_s_0_state))
               : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__state_1)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_2 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___a_first_T_1) 
           & (0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__nodeIn_a_ready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__source_i_ready) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__a_allow));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_first_T_1 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__nodeIn_a_ready) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___fixer_1_auto_anon_out_a_valid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__anonIn_a_ready 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__stall)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__nodeIn_a_ready));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___GEN_2 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_first_T_1) 
           & (0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_first_T_1 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__anonIn_a_ready) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater__DOT__io_deq_valid_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater__DOT__io_enq_ready_0 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater__DOT__full)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__anonIn_a_ready));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___GEN_2 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_first_T_1) 
           & (0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_first_T_1 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater__DOT__io_enq_ready_0) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__nodeOut_a_valid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__nodeIn_1_a_ready 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__stall)) 
           & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__bypass)) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater__DOT__io_enq_ready_0)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___GEN_2 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_first_T_1) 
           & (0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__a_first_counter_1)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_first_T_1 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__nodeIn_1_a_ready) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___sourceA_io_a_valid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__io_i_ready_0 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT___GEN) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__nodeIn_1_a_ready));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___GEN_2 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_first_T_1) 
           & (0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__io_q_ready_0 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__xmit)) 
                 | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__stall)) 
                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__io_i_ready_0))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT____VdfgRegularize_haf155c63_0_11 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__a_first) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__xmit) 
              & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__io_i_ready_0) 
                 & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.io_deq_valid))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT___clr_T 
        = ((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__free)) 
           & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_domain)) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT____VdfgRegularize_haf155c63_0_11)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT___clr_T 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT____VdfgRegularize_haf155c63_0_11) 
           & ((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__free)) 
              & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_domain)) 
                 >> 1U)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT___clr_T 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT____VdfgRegularize_haf155c63_0_11) 
           & ((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__free)) 
              & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_domain)) 
                 >> 2U)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT___clr_T 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT____VdfgRegularize_haf155c63_0_11) 
           & ((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__free)) 
              & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_domain)) 
                 >> 3U)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT___clr_T 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT____VdfgRegularize_haf155c63_0_11) 
           & ((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__free)) 
              & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_domain)) 
                 >> 4U)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT___clr_T 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT____VdfgRegularize_haf155c63_0_11) 
           & ((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__free)) 
              & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_domain)) 
                 >> 5U)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT___clr_T 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT____VdfgRegularize_haf155c63_0_11) 
           & ((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__free)) 
              & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_domain)) 
                 >> 6U)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT___clr_T 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT____VdfgRegularize_haf155c63_0_11) 
           & ((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__free)) 
              & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_domain)) 
                 >> 7U)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_1[0U] 
        = (((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT___clr_T) 
              & ((7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source)) 
                 == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__io_key_0)))
              ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_source)
              : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__data_ext__DOT__Memory
             [(7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source))]) 
            << 0x10U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT___clr_T) 
                          & ((7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source)) 
                             == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__io_key_0)))
                          ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_source)
                          : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__Memory
                         [(7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source))]));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_1[1U] 
        = (((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT___clr_T) 
              & ((7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source)) 
                 == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__io_key_0)))
              ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_source)
              : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__data_ext__DOT__Memory
             [(7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source))]) 
            << 0x10U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT___clr_T) 
                          & ((7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source)) 
                             == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__io_key_0)))
                          ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_source)
                          : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__data_ext__DOT__Memory
                         [(7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source))]));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_1[2U] 
        = (((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT___clr_T) 
              & ((7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source)) 
                 == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__io_key_0)))
              ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_source)
              : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__data_ext__DOT__Memory
             [(7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source))]) 
            << 0x10U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT___clr_T) 
                          & ((7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source)) 
                             == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__io_key_0)))
                          ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_source)
                          : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__data_ext__DOT__Memory
                         [(7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source))]));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_1[3U] 
        = (((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT___clr_T) 
              & ((7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source)) 
                 == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__io_key_0)))
              ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_source)
              : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__data_ext__DOT__Memory
             [(7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source))]) 
            << 0x10U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT___clr_T) 
                          & ((7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source)) 
                             == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__io_key_0)))
                          ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_source)
                          : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__data_ext__DOT__Memory
                         [(7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source))]));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__header 
        = (3U | ((((6U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_opcode))
                    ? (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT___clr_T) 
                        & ((7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source)) 
                           == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__io_key_0)))
                        ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT____Vcellinp__cam__io_alloc_bits)
                        : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__data_ext__DOT__Memory
                       [(7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source))])
                    : (((0U == (0x1fU & VL_SHIFTL_III(7,7,32, 
                                                      (7U 
                                                       & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source) 
                                                          >> 3U)), 4U)))
                         ? 0U : (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_1[
                                 (((IData)(0xfU) + 
                                   (0x7fU & VL_SHIFTL_III(7,7,32, 
                                                          (7U 
                                                           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source) 
                                                              >> 3U)), 4U))) 
                                  >> 5U)] << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_SHIFTL_III(7,7,32, 
                                                                 (7U 
                                                                  & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source) 
                                                                     >> 3U)), 4U))))) 
                       | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_1[
                          (3U & (VL_SHIFTL_III(7,7,32, 
                                               (7U 
                                                & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source) 
                                                   >> 3U)), 4U) 
                                 >> 5U))] >> (0x1fU 
                                              & VL_SHIFTL_III(7,7,32, 
                                                              (7U 
                                                               & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source) 
                                                                  >> 3U)), 4U))))) 
                  << 0x10U) | ((0xe000U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source) 
                                           << 0xaU)) 
                               | ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_size) 
                                    << 9U) | ((0x100U 
                                               & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__full)
                                                    ? (IData)(
                                                              (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__ram 
                                                               >> 0x21U))
                                                    : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___mbypass_auto_in_1_d_bits_denied)) 
                                                  << 8U)) 
                                              | (0xc0U 
                                                 & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__full)
                                                      ? (IData)(
                                                                (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__ram 
                                                                 >> 0x2cU))
                                                      : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT___in_0_d_bits_T_21)) 
                                                    << 6U)))) 
                                  | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_opcode) 
                                     << 3U)))));
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_comb__TOP__4(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__4\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_filter_T_1;
    ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_filter_T_1 = 0;
    CData/*3:0*/ ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___GEN_1;
    ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___GEN_1 = 0;
    CData/*2:0*/ ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_filter_T_3;
    ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_filter_T_3 = 0;
    CData/*3:0*/ ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___GEN_2;
    ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___GEN_2 = 0;
    CData/*0:0*/ ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT___GEN_0;
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT___GEN_0 = 0;
    CData/*0:0*/ ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT___GEN_3;
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT___GEN_3 = 0;
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__d_resp 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.__PVT___in_0_d_bits_T_3) 
            | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.__PVT___in_0_d_bits_T_10)) 
           << 1U);
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq_q__DOT__full) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___q_bdeq_q_io_deq_bits_id 
            = (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq_q__DOT__ram) 
                     >> 2U));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4yank_auto_in_bresp 
            = (3U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq_q__DOT__ram));
    } else {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___q_bdeq_q_io_deq_bits_id 
            = (1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.__PVT___in_0_d_bits_T_16) 
                     >> 3U));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4yank_auto_in_bresp 
            = (3U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__d_resp));
    }
    if ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.__PVT___in_0_d_bits_T_25))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__d_last_beats1 
            = (7U & (~ (7U & (((IData)(0x1fU) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.__PVT___in_0_d_bits_T_19)) 
                              >> 2U))));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__nodeOut_d_ready 
            = (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__full)));
    } else {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__d_last_beats1 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__nodeOut_d_ready 
            = (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq_q__DOT__full)));
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT____Vcellinp__q_bdeq_q__io_enq_valid 
        = ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.__PVT___in_0_d_bits_T_25)) 
           & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.__PVT__in_0_d_valid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT____Vcellinp__nodeIn_rdeq_q__io_enq_valid 
        = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.__PVT__in_0_d_valid) 
           & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.__PVT___in_0_d_bits_T_25));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__b_allow 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___q_bdeq_q_io_deq_bits_id)
             ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__b_count_1)
             : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__b_count_0)) 
           != ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___q_bdeq_q_io_deq_bits_id)
                ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__w_count_1)
                : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__w_count_0)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4yank_auto_in_becho_real_last 
        = (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___q_bdeq_q_io_deq_bits_id)
                  ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_3__DOT__empty)
                      ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4frag_auto_out_awecho_real_last)
                      : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_3__DOT__ram_ext__DOT__Memory
                     [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_3__DOT__deq_ptr_value])
                  : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_2__DOT__empty)
                      ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4frag_auto_out_awecho_real_last)
                      : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_2__DOT__ram_ext__DOT__Memory
                     [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_2__DOT__deq_ptr_value])));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT____Vcellinp__nodeIn_rdeq_q__io_enq_bits_last 
        = ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__d_last_counter)) 
           | (0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__d_last_beats1)));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__full) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4frag_auto_in_rid 
            = (1U & (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__ram 
                             >> 0x23U)));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4yank_auto_in_rlast 
            = (1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__ram));
    } else {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4frag_auto_in_rid 
            = (1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.__PVT___in_0_d_bits_T_16) 
                     >> 3U));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4yank_auto_in_rlast 
            = (1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT____Vcellinp__nodeIn_rdeq_q__io_enq_bits_last));
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq_q__DOT__io_deq_valid_0 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq_q__DOT__full) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT____Vcellinp__q_bdeq_q__io_enq_valid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__io_deq_valid_0 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__full) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT____Vcellinp__nodeIn_rdeq_q__io_enq_valid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__nodeIn_bvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq_q__DOT__io_deq_valid_0) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__b_allow));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid) 
           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rvalid) 
              | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__io_deq_valid_0)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__io_deq_valid_0) 
            << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rvalid) 
                       << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4frag_auto_in_bvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4yank_auto_in_becho_real_last) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__nodeIn_bvalid));
    ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_filter_T_1 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid_1 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bvalid) 
           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_bvalid) 
              | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4frag_auto_in_bvalid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid_1 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4frag_auto_in_bvalid) 
            << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_bvalid) 
                       << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bvalid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
            ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid)
            : (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid) 
                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0)) 
               | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rvalid) 
                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_1)) 
                  | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__io_deq_valid_0) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_2)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rvalid 
        = ((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state)) 
           && ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rvalid)
                : ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state)) 
                   && (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Clint__DOT__rvalid_reg))));
    ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___GEN_1 
        = (((0xcU & ((IData)(ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_filter_T_1) 
                     << 2U)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__io_deq_valid_0) 
                                 << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rvalid))) 
           | (((IData)(ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_filter_T_1) 
               << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__io_deq_valid_0)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_4)
            ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid_1)
            : (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bvalid) 
                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_4_0)) 
               | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_bvalid) 
                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_4_1)) 
                  | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4frag_auto_in_bvalid) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_4_2)))));
    ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_filter_T_3 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask_1)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__M0_rvalid 
        = ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__state)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_MEM__DOT__rvalid 
        = ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__state)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready 
        = (((0x10U & ((IData)(ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_filter_T_1) 
                      << 2U)) | ((8U & (IData)(ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___GEN_1)) 
                                 | (7U & ((IData)(ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___GEN_1) 
                                          | ((4U & (IData)(ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_filter_T_1)) 
                                             | (3U 
                                                & ((IData)(ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___GEN_1) 
                                                   >> 2U))))))) 
           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask) 
              << 3U));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_4 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_bready) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_next_state 
        = ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
            ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__S0_awvalid)
                ? 1U : 0U) : ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                               ? (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bvalid) 
                                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_bready))
                                   ? 0U : 1U) : ((2U 
                                                  == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                                  ? 2U
                                                  : 0U)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_bvalid 
        = ((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
           && ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
               && (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bvalid)));
    ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___GEN_2 
        = (((0xcU & ((IData)(ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_filter_T_3) 
                     << 2U)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4frag_auto_in_bvalid) 
                                 << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_bvalid))) 
           | (((IData)(ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_filter_T_3) 
               << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4frag_auto_in_bvalid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys 
        = (7U & (~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready) 
                     >> 3U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready_1 
        = (((0x10U & ((IData)(ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_filter_T_3) 
                      << 2U)) | ((8U & (IData)(ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___GEN_2)) 
                                 | (7U & ((IData)(ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___GEN_2) 
                                          | ((4U & (IData)(ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_filter_T_3)) 
                                             | (3U 
                                                & ((IData)(ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___GEN_2) 
                                                   >> 2U))))))) 
           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask_1) 
              << 3U));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4index_auto_out_rready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_rready) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
               ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys) 
                  >> 2U) : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_2)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_rready) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
               ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys)
               : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__prefixOR_1 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_1 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys) 
            >> 1U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_2 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys) 
            >> 2U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__io_deq_valid_0));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_0 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__prefixOR_1;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_1 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_1;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_2 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_2;
    } else {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_0 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_1 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_1;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_2 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_2;
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1 
        = (7U & (~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready_1) 
                     >> 3U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready_1))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__do_enq 
        = ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__full)) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4index_auto_out_rready))) 
           & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__full)) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT____Vcellinp__nodeIn_rdeq_q__io_enq_valid)));
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT___GEN_0 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4index_auto_out_rready) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__io_deq_valid_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_rready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
               ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys)
               : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_rready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
               ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
                  >> 2U) : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_accept_w 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rvalid) 
            & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_rready) 
               & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                   ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys) 
                      >> 1U) : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_1)))) 
           | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_bvalid) 
               & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_bready) 
                  & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_4)
                      ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1) 
                         >> 1U) : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_4_1)))) 
              | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rlast)) 
                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT____VdfgRegularize_h54426eaf_1_1))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_4_0 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_4_1 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1) 
            >> 1U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_bvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_4_2 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1) 
            >> 2U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4frag_auto_in_bvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__nodeOut_bready 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4yank_auto_in_becho_real_last)) 
                 | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_bready) 
                    & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_4)
                        ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1) 
                           >> 2U) : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_4_2)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last)) 
                 | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_bready) 
                    & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_4)
                        ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1)
                        : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_4_0)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT____Vcellinp__Queue4_BundleMap__io_deq_ready 
        = ((IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT___GEN_0) 
           & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4frag_auto_in_rid)) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4yank_auto_in_rlast)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT____Vcellinp__Queue4_BundleMap_1__io_deq_ready 
        = (((IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT___GEN_0) 
            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4yank_auto_in_rlast)) 
           & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4frag_auto_in_rid)) 
              >> 1U));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hb7083124_6_4 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_rlast));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4ram_auto_in_arready 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full)) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_rready)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rid 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_0)
             ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)
             : 0U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_1)
                        ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_bid)
                        : 0U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_2)
                                  ? ((0xeU & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4frag_auto_in_rid)
                                                ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_1__DOT__empty)
                                                    ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4frag_auto_out_arecho_extra_id)
                                                    : 
                                                   (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_1__DOT__ram_ext__DOT__Memory
                                                    [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_1__DOT__deq_ptr_value] 
                                                    >> 1U))
                                                : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap__DOT__empty)
                                                    ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4frag_auto_out_arecho_extra_id)
                                                    : 
                                                   (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap__DOT__ram_ext__DOT__Memory
                                                    [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap__DOT__deq_ptr_value] 
                                                    >> 1U))) 
                                              << 1U)) 
                                     | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4frag_auto_in_rid))
                                  : 0U)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rlast 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_0) 
            & ((((((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
                     << 0xfU) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last) 
                                 << 0xeU)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last) 
                                               << 0xdU) 
                                              | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last) 
                                                 << 0xcU))) 
                  | ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last) 
                       << 0xbU) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last) 
                                   << 0xaU)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last) 
                                                 << 9U) 
                                                | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last) 
                                                   << 8U)))) 
                 | (((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last) 
                       << 7U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last) 
                                 << 6U)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last) 
                                             << 5U) 
                                            | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last) 
                                               << 4U))) 
                    | ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last) 
                         << 3U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last) 
                                   << 2U)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last))))) 
                >> (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_rlast))) 
           | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_1) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rlast)) 
              | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_2) 
                 & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4frag_auto_in_rid)
                      ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_1__DOT__empty)
                          ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4frag_auto_out_arecho_real_last)
                          : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_1__DOT__ram_ext__DOT__Memory
                         [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_1__DOT__deq_ptr_value])
                      : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap__DOT__empty)
                          ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4frag_auto_out_arecho_real_last)
                          : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap__DOT__ram_ext__DOT__Memory
                         [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap__DOT__deq_ptr_value])) 
                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4yank_auto_in_rlast)))));
    if ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rdata = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_next_state 
            = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__S0_arvalid)
                ? (((0x2000048U == vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__S0_araddr) 
                    | (0x200004cU == vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__S0_araddr))
                    ? 2U : 1U) : 0U);
    } else if ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rdata 
            = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_0)
                 ? (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                      ? ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                          ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                          : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)
                      : 0U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1)
                                 ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r
                                 : 0U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                           ? (((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                  ? 
                                                 ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                   ? 
                                                  (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory
                                                   [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_addr_d0] 
                                                   >> 0x18U)
                                                   : 0U)
                                                  : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3)) 
                                                << 0x18U) 
                                               | (0xff0000U 
                                                  & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                       ? 
                                                      ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                        ? 
                                                       (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory
                                                        [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_addr_d0] 
                                                        >> 0x10U)
                                                        : 0U)
                                                       : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2)) 
                                                     << 0x10U))) 
                                              | ((0xff00U 
                                                  & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                       ? 
                                                      ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                        ? 
                                                       (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory
                                                        [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_addr_d0] 
                                                        >> 8U)
                                                        : 0U)
                                                       : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1)) 
                                                     << 8U)) 
                                                 | (0xffU 
                                                    & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                        ? 
                                                       ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                         ? 
                                                        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory
                                                        [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_addr_d0]
                                                         : 0U)
                                                        : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0)))))
                                           : 0U))) : 0U) 
               | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_1)
                    ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram
                   [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr]
                    : 0U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_2)
                              ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__full)
                                  ? (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__ram 
                                             >> 3U))
                                  : vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_data)
                              : 0U)));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_next_state 
            = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rlast) 
                & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rvalid) 
                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_rready)))
                ? 0U : 1U);
    } else if ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rdata 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Clint__DOT__rdata_reg;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_next_state 
            = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Clint__DOT__rvalid_reg) 
                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_rready))
                ? 0U : 2U);
    } else {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rdata = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_next_state = 0U;
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_bid 
        = ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_4)
              ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_4_0)
              : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_4_0))
             ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)
             : 0U) | ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_4)
                         ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_4_1)
                         : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_4_1))
                        ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_bid)
                        : 0U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_4)
                                   ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_4_2)
                                   : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_4_2))
                                  ? ((0xeU & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___q_bdeq_q_io_deq_bits_id)
                                                ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_3__DOT__empty)
                                                    ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4frag_auto_out_awecho_extra_id)
                                                    : 
                                                   (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_3__DOT__ram_ext__DOT__Memory
                                                    [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_3__DOT__deq_ptr_value] 
                                                    >> 1U))
                                                : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_2__DOT__empty)
                                                    ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4frag_auto_out_awecho_extra_id)
                                                    : 
                                                   (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_2__DOT__ram_ext__DOT__Memory
                                                    [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_2__DOT__deq_ptr_value] 
                                                    >> 1U))) 
                                              << 1U)) 
                                     | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___q_bdeq_q_io_deq_bits_id))
                                  : 0U)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT____Vcellinp__q_bdeq_q__io_deq_ready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__nodeOut_bready) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__b_allow));
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT___GEN_3 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__nodeOut_bready) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__nodeIn_bvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_bready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4)
               ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1)
               : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_bready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4)
               ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1) 
                  >> 2U) : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__ren 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4ram_auto_in_arready) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_in_arready 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0) 
            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read)) 
           | (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1)) 
              | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2) 
                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4ram_auto_in_arready))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_MEM__DOT__rdata 
        = ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__state))
            ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rdata
            : 0U);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_h3f4aebb8_12_4 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_rready) 
            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rvalid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rlast));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__done 
        = ((((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state)) 
             && ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                  ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rlast)
                  : ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state)) 
                     && (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Clint__DOT__rvalid_reg)))) 
            & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__S0_rready) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rvalid))) 
           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__S0_bready) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_bvalid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq_q__DOT__do_enq 
        = ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq_q__DOT__full)) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT____Vcellinp__q_bdeq_q__io_deq_ready))) 
           & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq_q__DOT__full)) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT____Vcellinp__q_bdeq_q__io_enq_valid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT____Vcellinp__Queue4_BundleMap_2__io_deq_ready 
        = ((IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT___GEN_3) 
           & ((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___q_bdeq_q_io_deq_bits_id)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT____Vcellinp__Queue4_BundleMap_3__io_deq_ready 
        = ((IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT___GEN_3) 
           & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___q_bdeq_q_io_deq_bits_id)) 
              >> 1U));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgRegularize_h66ac2f4c_0_0 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full)) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_bready)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_in_arready) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_in_arready));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_in_arready) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____VdfgRegularize_hb0a5bc62_2_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_MEM__DOT__rdata_mask 
        = ((0U == (3U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_MEM__DOT__mem_ctrl) 
                         >> 3U))) ? ((0U == (3U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_MEM__DOT__ALU_result))
                                      ? ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__state))
                                          ? (0xffU 
                                             & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rdata)
                                          : 0U) : (
                                                   (1U 
                                                    == 
                                                    (3U 
                                                     & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_MEM__DOT__ALU_result))
                                                    ? 
                                                   ((2U 
                                                     == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__state))
                                                     ? 
                                                    (0xffU 
                                                     & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rdata 
                                                        >> 8U))
                                                     : 0U)
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (3U 
                                                      & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_MEM__DOT__ALU_result))
                                                     ? 
                                                    ((2U 
                                                      == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__state))
                                                      ? 
                                                     (0xffU 
                                                      & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rdata 
                                                         >> 0x10U))
                                                      : 0U)
                                                     : 
                                                    VL_SHIFTR_III(32,32,32, vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_MEM__DOT__rdata, 0x18U))))
            : ((1U == (3U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_MEM__DOT__mem_ctrl) 
                             >> 3U))) ? ((0U == (3U 
                                                 & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_MEM__DOT__ALU_result))
                                          ? ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__state))
                                              ? (0xffffU 
                                                 & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rdata)
                                              : 0U)
                                          : ((1U == 
                                              (3U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_MEM__DOT__ALU_result))
                                              ? ((2U 
                                                  == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__state))
                                                  ? 
                                                 (0xffffU 
                                                  & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rdata 
                                                     >> 8U))
                                                  : 0U)
                                              : ((2U 
                                                  == 
                                                  (3U 
                                                   & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_MEM__DOT__ALU_result))
                                                  ? 
                                                 VL_SHIFTR_III(32,32,32, vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_MEM__DOT__rdata, 0x10U)
                                                  : 0xdeadbeefU)))
                : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_MEM__DOT__rdata));
    if ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__state))) {
        if ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__last_master))) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__next_state 
                = ((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_IFU__DOT__state))
                    ? 1U : (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_MEM__DOT__arvalid) 
                             | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_MEM__DOT__awvalid))
                             ? 2U : 0U));
        } else if ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__last_master))) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__next_state 
                = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_MEM__DOT__arvalid) 
                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_MEM__DOT__awvalid))
                    ? 2U : ((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_IFU__DOT__state))
                             ? 1U : 0U));
        }
    } else if ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__state))) {
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__done) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__next_state 
                = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_MEM__DOT__arvalid) 
                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_MEM__DOT__awvalid))
                    ? 2U : ((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_IFU__DOT__state))
                             ? 1U : 0U));
        }
    } else if ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__state))) {
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__done) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__next_state 
                = ((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_IFU__DOT__state))
                    ? 1U : (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_MEM__DOT__arvalid) 
                             | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_MEM__DOT__awvalid))
                             ? 2U : 0U));
        }
    } else {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__next_state = 0U;
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write)) 
           | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
               >> 2U) & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid) 
                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgRegularize_h66ac2f4c_0_0))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4ram_auto_in_awready 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
            & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
               >> 2U)) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgRegularize_h66ac2f4c_0_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready 
        = ((~ (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len))) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_valid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid) 
           & ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo)) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___GEN 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4ram_auto_in_awready) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awready 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0) 
            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write)) 
           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4ram_auto_in_awready)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq 
        = ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready))) 
           & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_arvalid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____VdfgRegularize_h55402cce_3_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty)) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_valid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq 
        = ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready))) 
           & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full)) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___GEN) 
           & (0xf000000U == (0xfffe000U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_in_awready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awready) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___anonIn_awready_T));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq 
        = ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready))) 
           & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_wvalid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_in_awready) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_in_awready));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_in_awready) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____VdfgRegularize_hb0a5bc62_0_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___in_awready_T));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready 
        = ((~ (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1))) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq 
        = ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready))) 
           & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_awvalid)));
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_comb__TOP__5(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__5\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___clr_T 
        = ((0U != vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__free) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__q_grant) 
              & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__d_first) 
                 & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__xmit) 
                    & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_ready) 
                       & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.io_deq_valid))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__io_q_ready_0 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__xmit)) 
                 | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__stall)) 
                    & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_ready))));
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_comb__TOP__6(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__6\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT___GEN_1;
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT___GEN_1 = 0;
    CData/*0:0*/ ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT___GEN_4;
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT___GEN_4 = 0;
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_out_ready 
        = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.__PVT__anonIn_a_ready) 
           & ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__beatsLeft))
               ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__readys_readys)
               : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__state_0)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__w_out_ready 
        = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.__PVT__anonIn_a_ready) 
           & ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__beatsLeft))
               ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__readys_readys) 
                  >> 1U) : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__state_1)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4yank_auto_in_arready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_out_ready) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT___GEN));
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT___GEN_1 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_out_ready));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4yank_auto_in_wready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__w_out_ready) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4yank_auto_out_awvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__nodeIn_awready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__w_out_ready) 
           & ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__w_todo)) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__nodeOut_wvalid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4yank_auto_in_arready) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4frag_auto_out_arecho_real_last));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT____Vcellinp__Queue4_BundleMap__io_enq_valid 
        = ((IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT___GEN_1) 
           & ((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4frag_auto_out_arid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT____Vcellinp__Queue4_BundleMap_1__io_enq_valid 
        = ((IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT___GEN_1) 
           & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4frag_auto_out_arid)) 
              >> 1U));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4yank_auto_in_wready) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT____VdfgRegularize_h84ce0f54_3_2));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4yank_auto_in_awready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__nodeIn_awready) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT___GEN_2));
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT___GEN_4 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__nodeOut_awvalid) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__nodeIn_awready));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_q__DOT__do_enq 
        = ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_q__DOT__full)) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready))) 
           & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_q__DOT__full)) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4index_auto_out_arvalid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap__DOT__do_deq 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap__DOT__empty)) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT____Vcellinp__Queue4_BundleMap__io_deq_ready) 
              & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap__DOT__empty)) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT____Vcellinp__Queue4_BundleMap__io_enq_valid))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap__DOT__do_enq 
        = ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap__DOT__empty) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT____Vcellinp__Queue4_BundleMap__io_deq_ready))) 
           & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap__DOT__full)) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT____Vcellinp__Queue4_BundleMap__io_enq_valid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_1__DOT__do_deq 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_1__DOT__empty)) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT____Vcellinp__Queue4_BundleMap_1__io_deq_ready) 
              & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_1__DOT__empty)) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT____Vcellinp__Queue4_BundleMap_1__io_enq_valid))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_1__DOT__do_enq 
        = ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_1__DOT__empty) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT____Vcellinp__Queue4_BundleMap_1__io_deq_ready))) 
           & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_1__DOT__full)) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT____Vcellinp__Queue4_BundleMap_1__io_enq_valid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq 
        = ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready))) 
           & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4index_auto_out_wvalid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_awready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4yank_auto_in_awready) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___in_awready_T));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT____Vcellinp__Queue4_BundleMap_2__io_enq_valid 
        = ((IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT___GEN_4) 
           & ((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4frag_auto_out_awid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT____Vcellinp__Queue4_BundleMap_3__io_enq_valid 
        = ((IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT___GEN_4) 
           & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4frag_auto_out_awid)) 
              >> 1U));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_awready) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4frag_auto_out_awecho_real_last));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_2__DOT__do_deq 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_2__DOT__empty)) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT____Vcellinp__Queue4_BundleMap_2__io_deq_ready) 
              & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_2__DOT__empty)) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT____Vcellinp__Queue4_BundleMap_2__io_enq_valid))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_2__DOT__do_enq 
        = ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_2__DOT__empty) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT____Vcellinp__Queue4_BundleMap_2__io_deq_ready))) 
           & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_2__DOT__full)) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT____Vcellinp__Queue4_BundleMap_2__io_enq_valid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_3__DOT__do_deq 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_3__DOT__empty)) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT____Vcellinp__Queue4_BundleMap_3__io_deq_ready) 
              & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_3__DOT__empty)) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT____Vcellinp__Queue4_BundleMap_3__io_enq_valid))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_3__DOT__do_enq 
        = ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_3__DOT__empty) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT____Vcellinp__Queue4_BundleMap_3__io_deq_ready))) 
           & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_3__DOT__full)) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT____Vcellinp__Queue4_BundleMap_3__io_enq_valid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq 
        = ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_q_1__DOT__full)) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready))) 
           & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_q_1__DOT__full)) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4index_auto_out_awvalid)));
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__27(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__27\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0 
        = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__io_c2b_rst_reg__DOT__reg_0;
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_comb__TOP__8(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__8\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__io_deq_valid_0 
        = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_out_out_a_valid) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__full));
    vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__do_enq 
        = ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__full)) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT___inject_io_i_ready))) 
           & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__full)) 
              & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_out_out_a_valid)));
    if (vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__full) {
        vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len 
            = (0xffU & (IData)((vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__ram 
                                >> 5U)));
        vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr 
            = (IData)((vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__ram 
                       >> 0xdU));
        vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size 
            = (7U & (IData)((vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__ram 
                             >> 2U)));
    } else {
        vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len 
            = (0xffU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_len));
        vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr 
            = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_addr;
        vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size 
            = (7U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_size));
    }
    if (vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q__DOT__full) {
        vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT___deq_q_io_deq_bits_len 
            = (0xffU & (IData)((vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q__DOT__ram 
                                >> 5U)));
        vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr 
            = (IData)((vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q__DOT__ram 
                       >> 0xdU));
        vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT___deq_q_io_deq_bits_size 
            = (7U & (IData)((vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q__DOT__ram 
                             >> 2U)));
    } else {
        vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT___deq_q_io_deq_bits_len 
            = (0xffU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_len));
        vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr 
            = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_addr;
        vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT___deq_q_io_deq_bits_size 
            = (7U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___queue_arw_deq_q_io_deq_bits_size));
    }
    vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__in_0_a_ready 
        = (((3U == (vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___atomics_auto_out_a_bits_address 
                    >> 0x1eU)) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__nodeIn_a_ready)) 
           | (((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__requestAIO_0_1) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__nodeIn_a_ready)) 
              | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__err__DOT__a_q__DOT__full)) 
                 & (0U == (vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___atomics_auto_out_a_bits_address 
                           >> 0x1eU)))));
    vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0 
        = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__nodeOut_wdeq_q__DOT__io_deq_valid_0) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__full));
    if (vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__busy_1) {
        vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__len_1 
            = vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__r_len_1;
        vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__addr_1 
            = vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__r_addr_1;
    } else {
        vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__len_1 
            = vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len;
        vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__addr_1 
            = vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr;
    }
    if (vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__busy) {
        vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__len 
            = vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__r_len;
        vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__addr 
            = vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__r_addr;
    } else {
        vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__len 
            = vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT___deq_q_io_deq_bits_len;
        vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__addr 
            = vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr;
    }
    vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_first_T_1 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__in_0_a_ready) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__nodeOut_a_valid));
    vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__source_i_ready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__in_0_a_ready) 
           & ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__beatsLeft))
               ? (2U != (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_s_0_state))
               : (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__state_1)));
    vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready 
        = ((~ (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__len_1))) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_awready));
    vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready 
        = (1U & ((~ (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__len))) 
                 & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full))));
    vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___GEN_2 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_first_T_1) 
           & (0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)));
    vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__nodeIn_a_ready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__source_i_ready) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__a_allow));
    vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_first_T_1 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__nodeIn_a_ready) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___fixer_1_auto_anon_out_a_valid));
    vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__anonIn_a_ready 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__stall)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__nodeIn_a_ready));
    vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___GEN_2 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_first_T_1) 
           & (0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)));
    vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_first_T_1 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__anonIn_a_ready) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater__DOT__io_deq_valid_0));
    vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater__DOT__io_enq_ready_0 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater__DOT__full)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__anonIn_a_ready));
    vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___GEN_2 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_first_T_1) 
           & (0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)));
    vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_first_T_1 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater__DOT__io_enq_ready_0) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__nodeOut_a_valid));
    vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__nodeIn_1_a_ready 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__stall)) 
           & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__bypass)) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater__DOT__io_enq_ready_0)));
    vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___GEN_2 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_first_T_1) 
           & (0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__a_first_counter_1)));
    vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_first_T_1 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__nodeIn_1_a_ready) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___sourceA_io_a_valid));
    vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__io_i_ready_0 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT___GEN) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__nodeIn_1_a_ready));
    vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___GEN_2 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_first_T_1) 
           & (0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1)));
    vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__io_q_ready_0 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__xmit)) 
                 | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__stall)) 
                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__io_i_ready_0))));
    vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____VdfgRegularize_h9f981cf7_0_12 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__a_first) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__xmit) 
              & ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__io_i_ready_0) 
                 & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.io_deq_valid))));
    vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT___clr_T 
        = ((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__free)) 
           & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_domain)) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____VdfgRegularize_h9f981cf7_0_12)));
    vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT___clr_T 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____VdfgRegularize_h9f981cf7_0_12) 
           & ((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__free)) 
              & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_domain)) 
                 >> 1U)));
    vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT___clr_T 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____VdfgRegularize_h9f981cf7_0_12) 
           & ((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__free)) 
              & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_domain)) 
                 >> 2U)));
    vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT___clr_T 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____VdfgRegularize_h9f981cf7_0_12) 
           & ((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__free)) 
              & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_domain)) 
                 >> 3U)));
    vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT___clr_T 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____VdfgRegularize_h9f981cf7_0_12) 
           & ((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__free)) 
              & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_domain)) 
                 >> 4U)));
    vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT___clr_T 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____VdfgRegularize_h9f981cf7_0_12) 
           & ((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__free)) 
              & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_domain)) 
                 >> 5U)));
    vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT___clr_T 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____VdfgRegularize_h9f981cf7_0_12) 
           & ((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__free)) 
              & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_domain)) 
                 >> 6U)));
    vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT___clr_T 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____VdfgRegularize_h9f981cf7_0_12) 
           & ((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__free)) 
              & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_domain)) 
                 >> 7U)));
    vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_1[0U] 
        = (((((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT___clr_T) 
              & ((7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source)) 
                 == (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__io_key_0)))
              ? (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_source)
              : vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__data_ext__DOT__Memory
             [(7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source))]) 
            << 0x10U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT___clr_T) 
                          & ((7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source)) 
                             == (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__io_key_0)))
                          ? (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_source)
                          : vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__Memory
                         [(7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source))]));
    vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_1[1U] 
        = (((((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT___clr_T) 
              & ((7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source)) 
                 == (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__io_key_0)))
              ? (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_source)
              : vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__data_ext__DOT__Memory
             [(7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source))]) 
            << 0x10U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT___clr_T) 
                          & ((7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source)) 
                             == (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__io_key_0)))
                          ? (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_source)
                          : vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__data_ext__DOT__Memory
                         [(7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source))]));
    vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_1[2U] 
        = (((((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT___clr_T) 
              & ((7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source)) 
                 == (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__io_key_0)))
              ? (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_source)
              : vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__data_ext__DOT__Memory
             [(7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source))]) 
            << 0x10U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT___clr_T) 
                          & ((7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source)) 
                             == (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__io_key_0)))
                          ? (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_source)
                          : vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__data_ext__DOT__Memory
                         [(7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source))]));
    vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_1[3U] 
        = (((((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT___clr_T) 
              & ((7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source)) 
                 == (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__io_key_0)))
              ? (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_source)
              : vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__data_ext__DOT__Memory
             [(7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source))]) 
            << 0x10U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT___clr_T) 
                          & ((7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source)) 
                             == (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__io_key_0)))
                          ? (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_source)
                          : vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__data_ext__DOT__Memory
                         [(7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source))]));
    vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__header 
        = (3U | ((((6U == (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_opcode))
                    ? (((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT___clr_T) 
                        & ((7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source)) 
                           == (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__io_key_0)))
                        ? (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT____Vcellinp__cam__io_alloc_bits)
                        : vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__data_ext__DOT__Memory
                       [(7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source))])
                    : (((0U == (0x1fU & VL_SHIFTL_III(7,7,32, 
                                                      (7U 
                                                       & ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source) 
                                                          >> 3U)), 4U)))
                         ? 0U : (vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_1[
                                 (((IData)(0xfU) + 
                                   (0x7fU & VL_SHIFTL_III(7,7,32, 
                                                          (7U 
                                                           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source) 
                                                              >> 3U)), 4U))) 
                                  >> 5U)] << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_SHIFTL_III(7,7,32, 
                                                                 (7U 
                                                                  & ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source) 
                                                                     >> 3U)), 4U))))) 
                       | (vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_1[
                          (3U & (VL_SHIFTL_III(7,7,32, 
                                               (7U 
                                                & ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source) 
                                                   >> 3U)), 4U) 
                                 >> 5U))] >> (0x1fU 
                                              & VL_SHIFTL_III(7,7,32, 
                                                              (7U 
                                                               & ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source) 
                                                                  >> 3U)), 4U))))) 
                  << 0x10U) | (((0xe000U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source) 
                                            << 0xaU)) 
                                | (((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_size) 
                                    << 9U) | (0x100U 
                                              & (((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__full)
                                                   ? (IData)(
                                                             (vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__ram 
                                                              >> 0x21U))
                                                   : (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___mbypass_auto_in_1_d_bits_denied)) 
                                                 << 8U)))) 
                               | ((0xc0U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__full)
                                              ? (IData)(
                                                        (vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__ram 
                                                         >> 0x2dU))
                                              : (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__xbar__DOT___in_0_d_bits_T_34)) 
                                            << 6U)) 
                                  | ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_opcode) 
                                     << 3U)))));
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_comb__TOP__9(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__9\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT___GEN_3;
    ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT___GEN_3 = 0;
    // Body
    vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__d_resp 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.__PVT___in_0_d_bits_T_3) 
            | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.__PVT___in_0_d_bits_T_10)) 
           << 1U);
    vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___axi4frag_auto_in_rid 
        = (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__full)
                  ? (IData)((vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__ram 
                             >> 0x23U)) : ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.__PVT___in_0_d_bits_T_16) 
                                           >> 3U)));
    if (vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq_q__DOT__full) {
        vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___q_bdeq_q_io_deq_bits_id 
            = (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq_q__DOT__ram) 
                     >> 2U));
        vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___axi4yank_2_auto_in_bresp 
            = (3U & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq_q__DOT__ram));
    } else {
        vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___q_bdeq_q_io_deq_bits_id 
            = (1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.__PVT___in_0_d_bits_T_16) 
                     >> 3U));
        vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___axi4yank_2_auto_in_bresp 
            = (3U & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__d_resp));
    }
    if ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.__PVT___in_0_d_bits_T_25))) {
        vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__d_last_beats1 
            = (7U & (~ (7U & (((IData)(0x1fU) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.__PVT___in_0_d_bits_T_19)) 
                              >> 2U))));
        vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeOut_d_ready 
            = (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__full)));
    } else {
        vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__d_last_beats1 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeOut_d_ready 
            = (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq_q__DOT__full)));
    }
    vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT____Vcellinp__nodeIn_rdeq_q__io_enq_valid 
        = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.__PVT__in_0_d_valid) 
           & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.__PVT___in_0_d_bits_T_25));
    vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT____Vcellinp__q_bdeq_q__io_enq_valid 
        = ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.__PVT___in_0_d_bits_T_25)) 
           & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.__PVT__in_0_d_valid));
    vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q__DOT__do_enq 
        = ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q__DOT__full)) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready))) 
           & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q__DOT__full)) 
              & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.auto_out_arvalid)));
    vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0 
        = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.auto_out_arvalid) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q__DOT__full));
    vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq 
        = ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__full)) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready))) 
           & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__full)) 
              & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.auto_out_awvalid)));
    vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0 
        = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.auto_out_awvalid) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__full));
    vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___axi4yank_2_auto_in_becho_real_last 
        = (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___q_bdeq_q_io_deq_bits_id)
                  ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_3__DOT__empty)
                      ? (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___axi4frag_auto_out_awecho_real_last)
                      : vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_3__DOT__ram_ext__DOT__Memory
                     [vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_3__DOT__deq_ptr_value])
                  : ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_2__DOT__empty)
                      ? (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___axi4frag_auto_out_awecho_real_last)
                      : vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_2__DOT__ram_ext__DOT__Memory
                     [vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_2__DOT__deq_ptr_value])));
    vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__b_allow 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___q_bdeq_q_io_deq_bits_id)
             ? (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__b_count_1)
             : (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__b_count_0)) 
           != ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___q_bdeq_q_io_deq_bits_id)
                ? (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__w_count_1)
                : (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__w_count_0)));
    vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT____Vcellinp__nodeIn_rdeq_q__io_enq_bits_last 
        = ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__d_last_counter)) 
           | (0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__d_last_beats1)));
    vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__do_enq 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__full)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT____Vcellinp__nodeIn_rdeq_q__io_enq_valid));
    vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq_q__DOT__io_deq_valid_0 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq_q__DOT__full) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT____Vcellinp__q_bdeq_q__io_enq_valid));
    vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__do_enq 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0));
    vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__nodeOut_awvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT___in_awready_T));
    vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__wbeats_valid 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__wbeats_latched)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
    vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT____Vcellinp__q_bdeq_q__io_deq_ready 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___axi4yank_2_auto_in_becho_real_last)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__b_allow));
    vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeIn_bvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq_q__DOT__io_deq_valid_0) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__b_allow));
    vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__do_enq 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__nodeOut_awvalid));
    vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__w_todo 
        = ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__w_counter))
            ? (IData)(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__wbeats_valid)
            : (IData)(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__w_counter));
    vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT____VdfgRegularize_h55402cce_3_0 
        = ((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__w_counter)) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__wbeats_valid));
    vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq_q__DOT__do_enq 
        = ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq_q__DOT__full)) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT____Vcellinp__q_bdeq_q__io_deq_ready))) 
           & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq_q__DOT__full)) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT____Vcellinp__q_bdeq_q__io_enq_valid)));
    ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT___GEN_3 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___axi4yank_2_auto_in_becho_real_last)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeIn_bvalid));
    vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT___wcounter_T 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full)) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT____VdfgRegularize_h55402cce_3_0)));
    vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT____VdfgRegularize_h55402cce_3_0));
    vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT____Vcellinp__Queue4_BundleMap_2__io_deq_ready 
        = ((IData)(ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT___GEN_3) 
           & ((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___q_bdeq_q_io_deq_bits_id)));
    vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT____Vcellinp__Queue4_BundleMap_3__io_deq_ready 
        = ((IData)(ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT___GEN_3) 
           & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___q_bdeq_q_io_deq_bits_id)) 
              >> 1U));
    vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq 
        = ((~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready))) 
           & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)) 
              & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__nodeOut_wdeq_q__DOT__io_deq_valid_0)));
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_comb__TOP__10(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__10\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___clr_T 
        = ((0U != vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__free) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__q_grant) 
              & ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__d_first) 
                 & ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__xmit) 
                    & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_ready) 
                       & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.io_deq_valid))))));
    vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__io_q_ready_0 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__xmit)) 
                 | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__stall)) 
                    & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_ready))));
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_comb__TOP__11(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__11\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT___GEN_1;
    ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT___GEN_1 = 0;
    CData/*0:0*/ ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT___GEN_4;
    ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT___GEN_4 = 0;
    // Body
    vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__r_out_ready 
        = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.__PVT__anonIn_a_ready) 
           & ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__beatsLeft))
               ? (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__readys_readys)
               : (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__state_0)));
    vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__w_out_ready 
        = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.__PVT__anonIn_a_ready) 
           & ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__beatsLeft))
               ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__readys_readys) 
                  >> 1U) : (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__state_1)));
    vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___axi4yank_2_auto_in_arready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__r_out_ready) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT___GEN));
    ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT___GEN_1 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq_q__DOT__full) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__r_out_ready));
    vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___axi4yank_2_auto_in_wready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__w_out_ready) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___axi4yank_2_auto_out_awvalid));
    vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeIn_awready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__w_out_ready) 
           & ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__w_todo)) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__nodeOut_wvalid)));
    vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT____Vcellinp__Queue4_BundleMap__io_enq_valid 
        = ((IData)(ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT___GEN_1) 
           & ((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___axi4frag_auto_out_arid)));
    vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT____Vcellinp__Queue4_BundleMap_1__io_enq_valid 
        = ((IData)(ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT___GEN_1) 
           & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___axi4frag_auto_out_arid)) 
              >> 1U));
    vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___axi4yank_2_auto_in_awready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeIn_awready) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT___GEN_2));
    ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT___GEN_4 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__nodeOut_awvalid) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeIn_awready));
    vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap__DOT__do_enq 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap__DOT__full)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT____Vcellinp__Queue4_BundleMap__io_enq_valid));
    vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_1__DOT__do_enq 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_1__DOT__full)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT____Vcellinp__Queue4_BundleMap_1__io_enq_valid));
    vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__in_awready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___axi4yank_2_auto_in_awready) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___in_awready_T));
    vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT____Vcellinp__Queue4_BundleMap_2__io_enq_valid 
        = ((IData)(ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT___GEN_4) 
           & ((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___axi4frag_auto_out_awid)));
    vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT____Vcellinp__Queue4_BundleMap_3__io_enq_valid 
        = ((IData)(ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT___GEN_4) 
           & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT___axi4frag_auto_out_awid)) 
              >> 1U));
    vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_2__DOT__do_deq 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_2__DOT__empty)) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT____Vcellinp__Queue4_BundleMap_2__io_deq_ready) 
              & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_2__DOT__empty)) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT____Vcellinp__Queue4_BundleMap_2__io_enq_valid))));
    vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_2__DOT__do_enq 
        = ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_2__DOT__empty) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT____Vcellinp__Queue4_BundleMap_2__io_deq_ready))) 
           & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_2__DOT__full)) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT____Vcellinp__Queue4_BundleMap_2__io_enq_valid)));
    vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_3__DOT__do_deq 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_3__DOT__empty)) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT____Vcellinp__Queue4_BundleMap_3__io_deq_ready) 
              & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_3__DOT__empty)) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT____Vcellinp__Queue4_BundleMap_3__io_enq_valid))));
    vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_3__DOT__do_enq 
        = ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_3__DOT__empty) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT____Vcellinp__Queue4_BundleMap_3__io_deq_ready))) 
           & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_3__DOT__full)) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT____Vcellinp__Queue4_BundleMap_3__io_enq_valid)));
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__28(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__28\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0 
        = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__io_c2b_rst_reg__DOT__reg_0;
}
