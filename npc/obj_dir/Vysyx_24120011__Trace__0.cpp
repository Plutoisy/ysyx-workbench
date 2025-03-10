// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_24120011__Syms.h"


void Vysyx_24120011___024root__trace_chg_sub_0(Vysyx_24120011___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vysyx_24120011___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120011___024root__trace_chg_top_0\n"); );
    // Init
    Vysyx_24120011___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_24120011___024root*>(voidSelf);
    Vysyx_24120011__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vysyx_24120011___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vysyx_24120011___024root__trace_chg_sub_0(Vysyx_24120011___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24120011__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120011___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(((2U & (IData)(vlSelf->ysyx_24120011__DOT__pc_ctrl))
                                 ? ((1U & (IData)(vlSelf->ysyx_24120011__DOT__pc_ctrl))
                                     ? vlSelf->ysyx_24120011__DOT__r_csr_data
                                     : vlSelf->ysyx_24120011__DOT__alu_result)
                                 : ((1U & (IData)(vlSelf->ysyx_24120011__DOT__pc_ctrl))
                                     ? vlSelf->ysyx_24120011__DOT__i_PCProcessor__DOT__pc_add_imme
                                     : (((0x63U == 
                                          (0x7fU & vlSelf->ysyx_24120011__DOT__inst)) 
                                         & vlSelf->ysyx_24120011__DOT__alu_result)
                                         ? vlSelf->ysyx_24120011__DOT__i_PCProcessor__DOT__pc_add_imme
                                         : ((IData)(4U) 
                                            + vlSelf->ysyx_24120011__DOT__pc))))),32);
        bufp->chgCData(oldp+1,((0x1fU & (vlSelf->ysyx_24120011__DOT__inst 
                                         >> 0xfU))),5);
        bufp->chgCData(oldp+2,((0x1fU & (vlSelf->ysyx_24120011__DOT__inst 
                                         >> 0x14U))),5);
        bufp->chgCData(oldp+3,((0x1fU & (vlSelf->ysyx_24120011__DOT__inst 
                                         >> 7U))),5);
        bufp->chgCData(oldp+4,((7U & (vlSelf->ysyx_24120011__DOT__inst 
                                      >> 0xcU))),3);
        bufp->chgCData(oldp+5,((vlSelf->ysyx_24120011__DOT__inst 
                                >> 0x19U)),7);
        bufp->chgIData(oldp+6,(vlSelf->ysyx_24120011__DOT__imme),32);
        bufp->chgIData(oldp+7,(((8U & (IData)(vlSelf->ysyx_24120011__DOT__rd_ctrl))
                                 ? 0U : ((4U & (IData)(vlSelf->ysyx_24120011__DOT__rd_ctrl))
                                          ? ((2U & (IData)(vlSelf->ysyx_24120011__DOT__rd_ctrl))
                                              ? ((1U 
                                                  & (IData)(vlSelf->ysyx_24120011__DOT__rd_ctrl))
                                                  ? 0U
                                                  : vlSelf->ysyx_24120011__DOT__r_csr_data)
                                              : ((1U 
                                                  & (IData)(vlSelf->ysyx_24120011__DOT__rd_ctrl))
                                                  ? vlSelf->ysyx_24120011__DOT__r_mem_data
                                                  : 0U))
                                          : ((2U & (IData)(vlSelf->ysyx_24120011__DOT__rd_ctrl))
                                              ? ((1U 
                                                  & (IData)(vlSelf->ysyx_24120011__DOT__rd_ctrl))
                                                  ? vlSelf->ysyx_24120011__DOT__imme
                                                  : vlSelf->ysyx_24120011__DOT__alu_result)
                                              : ((1U 
                                                  & (IData)(vlSelf->ysyx_24120011__DOT__rd_ctrl))
                                                  ? vlSelf->ysyx_24120011__DOT__i_PCProcessor__DOT__pc_add_imme
                                                  : 
                                                 ((IData)(4U) 
                                                  + vlSelf->ysyx_24120011__DOT__pc)))))),32);
        bufp->chgIData(oldp+8,(vlSelf->ysyx_24120011__DOT__r_mem_data),32);
        bufp->chgIData(oldp+9,(vlSelf->ysyx_24120011__DOT__src1),32);
        bufp->chgIData(oldp+10,(vlSelf->ysyx_24120011__DOT__src2),32);
        bufp->chgIData(oldp+11,(vlSelf->ysyx_24120011__DOT__i_PCProcessor__DOT__pc_add_imme),32);
        bufp->chgIData(oldp+12,(((IData)(4U) + vlSelf->ysyx_24120011__DOT__pc)),32);
        bufp->chgIData(oldp+13,(vlSelf->ysyx_24120011__DOT__ALUB),32);
        bufp->chgIData(oldp+14,(vlSelf->ysyx_24120011__DOT__alu_result),32);
        bufp->chgCData(oldp+15,(vlSelf->ysyx_24120011__DOT__pc_ctrl),2);
        bufp->chgCData(oldp+16,(vlSelf->ysyx_24120011__DOT__rd_ctrl),4);
        bufp->chgCData(oldp+17,(vlSelf->ysyx_24120011__DOT__ALUBctrl),2);
        bufp->chgBit(oldp+18,(((IData)(vlSelf->ysyx_24120011__DOT__LSU_valid) 
                               & (4U != (IData)(vlSelf->ysyx_24120011__DOT__rd_ctrl)))));
        bufp->chgBit(oldp+19,(vlSelf->ysyx_24120011__DOT__w_mem_en));
        bufp->chgBit(oldp+20,(vlSelf->ysyx_24120011__DOT__r_mem_en));
        bufp->chgBit(oldp+21,(vlSelf->ysyx_24120011__DOT__sign_extension));
        bufp->chgBit(oldp+22,(((0x63U == (0x7fU & vlSelf->ysyx_24120011__DOT__inst)) 
                               & vlSelf->ysyx_24120011__DOT__alu_result)));
        bufp->chgCData(oldp+23,(vlSelf->ysyx_24120011__DOT__w_mem_len),8);
        bufp->chgCData(oldp+24,(vlSelf->ysyx_24120011__DOT__r_mem_len),8);
        bufp->chgCData(oldp+25,(vlSelf->ysyx_24120011__DOT__ALU_ctrl),4);
        bufp->chgCData(oldp+26,(vlSelf->ysyx_24120011__DOT__w_csr_data_ctrl),4);
        bufp->chgIData(oldp+27,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__Regs
                                [0xaU]),32);
        bufp->chgSData(oldp+28,(vlSelf->ysyx_24120011__DOT__w_csr_addr),12);
        bufp->chgSData(oldp+29,(vlSelf->ysyx_24120011__DOT__r_csr_addr),12);
        bufp->chgBit(oldp+30,(vlSelf->ysyx_24120011__DOT__w_csr_en));
        bufp->chgBit(oldp+31,(vlSelf->ysyx_24120011__DOT__r_csr_en));
        bufp->chgBit(oldp+32,(vlSelf->ysyx_24120011__DOT__w_csr_ecall));
        bufp->chgIData(oldp+33,(vlSelf->ysyx_24120011__DOT__w_csr_data),32);
        bufp->chgIData(oldp+34,(vlSelf->ysyx_24120011__DOT__r_csr_data),32);
        bufp->chgIData(oldp+35,(vlSelf->ysyx_24120011__DOT__pc),32);
        bufp->chgIData(oldp+36,(vlSelf->ysyx_24120011__DOT__inst),32);
        bufp->chgBit(oldp+37,(vlSelf->ysyx_24120011__DOT__i_IFU__DOT__rready));
        bufp->chgBit(oldp+38,(vlSelf->ysyx_24120011__DOT__LSU_valid));
        bufp->chgBit(oldp+39,(vlSelf->ysyx_24120011__DOT__LSU_ready));
        bufp->chgIData(oldp+40,(vlSelf->ysyx_24120011__DOT__LSU_valid),32);
        bufp->chgBit(oldp+41,(vlSelf->ysyx_24120011__DOT__i_IFU__DOT__arvalid));
        bufp->chgBit(oldp+42,(((1U == (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_state)) 
                               & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_arready))));
        bufp->chgIData(oldp+43,(vlSelf->ysyx_24120011__DOT__M0_rdata),32);
        bufp->chgBit(oldp+44,(vlSelf->ysyx_24120011__DOT__M0_rvalid));
        bufp->chgBit(oldp+45,(((1U == (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_state)) 
                               & ((~ ((IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state) 
                                      >> 2U)) & ((2U 
                                                  & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                                   ? (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__rvalid_reg)
                                                   : (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__rvalid_reg))
                                                  : 
                                                 ((IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state) 
                                                  & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__rvalid_reg)))))));
        bufp->chgBit(oldp+46,(((1U == (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__write_state)) 
                               & ((~ ((IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
                                      >> 2U)) & ((2U 
                                                  & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                                   ? 
                                                  (3U 
                                                   == (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__state))
                                                   : 
                                                  (3U 
                                                   == (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__state)))
                                                  : 
                                                 ((IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
                                                  & (3U 
                                                     == (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__state))))))));
        bufp->chgBit(oldp+47,(((1U == (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__write_state)) 
                               & ((~ ((IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
                                      >> 2U)) & ((2U 
                                                  & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                                   ? (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__wready_reg)
                                                   : (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__wready_reg))
                                                  : 
                                                 ((IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
                                                  & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__wready_reg)))))));
        bufp->chgBit(oldp+48,(((1U == (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__write_state)) 
                               & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_bvalid))));
        bufp->chgIData(oldp+49,(((1U == (IData)(vlSelf->ysyx_24120011__DOT__i_LSU__DOT__state))
                                  ? vlSelf->ysyx_24120011__DOT__alu_result
                                  : 0U)),32);
        bufp->chgBit(oldp+50,(vlSelf->ysyx_24120011__DOT__i_LSU__DOT__arvalid));
        bufp->chgBit(oldp+51,(((2U == (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_state)) 
                               & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_arready))));
        bufp->chgCData(oldp+52,(((IData)(vlSelf->ysyx_24120011__DOT__i_LSU__DOT__arvalid)
                                  ? 2U : ((1U & (- (IData)(
                                                           (2U 
                                                            == (IData)(vlSelf->ysyx_24120011__DOT__r_mem_len))))) 
                                          | (2U & (- (IData)(
                                                             (4U 
                                                              == (IData)(vlSelf->ysyx_24120011__DOT__r_mem_len)))))))),3);
        bufp->chgIData(oldp+53,(vlSelf->ysyx_24120011__DOT__M1_rdata),32);
        bufp->chgBit(oldp+54,(vlSelf->ysyx_24120011__DOT__M1_rvalid));
        bufp->chgBit(oldp+55,(vlSelf->ysyx_24120011__DOT__i_LSU__DOT__rready));
        bufp->chgBit(oldp+56,(((2U == (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_state)) 
                               & ((~ ((IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state) 
                                      >> 2U)) & ((2U 
                                                  & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                                   ? (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__rvalid_reg)
                                                   : (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__rvalid_reg))
                                                  : 
                                                 ((IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state) 
                                                  & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__rvalid_reg)))))));
        bufp->chgIData(oldp+57,(((3U == (IData)(vlSelf->ysyx_24120011__DOT__i_LSU__DOT__state))
                                  ? vlSelf->ysyx_24120011__DOT__alu_result
                                  : 0U)),32);
        bufp->chgBit(oldp+58,(vlSelf->ysyx_24120011__DOT__i_LSU__DOT__awvalid));
        bufp->chgBit(oldp+59,(((2U == (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__write_state)) 
                               & ((~ ((IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
                                      >> 2U)) & ((2U 
                                                  & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                                   ? 
                                                  (3U 
                                                   == (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__state))
                                                   : 
                                                  (3U 
                                                   == (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__state)))
                                                  : 
                                                 ((IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
                                                  & (3U 
                                                     == (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__state))))))));
        bufp->chgCData(oldp+60,(((IData)(vlSelf->ysyx_24120011__DOT__i_LSU__DOT__awvalid)
                                  ? 2U : ((1U & (- (IData)(
                                                           (2U 
                                                            == (IData)(vlSelf->ysyx_24120011__DOT__w_mem_len))))) 
                                          | (2U & (- (IData)(
                                                             (4U 
                                                              == (IData)(vlSelf->ysyx_24120011__DOT__w_mem_len)))))))),3);
        bufp->chgIData(oldp+61,(((4U == (IData)(vlSelf->ysyx_24120011__DOT__i_LSU__DOT__state))
                                  ? vlSelf->ysyx_24120011__DOT__src2
                                  : 0U)),32);
        bufp->chgCData(oldp+62,(((4U == (IData)(vlSelf->ysyx_24120011__DOT__w_mem_len))
                                  ? 0xfU : ((2U == (IData)(vlSelf->ysyx_24120011__DOT__w_mem_len))
                                             ? 3U : 1U))),4);
        bufp->chgBit(oldp+63,(vlSelf->ysyx_24120011__DOT__i_LSU__DOT__wvalid));
        bufp->chgBit(oldp+64,(vlSelf->ysyx_24120011__DOT__M1_wready));
        bufp->chgBit(oldp+65,(vlSelf->ysyx_24120011__DOT__M1_bvalid));
        bufp->chgBit(oldp+66,(vlSelf->ysyx_24120011__DOT__i_LSU__DOT__bready));
        bufp->chgIData(oldp+67,(vlSelf->ysyx_24120011__DOT__S0_araddr),32);
        bufp->chgBit(oldp+68,(vlSelf->ysyx_24120011__DOT__S0_arvalid));
        bufp->chgBit(oldp+69,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_arready));
        bufp->chgCData(oldp+70,(vlSelf->ysyx_24120011__DOT__S0_arsize),3);
        bufp->chgIData(oldp+71,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rdata),32);
        bufp->chgBit(oldp+72,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rvalid));
        bufp->chgBit(oldp+73,(vlSelf->ysyx_24120011__DOT__S0_rready));
        bufp->chgBit(oldp+74,(((~ ((IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state) 
                                   >> 2U)) & ((2U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                               ? ((1U 
                                                   & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                                   ? (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__rvalid_reg)
                                                   : (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__rvalid_reg))
                                               : ((IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state) 
                                                  & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__rvalid_reg))))));
        bufp->chgIData(oldp+75,(vlSelf->ysyx_24120011__DOT__S0_awaddr),32);
        bufp->chgBit(oldp+76,(vlSelf->ysyx_24120011__DOT__S0_awvalid));
        bufp->chgBit(oldp+77,(((~ ((IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
                                   >> 2U)) & ((2U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                               ? ((1U 
                                                   & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                                   ? 
                                                  (3U 
                                                   == (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__state))
                                                   : 
                                                  (3U 
                                                   == (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__state)))
                                               : ((IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
                                                  & (3U 
                                                     == (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__state)))))));
        bufp->chgCData(oldp+78,(vlSelf->ysyx_24120011__DOT__S0_awsize),3);
        bufp->chgIData(oldp+79,(vlSelf->ysyx_24120011__DOT__S0_wdata),32);
        bufp->chgCData(oldp+80,(vlSelf->ysyx_24120011__DOT__S0_wstrb),4);
        bufp->chgBit(oldp+81,(vlSelf->ysyx_24120011__DOT__S0_wvalid));
        bufp->chgBit(oldp+82,(((~ ((IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
                                   >> 2U)) & ((2U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                               ? ((1U 
                                                   & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                                   ? (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__wready_reg)
                                                   : (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__wready_reg))
                                               : ((IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
                                                  & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__wready_reg))))));
        bufp->chgBit(oldp+83,(vlSelf->ysyx_24120011__DOT__S0_wlast));
        bufp->chgBit(oldp+84,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_bvalid));
        bufp->chgBit(oldp+85,(vlSelf->ysyx_24120011__DOT__S0_bready));
        bufp->chgIData(oldp+86,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_araddr),32);
        bufp->chgBit(oldp+87,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_arvalid));
        bufp->chgBit(oldp+88,((1U == (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__state))));
        bufp->chgCData(oldp+89,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_arsize),3);
        bufp->chgIData(oldp+90,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__rdata_reg),32);
        bufp->chgBit(oldp+91,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__rvalid_reg));
        bufp->chgBit(oldp+92,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_rready));
        bufp->chgIData(oldp+93,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_awaddr),32);
        bufp->chgBit(oldp+94,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_awvalid));
        bufp->chgBit(oldp+95,((3U == (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__state))));
        bufp->chgCData(oldp+96,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_awsize),3);
        bufp->chgIData(oldp+97,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wdata),32);
        bufp->chgCData(oldp+98,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wstrb),4);
        bufp->chgBit(oldp+99,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wvalid));
        bufp->chgBit(oldp+100,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__wready_reg));
        bufp->chgBit(oldp+101,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wlast));
        bufp->chgBit(oldp+102,((5U == (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__state))));
        bufp->chgBit(oldp+103,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_bready));
        bufp->chgIData(oldp+104,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_araddr),32);
        bufp->chgBit(oldp+105,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_arvalid));
        bufp->chgBit(oldp+106,((1U == (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__state))));
        bufp->chgCData(oldp+107,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_arsize),3);
        bufp->chgIData(oldp+108,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__rdata_reg),32);
        bufp->chgBit(oldp+109,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__rvalid_reg));
        bufp->chgBit(oldp+110,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_rready));
        bufp->chgIData(oldp+111,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_awaddr),32);
        bufp->chgBit(oldp+112,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_awvalid));
        bufp->chgBit(oldp+113,((3U == (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__state))));
        bufp->chgCData(oldp+114,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_awsize),3);
        bufp->chgIData(oldp+115,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_wdata),32);
        bufp->chgCData(oldp+116,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_wstrb),4);
        bufp->chgBit(oldp+117,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_wvalid));
        bufp->chgBit(oldp+118,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__wready_reg));
        bufp->chgBit(oldp+119,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_wlast));
        bufp->chgBit(oldp+120,((5U == (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__state))));
        bufp->chgBit(oldp+121,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_bready));
        bufp->chgIData(oldp+122,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_araddr),32);
        bufp->chgBit(oldp+123,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_arvalid));
        bufp->chgBit(oldp+124,((1U == (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__state))));
        bufp->chgCData(oldp+125,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_arsize),3);
        bufp->chgIData(oldp+126,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__rdata_reg),32);
        bufp->chgBit(oldp+127,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__rvalid_reg));
        bufp->chgBit(oldp+128,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_rready));
        bufp->chgIData(oldp+129,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_awaddr),32);
        bufp->chgBit(oldp+130,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_awvalid));
        bufp->chgBit(oldp+131,((3U == (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__state))));
        bufp->chgCData(oldp+132,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_awsize),3);
        bufp->chgIData(oldp+133,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_wdata),32);
        bufp->chgCData(oldp+134,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_wstrb),4);
        bufp->chgBit(oldp+135,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_wvalid));
        bufp->chgBit(oldp+136,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__wready_reg));
        bufp->chgBit(oldp+137,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_wlast));
        bufp->chgBit(oldp+138,((5U == (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__state))));
        bufp->chgBit(oldp+139,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_bready));
        bufp->chgIData(oldp+140,(vlSelf->ysyx_24120011__DOT__i_ALU__DOT__B_in),32);
        bufp->chgIData(oldp+141,(((1U & (IData)(vlSelf->ysyx_24120011__DOT__ALU_ctrl))
                                   ? vlSelf->ysyx_24120011__DOT__i_ALU__DOT____VdfgTmp_h6c4bfc22__0
                                   : vlSelf->ysyx_24120011__DOT__ALUB)),32);
        bufp->chgIData(oldp+142,(vlSelf->ysyx_24120011__DOT__i_ALU__DOT__ALUout_tmp),32);
        bufp->chgBit(oldp+143,(vlSelf->ysyx_24120011__DOT__i_ALU__DOT__carry));
        bufp->chgBit(oldp+144,((((vlSelf->ysyx_24120011__DOT__src1 
                                  >> 0x1fU) == (((1U 
                                                  & (IData)(vlSelf->ysyx_24120011__DOT__ALU_ctrl))
                                                  ? vlSelf->ysyx_24120011__DOT__i_ALU__DOT____VdfgTmp_h6c4bfc22__0
                                                  : vlSelf->ysyx_24120011__DOT__ALUB) 
                                                >> 0x1fU)) 
                                & ((vlSelf->ysyx_24120011__DOT__src1 
                                    >> 0x1fU) != (vlSelf->ysyx_24120011__DOT__i_ALU__DOT__ALUout_tmp 
                                                  >> 0x1fU)))));
        bufp->chgBit(oldp+145,((1U & (~ (IData)(vlSelf->ysyx_24120011__DOT__i_ALU__DOT__carry)))));
        bufp->chgBit(oldp+146,(vlSelf->ysyx_24120011__DOT__i_ALU__DOT__sless));
        bufp->chgBit(oldp+147,((vlSelf->ysyx_24120011__DOT__src1 
                                == vlSelf->ysyx_24120011__DOT__ALUB)));
        bufp->chgBit(oldp+148,((vlSelf->ysyx_24120011__DOT__src1 
                                != vlSelf->ysyx_24120011__DOT__ALUB)));
        bufp->chgIData(oldp+149,(vlSelf->ysyx_24120011__DOT__i_Csr__DOT__mepc),32);
        bufp->chgIData(oldp+150,(vlSelf->ysyx_24120011__DOT__i_Csr__DOT__mstatus),32);
        bufp->chgIData(oldp+151,(vlSelf->ysyx_24120011__DOT__i_Csr__DOT__mcause),32);
        bufp->chgIData(oldp+152,(vlSelf->ysyx_24120011__DOT__i_Csr__DOT__mtvec),32);
        bufp->chgBit(oldp+153,(vlSelf->ysyx_24120011__DOT__i_IFU__DOT__rvalid_prev));
        bufp->chgCData(oldp+154,(vlSelf->ysyx_24120011__DOT__i_IFU__DOT__state),3);
        bufp->chgCData(oldp+155,(vlSelf->ysyx_24120011__DOT__i_IFU__DOT__next_state),3);
        bufp->chgCData(oldp+156,(vlSelf->ysyx_24120011__DOT__i_IFU__DOT__arvalid_delay_cnt),8);
        bufp->chgCData(oldp+157,(vlSelf->ysyx_24120011__DOT__i_IFU__DOT__rready_delay_cnt),8);
        bufp->chgCData(oldp+158,(vlSelf->ysyx_24120011__DOT__i_IFU__DOT__LSFR_in),8);
        bufp->chgCData(oldp+159,(vlSelf->ysyx_24120011__DOT__i_IFU__DOT__random_delay),8);
        bufp->chgCData(oldp+160,(vlSelf->ysyx_24120011__DOT__i_LSU__DOT__state),3);
        bufp->chgCData(oldp+161,(vlSelf->ysyx_24120011__DOT__i_LSU__DOT__next_state),3);
        bufp->chgBit(oldp+162,(vlSelf->ysyx_24120011__DOT__i_LSU__DOT__start_read_delay));
        bufp->chgBit(oldp+163,(vlSelf->ysyx_24120011__DOT__i_LSU__DOT__start_write_delay));
        bufp->chgBit(oldp+164,((0U != (IData)(vlSelf->ysyx_24120011__DOT__i_LSU__DOT__state))));
        bufp->chgCData(oldp+165,(vlSelf->ysyx_24120011__DOT__i_LSU__DOT__arvalid_delay_cnt),8);
        bufp->chgCData(oldp+166,(vlSelf->ysyx_24120011__DOT__i_LSU__DOT__awvalid_delay_cnt),8);
        bufp->chgCData(oldp+167,(vlSelf->ysyx_24120011__DOT__i_LSU__DOT__wvalid_delay_cnt),8);
        bufp->chgCData(oldp+168,(vlSelf->ysyx_24120011__DOT__i_LSU__DOT__rready_delay_cnt),8);
        bufp->chgCData(oldp+169,(vlSelf->ysyx_24120011__DOT__i_LSU__DOT__bready_delay_cnt),8);
        bufp->chgCData(oldp+170,(vlSelf->ysyx_24120011__DOT__i_LSU__DOT__LSFR_in),8);
        bufp->chgCData(oldp+171,(vlSelf->ysyx_24120011__DOT__i_LSU__DOT__random_delay),8);
        bufp->chgIData(oldp+172,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__Regs[0]),32);
        bufp->chgIData(oldp+173,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__Regs[1]),32);
        bufp->chgIData(oldp+174,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__Regs[2]),32);
        bufp->chgIData(oldp+175,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__Regs[3]),32);
        bufp->chgIData(oldp+176,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__Regs[4]),32);
        bufp->chgIData(oldp+177,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__Regs[5]),32);
        bufp->chgIData(oldp+178,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__Regs[6]),32);
        bufp->chgIData(oldp+179,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__Regs[7]),32);
        bufp->chgIData(oldp+180,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__Regs[8]),32);
        bufp->chgIData(oldp+181,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__Regs[9]),32);
        bufp->chgIData(oldp+182,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__Regs[10]),32);
        bufp->chgIData(oldp+183,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__Regs[11]),32);
        bufp->chgIData(oldp+184,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__Regs[12]),32);
        bufp->chgIData(oldp+185,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__Regs[13]),32);
        bufp->chgIData(oldp+186,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__Regs[14]),32);
        bufp->chgIData(oldp+187,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__Regs[15]),32);
        bufp->chgIData(oldp+188,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__Regs[16]),32);
        bufp->chgIData(oldp+189,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__Regs[17]),32);
        bufp->chgIData(oldp+190,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__Regs[18]),32);
        bufp->chgIData(oldp+191,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__Regs[19]),32);
        bufp->chgIData(oldp+192,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__Regs[20]),32);
        bufp->chgIData(oldp+193,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__Regs[21]),32);
        bufp->chgIData(oldp+194,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__Regs[22]),32);
        bufp->chgIData(oldp+195,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__Regs[23]),32);
        bufp->chgIData(oldp+196,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__Regs[24]),32);
        bufp->chgIData(oldp+197,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__Regs[25]),32);
        bufp->chgIData(oldp+198,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__Regs[26]),32);
        bufp->chgIData(oldp+199,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__Regs[27]),32);
        bufp->chgIData(oldp+200,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__Regs[28]),32);
        bufp->chgIData(oldp+201,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__Regs[29]),32);
        bufp->chgIData(oldp+202,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__Regs[30]),32);
        bufp->chgIData(oldp+203,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__Regs[31]),32);
        bufp->chgIData(oldp+204,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__regout[0]),32);
        bufp->chgIData(oldp+205,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__regout[1]),32);
        bufp->chgIData(oldp+206,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__regout[2]),32);
        bufp->chgIData(oldp+207,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__regout[3]),32);
        bufp->chgIData(oldp+208,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__regout[4]),32);
        bufp->chgIData(oldp+209,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__regout[5]),32);
        bufp->chgIData(oldp+210,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__regout[6]),32);
        bufp->chgIData(oldp+211,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__regout[7]),32);
        bufp->chgIData(oldp+212,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__regout[8]),32);
        bufp->chgIData(oldp+213,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__regout[9]),32);
        bufp->chgIData(oldp+214,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__regout[10]),32);
        bufp->chgIData(oldp+215,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__regout[11]),32);
        bufp->chgIData(oldp+216,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__regout[12]),32);
        bufp->chgIData(oldp+217,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__regout[13]),32);
        bufp->chgIData(oldp+218,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__regout[14]),32);
        bufp->chgIData(oldp+219,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__regout[15]),32);
        bufp->chgIData(oldp+220,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__regout[16]),32);
        bufp->chgIData(oldp+221,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__regout[17]),32);
        bufp->chgIData(oldp+222,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__regout[18]),32);
        bufp->chgIData(oldp+223,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__regout[19]),32);
        bufp->chgIData(oldp+224,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__regout[20]),32);
        bufp->chgIData(oldp+225,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__regout[21]),32);
        bufp->chgIData(oldp+226,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__regout[22]),32);
        bufp->chgIData(oldp+227,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__regout[23]),32);
        bufp->chgIData(oldp+228,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__regout[24]),32);
        bufp->chgIData(oldp+229,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__regout[25]),32);
        bufp->chgIData(oldp+230,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__regout[26]),32);
        bufp->chgIData(oldp+231,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__regout[27]),32);
        bufp->chgIData(oldp+232,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__regout[28]),32);
        bufp->chgIData(oldp+233,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__regout[29]),32);
        bufp->chgIData(oldp+234,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__regout[30]),32);
        bufp->chgIData(oldp+235,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__regout[31]),32);
        bufp->chgCData(oldp+236,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_state),3);
        bufp->chgCData(oldp+237,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_next_state),3);
        bufp->chgCData(oldp+238,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__write_state),3);
        bufp->chgCData(oldp+239,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__write_next_state),3);
        bufp->chgCData(oldp+240,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__last_read_master),3);
        bufp->chgCData(oldp+241,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__last_write_master),3);
        bufp->chgBit(oldp+242,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_done));
        bufp->chgBit(oldp+243,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__write_done));
        bufp->chgCData(oldp+244,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__state),3);
        bufp->chgCData(oldp+245,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__next_state),3);
        bufp->chgIData(oldp+246,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__addr),32);
        bufp->chgCData(oldp+247,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__read_delay_cnt),8);
        bufp->chgCData(oldp+248,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__write_delay_cnt),8);
        bufp->chgBit(oldp+249,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__pmem_readed));
        bufp->chgBit(oldp+250,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__pmem_writed));
        bufp->chgCData(oldp+251,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__LSFR_in),8);
        bufp->chgCData(oldp+252,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__random_delay),8);
        bufp->chgQData(oldp+253,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__mtime),64);
        bufp->chgCData(oldp+255,((0x7fU & vlSelf->ysyx_24120011__DOT__inst)),7);
        bufp->chgCData(oldp+256,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__opcode_type),3);
        bufp->chgCData(oldp+257,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__state),3);
        bufp->chgCData(oldp+258,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__next_state),3);
        bufp->chgIData(oldp+259,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__addr),32);
        bufp->chgCData(oldp+260,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__read_delay_cnt),8);
        bufp->chgCData(oldp+261,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__write_delay_cnt),8);
        bufp->chgBit(oldp+262,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__pmem_readed));
        bufp->chgBit(oldp+263,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__pmem_writed));
        bufp->chgCData(oldp+264,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__LSFR_in),8);
        bufp->chgCData(oldp+265,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__random_delay),8);
        bufp->chgCData(oldp+266,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__state),3);
        bufp->chgCData(oldp+267,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__next_state),3);
        bufp->chgIData(oldp+268,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__addr),32);
        bufp->chgCData(oldp+269,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__read_delay_cnt),8);
        bufp->chgCData(oldp+270,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__write_delay_cnt),8);
        bufp->chgBit(oldp+271,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__pmem_readed));
        bufp->chgBit(oldp+272,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__pmem_writed));
        bufp->chgCData(oldp+273,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__LSFR_in),8);
        bufp->chgCData(oldp+274,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__random_delay),8);
        bufp->chgCData(oldp+275,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state),3);
        bufp->chgCData(oldp+276,(((4U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                   ? 0U : ((2U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                            ? ((1U 
                                                & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                                ? (
                                                   ((IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__rvalid_reg) 
                                                    & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_rready))
                                                    ? 0U
                                                    : 3U)
                                                : (
                                                   ((IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__rvalid_reg) 
                                                    & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_rready))
                                                    ? 0U
                                                    : 2U))
                                            : ((1U 
                                                & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                                ? (
                                                   ((IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__rvalid_reg) 
                                                    & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_rready))
                                                    ? 0U
                                                    : 1U)
                                                : ((IData)(vlSelf->ysyx_24120011__DOT__S0_arvalid)
                                                    ? 
                                                   (((0xa0000048U 
                                                      == vlSelf->ysyx_24120011__DOT__S0_araddr) 
                                                     | (0xa000004cU 
                                                        == vlSelf->ysyx_24120011__DOT__S0_araddr))
                                                     ? 3U
                                                     : 1U)
                                                    : 0U))))),3);
        bufp->chgCData(oldp+277,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state),3);
        bufp->chgCData(oldp+278,(((4U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                   ? 0U : ((2U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                            ? ((1U 
                                                & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                                ? (
                                                   ((5U 
                                                     == (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__state)) 
                                                    & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_bready))
                                                    ? 0U
                                                    : 3U)
                                                : (
                                                   ((5U 
                                                     == (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__state)) 
                                                    & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_bready))
                                                    ? 0U
                                                    : 2U))
                                            : ((1U 
                                                & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                                ? (
                                                   ((5U 
                                                     == (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__state)) 
                                                    & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_bready))
                                                    ? 0U
                                                    : 1U)
                                                : ((IData)(vlSelf->ysyx_24120011__DOT__S0_awvalid)
                                                    ? 
                                                   ((0xa00003f8U 
                                                     == vlSelf->ysyx_24120011__DOT__S0_awaddr)
                                                     ? 2U
                                                     : 1U)
                                                    : 0U))))),3);
        bufp->chgBit(oldp+279,(((IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__rvalid_reg) 
                                & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_rready))));
        bufp->chgBit(oldp+280,(((5U == (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__state)) 
                                & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_bready))));
        bufp->chgBit(oldp+281,(((IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__rvalid_reg) 
                                & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_rready))));
        bufp->chgBit(oldp+282,(((5U == (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__state)) 
                                & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_bready))));
        bufp->chgBit(oldp+283,(((IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__rvalid_reg) 
                                & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_rready))));
        bufp->chgBit(oldp+284,(((5U == (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__state)) 
                                & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_bready))));
    }
    bufp->chgBit(oldp+285,(vlSelf->clock));
    bufp->chgBit(oldp+286,(vlSelf->reset));
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
