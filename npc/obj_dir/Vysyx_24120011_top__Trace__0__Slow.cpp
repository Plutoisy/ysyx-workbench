// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_24120011_top__Syms.h"


VL_ATTR_COLD void Vysyx_24120011_top___024root__trace_init_sub__TOP__0(Vysyx_24120011_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24120011_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120011_top___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+39,"clk", false,-1);
    tracep->declBit(c+40,"rst", false,-1);
    tracep->declBus(c+41,"inst", false,-1, 31,0);
    tracep->declBus(c+42,"pc", false,-1, 31,0);
    tracep->pushNamePrefix("ysyx_24120011_top ");
    tracep->declBit(c+39,"clk", false,-1);
    tracep->declBit(c+40,"rst", false,-1);
    tracep->declBus(c+41,"inst", false,-1, 31,0);
    tracep->declBus(c+42,"pc", false,-1, 31,0);
    tracep->declBus(c+43,"dnpc", false,-1, 31,0);
    tracep->declBus(c+44,"rs1", false,-1, 4,0);
    tracep->declBus(c+45,"rs2", false,-1, 4,0);
    tracep->declBus(c+46,"rd", false,-1, 4,0);
    tracep->declBus(c+47,"func3", false,-1, 2,0);
    tracep->declBus(c+48,"func7", false,-1, 6,0);
    tracep->declBus(c+1,"imme", false,-1, 31,0);
    tracep->declBus(c+49,"wdata", false,-1, 31,0);
    tracep->declBus(c+50,"src1", false,-1, 31,0);
    tracep->declBus(c+51,"src2", false,-1, 31,0);
    tracep->declBus(c+52,"pc_add_imme_out", false,-1, 31,0);
    tracep->declBus(c+53,"pc_add_4_out", false,-1, 31,0);
    tracep->declBus(c+54,"ALUB", false,-1, 31,0);
    tracep->declBus(c+55,"alu_result", false,-1, 31,0);
    tracep->declBus(c+2,"pc_ctrl", false,-1, 1,0);
    tracep->declBus(c+3,"rd_ctrl", false,-1, 2,0);
    tracep->declBit(c+4,"ALUBctrl", false,-1);
    tracep->declBus(c+6,"a0", false,-1, 31,0);
    tracep->pushNamePrefix("i_ALU ");
    tracep->declBus(c+50,"A", false,-1, 31,0);
    tracep->declBus(c+54,"B", false,-1, 31,0);
    tracep->declBit(c+57,"sub_or_add", false,-1);
    tracep->declBus(c+55,"ALUout", false,-1, 31,0);
    tracep->pushNamePrefix("i_Adder ");
    tracep->declBus(c+50,"x", false,-1, 31,0);
    tracep->declBus(c+54,"y", false,-1, 31,0);
    tracep->declBus(c+55,"s", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i_ALUCtrl ");
    tracep->declBit(c+4,"ALUBctrl", false,-1);
    tracep->declBus(c+51,"src2", false,-1, 31,0);
    tracep->declBus(c+1,"imme", false,-1, 31,0);
    tracep->declBus(c+54,"ALUB", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_IDU ");
    tracep->declBus(c+41,"inst", false,-1, 31,0);
    tracep->declBus(c+46,"rd", false,-1, 4,0);
    tracep->declBus(c+44,"rs1", false,-1, 4,0);
    tracep->declBus(c+45,"rs2", false,-1, 4,0);
    tracep->declBus(c+1,"imme", false,-1, 31,0);
    tracep->declBus(c+47,"func3", false,-1, 2,0);
    tracep->declBus(c+48,"func7", false,-1, 6,0);
    tracep->declBus(c+2,"pc_ctrl", false,-1, 1,0);
    tracep->declBus(c+3,"rd_ctrl", false,-1, 2,0);
    tracep->declBit(c+4,"ALUBctrl", false,-1);
    tracep->declBus(c+56,"opcode", false,-1, 6,0);
    tracep->declBus(c+5,"opcode_type", false,-1, 2,0);
    tracep->pushNamePrefix("i_ImmeGen ");
    tracep->declBus(c+41,"inst", false,-1, 31,0);
    tracep->declBus(c+5,"opcode_type", false,-1, 2,0);
    tracep->declBus(c+1,"imme", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_TypeFinder ");
    tracep->declBus(c+56,"opcode", false,-1, 6,0);
    tracep->declBus(c+5,"opcode_type", false,-1, 2,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i_PCProcessor ");
    tracep->declBus(c+42,"pc", false,-1, 31,0);
    tracep->declBus(c+1,"imme", false,-1, 31,0);
    tracep->declBus(c+55,"alu_result", false,-1, 31,0);
    tracep->declBus(c+2,"pc_ctrl", false,-1, 1,0);
    tracep->declBus(c+52,"pc_add_imme_out", false,-1, 31,0);
    tracep->declBus(c+53,"pc_add_4_out", false,-1, 31,0);
    tracep->declBus(c+43,"dnpc", false,-1, 31,0);
    tracep->declBus(c+53,"pc_add_4", false,-1, 31,0);
    tracep->declBus(c+52,"pc_add_imme", false,-1, 31,0);
    tracep->pushNamePrefix("i0_Adder ");
    tracep->declBus(c+42,"x", false,-1, 31,0);
    tracep->declBus(c+58,"y", false,-1, 31,0);
    tracep->declBus(c+53,"s", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i1_Adder ");
    tracep->declBus(c+42,"x", false,-1, 31,0);
    tracep->declBus(c+1,"y", false,-1, 31,0);
    tracep->declBus(c+52,"s", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i_RdProcessor ");
    tracep->declBus(c+52,"pc_add_imme_out", false,-1, 31,0);
    tracep->declBus(c+53,"pc_add_4_out", false,-1, 31,0);
    tracep->declBus(c+55,"alu_result", false,-1, 31,0);
    tracep->declBus(c+1,"imme", false,-1, 31,0);
    tracep->declBus(c+3,"rd_ctrl", false,-1, 2,0);
    tracep->declBus(c+49,"wdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_RegStack ");
    tracep->declBit(c+39,"clk", false,-1);
    tracep->declBit(c+40,"rst", false,-1);
    tracep->declBus(c+49,"wdata", false,-1, 31,0);
    tracep->declBus(c+46,"rd", false,-1, 4,0);
    tracep->declBus(c+44,"rs1", false,-1, 4,0);
    tracep->declBus(c+45,"rs2", false,-1, 4,0);
    tracep->declBus(c+50,"src1", false,-1, 31,0);
    tracep->declBus(c+51,"src2", false,-1, 31,0);
    tracep->declBus(c+6,"a0", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+7+i*1,"Regs", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_pc ");
    tracep->declBus(c+59,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+60,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+39,"clk", false,-1);
    tracep->declBit(c+40,"rst", false,-1);
    tracep->declBus(c+43,"din", false,-1, 31,0);
    tracep->declBus(c+42,"dout", false,-1, 31,0);
    tracep->declBit(c+61,"wen", false,-1);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vysyx_24120011_top___024root__trace_init_top(Vysyx_24120011_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24120011_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120011_top___024root__trace_init_top\n"); );
    // Body
    Vysyx_24120011_top___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vysyx_24120011_top___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vysyx_24120011_top___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vysyx_24120011_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vysyx_24120011_top___024root__trace_register(Vysyx_24120011_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24120011_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120011_top___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vysyx_24120011_top___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vysyx_24120011_top___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vysyx_24120011_top___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vysyx_24120011_top___024root__trace_full_sub_0(Vysyx_24120011_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vysyx_24120011_top___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120011_top___024root__trace_full_top_0\n"); );
    // Init
    Vysyx_24120011_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_24120011_top___024root*>(voidSelf);
    Vysyx_24120011_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vysyx_24120011_top___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vysyx_24120011_top___024root__trace_full_sub_0(Vysyx_24120011_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24120011_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120011_top___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->ysyx_24120011_top__DOT__imme),32);
    bufp->fullCData(oldp+2,(vlSelf->ysyx_24120011_top__DOT__pc_ctrl),2);
    bufp->fullCData(oldp+3,(vlSelf->ysyx_24120011_top__DOT__rd_ctrl),3);
    bufp->fullBit(oldp+4,((1U & ((0U != (IData)(vlSelf->ysyx_24120011_top__DOT__i_IDU__DOT__opcode_type)) 
                                 | (~ (IData)(vlSelf->ysyx_24120011_top__DOT__i_IDU__DOT____VdfgExtracted_h236fc9a3__0))))));
    bufp->fullCData(oldp+5,(vlSelf->ysyx_24120011_top__DOT__i_IDU__DOT__opcode_type),3);
    bufp->fullIData(oldp+6,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs
                            [0xaU]),32);
    bufp->fullIData(oldp+7,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[0]),32);
    bufp->fullIData(oldp+8,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[1]),32);
    bufp->fullIData(oldp+9,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[2]),32);
    bufp->fullIData(oldp+10,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[3]),32);
    bufp->fullIData(oldp+11,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[4]),32);
    bufp->fullIData(oldp+12,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[5]),32);
    bufp->fullIData(oldp+13,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[6]),32);
    bufp->fullIData(oldp+14,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[7]),32);
    bufp->fullIData(oldp+15,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[8]),32);
    bufp->fullIData(oldp+16,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[9]),32);
    bufp->fullIData(oldp+17,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[10]),32);
    bufp->fullIData(oldp+18,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[11]),32);
    bufp->fullIData(oldp+19,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[12]),32);
    bufp->fullIData(oldp+20,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[13]),32);
    bufp->fullIData(oldp+21,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[14]),32);
    bufp->fullIData(oldp+22,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[15]),32);
    bufp->fullIData(oldp+23,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[16]),32);
    bufp->fullIData(oldp+24,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[17]),32);
    bufp->fullIData(oldp+25,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[18]),32);
    bufp->fullIData(oldp+26,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[19]),32);
    bufp->fullIData(oldp+27,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[20]),32);
    bufp->fullIData(oldp+28,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[21]),32);
    bufp->fullIData(oldp+29,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[22]),32);
    bufp->fullIData(oldp+30,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[23]),32);
    bufp->fullIData(oldp+31,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[24]),32);
    bufp->fullIData(oldp+32,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[25]),32);
    bufp->fullIData(oldp+33,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[26]),32);
    bufp->fullIData(oldp+34,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[27]),32);
    bufp->fullIData(oldp+35,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[28]),32);
    bufp->fullIData(oldp+36,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[29]),32);
    bufp->fullIData(oldp+37,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[30]),32);
    bufp->fullIData(oldp+38,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[31]),32);
    bufp->fullBit(oldp+39,(vlSelf->clk));
    bufp->fullBit(oldp+40,(vlSelf->rst));
    bufp->fullIData(oldp+41,(vlSelf->inst),32);
    bufp->fullIData(oldp+42,(vlSelf->pc),32);
    bufp->fullIData(oldp+43,(((0U == (IData)(vlSelf->ysyx_24120011_top__DOT__pc_ctrl))
                               ? ((IData)(4U) + vlSelf->pc)
                               : ((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__pc_ctrl))
                                   ? vlSelf->ysyx_24120011_top__DOT__pc_add_imme_out
                                   : ((2U == (IData)(vlSelf->ysyx_24120011_top__DOT__pc_ctrl))
                                       ? vlSelf->ysyx_24120011_top__DOT__alu_result
                                       : 0x80000000U)))),32);
    bufp->fullCData(oldp+44,((0x1fU & (vlSelf->inst 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+45,((0x1fU & (vlSelf->inst 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+46,((0x1fU & (vlSelf->inst 
                                       >> 7U))),5);
    bufp->fullCData(oldp+47,((7U & (vlSelf->inst >> 0xcU))),3);
    bufp->fullCData(oldp+48,((vlSelf->inst >> 0x19U)),7);
    bufp->fullIData(oldp+49,(((4U & (IData)(vlSelf->ysyx_24120011_top__DOT__rd_ctrl))
                               ? 0U : ((2U & (IData)(vlSelf->ysyx_24120011_top__DOT__rd_ctrl))
                                        ? ((1U & (IData)(vlSelf->ysyx_24120011_top__DOT__rd_ctrl))
                                            ? vlSelf->ysyx_24120011_top__DOT__imme
                                            : vlSelf->ysyx_24120011_top__DOT__alu_result)
                                        : ((1U & (IData)(vlSelf->ysyx_24120011_top__DOT__rd_ctrl))
                                            ? vlSelf->ysyx_24120011_top__DOT__pc_add_imme_out
                                            : ((IData)(4U) 
                                               + vlSelf->pc))))),32);
    bufp->fullIData(oldp+50,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs
                             [(0x1fU & (vlSelf->inst 
                                        >> 0xfU))]),32);
    bufp->fullIData(oldp+51,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs
                             [(0x1fU & (vlSelf->inst 
                                        >> 0x14U))]),32);
    bufp->fullIData(oldp+52,(vlSelf->ysyx_24120011_top__DOT__pc_add_imme_out),32);
    bufp->fullIData(oldp+53,(((IData)(4U) + vlSelf->pc)),32);
    bufp->fullIData(oldp+54,(((1U & ((0U != (IData)(vlSelf->ysyx_24120011_top__DOT__i_IDU__DOT__opcode_type)) 
                                     | (~ (IData)(vlSelf->ysyx_24120011_top__DOT__i_IDU__DOT____VdfgExtracted_h236fc9a3__0))))
                               ? vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs
                              [(0x1fU & (vlSelf->inst 
                                         >> 0x14U))]
                               : vlSelf->ysyx_24120011_top__DOT__imme)),32);
    bufp->fullIData(oldp+55,(vlSelf->ysyx_24120011_top__DOT__alu_result),32);
    bufp->fullCData(oldp+56,((0x7fU & vlSelf->inst)),7);
    bufp->fullBit(oldp+57,(0U));
    bufp->fullIData(oldp+58,(4U),32);
    bufp->fullIData(oldp+59,(0x20U),32);
    bufp->fullIData(oldp+60,(0x80000000U),32);
    bufp->fullBit(oldp+61,(1U));
}
