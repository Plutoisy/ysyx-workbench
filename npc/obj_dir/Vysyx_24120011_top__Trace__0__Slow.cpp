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
    tracep->declBit(c+93,"clk", false,-1);
    tracep->declBit(c+94,"rst", false,-1);
    tracep->declBus(c+95,"inst", false,-1, 31,0);
    tracep->declBus(c+96,"pc", false,-1, 31,0);
    tracep->pushNamePrefix("ysyx_24120011_top ");
    tracep->declBit(c+93,"clk", false,-1);
    tracep->declBit(c+94,"rst", false,-1);
    tracep->declBus(c+95,"inst", false,-1, 31,0);
    tracep->declBus(c+96,"pc", false,-1, 31,0);
    tracep->declBus(c+97,"dnpc", false,-1, 31,0);
    tracep->declBus(c+98,"rs1", false,-1, 4,0);
    tracep->declBus(c+99,"rs2", false,-1, 4,0);
    tracep->declBus(c+100,"rd", false,-1, 4,0);
    tracep->declBus(c+101,"func3", false,-1, 2,0);
    tracep->declBus(c+102,"func7", false,-1, 6,0);
    tracep->declBus(c+1,"imme", false,-1, 31,0);
    tracep->declBus(c+103,"wdata", false,-1, 31,0);
    tracep->declBus(c+108,"rdata", false,-1, 31,0);
    tracep->declBus(c+26,"r_mem_data", false,-1, 31,0);
    tracep->declBus(c+12,"src1", false,-1, 31,0);
    tracep->declBus(c+13,"src2", false,-1, 31,0);
    tracep->declBus(c+14,"pc_add_imme_out", false,-1, 31,0);
    tracep->declBus(c+104,"pc_add_4_out", false,-1, 31,0);
    tracep->declBus(c+15,"ALUB", false,-1, 31,0);
    tracep->declBus(c+16,"alu_result", false,-1, 31,0);
    tracep->declBus(c+2,"pc_ctrl", false,-1, 1,0);
    tracep->declBus(c+3,"rd_ctrl", false,-1, 3,0);
    tracep->declBit(c+4,"ALUBctrl", false,-1);
    tracep->declBit(c+5,"w_en", false,-1);
    tracep->declBit(c+6,"w_mem_en", false,-1);
    tracep->declBit(c+7,"r_mem_en", false,-1);
    tracep->declBit(c+8,"sign_extension", false,-1);
    tracep->declBit(c+105,"b_type_enter_if", false,-1);
    tracep->declBus(c+106,"w_mem_len", false,-1, 7,0);
    tracep->declBus(c+9,"r_mem_len", false,-1, 7,0);
    tracep->declBus(c+10,"ALU_ctrl", false,-1, 3,0);
    tracep->declBus(c+27,"a0", false,-1, 31,0);
    tracep->pushNamePrefix("i_ALU ");
    tracep->declBus(c+12,"A", false,-1, 31,0);
    tracep->declBus(c+15,"B", false,-1, 31,0);
    tracep->declBus(c+10,"ALU_ctrl", false,-1, 3,0);
    tracep->declBus(c+16,"ALUout", false,-1, 31,0);
    tracep->declBus(c+17,"B_in", false,-1, 31,0);
    tracep->declBus(c+18,"B_in_used_for_overflow", false,-1, 31,0);
    tracep->declBus(c+19,"ALUout_tmp", false,-1, 31,0);
    tracep->declBit(c+20,"carry", false,-1);
    tracep->declBit(c+21,"overflow", false,-1);
    tracep->declBit(c+22,"uless", false,-1);
    tracep->declBit(c+23,"sless", false,-1);
    tracep->declBit(c+24,"a_is_b", false,-1);
    tracep->declBit(c+25,"a_not_b", false,-1);
    tracep->pushNamePrefix("i_Adder ");
    tracep->declBus(c+12,"x", false,-1, 31,0);
    tracep->declBus(c+17,"y", false,-1, 31,0);
    tracep->declBus(c+19,"s", false,-1, 31,0);
    tracep->declBit(c+20,"c", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i_ALUCtrl ");
    tracep->declBit(c+4,"ALUBctrl", false,-1);
    tracep->declBus(c+13,"src2", false,-1, 31,0);
    tracep->declBus(c+1,"imme", false,-1, 31,0);
    tracep->declBus(c+15,"ALUB", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_IDU ");
    tracep->declBus(c+95,"inst", false,-1, 31,0);
    tracep->declBus(c+100,"rd", false,-1, 4,0);
    tracep->declBus(c+98,"rs1", false,-1, 4,0);
    tracep->declBus(c+99,"rs2", false,-1, 4,0);
    tracep->declBus(c+1,"imme", false,-1, 31,0);
    tracep->declBus(c+101,"func3", false,-1, 2,0);
    tracep->declBus(c+102,"func7", false,-1, 6,0);
    tracep->declBus(c+2,"pc_ctrl", false,-1, 1,0);
    tracep->declBus(c+3,"rd_ctrl", false,-1, 3,0);
    tracep->declBit(c+4,"ALUBctrl", false,-1);
    tracep->declBit(c+6,"w_mem_en", false,-1);
    tracep->declBus(c+106,"w_mem_len", false,-1, 7,0);
    tracep->declBit(c+7,"r_mem_en", false,-1);
    tracep->declBit(c+8,"sign_extension", false,-1);
    tracep->declBus(c+10,"ALU_ctrl", false,-1, 3,0);
    tracep->declBus(c+9,"r_mem_len", false,-1, 7,0);
    tracep->declBus(c+107,"opcode", false,-1, 6,0);
    tracep->declBus(c+11,"opcode_type", false,-1, 2,0);
    tracep->pushNamePrefix("i_ImmeGen ");
    tracep->declBus(c+95,"inst", false,-1, 31,0);
    tracep->declBus(c+11,"opcode_type", false,-1, 2,0);
    tracep->declBus(c+1,"imme", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_TypeFinder ");
    tracep->declBus(c+107,"opcode", false,-1, 6,0);
    tracep->declBus(c+11,"opcode_type", false,-1, 2,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i_MemProcessor ");
    tracep->declBit(c+93,"clk", false,-1);
    tracep->declBus(c+16,"w_mem_addr", false,-1, 31,0);
    tracep->declBus(c+16,"r_mem_addr", false,-1, 31,0);
    tracep->declBus(c+106,"w_mem_len", false,-1, 7,0);
    tracep->declBus(c+9,"r_mem_len", false,-1, 7,0);
    tracep->declBit(c+6,"w_mem_en", false,-1);
    tracep->declBit(c+7,"r_mem_en", false,-1);
    tracep->declBit(c+8,"sign_extension", false,-1);
    tracep->declBus(c+13,"w_mem_data", false,-1, 31,0);
    tracep->declBus(c+26,"r_mem_data", false,-1, 31,0);
    tracep->declBus(c+28,"r_mem_data_tmp", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_PCProcessor ");
    tracep->declBus(c+96,"pc", false,-1, 31,0);
    tracep->declBus(c+1,"imme", false,-1, 31,0);
    tracep->declBus(c+16,"alu_result", false,-1, 31,0);
    tracep->declBus(c+2,"pc_ctrl", false,-1, 1,0);
    tracep->declBit(c+105,"b_type_enter_if", false,-1);
    tracep->declBus(c+14,"pc_add_imme_out", false,-1, 31,0);
    tracep->declBus(c+104,"pc_add_4_out", false,-1, 31,0);
    tracep->declBus(c+97,"dnpc", false,-1, 31,0);
    tracep->declBus(c+104,"pc_add_4", false,-1, 31,0);
    tracep->declBus(c+14,"pc_add_imme", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_RdProcessor ");
    tracep->declBus(c+14,"pc_add_imme_out", false,-1, 31,0);
    tracep->declBus(c+104,"pc_add_4_out", false,-1, 31,0);
    tracep->declBus(c+16,"alu_result", false,-1, 31,0);
    tracep->declBus(c+1,"imme", false,-1, 31,0);
    tracep->declBus(c+26,"r_mem_data", false,-1, 31,0);
    tracep->declBus(c+3,"rd_ctrl", false,-1, 3,0);
    tracep->declBit(c+5,"w_en", false,-1);
    tracep->declBus(c+103,"wdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_RegStack ");
    tracep->declBit(c+93,"clk", false,-1);
    tracep->declBit(c+94,"rst", false,-1);
    tracep->declBit(c+5,"w_en", false,-1);
    tracep->declBus(c+103,"wdata", false,-1, 31,0);
    tracep->declBus(c+100,"rd", false,-1, 4,0);
    tracep->declBus(c+98,"rs1", false,-1, 4,0);
    tracep->declBus(c+99,"rs2", false,-1, 4,0);
    tracep->declBus(c+12,"src1", false,-1, 31,0);
    tracep->declBus(c+13,"src2", false,-1, 31,0);
    tracep->declBus(c+27,"a0", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+29+i*1,"Regs", true,(i+0), 31,0);
    }
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+61+i*1,"regout", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_pc ");
    tracep->declBus(c+109,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+110,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+93,"clk", false,-1);
    tracep->declBit(c+94,"rst", false,-1);
    tracep->declBus(c+97,"din", false,-1, 31,0);
    tracep->declBus(c+96,"dout", false,-1, 31,0);
    tracep->declBit(c+111,"wen", false,-1);
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
    bufp->fullBit(oldp+4,(vlSelf->ysyx_24120011_top__DOT__ALUBctrl));
    bufp->fullBit(oldp+5,((4U != (IData)(vlSelf->ysyx_24120011_top__DOT__rd_ctrl))));
    bufp->fullBit(oldp+6,(vlSelf->ysyx_24120011_top__DOT__w_mem_en));
    bufp->fullBit(oldp+7,(vlSelf->ysyx_24120011_top__DOT__r_mem_en));
    bufp->fullBit(oldp+8,(vlSelf->ysyx_24120011_top__DOT__sign_extension));
    bufp->fullCData(oldp+9,(vlSelf->ysyx_24120011_top__DOT__r_mem_len),8);
    bufp->fullCData(oldp+10,(vlSelf->ysyx_24120011_top__DOT__ALU_ctrl),4);
    bufp->fullCData(oldp+11,(vlSelf->ysyx_24120011_top__DOT__i_IDU__DOT__opcode_type),3);
    bufp->fullIData(oldp+12,(vlSelf->ysyx_24120011_top__DOT__src1),32);
    bufp->fullIData(oldp+13,(vlSelf->ysyx_24120011_top__DOT__src2),32);
    bufp->fullIData(oldp+14,(vlSelf->ysyx_24120011_top__DOT__pc_add_imme_out),32);
    bufp->fullIData(oldp+15,(vlSelf->ysyx_24120011_top__DOT__ALUB),32);
    bufp->fullIData(oldp+16,(vlSelf->ysyx_24120011_top__DOT__alu_result),32);
    bufp->fullIData(oldp+17,(vlSelf->ysyx_24120011_top__DOT__i_ALU__DOT__B_in),32);
    bufp->fullIData(oldp+18,(((1U & (IData)(vlSelf->ysyx_24120011_top__DOT__ALU_ctrl))
                               ? vlSelf->ysyx_24120011_top__DOT__i_ALU__DOT____VdfgTmp_h6c4bfc22__0
                               : vlSelf->ysyx_24120011_top__DOT__ALUB)),32);
    bufp->fullIData(oldp+19,(vlSelf->ysyx_24120011_top__DOT__i_ALU__DOT__ALUout_tmp),32);
    bufp->fullBit(oldp+20,(vlSelf->ysyx_24120011_top__DOT__i_ALU__DOT__carry));
    bufp->fullBit(oldp+21,((((vlSelf->ysyx_24120011_top__DOT__src1 
                              >> 0x1fU) == (((1U & (IData)(vlSelf->ysyx_24120011_top__DOT__ALU_ctrl))
                                              ? vlSelf->ysyx_24120011_top__DOT__i_ALU__DOT____VdfgTmp_h6c4bfc22__0
                                              : vlSelf->ysyx_24120011_top__DOT__ALUB) 
                                            >> 0x1fU)) 
                            & ((vlSelf->ysyx_24120011_top__DOT__src1 
                                >> 0x1fU) != (vlSelf->ysyx_24120011_top__DOT__i_ALU__DOT__ALUout_tmp 
                                              >> 0x1fU)))));
    bufp->fullBit(oldp+22,((1U & (~ (IData)(vlSelf->ysyx_24120011_top__DOT__i_ALU__DOT__carry)))));
    bufp->fullBit(oldp+23,(vlSelf->ysyx_24120011_top__DOT__i_ALU__DOT__sless));
    bufp->fullBit(oldp+24,((vlSelf->ysyx_24120011_top__DOT__src1 
                            == vlSelf->ysyx_24120011_top__DOT__ALUB)));
    bufp->fullBit(oldp+25,((vlSelf->ysyx_24120011_top__DOT__src1 
                            != vlSelf->ysyx_24120011_top__DOT__ALUB)));
    bufp->fullIData(oldp+26,(vlSelf->ysyx_24120011_top__DOT__r_mem_data),32);
    bufp->fullIData(oldp+27,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs
                             [0xaU]),32);
    bufp->fullIData(oldp+28,(vlSelf->ysyx_24120011_top__DOT__i_MemProcessor__DOT__r_mem_data_tmp),32);
    bufp->fullIData(oldp+29,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[0]),32);
    bufp->fullIData(oldp+30,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[1]),32);
    bufp->fullIData(oldp+31,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[2]),32);
    bufp->fullIData(oldp+32,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[3]),32);
    bufp->fullIData(oldp+33,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[4]),32);
    bufp->fullIData(oldp+34,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[5]),32);
    bufp->fullIData(oldp+35,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[6]),32);
    bufp->fullIData(oldp+36,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[7]),32);
    bufp->fullIData(oldp+37,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[8]),32);
    bufp->fullIData(oldp+38,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[9]),32);
    bufp->fullIData(oldp+39,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[10]),32);
    bufp->fullIData(oldp+40,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[11]),32);
    bufp->fullIData(oldp+41,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[12]),32);
    bufp->fullIData(oldp+42,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[13]),32);
    bufp->fullIData(oldp+43,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[14]),32);
    bufp->fullIData(oldp+44,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[15]),32);
    bufp->fullIData(oldp+45,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[16]),32);
    bufp->fullIData(oldp+46,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[17]),32);
    bufp->fullIData(oldp+47,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[18]),32);
    bufp->fullIData(oldp+48,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[19]),32);
    bufp->fullIData(oldp+49,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[20]),32);
    bufp->fullIData(oldp+50,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[21]),32);
    bufp->fullIData(oldp+51,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[22]),32);
    bufp->fullIData(oldp+52,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[23]),32);
    bufp->fullIData(oldp+53,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[24]),32);
    bufp->fullIData(oldp+54,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[25]),32);
    bufp->fullIData(oldp+55,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[26]),32);
    bufp->fullIData(oldp+56,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[27]),32);
    bufp->fullIData(oldp+57,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[28]),32);
    bufp->fullIData(oldp+58,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[29]),32);
    bufp->fullIData(oldp+59,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[30]),32);
    bufp->fullIData(oldp+60,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[31]),32);
    bufp->fullIData(oldp+61,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[0]),32);
    bufp->fullIData(oldp+62,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[1]),32);
    bufp->fullIData(oldp+63,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[2]),32);
    bufp->fullIData(oldp+64,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[3]),32);
    bufp->fullIData(oldp+65,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[4]),32);
    bufp->fullIData(oldp+66,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[5]),32);
    bufp->fullIData(oldp+67,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[6]),32);
    bufp->fullIData(oldp+68,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[7]),32);
    bufp->fullIData(oldp+69,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[8]),32);
    bufp->fullIData(oldp+70,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[9]),32);
    bufp->fullIData(oldp+71,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[10]),32);
    bufp->fullIData(oldp+72,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[11]),32);
    bufp->fullIData(oldp+73,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[12]),32);
    bufp->fullIData(oldp+74,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[13]),32);
    bufp->fullIData(oldp+75,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[14]),32);
    bufp->fullIData(oldp+76,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[15]),32);
    bufp->fullIData(oldp+77,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[16]),32);
    bufp->fullIData(oldp+78,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[17]),32);
    bufp->fullIData(oldp+79,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[18]),32);
    bufp->fullIData(oldp+80,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[19]),32);
    bufp->fullIData(oldp+81,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[20]),32);
    bufp->fullIData(oldp+82,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[21]),32);
    bufp->fullIData(oldp+83,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[22]),32);
    bufp->fullIData(oldp+84,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[23]),32);
    bufp->fullIData(oldp+85,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[24]),32);
    bufp->fullIData(oldp+86,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[25]),32);
    bufp->fullIData(oldp+87,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[26]),32);
    bufp->fullIData(oldp+88,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[27]),32);
    bufp->fullIData(oldp+89,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[28]),32);
    bufp->fullIData(oldp+90,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[29]),32);
    bufp->fullIData(oldp+91,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[30]),32);
    bufp->fullIData(oldp+92,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[31]),32);
    bufp->fullBit(oldp+93,(vlSelf->clk));
    bufp->fullBit(oldp+94,(vlSelf->rst));
    bufp->fullIData(oldp+95,(vlSelf->inst),32);
    bufp->fullIData(oldp+96,(vlSelf->pc),32);
    bufp->fullIData(oldp+97,(((0U == (IData)(vlSelf->ysyx_24120011_top__DOT__pc_ctrl))
                               ? (((0x63U == (0x7fU 
                                              & vlSelf->inst)) 
                                   & vlSelf->ysyx_24120011_top__DOT__alu_result)
                                   ? vlSelf->ysyx_24120011_top__DOT__pc_add_imme_out
                                   : ((IData)(4U) + vlSelf->pc))
                               : ((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__pc_ctrl))
                                   ? vlSelf->ysyx_24120011_top__DOT__pc_add_imme_out
                                   : ((2U == (IData)(vlSelf->ysyx_24120011_top__DOT__pc_ctrl))
                                       ? vlSelf->ysyx_24120011_top__DOT__alu_result
                                       : 0x80000000U)))),32);
    bufp->fullCData(oldp+98,((0x1fU & (vlSelf->inst 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+99,((0x1fU & (vlSelf->inst 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+100,((0x1fU & (vlSelf->inst 
                                        >> 7U))),5);
    bufp->fullCData(oldp+101,((7U & (vlSelf->inst >> 0xcU))),3);
    bufp->fullCData(oldp+102,((vlSelf->inst >> 0x19U)),7);
    bufp->fullIData(oldp+103,(((8U & (IData)(vlSelf->ysyx_24120011_top__DOT__rd_ctrl))
                                ? 0U : ((4U & (IData)(vlSelf->ysyx_24120011_top__DOT__rd_ctrl))
                                         ? ((2U & (IData)(vlSelf->ysyx_24120011_top__DOT__rd_ctrl))
                                             ? 0U : 
                                            ((1U & (IData)(vlSelf->ysyx_24120011_top__DOT__rd_ctrl))
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
                                                 + vlSelf->pc)))))),32);
    bufp->fullIData(oldp+104,(((IData)(4U) + vlSelf->pc)),32);
    bufp->fullBit(oldp+105,(((0x63U == (0x7fU & vlSelf->inst)) 
                             & vlSelf->ysyx_24120011_top__DOT__alu_result)));
    bufp->fullCData(oldp+106,(((3U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_IDU__DOT__opcode_type))
                                ? ((0U == (7U & (vlSelf->inst 
                                                 >> 0xcU)))
                                    ? 1U : ((1U == 
                                             (7U & 
                                              (vlSelf->inst 
                                               >> 0xcU)))
                                             ? 2U : 
                                            ((2U == 
                                              (7U & 
                                               (vlSelf->inst 
                                                >> 0xcU)))
                                              ? 4U : 1U)))
                                : 1U)),8);
    bufp->fullCData(oldp+107,((0x7fU & vlSelf->inst)),7);
    bufp->fullIData(oldp+108,(vlSelf->ysyx_24120011_top__DOT__rdata),32);
    bufp->fullIData(oldp+109,(0x20U),32);
    bufp->fullIData(oldp+110,(0x80000000U),32);
    bufp->fullBit(oldp+111,(1U));
}
