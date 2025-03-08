// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_24120011_top__Syms.h"


void Vysyx_24120011_top___024root__trace_chg_sub_0(Vysyx_24120011_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vysyx_24120011_top___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120011_top___024root__trace_chg_top_0\n"); );
    // Init
    Vysyx_24120011_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_24120011_top___024root*>(voidSelf);
    Vysyx_24120011_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vysyx_24120011_top___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vysyx_24120011_top___024root__trace_chg_sub_0(Vysyx_24120011_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24120011_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120011_top___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgIData(oldp+0,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_awaddr),32);
        bufp->chgBit(oldp+1,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_awvalid));
        bufp->chgIData(oldp+2,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_wdata),32);
        bufp->chgCData(oldp+3,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_wstrb),4);
        bufp->chgBit(oldp+4,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_wvalid));
        bufp->chgBit(oldp+5,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_bready));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+6,((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Clint__DOT__state))));
        bufp->chgIData(oldp+7,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Clint__DOT__rdata_reg),32);
        bufp->chgBit(oldp+8,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Clint__DOT__rvalid_reg));
        bufp->chgBit(oldp+9,((3U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Clint__DOT__state))));
        bufp->chgBit(oldp+10,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Clint__DOT__wready_reg));
        bufp->chgBit(oldp+11,((5U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Clint__DOT__state))));
        bufp->chgCData(oldp+12,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Clint__DOT__state),3);
        bufp->chgIData(oldp+13,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Clint__DOT__addr),32);
        bufp->chgCData(oldp+14,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Clint__DOT__read_delay_cnt),8);
        bufp->chgCData(oldp+15,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Clint__DOT__write_delay_cnt),8);
        bufp->chgBit(oldp+16,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Clint__DOT__pmem_readed));
        bufp->chgBit(oldp+17,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Clint__DOT__pmem_writed));
        bufp->chgCData(oldp+18,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Clint__DOT__LSFR_in),8);
        bufp->chgCData(oldp+19,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Clint__DOT__random_delay),8);
        bufp->chgQData(oldp+20,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Clint__DOT__mtime),64);
        bufp->chgBit(oldp+22,(((5U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Clint__DOT__state)) 
                               & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_bready))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+23,(vlSelf->ysyx_24120011_top__DOT__r_mem_data),32);
        bufp->chgIData(oldp+24,(((IData)(4U) + vlSelf->ysyx_24120011_top__DOT__pc)),32);
        bufp->chgIData(oldp+25,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs
                                [0xaU]),32);
        bufp->chgIData(oldp+26,(vlSelf->ysyx_24120011_top__DOT__pc),32);
        bufp->chgBit(oldp+27,(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__rready));
        bufp->chgBit(oldp+28,(vlSelf->ysyx_24120011_top__DOT__LSU_valid));
        bufp->chgBit(oldp+29,(vlSelf->ysyx_24120011_top__DOT__LSU_ready));
        bufp->chgIData(oldp+30,(vlSelf->ysyx_24120011_top__DOT__LSU_valid),32);
        bufp->chgBit(oldp+31,(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__arvalid));
        bufp->chgBit(oldp+32,(((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_state)) 
                               & ((0U != (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
                                  & ((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                      ? (3U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__state))
                                      : ((2U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
                                         & (3U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__state))))))));
        bufp->chgBit(oldp+33,(((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_state)) 
                               & ((0U != (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
                                  & ((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                      ? (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__wready_reg)
                                      : ((2U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
                                         & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__wready_reg)))))));
        bufp->chgBit(oldp+34,(((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_state)) 
                               & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_bvalid))));
        bufp->chgBit(oldp+35,(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__arvalid));
        bufp->chgBit(oldp+36,(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__rready));
        bufp->chgBit(oldp+37,(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__awvalid));
        bufp->chgBit(oldp+38,(((2U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_state)) 
                               & ((0U != (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
                                  & ((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                      ? (3U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__state))
                                      : ((2U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
                                         & (3U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__state))))))));
        bufp->chgBit(oldp+39,(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__wvalid));
        bufp->chgBit(oldp+40,(vlSelf->ysyx_24120011_top__DOT__M1_wready));
        bufp->chgBit(oldp+41,(vlSelf->ysyx_24120011_top__DOT__M1_bvalid));
        bufp->chgBit(oldp+42,(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__bready));
        bufp->chgBit(oldp+43,(vlSelf->ysyx_24120011_top__DOT__S0_arvalid));
        bufp->chgBit(oldp+44,(vlSelf->ysyx_24120011_top__DOT__S0_rready));
        bufp->chgBit(oldp+45,(vlSelf->ysyx_24120011_top__DOT__S0_awvalid));
        bufp->chgBit(oldp+46,(((0U != (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
                               & ((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                   ? (3U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__state))
                                   : ((2U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
                                      & (3U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__state)))))));
        bufp->chgBit(oldp+47,(vlSelf->ysyx_24120011_top__DOT__S0_wvalid));
        bufp->chgBit(oldp+48,(((0U != (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
                               & ((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                   ? (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__wready_reg)
                                   : ((2U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
                                      & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__wready_reg))))));
        bufp->chgBit(oldp+49,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_bvalid));
        bufp->chgBit(oldp+50,(vlSelf->ysyx_24120011_top__DOT__S0_bready));
        bufp->chgBit(oldp+51,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_arvalid));
        bufp->chgBit(oldp+52,((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__state))));
        bufp->chgIData(oldp+53,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__rdata_reg),32);
        bufp->chgBit(oldp+54,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__rvalid_reg));
        bufp->chgBit(oldp+55,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_rready));
        bufp->chgBit(oldp+56,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_awvalid));
        bufp->chgBit(oldp+57,((3U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__state))));
        bufp->chgBit(oldp+58,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wvalid));
        bufp->chgBit(oldp+59,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__wready_reg));
        bufp->chgBit(oldp+60,((5U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__state))));
        bufp->chgBit(oldp+61,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_bready));
        bufp->chgBit(oldp+62,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_arvalid));
        bufp->chgBit(oldp+63,((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__state))));
        bufp->chgIData(oldp+64,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__rdata_reg),32);
        bufp->chgBit(oldp+65,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__rvalid_reg));
        bufp->chgBit(oldp+66,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_rready));
        bufp->chgBit(oldp+67,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_awvalid));
        bufp->chgBit(oldp+68,((3U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__state))));
        bufp->chgBit(oldp+69,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_wvalid));
        bufp->chgBit(oldp+70,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__wready_reg));
        bufp->chgBit(oldp+71,((5U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__state))));
        bufp->chgBit(oldp+72,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_bready));
        bufp->chgBit(oldp+73,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_arvalid));
        bufp->chgBit(oldp+74,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_rready));
        bufp->chgIData(oldp+75,(vlSelf->ysyx_24120011_top__DOT__i_Csr__DOT__mepc),32);
        bufp->chgIData(oldp+76,(vlSelf->ysyx_24120011_top__DOT__i_Csr__DOT__mstatus),32);
        bufp->chgIData(oldp+77,(vlSelf->ysyx_24120011_top__DOT__i_Csr__DOT__mcause),32);
        bufp->chgIData(oldp+78,(vlSelf->ysyx_24120011_top__DOT__i_Csr__DOT__mtvec),32);
        bufp->chgBit(oldp+79,(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__rvalid_prev));
        bufp->chgCData(oldp+80,(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__state),3);
        bufp->chgCData(oldp+81,(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__arvalid_delay_cnt),8);
        bufp->chgCData(oldp+82,(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__rready_delay_cnt),8);
        bufp->chgCData(oldp+83,(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__LSFR_in),8);
        bufp->chgCData(oldp+84,(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__random_delay),8);
        bufp->chgCData(oldp+85,(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__state),3);
        bufp->chgBit(oldp+86,(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__start_read_delay));
        bufp->chgBit(oldp+87,(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__start_write_delay));
        bufp->chgBit(oldp+88,((0U != (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__state))));
        bufp->chgCData(oldp+89,(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__arvalid_delay_cnt),8);
        bufp->chgCData(oldp+90,(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__awvalid_delay_cnt),8);
        bufp->chgCData(oldp+91,(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__wvalid_delay_cnt),8);
        bufp->chgCData(oldp+92,(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__rready_delay_cnt),8);
        bufp->chgCData(oldp+93,(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__bready_delay_cnt),8);
        bufp->chgCData(oldp+94,(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__LSFR_in),8);
        bufp->chgCData(oldp+95,(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__random_delay),8);
        bufp->chgIData(oldp+96,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[0]),32);
        bufp->chgIData(oldp+97,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[1]),32);
        bufp->chgIData(oldp+98,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[2]),32);
        bufp->chgIData(oldp+99,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[3]),32);
        bufp->chgIData(oldp+100,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[4]),32);
        bufp->chgIData(oldp+101,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[5]),32);
        bufp->chgIData(oldp+102,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[6]),32);
        bufp->chgIData(oldp+103,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[7]),32);
        bufp->chgIData(oldp+104,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[8]),32);
        bufp->chgIData(oldp+105,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[9]),32);
        bufp->chgIData(oldp+106,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[10]),32);
        bufp->chgIData(oldp+107,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[11]),32);
        bufp->chgIData(oldp+108,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[12]),32);
        bufp->chgIData(oldp+109,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[13]),32);
        bufp->chgIData(oldp+110,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[14]),32);
        bufp->chgIData(oldp+111,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[15]),32);
        bufp->chgIData(oldp+112,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[16]),32);
        bufp->chgIData(oldp+113,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[17]),32);
        bufp->chgIData(oldp+114,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[18]),32);
        bufp->chgIData(oldp+115,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[19]),32);
        bufp->chgIData(oldp+116,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[20]),32);
        bufp->chgIData(oldp+117,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[21]),32);
        bufp->chgIData(oldp+118,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[22]),32);
        bufp->chgIData(oldp+119,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[23]),32);
        bufp->chgIData(oldp+120,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[24]),32);
        bufp->chgIData(oldp+121,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[25]),32);
        bufp->chgIData(oldp+122,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[26]),32);
        bufp->chgIData(oldp+123,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[27]),32);
        bufp->chgIData(oldp+124,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[28]),32);
        bufp->chgIData(oldp+125,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[29]),32);
        bufp->chgIData(oldp+126,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[30]),32);
        bufp->chgIData(oldp+127,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[31]),32);
        bufp->chgIData(oldp+128,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[0]),32);
        bufp->chgIData(oldp+129,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[1]),32);
        bufp->chgIData(oldp+130,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[2]),32);
        bufp->chgIData(oldp+131,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[3]),32);
        bufp->chgIData(oldp+132,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[4]),32);
        bufp->chgIData(oldp+133,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[5]),32);
        bufp->chgIData(oldp+134,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[6]),32);
        bufp->chgIData(oldp+135,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[7]),32);
        bufp->chgIData(oldp+136,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[8]),32);
        bufp->chgIData(oldp+137,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[9]),32);
        bufp->chgIData(oldp+138,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[10]),32);
        bufp->chgIData(oldp+139,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[11]),32);
        bufp->chgIData(oldp+140,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[12]),32);
        bufp->chgIData(oldp+141,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[13]),32);
        bufp->chgIData(oldp+142,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[14]),32);
        bufp->chgIData(oldp+143,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[15]),32);
        bufp->chgIData(oldp+144,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[16]),32);
        bufp->chgIData(oldp+145,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[17]),32);
        bufp->chgIData(oldp+146,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[18]),32);
        bufp->chgIData(oldp+147,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[19]),32);
        bufp->chgIData(oldp+148,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[20]),32);
        bufp->chgIData(oldp+149,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[21]),32);
        bufp->chgIData(oldp+150,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[22]),32);
        bufp->chgIData(oldp+151,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[23]),32);
        bufp->chgIData(oldp+152,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[24]),32);
        bufp->chgIData(oldp+153,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[25]),32);
        bufp->chgIData(oldp+154,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[26]),32);
        bufp->chgIData(oldp+155,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[27]),32);
        bufp->chgIData(oldp+156,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[28]),32);
        bufp->chgIData(oldp+157,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[29]),32);
        bufp->chgIData(oldp+158,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[30]),32);
        bufp->chgIData(oldp+159,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[31]),32);
        bufp->chgCData(oldp+160,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__read_state),3);
        bufp->chgCData(oldp+161,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_state),3);
        bufp->chgCData(oldp+162,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_next_state),3);
        bufp->chgCData(oldp+163,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__last_read_master),3);
        bufp->chgCData(oldp+164,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__last_write_master),3);
        bufp->chgBit(oldp+165,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_done));
        bufp->chgCData(oldp+166,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__state),3);
        bufp->chgCData(oldp+167,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__next_state),3);
        bufp->chgIData(oldp+168,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__addr),32);
        bufp->chgCData(oldp+169,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__read_delay_cnt),8);
        bufp->chgCData(oldp+170,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__write_delay_cnt),8);
        bufp->chgBit(oldp+171,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__pmem_readed));
        bufp->chgBit(oldp+172,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__pmem_writed));
        bufp->chgCData(oldp+173,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__LSFR_in),8);
        bufp->chgCData(oldp+174,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__random_delay),8);
        bufp->chgCData(oldp+175,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__state),3);
        bufp->chgCData(oldp+176,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__next_state),3);
        bufp->chgIData(oldp+177,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__addr),32);
        bufp->chgCData(oldp+178,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__read_delay_cnt),8);
        bufp->chgCData(oldp+179,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__write_delay_cnt),8);
        bufp->chgBit(oldp+180,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__pmem_readed));
        bufp->chgBit(oldp+181,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__pmem_writed));
        bufp->chgCData(oldp+182,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__LSFR_in),8);
        bufp->chgCData(oldp+183,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__random_delay),8);
        bufp->chgCData(oldp+184,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state),3);
        bufp->chgCData(oldp+185,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state),3);
        bufp->chgBit(oldp+186,(((IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__rvalid_reg) 
                                & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_rready))));
        bufp->chgBit(oldp+187,(((5U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__state)) 
                                & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_bready))));
        bufp->chgBit(oldp+188,(((IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__rvalid_reg) 
                                & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_rready))));
        bufp->chgBit(oldp+189,(((5U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__state)) 
                                & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_bready))));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[2U] 
                     | vlSelf->__Vm_traceActivity[3U]))) {
        bufp->chgIData(oldp+190,(((2U & (IData)(vlSelf->ysyx_24120011_top__DOT__pc_ctrl))
                                   ? ((1U & (IData)(vlSelf->ysyx_24120011_top__DOT__pc_ctrl))
                                       ? vlSelf->ysyx_24120011_top__DOT__r_csr_data
                                       : vlSelf->ysyx_24120011_top__DOT__alu_result)
                                   : ((1U & (IData)(vlSelf->ysyx_24120011_top__DOT__pc_ctrl))
                                       ? vlSelf->ysyx_24120011_top__DOT__pc_add_imme_out
                                       : (((0x63U == 
                                            (0x7fU 
                                             & vlSelf->ysyx_24120011_top__DOT__inst)) 
                                           & vlSelf->ysyx_24120011_top__DOT__alu_result)
                                           ? vlSelf->ysyx_24120011_top__DOT__pc_add_imme_out
                                           : ((IData)(4U) 
                                              + vlSelf->ysyx_24120011_top__DOT__pc))))),32);
        bufp->chgIData(oldp+191,(((8U & (IData)(vlSelf->ysyx_24120011_top__DOT__rd_ctrl))
                                   ? 0U : ((4U & (IData)(vlSelf->ysyx_24120011_top__DOT__rd_ctrl))
                                            ? ((2U 
                                                & (IData)(vlSelf->ysyx_24120011_top__DOT__rd_ctrl))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelf->ysyx_24120011_top__DOT__rd_ctrl))
                                                    ? 0U
                                                    : vlSelf->ysyx_24120011_top__DOT__r_csr_data)
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->ysyx_24120011_top__DOT__rd_ctrl))
                                                    ? vlSelf->ysyx_24120011_top__DOT__r_mem_data
                                                    : 0U))
                                            : ((2U 
                                                & (IData)(vlSelf->ysyx_24120011_top__DOT__rd_ctrl))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelf->ysyx_24120011_top__DOT__rd_ctrl))
                                                    ? vlSelf->ysyx_24120011_top__DOT__imme
                                                    : vlSelf->ysyx_24120011_top__DOT__alu_result)
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->ysyx_24120011_top__DOT__rd_ctrl))
                                                    ? vlSelf->ysyx_24120011_top__DOT__pc_add_imme_out
                                                    : 
                                                   ((IData)(4U) 
                                                    + vlSelf->ysyx_24120011_top__DOT__pc)))))),32);
        bufp->chgBit(oldp+192,(((IData)(vlSelf->ysyx_24120011_top__DOT__LSU_valid) 
                                & (4U != (IData)(vlSelf->ysyx_24120011_top__DOT__rd_ctrl)))));
        bufp->chgBit(oldp+193,(((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__read_state)) 
                                & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_arready))));
        bufp->chgIData(oldp+194,(((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__state))
                                   ? vlSelf->ysyx_24120011_top__DOT__alu_result
                                   : 0U)),32);
        bufp->chgBit(oldp+195,(((2U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__read_state)) 
                                & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_arready))));
        bufp->chgIData(oldp+196,(((3U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__state))
                                   ? vlSelf->ysyx_24120011_top__DOT__alu_result
                                   : 0U)),32);
        bufp->chgIData(oldp+197,(((4U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__state))
                                   ? vlSelf->ysyx_24120011_top__DOT__src2
                                   : 0U)),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgCData(oldp+198,((0x1fU & (vlSelf->ysyx_24120011_top__DOT__inst 
                                           >> 0xfU))),5);
        bufp->chgCData(oldp+199,((0x1fU & (vlSelf->ysyx_24120011_top__DOT__inst 
                                           >> 0x14U))),5);
        bufp->chgCData(oldp+200,((0x1fU & (vlSelf->ysyx_24120011_top__DOT__inst 
                                           >> 7U))),5);
        bufp->chgCData(oldp+201,((7U & (vlSelf->ysyx_24120011_top__DOT__inst 
                                        >> 0xcU))),3);
        bufp->chgCData(oldp+202,((vlSelf->ysyx_24120011_top__DOT__inst 
                                  >> 0x19U)),7);
        bufp->chgIData(oldp+203,(vlSelf->ysyx_24120011_top__DOT__imme),32);
        bufp->chgIData(oldp+204,(vlSelf->ysyx_24120011_top__DOT__src1),32);
        bufp->chgIData(oldp+205,(vlSelf->ysyx_24120011_top__DOT__src2),32);
        bufp->chgIData(oldp+206,(vlSelf->ysyx_24120011_top__DOT__pc_add_imme_out),32);
        bufp->chgIData(oldp+207,(vlSelf->ysyx_24120011_top__DOT__ALUB),32);
        bufp->chgIData(oldp+208,(vlSelf->ysyx_24120011_top__DOT__alu_result),32);
        bufp->chgCData(oldp+209,(vlSelf->ysyx_24120011_top__DOT__pc_ctrl),2);
        bufp->chgCData(oldp+210,(vlSelf->ysyx_24120011_top__DOT__rd_ctrl),4);
        bufp->chgCData(oldp+211,(vlSelf->ysyx_24120011_top__DOT__ALUBctrl),2);
        bufp->chgBit(oldp+212,(vlSelf->ysyx_24120011_top__DOT__w_mem_en));
        bufp->chgBit(oldp+213,(vlSelf->ysyx_24120011_top__DOT__r_mem_en));
        bufp->chgBit(oldp+214,(vlSelf->ysyx_24120011_top__DOT__sign_extension));
        bufp->chgBit(oldp+215,(((0x63U == (0x7fU & vlSelf->ysyx_24120011_top__DOT__inst)) 
                                & vlSelf->ysyx_24120011_top__DOT__alu_result)));
        bufp->chgCData(oldp+216,(vlSelf->ysyx_24120011_top__DOT__w_mem_len),8);
        bufp->chgCData(oldp+217,(vlSelf->ysyx_24120011_top__DOT__r_mem_len),8);
        bufp->chgCData(oldp+218,(vlSelf->ysyx_24120011_top__DOT__ALU_ctrl),4);
        bufp->chgCData(oldp+219,(vlSelf->ysyx_24120011_top__DOT__w_csr_data_ctrl),4);
        bufp->chgSData(oldp+220,(vlSelf->ysyx_24120011_top__DOT__w_csr_addr),12);
        bufp->chgSData(oldp+221,(vlSelf->ysyx_24120011_top__DOT__r_csr_addr),12);
        bufp->chgBit(oldp+222,(vlSelf->ysyx_24120011_top__DOT__w_csr_en));
        bufp->chgBit(oldp+223,(vlSelf->ysyx_24120011_top__DOT__r_csr_en));
        bufp->chgBit(oldp+224,(vlSelf->ysyx_24120011_top__DOT__w_csr_ecall));
        bufp->chgIData(oldp+225,(vlSelf->ysyx_24120011_top__DOT__w_csr_data),32);
        bufp->chgIData(oldp+226,(vlSelf->ysyx_24120011_top__DOT__r_csr_data),32);
        bufp->chgIData(oldp+227,(vlSelf->ysyx_24120011_top__DOT__inst),32);
        bufp->chgIData(oldp+228,(vlSelf->ysyx_24120011_top__DOT__M0_rdata),32);
        bufp->chgBit(oldp+229,(vlSelf->ysyx_24120011_top__DOT__M0_rvalid));
        bufp->chgIData(oldp+230,(vlSelf->ysyx_24120011_top__DOT__M1_rdata),32);
        bufp->chgBit(oldp+231,(vlSelf->ysyx_24120011_top__DOT__M1_rvalid));
        bufp->chgCData(oldp+232,(((4U == (IData)(vlSelf->ysyx_24120011_top__DOT__w_mem_len))
                                   ? 0xfU : ((2U == (IData)(vlSelf->ysyx_24120011_top__DOT__w_mem_len))
                                              ? 3U : 1U))),4);
        bufp->chgIData(oldp+233,(vlSelf->ysyx_24120011_top__DOT__S0_araddr),32);
        bufp->chgBit(oldp+234,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_arready));
        bufp->chgIData(oldp+235,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rdata),32);
        bufp->chgBit(oldp+236,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rvalid));
        bufp->chgIData(oldp+237,(vlSelf->ysyx_24120011_top__DOT__S0_awaddr),32);
        bufp->chgIData(oldp+238,(vlSelf->ysyx_24120011_top__DOT__S0_wdata),32);
        bufp->chgCData(oldp+239,(vlSelf->ysyx_24120011_top__DOT__S0_wstrb),4);
        bufp->chgIData(oldp+240,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_araddr),32);
        bufp->chgIData(oldp+241,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_awaddr),32);
        bufp->chgIData(oldp+242,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wdata),32);
        bufp->chgCData(oldp+243,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wstrb),4);
        bufp->chgIData(oldp+244,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_araddr),32);
        bufp->chgIData(oldp+245,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_awaddr),32);
        bufp->chgIData(oldp+246,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_wdata),32);
        bufp->chgCData(oldp+247,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_wstrb),4);
        bufp->chgIData(oldp+248,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_araddr),32);
        bufp->chgIData(oldp+249,(vlSelf->ysyx_24120011_top__DOT__i_ALU__DOT__B_in),32);
        bufp->chgIData(oldp+250,(((1U & (IData)(vlSelf->ysyx_24120011_top__DOT__ALU_ctrl))
                                   ? vlSelf->ysyx_24120011_top__DOT__i_ALU__DOT____VdfgTmp_h6c4bfc22__0
                                   : vlSelf->ysyx_24120011_top__DOT__ALUB)),32);
        bufp->chgIData(oldp+251,(vlSelf->ysyx_24120011_top__DOT__i_ALU__DOT__ALUout_tmp),32);
        bufp->chgBit(oldp+252,(vlSelf->ysyx_24120011_top__DOT__i_ALU__DOT__carry));
        bufp->chgBit(oldp+253,((((vlSelf->ysyx_24120011_top__DOT__src1 
                                  >> 0x1fU) == (((1U 
                                                  & (IData)(vlSelf->ysyx_24120011_top__DOT__ALU_ctrl))
                                                  ? vlSelf->ysyx_24120011_top__DOT__i_ALU__DOT____VdfgTmp_h6c4bfc22__0
                                                  : vlSelf->ysyx_24120011_top__DOT__ALUB) 
                                                >> 0x1fU)) 
                                & ((vlSelf->ysyx_24120011_top__DOT__src1 
                                    >> 0x1fU) != (vlSelf->ysyx_24120011_top__DOT__i_ALU__DOT__ALUout_tmp 
                                                  >> 0x1fU)))));
        bufp->chgBit(oldp+254,((1U & (~ (IData)(vlSelf->ysyx_24120011_top__DOT__i_ALU__DOT__carry)))));
        bufp->chgBit(oldp+255,(vlSelf->ysyx_24120011_top__DOT__i_ALU__DOT__sless));
        bufp->chgBit(oldp+256,((vlSelf->ysyx_24120011_top__DOT__src1 
                                == vlSelf->ysyx_24120011_top__DOT__ALUB)));
        bufp->chgBit(oldp+257,((vlSelf->ysyx_24120011_top__DOT__src1 
                                != vlSelf->ysyx_24120011_top__DOT__ALUB)));
        bufp->chgCData(oldp+258,(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__next_state),3);
        bufp->chgCData(oldp+259,(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__next_state),3);
        bufp->chgCData(oldp+260,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__read_next_state),3);
        bufp->chgBit(oldp+261,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__read_done));
        bufp->chgCData(oldp+262,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Clint__DOT__next_state),3);
        bufp->chgCData(oldp+263,((0x7fU & vlSelf->ysyx_24120011_top__DOT__inst)),7);
        bufp->chgCData(oldp+264,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_IDU__DOT__opcode_type),3);
    }
    bufp->chgBit(oldp+265,(vlSelf->clk));
    bufp->chgBit(oldp+266,(vlSelf->rst));
    bufp->chgCData(oldp+267,(((4U & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                               ? 0U : ((2U & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                        ? ((1U & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                            ? (((IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Clint__DOT__rvalid_reg) 
                                                & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_rready))
                                                ? 0U
                                                : 3U)
                                            : (((IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__rvalid_reg) 
                                                & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_rready))
                                                ? 0U
                                                : 2U))
                                        : ((1U & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                            ? (((IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__rvalid_reg) 
                                                & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_rready))
                                                ? 0U
                                                : 1U)
                                            : ((IData)(vlSelf->ysyx_24120011_top__DOT__S0_arvalid)
                                                ? (
                                                   ((0xa0000048U 
                                                     == vlSelf->ysyx_24120011_top__DOT__S0_araddr) 
                                                    | (0xa000004cU 
                                                       == vlSelf->ysyx_24120011_top__DOT__S0_araddr))
                                                    ? 3U
                                                    : 1U)
                                                : 0U))))),3);
    bufp->chgCData(oldp+268,(((4U & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                               ? 0U : ((2U & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                        ? ((1U & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                            ? (((5U 
                                                 == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Clint__DOT__state)) 
                                                & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_bready))
                                                ? 0U
                                                : 3U)
                                            : (((5U 
                                                 == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__state)) 
                                                & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_bready))
                                                ? 0U
                                                : 2U))
                                        : ((1U & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                            ? (((5U 
                                                 == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__state)) 
                                                & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_bready))
                                                ? 0U
                                                : 1U)
                                            : ((IData)(vlSelf->ysyx_24120011_top__DOT__S0_awvalid)
                                                ? (
                                                   (0xa00003f8U 
                                                    == vlSelf->ysyx_24120011_top__DOT__S0_awaddr)
                                                    ? 2U
                                                    : 1U)
                                                : 0U))))),3);
    bufp->chgBit(oldp+269,(((IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Clint__DOT__rvalid_reg) 
                            & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_rready))));
}

void Vysyx_24120011_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120011_top___024root__trace_cleanup\n"); );
    // Init
    Vysyx_24120011_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_24120011_top___024root*>(voidSelf);
    Vysyx_24120011_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
