// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_24120011__Syms.h"


void Vysyx_24120011___024root__trace_chg_0_sub_0(Vysyx_24120011___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vysyx_24120011___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120011___024root__trace_chg_0\n"); );
    // Init
    Vysyx_24120011___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_24120011___024root*>(voidSelf);
    Vysyx_24120011__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vysyx_24120011___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vysyx_24120011___024root__trace_chg_0_sub_0(Vysyx_24120011___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120011___024root__trace_chg_0_sub_0\n"); );
    Vysyx_24120011__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgIData(oldp+0,(((2U & (IData)(vlSelfRef.ysyx_24120011__DOT__pc_ctrl))
                                 ? ((1U & (IData)(vlSelfRef.ysyx_24120011__DOT__pc_ctrl))
                                     ? vlSelfRef.ysyx_24120011__DOT__r_csr_data
                                     : vlSelfRef.ysyx_24120011__DOT__alu_result)
                                 : ((1U & (IData)(vlSelfRef.ysyx_24120011__DOT__pc_ctrl))
                                     ? vlSelfRef.ysyx_24120011__DOT__i_PCProcessor__DOT__pc_add_imme
                                     : (((0x63U == 
                                          (0x7fU & vlSelfRef.ysyx_24120011__DOT__inst)) 
                                         & vlSelfRef.ysyx_24120011__DOT__alu_result)
                                         ? vlSelfRef.ysyx_24120011__DOT__i_PCProcessor__DOT__pc_add_imme
                                         : ((IData)(4U) 
                                            + vlSelfRef.ysyx_24120011__DOT__pc))))),32);
        bufp->chgCData(oldp+1,((0x1fU & (vlSelfRef.ysyx_24120011__DOT__inst 
                                         >> 0xfU))),5);
        bufp->chgCData(oldp+2,((0x1fU & (vlSelfRef.ysyx_24120011__DOT__inst 
                                         >> 0x14U))),5);
        bufp->chgCData(oldp+3,((0x1fU & (vlSelfRef.ysyx_24120011__DOT__inst 
                                         >> 7U))),5);
        bufp->chgCData(oldp+4,((7U & (vlSelfRef.ysyx_24120011__DOT__inst 
                                      >> 0xcU))),3);
        bufp->chgCData(oldp+5,((vlSelfRef.ysyx_24120011__DOT__inst 
                                >> 0x19U)),7);
        bufp->chgIData(oldp+6,(vlSelfRef.ysyx_24120011__DOT__imme),32);
        bufp->chgIData(oldp+7,(((8U & (IData)(vlSelfRef.ysyx_24120011__DOT__rd_ctrl))
                                 ? 0U : ((4U & (IData)(vlSelfRef.ysyx_24120011__DOT__rd_ctrl))
                                          ? ((2U & (IData)(vlSelfRef.ysyx_24120011__DOT__rd_ctrl))
                                              ? ((1U 
                                                  & (IData)(vlSelfRef.ysyx_24120011__DOT__rd_ctrl))
                                                  ? 0U
                                                  : vlSelfRef.ysyx_24120011__DOT__r_csr_data)
                                              : ((1U 
                                                  & (IData)(vlSelfRef.ysyx_24120011__DOT__rd_ctrl))
                                                  ? vlSelfRef.ysyx_24120011__DOT__r_mem_data
                                                  : 0U))
                                          : ((2U & (IData)(vlSelfRef.ysyx_24120011__DOT__rd_ctrl))
                                              ? ((1U 
                                                  & (IData)(vlSelfRef.ysyx_24120011__DOT__rd_ctrl))
                                                  ? vlSelfRef.ysyx_24120011__DOT__imme
                                                  : vlSelfRef.ysyx_24120011__DOT__alu_result)
                                              : ((1U 
                                                  & (IData)(vlSelfRef.ysyx_24120011__DOT__rd_ctrl))
                                                  ? vlSelfRef.ysyx_24120011__DOT__i_PCProcessor__DOT__pc_add_imme
                                                  : 
                                                 ((IData)(4U) 
                                                  + vlSelfRef.ysyx_24120011__DOT__pc)))))),32);
        bufp->chgIData(oldp+8,(vlSelfRef.ysyx_24120011__DOT__r_mem_data),32);
        bufp->chgIData(oldp+9,(vlSelfRef.ysyx_24120011__DOT__src1),32);
        bufp->chgIData(oldp+10,(vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__Regs
                                [(0x1fU & (vlSelfRef.ysyx_24120011__DOT__inst 
                                           >> 0x14U))]),32);
        bufp->chgIData(oldp+11,(vlSelfRef.ysyx_24120011__DOT__i_PCProcessor__DOT__pc_add_imme),32);
        bufp->chgIData(oldp+12,(((IData)(4U) + vlSelfRef.ysyx_24120011__DOT__pc)),32);
        bufp->chgIData(oldp+13,(vlSelfRef.ysyx_24120011__DOT__ALUB),32);
        bufp->chgIData(oldp+14,(vlSelfRef.ysyx_24120011__DOT__alu_result),32);
        bufp->chgCData(oldp+15,(vlSelfRef.ysyx_24120011__DOT__pc_ctrl),2);
        bufp->chgCData(oldp+16,(vlSelfRef.ysyx_24120011__DOT__rd_ctrl),4);
        bufp->chgCData(oldp+17,(vlSelfRef.ysyx_24120011__DOT__ALUBctrl),2);
        bufp->chgBit(oldp+18,(((IData)(vlSelfRef.ysyx_24120011__DOT__LSU_valid) 
                               & (4U != (IData)(vlSelfRef.ysyx_24120011__DOT__rd_ctrl)))));
        bufp->chgBit(oldp+19,(vlSelfRef.ysyx_24120011__DOT__w_mem_en));
        bufp->chgBit(oldp+20,(vlSelfRef.ysyx_24120011__DOT__r_mem_en));
        bufp->chgBit(oldp+21,(vlSelfRef.ysyx_24120011__DOT__sign_extension));
        bufp->chgBit(oldp+22,(((0x63U == (0x7fU & vlSelfRef.ysyx_24120011__DOT__inst)) 
                               & vlSelfRef.ysyx_24120011__DOT__alu_result)));
        bufp->chgCData(oldp+23,(vlSelfRef.ysyx_24120011__DOT__w_mem_len),8);
        bufp->chgCData(oldp+24,(vlSelfRef.ysyx_24120011__DOT__r_mem_len),8);
        bufp->chgCData(oldp+25,(vlSelfRef.ysyx_24120011__DOT__ALU_ctrl),4);
        bufp->chgCData(oldp+26,(vlSelfRef.ysyx_24120011__DOT__w_csr_data_ctrl),4);
        bufp->chgIData(oldp+27,(vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__Regs
                                [0xaU]),32);
        bufp->chgSData(oldp+28,(vlSelfRef.ysyx_24120011__DOT__w_csr_addr),12);
        bufp->chgSData(oldp+29,(vlSelfRef.ysyx_24120011__DOT__r_csr_addr),12);
        bufp->chgBit(oldp+30,(vlSelfRef.ysyx_24120011__DOT__w_csr_en));
        bufp->chgBit(oldp+31,(vlSelfRef.ysyx_24120011__DOT__r_csr_en));
        bufp->chgBit(oldp+32,(vlSelfRef.ysyx_24120011__DOT__w_csr_ecall));
        bufp->chgIData(oldp+33,(vlSelfRef.ysyx_24120011__DOT__w_csr_data),32);
        bufp->chgIData(oldp+34,(vlSelfRef.ysyx_24120011__DOT__r_csr_data),32);
        bufp->chgIData(oldp+35,(vlSelfRef.ysyx_24120011__DOT__pc),32);
        bufp->chgIData(oldp+36,(vlSelfRef.ysyx_24120011__DOT__inst),32);
        bufp->chgBit(oldp+37,(vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__cache_IFU_valid));
        bufp->chgBit(oldp+38,(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__reg_EXU_valid));
        bufp->chgBit(oldp+39,(vlSelfRef.ysyx_24120011__DOT__LSU_valid));
        bufp->chgBit(oldp+40,(vlSelfRef.ysyx_24120011__DOT__LSU_ready));
        bufp->chgBit(oldp+41,(vlSelfRef.ysyx_24120011__DOT__EXU_ready));
        bufp->chgIData(oldp+42,(vlSelfRef.ysyx_24120011__DOT__LSU_valid),32);
        bufp->chgIData(oldp+43,(vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__araddr),32);
        bufp->chgBit(oldp+44,((2U == (IData)(vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__state))));
        bufp->chgBit(oldp+45,(((1U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_state)) 
                               & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_arready))));
        bufp->chgCData(oldp+46,(((0xa0U == (vlSelfRef.ysyx_24120011__DOT__pc 
                                            >> 0x18U))
                                  ? 1U : 0U)),8);
        bufp->chgIData(oldp+47,(((1U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_state))
                                  ? vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rdata
                                  : 0U)),32);
        bufp->chgBit(oldp+48,(vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__rvalid));
        bufp->chgBit(oldp+49,((3U == (IData)(vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__state))));
        bufp->chgBit(oldp+50,(((1U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_state)) 
                               & ((1U & (~ ((IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state) 
                                            >> 2U))) 
                                  && ((2U & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                       ? ((1U & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                           ? (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__rvalid_reg)
                                           : (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__rvalid_reg))
                                       : ((1U & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state)) 
                                          && (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__rvalid_reg)))))));
        bufp->chgBit(oldp+51,(((1U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__write_state)) 
                               & ((1U & (~ ((IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
                                            >> 2U))) 
                                  && ((2U & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                       ? ((1U & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                           ? (3U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__state))
                                           : (3U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__state)))
                                       : ((1U & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
                                          && (3U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__state))))))));
        bufp->chgBit(oldp+52,(((1U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__write_state)) 
                               & ((1U & (~ ((IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
                                            >> 2U))) 
                                  && ((2U & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                       ? ((1U & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                           ? (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__wready_reg)
                                           : (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__wready_reg))
                                       : ((1U & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
                                          && (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__wready_reg)))))));
        bufp->chgBit(oldp+53,(((1U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__write_state)) 
                               & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_bvalid))));
        bufp->chgIData(oldp+54,(((1U == (IData)(vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__state))
                                  ? vlSelfRef.ysyx_24120011__DOT__alu_result
                                  : 0U)),32);
        bufp->chgBit(oldp+55,(vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__arvalid));
        bufp->chgBit(oldp+56,(((2U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_state)) 
                               & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_arready))));
        bufp->chgCData(oldp+57,(((IData)(vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__arvalid)
                                  ? 2U : ((1U & (- (IData)(
                                                           (2U 
                                                            == (IData)(vlSelfRef.ysyx_24120011__DOT__r_mem_len))))) 
                                          | (2U & (- (IData)(
                                                             (4U 
                                                              == (IData)(vlSelfRef.ysyx_24120011__DOT__r_mem_len)))))))),3);
        bufp->chgIData(oldp+58,(((2U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_state))
                                  ? vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rdata
                                  : 0U)),32);
        bufp->chgBit(oldp+59,(vlSelfRef.ysyx_24120011__DOT__M1_rvalid));
        bufp->chgBit(oldp+60,(vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__rready));
        bufp->chgBit(oldp+61,(((2U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_state)) 
                               & ((1U & (~ ((IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state) 
                                            >> 2U))) 
                                  && ((2U & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                       ? ((1U & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                           ? (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__rvalid_reg)
                                           : (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__rvalid_reg))
                                       : ((1U & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state)) 
                                          && (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__rvalid_reg)))))));
        bufp->chgIData(oldp+62,(((3U == (IData)(vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__state))
                                  ? vlSelfRef.ysyx_24120011__DOT__alu_result
                                  : 0U)),32);
        bufp->chgBit(oldp+63,(vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__awvalid));
        bufp->chgBit(oldp+64,(((2U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__write_state)) 
                               & ((1U & (~ ((IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
                                            >> 2U))) 
                                  && ((2U & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                       ? ((1U & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                           ? (3U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__state))
                                           : (3U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__state)))
                                       : ((1U & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
                                          && (3U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__state))))))));
        bufp->chgCData(oldp+65,(((IData)(vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__awvalid)
                                  ? 2U : ((1U & (- (IData)(
                                                           (2U 
                                                            == (IData)(vlSelfRef.ysyx_24120011__DOT__w_mem_len))))) 
                                          | (2U & (- (IData)(
                                                             (4U 
                                                              == (IData)(vlSelfRef.ysyx_24120011__DOT__w_mem_len)))))))),3);
        bufp->chgIData(oldp+66,(((4U == (IData)(vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__state))
                                  ? vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__Regs
                                 [(0x1fU & (vlSelfRef.ysyx_24120011__DOT__inst 
                                            >> 0x14U))]
                                  : 0U)),32);
        bufp->chgCData(oldp+67,(((4U == (IData)(vlSelfRef.ysyx_24120011__DOT__w_mem_len))
                                  ? 0xfU : ((2U == (IData)(vlSelfRef.ysyx_24120011__DOT__w_mem_len))
                                             ? 3U : 1U))),4);
        bufp->chgBit(oldp+68,(vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__wvalid));
        bufp->chgBit(oldp+69,(vlSelfRef.ysyx_24120011__DOT__M1_wready));
        bufp->chgBit(oldp+70,(vlSelfRef.ysyx_24120011__DOT__M1_bvalid));
        bufp->chgBit(oldp+71,(vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__bready));
        bufp->chgIData(oldp+72,(vlSelfRef.ysyx_24120011__DOT__S0_araddr),32);
        bufp->chgBit(oldp+73,(vlSelfRef.ysyx_24120011__DOT__S0_arvalid));
        bufp->chgBit(oldp+74,(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_arready));
        bufp->chgCData(oldp+75,(vlSelfRef.ysyx_24120011__DOT__S0_arlen),8);
        bufp->chgCData(oldp+76,(vlSelfRef.ysyx_24120011__DOT__S0_arsize),3);
        bufp->chgCData(oldp+77,(((1U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_state))
                                  ? 1U : 0U)),2);
        bufp->chgIData(oldp+78,(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rdata),32);
        bufp->chgBit(oldp+79,(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rvalid));
        bufp->chgBit(oldp+80,(vlSelfRef.ysyx_24120011__DOT__S0_rready));
        bufp->chgBit(oldp+81,(((1U & (~ ((IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state) 
                                         >> 2U))) && 
                               ((2U & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                 ? ((1U & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                     ? (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__rvalid_reg)
                                     : (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__rvalid_reg))
                                 : ((1U & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state)) 
                                    && (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__rvalid_reg))))));
        bufp->chgIData(oldp+82,(vlSelfRef.ysyx_24120011__DOT__S0_awaddr),32);
        bufp->chgBit(oldp+83,(vlSelfRef.ysyx_24120011__DOT__S0_awvalid));
        bufp->chgBit(oldp+84,(((1U & (~ ((IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
                                         >> 2U))) && 
                               ((2U & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                 ? ((1U & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                     ? (3U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__state))
                                     : (3U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__state)))
                                 : ((1U & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
                                    && (3U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__state)))))));
        bufp->chgCData(oldp+85,(vlSelfRef.ysyx_24120011__DOT__S0_awsize),3);
        bufp->chgIData(oldp+86,(vlSelfRef.ysyx_24120011__DOT__S0_wdata),32);
        bufp->chgCData(oldp+87,(vlSelfRef.ysyx_24120011__DOT__S0_wstrb),4);
        bufp->chgBit(oldp+88,(vlSelfRef.ysyx_24120011__DOT__S0_wvalid));
        bufp->chgBit(oldp+89,(((1U & (~ ((IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
                                         >> 2U))) && 
                               ((2U & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                 ? ((1U & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                     ? (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__wready_reg)
                                     : (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__wready_reg))
                                 : ((1U & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
                                    && (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__wready_reg))))));
        bufp->chgBit(oldp+90,(vlSelfRef.ysyx_24120011__DOT__S0_wlast));
        bufp->chgBit(oldp+91,(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_bvalid));
        bufp->chgBit(oldp+92,(vlSelfRef.ysyx_24120011__DOT__S0_bready));
        bufp->chgIData(oldp+93,(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_araddr),32);
        bufp->chgBit(oldp+94,(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_arvalid));
        bufp->chgBit(oldp+95,((1U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__state))));
        bufp->chgCData(oldp+96,(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_arlen),8);
        bufp->chgCData(oldp+97,(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_arsize),3);
        bufp->chgCData(oldp+98,(((4U & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                  ? 0U : ((2U & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                           ? 0U : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_state))
                                                     ? 1U
                                                     : 0U)
                                                    : 0U)))),2);
        bufp->chgIData(oldp+99,(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__rdata_reg),32);
        bufp->chgBit(oldp+100,(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__rvalid_reg));
        bufp->chgBit(oldp+101,(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_rready));
        bufp->chgIData(oldp+102,(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_awaddr),32);
        bufp->chgBit(oldp+103,(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_awvalid));
        bufp->chgBit(oldp+104,((3U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__state))));
        bufp->chgCData(oldp+105,(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_awsize),3);
        bufp->chgIData(oldp+106,(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wdata),32);
        bufp->chgCData(oldp+107,(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wstrb),4);
        bufp->chgBit(oldp+108,(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wvalid));
        bufp->chgBit(oldp+109,(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__wready_reg));
        bufp->chgBit(oldp+110,(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wlast));
        bufp->chgBit(oldp+111,((5U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__state))));
        bufp->chgBit(oldp+112,(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_bready));
        bufp->chgIData(oldp+113,(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_araddr),32);
        bufp->chgBit(oldp+114,(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_arvalid));
        bufp->chgBit(oldp+115,((1U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__state))));
        bufp->chgCData(oldp+116,(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_arlen),8);
        bufp->chgCData(oldp+117,(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_arsize),3);
        bufp->chgCData(oldp+118,(((4U & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                   ? 0U : ((2U & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                            ? ((1U 
                                                & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                                ? 0U
                                                : (
                                                   (1U 
                                                    == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_state))
                                                    ? 1U
                                                    : 0U))
                                            : 0U))),2);
        bufp->chgIData(oldp+119,(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__rdata_reg),32);
        bufp->chgBit(oldp+120,(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__rvalid_reg));
        bufp->chgBit(oldp+121,(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_rready));
        bufp->chgIData(oldp+122,(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_awaddr),32);
        bufp->chgBit(oldp+123,(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_awvalid));
        bufp->chgBit(oldp+124,((3U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__state))));
        bufp->chgCData(oldp+125,(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_awsize),3);
        bufp->chgIData(oldp+126,(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_wdata),32);
        bufp->chgCData(oldp+127,(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_wstrb),4);
        bufp->chgBit(oldp+128,(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_wvalid));
        bufp->chgBit(oldp+129,(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__wready_reg));
        bufp->chgBit(oldp+130,(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_wlast));
        bufp->chgBit(oldp+131,((5U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__state))));
        bufp->chgBit(oldp+132,(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_bready));
        bufp->chgIData(oldp+133,(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_araddr),32);
        bufp->chgBit(oldp+134,(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_arvalid));
        bufp->chgBit(oldp+135,((1U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__state))));
        bufp->chgCData(oldp+136,(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_arlen),8);
        bufp->chgCData(oldp+137,(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_arsize),3);
        bufp->chgCData(oldp+138,(((4U & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                   ? 0U : ((2U & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                            ? ((1U 
                                                & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                                ? (
                                                   (1U 
                                                    == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_state))
                                                    ? 1U
                                                    : 0U)
                                                : 0U)
                                            : 0U))),2);
        bufp->chgIData(oldp+139,(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__rdata_reg),32);
        bufp->chgBit(oldp+140,(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__rvalid_reg));
        bufp->chgBit(oldp+141,(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_rready));
        bufp->chgIData(oldp+142,(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_awaddr),32);
        bufp->chgBit(oldp+143,(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_awvalid));
        bufp->chgBit(oldp+144,((3U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__state))));
        bufp->chgCData(oldp+145,(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_awsize),3);
        bufp->chgIData(oldp+146,(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_wdata),32);
        bufp->chgCData(oldp+147,(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_wstrb),4);
        bufp->chgBit(oldp+148,(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_wvalid));
        bufp->chgBit(oldp+149,(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__wready_reg));
        bufp->chgBit(oldp+150,(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_wlast));
        bufp->chgBit(oldp+151,((5U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__state))));
        bufp->chgBit(oldp+152,(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_bready));
        bufp->chgBit(oldp+153,(vlSelfRef.ysyx_24120011__DOT__IFU_valid_delay));
        bufp->chgBit(oldp+154,(vlSelfRef.ysyx_24120011__DOT__IFU_valid_rising_edge));
        bufp->chgBit(oldp+155,(vlSelfRef.ysyx_24120011__DOT__LSU_rready_delay));
        bufp->chgBit(oldp+156,(vlSelfRef.ysyx_24120011__DOT__LSU_rready_rising_edge));
        bufp->chgBit(oldp+157,(vlSelfRef.ysyx_24120011__DOT__EXU_valid_delay));
        bufp->chgBit(oldp+158,(vlSelfRef.ysyx_24120011__DOT__EXU_valid_rising_edge));
        bufp->chgIData(oldp+159,(vlSelfRef.ysyx_24120011__DOT__i_Csr__DOT__mepc),32);
        bufp->chgIData(oldp+160,(vlSelfRef.ysyx_24120011__DOT__i_Csr__DOT__mstatus),32);
        bufp->chgIData(oldp+161,(vlSelfRef.ysyx_24120011__DOT__i_Csr__DOT__mcause),32);
        bufp->chgIData(oldp+162,(vlSelfRef.ysyx_24120011__DOT__i_Csr__DOT__mtvec),32);
        bufp->chgIData(oldp+163,(vlSelfRef.ysyx_24120011__DOT__i_Csr__DOT__mvendorid),32);
        bufp->chgIData(oldp+164,(vlSelfRef.ysyx_24120011__DOT__i_Csr__DOT__marchid),32);
        bufp->chgIData(oldp+165,(vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__cycle_counter),32);
        bufp->chgIData(oldp+166,(vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__miss_counter),32);
        bufp->chgCData(oldp+167,(vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__state),3);
        bufp->chgCData(oldp+168,(vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__next_state),3);
        bufp->chgWData(oldp+169,(vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__icache[0]),90);
        bufp->chgWData(oldp+172,(vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__icache[1]),90);
        bufp->chgWData(oldp+175,(vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__icache[2]),90);
        bufp->chgWData(oldp+178,(vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__icache[3]),90);
        bufp->chgWData(oldp+181,(vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__icache[4]),90);
        bufp->chgWData(oldp+184,(vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__icache[5]),90);
        bufp->chgWData(oldp+187,(vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__icache[6]),90);
        bufp->chgWData(oldp+190,(vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__icache[7]),90);
        bufp->chgWData(oldp+193,(vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__icache[8]),90);
        bufp->chgWData(oldp+196,(vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__icache[9]),90);
        bufp->chgWData(oldp+199,(vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__icache[10]),90);
        bufp->chgWData(oldp+202,(vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__icache[11]),90);
        bufp->chgWData(oldp+205,(vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__icache[12]),90);
        bufp->chgWData(oldp+208,(vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__icache[13]),90);
        bufp->chgWData(oldp+211,(vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__icache[14]),90);
        bufp->chgWData(oldp+214,(vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__icache[15]),90);
        bufp->chgIData(oldp+217,((vlSelfRef.ysyx_24120011__DOT__pc 
                                  >> 7U)),25);
        bufp->chgCData(oldp+218,((0xfU & (vlSelfRef.ysyx_24120011__DOT__pc 
                                          >> 3U))),4);
        bufp->chgCData(oldp+219,((7U & vlSelfRef.ysyx_24120011__DOT__pc)),3);
        bufp->chgIData(oldp+220,(vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__inst_cache),32);
        bufp->chgBit(oldp+221,(vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__hit));
        bufp->chgBit(oldp+222,(((1U == (IData)(vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__state)) 
                                & (vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__icache
                                   [(0xfU & (vlSelfRef.ysyx_24120011__DOT__pc 
                                             >> 3U))][2U] 
                                   >> 0x19U))));
        bufp->chgBit(oldp+223,(((1U == (IData)(vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__state)) 
                                & ((vlSelfRef.ysyx_24120011__DOT__pc 
                                    >> 7U) == (0x1ffffffU 
                                               & vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__icache
                                               [(0xfU 
                                                 & (vlSelfRef.ysyx_24120011__DOT__pc 
                                                    >> 3U))][2U])))));
        bufp->chgIData(oldp+224,(vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__cached_size),32);
        bufp->chgCData(oldp+225,(vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__state),3);
        bufp->chgCData(oldp+226,(vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__next_state),3);
        bufp->chgBit(oldp+227,(vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__start_read_delay));
        bufp->chgBit(oldp+228,(vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__start_write_delay));
        bufp->chgBit(oldp+229,((1U & (~ (IData)(vlSelfRef.ysyx_24120011__DOT__LSU_ready)))));
        bufp->chgCData(oldp+230,(vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__arvalid_delay_cnt),8);
        bufp->chgCData(oldp+231,(vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__awvalid_delay_cnt),8);
        bufp->chgCData(oldp+232,(vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__wvalid_delay_cnt),8);
        bufp->chgCData(oldp+233,(vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__rready_delay_cnt),8);
        bufp->chgCData(oldp+234,(vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__bready_delay_cnt),8);
        bufp->chgCData(oldp+235,(vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__LSFR_in),8);
        bufp->chgCData(oldp+236,(vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__random_delay),8);
        bufp->chgIData(oldp+237,(vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__Regs[0]),32);
        bufp->chgIData(oldp+238,(vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__Regs[1]),32);
        bufp->chgIData(oldp+239,(vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__Regs[2]),32);
        bufp->chgIData(oldp+240,(vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__Regs[3]),32);
        bufp->chgIData(oldp+241,(vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__Regs[4]),32);
        bufp->chgIData(oldp+242,(vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__Regs[5]),32);
        bufp->chgIData(oldp+243,(vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__Regs[6]),32);
        bufp->chgIData(oldp+244,(vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__Regs[7]),32);
        bufp->chgIData(oldp+245,(vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__Regs[8]),32);
        bufp->chgIData(oldp+246,(vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__Regs[9]),32);
        bufp->chgIData(oldp+247,(vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__Regs[10]),32);
        bufp->chgIData(oldp+248,(vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__Regs[11]),32);
        bufp->chgIData(oldp+249,(vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__Regs[12]),32);
        bufp->chgIData(oldp+250,(vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__Regs[13]),32);
        bufp->chgIData(oldp+251,(vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__Regs[14]),32);
        bufp->chgIData(oldp+252,(vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__Regs[15]),32);
        bufp->chgIData(oldp+253,(vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__Regs[16]),32);
        bufp->chgIData(oldp+254,(vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__Regs[17]),32);
        bufp->chgIData(oldp+255,(vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__Regs[18]),32);
        bufp->chgIData(oldp+256,(vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__Regs[19]),32);
        bufp->chgIData(oldp+257,(vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__Regs[20]),32);
        bufp->chgIData(oldp+258,(vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__Regs[21]),32);
        bufp->chgIData(oldp+259,(vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__Regs[22]),32);
        bufp->chgIData(oldp+260,(vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__Regs[23]),32);
        bufp->chgIData(oldp+261,(vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__Regs[24]),32);
        bufp->chgIData(oldp+262,(vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__Regs[25]),32);
        bufp->chgIData(oldp+263,(vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__Regs[26]),32);
        bufp->chgIData(oldp+264,(vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__Regs[27]),32);
        bufp->chgIData(oldp+265,(vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__Regs[28]),32);
        bufp->chgIData(oldp+266,(vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__Regs[29]),32);
        bufp->chgIData(oldp+267,(vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__Regs[30]),32);
        bufp->chgIData(oldp+268,(vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__Regs[31]),32);
        bufp->chgIData(oldp+269,(vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__regout[0]),32);
        bufp->chgIData(oldp+270,(vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__regout[1]),32);
        bufp->chgIData(oldp+271,(vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__regout[2]),32);
        bufp->chgIData(oldp+272,(vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__regout[3]),32);
        bufp->chgIData(oldp+273,(vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__regout[4]),32);
        bufp->chgIData(oldp+274,(vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__regout[5]),32);
        bufp->chgIData(oldp+275,(vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__regout[6]),32);
        bufp->chgIData(oldp+276,(vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__regout[7]),32);
        bufp->chgIData(oldp+277,(vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__regout[8]),32);
        bufp->chgIData(oldp+278,(vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__regout[9]),32);
        bufp->chgIData(oldp+279,(vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__regout[10]),32);
        bufp->chgIData(oldp+280,(vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__regout[11]),32);
        bufp->chgIData(oldp+281,(vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__regout[12]),32);
        bufp->chgIData(oldp+282,(vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__regout[13]),32);
        bufp->chgIData(oldp+283,(vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__regout[14]),32);
        bufp->chgIData(oldp+284,(vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__regout[15]),32);
        bufp->chgIData(oldp+285,(vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__regout[16]),32);
        bufp->chgIData(oldp+286,(vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__regout[17]),32);
        bufp->chgIData(oldp+287,(vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__regout[18]),32);
        bufp->chgIData(oldp+288,(vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__regout[19]),32);
        bufp->chgIData(oldp+289,(vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__regout[20]),32);
        bufp->chgIData(oldp+290,(vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__regout[21]),32);
        bufp->chgIData(oldp+291,(vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__regout[22]),32);
        bufp->chgIData(oldp+292,(vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__regout[23]),32);
        bufp->chgIData(oldp+293,(vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__regout[24]),32);
        bufp->chgIData(oldp+294,(vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__regout[25]),32);
        bufp->chgIData(oldp+295,(vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__regout[26]),32);
        bufp->chgIData(oldp+296,(vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__regout[27]),32);
        bufp->chgIData(oldp+297,(vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__regout[28]),32);
        bufp->chgIData(oldp+298,(vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__regout[29]),32);
        bufp->chgIData(oldp+299,(vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__regout[30]),32);
        bufp->chgIData(oldp+300,(vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__regout[31]),32);
        bufp->chgCData(oldp+301,(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_state),3);
        bufp->chgCData(oldp+302,(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_next_state),3);
        bufp->chgCData(oldp+303,(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__write_state),3);
        bufp->chgCData(oldp+304,(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__write_next_state),3);
        bufp->chgCData(oldp+305,(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__last_read_master),3);
        bufp->chgCData(oldp+306,(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__last_write_master),3);
        bufp->chgBit(oldp+307,(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_done));
        bufp->chgBit(oldp+308,(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__write_done));
        bufp->chgCData(oldp+309,(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__state),3);
        bufp->chgCData(oldp+310,(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__next_state),3);
        bufp->chgIData(oldp+311,(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__addr),32);
        bufp->chgCData(oldp+312,(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__read_delay_cnt),8);
        bufp->chgCData(oldp+313,(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__write_delay_cnt),8);
        bufp->chgBit(oldp+314,(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__pmem_readed));
        bufp->chgBit(oldp+315,(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__pmem_writed));
        bufp->chgCData(oldp+316,(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__LSFR_in),8);
        bufp->chgCData(oldp+317,(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__random_delay),8);
        bufp->chgQData(oldp+318,(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__mtime),64);
        bufp->chgIData(oldp+320,(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__u_ysyx_24120011_ALU__DOT__B_in),32);
        bufp->chgIData(oldp+321,(((1U & (IData)(vlSelfRef.ysyx_24120011__DOT__ALU_ctrl))
                                   ? vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__u_ysyx_24120011_ALU__DOT____VdfgRegularize_hba31148f_0_1
                                   : vlSelfRef.ysyx_24120011__DOT__ALUB)),32);
        bufp->chgIData(oldp+322,(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__u_ysyx_24120011_ALU__DOT__ALUout_tmp),32);
        bufp->chgBit(oldp+323,(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__u_ysyx_24120011_ALU__DOT__carry));
        bufp->chgBit(oldp+324,((((IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__u_ysyx_24120011_ALU__DOT____VdfgRegularize_hba31148f_0_3) 
                                 == (((1U & (IData)(vlSelfRef.ysyx_24120011__DOT__ALU_ctrl))
                                       ? vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__u_ysyx_24120011_ALU__DOT____VdfgRegularize_hba31148f_0_1
                                       : vlSelfRef.ysyx_24120011__DOT__ALUB) 
                                     >> 0x1fU)) & ((IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__u_ysyx_24120011_ALU__DOT____VdfgRegularize_hba31148f_0_3) 
                                                   != 
                                                   (vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__u_ysyx_24120011_ALU__DOT__ALUout_tmp 
                                                    >> 0x1fU)))));
        bufp->chgBit(oldp+325,((1U & (~ (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__u_ysyx_24120011_ALU__DOT__carry)))));
        bufp->chgBit(oldp+326,(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__u_ysyx_24120011_ALU__DOT__sless));
        bufp->chgBit(oldp+327,((vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__Regs
                                [(0x1fU & (vlSelfRef.ysyx_24120011__DOT__inst 
                                           >> 0xfU))] 
                                == vlSelfRef.ysyx_24120011__DOT__ALUB)));
        bufp->chgBit(oldp+328,((vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__Regs
                                [(0x1fU & (vlSelfRef.ysyx_24120011__DOT__inst 
                                           >> 0xfU))] 
                                != vlSelfRef.ysyx_24120011__DOT__ALUB)));
        bufp->chgCData(oldp+329,((0x7fU & vlSelfRef.ysyx_24120011__DOT__inst)),7);
        bufp->chgCData(oldp+330,(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__opcode_type),3);
        bufp->chgCData(oldp+331,(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__state),3);
        bufp->chgCData(oldp+332,(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__next_state),3);
        bufp->chgIData(oldp+333,(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__addr),32);
        bufp->chgCData(oldp+334,(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__read_delay_cnt),8);
        bufp->chgCData(oldp+335,(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__write_delay_cnt),8);
        bufp->chgBit(oldp+336,(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__pmem_readed));
        bufp->chgBit(oldp+337,(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__pmem_writed));
        bufp->chgCData(oldp+338,(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__LSFR_in),8);
        bufp->chgCData(oldp+339,(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__random_delay),8);
        bufp->chgCData(oldp+340,(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__state),3);
        bufp->chgCData(oldp+341,(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__next_state),3);
        bufp->chgIData(oldp+342,(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__addr),32);
        bufp->chgCData(oldp+343,(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__read_delay_cnt),8);
        bufp->chgCData(oldp+344,(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__write_delay_cnt),8);
        bufp->chgBit(oldp+345,(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__pmem_readed));
        bufp->chgBit(oldp+346,(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__pmem_writed));
        bufp->chgCData(oldp+347,(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__LSFR_in),8);
        bufp->chgCData(oldp+348,(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__random_delay),8);
        bufp->chgCData(oldp+349,(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state),3);
        bufp->chgCData(oldp+350,(((4U & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                   ? 0U : ((2U & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                            ? ((1U 
                                                & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                                ? (
                                                   ((IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__rvalid_reg) 
                                                    & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_rready))
                                                    ? 0U
                                                    : 3U)
                                                : (
                                                   ((IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__rvalid_reg) 
                                                    & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_rready))
                                                    ? 0U
                                                    : 2U))
                                            : ((1U 
                                                & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                                ? (
                                                   ((IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__rvalid_reg) 
                                                    & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_rready))
                                                    ? 0U
                                                    : 1U)
                                                : ((IData)(vlSelfRef.ysyx_24120011__DOT__S0_arvalid)
                                                    ? 
                                                   (((0xa0000048U 
                                                      == vlSelfRef.ysyx_24120011__DOT__S0_araddr) 
                                                     | (0xa000004cU 
                                                        == vlSelfRef.ysyx_24120011__DOT__S0_araddr))
                                                     ? 3U
                                                     : 1U)
                                                    : 0U))))),3);
        bufp->chgCData(oldp+351,(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state),3);
        bufp->chgCData(oldp+352,(((4U & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                   ? 0U : ((2U & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                            ? ((1U 
                                                & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                                ? (
                                                   ((5U 
                                                     == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__state)) 
                                                    & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_bready))
                                                    ? 0U
                                                    : 3U)
                                                : (
                                                   ((5U 
                                                     == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__state)) 
                                                    & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_bready))
                                                    ? 0U
                                                    : 2U))
                                            : ((1U 
                                                & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                                ? (
                                                   ((5U 
                                                     == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__state)) 
                                                    & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_bready))
                                                    ? 0U
                                                    : 1U)
                                                : ((IData)(vlSelfRef.ysyx_24120011__DOT__S0_awvalid)
                                                    ? 
                                                   ((0xa00003f8U 
                                                     == vlSelfRef.ysyx_24120011__DOT__S0_awaddr)
                                                     ? 2U
                                                     : 1U)
                                                    : 0U))))),3);
        bufp->chgBit(oldp+353,(((IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__rvalid_reg) 
                                & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_rready))));
        bufp->chgBit(oldp+354,(((5U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__state)) 
                                & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_bready))));
        bufp->chgBit(oldp+355,(((IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__rvalid_reg) 
                                & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_rready))));
        bufp->chgBit(oldp+356,(((5U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__state)) 
                                & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_bready))));
        bufp->chgBit(oldp+357,(((IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__rvalid_reg) 
                                & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_rready))));
        bufp->chgBit(oldp+358,(((5U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__state)) 
                                & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_bready))));
    }
    bufp->chgBit(oldp+359,(vlSelfRef.clock));
    bufp->chgBit(oldp+360,(vlSelfRef.reset));
    bufp->chgBit(oldp+361,(vlSelfRef.io_interrupt));
    bufp->chgBit(oldp+362,(vlSelfRef.io_master_awready));
    bufp->chgBit(oldp+363,(vlSelfRef.io_master_awvalid));
    bufp->chgIData(oldp+364,(vlSelfRef.io_master_awaddr),32);
    bufp->chgCData(oldp+365,(vlSelfRef.io_master_awid),4);
    bufp->chgCData(oldp+366,(vlSelfRef.io_master_awlen),8);
    bufp->chgCData(oldp+367,(vlSelfRef.io_master_awsize),3);
    bufp->chgCData(oldp+368,(vlSelfRef.io_master_awburst),2);
    bufp->chgBit(oldp+369,(vlSelfRef.io_master_wready));
    bufp->chgBit(oldp+370,(vlSelfRef.io_master_wvalid));
    bufp->chgIData(oldp+371,(vlSelfRef.io_master_wdata),32);
    bufp->chgCData(oldp+372,(vlSelfRef.io_master_wstrb),4);
    bufp->chgBit(oldp+373,(vlSelfRef.io_master_wlast));
    bufp->chgBit(oldp+374,(vlSelfRef.io_master_bready));
    bufp->chgBit(oldp+375,(vlSelfRef.io_master_bvalid));
    bufp->chgCData(oldp+376,(vlSelfRef.io_master_bresp),2);
    bufp->chgCData(oldp+377,(vlSelfRef.io_master_bid),4);
    bufp->chgBit(oldp+378,(vlSelfRef.io_master_arready));
    bufp->chgBit(oldp+379,(vlSelfRef.io_master_arvalid));
    bufp->chgIData(oldp+380,(vlSelfRef.io_master_araddr),32);
    bufp->chgCData(oldp+381,(vlSelfRef.io_master_arid),4);
    bufp->chgCData(oldp+382,(vlSelfRef.io_master_arlen),8);
    bufp->chgCData(oldp+383,(vlSelfRef.io_master_arsize),3);
    bufp->chgCData(oldp+384,(vlSelfRef.io_master_arburst),2);
    bufp->chgBit(oldp+385,(vlSelfRef.io_master_rready));
    bufp->chgBit(oldp+386,(vlSelfRef.io_master_rvalid));
    bufp->chgCData(oldp+387,(vlSelfRef.io_master_rresp),2);
    bufp->chgIData(oldp+388,(vlSelfRef.io_master_rdata),32);
    bufp->chgBit(oldp+389,(vlSelfRef.io_master_rlast));
    bufp->chgCData(oldp+390,(vlSelfRef.io_master_rid),4);
    bufp->chgBit(oldp+391,(vlSelfRef.io_slave_awready));
    bufp->chgBit(oldp+392,(vlSelfRef.io_slave_awvalid));
    bufp->chgIData(oldp+393,(vlSelfRef.io_slave_awaddr),32);
    bufp->chgCData(oldp+394,(vlSelfRef.io_slave_awid),4);
    bufp->chgCData(oldp+395,(vlSelfRef.io_slave_awlen),8);
    bufp->chgCData(oldp+396,(vlSelfRef.io_slave_awsize),3);
    bufp->chgCData(oldp+397,(vlSelfRef.io_slave_awburst),2);
    bufp->chgBit(oldp+398,(vlSelfRef.io_slave_wready));
    bufp->chgBit(oldp+399,(vlSelfRef.io_slave_wvalid));
    bufp->chgIData(oldp+400,(vlSelfRef.io_slave_wdata),32);
    bufp->chgCData(oldp+401,(vlSelfRef.io_slave_wstrb),4);
    bufp->chgBit(oldp+402,(vlSelfRef.io_slave_wlast));
    bufp->chgBit(oldp+403,(vlSelfRef.io_slave_bready));
    bufp->chgBit(oldp+404,(vlSelfRef.io_slave_bvalid));
    bufp->chgCData(oldp+405,(vlSelfRef.io_slave_bresp),2);
    bufp->chgCData(oldp+406,(vlSelfRef.io_slave_bid),4);
    bufp->chgBit(oldp+407,(vlSelfRef.io_slave_arready));
    bufp->chgBit(oldp+408,(vlSelfRef.io_slave_arvalid));
    bufp->chgIData(oldp+409,(vlSelfRef.io_slave_araddr),32);
    bufp->chgCData(oldp+410,(vlSelfRef.io_slave_arid),4);
    bufp->chgCData(oldp+411,(vlSelfRef.io_slave_arlen),8);
    bufp->chgCData(oldp+412,(vlSelfRef.io_slave_arsize),3);
    bufp->chgCData(oldp+413,(vlSelfRef.io_slave_arburst),2);
    bufp->chgBit(oldp+414,(vlSelfRef.io_slave_rready));
    bufp->chgBit(oldp+415,(vlSelfRef.io_slave_rvalid));
    bufp->chgCData(oldp+416,(vlSelfRef.io_slave_rresp),2);
    bufp->chgIData(oldp+417,(vlSelfRef.io_slave_rdata),32);
    bufp->chgBit(oldp+418,(vlSelfRef.io_slave_rlast));
    bufp->chgCData(oldp+419,(vlSelfRef.io_slave_rid),4);
}

void Vysyx_24120011___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120011___024root__trace_cleanup\n"); );
    // Init
    Vysyx_24120011___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_24120011___024root*>(voidSelf);
    Vysyx_24120011__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
