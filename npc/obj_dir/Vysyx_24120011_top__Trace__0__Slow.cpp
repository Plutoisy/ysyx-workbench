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
    tracep->declBit(c+73,"clk", false,-1);
    tracep->declBit(c+74,"rst", false,-1);
    tracep->declBus(c+75,"inst", false,-1, 31,0);
    tracep->declBus(c+76,"pc", false,-1, 31,0);
    tracep->pushNamePrefix("ysyx_24120011_top ");
    tracep->declBit(c+73,"clk", false,-1);
    tracep->declBit(c+74,"rst", false,-1);
    tracep->declBus(c+75,"inst", false,-1, 31,0);
    tracep->declBus(c+76,"pc", false,-1, 31,0);
    tracep->declBus(c+77,"dnpc", false,-1, 31,0);
    tracep->declBus(c+78,"rs1", false,-1, 4,0);
    tracep->declBus(c+79,"rs2", false,-1, 4,0);
    tracep->declBus(c+80,"rd", false,-1, 4,0);
    tracep->declBus(c+81,"func3", false,-1, 2,0);
    tracep->declBus(c+82,"func7", false,-1, 6,0);
    tracep->declBus(c+1,"imme", false,-1, 31,0);
    tracep->declBus(c+83,"wdata", false,-1, 31,0);
    tracep->declBus(c+84,"src1", false,-1, 31,0);
    tracep->declBus(c+85,"src2", false,-1, 31,0);
    tracep->declBus(c+86,"pc_add_imme_out", false,-1, 31,0);
    tracep->declBus(c+87,"pc_add_4_out", false,-1, 31,0);
    tracep->declBus(c+88,"ALUB", false,-1, 31,0);
    tracep->declBus(c+89,"alu_result", false,-1, 31,0);
    tracep->declBus(c+2,"pc_ctrl", false,-1, 1,0);
    tracep->declBus(c+3,"rd_ctrl", false,-1, 3,0);
    tracep->declBit(c+4,"ALUBctrl", false,-1);
    tracep->declBit(c+5,"w_en", false,-1);
    tracep->declBit(c+6,"w_mem_en", false,-1);
    tracep->declBus(c+90,"w_mem_len", false,-1, 7,0);
    tracep->declBus(c+8,"a0", false,-1, 31,0);
    tracep->pushNamePrefix("i_ALU ");
    tracep->declBus(c+84,"A", false,-1, 31,0);
    tracep->declBus(c+88,"B", false,-1, 31,0);
    tracep->declBit(c+92,"sub_or_add", false,-1);
    tracep->declBus(c+89,"ALUout", false,-1, 31,0);
    tracep->pushNamePrefix("i_Adder ");
    tracep->declBus(c+84,"x", false,-1, 31,0);
    tracep->declBus(c+88,"y", false,-1, 31,0);
    tracep->declBus(c+89,"s", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i_ALUCtrl ");
    tracep->declBit(c+4,"ALUBctrl", false,-1);
    tracep->declBus(c+85,"src2", false,-1, 31,0);
    tracep->declBus(c+1,"imme", false,-1, 31,0);
    tracep->declBus(c+88,"ALUB", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_IDU ");
    tracep->declBus(c+75,"inst", false,-1, 31,0);
    tracep->declBus(c+80,"rd", false,-1, 4,0);
    tracep->declBus(c+78,"rs1", false,-1, 4,0);
    tracep->declBus(c+79,"rs2", false,-1, 4,0);
    tracep->declBus(c+1,"imme", false,-1, 31,0);
    tracep->declBus(c+81,"func3", false,-1, 2,0);
    tracep->declBus(c+82,"func7", false,-1, 6,0);
    tracep->declBus(c+2,"pc_ctrl", false,-1, 1,0);
    tracep->declBus(c+3,"rd_ctrl", false,-1, 3,0);
    tracep->declBit(c+4,"ALUBctrl", false,-1);
    tracep->declBit(c+6,"w_mem_en", false,-1);
    tracep->declBus(c+90,"w_mem_len", false,-1, 7,0);
    tracep->declBus(c+91,"opcode", false,-1, 6,0);
    tracep->declBus(c+7,"opcode_type", false,-1, 2,0);
    tracep->pushNamePrefix("i_ImmeGen ");
    tracep->declBus(c+75,"inst", false,-1, 31,0);
    tracep->declBus(c+7,"opcode_type", false,-1, 2,0);
    tracep->declBus(c+1,"imme", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_TypeFinder ");
    tracep->declBus(c+91,"opcode", false,-1, 6,0);
    tracep->declBus(c+7,"opcode_type", false,-1, 2,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i_MemProcessor ");
    tracep->declBus(c+89,"waddr", false,-1, 31,0);
    tracep->declBus(c+90,"w_mem_len", false,-1, 7,0);
    tracep->declBit(c+6,"w_mem_en", false,-1);
    tracep->declBus(c+85,"wdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_PCProcessor ");
    tracep->declBus(c+76,"pc", false,-1, 31,0);
    tracep->declBus(c+1,"imme", false,-1, 31,0);
    tracep->declBus(c+89,"alu_result", false,-1, 31,0);
    tracep->declBus(c+2,"pc_ctrl", false,-1, 1,0);
    tracep->declBus(c+86,"pc_add_imme_out", false,-1, 31,0);
    tracep->declBus(c+87,"pc_add_4_out", false,-1, 31,0);
    tracep->declBus(c+77,"dnpc", false,-1, 31,0);
    tracep->declBus(c+87,"pc_add_4", false,-1, 31,0);
    tracep->declBus(c+86,"pc_add_imme", false,-1, 31,0);
    tracep->pushNamePrefix("i0_Adder ");
    tracep->declBus(c+76,"x", false,-1, 31,0);
    tracep->declBus(c+93,"y", false,-1, 31,0);
    tracep->declBus(c+87,"s", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i1_Adder ");
    tracep->declBus(c+76,"x", false,-1, 31,0);
    tracep->declBus(c+1,"y", false,-1, 31,0);
    tracep->declBus(c+86,"s", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i_RdProcessor ");
    tracep->declBus(c+86,"pc_add_imme_out", false,-1, 31,0);
    tracep->declBus(c+87,"pc_add_4_out", false,-1, 31,0);
    tracep->declBus(c+89,"alu_result", false,-1, 31,0);
    tracep->declBus(c+1,"imme", false,-1, 31,0);
    tracep->declBus(c+3,"rd_ctrl", false,-1, 3,0);
    tracep->declBit(c+5,"w_en", false,-1);
    tracep->declBus(c+83,"wdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_RegStack ");
    tracep->declBit(c+73,"clk", false,-1);
    tracep->declBit(c+74,"rst", false,-1);
    tracep->declBit(c+5,"w_en", false,-1);
    tracep->declBus(c+83,"wdata", false,-1, 31,0);
    tracep->declBus(c+80,"rd", false,-1, 4,0);
    tracep->declBus(c+78,"rs1", false,-1, 4,0);
    tracep->declBus(c+79,"rs2", false,-1, 4,0);
    tracep->declBus(c+84,"src1", false,-1, 31,0);
    tracep->declBus(c+85,"src2", false,-1, 31,0);
    tracep->declBus(c+8,"a0", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+9+i*1,"Regs", true,(i+0), 31,0);
    }
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+41+i*1,"regout", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_pc ");
    tracep->declBus(c+94,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+95,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+73,"clk", false,-1);
    tracep->declBit(c+74,"rst", false,-1);
    tracep->declBus(c+77,"din", false,-1, 31,0);
    tracep->declBus(c+76,"dout", false,-1, 31,0);
    tracep->declBit(c+96,"wen", false,-1);
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
    bufp->fullCData(oldp+3,(vlSelf->ysyx_24120011_top__DOT__rd_ctrl),4);
    bufp->fullBit(oldp+4,((1U & ((0U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_IDU__DOT__opcode_type))
                                  ? (~ (IData)(vlSelf->ysyx_24120011_top__DOT__i_IDU__DOT____VdfgExtracted_h236fc9a3__0))
                                  : (3U != (IData)(vlSelf->ysyx_24120011_top__DOT__i_IDU__DOT__opcode_type))))));
    bufp->fullBit(oldp+5,((4U != (IData)(vlSelf->ysyx_24120011_top__DOT__rd_ctrl))));
    bufp->fullBit(oldp+6,(vlSelf->ysyx_24120011_top__DOT__w_mem_en));
    bufp->fullCData(oldp+7,(vlSelf->ysyx_24120011_top__DOT__i_IDU__DOT__opcode_type),3);
    bufp->fullIData(oldp+8,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs
                            [0xaU]),32);
    bufp->fullIData(oldp+9,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[0]),32);
    bufp->fullIData(oldp+10,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[1]),32);
    bufp->fullIData(oldp+11,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[2]),32);
    bufp->fullIData(oldp+12,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[3]),32);
    bufp->fullIData(oldp+13,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[4]),32);
    bufp->fullIData(oldp+14,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[5]),32);
    bufp->fullIData(oldp+15,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[6]),32);
    bufp->fullIData(oldp+16,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[7]),32);
    bufp->fullIData(oldp+17,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[8]),32);
    bufp->fullIData(oldp+18,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[9]),32);
    bufp->fullIData(oldp+19,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[10]),32);
    bufp->fullIData(oldp+20,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[11]),32);
    bufp->fullIData(oldp+21,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[12]),32);
    bufp->fullIData(oldp+22,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[13]),32);
    bufp->fullIData(oldp+23,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[14]),32);
    bufp->fullIData(oldp+24,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[15]),32);
    bufp->fullIData(oldp+25,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[16]),32);
    bufp->fullIData(oldp+26,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[17]),32);
    bufp->fullIData(oldp+27,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[18]),32);
    bufp->fullIData(oldp+28,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[19]),32);
    bufp->fullIData(oldp+29,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[20]),32);
    bufp->fullIData(oldp+30,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[21]),32);
    bufp->fullIData(oldp+31,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[22]),32);
    bufp->fullIData(oldp+32,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[23]),32);
    bufp->fullIData(oldp+33,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[24]),32);
    bufp->fullIData(oldp+34,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[25]),32);
    bufp->fullIData(oldp+35,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[26]),32);
    bufp->fullIData(oldp+36,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[27]),32);
    bufp->fullIData(oldp+37,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[28]),32);
    bufp->fullIData(oldp+38,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[29]),32);
    bufp->fullIData(oldp+39,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[30]),32);
    bufp->fullIData(oldp+40,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[31]),32);
    bufp->fullIData(oldp+41,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[0]),32);
    bufp->fullIData(oldp+42,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[1]),32);
    bufp->fullIData(oldp+43,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[2]),32);
    bufp->fullIData(oldp+44,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[3]),32);
    bufp->fullIData(oldp+45,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[4]),32);
    bufp->fullIData(oldp+46,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[5]),32);
    bufp->fullIData(oldp+47,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[6]),32);
    bufp->fullIData(oldp+48,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[7]),32);
    bufp->fullIData(oldp+49,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[8]),32);
    bufp->fullIData(oldp+50,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[9]),32);
    bufp->fullIData(oldp+51,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[10]),32);
    bufp->fullIData(oldp+52,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[11]),32);
    bufp->fullIData(oldp+53,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[12]),32);
    bufp->fullIData(oldp+54,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[13]),32);
    bufp->fullIData(oldp+55,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[14]),32);
    bufp->fullIData(oldp+56,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[15]),32);
    bufp->fullIData(oldp+57,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[16]),32);
    bufp->fullIData(oldp+58,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[17]),32);
    bufp->fullIData(oldp+59,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[18]),32);
    bufp->fullIData(oldp+60,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[19]),32);
    bufp->fullIData(oldp+61,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[20]),32);
    bufp->fullIData(oldp+62,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[21]),32);
    bufp->fullIData(oldp+63,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[22]),32);
    bufp->fullIData(oldp+64,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[23]),32);
    bufp->fullIData(oldp+65,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[24]),32);
    bufp->fullIData(oldp+66,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[25]),32);
    bufp->fullIData(oldp+67,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[26]),32);
    bufp->fullIData(oldp+68,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[27]),32);
    bufp->fullIData(oldp+69,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[28]),32);
    bufp->fullIData(oldp+70,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[29]),32);
    bufp->fullIData(oldp+71,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[30]),32);
    bufp->fullIData(oldp+72,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[31]),32);
    bufp->fullBit(oldp+73,(vlSelf->clk));
    bufp->fullBit(oldp+74,(vlSelf->rst));
    bufp->fullIData(oldp+75,(vlSelf->inst),32);
    bufp->fullIData(oldp+76,(vlSelf->pc),32);
    bufp->fullIData(oldp+77,(((0U == (IData)(vlSelf->ysyx_24120011_top__DOT__pc_ctrl))
                               ? ((IData)(4U) + vlSelf->pc)
                               : ((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__pc_ctrl))
                                   ? vlSelf->ysyx_24120011_top__DOT__pc_add_imme_out
                                   : ((2U == (IData)(vlSelf->ysyx_24120011_top__DOT__pc_ctrl))
                                       ? vlSelf->ysyx_24120011_top__DOT__alu_result
                                       : 0x80000000U)))),32);
    bufp->fullCData(oldp+78,((0x1fU & (vlSelf->inst 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+79,((0x1fU & (vlSelf->inst 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+80,((0x1fU & (vlSelf->inst 
                                       >> 7U))),5);
    bufp->fullCData(oldp+81,((7U & (vlSelf->inst >> 0xcU))),3);
    bufp->fullCData(oldp+82,((vlSelf->inst >> 0x19U)),7);
    bufp->fullIData(oldp+83,(((8U & (IData)(vlSelf->ysyx_24120011_top__DOT__rd_ctrl))
                               ? 0U : ((4U & (IData)(vlSelf->ysyx_24120011_top__DOT__rd_ctrl))
                                        ? 0U : ((2U 
                                                 & (IData)(vlSelf->ysyx_24120011_top__DOT__rd_ctrl))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelf->ysyx_24120011_top__DOT__rd_ctrl))
                                                  ? vlSelf->ysyx_24120011_top__DOT__imme
                                                  : vlSelf->ysyx_24120011_top__DOT__alu_result)
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelf->ysyx_24120011_top__DOT__rd_ctrl))
                                                  ? vlSelf->ysyx_24120011_top__DOT__pc_add_imme_out
                                                  : 
                                                 ((IData)(4U) 
                                                  + vlSelf->pc)))))),32);
    bufp->fullIData(oldp+84,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs
                             [(0x1fU & (vlSelf->inst 
                                        >> 0xfU))]),32);
    bufp->fullIData(oldp+85,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs
                             [(0x1fU & (vlSelf->inst 
                                        >> 0x14U))]),32);
    bufp->fullIData(oldp+86,(vlSelf->ysyx_24120011_top__DOT__pc_add_imme_out),32);
    bufp->fullIData(oldp+87,(((IData)(4U) + vlSelf->pc)),32);
    bufp->fullIData(oldp+88,(((1U & ((0U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_IDU__DOT__opcode_type))
                                      ? (~ (IData)(vlSelf->ysyx_24120011_top__DOT__i_IDU__DOT____VdfgExtracted_h236fc9a3__0))
                                      : (3U != (IData)(vlSelf->ysyx_24120011_top__DOT__i_IDU__DOT__opcode_type))))
                               ? vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs
                              [(0x1fU & (vlSelf->inst 
                                         >> 0x14U))]
                               : vlSelf->ysyx_24120011_top__DOT__imme)),32);
    bufp->fullIData(oldp+89,(vlSelf->ysyx_24120011_top__DOT__alu_result),32);
    bufp->fullCData(oldp+90,(((3U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_IDU__DOT__opcode_type))
                               ? ((0U == (7U & (vlSelf->inst 
                                                >> 0xcU)))
                                   ? 1U : ((1U == (7U 
                                                   & (vlSelf->inst 
                                                      >> 0xcU)))
                                            ? 2U : 
                                           ((2U == 
                                             (7U & 
                                              (vlSelf->inst 
                                               >> 0xcU)))
                                             ? 4U : 1U)))
                               : 1U)),8);
    bufp->fullCData(oldp+91,((0x7fU & vlSelf->inst)),7);
    bufp->fullBit(oldp+92,(0U));
    bufp->fullIData(oldp+93,(4U),32);
    bufp->fullIData(oldp+94,(0x20U),32);
    bufp->fullIData(oldp+95,(0x80000000U),32);
    bufp->fullBit(oldp+96,(1U));
}
