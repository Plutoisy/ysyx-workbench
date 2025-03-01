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
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(((2U & (IData)(vlSelf->ysyx_24120011_top__DOT__pc_ctrl))
                                 ? ((1U & (IData)(vlSelf->ysyx_24120011_top__DOT__pc_ctrl))
                                     ? vlSelf->ysyx_24120011_top__DOT__r_csr_data
                                     : vlSelf->ysyx_24120011_top__DOT__alu_result)
                                 : ((1U & (IData)(vlSelf->ysyx_24120011_top__DOT__pc_ctrl))
                                     ? vlSelf->ysyx_24120011_top__DOT__pc_add_imme_out
                                     : (((0x63U == 
                                          (0x7fU & vlSelf->ysyx_24120011_top__DOT__inst)) 
                                         & vlSelf->ysyx_24120011_top__DOT__alu_result)
                                         ? vlSelf->ysyx_24120011_top__DOT__pc_add_imme_out
                                         : ((IData)(4U) 
                                            + vlSelf->ysyx_24120011_top__DOT__pc))))),32);
        bufp->chgCData(oldp+1,((0x1fU & (vlSelf->ysyx_24120011_top__DOT__inst 
                                         >> 0xfU))),5);
        bufp->chgCData(oldp+2,((0x1fU & (vlSelf->ysyx_24120011_top__DOT__inst 
                                         >> 0x14U))),5);
        bufp->chgCData(oldp+3,((0x1fU & (vlSelf->ysyx_24120011_top__DOT__inst 
                                         >> 7U))),5);
        bufp->chgCData(oldp+4,((7U & (vlSelf->ysyx_24120011_top__DOT__inst 
                                      >> 0xcU))),3);
        bufp->chgCData(oldp+5,((vlSelf->ysyx_24120011_top__DOT__inst 
                                >> 0x19U)),7);
        bufp->chgIData(oldp+6,(vlSelf->ysyx_24120011_top__DOT__imme),32);
        bufp->chgIData(oldp+7,(((8U & (IData)(vlSelf->ysyx_24120011_top__DOT__rd_ctrl))
                                 ? 0U : ((4U & (IData)(vlSelf->ysyx_24120011_top__DOT__rd_ctrl))
                                          ? ((2U & (IData)(vlSelf->ysyx_24120011_top__DOT__rd_ctrl))
                                              ? ((1U 
                                                  & (IData)(vlSelf->ysyx_24120011_top__DOT__rd_ctrl))
                                                  ? 0U
                                                  : vlSelf->ysyx_24120011_top__DOT__r_csr_data)
                                              : ((1U 
                                                  & (IData)(vlSelf->ysyx_24120011_top__DOT__rd_ctrl))
                                                  ? vlSelf->ysyx_24120011_top__DOT__r_mem_data
                                                  : 0U))
                                          : ((2U & (IData)(vlSelf->ysyx_24120011_top__DOT__rd_ctrl))
                                              ? ((1U 
                                                  & (IData)(vlSelf->ysyx_24120011_top__DOT__rd_ctrl))
                                                  ? vlSelf->ysyx_24120011_top__DOT__imme
                                                  : vlSelf->ysyx_24120011_top__DOT__alu_result)
                                              : ((1U 
                                                  & (IData)(vlSelf->ysyx_24120011_top__DOT__rd_ctrl))
                                                  ? vlSelf->ysyx_24120011_top__DOT__pc_add_imme_out
                                                  : 
                                                 ((IData)(4U) 
                                                  + vlSelf->ysyx_24120011_top__DOT__pc)))))),32);
        bufp->chgIData(oldp+8,(vlSelf->ysyx_24120011_top__DOT__r_mem_data),32);
        bufp->chgIData(oldp+9,(vlSelf->ysyx_24120011_top__DOT__src1),32);
        bufp->chgIData(oldp+10,(vlSelf->ysyx_24120011_top__DOT__src2),32);
        bufp->chgIData(oldp+11,(vlSelf->ysyx_24120011_top__DOT__pc_add_imme_out),32);
        bufp->chgIData(oldp+12,(((IData)(4U) + vlSelf->ysyx_24120011_top__DOT__pc)),32);
        bufp->chgIData(oldp+13,(vlSelf->ysyx_24120011_top__DOT__ALUB),32);
        bufp->chgIData(oldp+14,(vlSelf->ysyx_24120011_top__DOT__alu_result),32);
        bufp->chgCData(oldp+15,(vlSelf->ysyx_24120011_top__DOT__pc_ctrl),2);
        bufp->chgCData(oldp+16,(vlSelf->ysyx_24120011_top__DOT__rd_ctrl),4);
        bufp->chgCData(oldp+17,(vlSelf->ysyx_24120011_top__DOT__ALUBctrl),2);
        bufp->chgBit(oldp+18,(((IData)(vlSelf->ysyx_24120011_top__DOT__LSU_valid) 
                               & (4U != (IData)(vlSelf->ysyx_24120011_top__DOT__rd_ctrl)))));
        bufp->chgBit(oldp+19,(vlSelf->ysyx_24120011_top__DOT__w_mem_en));
        bufp->chgBit(oldp+20,(vlSelf->ysyx_24120011_top__DOT__r_mem_en));
        bufp->chgBit(oldp+21,(vlSelf->ysyx_24120011_top__DOT__sign_extension));
        bufp->chgBit(oldp+22,(((0x63U == (0x7fU & vlSelf->ysyx_24120011_top__DOT__inst)) 
                               & vlSelf->ysyx_24120011_top__DOT__alu_result)));
        bufp->chgCData(oldp+23,(vlSelf->ysyx_24120011_top__DOT__w_mem_len),8);
        bufp->chgCData(oldp+24,(vlSelf->ysyx_24120011_top__DOT__r_mem_len),8);
        bufp->chgCData(oldp+25,(vlSelf->ysyx_24120011_top__DOT__ALU_ctrl),4);
        bufp->chgCData(oldp+26,(vlSelf->ysyx_24120011_top__DOT__w_csr_data_ctrl),4);
        bufp->chgIData(oldp+27,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs
                                [0xaU]),32);
        bufp->chgSData(oldp+28,(vlSelf->ysyx_24120011_top__DOT__w_csr_addr),12);
        bufp->chgSData(oldp+29,(vlSelf->ysyx_24120011_top__DOT__r_csr_addr),12);
        bufp->chgBit(oldp+30,(vlSelf->ysyx_24120011_top__DOT__w_csr_en));
        bufp->chgBit(oldp+31,(vlSelf->ysyx_24120011_top__DOT__r_csr_en));
        bufp->chgBit(oldp+32,(vlSelf->ysyx_24120011_top__DOT__w_csr_ecall));
        bufp->chgIData(oldp+33,(vlSelf->ysyx_24120011_top__DOT__w_csr_data),32);
        bufp->chgIData(oldp+34,(vlSelf->ysyx_24120011_top__DOT__r_csr_data),32);
        bufp->chgIData(oldp+35,(vlSelf->ysyx_24120011_top__DOT__pc),32);
        bufp->chgIData(oldp+36,(vlSelf->ysyx_24120011_top__DOT__inst),32);
        bufp->chgBit(oldp+37,((2U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__u_SRAM__DOT__state))));
        bufp->chgBit(oldp+38,(vlSelf->ysyx_24120011_top__DOT__LSU_valid));
        bufp->chgIData(oldp+39,(vlSelf->ysyx_24120011_top__DOT__LSU_valid),32);
        bufp->chgIData(oldp+40,(vlSelf->ysyx_24120011_top__DOT__i_ALU__DOT__B_in),32);
        bufp->chgIData(oldp+41,(((1U & (IData)(vlSelf->ysyx_24120011_top__DOT__ALU_ctrl))
                                  ? vlSelf->ysyx_24120011_top__DOT__i_ALU__DOT____VdfgTmp_h6c4bfc22__0
                                  : vlSelf->ysyx_24120011_top__DOT__ALUB)),32);
        bufp->chgIData(oldp+42,(vlSelf->ysyx_24120011_top__DOT__i_ALU__DOT__ALUout_tmp),32);
        bufp->chgBit(oldp+43,(vlSelf->ysyx_24120011_top__DOT__i_ALU__DOT__carry));
        bufp->chgBit(oldp+44,((((vlSelf->ysyx_24120011_top__DOT__src1 
                                 >> 0x1fU) == (((1U 
                                                 & (IData)(vlSelf->ysyx_24120011_top__DOT__ALU_ctrl))
                                                 ? vlSelf->ysyx_24120011_top__DOT__i_ALU__DOT____VdfgTmp_h6c4bfc22__0
                                                 : vlSelf->ysyx_24120011_top__DOT__ALUB) 
                                               >> 0x1fU)) 
                               & ((vlSelf->ysyx_24120011_top__DOT__src1 
                                   >> 0x1fU) != (vlSelf->ysyx_24120011_top__DOT__i_ALU__DOT__ALUout_tmp 
                                                 >> 0x1fU)))));
        bufp->chgBit(oldp+45,((1U & (~ (IData)(vlSelf->ysyx_24120011_top__DOT__i_ALU__DOT__carry)))));
        bufp->chgBit(oldp+46,(vlSelf->ysyx_24120011_top__DOT__i_ALU__DOT__sless));
        bufp->chgBit(oldp+47,((vlSelf->ysyx_24120011_top__DOT__src1 
                               == vlSelf->ysyx_24120011_top__DOT__ALUB)));
        bufp->chgBit(oldp+48,((vlSelf->ysyx_24120011_top__DOT__src1 
                               != vlSelf->ysyx_24120011_top__DOT__ALUB)));
        bufp->chgIData(oldp+49,(vlSelf->ysyx_24120011_top__DOT__i_Csr__DOT__mepc),32);
        bufp->chgIData(oldp+50,(vlSelf->ysyx_24120011_top__DOT__i_Csr__DOT__mstatus),32);
        bufp->chgIData(oldp+51,(vlSelf->ysyx_24120011_top__DOT__i_Csr__DOT__mcause),32);
        bufp->chgIData(oldp+52,(vlSelf->ysyx_24120011_top__DOT__i_Csr__DOT__mtvec),32);
        bufp->chgBit(oldp+53,((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__u_SRAM__DOT__state))));
        bufp->chgBit(oldp+54,((3U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__u_SRAM__DOT__state))));
        bufp->chgBit(oldp+55,((4U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__u_SRAM__DOT__state))));
        bufp->chgBit(oldp+56,((5U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__u_SRAM__DOT__state))));
        bufp->chgCData(oldp+57,(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__u_SRAM__DOT__state),3);
        bufp->chgCData(oldp+58,(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__u_SRAM__DOT__next_state),3);
        bufp->chgIData(oldp+59,(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__u_SRAM__DOT__addr),32);
        bufp->chgCData(oldp+60,(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__state),3);
        bufp->chgCData(oldp+61,(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__next_state),3);
        bufp->chgBit(oldp+62,(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__start_read_delay));
        bufp->chgBit(oldp+63,(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__start_write_delay));
        bufp->chgIData(oldp+64,(((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__state))
                                  ? vlSelf->ysyx_24120011_top__DOT__alu_result
                                  : 0U)),32);
        bufp->chgBit(oldp+65,((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__state))));
        bufp->chgBit(oldp+66,((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__u_SRAM__DOT__state))));
        bufp->chgBit(oldp+67,((2U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__state))));
        bufp->chgBit(oldp+68,((2U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__u_SRAM__DOT__state))));
        bufp->chgBit(oldp+69,((3U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__state))));
        bufp->chgBit(oldp+70,((3U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__u_SRAM__DOT__state))));
        bufp->chgIData(oldp+71,(((3U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__state))
                                  ? vlSelf->ysyx_24120011_top__DOT__alu_result
                                  : 0U)),32);
        bufp->chgBit(oldp+72,((4U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__state))));
        bufp->chgBit(oldp+73,((4U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__u_SRAM__DOT__state))));
        bufp->chgIData(oldp+74,(((4U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__state))
                                  ? vlSelf->ysyx_24120011_top__DOT__src2
                                  : 0U)),32);
        bufp->chgCData(oldp+75,(((4U == (IData)(vlSelf->ysyx_24120011_top__DOT__w_mem_len))
                                  ? 0xfU : ((2U == (IData)(vlSelf->ysyx_24120011_top__DOT__w_mem_len))
                                             ? 3U : 1U))),4);
        bufp->chgBit(oldp+76,((5U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__state))));
        bufp->chgIData(oldp+77,(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__rdata),32);
        bufp->chgBit(oldp+78,((5U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__u_SRAM__DOT__state))));
        bufp->chgBit(oldp+79,((0U != (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__state))));
        bufp->chgCData(oldp+80,(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__u_SRAM__DOT__state),3);
        bufp->chgCData(oldp+81,(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__u_SRAM__DOT__next_state),3);
        bufp->chgIData(oldp+82,(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__u_SRAM__DOT__addr),32);
        bufp->chgIData(oldp+83,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[0]),32);
        bufp->chgIData(oldp+84,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[1]),32);
        bufp->chgIData(oldp+85,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[2]),32);
        bufp->chgIData(oldp+86,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[3]),32);
        bufp->chgIData(oldp+87,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[4]),32);
        bufp->chgIData(oldp+88,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[5]),32);
        bufp->chgIData(oldp+89,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[6]),32);
        bufp->chgIData(oldp+90,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[7]),32);
        bufp->chgIData(oldp+91,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[8]),32);
        bufp->chgIData(oldp+92,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[9]),32);
        bufp->chgIData(oldp+93,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[10]),32);
        bufp->chgIData(oldp+94,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[11]),32);
        bufp->chgIData(oldp+95,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[12]),32);
        bufp->chgIData(oldp+96,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[13]),32);
        bufp->chgIData(oldp+97,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[14]),32);
        bufp->chgIData(oldp+98,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[15]),32);
        bufp->chgIData(oldp+99,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[16]),32);
        bufp->chgIData(oldp+100,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[17]),32);
        bufp->chgIData(oldp+101,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[18]),32);
        bufp->chgIData(oldp+102,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[19]),32);
        bufp->chgIData(oldp+103,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[20]),32);
        bufp->chgIData(oldp+104,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[21]),32);
        bufp->chgIData(oldp+105,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[22]),32);
        bufp->chgIData(oldp+106,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[23]),32);
        bufp->chgIData(oldp+107,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[24]),32);
        bufp->chgIData(oldp+108,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[25]),32);
        bufp->chgIData(oldp+109,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[26]),32);
        bufp->chgIData(oldp+110,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[27]),32);
        bufp->chgIData(oldp+111,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[28]),32);
        bufp->chgIData(oldp+112,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[29]),32);
        bufp->chgIData(oldp+113,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[30]),32);
        bufp->chgIData(oldp+114,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[31]),32);
        bufp->chgIData(oldp+115,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[0]),32);
        bufp->chgIData(oldp+116,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[1]),32);
        bufp->chgIData(oldp+117,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[2]),32);
        bufp->chgIData(oldp+118,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[3]),32);
        bufp->chgIData(oldp+119,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[4]),32);
        bufp->chgIData(oldp+120,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[5]),32);
        bufp->chgIData(oldp+121,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[6]),32);
        bufp->chgIData(oldp+122,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[7]),32);
        bufp->chgIData(oldp+123,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[8]),32);
        bufp->chgIData(oldp+124,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[9]),32);
        bufp->chgIData(oldp+125,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[10]),32);
        bufp->chgIData(oldp+126,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[11]),32);
        bufp->chgIData(oldp+127,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[12]),32);
        bufp->chgIData(oldp+128,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[13]),32);
        bufp->chgIData(oldp+129,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[14]),32);
        bufp->chgIData(oldp+130,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[15]),32);
        bufp->chgIData(oldp+131,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[16]),32);
        bufp->chgIData(oldp+132,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[17]),32);
        bufp->chgIData(oldp+133,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[18]),32);
        bufp->chgIData(oldp+134,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[19]),32);
        bufp->chgIData(oldp+135,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[20]),32);
        bufp->chgIData(oldp+136,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[21]),32);
        bufp->chgIData(oldp+137,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[22]),32);
        bufp->chgIData(oldp+138,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[23]),32);
        bufp->chgIData(oldp+139,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[24]),32);
        bufp->chgIData(oldp+140,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[25]),32);
        bufp->chgIData(oldp+141,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[26]),32);
        bufp->chgIData(oldp+142,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[27]),32);
        bufp->chgIData(oldp+143,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[28]),32);
        bufp->chgIData(oldp+144,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[29]),32);
        bufp->chgIData(oldp+145,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[30]),32);
        bufp->chgIData(oldp+146,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[31]),32);
        bufp->chgCData(oldp+147,((0x7fU & vlSelf->ysyx_24120011_top__DOT__inst)),7);
        bufp->chgCData(oldp+148,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_IDU__DOT__opcode_type),3);
    }
    bufp->chgBit(oldp+149,(vlSelf->clk));
    bufp->chgBit(oldp+150,(vlSelf->rst));
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
}
