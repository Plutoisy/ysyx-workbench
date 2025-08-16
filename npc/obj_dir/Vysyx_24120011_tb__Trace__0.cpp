// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_24120011_tb__Syms.h"


void Vysyx_24120011_tb___024root__trace_chg_0_sub_0(Vysyx_24120011_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vysyx_24120011_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120011_tb___024root__trace_chg_0\n"); );
    // Init
    Vysyx_24120011_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_24120011_tb___024root*>(voidSelf);
    Vysyx_24120011_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vysyx_24120011_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vysyx_24120011_tb___024root__trace_chg_0_sub_0(Vysyx_24120011_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120011_tb___024root__trace_chg_0_sub_0\n"); );
    Vysyx_24120011_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgBit(oldp+0,((3U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011_SRAMUART__DOT__state))));
        bufp->chgBit(oldp+1,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_awvalid));
        bufp->chgIData(oldp+2,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_awaddr),32);
        bufp->chgCData(oldp+3,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_awsize),3);
        bufp->chgBit(oldp+4,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wvalid));
        bufp->chgIData(oldp+5,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wdata),32);
        bufp->chgCData(oldp+6,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wstrb),4);
        bufp->chgBit(oldp+7,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wlast));
        bufp->chgBit(oldp+8,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_bready));
        bufp->chgBit(oldp+9,((5U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011_SRAMUART__DOT__state))));
        bufp->chgBit(oldp+10,((1U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011_SRAMUART__DOT__state))));
        bufp->chgBit(oldp+11,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_arvalid));
        bufp->chgIData(oldp+12,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_araddr),32);
        bufp->chgCData(oldp+13,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_arlen),8);
        bufp->chgCData(oldp+14,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_arsize),3);
        bufp->chgCData(oldp+15,(((0U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                  ? 0U : ((1U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                           ? ((1U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__state))
                                               ? 1U
                                               : 0U)
                                           : 0U))),2);
        bufp->chgBit(oldp+16,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_rready));
        bufp->chgBit(oldp+17,((2U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011_SRAMUART__DOT__state))));
        bufp->chgIData(oldp+18,((((vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011_SRAMUART__DOT__sram
                                   [(0x3ffffffU & ((IData)(3U) 
                                                   + vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_araddr))] 
                                   << 0x18U) | (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011_SRAMUART__DOT__sram
                                                [(0x3ffffffU 
                                                  & ((IData)(2U) 
                                                     + vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_araddr))] 
                                                << 0x10U)) 
                                 | ((vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011_SRAMUART__DOT__sram
                                     [(0x3ffffffU & 
                                       ((IData)(1U) 
                                        + vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_araddr))] 
                                     << 8U) | vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011_SRAMUART__DOT__sram
                                    [(0x3ffffffU & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_araddr)]))),32);
        bufp->chgIData(oldp+19,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__araddr),32);
        bufp->chgBit(oldp+20,((3U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__state))));
        bufp->chgBit(oldp+21,(((1U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__state)) 
                               & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_arready))));
        bufp->chgCData(oldp+22,((((0xa0000000U <= vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__pc) 
                                  & (0xbfffffffU >= vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__pc))
                                  ? 1U : 0U)),8);
        bufp->chgIData(oldp+23,(((1U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__state))
                                  ? vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rdata
                                  : 0U)),32);
        bufp->chgBit(oldp+24,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__M0_rvalid));
        bufp->chgBit(oldp+25,((4U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__state))));
        bufp->chgBit(oldp+26,(((1U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__state)) 
                               & ((0U != (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state)) 
                                  && ((1U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                       ? (2U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011_SRAMUART__DOT__state))
                                       : ((2U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state)) 
                                          && (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__rvalid_reg)))))));
        bufp->chgBit(oldp+27,(((1U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__state)) 
                               & ((0U != (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
                                  && ((1U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
                                      && (3U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011_SRAMUART__DOT__state)))))));
        bufp->chgBit(oldp+28,(((1U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__state)) 
                               & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_bvalid))));
        bufp->chgIData(oldp+29,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__ALU_result),32);
        bufp->chgBit(oldp+30,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__arvalid));
        bufp->chgBit(oldp+31,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__arready));
        bufp->chgCData(oldp+32,(((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__arvalid)
                                  ? ((1U & (- (IData)(
                                                      (1U 
                                                       == 
                                                       (3U 
                                                        & ((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__mem_ctrl) 
                                                           >> 3U)))))) 
                                     | (2U & (- (IData)(
                                                        (2U 
                                                         == 
                                                         (3U 
                                                          & ((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__mem_ctrl) 
                                                             >> 3U)))))))
                                  : 2U)),3);
        bufp->chgIData(oldp+33,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__rdata),32);
        bufp->chgBit(oldp+34,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__rvalid));
        bufp->chgBit(oldp+35,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__rready));
        bufp->chgBit(oldp+36,(((2U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__state)) 
                               & ((0U != (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state)) 
                                  && ((1U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                       ? (2U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011_SRAMUART__DOT__state))
                                       : ((2U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state)) 
                                          && (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__rvalid_reg)))))));
        bufp->chgBit(oldp+37,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__awvalid));
        bufp->chgBit(oldp+38,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__awready));
        bufp->chgCData(oldp+39,(((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__awvalid)
                                  ? ((1U & (- (IData)(
                                                      (1U 
                                                       == 
                                                       (3U 
                                                        & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__mem_ctrl)))))) 
                                     | (2U & (- (IData)(
                                                        (2U 
                                                         == 
                                                         (3U 
                                                          & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__mem_ctrl)))))))
                                  : 2U)),3);
        bufp->chgIData(oldp+40,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__reg_wdata),32);
        bufp->chgCData(oldp+41,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__reg_wstrb),4);
        bufp->chgBit(oldp+42,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__wvalid));
        bufp->chgBit(oldp+43,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__wready));
        bufp->chgBit(oldp+44,(((2U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__state)) 
                               & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_bvalid))));
        bufp->chgBit(oldp+45,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__M1_bready));
        bufp->chgIData(oldp+46,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_araddr),32);
        bufp->chgBit(oldp+47,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_arvalid));
        bufp->chgBit(oldp+48,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_arready));
        bufp->chgCData(oldp+49,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_arlen),8);
        bufp->chgCData(oldp+50,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_arsize),3);
        bufp->chgCData(oldp+51,(((1U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__state))
                                  ? 1U : 0U)),2);
        bufp->chgIData(oldp+52,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rdata),32);
        bufp->chgBit(oldp+53,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rvalid));
        bufp->chgBit(oldp+54,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_rready));
        bufp->chgBit(oldp+55,(((0U != (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state)) 
                               && ((1U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                    ? (2U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011_SRAMUART__DOT__state))
                                    : ((2U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state)) 
                                       && (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__rvalid_reg))))));
        bufp->chgIData(oldp+56,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_awaddr),32);
        bufp->chgBit(oldp+57,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_awvalid));
        bufp->chgBit(oldp+58,(((0U != (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
                               && ((1U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
                                   && (3U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011_SRAMUART__DOT__state))))));
        bufp->chgCData(oldp+59,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_awsize),3);
        bufp->chgIData(oldp+60,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_wdata),32);
        bufp->chgCData(oldp+61,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_wstrb),4);
        bufp->chgBit(oldp+62,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_wvalid));
        bufp->chgBit(oldp+63,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_wlast));
        bufp->chgBit(oldp+64,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_bvalid));
        bufp->chgBit(oldp+65,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_bready));
        bufp->chgIData(oldp+66,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_araddr),32);
        bufp->chgBit(oldp+67,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_arvalid));
        bufp->chgBit(oldp+68,((1U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__state))));
        bufp->chgCData(oldp+69,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_arlen),8);
        bufp->chgCData(oldp+70,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_arsize),3);
        bufp->chgCData(oldp+71,(((0U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                  ? 0U : ((1U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                           ? 0U : (
                                                   (2U 
                                                    == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__state))
                                                     ? 1U
                                                     : 0U)
                                                    : 0U)))),2);
        bufp->chgIData(oldp+72,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__rdata_reg),32);
        bufp->chgBit(oldp+73,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__rvalid_reg));
        bufp->chgBit(oldp+74,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_rready));
        bufp->chgIData(oldp+75,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_awaddr),32);
        bufp->chgBit(oldp+76,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_awvalid));
        bufp->chgCData(oldp+77,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_awsize),3);
        bufp->chgIData(oldp+78,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_wdata),32);
        bufp->chgCData(oldp+79,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_wstrb),4);
        bufp->chgBit(oldp+80,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_wvalid));
        bufp->chgBit(oldp+81,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_wlast));
        bufp->chgBit(oldp+82,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_bready));
        bufp->chgIData(oldp+83,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__IFU_valid),32);
        bufp->chgBit(oldp+84,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__IFU_valid_delay));
        bufp->chgBit(oldp+85,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__IFU_valid_rising_edge));
        bufp->chgBit(oldp+86,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__LSU_rready_delay));
        bufp->chgBit(oldp+87,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__LSU_rready_rising_edge));
        bufp->chgBit(oldp+88,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__EXU_valid_delay));
        bufp->chgBit(oldp+89,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__EXU_valid_rising_edge));
        bufp->chgIData(oldp+90,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__npc),32);
        bufp->chgBit(oldp+91,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__EXU_valid));
        bufp->chgBit(oldp+92,((0U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__state))));
        bufp->chgIData(oldp+93,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__pc),32);
        bufp->chgIData(oldp+94,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__inst),32);
        bufp->chgBit(oldp+95,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__IFU_valid));
        bufp->chgBit(oldp+96,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__flush));
        bufp->chgBit(oldp+97,((0U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__state))));
        bufp->chgCData(oldp+98,(((4U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__opcode_type))
                                  ? ((2U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__opcode_type))
                                      ? 0U : ((1U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__opcode_type))
                                               ? 4U
                                               : 0U))
                                  : ((2U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__opcode_type))
                                      ? ((1U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__opcode_type))
                                          ? 0U : 1U)
                                      : ((1U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__opcode_type))
                                          ? 0U : ((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT____VdfgExtracted_h8f454d46__0)
                                                   ? 2U
                                                   : 
                                                  ((0x30200073U 
                                                    == vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst)
                                                    ? 3U
                                                    : 
                                                   ((0x73U 
                                                     == vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst)
                                                     ? 3U
                                                     : 0U))))))),3);
        bufp->chgCData(oldp+99,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__rd_ctrl),3);
        bufp->chgCData(oldp+100,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__ALU_ctrl),6);
        bufp->chgCData(oldp+101,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__mem_ctrl),7);
        bufp->chgCData(oldp+102,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__csr_ctrl),3);
        bufp->chgIData(oldp+103,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__pc),32);
        bufp->chgIData(oldp+104,(((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__DATAHAZARD_IDU_bypass)
                                   ? ((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__DATAHAZARD_IDU_rs1_or_rs2)
                                       ? vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__GPRs
                                      [(0xfU & (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst 
                                                >> 0xfU))]
                                       : vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__DATAHAZARD_IDU_r_ddata)
                                   : vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__GPRs
                                  [(0xfU & (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst 
                                            >> 0xfU))])),32);
        bufp->chgIData(oldp+105,(((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__DATAHAZARD_IDU_bypass)
                                   ? ((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__DATAHAZARD_IDU_rs1_or_rs2)
                                       ? vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__DATAHAZARD_IDU_r_ddata
                                       : vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__GPRs
                                      [(0xfU & (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst 
                                                >> 0x14U))])
                                   : vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__GPRs
                                  [(0xfU & (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst 
                                            >> 0x14U))])),32);
        bufp->chgIData(oldp+106,(((0x341U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__r_csr_addr))
                                   ? vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_CSR__DOT__mepc
                                   : ((0x300U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__r_csr_addr))
                                       ? vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_CSR__DOT__mstatus
                                       : ((0x342U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__r_csr_addr))
                                           ? vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_CSR__DOT__mcause
                                           : ((0x305U 
                                               == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__r_csr_addr))
                                               ? vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_CSR__DOT__mtvec
                                               : ((0xf11U 
                                                   == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__r_csr_addr))
                                                   ? 0x79737978U
                                                   : 
                                                  ((0xf12U 
                                                    == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__r_csr_addr))
                                                    ? 0x1700acbU
                                                    : 0U))))))),32);
        bufp->chgIData(oldp+107,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__imm),32);
        bufp->chgCData(oldp+108,((0xfU & (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst 
                                          >> 7U))),4);
        bufp->chgSData(oldp+109,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__w_csr_addr),12);
        bufp->chgBit(oldp+110,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__IDU_valid));
        bufp->chgCData(oldp+111,((0xfU & (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst 
                                          >> 0xfU))),4);
        bufp->chgCData(oldp+112,((0xfU & (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst 
                                          >> 0x14U))),4);
        bufp->chgIData(oldp+113,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__GPRs
                                 [(0xfU & (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst 
                                           >> 0xfU))]),32);
        bufp->chgIData(oldp+114,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__GPRs
                                 [(0xfU & (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst 
                                           >> 0x14U))]),32);
        bufp->chgSData(oldp+115,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__r_csr_addr),12);
        bufp->chgBit(oldp+116,((0U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__state))));
        bufp->chgCData(oldp+117,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__mem_ctrl),7);
        bufp->chgIData(oldp+118,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__src2),32);
        bufp->chgCData(oldp+119,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__rd),4);
        bufp->chgSData(oldp+120,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__w_csr_addr),12);
        bufp->chgIData(oldp+121,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__ALU_result),32);
        bufp->chgIData(oldp+122,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__rd_data),32);
        bufp->chgCData(oldp+123,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__EXU_MEM_rd_data_type),2);
        bufp->chgIData(oldp+124,(((1U == (3U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__csr_ctrl)))
                                   ? vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__src1
                                   : ((2U == (3U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__csr_ctrl)))
                                       ? vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__ALU_result
                                       : ((3U == (3U 
                                                  & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__csr_ctrl)))
                                           ? vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__pc
                                           : 0U)))),32);
        bufp->chgBit(oldp+125,((0U != (3U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__csr_ctrl)))));
        bufp->chgBit(oldp+126,((1U & ((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__csr_ctrl) 
                                      >> 2U))));
        bufp->chgBit(oldp+127,((0U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__state))));
        bufp->chgCData(oldp+128,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__rd),4);
        bufp->chgSData(oldp+129,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__w_csr_addr),12);
        bufp->chgIData(oldp+130,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__MEM_WBU_rd_data),32);
        bufp->chgBit(oldp+131,(((0U != (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__rd_data_type)) 
                                & ((0U != (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__state)) 
                                   & (0U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__next_state))))));
        bufp->chgIData(oldp+132,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__w_csr_data),32);
        bufp->chgBit(oldp+133,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__w_csr_en));
        bufp->chgBit(oldp+134,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__w_csr_ecall));
        bufp->chgBit(oldp+135,(((0U != (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__state)) 
                                & (0U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__next_state)))));
        bufp->chgCData(oldp+136,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__rd_data_type),2);
        bufp->chgIData(oldp+137,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__GPRs
                                 [0xaU]),32);
        bufp->chgBit(oldp+138,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__DATAHAZARD_stop_pipe));
        bufp->chgIData(oldp+139,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__DATAHAZARD_IDU_r_ddata),32);
        bufp->chgBit(oldp+140,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__DATAHAZARD_IDU_rs1_or_rs2));
        bufp->chgBit(oldp+141,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__DATAHAZARD_IDU_bypass));
        bufp->chgCData(oldp+142,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__state),3);
        bufp->chgCData(oldp+143,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__next_state),3);
        bufp->chgCData(oldp+144,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__last_master),3);
        bufp->chgBit(oldp+145,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__done));
        bufp->chgIData(oldp+146,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_CSR__DOT__mepc),32);
        bufp->chgIData(oldp+147,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_CSR__DOT__mstatus),32);
        bufp->chgIData(oldp+148,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_CSR__DOT__mcause),32);
        bufp->chgIData(oldp+149,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_CSR__DOT__mtvec),32);
        bufp->chgCData(oldp+150,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__state),3);
        bufp->chgCData(oldp+151,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__next_state),3);
        bufp->chgQData(oldp+152,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__mtime),64);
        bufp->chgIData(oldp+154,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__miss_counter_branch),32);
        bufp->chgIData(oldp+155,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__all_counter_branch),32);
        bufp->chgCData(oldp+156,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__pc_ctrl),3);
        bufp->chgCData(oldp+157,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__rd_ctrl),3);
        bufp->chgCData(oldp+158,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__ALU_ctrl),6);
        bufp->chgCData(oldp+159,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__csr_ctrl),3);
        bufp->chgIData(oldp+160,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__pc),32);
        bufp->chgIData(oldp+161,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__src1),32);
        bufp->chgIData(oldp+162,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__r_csr_data),32);
        bufp->chgIData(oldp+163,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__imm),32);
        bufp->chgCData(oldp+164,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__state),2);
        bufp->chgCData(oldp+165,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__next_state),2);
        bufp->chgIData(oldp+166,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__B),32);
        bufp->chgIData(oldp+167,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__B_in),32);
        bufp->chgIData(oldp+168,(((1U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__ALU_ctrl))
                                   ? vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT____VdfgRegularize_he4da4b0f_3_1
                                   : vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__B)),32);
        bufp->chgIData(oldp+169,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__ALUout_tmp),32);
        bufp->chgBit(oldp+170,((1U & (IData)((1ULL 
                                              & (((QData)((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__src1)) 
                                                  + (QData)((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__B_in))) 
                                                 >> 0x20U))))));
        bufp->chgBit(oldp+171,((((vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__src1 
                                  >> 0x1fU) == (((1U 
                                                  & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__ALU_ctrl))
                                                  ? vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT____VdfgRegularize_he4da4b0f_3_1
                                                  : vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__B) 
                                                >> 0x1fU)) 
                                & ((vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__src1 
                                    >> 0x1fU) != (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__ALUout_tmp 
                                                  >> 0x1fU)))));
        bufp->chgBit(oldp+172,((1U & (~ (IData)((1ULL 
                                                 & (((QData)((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__src1)) 
                                                     + (QData)((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__B_in))) 
                                                    >> 0x20U)))))));
        bufp->chgBit(oldp+173,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__sless));
        bufp->chgBit(oldp+174,((vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__B 
                                == vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__src1)));
        bufp->chgBit(oldp+175,((vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__src1 
                                != vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__B)));
        bufp->chgIData(oldp+176,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__GPRs[0]),32);
        bufp->chgIData(oldp+177,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__GPRs[1]),32);
        bufp->chgIData(oldp+178,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__GPRs[2]),32);
        bufp->chgIData(oldp+179,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__GPRs[3]),32);
        bufp->chgIData(oldp+180,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__GPRs[4]),32);
        bufp->chgIData(oldp+181,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__GPRs[5]),32);
        bufp->chgIData(oldp+182,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__GPRs[6]),32);
        bufp->chgIData(oldp+183,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__GPRs[7]),32);
        bufp->chgIData(oldp+184,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__GPRs[8]),32);
        bufp->chgIData(oldp+185,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__GPRs[9]),32);
        bufp->chgIData(oldp+186,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__GPRs[10]),32);
        bufp->chgIData(oldp+187,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__GPRs[11]),32);
        bufp->chgIData(oldp+188,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__GPRs[12]),32);
        bufp->chgIData(oldp+189,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__GPRs[13]),32);
        bufp->chgIData(oldp+190,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__GPRs[14]),32);
        bufp->chgIData(oldp+191,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__GPRs[15]),32);
        bufp->chgIData(oldp+192,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__regout[0]),32);
        bufp->chgIData(oldp+193,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__regout[1]),32);
        bufp->chgIData(oldp+194,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__regout[2]),32);
        bufp->chgIData(oldp+195,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__regout[3]),32);
        bufp->chgIData(oldp+196,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__regout[4]),32);
        bufp->chgIData(oldp+197,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__regout[5]),32);
        bufp->chgIData(oldp+198,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__regout[6]),32);
        bufp->chgIData(oldp+199,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__regout[7]),32);
        bufp->chgIData(oldp+200,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__regout[8]),32);
        bufp->chgIData(oldp+201,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__regout[9]),32);
        bufp->chgIData(oldp+202,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__regout[10]),32);
        bufp->chgIData(oldp+203,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__regout[11]),32);
        bufp->chgIData(oldp+204,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__regout[12]),32);
        bufp->chgIData(oldp+205,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__regout[13]),32);
        bufp->chgIData(oldp+206,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__regout[14]),32);
        bufp->chgIData(oldp+207,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__regout[15]),32);
        bufp->chgIData(oldp+208,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst),32);
        bufp->chgCData(oldp+209,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__state),2);
        bufp->chgCData(oldp+210,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__next_state),2);
        bufp->chgBit(oldp+211,(((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__DATAHAZARD_stop_pipe) 
                                & (1U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__state)))));
        bufp->chgBit(oldp+212,(((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__DATAHAZARD_IDU_bypass) 
                                & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__IDU_valid))));
        bufp->chgCData(oldp+213,((0x7fU & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst)),7);
        bufp->chgCData(oldp+214,((7U & (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst 
                                        >> 0xcU))),3);
        bufp->chgCData(oldp+215,((vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst 
                                  >> 0x19U)),7);
        bufp->chgCData(oldp+216,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__opcode_type),3);
        bufp->chgBit(oldp+217,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__flushing));
        bufp->chgIData(oldp+218,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__cycle_counter),32);
        bufp->chgIData(oldp+219,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__miss_counter),32);
        bufp->chgCData(oldp+220,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__state),3);
        bufp->chgCData(oldp+221,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__next_state),3);
        bufp->chgBit(oldp+222,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__cache_IFU_valid));
        bufp->chgWData(oldp+223,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__icache),94);
        bufp->chgIData(oldp+226,((vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__pc 
                                  >> 3U)),29);
        bufp->chgCData(oldp+227,((7U & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__pc)),3);
        bufp->chgIData(oldp+228,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__inst_cache),32);
        bufp->chgBit(oldp+229,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__hit));
        bufp->chgBit(oldp+230,(((2U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__state)) 
                                & (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__icache[2U] 
                                   >> 0x1dU))));
        bufp->chgBit(oldp+231,(((2U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__state)) 
                                & ((vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__pc 
                                    >> 3U) == (0x1fffffffU 
                                               & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__icache[2U])))));
        bufp->chgIData(oldp+232,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__cached_size),32);
        bufp->chgCData(oldp+233,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__mem_ctrl),7);
        bufp->chgIData(oldp+234,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__src2),32);
        bufp->chgIData(oldp+235,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__r_mem_data),32);
        bufp->chgIData(oldp+236,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__rd_data),32);
        bufp->chgCData(oldp+237,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__state),3);
        bufp->chgCData(oldp+238,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__next_state),3);
        bufp->chgCData(oldp+239,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__wdata_format),6);
        bufp->chgIData(oldp+240,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__rdata_mask),32);
        bufp->chgIData(oldp+241,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__cycle_counter),32);
        bufp->chgBit(oldp+242,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__LSU_working_delay));
        bufp->chgCData(oldp+243,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state),3);
        bufp->chgCData(oldp+244,(((0U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                   ? ((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_arvalid)
                                       ? (((0x2000048U 
                                            == vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_araddr) 
                                           | (0x200004cU 
                                              == vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_araddr))
                                           ? 2U : 1U)
                                       : 0U) : ((1U 
                                                 == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                                 ? 
                                                (((2U 
                                                   == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011_SRAMUART__DOT__state)) 
                                                  & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_rready))
                                                  ? 0U
                                                  : 1U)
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                                  ? 
                                                 (((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__rvalid_reg) 
                                                   & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_rready))
                                                   ? 0U
                                                   : 2U)
                                                  : 0U)))),3);
        bufp->chgCData(oldp+245,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state),3);
        bufp->chgCData(oldp+246,(((0U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                   ? ((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_awvalid)
                                       ? 1U : 0U) : 
                                  ((1U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                    ? (((5U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011_SRAMUART__DOT__state)) 
                                        & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_bready))
                                        ? 0U : 1U) : 
                                   ((2U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                     ? 2U : 0U)))),3);
        bufp->chgBit(oldp+247,(((2U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011_SRAMUART__DOT__state)) 
                                & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_rready))));
        bufp->chgBit(oldp+248,(((5U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011_SRAMUART__DOT__state)) 
                                & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_bready))));
        bufp->chgBit(oldp+249,(((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__rvalid_reg) 
                                & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_rready))));
        bufp->chgBit(oldp+250,(((0xfU & (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst 
                                         >> 0xfU)) 
                                != (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__rd))));
        bufp->chgBit(oldp+251,(((0xfU & (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst 
                                         >> 0xfU)) 
                                != (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__rd))));
        bufp->chgBit(oldp+252,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_data_hazard_detection__DOT__hazard_exu));
        bufp->chgBit(oldp+253,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_data_hazard_detection__DOT__hazard_mem));
        bufp->chgCData(oldp+254,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011_SRAMUART__DOT__state),3);
        bufp->chgCData(oldp+255,(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011_SRAMUART__DOT__next_state),3);
    }
    bufp->chgBit(oldp+256,(vlSelfRef.clock));
    bufp->chgBit(oldp+257,(vlSelfRef.reset));
}

void Vysyx_24120011_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120011_tb___024root__trace_cleanup\n"); );
    // Init
    Vysyx_24120011_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_24120011_tb___024root*>(voidSelf);
    Vysyx_24120011_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
