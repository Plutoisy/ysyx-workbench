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
        bufp->chgIData(oldp+0,(vlSelf->ysyx_24120011_top__DOT__imme),32);
        bufp->chgCData(oldp+1,(vlSelf->ysyx_24120011_top__DOT__pc_ctrl),2);
        bufp->chgCData(oldp+2,(vlSelf->ysyx_24120011_top__DOT__rd_ctrl),4);
        bufp->chgBit(oldp+3,((4U != (IData)(vlSelf->ysyx_24120011_top__DOT__rd_ctrl))));
        bufp->chgBit(oldp+4,(vlSelf->ysyx_24120011_top__DOT__w_mem_en));
        bufp->chgBit(oldp+5,(vlSelf->ysyx_24120011_top__DOT__r_mem_en));
        bufp->chgBit(oldp+6,(vlSelf->ysyx_24120011_top__DOT__sign_extension));
        bufp->chgCData(oldp+7,(vlSelf->ysyx_24120011_top__DOT__r_mem_len),8);
        bufp->chgCData(oldp+8,(vlSelf->ysyx_24120011_top__DOT__i_IDU__DOT__opcode_type),3);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+9,(vlSelf->ysyx_24120011_top__DOT__r_mem_data),32);
        bufp->chgIData(oldp+10,(vlSelf->ysyx_24120011_top__DOT__src2),32);
        bufp->chgIData(oldp+11,(vlSelf->ysyx_24120011_top__DOT__pc_add_imme_out),32);
        bufp->chgIData(oldp+12,(vlSelf->ysyx_24120011_top__DOT__alu_result),32);
        bufp->chgIData(oldp+13,(vlSelf->ysyx_24120011_top__DOT__i_MemProcessor__DOT__r_mem_data_tmp),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+14,(vlSelf->ysyx_24120011_top__DOT__dnpc),32);
        bufp->chgIData(oldp+15,(vlSelf->ysyx_24120011_top__DOT__wdata),32);
        bufp->chgIData(oldp+16,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs
                                [0xaU]),32);
        bufp->chgIData(oldp+17,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[0]),32);
        bufp->chgIData(oldp+18,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[1]),32);
        bufp->chgIData(oldp+19,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[2]),32);
        bufp->chgIData(oldp+20,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[3]),32);
        bufp->chgIData(oldp+21,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[4]),32);
        bufp->chgIData(oldp+22,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[5]),32);
        bufp->chgIData(oldp+23,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[6]),32);
        bufp->chgIData(oldp+24,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[7]),32);
        bufp->chgIData(oldp+25,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[8]),32);
        bufp->chgIData(oldp+26,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[9]),32);
        bufp->chgIData(oldp+27,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[10]),32);
        bufp->chgIData(oldp+28,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[11]),32);
        bufp->chgIData(oldp+29,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[12]),32);
        bufp->chgIData(oldp+30,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[13]),32);
        bufp->chgIData(oldp+31,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[14]),32);
        bufp->chgIData(oldp+32,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[15]),32);
        bufp->chgIData(oldp+33,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[16]),32);
        bufp->chgIData(oldp+34,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[17]),32);
        bufp->chgIData(oldp+35,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[18]),32);
        bufp->chgIData(oldp+36,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[19]),32);
        bufp->chgIData(oldp+37,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[20]),32);
        bufp->chgIData(oldp+38,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[21]),32);
        bufp->chgIData(oldp+39,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[22]),32);
        bufp->chgIData(oldp+40,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[23]),32);
        bufp->chgIData(oldp+41,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[24]),32);
        bufp->chgIData(oldp+42,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[25]),32);
        bufp->chgIData(oldp+43,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[26]),32);
        bufp->chgIData(oldp+44,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[27]),32);
        bufp->chgIData(oldp+45,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[28]),32);
        bufp->chgIData(oldp+46,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[29]),32);
        bufp->chgIData(oldp+47,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[30]),32);
        bufp->chgIData(oldp+48,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[31]),32);
        bufp->chgIData(oldp+49,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[0]),32);
        bufp->chgIData(oldp+50,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[1]),32);
        bufp->chgIData(oldp+51,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[2]),32);
        bufp->chgIData(oldp+52,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[3]),32);
        bufp->chgIData(oldp+53,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[4]),32);
        bufp->chgIData(oldp+54,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[5]),32);
        bufp->chgIData(oldp+55,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[6]),32);
        bufp->chgIData(oldp+56,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[7]),32);
        bufp->chgIData(oldp+57,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[8]),32);
        bufp->chgIData(oldp+58,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[9]),32);
        bufp->chgIData(oldp+59,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[10]),32);
        bufp->chgIData(oldp+60,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[11]),32);
        bufp->chgIData(oldp+61,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[12]),32);
        bufp->chgIData(oldp+62,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[13]),32);
        bufp->chgIData(oldp+63,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[14]),32);
        bufp->chgIData(oldp+64,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[15]),32);
        bufp->chgIData(oldp+65,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[16]),32);
        bufp->chgIData(oldp+66,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[17]),32);
        bufp->chgIData(oldp+67,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[18]),32);
        bufp->chgIData(oldp+68,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[19]),32);
        bufp->chgIData(oldp+69,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[20]),32);
        bufp->chgIData(oldp+70,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[21]),32);
        bufp->chgIData(oldp+71,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[22]),32);
        bufp->chgIData(oldp+72,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[23]),32);
        bufp->chgIData(oldp+73,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[24]),32);
        bufp->chgIData(oldp+74,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[25]),32);
        bufp->chgIData(oldp+75,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[26]),32);
        bufp->chgIData(oldp+76,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[27]),32);
        bufp->chgIData(oldp+77,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[28]),32);
        bufp->chgIData(oldp+78,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[29]),32);
        bufp->chgIData(oldp+79,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[30]),32);
        bufp->chgIData(oldp+80,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[31]),32);
    }
    bufp->chgBit(oldp+81,(vlSelf->clk));
    bufp->chgBit(oldp+82,(vlSelf->rst));
    bufp->chgIData(oldp+83,(vlSelf->inst),32);
    bufp->chgIData(oldp+84,(vlSelf->pc),32);
    bufp->chgCData(oldp+85,((0x1fU & (vlSelf->inst 
                                      >> 0xfU))),5);
    bufp->chgCData(oldp+86,((0x1fU & (vlSelf->inst 
                                      >> 0x14U))),5);
    bufp->chgCData(oldp+87,((0x1fU & (vlSelf->inst 
                                      >> 7U))),5);
    bufp->chgCData(oldp+88,((7U & (vlSelf->inst >> 0xcU))),3);
    bufp->chgCData(oldp+89,((vlSelf->inst >> 0x19U)),7);
    bufp->chgIData(oldp+90,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs
                            [(0x1fU & (vlSelf->inst 
                                       >> 0xfU))]),32);
    bufp->chgIData(oldp+91,(((IData)(4U) + vlSelf->pc)),32);
    bufp->chgIData(oldp+92,((((0U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_IDU__DOT__opcode_type))
                               ? ((~ (IData)(vlSelf->ysyx_24120011_top__DOT__i_IDU__DOT____VdfgExtracted_h236fc9a3__0)) 
                                  & (3U != (0x7fU & vlSelf->inst)))
                               : (3U != (IData)(vlSelf->ysyx_24120011_top__DOT__i_IDU__DOT__opcode_type)))
                              ? vlSelf->ysyx_24120011_top__DOT__src2
                              : vlSelf->ysyx_24120011_top__DOT__imme)),32);
    bufp->chgBit(oldp+93,(((0U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_IDU__DOT__opcode_type))
                            ? ((~ (IData)(vlSelf->ysyx_24120011_top__DOT__i_IDU__DOT____VdfgExtracted_h236fc9a3__0)) 
                               & (3U != (0x7fU & vlSelf->inst)))
                            : (3U != (IData)(vlSelf->ysyx_24120011_top__DOT__i_IDU__DOT__opcode_type)))));
    bufp->chgCData(oldp+94,(((3U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_IDU__DOT__opcode_type))
                              ? ((0U == (7U & (vlSelf->inst 
                                               >> 0xcU)))
                                  ? 1U : ((1U == (7U 
                                                  & (vlSelf->inst 
                                                     >> 0xcU)))
                                           ? 2U : (
                                                   (2U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->inst 
                                                        >> 0xcU)))
                                                    ? 4U
                                                    : 1U)))
                              : 1U)),8);
    bufp->chgCData(oldp+95,((0x7fU & vlSelf->inst)),7);
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
}
