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
    tracep->declBit(c+114,"clk", false,-1);
    tracep->declBit(c+115,"rst", false,-1);
    tracep->pushNamePrefix("ysyx_24120011_top ");
    tracep->declBit(c+114,"clk", false,-1);
    tracep->declBit(c+115,"rst", false,-1);
    tracep->declBus(c+116,"dnpc", false,-1, 31,0);
    tracep->declBus(c+72,"rs1", false,-1, 4,0);
    tracep->declBus(c+73,"rs2", false,-1, 4,0);
    tracep->declBus(c+74,"rd", false,-1, 4,0);
    tracep->declBus(c+75,"func3", false,-1, 2,0);
    tracep->declBus(c+76,"func7", false,-1, 6,0);
    tracep->declBus(c+77,"imme", false,-1, 31,0);
    tracep->declBus(c+117,"wdata", false,-1, 31,0);
    tracep->declBus(c+123,"rdata", false,-1, 31,0);
    tracep->declBus(c+1,"r_mem_data", false,-1, 31,0);
    tracep->declBus(c+100,"src1", false,-1, 31,0);
    tracep->declBus(c+101,"src2", false,-1, 31,0);
    tracep->declBus(c+102,"pc_add_imme_out", false,-1, 31,0);
    tracep->declBus(c+118,"pc_add_4_out", false,-1, 31,0);
    tracep->declBus(c+103,"ALUB", false,-1, 31,0);
    tracep->declBus(c+104,"alu_result", false,-1, 31,0);
    tracep->declBus(c+78,"pc_ctrl", false,-1, 1,0);
    tracep->declBus(c+79,"rd_ctrl", false,-1, 3,0);
    tracep->declBus(c+80,"ALUBctrl", false,-1, 1,0);
    tracep->declBit(c+81,"w_en", false,-1);
    tracep->declBit(c+82,"w_mem_en", false,-1);
    tracep->declBit(c+83,"r_mem_en", false,-1);
    tracep->declBit(c+84,"sign_extension", false,-1);
    tracep->declBit(c+119,"b_type_enter_if", false,-1);
    tracep->declBus(c+85,"w_mem_len", false,-1, 7,0);
    tracep->declBus(c+86,"r_mem_len", false,-1, 7,0);
    tracep->declBus(c+87,"ALU_ctrl", false,-1, 3,0);
    tracep->declBus(c+88,"w_csr_data_ctrl", false,-1, 3,0);
    tracep->declBus(c+2,"a0", false,-1, 31,0);
    tracep->declBus(c+89,"w_csr_addr", false,-1, 11,0);
    tracep->declBus(c+90,"r_csr_addr", false,-1, 11,0);
    tracep->declBit(c+91,"w_csr_en", false,-1);
    tracep->declBit(c+92,"r_csr_en", false,-1);
    tracep->declBit(c+93,"w_csr_ecall", false,-1);
    tracep->declBus(c+105,"w_csr_data", false,-1, 31,0);
    tracep->declBus(c+106,"r_csr_data", false,-1, 31,0);
    tracep->declBus(c+120,"pc", false,-1, 31,0);
    tracep->declBus(c+94,"inst", false,-1, 31,0);
    tracep->declBit(c+95,"IFU_valid", false,-1);
    tracep->pushNamePrefix("i_ALU ");
    tracep->declBus(c+100,"A", false,-1, 31,0);
    tracep->declBus(c+103,"B", false,-1, 31,0);
    tracep->declBus(c+87,"ALU_ctrl", false,-1, 3,0);
    tracep->declBus(c+104,"ALUout", false,-1, 31,0);
    tracep->declBus(c+107,"B_in", false,-1, 31,0);
    tracep->declBus(c+121,"B_in_used_for_overflow", false,-1, 31,0);
    tracep->declBus(c+108,"ALUout_tmp", false,-1, 31,0);
    tracep->declBit(c+109,"carry", false,-1);
    tracep->declBit(c+122,"overflow", false,-1);
    tracep->declBit(c+110,"uless", false,-1);
    tracep->declBit(c+111,"sless", false,-1);
    tracep->declBit(c+112,"a_is_b", false,-1);
    tracep->declBit(c+113,"a_not_b", false,-1);
    tracep->pushNamePrefix("i_Adder ");
    tracep->declBus(c+100,"x", false,-1, 31,0);
    tracep->declBus(c+107,"y", false,-1, 31,0);
    tracep->declBus(c+108,"s", false,-1, 31,0);
    tracep->declBit(c+109,"c", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i_ALUCtrl ");
    tracep->declBus(c+80,"ALUBctrl", false,-1, 1,0);
    tracep->declBus(c+101,"src2", false,-1, 31,0);
    tracep->declBus(c+77,"imme", false,-1, 31,0);
    tracep->declBus(c+106,"r_csr_data", false,-1, 31,0);
    tracep->declBus(c+103,"ALUB", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_Csr ");
    tracep->declBit(c+114,"clk", false,-1);
    tracep->declBit(c+115,"rst", false,-1);
    tracep->declBus(c+89,"w_csr_addr", false,-1, 11,0);
    tracep->declBus(c+90,"r_csr_addr", false,-1, 11,0);
    tracep->declBit(c+91,"w_csr_en", false,-1);
    tracep->declBit(c+92,"r_csr_en", false,-1);
    tracep->declBit(c+93,"w_csr_ecall", false,-1);
    tracep->declBus(c+120,"pc", false,-1, 31,0);
    tracep->declBus(c+105,"w_csr_data", false,-1, 31,0);
    tracep->declBus(c+106,"r_csr_data", false,-1, 31,0);
    tracep->declBus(c+3,"mepc", false,-1, 31,0);
    tracep->declBus(c+4,"mstatus", false,-1, 31,0);
    tracep->declBus(c+5,"mcause", false,-1, 31,0);
    tracep->declBus(c+6,"mtvec", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_CsrProcessor ");
    tracep->declBus(c+104,"alu_result", false,-1, 31,0);
    tracep->declBus(c+100,"src1", false,-1, 31,0);
    tracep->declBus(c+88,"w_csr_data_ctrl", false,-1, 3,0);
    tracep->declBus(c+105,"w_csr_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_IFU ");
    tracep->declBit(c+114,"clk", false,-1);
    tracep->declBit(c+115,"rst", false,-1);
    tracep->declBus(c+120,"pc", false,-1, 31,0);
    tracep->declBus(c+94,"inst", false,-1, 31,0);
    tracep->declBit(c+95,"IFU_valid", false,-1);
    tracep->pushNamePrefix("i_SRAM ");
    tracep->declBit(c+114,"clk", false,-1);
    tracep->declBit(c+115,"rst", false,-1);
    tracep->declBus(c+120,"sram_rd_addr", false,-1, 31,0);
    tracep->declBus(c+94,"sram_rd_data_out", false,-1, 31,0);
    tracep->declBit(c+95,"sram_valid", false,-1);
    tracep->declBus(c+96,"data_reg", false,-1, 31,0);
    tracep->declBit(c+97,"read_request", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i_MemProcessor ");
    tracep->declBit(c+114,"clk", false,-1);
    tracep->declBus(c+104,"w_mem_addr", false,-1, 31,0);
    tracep->declBus(c+104,"r_mem_addr", false,-1, 31,0);
    tracep->declBus(c+85,"w_mem_len", false,-1, 7,0);
    tracep->declBus(c+86,"r_mem_len", false,-1, 7,0);
    tracep->declBit(c+82,"w_mem_en", false,-1);
    tracep->declBit(c+83,"r_mem_en", false,-1);
    tracep->declBit(c+84,"sign_extension", false,-1);
    tracep->declBus(c+101,"w_mem_data", false,-1, 31,0);
    tracep->declBus(c+1,"r_mem_data", false,-1, 31,0);
    tracep->declBus(c+7,"r_mem_data_tmp", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_PCProcessor ");
    tracep->declBus(c+120,"pc", false,-1, 31,0);
    tracep->declBus(c+77,"imme", false,-1, 31,0);
    tracep->declBus(c+104,"alu_result", false,-1, 31,0);
    tracep->declBus(c+106,"r_csr_data", false,-1, 31,0);
    tracep->declBus(c+78,"pc_ctrl", false,-1, 1,0);
    tracep->declBit(c+119,"b_type_enter_if", false,-1);
    tracep->declBus(c+102,"pc_add_imme_out", false,-1, 31,0);
    tracep->declBus(c+118,"pc_add_4_out", false,-1, 31,0);
    tracep->declBus(c+116,"dnpc", false,-1, 31,0);
    tracep->declBus(c+118,"pc_add_4", false,-1, 31,0);
    tracep->declBus(c+102,"pc_add_imme", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_RdProcessor ");
    tracep->declBus(c+102,"pc_add_imme_out", false,-1, 31,0);
    tracep->declBus(c+118,"pc_add_4_out", false,-1, 31,0);
    tracep->declBus(c+104,"alu_result", false,-1, 31,0);
    tracep->declBus(c+77,"imme", false,-1, 31,0);
    tracep->declBus(c+1,"r_mem_data", false,-1, 31,0);
    tracep->declBus(c+106,"r_csr_data", false,-1, 31,0);
    tracep->declBus(c+79,"rd_ctrl", false,-1, 3,0);
    tracep->declBit(c+81,"w_en", false,-1);
    tracep->declBus(c+117,"wdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_RegStack ");
    tracep->declBit(c+114,"clk", false,-1);
    tracep->declBit(c+115,"rst", false,-1);
    tracep->declBit(c+81,"w_en", false,-1);
    tracep->declBus(c+117,"wdata", false,-1, 31,0);
    tracep->declBus(c+74,"rd", false,-1, 4,0);
    tracep->declBus(c+72,"rs1", false,-1, 4,0);
    tracep->declBus(c+73,"rs2", false,-1, 4,0);
    tracep->declBus(c+100,"src1", false,-1, 31,0);
    tracep->declBus(c+101,"src2", false,-1, 31,0);
    tracep->declBus(c+2,"a0", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+8+i*1,"Regs", true,(i+0), 31,0);
    }
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+40+i*1,"regout", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_pc ");
    tracep->declBus(c+124,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+125,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+114,"clk", false,-1);
    tracep->declBit(c+115,"rst", false,-1);
    tracep->declBus(c+116,"din", false,-1, 31,0);
    tracep->declBus(c+120,"dout", false,-1, 31,0);
    tracep->declBit(c+126,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_24120011_IDU ");
    tracep->declBus(c+94,"inst", false,-1, 31,0);
    tracep->declBit(c+127,"IFU_valid", false,-1);
    tracep->declBus(c+74,"rd", false,-1, 4,0);
    tracep->declBus(c+72,"rs1", false,-1, 4,0);
    tracep->declBus(c+73,"rs2", false,-1, 4,0);
    tracep->declBus(c+77,"imme", false,-1, 31,0);
    tracep->declBus(c+75,"func3", false,-1, 2,0);
    tracep->declBus(c+76,"func7", false,-1, 6,0);
    tracep->declBus(c+78,"pc_ctrl", false,-1, 1,0);
    tracep->declBus(c+79,"rd_ctrl", false,-1, 3,0);
    tracep->declBus(c+80,"ALUBctrl", false,-1, 1,0);
    tracep->declBit(c+82,"w_mem_en", false,-1);
    tracep->declBus(c+85,"w_mem_len", false,-1, 7,0);
    tracep->declBit(c+83,"r_mem_en", false,-1);
    tracep->declBit(c+84,"sign_extension", false,-1);
    tracep->declBus(c+87,"ALU_ctrl", false,-1, 3,0);
    tracep->declBus(c+86,"r_mem_len", false,-1, 7,0);
    tracep->declBus(c+89,"w_csr_addr", false,-1, 11,0);
    tracep->declBit(c+91,"w_csr_en", false,-1);
    tracep->declBus(c+88,"w_csr_data_ctrl", false,-1, 3,0);
    tracep->declBit(c+93,"w_csr_ecall", false,-1);
    tracep->declBus(c+90,"r_csr_addr", false,-1, 11,0);
    tracep->declBit(c+92,"r_csr_en", false,-1);
    tracep->declBus(c+98,"opcode", false,-1, 6,0);
    tracep->declBus(c+99,"opcode_type", false,-1, 2,0);
    tracep->pushNamePrefix("i_ImmeGen ");
    tracep->declBus(c+94,"inst", false,-1, 31,0);
    tracep->declBus(c+99,"opcode_type", false,-1, 2,0);
    tracep->declBus(c+77,"imme", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_TypeFinder ");
    tracep->declBus(c+98,"opcode", false,-1, 6,0);
    tracep->declBus(c+99,"opcode_type", false,-1, 2,0);
    tracep->popNamePrefix(3);
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
    bufp->fullIData(oldp+1,(vlSelf->ysyx_24120011_top__DOT__r_mem_data),32);
    bufp->fullIData(oldp+2,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs
                            [0xaU]),32);
    bufp->fullIData(oldp+3,(vlSelf->ysyx_24120011_top__DOT__i_Csr__DOT__mepc),32);
    bufp->fullIData(oldp+4,(vlSelf->ysyx_24120011_top__DOT__i_Csr__DOT__mstatus),32);
    bufp->fullIData(oldp+5,(vlSelf->ysyx_24120011_top__DOT__i_Csr__DOT__mcause),32);
    bufp->fullIData(oldp+6,(vlSelf->ysyx_24120011_top__DOT__i_Csr__DOT__mtvec),32);
    bufp->fullIData(oldp+7,(vlSelf->ysyx_24120011_top__DOT__i_MemProcessor__DOT__r_mem_data_tmp),32);
    bufp->fullIData(oldp+8,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[0]),32);
    bufp->fullIData(oldp+9,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[1]),32);
    bufp->fullIData(oldp+10,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[2]),32);
    bufp->fullIData(oldp+11,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[3]),32);
    bufp->fullIData(oldp+12,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[4]),32);
    bufp->fullIData(oldp+13,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[5]),32);
    bufp->fullIData(oldp+14,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[6]),32);
    bufp->fullIData(oldp+15,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[7]),32);
    bufp->fullIData(oldp+16,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[8]),32);
    bufp->fullIData(oldp+17,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[9]),32);
    bufp->fullIData(oldp+18,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[10]),32);
    bufp->fullIData(oldp+19,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[11]),32);
    bufp->fullIData(oldp+20,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[12]),32);
    bufp->fullIData(oldp+21,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[13]),32);
    bufp->fullIData(oldp+22,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[14]),32);
    bufp->fullIData(oldp+23,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[15]),32);
    bufp->fullIData(oldp+24,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[16]),32);
    bufp->fullIData(oldp+25,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[17]),32);
    bufp->fullIData(oldp+26,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[18]),32);
    bufp->fullIData(oldp+27,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[19]),32);
    bufp->fullIData(oldp+28,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[20]),32);
    bufp->fullIData(oldp+29,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[21]),32);
    bufp->fullIData(oldp+30,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[22]),32);
    bufp->fullIData(oldp+31,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[23]),32);
    bufp->fullIData(oldp+32,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[24]),32);
    bufp->fullIData(oldp+33,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[25]),32);
    bufp->fullIData(oldp+34,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[26]),32);
    bufp->fullIData(oldp+35,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[27]),32);
    bufp->fullIData(oldp+36,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[28]),32);
    bufp->fullIData(oldp+37,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[29]),32);
    bufp->fullIData(oldp+38,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[30]),32);
    bufp->fullIData(oldp+39,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[31]),32);
    bufp->fullIData(oldp+40,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[0]),32);
    bufp->fullIData(oldp+41,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[1]),32);
    bufp->fullIData(oldp+42,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[2]),32);
    bufp->fullIData(oldp+43,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[3]),32);
    bufp->fullIData(oldp+44,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[4]),32);
    bufp->fullIData(oldp+45,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[5]),32);
    bufp->fullIData(oldp+46,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[6]),32);
    bufp->fullIData(oldp+47,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[7]),32);
    bufp->fullIData(oldp+48,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[8]),32);
    bufp->fullIData(oldp+49,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[9]),32);
    bufp->fullIData(oldp+50,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[10]),32);
    bufp->fullIData(oldp+51,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[11]),32);
    bufp->fullIData(oldp+52,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[12]),32);
    bufp->fullIData(oldp+53,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[13]),32);
    bufp->fullIData(oldp+54,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[14]),32);
    bufp->fullIData(oldp+55,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[15]),32);
    bufp->fullIData(oldp+56,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[16]),32);
    bufp->fullIData(oldp+57,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[17]),32);
    bufp->fullIData(oldp+58,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[18]),32);
    bufp->fullIData(oldp+59,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[19]),32);
    bufp->fullIData(oldp+60,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[20]),32);
    bufp->fullIData(oldp+61,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[21]),32);
    bufp->fullIData(oldp+62,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[22]),32);
    bufp->fullIData(oldp+63,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[23]),32);
    bufp->fullIData(oldp+64,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[24]),32);
    bufp->fullIData(oldp+65,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[25]),32);
    bufp->fullIData(oldp+66,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[26]),32);
    bufp->fullIData(oldp+67,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[27]),32);
    bufp->fullIData(oldp+68,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[28]),32);
    bufp->fullIData(oldp+69,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[29]),32);
    bufp->fullIData(oldp+70,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[30]),32);
    bufp->fullIData(oldp+71,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[31]),32);
    bufp->fullCData(oldp+72,((0x1fU & (vlSelf->ysyx_24120011_top__DOT__inst 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+73,((0x1fU & (vlSelf->ysyx_24120011_top__DOT__inst 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+74,((0x1fU & (vlSelf->ysyx_24120011_top__DOT__inst 
                                       >> 7U))),5);
    bufp->fullCData(oldp+75,((7U & (vlSelf->ysyx_24120011_top__DOT__inst 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+76,((vlSelf->ysyx_24120011_top__DOT__inst 
                              >> 0x19U)),7);
    bufp->fullIData(oldp+77,(vlSelf->ysyx_24120011_top__DOT__imme),32);
    bufp->fullCData(oldp+78,(vlSelf->ysyx_24120011_top__DOT__pc_ctrl),2);
    bufp->fullCData(oldp+79,(vlSelf->ysyx_24120011_top__DOT__rd_ctrl),4);
    bufp->fullCData(oldp+80,(vlSelf->ysyx_24120011_top__DOT__ALUBctrl),2);
    bufp->fullBit(oldp+81,((4U != (IData)(vlSelf->ysyx_24120011_top__DOT__rd_ctrl))));
    bufp->fullBit(oldp+82,(vlSelf->ysyx_24120011_top__DOT__w_mem_en));
    bufp->fullBit(oldp+83,(vlSelf->ysyx_24120011_top__DOT__r_mem_en));
    bufp->fullBit(oldp+84,(vlSelf->ysyx_24120011_top__DOT__sign_extension));
    bufp->fullCData(oldp+85,(vlSelf->ysyx_24120011_top__DOT__w_mem_len),8);
    bufp->fullCData(oldp+86,(vlSelf->ysyx_24120011_top__DOT__r_mem_len),8);
    bufp->fullCData(oldp+87,(vlSelf->ysyx_24120011_top__DOT__ALU_ctrl),4);
    bufp->fullCData(oldp+88,(vlSelf->ysyx_24120011_top__DOT__w_csr_data_ctrl),4);
    bufp->fullSData(oldp+89,(vlSelf->ysyx_24120011_top__DOT__w_csr_addr),12);
    bufp->fullSData(oldp+90,(vlSelf->ysyx_24120011_top__DOT__r_csr_addr),12);
    bufp->fullBit(oldp+91,(vlSelf->ysyx_24120011_top__DOT__w_csr_en));
    bufp->fullBit(oldp+92,(vlSelf->ysyx_24120011_top__DOT__r_csr_en));
    bufp->fullBit(oldp+93,(vlSelf->ysyx_24120011_top__DOT__w_csr_ecall));
    bufp->fullIData(oldp+94,(vlSelf->ysyx_24120011_top__DOT__inst),32);
    bufp->fullBit(oldp+95,(vlSelf->ysyx_24120011_top__DOT__IFU_valid));
    bufp->fullIData(oldp+96,(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__i_SRAM__DOT__data_reg),32);
    bufp->fullBit(oldp+97,(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__i_SRAM__DOT__read_request));
    bufp->fullCData(oldp+98,((0x7fU & vlSelf->ysyx_24120011_top__DOT__inst)),7);
    bufp->fullCData(oldp+99,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_IDU__DOT__opcode_type),3);
    bufp->fullIData(oldp+100,(vlSelf->ysyx_24120011_top__DOT__src1),32);
    bufp->fullIData(oldp+101,(vlSelf->ysyx_24120011_top__DOT__src2),32);
    bufp->fullIData(oldp+102,(vlSelf->ysyx_24120011_top__DOT__pc_add_imme_out),32);
    bufp->fullIData(oldp+103,(vlSelf->ysyx_24120011_top__DOT__ALUB),32);
    bufp->fullIData(oldp+104,(vlSelf->ysyx_24120011_top__DOT__alu_result),32);
    bufp->fullIData(oldp+105,(vlSelf->ysyx_24120011_top__DOT__w_csr_data),32);
    bufp->fullIData(oldp+106,(vlSelf->ysyx_24120011_top__DOT__r_csr_data),32);
    bufp->fullIData(oldp+107,(vlSelf->ysyx_24120011_top__DOT__i_ALU__DOT__B_in),32);
    bufp->fullIData(oldp+108,(vlSelf->ysyx_24120011_top__DOT__i_ALU__DOT__ALUout_tmp),32);
    bufp->fullBit(oldp+109,(vlSelf->ysyx_24120011_top__DOT__i_ALU__DOT__carry));
    bufp->fullBit(oldp+110,((1U & (~ (IData)(vlSelf->ysyx_24120011_top__DOT__i_ALU__DOT__carry)))));
    bufp->fullBit(oldp+111,(vlSelf->ysyx_24120011_top__DOT__i_ALU__DOT__sless));
    bufp->fullBit(oldp+112,((vlSelf->ysyx_24120011_top__DOT__src1 
                             == vlSelf->ysyx_24120011_top__DOT__ALUB)));
    bufp->fullBit(oldp+113,((vlSelf->ysyx_24120011_top__DOT__src1 
                             != vlSelf->ysyx_24120011_top__DOT__ALUB)));
    bufp->fullBit(oldp+114,(vlSelf->clk));
    bufp->fullBit(oldp+115,(vlSelf->rst));
    bufp->fullIData(oldp+116,(((2U & (IData)(vlSelf->ysyx_24120011_top__DOT__pc_ctrl))
                                ? ((1U & (IData)(vlSelf->ysyx_24120011_top__DOT__pc_ctrl))
                                    ? vlSelf->ysyx_24120011_top__DOT__r_csr_data
                                    : vlSelf->ysyx_24120011_top__DOT__alu_result)
                                : ((1U & (IData)(vlSelf->ysyx_24120011_top__DOT__pc_ctrl))
                                    ? vlSelf->ysyx_24120011_top__DOT__pc_add_imme_out
                                    : (((0x63U == (0x7fU 
                                                   & vlSelf->ysyx_24120011_top__DOT__inst)) 
                                        & vlSelf->ysyx_24120011_top__DOT__alu_result)
                                        ? vlSelf->ysyx_24120011_top__DOT__pc_add_imme_out
                                        : ((IData)(4U) 
                                           + vlSelf->ysyx_24120011_top__DOT__pc))))),32);
    bufp->fullIData(oldp+117,(((8U & (IData)(vlSelf->ysyx_24120011_top__DOT__rd_ctrl))
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
    bufp->fullIData(oldp+118,(((IData)(4U) + vlSelf->ysyx_24120011_top__DOT__pc)),32);
    bufp->fullBit(oldp+119,(((0x63U == (0x7fU & vlSelf->ysyx_24120011_top__DOT__inst)) 
                             & vlSelf->ysyx_24120011_top__DOT__alu_result)));
    bufp->fullIData(oldp+120,(vlSelf->ysyx_24120011_top__DOT__pc),32);
    bufp->fullIData(oldp+121,(((1U & (IData)(vlSelf->ysyx_24120011_top__DOT__ALU_ctrl))
                                ? vlSelf->ysyx_24120011_top__DOT__i_ALU__DOT____VdfgTmp_h6c4bfc22__0
                                : vlSelf->ysyx_24120011_top__DOT__ALUB)),32);
    bufp->fullBit(oldp+122,((((vlSelf->ysyx_24120011_top__DOT__src1 
                               >> 0x1fU) == (((1U & (IData)(vlSelf->ysyx_24120011_top__DOT__ALU_ctrl))
                                               ? vlSelf->ysyx_24120011_top__DOT__i_ALU__DOT____VdfgTmp_h6c4bfc22__0
                                               : vlSelf->ysyx_24120011_top__DOT__ALUB) 
                                             >> 0x1fU)) 
                             & ((vlSelf->ysyx_24120011_top__DOT__src1 
                                 >> 0x1fU) != (vlSelf->ysyx_24120011_top__DOT__i_ALU__DOT__ALUout_tmp 
                                               >> 0x1fU)))));
    bufp->fullIData(oldp+123,(vlSelf->ysyx_24120011_top__DOT__rdata),32);
    bufp->fullIData(oldp+124,(0x20U),32);
    bufp->fullIData(oldp+125,(0x80000000U),32);
    bufp->fullBit(oldp+126,(1U));
    bufp->fullBit(oldp+127,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_IDU__DOT__IFU_valid));
}
