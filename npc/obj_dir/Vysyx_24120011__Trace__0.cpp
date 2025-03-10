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
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
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
        bufp->chgIData(oldp+8,(vlSelf->ysyx_24120011__DOT__src1),32);
        bufp->chgIData(oldp+9,(vlSelf->ysyx_24120011__DOT__src2),32);
        bufp->chgIData(oldp+10,(vlSelf->ysyx_24120011__DOT__i_PCProcessor__DOT__pc_add_imme),32);
        bufp->chgIData(oldp+11,(vlSelf->ysyx_24120011__DOT__ALUB),32);
        bufp->chgIData(oldp+12,(vlSelf->ysyx_24120011__DOT__alu_result),32);
        bufp->chgCData(oldp+13,(vlSelf->ysyx_24120011__DOT__pc_ctrl),2);
        bufp->chgCData(oldp+14,(vlSelf->ysyx_24120011__DOT__rd_ctrl),4);
        bufp->chgCData(oldp+15,(vlSelf->ysyx_24120011__DOT__ALUBctrl),2);
        bufp->chgBit(oldp+16,(((IData)(vlSelf->ysyx_24120011__DOT__LSU_valid) 
                               & (4U != (IData)(vlSelf->ysyx_24120011__DOT__rd_ctrl)))));
        bufp->chgBit(oldp+17,(vlSelf->ysyx_24120011__DOT__w_mem_en));
        bufp->chgBit(oldp+18,(vlSelf->ysyx_24120011__DOT__r_mem_en));
        bufp->chgBit(oldp+19,(vlSelf->ysyx_24120011__DOT__sign_extension));
        bufp->chgBit(oldp+20,(((0x63U == (0x7fU & vlSelf->ysyx_24120011__DOT__inst)) 
                               & vlSelf->ysyx_24120011__DOT__alu_result)));
        bufp->chgCData(oldp+21,(vlSelf->ysyx_24120011__DOT__w_mem_len),8);
        bufp->chgCData(oldp+22,(vlSelf->ysyx_24120011__DOT__r_mem_len),8);
        bufp->chgCData(oldp+23,(vlSelf->ysyx_24120011__DOT__ALU_ctrl),4);
        bufp->chgCData(oldp+24,(vlSelf->ysyx_24120011__DOT__w_csr_data_ctrl),4);
        bufp->chgSData(oldp+25,(vlSelf->ysyx_24120011__DOT__w_csr_addr),12);
        bufp->chgSData(oldp+26,(vlSelf->ysyx_24120011__DOT__r_csr_addr),12);
        bufp->chgBit(oldp+27,(vlSelf->ysyx_24120011__DOT__w_csr_en));
        bufp->chgBit(oldp+28,(vlSelf->ysyx_24120011__DOT__r_csr_en));
        bufp->chgBit(oldp+29,(vlSelf->ysyx_24120011__DOT__w_csr_ecall));
        bufp->chgIData(oldp+30,(vlSelf->ysyx_24120011__DOT__w_csr_data),32);
        bufp->chgIData(oldp+31,(vlSelf->ysyx_24120011__DOT__r_csr_data),32);
        bufp->chgIData(oldp+32,(vlSelf->ysyx_24120011__DOT__inst),32);
        bufp->chgBit(oldp+33,(((1U == (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_state)) 
                               & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_arready))));
        bufp->chgIData(oldp+34,(vlSelf->ysyx_24120011__DOT__M0_rdata),32);
        bufp->chgBit(oldp+35,(vlSelf->ysyx_24120011__DOT__M0_rvalid));
        bufp->chgBit(oldp+36,(((1U == (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__write_state)) 
                               & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_bvalid))));
        bufp->chgIData(oldp+37,(((1U == (IData)(vlSelf->ysyx_24120011__DOT__i_LSU__DOT__state))
                                  ? vlSelf->ysyx_24120011__DOT__alu_result
                                  : 0U)),32);
        bufp->chgBit(oldp+38,(((2U == (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_state)) 
                               & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_arready))));
        bufp->chgCData(oldp+39,(((IData)(vlSelf->ysyx_24120011__DOT__i_LSU__DOT__arvalid)
                                  ? 2U : ((1U & (- (IData)(
                                                           (2U 
                                                            == (IData)(vlSelf->ysyx_24120011__DOT__r_mem_len))))) 
                                          | (2U & (- (IData)(
                                                             (4U 
                                                              == (IData)(vlSelf->ysyx_24120011__DOT__r_mem_len)))))))),3);
        bufp->chgIData(oldp+40,(vlSelf->ysyx_24120011__DOT__M1_rdata),32);
        bufp->chgBit(oldp+41,(vlSelf->ysyx_24120011__DOT__M1_rvalid));
        bufp->chgIData(oldp+42,(((3U == (IData)(vlSelf->ysyx_24120011__DOT__i_LSU__DOT__state))
                                  ? vlSelf->ysyx_24120011__DOT__alu_result
                                  : 0U)),32);
        bufp->chgCData(oldp+43,(((IData)(vlSelf->ysyx_24120011__DOT__i_LSU__DOT__awvalid)
                                  ? 2U : ((1U & (- (IData)(
                                                           (2U 
                                                            == (IData)(vlSelf->ysyx_24120011__DOT__w_mem_len))))) 
                                          | (2U & (- (IData)(
                                                             (4U 
                                                              == (IData)(vlSelf->ysyx_24120011__DOT__w_mem_len)))))))),3);
        bufp->chgIData(oldp+44,(((4U == (IData)(vlSelf->ysyx_24120011__DOT__i_LSU__DOT__state))
                                  ? vlSelf->ysyx_24120011__DOT__src2
                                  : 0U)),32);
        bufp->chgCData(oldp+45,(((4U == (IData)(vlSelf->ysyx_24120011__DOT__w_mem_len))
                                  ? 0xfU : ((2U == (IData)(vlSelf->ysyx_24120011__DOT__w_mem_len))
                                             ? 3U : 1U))),4);
        bufp->chgBit(oldp+46,(vlSelf->ysyx_24120011__DOT__M1_wready));
        bufp->chgBit(oldp+47,(vlSelf->ysyx_24120011__DOT__M1_bvalid));
        bufp->chgIData(oldp+48,(vlSelf->ysyx_24120011__DOT__S0_araddr),32);
        bufp->chgBit(oldp+49,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_arready));
        bufp->chgCData(oldp+50,(vlSelf->ysyx_24120011__DOT__S0_arsize),3);
        bufp->chgIData(oldp+51,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rdata),32);
        bufp->chgBit(oldp+52,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rvalid));
        bufp->chgIData(oldp+53,(vlSelf->ysyx_24120011__DOT__S0_awaddr),32);
        bufp->chgCData(oldp+54,(vlSelf->ysyx_24120011__DOT__S0_awsize),3);
        bufp->chgIData(oldp+55,(vlSelf->ysyx_24120011__DOT__S0_wdata),32);
        bufp->chgCData(oldp+56,(vlSelf->ysyx_24120011__DOT__S0_wstrb),4);
        bufp->chgBit(oldp+57,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_bvalid));
        bufp->chgIData(oldp+58,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_araddr),32);
        bufp->chgCData(oldp+59,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_arsize),3);
        bufp->chgIData(oldp+60,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_awaddr),32);
        bufp->chgCData(oldp+61,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_awsize),3);
        bufp->chgIData(oldp+62,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_wdata),32);
        bufp->chgCData(oldp+63,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_wstrb),4);
        bufp->chgIData(oldp+64,(vlSelf->ysyx_24120011__DOT__i_ALU__DOT__B_in),32);
        bufp->chgIData(oldp+65,(((1U & (IData)(vlSelf->ysyx_24120011__DOT__ALU_ctrl))
                                  ? vlSelf->ysyx_24120011__DOT__i_ALU__DOT____VdfgTmp_h6c4bfc22__0
                                  : vlSelf->ysyx_24120011__DOT__ALUB)),32);
        bufp->chgIData(oldp+66,(vlSelf->ysyx_24120011__DOT__i_ALU__DOT__ALUout_tmp),32);
        bufp->chgBit(oldp+67,(vlSelf->ysyx_24120011__DOT__i_ALU__DOT__carry));
        bufp->chgBit(oldp+68,((((vlSelf->ysyx_24120011__DOT__src1 
                                 >> 0x1fU) == (((1U 
                                                 & (IData)(vlSelf->ysyx_24120011__DOT__ALU_ctrl))
                                                 ? vlSelf->ysyx_24120011__DOT__i_ALU__DOT____VdfgTmp_h6c4bfc22__0
                                                 : vlSelf->ysyx_24120011__DOT__ALUB) 
                                               >> 0x1fU)) 
                               & ((vlSelf->ysyx_24120011__DOT__src1 
                                   >> 0x1fU) != (vlSelf->ysyx_24120011__DOT__i_ALU__DOT__ALUout_tmp 
                                                 >> 0x1fU)))));
        bufp->chgBit(oldp+69,((1U & (~ (IData)(vlSelf->ysyx_24120011__DOT__i_ALU__DOT__carry)))));
        bufp->chgBit(oldp+70,(vlSelf->ysyx_24120011__DOT__i_ALU__DOT__sless));
        bufp->chgBit(oldp+71,((vlSelf->ysyx_24120011__DOT__src1 
                               == vlSelf->ysyx_24120011__DOT__ALUB)));
        bufp->chgBit(oldp+72,((vlSelf->ysyx_24120011__DOT__src1 
                               != vlSelf->ysyx_24120011__DOT__ALUB)));
        bufp->chgCData(oldp+73,(vlSelf->ysyx_24120011__DOT__i_IFU__DOT__next_state),3);
        bufp->chgCData(oldp+74,(vlSelf->ysyx_24120011__DOT__i_LSU__DOT__next_state),3);
        bufp->chgCData(oldp+75,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_next_state),3);
        bufp->chgCData(oldp+76,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__write_next_state),3);
        bufp->chgBit(oldp+77,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_done));
        bufp->chgBit(oldp+78,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__write_done));
        bufp->chgCData(oldp+79,((0x7fU & vlSelf->ysyx_24120011__DOT__inst)),7);
        bufp->chgCData(oldp+80,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__opcode_type),3);
        bufp->chgIData(oldp+81,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_araddr),32);
        bufp->chgCData(oldp+82,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_arsize),3);
        bufp->chgIData(oldp+83,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_awaddr),32);
        bufp->chgCData(oldp+84,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_awsize),3);
        bufp->chgIData(oldp+85,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_wdata),32);
        bufp->chgCData(oldp+86,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_wstrb),4);
        bufp->chgIData(oldp+87,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_araddr),32);
        bufp->chgIData(oldp+88,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_awaddr),32);
        bufp->chgIData(oldp+89,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wdata),32);
        bufp->chgCData(oldp+90,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wstrb),4);
        bufp->chgCData(oldp+91,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_arsize),3);
        bufp->chgCData(oldp+92,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_awsize),3);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+93,(vlSelf->ysyx_24120011__DOT__r_mem_data),32);
        bufp->chgIData(oldp+94,(((IData)(4U) + vlSelf->ysyx_24120011__DOT__pc)),32);
        bufp->chgIData(oldp+95,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__Regs
                                [0xaU]),32);
        bufp->chgIData(oldp+96,(vlSelf->ysyx_24120011__DOT__pc),32);
        bufp->chgBit(oldp+97,(vlSelf->ysyx_24120011__DOT__i_IFU__DOT__rready));
        bufp->chgBit(oldp+98,(vlSelf->ysyx_24120011__DOT__LSU_valid));
        bufp->chgBit(oldp+99,(vlSelf->ysyx_24120011__DOT__LSU_ready));
        bufp->chgIData(oldp+100,(vlSelf->ysyx_24120011__DOT__LSU_valid),32);
        bufp->chgBit(oldp+101,(vlSelf->ysyx_24120011__DOT__i_IFU__DOT__arvalid));
        bufp->chgBit(oldp+102,(vlSelf->ysyx_24120011__DOT__i_LSU__DOT__arvalid));
        bufp->chgBit(oldp+103,(vlSelf->ysyx_24120011__DOT__i_LSU__DOT__rready));
        bufp->chgBit(oldp+104,(vlSelf->ysyx_24120011__DOT__i_LSU__DOT__awvalid));
        bufp->chgBit(oldp+105,(vlSelf->ysyx_24120011__DOT__i_LSU__DOT__wvalid));
        bufp->chgBit(oldp+106,(vlSelf->ysyx_24120011__DOT__i_LSU__DOT__bready));
        bufp->chgBit(oldp+107,(vlSelf->ysyx_24120011__DOT__S0_arvalid));
        bufp->chgBit(oldp+108,(vlSelf->ysyx_24120011__DOT__S0_rready));
        bufp->chgBit(oldp+109,(vlSelf->ysyx_24120011__DOT__S0_awvalid));
        bufp->chgBit(oldp+110,(vlSelf->ysyx_24120011__DOT__S0_wvalid));
        bufp->chgBit(oldp+111,(vlSelf->ysyx_24120011__DOT__S0_bready));
        bufp->chgBit(oldp+112,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_arvalid));
        bufp->chgBit(oldp+113,((1U == (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__state))));
        bufp->chgIData(oldp+114,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__rdata_reg),32);
        bufp->chgBit(oldp+115,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__rvalid_reg));
        bufp->chgBit(oldp+116,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_rready));
        bufp->chgBit(oldp+117,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_awvalid));
        bufp->chgBit(oldp+118,((3U == (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__state))));
        bufp->chgBit(oldp+119,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_wvalid));
        bufp->chgBit(oldp+120,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__wready_reg));
        bufp->chgBit(oldp+121,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_wlast));
        bufp->chgBit(oldp+122,((5U == (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__state))));
        bufp->chgBit(oldp+123,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_bready));
        bufp->chgIData(oldp+124,(vlSelf->ysyx_24120011__DOT__i_Csr__DOT__mepc),32);
        bufp->chgIData(oldp+125,(vlSelf->ysyx_24120011__DOT__i_Csr__DOT__mstatus),32);
        bufp->chgIData(oldp+126,(vlSelf->ysyx_24120011__DOT__i_Csr__DOT__mcause),32);
        bufp->chgIData(oldp+127,(vlSelf->ysyx_24120011__DOT__i_Csr__DOT__mtvec),32);
        bufp->chgBit(oldp+128,(vlSelf->ysyx_24120011__DOT__i_IFU__DOT__rvalid_prev));
        bufp->chgCData(oldp+129,(vlSelf->ysyx_24120011__DOT__i_IFU__DOT__state),3);
        bufp->chgCData(oldp+130,(vlSelf->ysyx_24120011__DOT__i_IFU__DOT__arvalid_delay_cnt),8);
        bufp->chgCData(oldp+131,(vlSelf->ysyx_24120011__DOT__i_IFU__DOT__rready_delay_cnt),8);
        bufp->chgCData(oldp+132,(vlSelf->ysyx_24120011__DOT__i_IFU__DOT__LSFR_in),8);
        bufp->chgCData(oldp+133,(vlSelf->ysyx_24120011__DOT__i_IFU__DOT__random_delay),8);
        bufp->chgCData(oldp+134,(vlSelf->ysyx_24120011__DOT__i_LSU__DOT__state),3);
        bufp->chgBit(oldp+135,(vlSelf->ysyx_24120011__DOT__i_LSU__DOT__start_read_delay));
        bufp->chgBit(oldp+136,(vlSelf->ysyx_24120011__DOT__i_LSU__DOT__start_write_delay));
        bufp->chgBit(oldp+137,((0U != (IData)(vlSelf->ysyx_24120011__DOT__i_LSU__DOT__state))));
        bufp->chgCData(oldp+138,(vlSelf->ysyx_24120011__DOT__i_LSU__DOT__arvalid_delay_cnt),8);
        bufp->chgCData(oldp+139,(vlSelf->ysyx_24120011__DOT__i_LSU__DOT__awvalid_delay_cnt),8);
        bufp->chgCData(oldp+140,(vlSelf->ysyx_24120011__DOT__i_LSU__DOT__wvalid_delay_cnt),8);
        bufp->chgCData(oldp+141,(vlSelf->ysyx_24120011__DOT__i_LSU__DOT__rready_delay_cnt),8);
        bufp->chgCData(oldp+142,(vlSelf->ysyx_24120011__DOT__i_LSU__DOT__bready_delay_cnt),8);
        bufp->chgCData(oldp+143,(vlSelf->ysyx_24120011__DOT__i_LSU__DOT__LSFR_in),8);
        bufp->chgCData(oldp+144,(vlSelf->ysyx_24120011__DOT__i_LSU__DOT__random_delay),8);
        bufp->chgIData(oldp+145,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__Regs[0]),32);
        bufp->chgIData(oldp+146,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__Regs[1]),32);
        bufp->chgIData(oldp+147,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__Regs[2]),32);
        bufp->chgIData(oldp+148,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__Regs[3]),32);
        bufp->chgIData(oldp+149,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__Regs[4]),32);
        bufp->chgIData(oldp+150,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__Regs[5]),32);
        bufp->chgIData(oldp+151,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__Regs[6]),32);
        bufp->chgIData(oldp+152,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__Regs[7]),32);
        bufp->chgIData(oldp+153,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__Regs[8]),32);
        bufp->chgIData(oldp+154,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__Regs[9]),32);
        bufp->chgIData(oldp+155,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__Regs[10]),32);
        bufp->chgIData(oldp+156,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__Regs[11]),32);
        bufp->chgIData(oldp+157,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__Regs[12]),32);
        bufp->chgIData(oldp+158,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__Regs[13]),32);
        bufp->chgIData(oldp+159,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__Regs[14]),32);
        bufp->chgIData(oldp+160,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__Regs[15]),32);
        bufp->chgIData(oldp+161,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__Regs[16]),32);
        bufp->chgIData(oldp+162,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__Regs[17]),32);
        bufp->chgIData(oldp+163,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__Regs[18]),32);
        bufp->chgIData(oldp+164,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__Regs[19]),32);
        bufp->chgIData(oldp+165,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__Regs[20]),32);
        bufp->chgIData(oldp+166,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__Regs[21]),32);
        bufp->chgIData(oldp+167,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__Regs[22]),32);
        bufp->chgIData(oldp+168,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__Regs[23]),32);
        bufp->chgIData(oldp+169,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__Regs[24]),32);
        bufp->chgIData(oldp+170,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__Regs[25]),32);
        bufp->chgIData(oldp+171,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__Regs[26]),32);
        bufp->chgIData(oldp+172,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__Regs[27]),32);
        bufp->chgIData(oldp+173,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__Regs[28]),32);
        bufp->chgIData(oldp+174,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__Regs[29]),32);
        bufp->chgIData(oldp+175,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__Regs[30]),32);
        bufp->chgIData(oldp+176,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__Regs[31]),32);
        bufp->chgIData(oldp+177,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__regout[0]),32);
        bufp->chgIData(oldp+178,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__regout[1]),32);
        bufp->chgIData(oldp+179,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__regout[2]),32);
        bufp->chgIData(oldp+180,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__regout[3]),32);
        bufp->chgIData(oldp+181,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__regout[4]),32);
        bufp->chgIData(oldp+182,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__regout[5]),32);
        bufp->chgIData(oldp+183,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__regout[6]),32);
        bufp->chgIData(oldp+184,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__regout[7]),32);
        bufp->chgIData(oldp+185,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__regout[8]),32);
        bufp->chgIData(oldp+186,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__regout[9]),32);
        bufp->chgIData(oldp+187,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__regout[10]),32);
        bufp->chgIData(oldp+188,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__regout[11]),32);
        bufp->chgIData(oldp+189,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__regout[12]),32);
        bufp->chgIData(oldp+190,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__regout[13]),32);
        bufp->chgIData(oldp+191,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__regout[14]),32);
        bufp->chgIData(oldp+192,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__regout[15]),32);
        bufp->chgIData(oldp+193,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__regout[16]),32);
        bufp->chgIData(oldp+194,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__regout[17]),32);
        bufp->chgIData(oldp+195,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__regout[18]),32);
        bufp->chgIData(oldp+196,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__regout[19]),32);
        bufp->chgIData(oldp+197,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__regout[20]),32);
        bufp->chgIData(oldp+198,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__regout[21]),32);
        bufp->chgIData(oldp+199,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__regout[22]),32);
        bufp->chgIData(oldp+200,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__regout[23]),32);
        bufp->chgIData(oldp+201,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__regout[24]),32);
        bufp->chgIData(oldp+202,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__regout[25]),32);
        bufp->chgIData(oldp+203,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__regout[26]),32);
        bufp->chgIData(oldp+204,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__regout[27]),32);
        bufp->chgIData(oldp+205,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__regout[28]),32);
        bufp->chgIData(oldp+206,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__regout[29]),32);
        bufp->chgIData(oldp+207,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__regout[30]),32);
        bufp->chgIData(oldp+208,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__regout[31]),32);
        bufp->chgCData(oldp+209,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_state),3);
        bufp->chgCData(oldp+210,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__write_state),3);
        bufp->chgCData(oldp+211,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__last_read_master),3);
        bufp->chgCData(oldp+212,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__last_write_master),3);
        bufp->chgCData(oldp+213,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__state),3);
        bufp->chgCData(oldp+214,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__next_state),3);
        bufp->chgIData(oldp+215,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__addr),32);
        bufp->chgCData(oldp+216,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__read_delay_cnt),8);
        bufp->chgCData(oldp+217,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__write_delay_cnt),8);
        bufp->chgBit(oldp+218,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__pmem_readed));
        bufp->chgBit(oldp+219,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__pmem_writed));
        bufp->chgCData(oldp+220,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__LSFR_in),8);
        bufp->chgCData(oldp+221,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__random_delay),8);
        bufp->chgQData(oldp+222,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__mtime),64);
        bufp->chgBit(oldp+224,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_arvalid));
        bufp->chgBit(oldp+225,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_rready));
        bufp->chgBit(oldp+226,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_awvalid));
        bufp->chgBit(oldp+227,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_wvalid));
        bufp->chgBit(oldp+228,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_wlast));
        bufp->chgBit(oldp+229,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_bready));
        bufp->chgCData(oldp+230,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state),3);
        bufp->chgCData(oldp+231,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state),3);
        bufp->chgBit(oldp+232,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_arvalid));
        bufp->chgBit(oldp+233,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_rready));
        bufp->chgBit(oldp+234,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_awvalid));
        bufp->chgBit(oldp+235,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wvalid));
        bufp->chgBit(oldp+236,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_bready));
        bufp->chgBit(oldp+237,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wlast));
        bufp->chgBit(oldp+238,(((IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_rvalid) 
                                & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_rready))));
        bufp->chgBit(oldp+239,(((IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_bvalid) 
                                & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_bready))));
        bufp->chgBit(oldp+240,(((IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__rvalid_reg) 
                                & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_rready))));
        bufp->chgBit(oldp+241,(((5U == (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__state)) 
                                & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_bready))));
    }
    bufp->chgBit(oldp+242,(vlSelf->clock));
    bufp->chgBit(oldp+243,(vlSelf->reset));
    bufp->chgBit(oldp+244,(vlSelf->io_master_awready));
    bufp->chgBit(oldp+245,(vlSelf->io_master_awvalid));
    bufp->chgIData(oldp+246,(vlSelf->io_master_awaddr),32);
    bufp->chgCData(oldp+247,(vlSelf->io_master_awid),4);
    bufp->chgCData(oldp+248,(vlSelf->io_master_awlen),8);
    bufp->chgCData(oldp+249,(vlSelf->io_master_awsize),3);
    bufp->chgCData(oldp+250,(vlSelf->io_master_awburst),2);
    bufp->chgBit(oldp+251,(vlSelf->io_master_wready));
    bufp->chgBit(oldp+252,(vlSelf->io_master_wvalid));
    bufp->chgIData(oldp+253,(vlSelf->io_master_wdata),32);
    bufp->chgCData(oldp+254,(vlSelf->io_master_wstrb),4);
    bufp->chgBit(oldp+255,(vlSelf->io_master_wlast));
    bufp->chgBit(oldp+256,(vlSelf->io_master_bready));
    bufp->chgBit(oldp+257,(vlSelf->io_master_bvalid));
    bufp->chgCData(oldp+258,(vlSelf->io_master_bresp),2);
    bufp->chgCData(oldp+259,(vlSelf->io_master_bid),4);
    bufp->chgBit(oldp+260,(vlSelf->io_master_arready));
    bufp->chgBit(oldp+261,(vlSelf->io_master_arvalid));
    bufp->chgIData(oldp+262,(vlSelf->io_master_araddr),32);
    bufp->chgCData(oldp+263,(vlSelf->io_master_arid),4);
    bufp->chgCData(oldp+264,(vlSelf->io_master_arlen),8);
    bufp->chgCData(oldp+265,(vlSelf->io_master_arsize),3);
    bufp->chgCData(oldp+266,(vlSelf->io_master_arburst),2);
    bufp->chgBit(oldp+267,(vlSelf->io_master_rready));
    bufp->chgBit(oldp+268,(vlSelf->io_master_rvalid));
    bufp->chgCData(oldp+269,(vlSelf->io_master_rresp),2);
    bufp->chgIData(oldp+270,(vlSelf->io_master_rdata),32);
    bufp->chgBit(oldp+271,(vlSelf->io_master_rlast));
    bufp->chgCData(oldp+272,(vlSelf->io_master_rid),4);
    bufp->chgBit(oldp+273,(vlSelf->io_slave_awready));
    bufp->chgBit(oldp+274,(vlSelf->io_slave_awvalid));
    bufp->chgIData(oldp+275,(vlSelf->io_slave_awaddr),32);
    bufp->chgCData(oldp+276,(vlSelf->io_slave_awid),4);
    bufp->chgCData(oldp+277,(vlSelf->io_slave_awlen),8);
    bufp->chgCData(oldp+278,(vlSelf->io_slave_awsize),3);
    bufp->chgCData(oldp+279,(vlSelf->io_slave_awburst),2);
    bufp->chgBit(oldp+280,(vlSelf->io_slave_wready));
    bufp->chgBit(oldp+281,(vlSelf->io_slave_wvalid));
    bufp->chgIData(oldp+282,(vlSelf->io_slave_wdata),32);
    bufp->chgCData(oldp+283,(vlSelf->io_slave_wstrb),4);
    bufp->chgBit(oldp+284,(vlSelf->io_slave_wlast));
    bufp->chgBit(oldp+285,(vlSelf->io_slave_bready));
    bufp->chgBit(oldp+286,(vlSelf->io_slave_bvalid));
    bufp->chgCData(oldp+287,(vlSelf->io_slave_bresp),2);
    bufp->chgCData(oldp+288,(vlSelf->io_slave_bid),4);
    bufp->chgBit(oldp+289,(vlSelf->io_slave_arready));
    bufp->chgBit(oldp+290,(vlSelf->io_slave_arvalid));
    bufp->chgIData(oldp+291,(vlSelf->io_slave_araddr),32);
    bufp->chgCData(oldp+292,(vlSelf->io_slave_arid),4);
    bufp->chgCData(oldp+293,(vlSelf->io_slave_arlen),8);
    bufp->chgCData(oldp+294,(vlSelf->io_slave_arsize),3);
    bufp->chgCData(oldp+295,(vlSelf->io_slave_arburst),2);
    bufp->chgBit(oldp+296,(vlSelf->io_slave_rready));
    bufp->chgBit(oldp+297,(vlSelf->io_slave_rvalid));
    bufp->chgCData(oldp+298,(vlSelf->io_slave_rresp),2);
    bufp->chgIData(oldp+299,(vlSelf->io_slave_rdata),32);
    bufp->chgBit(oldp+300,(vlSelf->io_slave_rlast));
    bufp->chgCData(oldp+301,(vlSelf->io_slave_rid),4);
    bufp->chgCData(oldp+302,(((1U == (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_state))
                               ? ((4U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                   ? 0U : ((2U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                            ? ((1U 
                                                & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                                ? 0U
                                                : (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_rresp))
                                            : ((1U 
                                                & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                                ? (IData)(vlSelf->io_master_rresp)
                                                : 0U)))
                               : 0U)),2);
    bufp->chgBit(oldp+303,(((1U == (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_state)) 
                            & ((~ ((IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state) 
                                   >> 2U)) & ((2U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                               ? ((1U 
                                                   & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                                   ? (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__rvalid_reg)
                                                   : (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_rlast))
                                               : ((IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state) 
                                                  & (IData)(vlSelf->io_master_rlast)))))));
    bufp->chgCData(oldp+304,(((1U == (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_state))
                               ? ((4U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                   ? 0U : ((2U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                            ? ((1U 
                                                & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                                ? 0U
                                                : (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_rid))
                                            : ((1U 
                                                & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                                ? (IData)(vlSelf->io_master_rid)
                                                : 0U)))
                               : 0U)),4);
    bufp->chgBit(oldp+305,(((1U == (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__write_state)) 
                            & ((~ ((IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
                                   >> 2U)) & ((2U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                               ? ((1U 
                                                   & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                                   ? 
                                                  (3U 
                                                   == (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__state))
                                                   : (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_awready))
                                               : ((IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
                                                  & (IData)(vlSelf->io_master_awready)))))));
    bufp->chgBit(oldp+306,(((1U == (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__write_state)) 
                            & ((~ ((IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
                                   >> 2U)) & ((2U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                               ? ((1U 
                                                   & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                                   ? (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__wready_reg)
                                                   : (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_wready))
                                               : ((IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
                                                  & (IData)(vlSelf->io_master_wready)))))));
    bufp->chgCData(oldp+307,(((1U == (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__write_state))
                               ? ((4U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                   ? 0U : ((2U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                            ? ((1U 
                                                & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                                ? 0U
                                                : (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_bresp))
                                            : ((1U 
                                                & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                                ? (IData)(vlSelf->io_master_bresp)
                                                : 0U)))
                               : 0U)),2);
    bufp->chgCData(oldp+308,(((1U == (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__write_state))
                               ? ((4U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                   ? 0U : ((2U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                            ? ((1U 
                                                & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                                ? 0U
                                                : (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_bid))
                                            : ((1U 
                                                & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                                ? (IData)(vlSelf->io_master_bid)
                                                : 0U)))
                               : 0U)),4);
    bufp->chgCData(oldp+309,(((2U == (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_state))
                               ? ((4U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                   ? 0U : ((2U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                            ? ((1U 
                                                & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                                ? 0U
                                                : (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_rresp))
                                            : ((1U 
                                                & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                                ? (IData)(vlSelf->io_master_rresp)
                                                : 0U)))
                               : 0U)),2);
    bufp->chgBit(oldp+310,(((2U == (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_state)) 
                            & ((~ ((IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state) 
                                   >> 2U)) & ((2U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                               ? ((1U 
                                                   & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                                   ? (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__rvalid_reg)
                                                   : (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_rlast))
                                               : ((IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state) 
                                                  & (IData)(vlSelf->io_master_rlast)))))));
    bufp->chgCData(oldp+311,(((2U == (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_state))
                               ? ((4U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                   ? 0U : ((2U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                            ? ((1U 
                                                & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                                ? 0U
                                                : (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_rid))
                                            : ((1U 
                                                & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                                ? (IData)(vlSelf->io_master_rid)
                                                : 0U)))
                               : 0U)),4);
    bufp->chgBit(oldp+312,(((2U == (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__write_state)) 
                            & ((~ ((IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
                                   >> 2U)) & ((2U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                               ? ((1U 
                                                   & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                                   ? 
                                                  (3U 
                                                   == (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__state))
                                                   : (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_awready))
                                               : ((IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
                                                  & (IData)(vlSelf->io_master_awready)))))));
    bufp->chgCData(oldp+313,(((2U == (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__write_state))
                               ? ((4U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                   ? 0U : ((2U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                            ? ((1U 
                                                & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                                ? 0U
                                                : (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_bresp))
                                            : ((1U 
                                                & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                                ? (IData)(vlSelf->io_master_bresp)
                                                : 0U)))
                               : 0U)),2);
    bufp->chgCData(oldp+314,(((2U == (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__write_state))
                               ? ((4U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                   ? 0U : ((2U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                            ? ((1U 
                                                & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                                ? 0U
                                                : (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_bid))
                                            : ((1U 
                                                & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                                ? (IData)(vlSelf->io_master_bid)
                                                : 0U)))
                               : 0U)),4);
    bufp->chgCData(oldp+315,(((4U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                               ? 0U : ((2U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                        ? ((1U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                            ? 0U : (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_rresp))
                                        : ((1U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                            ? (IData)(vlSelf->io_master_rresp)
                                            : 0U)))),2);
    bufp->chgBit(oldp+316,(((~ ((IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state) 
                                >> 2U)) & ((2U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                            ? ((1U 
                                                & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                                ? (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__rvalid_reg)
                                                : (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_rlast))
                                            : ((IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state) 
                                               & (IData)(vlSelf->io_master_rlast))))));
    bufp->chgCData(oldp+317,(((4U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                               ? 0U : ((2U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                        ? ((1U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                            ? 0U : (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_rid))
                                        : ((1U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                            ? (IData)(vlSelf->io_master_rid)
                                            : 0U)))),4);
    bufp->chgBit(oldp+318,(((~ ((IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
                                >> 2U)) & ((2U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                            ? ((1U 
                                                & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                                ? (3U 
                                                   == (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__state))
                                                : (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_awready))
                                            : ((IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
                                               & (IData)(vlSelf->io_master_awready))))));
    bufp->chgBit(oldp+319,(((~ ((IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
                                >> 2U)) & ((2U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                            ? ((1U 
                                                & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                                ? (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__wready_reg)
                                                : (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_wready))
                                            : ((IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
                                               & (IData)(vlSelf->io_master_wready))))));
    bufp->chgCData(oldp+320,(((4U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                               ? 0U : ((2U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                        ? ((1U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                            ? 0U : (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_bresp))
                                        : ((1U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                            ? (IData)(vlSelf->io_master_bresp)
                                            : 0U)))),2);
    bufp->chgCData(oldp+321,(((4U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                               ? 0U : ((2U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                        ? ((1U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                            ? 0U : (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_bid))
                                        : ((1U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                            ? (IData)(vlSelf->io_master_bid)
                                            : 0U)))),4);
    bufp->chgCData(oldp+322,(((4U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                               ? 0U : ((2U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                        ? ((1U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                            ? (((IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__rvalid_reg) 
                                                & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_rready))
                                                ? 0U
                                                : 3U)
                                            : (((IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_rvalid) 
                                                & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_rready))
                                                ? 0U
                                                : 2U))
                                        : ((1U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                            ? (((IData)(vlSelf->io_master_rvalid) 
                                                & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_rready))
                                                ? 0U
                                                : 1U)
                                            : ((IData)(vlSelf->ysyx_24120011__DOT__S0_arvalid)
                                                ? (
                                                   ((0xa0000048U 
                                                     == vlSelf->ysyx_24120011__DOT__S0_araddr) 
                                                    | (0xa000004cU 
                                                       == vlSelf->ysyx_24120011__DOT__S0_araddr))
                                                    ? 3U
                                                    : 1U)
                                                : 0U))))),3);
    bufp->chgCData(oldp+323,(((4U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                               ? 0U : ((2U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                        ? ((1U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                            ? (((5U 
                                                 == (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__state)) 
                                                & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_bready))
                                                ? 0U
                                                : 3U)
                                            : (((IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_bvalid) 
                                                & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_bready))
                                                ? 0U
                                                : 2U))
                                        : ((1U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                            ? (((IData)(vlSelf->io_master_bvalid) 
                                                & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_bready))
                                                ? 0U
                                                : 1U)
                                            : ((IData)(vlSelf->ysyx_24120011__DOT__S0_awvalid)
                                                ? (
                                                   (0xa00003f8U 
                                                    == vlSelf->ysyx_24120011__DOT__S0_awaddr)
                                                    ? 2U
                                                    : 1U)
                                                : 0U))))),3);
    bufp->chgBit(oldp+324,(((IData)(vlSelf->io_master_rvalid) 
                            & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_rready))));
    bufp->chgBit(oldp+325,(((IData)(vlSelf->io_master_bvalid) 
                            & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_bready))));
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
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
