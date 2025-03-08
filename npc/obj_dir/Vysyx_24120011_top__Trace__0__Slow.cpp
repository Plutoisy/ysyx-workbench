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
    tracep->declBit(c+241,"clk", false,-1);
    tracep->declBit(c+242,"rst", false,-1);
    tracep->pushNamePrefix("ysyx_24120011_top ");
    tracep->declBit(c+241,"clk", false,-1);
    tracep->declBit(c+242,"rst", false,-1);
    tracep->declBus(c+10,"dnpc", false,-1, 31,0);
    tracep->declBus(c+11,"rs1", false,-1, 4,0);
    tracep->declBus(c+12,"rs2", false,-1, 4,0);
    tracep->declBus(c+13,"rd", false,-1, 4,0);
    tracep->declBus(c+14,"func3", false,-1, 2,0);
    tracep->declBus(c+15,"func7", false,-1, 6,0);
    tracep->declBus(c+16,"imme", false,-1, 31,0);
    tracep->declBus(c+17,"wdata", false,-1, 31,0);
    tracep->declBus(c+243,"rdata", false,-1, 31,0);
    tracep->declBus(c+18,"r_mem_data", false,-1, 31,0);
    tracep->declBus(c+19,"src1", false,-1, 31,0);
    tracep->declBus(c+20,"src2", false,-1, 31,0);
    tracep->declBus(c+21,"pc_add_imme_out", false,-1, 31,0);
    tracep->declBus(c+22,"pc_add_4_out", false,-1, 31,0);
    tracep->declBus(c+23,"ALUB", false,-1, 31,0);
    tracep->declBus(c+24,"alu_result", false,-1, 31,0);
    tracep->declBus(c+25,"pc_ctrl", false,-1, 1,0);
    tracep->declBus(c+26,"rd_ctrl", false,-1, 3,0);
    tracep->declBus(c+27,"ALUBctrl", false,-1, 1,0);
    tracep->declBit(c+28,"w_en", false,-1);
    tracep->declBit(c+29,"w_mem_en", false,-1);
    tracep->declBit(c+30,"r_mem_en", false,-1);
    tracep->declBit(c+31,"sign_extension", false,-1);
    tracep->declBit(c+32,"b_type_enter_if", false,-1);
    tracep->declBus(c+33,"w_mem_len", false,-1, 7,0);
    tracep->declBus(c+34,"r_mem_len", false,-1, 7,0);
    tracep->declBus(c+35,"ALU_ctrl", false,-1, 3,0);
    tracep->declBus(c+36,"w_csr_data_ctrl", false,-1, 3,0);
    tracep->declBus(c+37,"a0", false,-1, 31,0);
    tracep->declBus(c+38,"w_csr_addr", false,-1, 11,0);
    tracep->declBus(c+39,"r_csr_addr", false,-1, 11,0);
    tracep->declBit(c+40,"w_csr_en", false,-1);
    tracep->declBit(c+41,"r_csr_en", false,-1);
    tracep->declBit(c+42,"w_csr_ecall", false,-1);
    tracep->declBus(c+43,"w_csr_data", false,-1, 31,0);
    tracep->declBus(c+44,"r_csr_data", false,-1, 31,0);
    tracep->declBus(c+45,"pc", false,-1, 31,0);
    tracep->declBus(c+46,"inst", false,-1, 31,0);
    tracep->declBit(c+47,"IFU_valid", false,-1);
    tracep->declBit(c+48,"LSU_valid", false,-1);
    tracep->declBit(c+49,"LSU_ready", false,-1);
    tracep->declBus(c+50,"LSU_valid_int", false,-1, 31,0);
    tracep->declBus(c+45,"M0_araddr", false,-1, 31,0);
    tracep->declBit(c+51,"M0_arvalid", false,-1);
    tracep->declBit(c+52,"M0_arready", false,-1);
    tracep->declBus(c+53,"M0_rdata", false,-1, 31,0);
    tracep->declBus(c+244,"M0_rresp", false,-1, 1,0);
    tracep->declBit(c+54,"M0_rvalid", false,-1);
    tracep->declBit(c+47,"M0_rready", false,-1);
    tracep->declBus(c+245,"M0_awaddr", false,-1, 31,0);
    tracep->declBit(c+246,"M0_awvalid", false,-1);
    tracep->declBit(c+55,"M0_awready", false,-1);
    tracep->declBus(c+245,"M0_wdata", false,-1, 31,0);
    tracep->declBus(c+247,"M0_wstrb", false,-1, 3,0);
    tracep->declBit(c+246,"M0_wvalid", false,-1);
    tracep->declBit(c+56,"M0_wready", false,-1);
    tracep->declBus(c+244,"M0_bresp", false,-1, 1,0);
    tracep->declBit(c+57,"M0_bvalid", false,-1);
    tracep->declBit(c+248,"M0_bready", false,-1);
    tracep->declBus(c+58,"M1_araddr", false,-1, 31,0);
    tracep->declBit(c+59,"M1_arvalid", false,-1);
    tracep->declBit(c+60,"M1_arready", false,-1);
    tracep->declBus(c+61,"M1_rdata", false,-1, 31,0);
    tracep->declBus(c+244,"M1_rresp", false,-1, 1,0);
    tracep->declBit(c+62,"M1_rvalid", false,-1);
    tracep->declBit(c+63,"M1_rready", false,-1);
    tracep->declBus(c+64,"M1_awaddr", false,-1, 31,0);
    tracep->declBit(c+65,"M1_awvalid", false,-1);
    tracep->declBit(c+66,"M1_awready", false,-1);
    tracep->declBus(c+67,"M1_wdata", false,-1, 31,0);
    tracep->declBus(c+68,"M1_wstrb", false,-1, 3,0);
    tracep->declBit(c+69,"M1_wvalid", false,-1);
    tracep->declBit(c+70,"M1_wready", false,-1);
    tracep->declBus(c+244,"M1_bresp", false,-1, 1,0);
    tracep->declBit(c+71,"M1_bvalid", false,-1);
    tracep->declBit(c+72,"M1_bready", false,-1);
    tracep->declBus(c+73,"S0_araddr", false,-1, 31,0);
    tracep->declBit(c+74,"S0_arvalid", false,-1);
    tracep->declBit(c+75,"S0_arready", false,-1);
    tracep->declBus(c+76,"S0_rdata", false,-1, 31,0);
    tracep->declBus(c+244,"S0_rresp", false,-1, 1,0);
    tracep->declBit(c+77,"S0_rvalid", false,-1);
    tracep->declBit(c+78,"S0_rready", false,-1);
    tracep->declBus(c+79,"S0_awaddr", false,-1, 31,0);
    tracep->declBit(c+80,"S0_awvalid", false,-1);
    tracep->declBit(c+81,"S0_awready", false,-1);
    tracep->declBus(c+82,"S0_wdata", false,-1, 31,0);
    tracep->declBus(c+83,"S0_wstrb", false,-1, 3,0);
    tracep->declBit(c+84,"S0_wvalid", false,-1);
    tracep->declBit(c+85,"S0_wready", false,-1);
    tracep->declBus(c+244,"S0_bresp", false,-1, 1,0);
    tracep->declBit(c+86,"S0_bvalid", false,-1);
    tracep->declBit(c+87,"S0_bready", false,-1);
    tracep->declBus(c+88,"sram_araddr", false,-1, 31,0);
    tracep->declBit(c+89,"sram_arvalid", false,-1);
    tracep->declBit(c+90,"sram_arready", false,-1);
    tracep->declBus(c+91,"sram_rdata", false,-1, 31,0);
    tracep->declBus(c+244,"sram_rresp", false,-1, 1,0);
    tracep->declBit(c+92,"sram_rvalid", false,-1);
    tracep->declBit(c+93,"sram_rready", false,-1);
    tracep->declBus(c+94,"sram_awaddr", false,-1, 31,0);
    tracep->declBit(c+95,"sram_awvalid", false,-1);
    tracep->declBit(c+96,"sram_awready", false,-1);
    tracep->declBus(c+97,"sram_wdata", false,-1, 31,0);
    tracep->declBus(c+98,"sram_wstrb", false,-1, 3,0);
    tracep->declBit(c+99,"sram_wvalid", false,-1);
    tracep->declBit(c+100,"sram_wready", false,-1);
    tracep->declBus(c+244,"sram_bresp", false,-1, 1,0);
    tracep->declBit(c+101,"sram_bvalid", false,-1);
    tracep->declBit(c+102,"sram_bready", false,-1);
    tracep->declBus(c+1,"uart_araddr", false,-1, 31,0);
    tracep->declBit(c+2,"uart_arvalid", false,-1);
    tracep->declBit(c+103,"uart_arready", false,-1);
    tracep->declBus(c+104,"uart_rdata", false,-1, 31,0);
    tracep->declBus(c+244,"uart_rresp", false,-1, 1,0);
    tracep->declBit(c+105,"uart_rvalid", false,-1);
    tracep->declBit(c+3,"uart_rready", false,-1);
    tracep->declBus(c+4,"uart_awaddr", false,-1, 31,0);
    tracep->declBit(c+5,"uart_awvalid", false,-1);
    tracep->declBit(c+106,"uart_awready", false,-1);
    tracep->declBus(c+6,"uart_wdata", false,-1, 31,0);
    tracep->declBus(c+7,"uart_wstrb", false,-1, 3,0);
    tracep->declBit(c+8,"uart_wvalid", false,-1);
    tracep->declBit(c+107,"uart_wready", false,-1);
    tracep->declBus(c+244,"uart_bresp", false,-1, 1,0);
    tracep->declBit(c+108,"uart_bvalid", false,-1);
    tracep->declBit(c+9,"uart_bready", false,-1);
    tracep->pushNamePrefix("i_ALU ");
    tracep->declBus(c+19,"A", false,-1, 31,0);
    tracep->declBus(c+23,"B", false,-1, 31,0);
    tracep->declBus(c+35,"ALU_ctrl", false,-1, 3,0);
    tracep->declBus(c+24,"ALUout", false,-1, 31,0);
    tracep->declBus(c+109,"B_in", false,-1, 31,0);
    tracep->declBus(c+110,"B_in_used_for_overflow", false,-1, 31,0);
    tracep->declBus(c+111,"ALUout_tmp", false,-1, 31,0);
    tracep->declBit(c+112,"carry", false,-1);
    tracep->declBit(c+113,"overflow", false,-1);
    tracep->declBit(c+114,"uless", false,-1);
    tracep->declBit(c+115,"sless", false,-1);
    tracep->declBit(c+116,"a_is_b", false,-1);
    tracep->declBit(c+117,"a_not_b", false,-1);
    tracep->pushNamePrefix("i_Adder ");
    tracep->declBus(c+19,"x", false,-1, 31,0);
    tracep->declBus(c+109,"y", false,-1, 31,0);
    tracep->declBus(c+111,"s", false,-1, 31,0);
    tracep->declBit(c+112,"c", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i_ALUCtrl ");
    tracep->declBus(c+27,"ALUBctrl", false,-1, 1,0);
    tracep->declBus(c+20,"src2", false,-1, 31,0);
    tracep->declBus(c+16,"imme", false,-1, 31,0);
    tracep->declBus(c+44,"r_csr_data", false,-1, 31,0);
    tracep->declBus(c+23,"ALUB", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_Csr ");
    tracep->declBit(c+241,"clk", false,-1);
    tracep->declBit(c+242,"rst", false,-1);
    tracep->declBus(c+38,"w_csr_addr", false,-1, 11,0);
    tracep->declBus(c+39,"r_csr_addr", false,-1, 11,0);
    tracep->declBit(c+40,"w_csr_en", false,-1);
    tracep->declBit(c+41,"r_csr_en", false,-1);
    tracep->declBit(c+42,"w_csr_ecall", false,-1);
    tracep->declBus(c+45,"pc", false,-1, 31,0);
    tracep->declBus(c+43,"w_csr_data", false,-1, 31,0);
    tracep->declBus(c+44,"r_csr_data", false,-1, 31,0);
    tracep->declBus(c+118,"mepc", false,-1, 31,0);
    tracep->declBus(c+119,"mstatus", false,-1, 31,0);
    tracep->declBus(c+120,"mcause", false,-1, 31,0);
    tracep->declBus(c+121,"mtvec", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_CsrProcessor ");
    tracep->declBus(c+24,"alu_result", false,-1, 31,0);
    tracep->declBus(c+19,"src1", false,-1, 31,0);
    tracep->declBus(c+36,"w_csr_data_ctrl", false,-1, 3,0);
    tracep->declBus(c+43,"w_csr_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_IFU ");
    tracep->declBit(c+241,"clk", false,-1);
    tracep->declBit(c+242,"rst", false,-1);
    tracep->declBus(c+45,"pc", false,-1, 31,0);
    tracep->declBus(c+46,"inst", false,-1, 31,0);
    tracep->declBit(c+47,"IFU_valid", false,-1);
    tracep->declBit(c+49,"LSU_ready", false,-1);
    tracep->declBus(c+45,"M0_araddr", false,-1, 31,0);
    tracep->declBit(c+51,"M0_arvalid", false,-1);
    tracep->declBit(c+52,"M0_arready", false,-1);
    tracep->declBus(c+53,"M0_rdata", false,-1, 31,0);
    tracep->declBus(c+244,"M0_rresp", false,-1, 1,0);
    tracep->declBit(c+54,"M0_rvalid", false,-1);
    tracep->declBit(c+47,"M0_rready", false,-1);
    tracep->declBus(c+245,"M0_awaddr", false,-1, 31,0);
    tracep->declBit(c+246,"M0_awvalid", false,-1);
    tracep->declBit(c+55,"M0_awready", false,-1);
    tracep->declBus(c+245,"M0_wdata", false,-1, 31,0);
    tracep->declBus(c+247,"M0_wstrb", false,-1, 3,0);
    tracep->declBit(c+246,"M0_wvalid", false,-1);
    tracep->declBit(c+56,"M0_wready", false,-1);
    tracep->declBus(c+244,"M0_bresp", false,-1, 1,0);
    tracep->declBit(c+57,"M0_bvalid", false,-1);
    tracep->declBit(c+248,"M0_bready", false,-1);
    tracep->declBit(c+52,"arready", false,-1);
    tracep->declBus(c+244,"rresp", false,-1, 1,0);
    tracep->declBit(c+55,"awready", false,-1);
    tracep->declBit(c+56,"wready", false,-1);
    tracep->declBus(c+244,"bresp", false,-1, 1,0);
    tracep->declBit(c+57,"bvalid", false,-1);
    tracep->declBit(c+54,"rvalid", false,-1);
    tracep->declBit(c+47,"rready", false,-1);
    tracep->declBit(c+122,"rvalid_prev", false,-1);
    tracep->declBit(c+51,"arvalid", false,-1);
    tracep->declBus(c+123,"state", false,-1, 2,0);
    tracep->declBus(c+124,"next_state", false,-1, 2,0);
    tracep->declBit(c+249,"start_read_delay", false,-1);
    tracep->declBus(c+125,"arvalid_delay_cnt", false,-1, 7,0);
    tracep->declBus(c+126,"rready_delay_cnt", false,-1, 7,0);
    tracep->declBus(c+127,"LSFR_in", false,-1, 7,0);
    tracep->declBus(c+128,"random_delay", false,-1, 7,0);
    tracep->declBus(c+250,"ysyx_24120011_IFU_M_AXI_IDLE", false,-1, 2,0);
    tracep->declBus(c+251,"ysyx_24120011_IFU_M_AXI_RADDR", false,-1, 2,0);
    tracep->declBus(c+252,"ysyx_24120011_IFU_M_AXI_RDATA", false,-1, 2,0);
    tracep->pushNamePrefix("i1_LFSR ");
    tracep->declBit(c+241,"clk", false,-1);
    tracep->declBus(c+127,"in", false,-1, 7,0);
    tracep->declBus(c+128,"out", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i_LSU ");
    tracep->declBit(c+241,"clk", false,-1);
    tracep->declBit(c+242,"rst", false,-1);
    tracep->declBit(c+47,"IFU_valid", false,-1);
    tracep->declBus(c+24,"w_mem_addr", false,-1, 31,0);
    tracep->declBus(c+24,"r_mem_addr", false,-1, 31,0);
    tracep->declBus(c+33,"w_mem_len", false,-1, 7,0);
    tracep->declBus(c+34,"r_mem_len", false,-1, 7,0);
    tracep->declBit(c+29,"w_mem_en", false,-1);
    tracep->declBit(c+30,"r_mem_en", false,-1);
    tracep->declBit(c+31,"sign_extension", false,-1);
    tracep->declBus(c+20,"w_mem_data", false,-1, 31,0);
    tracep->declBus(c+18,"r_mem_data", false,-1, 31,0);
    tracep->declBit(c+48,"LSU_valid", false,-1);
    tracep->declBit(c+49,"LSU_ready", false,-1);
    tracep->declBus(c+58,"M1_araddr", false,-1, 31,0);
    tracep->declBit(c+59,"M1_arvalid", false,-1);
    tracep->declBit(c+60,"M1_arready", false,-1);
    tracep->declBus(c+61,"M1_rdata", false,-1, 31,0);
    tracep->declBus(c+244,"M1_rresp", false,-1, 1,0);
    tracep->declBit(c+62,"M1_rvalid", false,-1);
    tracep->declBit(c+63,"M1_rready", false,-1);
    tracep->declBus(c+64,"M1_awaddr", false,-1, 31,0);
    tracep->declBit(c+65,"M1_awvalid", false,-1);
    tracep->declBit(c+66,"M1_awready", false,-1);
    tracep->declBus(c+67,"M1_wdata", false,-1, 31,0);
    tracep->declBus(c+68,"M1_wstrb", false,-1, 3,0);
    tracep->declBit(c+69,"M1_wvalid", false,-1);
    tracep->declBit(c+70,"M1_wready", false,-1);
    tracep->declBus(c+244,"M1_bresp", false,-1, 1,0);
    tracep->declBit(c+71,"M1_bvalid", false,-1);
    tracep->declBit(c+72,"M1_bready", false,-1);
    tracep->declBus(c+250,"ysyx_24120011_LSU_M_AXI_IDLE", false,-1, 2,0);
    tracep->declBus(c+251,"ysyx_24120011_LSU_M_AXI_RADDR", false,-1, 2,0);
    tracep->declBus(c+252,"ysyx_24120011_LSU_M_AXI_RDATA", false,-1, 2,0);
    tracep->declBus(c+253,"ysyx_24120011_LSU_M_AXI_WADDR", false,-1, 2,0);
    tracep->declBus(c+254,"ysyx_24120011_LSU_M_AXI_WDATA", false,-1, 2,0);
    tracep->declBus(c+255,"ysyx_24120011_LSU_M_AXI_WRESP", false,-1, 2,0);
    tracep->declBus(c+244,"ysyx_24120011_LSU_M_AXI_RESP_OKAY", false,-1, 1,0);
    tracep->declBus(c+129,"state", false,-1, 2,0);
    tracep->declBus(c+130,"next_state", false,-1, 2,0);
    tracep->declBit(c+131,"start_read_delay", false,-1);
    tracep->declBit(c+132,"start_write_delay", false,-1);
    tracep->declBus(c+58,"araddr", false,-1, 31,0);
    tracep->declBit(c+59,"arvalid", false,-1);
    tracep->declBit(c+60,"arready", false,-1);
    tracep->declBit(c+63,"rready", false,-1);
    tracep->declBus(c+244,"rresp", false,-1, 1,0);
    tracep->declBit(c+62,"rvalid", false,-1);
    tracep->declBit(c+65,"awvalid", false,-1);
    tracep->declBit(c+66,"awready", false,-1);
    tracep->declBus(c+64,"awaddr", false,-1, 31,0);
    tracep->declBit(c+69,"wvalid", false,-1);
    tracep->declBit(c+70,"wready", false,-1);
    tracep->declBus(c+67,"wdata", false,-1, 31,0);
    tracep->declBus(c+244,"bresp", false,-1, 1,0);
    tracep->declBus(c+68,"wstrb", false,-1, 3,0);
    tracep->declBit(c+72,"bready", false,-1);
    tracep->declBus(c+61,"rdata", false,-1, 31,0);
    tracep->declBit(c+71,"bvalid", false,-1);
    tracep->declBit(c+133,"LSU_working", false,-1);
    tracep->declBus(c+134,"arvalid_delay_cnt", false,-1, 7,0);
    tracep->declBus(c+135,"awvalid_delay_cnt", false,-1, 7,0);
    tracep->declBus(c+136,"wvalid_delay_cnt", false,-1, 7,0);
    tracep->declBus(c+137,"rready_delay_cnt", false,-1, 7,0);
    tracep->declBus(c+138,"bready_delay_cnt", false,-1, 7,0);
    tracep->declBus(c+139,"LSFR_in", false,-1, 7,0);
    tracep->declBus(c+140,"random_delay", false,-1, 7,0);
    tracep->pushNamePrefix("i0_LFSR ");
    tracep->declBit(c+241,"clk", false,-1);
    tracep->declBus(c+139,"in", false,-1, 7,0);
    tracep->declBus(c+140,"out", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i_PCProcessor ");
    tracep->declBus(c+45,"pc", false,-1, 31,0);
    tracep->declBus(c+16,"imme", false,-1, 31,0);
    tracep->declBus(c+24,"alu_result", false,-1, 31,0);
    tracep->declBus(c+44,"r_csr_data", false,-1, 31,0);
    tracep->declBus(c+25,"pc_ctrl", false,-1, 1,0);
    tracep->declBit(c+32,"b_type_enter_if", false,-1);
    tracep->declBus(c+21,"pc_add_imme_out", false,-1, 31,0);
    tracep->declBus(c+22,"pc_add_4_out", false,-1, 31,0);
    tracep->declBus(c+10,"dnpc", false,-1, 31,0);
    tracep->declBus(c+22,"pc_add_4", false,-1, 31,0);
    tracep->declBus(c+21,"pc_add_imme", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_RegStack ");
    tracep->declBit(c+241,"clk", false,-1);
    tracep->declBit(c+242,"rst", false,-1);
    tracep->declBit(c+28,"w_en", false,-1);
    tracep->declBus(c+17,"wdata", false,-1, 31,0);
    tracep->declBus(c+13,"rd", false,-1, 4,0);
    tracep->declBus(c+11,"rs1", false,-1, 4,0);
    tracep->declBus(c+12,"rs2", false,-1, 4,0);
    tracep->declBus(c+19,"src1", false,-1, 31,0);
    tracep->declBus(c+20,"src2", false,-1, 31,0);
    tracep->declBus(c+37,"a0", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+141+i*1,"Regs", true,(i+0), 31,0);
    }
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+173+i*1,"regout", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_WBU ");
    tracep->declBus(c+21,"pc_add_imme_out", false,-1, 31,0);
    tracep->declBus(c+22,"pc_add_4_out", false,-1, 31,0);
    tracep->declBus(c+24,"alu_result", false,-1, 31,0);
    tracep->declBus(c+16,"imme", false,-1, 31,0);
    tracep->declBus(c+18,"r_mem_data", false,-1, 31,0);
    tracep->declBus(c+44,"r_csr_data", false,-1, 31,0);
    tracep->declBus(c+26,"rd_ctrl", false,-1, 3,0);
    tracep->declBit(c+48,"LSU_valid", false,-1);
    tracep->declBit(c+28,"w_en", false,-1);
    tracep->declBus(c+17,"wdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_pc ");
    tracep->declBus(c+256,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+257,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+241,"clk", false,-1);
    tracep->declBit(c+242,"rst", false,-1);
    tracep->declBus(c+10,"din", false,-1, 31,0);
    tracep->declBus(c+45,"dout", false,-1, 31,0);
    tracep->declBit(c+48,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_24120011_Arbiter ");
    tracep->declBit(c+241,"clk", false,-1);
    tracep->declBit(c+242,"rst", false,-1);
    tracep->declBus(c+45,"M0_araddr", false,-1, 31,0);
    tracep->declBit(c+51,"M0_arvalid", false,-1);
    tracep->declBit(c+52,"M0_arready", false,-1);
    tracep->declBus(c+53,"M0_rdata", false,-1, 31,0);
    tracep->declBus(c+244,"M0_rresp", false,-1, 1,0);
    tracep->declBit(c+54,"M0_rvalid", false,-1);
    tracep->declBit(c+47,"M0_rready", false,-1);
    tracep->declBus(c+245,"M0_awaddr", false,-1, 31,0);
    tracep->declBit(c+246,"M0_awvalid", false,-1);
    tracep->declBit(c+55,"M0_awready", false,-1);
    tracep->declBus(c+245,"M0_wdata", false,-1, 31,0);
    tracep->declBus(c+247,"M0_wstrb", false,-1, 3,0);
    tracep->declBit(c+246,"M0_wvalid", false,-1);
    tracep->declBit(c+56,"M0_wready", false,-1);
    tracep->declBus(c+244,"M0_bresp", false,-1, 1,0);
    tracep->declBit(c+57,"M0_bvalid", false,-1);
    tracep->declBit(c+248,"M0_bready", false,-1);
    tracep->declBus(c+58,"M1_araddr", false,-1, 31,0);
    tracep->declBit(c+59,"M1_arvalid", false,-1);
    tracep->declBit(c+60,"M1_arready", false,-1);
    tracep->declBus(c+61,"M1_rdata", false,-1, 31,0);
    tracep->declBus(c+244,"M1_rresp", false,-1, 1,0);
    tracep->declBit(c+62,"M1_rvalid", false,-1);
    tracep->declBit(c+63,"M1_rready", false,-1);
    tracep->declBus(c+64,"M1_awaddr", false,-1, 31,0);
    tracep->declBit(c+65,"M1_awvalid", false,-1);
    tracep->declBit(c+66,"M1_awready", false,-1);
    tracep->declBus(c+67,"M1_wdata", false,-1, 31,0);
    tracep->declBus(c+68,"M1_wstrb", false,-1, 3,0);
    tracep->declBit(c+69,"M1_wvalid", false,-1);
    tracep->declBit(c+70,"M1_wready", false,-1);
    tracep->declBus(c+244,"M1_bresp", false,-1, 1,0);
    tracep->declBit(c+71,"M1_bvalid", false,-1);
    tracep->declBit(c+72,"M1_bready", false,-1);
    tracep->declBus(c+73,"S0_araddr", false,-1, 31,0);
    tracep->declBit(c+74,"S0_arvalid", false,-1);
    tracep->declBit(c+75,"S0_arready", false,-1);
    tracep->declBus(c+76,"S0_rdata", false,-1, 31,0);
    tracep->declBus(c+244,"S0_rresp", false,-1, 1,0);
    tracep->declBit(c+77,"S0_rvalid", false,-1);
    tracep->declBit(c+78,"S0_rready", false,-1);
    tracep->declBus(c+79,"S0_awaddr", false,-1, 31,0);
    tracep->declBit(c+80,"S0_awvalid", false,-1);
    tracep->declBit(c+81,"S0_awready", false,-1);
    tracep->declBus(c+82,"S0_wdata", false,-1, 31,0);
    tracep->declBus(c+83,"S0_wstrb", false,-1, 3,0);
    tracep->declBit(c+84,"S0_wvalid", false,-1);
    tracep->declBit(c+85,"S0_wready", false,-1);
    tracep->declBus(c+244,"S0_bresp", false,-1, 1,0);
    tracep->declBit(c+86,"S0_bvalid", false,-1);
    tracep->declBit(c+87,"S0_bready", false,-1);
    tracep->declBus(c+250,"ysyx_24120011_Arbiter_IDLE", false,-1, 2,0);
    tracep->declBus(c+251,"ysyx_24120011_Arbiter_M0", false,-1, 2,0);
    tracep->declBus(c+252,"ysyx_24120011_Arbiter_M1", false,-1, 2,0);
    tracep->declBus(c+205,"read_state", false,-1, 2,0);
    tracep->declBus(c+206,"read_next_state", false,-1, 2,0);
    tracep->declBus(c+207,"write_state", false,-1, 2,0);
    tracep->declBus(c+208,"write_next_state", false,-1, 2,0);
    tracep->declBus(c+209,"last_read_master", false,-1, 2,0);
    tracep->declBus(c+210,"last_write_master", false,-1, 2,0);
    tracep->declBit(c+211,"read_done", false,-1);
    tracep->declBit(c+212,"write_done", false,-1);
    tracep->declBus(c+258,"read_choose", false,-1, 2,0);
    tracep->declBus(c+259,"write_choose", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_24120011_IDU ");
    tracep->declBus(c+46,"inst", false,-1, 31,0);
    tracep->declBit(c+47,"IFU_valid", false,-1);
    tracep->declBit(c+48,"LSU_valid", false,-1);
    tracep->declBus(c+13,"rd", false,-1, 4,0);
    tracep->declBus(c+11,"rs1", false,-1, 4,0);
    tracep->declBus(c+12,"rs2", false,-1, 4,0);
    tracep->declBus(c+16,"imme", false,-1, 31,0);
    tracep->declBus(c+14,"func3", false,-1, 2,0);
    tracep->declBus(c+15,"func7", false,-1, 6,0);
    tracep->declBus(c+25,"pc_ctrl", false,-1, 1,0);
    tracep->declBus(c+26,"rd_ctrl", false,-1, 3,0);
    tracep->declBus(c+27,"ALUBctrl", false,-1, 1,0);
    tracep->declBit(c+29,"w_mem_en", false,-1);
    tracep->declBus(c+33,"w_mem_len", false,-1, 7,0);
    tracep->declBit(c+30,"r_mem_en", false,-1);
    tracep->declBit(c+31,"sign_extension", false,-1);
    tracep->declBus(c+35,"ALU_ctrl", false,-1, 3,0);
    tracep->declBus(c+34,"r_mem_len", false,-1, 7,0);
    tracep->declBus(c+38,"w_csr_addr", false,-1, 11,0);
    tracep->declBit(c+40,"w_csr_en", false,-1);
    tracep->declBus(c+36,"w_csr_data_ctrl", false,-1, 3,0);
    tracep->declBit(c+42,"w_csr_ecall", false,-1);
    tracep->declBus(c+39,"r_csr_addr", false,-1, 11,0);
    tracep->declBit(c+41,"r_csr_en", false,-1);
    tracep->declBus(c+213,"opcode", false,-1, 6,0);
    tracep->declBus(c+214,"opcode_type", false,-1, 2,0);
    tracep->pushNamePrefix("i_ImmeGen ");
    tracep->declBus(c+46,"inst", false,-1, 31,0);
    tracep->declBus(c+214,"opcode_type", false,-1, 2,0);
    tracep->declBus(c+16,"imme", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_TypeFinder ");
    tracep->declBus(c+213,"opcode", false,-1, 6,0);
    tracep->declBus(c+214,"opcode_type", false,-1, 2,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_ysyx_24120011_SRAM ");
    tracep->declBit(c+241,"clk", false,-1);
    tracep->declBit(c+242,"rst", false,-1);
    tracep->declBus(c+88,"araddr", false,-1, 31,0);
    tracep->declBit(c+89,"arvalid", false,-1);
    tracep->declBit(c+90,"arready", false,-1);
    tracep->declBus(c+91,"rdata", false,-1, 31,0);
    tracep->declBus(c+244,"rresp", false,-1, 1,0);
    tracep->declBit(c+92,"rvalid", false,-1);
    tracep->declBit(c+93,"rready", false,-1);
    tracep->declBus(c+94,"awaddr", false,-1, 31,0);
    tracep->declBit(c+95,"awvalid", false,-1);
    tracep->declBit(c+96,"awready", false,-1);
    tracep->declBus(c+97,"wdata", false,-1, 31,0);
    tracep->declBus(c+98,"wstrb", false,-1, 3,0);
    tracep->declBit(c+99,"wvalid", false,-1);
    tracep->declBit(c+100,"wready", false,-1);
    tracep->declBus(c+244,"bresp", false,-1, 1,0);
    tracep->declBit(c+101,"bvalid", false,-1);
    tracep->declBit(c+102,"bready", false,-1);
    tracep->declBus(c+250,"ysyx_24120011_S_AXI_IDLE", false,-1, 2,0);
    tracep->declBus(c+251,"ysyx_24120011_S_AXI_RADDR", false,-1, 2,0);
    tracep->declBus(c+252,"ysyx_24120011_S_AXI_RDATA", false,-1, 2,0);
    tracep->declBus(c+253,"ysyx_24120011_S_AXI_WADDR", false,-1, 2,0);
    tracep->declBus(c+254,"ysyx_24120011_S_AXI_WDATA", false,-1, 2,0);
    tracep->declBus(c+255,"ysyx_24120011_S_AXI_WRESP", false,-1, 2,0);
    tracep->declBus(c+244,"ysyx_24120011_S_AXI_RESP_OKAY", false,-1, 1,0);
    tracep->declBus(c+215,"state", false,-1, 2,0);
    tracep->declBus(c+216,"next_state", false,-1, 2,0);
    tracep->declBus(c+217,"addr", false,-1, 31,0);
    tracep->declBus(c+218,"read_delay_cnt", false,-1, 7,0);
    tracep->declBus(c+219,"write_delay_cnt", false,-1, 7,0);
    tracep->declBit(c+220,"pmem_readed", false,-1);
    tracep->declBit(c+221,"pmem_writed", false,-1);
    tracep->declBus(c+222,"LSFR_in", false,-1, 7,0);
    tracep->declBus(c+223,"random_delay", false,-1, 7,0);
    tracep->declBus(c+91,"rdata_reg", false,-1, 31,0);
    tracep->declBit(c+92,"rvalid_reg", false,-1);
    tracep->declBit(c+100,"wready_reg", false,-1);
    tracep->pushNamePrefix("i1_LFSR ");
    tracep->declBit(c+241,"clk", false,-1);
    tracep->declBus(c+222,"in", false,-1, 7,0);
    tracep->declBus(c+223,"out", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_ysyx_24120011_Uart ");
    tracep->declBit(c+241,"clk", false,-1);
    tracep->declBit(c+242,"rst", false,-1);
    tracep->declBus(c+1,"araddr", false,-1, 31,0);
    tracep->declBit(c+2,"arvalid", false,-1);
    tracep->declBit(c+103,"arready", false,-1);
    tracep->declBus(c+104,"rdata", false,-1, 31,0);
    tracep->declBus(c+244,"rresp", false,-1, 1,0);
    tracep->declBit(c+105,"rvalid", false,-1);
    tracep->declBit(c+3,"rready", false,-1);
    tracep->declBus(c+4,"awaddr", false,-1, 31,0);
    tracep->declBit(c+5,"awvalid", false,-1);
    tracep->declBit(c+106,"awready", false,-1);
    tracep->declBus(c+6,"wdata", false,-1, 31,0);
    tracep->declBus(c+7,"wstrb", false,-1, 3,0);
    tracep->declBit(c+8,"wvalid", false,-1);
    tracep->declBit(c+107,"wready", false,-1);
    tracep->declBus(c+244,"bresp", false,-1, 1,0);
    tracep->declBit(c+108,"bvalid", false,-1);
    tracep->declBit(c+9,"bready", false,-1);
    tracep->declBus(c+250,"ysyx_24120011_S_AXI_IDLE", false,-1, 2,0);
    tracep->declBus(c+251,"ysyx_24120011_S_AXI_RADDR", false,-1, 2,0);
    tracep->declBus(c+252,"ysyx_24120011_S_AXI_RDATA", false,-1, 2,0);
    tracep->declBus(c+253,"ysyx_24120011_S_AXI_WADDR", false,-1, 2,0);
    tracep->declBus(c+254,"ysyx_24120011_S_AXI_WDATA", false,-1, 2,0);
    tracep->declBus(c+255,"ysyx_24120011_S_AXI_WRESP", false,-1, 2,0);
    tracep->declBus(c+244,"ysyx_24120011_S_AXI_RESP_OKAY", false,-1, 1,0);
    tracep->declBus(c+224,"state", false,-1, 2,0);
    tracep->declBus(c+225,"next_state", false,-1, 2,0);
    tracep->declBus(c+226,"addr", false,-1, 31,0);
    tracep->declBus(c+227,"read_delay_cnt", false,-1, 7,0);
    tracep->declBus(c+228,"write_delay_cnt", false,-1, 7,0);
    tracep->declBit(c+229,"pmem_readed", false,-1);
    tracep->declBit(c+230,"pmem_writed", false,-1);
    tracep->declBus(c+231,"LSFR_in", false,-1, 7,0);
    tracep->declBus(c+232,"random_delay", false,-1, 7,0);
    tracep->declBus(c+104,"rdata_reg", false,-1, 31,0);
    tracep->declBit(c+105,"rvalid_reg", false,-1);
    tracep->declBit(c+107,"wready_reg", false,-1);
    tracep->pushNamePrefix("i1_LFSR ");
    tracep->declBit(c+241,"clk", false,-1);
    tracep->declBus(c+231,"in", false,-1, 7,0);
    tracep->declBus(c+232,"out", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_ysyx_24120011_Xbar ");
    tracep->declBit(c+241,"clk", false,-1);
    tracep->declBit(c+242,"rst", false,-1);
    tracep->declBus(c+73,"Xbar_araddr", false,-1, 31,0);
    tracep->declBit(c+74,"Xbar_arvalid", false,-1);
    tracep->declBit(c+75,"Xbar_arready", false,-1);
    tracep->declBus(c+76,"Xbar_rdata", false,-1, 31,0);
    tracep->declBus(c+244,"Xbar_rresp", false,-1, 1,0);
    tracep->declBit(c+77,"Xbar_rvalid", false,-1);
    tracep->declBit(c+78,"Xbar_rready", false,-1);
    tracep->declBus(c+79,"Xbar_awaddr", false,-1, 31,0);
    tracep->declBit(c+80,"Xbar_awvalid", false,-1);
    tracep->declBit(c+81,"Xbar_awready", false,-1);
    tracep->declBus(c+82,"Xbar_wdata", false,-1, 31,0);
    tracep->declBus(c+83,"Xbar_wstrb", false,-1, 3,0);
    tracep->declBit(c+84,"Xbar_wvalid", false,-1);
    tracep->declBit(c+85,"Xbar_wready", false,-1);
    tracep->declBus(c+244,"Xbar_bresp", false,-1, 1,0);
    tracep->declBit(c+86,"Xbar_bvalid", false,-1);
    tracep->declBit(c+87,"Xbar_bready", false,-1);
    tracep->declBus(c+88,"Xbar_S0_araddr", false,-1, 31,0);
    tracep->declBit(c+89,"Xbar_S0_arvalid", false,-1);
    tracep->declBit(c+90,"Xbar_S0_arready", false,-1);
    tracep->declBus(c+91,"Xbar_S0_rdata", false,-1, 31,0);
    tracep->declBus(c+244,"Xbar_S0_rresp", false,-1, 1,0);
    tracep->declBit(c+92,"Xbar_S0_rvalid", false,-1);
    tracep->declBit(c+93,"Xbar_S0_rready", false,-1);
    tracep->declBus(c+94,"Xbar_S0_awaddr", false,-1, 31,0);
    tracep->declBit(c+95,"Xbar_S0_awvalid", false,-1);
    tracep->declBit(c+96,"Xbar_S0_awready", false,-1);
    tracep->declBus(c+97,"Xbar_S0_wdata", false,-1, 31,0);
    tracep->declBus(c+98,"Xbar_S0_wstrb", false,-1, 3,0);
    tracep->declBit(c+99,"Xbar_S0_wvalid", false,-1);
    tracep->declBit(c+100,"Xbar_S0_wready", false,-1);
    tracep->declBus(c+244,"Xbar_S0_bresp", false,-1, 1,0);
    tracep->declBit(c+101,"Xbar_S0_bvalid", false,-1);
    tracep->declBit(c+102,"Xbar_S0_bready", false,-1);
    tracep->declBus(c+1,"Xbar_S1_araddr", false,-1, 31,0);
    tracep->declBit(c+2,"Xbar_S1_arvalid", false,-1);
    tracep->declBit(c+103,"Xbar_S1_arready", false,-1);
    tracep->declBus(c+104,"Xbar_S1_rdata", false,-1, 31,0);
    tracep->declBus(c+244,"Xbar_S1_rresp", false,-1, 1,0);
    tracep->declBit(c+105,"Xbar_S1_rvalid", false,-1);
    tracep->declBit(c+3,"Xbar_S1_rready", false,-1);
    tracep->declBus(c+4,"Xbar_S1_awaddr", false,-1, 31,0);
    tracep->declBit(c+5,"Xbar_S1_awvalid", false,-1);
    tracep->declBit(c+106,"Xbar_S1_awready", false,-1);
    tracep->declBus(c+6,"Xbar_S1_wdata", false,-1, 31,0);
    tracep->declBus(c+7,"Xbar_S1_wstrb", false,-1, 3,0);
    tracep->declBit(c+8,"Xbar_S1_wvalid", false,-1);
    tracep->declBit(c+107,"Xbar_S1_wready", false,-1);
    tracep->declBus(c+244,"Xbar_S1_bresp", false,-1, 1,0);
    tracep->declBit(c+108,"Xbar_S1_bvalid", false,-1);
    tracep->declBit(c+9,"Xbar_S1_bready", false,-1);
    tracep->declBus(c+250,"ysyx_24120011_Xbar_IDLE", false,-1, 2,0);
    tracep->declBus(c+251,"ysyx_24120011_Xbar_S0", false,-1, 2,0);
    tracep->declBus(c+252,"ysyx_24120011_Xbar_S1", false,-1, 2,0);
    tracep->declBus(c+253,"ysyx_24120011_Xbar_S2", false,-1, 2,0);
    tracep->declBit(c+233,"r_Xbar_state", false,-1);
    tracep->declBit(c+234,"r_Xbar_next_state", false,-1);
    tracep->declBit(c+235,"w_Xbar_state", false,-1);
    tracep->declBit(c+236,"w_Xbar_next_state", false,-1);
    tracep->declBus(c+88,"reg_Xbar_S0_araddr", false,-1, 31,0);
    tracep->declBit(c+89,"reg_Xbar_S0_arvalid", false,-1);
    tracep->declBit(c+75,"reg_Xbar_arready", false,-1);
    tracep->declBus(c+76,"reg_Xbar_rdata", false,-1, 31,0);
    tracep->declBus(c+244,"reg_Xbar_rresp", false,-1, 1,0);
    tracep->declBit(c+77,"reg_Xbar_rvalid", false,-1);
    tracep->declBit(c+93,"reg_Xbar_S0_rready", false,-1);
    tracep->declBus(c+1,"reg_Xbar_S1_araddr", false,-1, 31,0);
    tracep->declBit(c+2,"reg_Xbar_S1_arvalid", false,-1);
    tracep->declBit(c+3,"reg_Xbar_S1_rready", false,-1);
    tracep->declBus(c+94,"reg_Xbar_S0_awaddr", false,-1, 31,0);
    tracep->declBit(c+95,"reg_Xbar_S0_awvalid", false,-1);
    tracep->declBit(c+81,"reg_Xbar_awready", false,-1);
    tracep->declBus(c+97,"reg_Xbar_S0_wdata", false,-1, 31,0);
    tracep->declBus(c+98,"reg_Xbar_S0_wstrb", false,-1, 3,0);
    tracep->declBit(c+99,"reg_Xbar_S0_wvalid", false,-1);
    tracep->declBit(c+85,"reg_Xbar_wready", false,-1);
    tracep->declBus(c+244,"reg_Xbar_bresp", false,-1, 1,0);
    tracep->declBit(c+86,"reg_Xbar_bvalid", false,-1);
    tracep->declBit(c+102,"reg_Xbar_S0_bready", false,-1);
    tracep->declBus(c+4,"reg_Xbar_S1_awaddr", false,-1, 31,0);
    tracep->declBit(c+5,"reg_Xbar_S1_awvalid", false,-1);
    tracep->declBus(c+6,"reg_Xbar_S1_wdata", false,-1, 31,0);
    tracep->declBus(c+7,"reg_Xbar_S1_wstrb", false,-1, 3,0);
    tracep->declBit(c+8,"reg_Xbar_S1_wvalid", false,-1);
    tracep->declBit(c+9,"reg_Xbar_S1_bready", false,-1);
    tracep->declBit(c+237,"read_S0_done", false,-1);
    tracep->declBit(c+238,"write_S0_done", false,-1);
    tracep->declBit(c+239,"read_S1_done", false,-1);
    tracep->declBit(c+240,"write_S1_done", false,-1);
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
    bufp->fullIData(oldp+1,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_araddr),32);
    bufp->fullBit(oldp+2,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_arvalid));
    bufp->fullBit(oldp+3,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_rready));
    bufp->fullIData(oldp+4,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_awaddr),32);
    bufp->fullBit(oldp+5,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_awvalid));
    bufp->fullIData(oldp+6,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_wdata),32);
    bufp->fullCData(oldp+7,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_wstrb),4);
    bufp->fullBit(oldp+8,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_wvalid));
    bufp->fullBit(oldp+9,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_bready));
    bufp->fullIData(oldp+10,(((2U & (IData)(vlSelf->ysyx_24120011_top__DOT__pc_ctrl))
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
    bufp->fullCData(oldp+11,((0x1fU & (vlSelf->ysyx_24120011_top__DOT__inst 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+12,((0x1fU & (vlSelf->ysyx_24120011_top__DOT__inst 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+13,((0x1fU & (vlSelf->ysyx_24120011_top__DOT__inst 
                                       >> 7U))),5);
    bufp->fullCData(oldp+14,((7U & (vlSelf->ysyx_24120011_top__DOT__inst 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+15,((vlSelf->ysyx_24120011_top__DOT__inst 
                              >> 0x19U)),7);
    bufp->fullIData(oldp+16,(vlSelf->ysyx_24120011_top__DOT__imme),32);
    bufp->fullIData(oldp+17,(((8U & (IData)(vlSelf->ysyx_24120011_top__DOT__rd_ctrl))
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
                                                : ((IData)(4U) 
                                                   + vlSelf->ysyx_24120011_top__DOT__pc)))))),32);
    bufp->fullIData(oldp+18,(vlSelf->ysyx_24120011_top__DOT__r_mem_data),32);
    bufp->fullIData(oldp+19,(vlSelf->ysyx_24120011_top__DOT__src1),32);
    bufp->fullIData(oldp+20,(vlSelf->ysyx_24120011_top__DOT__src2),32);
    bufp->fullIData(oldp+21,(vlSelf->ysyx_24120011_top__DOT__pc_add_imme_out),32);
    bufp->fullIData(oldp+22,(((IData)(4U) + vlSelf->ysyx_24120011_top__DOT__pc)),32);
    bufp->fullIData(oldp+23,(vlSelf->ysyx_24120011_top__DOT__ALUB),32);
    bufp->fullIData(oldp+24,(vlSelf->ysyx_24120011_top__DOT__alu_result),32);
    bufp->fullCData(oldp+25,(vlSelf->ysyx_24120011_top__DOT__pc_ctrl),2);
    bufp->fullCData(oldp+26,(vlSelf->ysyx_24120011_top__DOT__rd_ctrl),4);
    bufp->fullCData(oldp+27,(vlSelf->ysyx_24120011_top__DOT__ALUBctrl),2);
    bufp->fullBit(oldp+28,(((IData)(vlSelf->ysyx_24120011_top__DOT__LSU_valid) 
                            & (4U != (IData)(vlSelf->ysyx_24120011_top__DOT__rd_ctrl)))));
    bufp->fullBit(oldp+29,(vlSelf->ysyx_24120011_top__DOT__w_mem_en));
    bufp->fullBit(oldp+30,(vlSelf->ysyx_24120011_top__DOT__r_mem_en));
    bufp->fullBit(oldp+31,(vlSelf->ysyx_24120011_top__DOT__sign_extension));
    bufp->fullBit(oldp+32,(((0x63U == (0x7fU & vlSelf->ysyx_24120011_top__DOT__inst)) 
                            & vlSelf->ysyx_24120011_top__DOT__alu_result)));
    bufp->fullCData(oldp+33,(vlSelf->ysyx_24120011_top__DOT__w_mem_len),8);
    bufp->fullCData(oldp+34,(vlSelf->ysyx_24120011_top__DOT__r_mem_len),8);
    bufp->fullCData(oldp+35,(vlSelf->ysyx_24120011_top__DOT__ALU_ctrl),4);
    bufp->fullCData(oldp+36,(vlSelf->ysyx_24120011_top__DOT__w_csr_data_ctrl),4);
    bufp->fullIData(oldp+37,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs
                             [0xaU]),32);
    bufp->fullSData(oldp+38,(vlSelf->ysyx_24120011_top__DOT__w_csr_addr),12);
    bufp->fullSData(oldp+39,(vlSelf->ysyx_24120011_top__DOT__r_csr_addr),12);
    bufp->fullBit(oldp+40,(vlSelf->ysyx_24120011_top__DOT__w_csr_en));
    bufp->fullBit(oldp+41,(vlSelf->ysyx_24120011_top__DOT__r_csr_en));
    bufp->fullBit(oldp+42,(vlSelf->ysyx_24120011_top__DOT__w_csr_ecall));
    bufp->fullIData(oldp+43,(vlSelf->ysyx_24120011_top__DOT__w_csr_data),32);
    bufp->fullIData(oldp+44,(vlSelf->ysyx_24120011_top__DOT__r_csr_data),32);
    bufp->fullIData(oldp+45,(vlSelf->ysyx_24120011_top__DOT__pc),32);
    bufp->fullIData(oldp+46,(vlSelf->ysyx_24120011_top__DOT__inst),32);
    bufp->fullBit(oldp+47,(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__rready));
    bufp->fullBit(oldp+48,(vlSelf->ysyx_24120011_top__DOT__LSU_valid));
    bufp->fullBit(oldp+49,(vlSelf->ysyx_24120011_top__DOT__LSU_ready));
    bufp->fullIData(oldp+50,(vlSelf->ysyx_24120011_top__DOT__LSU_valid),32);
    bufp->fullBit(oldp+51,(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__arvalid));
    bufp->fullBit(oldp+52,(((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__read_state)) 
                            & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_arready))));
    bufp->fullIData(oldp+53,(vlSelf->ysyx_24120011_top__DOT__M0_rdata),32);
    bufp->fullBit(oldp+54,(vlSelf->ysyx_24120011_top__DOT__M0_rvalid));
    bufp->fullBit(oldp+55,(((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_state)) 
                            & ((IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
                               & (3U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__state))))));
    bufp->fullBit(oldp+56,(((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_state)) 
                            & ((IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
                               & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__wready_reg)))));
    bufp->fullBit(oldp+57,(((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_state)) 
                            & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_bvalid))));
    bufp->fullIData(oldp+58,(((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__state))
                               ? vlSelf->ysyx_24120011_top__DOT__alu_result
                               : 0U)),32);
    bufp->fullBit(oldp+59,(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__arvalid));
    bufp->fullBit(oldp+60,(((2U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__read_state)) 
                            & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_arready))));
    bufp->fullIData(oldp+61,(vlSelf->ysyx_24120011_top__DOT__M1_rdata),32);
    bufp->fullBit(oldp+62,(vlSelf->ysyx_24120011_top__DOT__M1_rvalid));
    bufp->fullBit(oldp+63,(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__rready));
    bufp->fullIData(oldp+64,(((3U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__state))
                               ? vlSelf->ysyx_24120011_top__DOT__alu_result
                               : 0U)),32);
    bufp->fullBit(oldp+65,(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__awvalid));
    bufp->fullBit(oldp+66,(((2U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_state)) 
                            & ((IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
                               & (3U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__state))))));
    bufp->fullIData(oldp+67,(((4U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__state))
                               ? vlSelf->ysyx_24120011_top__DOT__src2
                               : 0U)),32);
    bufp->fullCData(oldp+68,(((4U == (IData)(vlSelf->ysyx_24120011_top__DOT__w_mem_len))
                               ? 0xfU : ((2U == (IData)(vlSelf->ysyx_24120011_top__DOT__w_mem_len))
                                          ? 3U : 1U))),4);
    bufp->fullBit(oldp+69,(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__wvalid));
    bufp->fullBit(oldp+70,(vlSelf->ysyx_24120011_top__DOT__M1_wready));
    bufp->fullBit(oldp+71,(vlSelf->ysyx_24120011_top__DOT__M1_bvalid));
    bufp->fullBit(oldp+72,(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__bready));
    bufp->fullIData(oldp+73,(vlSelf->ysyx_24120011_top__DOT__S0_araddr),32);
    bufp->fullBit(oldp+74,(vlSelf->ysyx_24120011_top__DOT__S0_arvalid));
    bufp->fullBit(oldp+75,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_arready));
    bufp->fullIData(oldp+76,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rdata),32);
    bufp->fullBit(oldp+77,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rvalid));
    bufp->fullBit(oldp+78,(vlSelf->ysyx_24120011_top__DOT__S0_rready));
    bufp->fullIData(oldp+79,(((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_state))
                               ? 0U : ((2U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_state))
                                        ? ((3U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__state))
                                            ? vlSelf->ysyx_24120011_top__DOT__alu_result
                                            : 0U) : 0U))),32);
    bufp->fullBit(oldp+80,(vlSelf->ysyx_24120011_top__DOT__S0_awvalid));
    bufp->fullBit(oldp+81,(((IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
                            & (3U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__state)))));
    bufp->fullIData(oldp+82,(((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_state))
                               ? 0U : ((2U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_state))
                                        ? ((4U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__state))
                                            ? vlSelf->ysyx_24120011_top__DOT__src2
                                            : 0U) : 0U))),32);
    bufp->fullCData(oldp+83,(((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_state))
                               ? 0xfU : ((2U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_state))
                                          ? ((4U == (IData)(vlSelf->ysyx_24120011_top__DOT__w_mem_len))
                                              ? 0xfU
                                              : ((2U 
                                                  == (IData)(vlSelf->ysyx_24120011_top__DOT__w_mem_len))
                                                  ? 3U
                                                  : 1U))
                                          : 0U))),4);
    bufp->fullBit(oldp+84,(((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_state))
                             ? 0U : ((2U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_state))
                                      ? (1U & (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__wvalid))
                                      : 0U))));
    bufp->fullBit(oldp+85,(((IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
                            & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__wready_reg))));
    bufp->fullBit(oldp+86,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_bvalid));
    bufp->fullBit(oldp+87,(vlSelf->ysyx_24120011_top__DOT__S0_bready));
    bufp->fullIData(oldp+88,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_araddr),32);
    bufp->fullBit(oldp+89,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_arvalid));
    bufp->fullBit(oldp+90,((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__state))));
    bufp->fullIData(oldp+91,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__rdata_reg),32);
    bufp->fullBit(oldp+92,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__rvalid_reg));
    bufp->fullBit(oldp+93,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_rready));
    bufp->fullIData(oldp+94,(((IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)
                               ? ((IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)
                                   ? ((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_state))
                                       ? 0U : ((2U 
                                                == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_state))
                                                ? (
                                                   (3U 
                                                    == (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__state))
                                                    ? vlSelf->ysyx_24120011_top__DOT__alu_result
                                                    : 0U)
                                                : 0U))
                                   : 0U) : 0U)),32);
    bufp->fullBit(oldp+95,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_awvalid));
    bufp->fullBit(oldp+96,((3U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__state))));
    bufp->fullIData(oldp+97,(((IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)
                               ? ((IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)
                                   ? ((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_state))
                                       ? 0U : ((2U 
                                                == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_state))
                                                ? (
                                                   (4U 
                                                    == (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__state))
                                                    ? vlSelf->ysyx_24120011_top__DOT__src2
                                                    : 0U)
                                                : 0U))
                                   : 0U) : 0U)),32);
    bufp->fullCData(oldp+98,(((IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)
                               ? ((IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)
                                   ? ((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_state))
                                       ? 0xfU : ((2U 
                                                  == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_state))
                                                  ? 
                                                 ((4U 
                                                   == (IData)(vlSelf->ysyx_24120011_top__DOT__w_mem_len))
                                                   ? 0xfU
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->ysyx_24120011_top__DOT__w_mem_len))
                                                    ? 3U
                                                    : 1U))
                                                  : 0U))
                                   : 0U) : 0U)),4);
    bufp->fullBit(oldp+99,(((IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
                            & ((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_state))
                                ? 0U : ((2U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_state))
                                         ? (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__wvalid)
                                         : 0U)))));
    bufp->fullBit(oldp+100,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__wready_reg));
    bufp->fullBit(oldp+101,((5U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__state))));
    bufp->fullBit(oldp+102,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_bready));
    bufp->fullBit(oldp+103,((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__state))));
    bufp->fullIData(oldp+104,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__rdata_reg),32);
    bufp->fullBit(oldp+105,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__rvalid_reg));
    bufp->fullBit(oldp+106,((3U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__state))));
    bufp->fullBit(oldp+107,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__wready_reg));
    bufp->fullBit(oldp+108,((5U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__state))));
    bufp->fullIData(oldp+109,(vlSelf->ysyx_24120011_top__DOT__i_ALU__DOT__B_in),32);
    bufp->fullIData(oldp+110,(((1U & (IData)(vlSelf->ysyx_24120011_top__DOT__ALU_ctrl))
                                ? vlSelf->ysyx_24120011_top__DOT__i_ALU__DOT____VdfgTmp_h6c4bfc22__0
                                : vlSelf->ysyx_24120011_top__DOT__ALUB)),32);
    bufp->fullIData(oldp+111,(vlSelf->ysyx_24120011_top__DOT__i_ALU__DOT__ALUout_tmp),32);
    bufp->fullBit(oldp+112,(vlSelf->ysyx_24120011_top__DOT__i_ALU__DOT__carry));
    bufp->fullBit(oldp+113,((((vlSelf->ysyx_24120011_top__DOT__src1 
                               >> 0x1fU) == (((1U & (IData)(vlSelf->ysyx_24120011_top__DOT__ALU_ctrl))
                                               ? vlSelf->ysyx_24120011_top__DOT__i_ALU__DOT____VdfgTmp_h6c4bfc22__0
                                               : vlSelf->ysyx_24120011_top__DOT__ALUB) 
                                             >> 0x1fU)) 
                             & ((vlSelf->ysyx_24120011_top__DOT__src1 
                                 >> 0x1fU) != (vlSelf->ysyx_24120011_top__DOT__i_ALU__DOT__ALUout_tmp 
                                               >> 0x1fU)))));
    bufp->fullBit(oldp+114,((1U & (~ (IData)(vlSelf->ysyx_24120011_top__DOT__i_ALU__DOT__carry)))));
    bufp->fullBit(oldp+115,(vlSelf->ysyx_24120011_top__DOT__i_ALU__DOT__sless));
    bufp->fullBit(oldp+116,((vlSelf->ysyx_24120011_top__DOT__src1 
                             == vlSelf->ysyx_24120011_top__DOT__ALUB)));
    bufp->fullBit(oldp+117,((vlSelf->ysyx_24120011_top__DOT__src1 
                             != vlSelf->ysyx_24120011_top__DOT__ALUB)));
    bufp->fullIData(oldp+118,(vlSelf->ysyx_24120011_top__DOT__i_Csr__DOT__mepc),32);
    bufp->fullIData(oldp+119,(vlSelf->ysyx_24120011_top__DOT__i_Csr__DOT__mstatus),32);
    bufp->fullIData(oldp+120,(vlSelf->ysyx_24120011_top__DOT__i_Csr__DOT__mcause),32);
    bufp->fullIData(oldp+121,(vlSelf->ysyx_24120011_top__DOT__i_Csr__DOT__mtvec),32);
    bufp->fullBit(oldp+122,(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__rvalid_prev));
    bufp->fullCData(oldp+123,(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__state),3);
    bufp->fullCData(oldp+124,(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__next_state),3);
    bufp->fullCData(oldp+125,(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__arvalid_delay_cnt),8);
    bufp->fullCData(oldp+126,(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__rready_delay_cnt),8);
    bufp->fullCData(oldp+127,(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__LSFR_in),8);
    bufp->fullCData(oldp+128,(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__random_delay),8);
    bufp->fullCData(oldp+129,(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__state),3);
    bufp->fullCData(oldp+130,(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__next_state),3);
    bufp->fullBit(oldp+131,(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__start_read_delay));
    bufp->fullBit(oldp+132,(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__start_write_delay));
    bufp->fullBit(oldp+133,((0U != (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__state))));
    bufp->fullCData(oldp+134,(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__arvalid_delay_cnt),8);
    bufp->fullCData(oldp+135,(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__awvalid_delay_cnt),8);
    bufp->fullCData(oldp+136,(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__wvalid_delay_cnt),8);
    bufp->fullCData(oldp+137,(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__rready_delay_cnt),8);
    bufp->fullCData(oldp+138,(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__bready_delay_cnt),8);
    bufp->fullCData(oldp+139,(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__LSFR_in),8);
    bufp->fullCData(oldp+140,(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__random_delay),8);
    bufp->fullIData(oldp+141,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[0]),32);
    bufp->fullIData(oldp+142,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[1]),32);
    bufp->fullIData(oldp+143,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[2]),32);
    bufp->fullIData(oldp+144,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[3]),32);
    bufp->fullIData(oldp+145,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[4]),32);
    bufp->fullIData(oldp+146,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[5]),32);
    bufp->fullIData(oldp+147,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[6]),32);
    bufp->fullIData(oldp+148,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[7]),32);
    bufp->fullIData(oldp+149,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[8]),32);
    bufp->fullIData(oldp+150,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[9]),32);
    bufp->fullIData(oldp+151,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[10]),32);
    bufp->fullIData(oldp+152,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[11]),32);
    bufp->fullIData(oldp+153,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[12]),32);
    bufp->fullIData(oldp+154,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[13]),32);
    bufp->fullIData(oldp+155,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[14]),32);
    bufp->fullIData(oldp+156,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[15]),32);
    bufp->fullIData(oldp+157,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[16]),32);
    bufp->fullIData(oldp+158,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[17]),32);
    bufp->fullIData(oldp+159,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[18]),32);
    bufp->fullIData(oldp+160,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[19]),32);
    bufp->fullIData(oldp+161,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[20]),32);
    bufp->fullIData(oldp+162,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[21]),32);
    bufp->fullIData(oldp+163,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[22]),32);
    bufp->fullIData(oldp+164,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[23]),32);
    bufp->fullIData(oldp+165,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[24]),32);
    bufp->fullIData(oldp+166,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[25]),32);
    bufp->fullIData(oldp+167,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[26]),32);
    bufp->fullIData(oldp+168,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[27]),32);
    bufp->fullIData(oldp+169,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[28]),32);
    bufp->fullIData(oldp+170,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[29]),32);
    bufp->fullIData(oldp+171,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[30]),32);
    bufp->fullIData(oldp+172,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[31]),32);
    bufp->fullIData(oldp+173,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[0]),32);
    bufp->fullIData(oldp+174,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[1]),32);
    bufp->fullIData(oldp+175,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[2]),32);
    bufp->fullIData(oldp+176,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[3]),32);
    bufp->fullIData(oldp+177,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[4]),32);
    bufp->fullIData(oldp+178,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[5]),32);
    bufp->fullIData(oldp+179,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[6]),32);
    bufp->fullIData(oldp+180,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[7]),32);
    bufp->fullIData(oldp+181,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[8]),32);
    bufp->fullIData(oldp+182,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[9]),32);
    bufp->fullIData(oldp+183,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[10]),32);
    bufp->fullIData(oldp+184,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[11]),32);
    bufp->fullIData(oldp+185,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[12]),32);
    bufp->fullIData(oldp+186,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[13]),32);
    bufp->fullIData(oldp+187,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[14]),32);
    bufp->fullIData(oldp+188,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[15]),32);
    bufp->fullIData(oldp+189,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[16]),32);
    bufp->fullIData(oldp+190,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[17]),32);
    bufp->fullIData(oldp+191,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[18]),32);
    bufp->fullIData(oldp+192,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[19]),32);
    bufp->fullIData(oldp+193,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[20]),32);
    bufp->fullIData(oldp+194,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[21]),32);
    bufp->fullIData(oldp+195,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[22]),32);
    bufp->fullIData(oldp+196,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[23]),32);
    bufp->fullIData(oldp+197,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[24]),32);
    bufp->fullIData(oldp+198,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[25]),32);
    bufp->fullIData(oldp+199,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[26]),32);
    bufp->fullIData(oldp+200,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[27]),32);
    bufp->fullIData(oldp+201,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[28]),32);
    bufp->fullIData(oldp+202,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[29]),32);
    bufp->fullIData(oldp+203,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[30]),32);
    bufp->fullIData(oldp+204,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[31]),32);
    bufp->fullCData(oldp+205,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__read_state),3);
    bufp->fullCData(oldp+206,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__read_next_state),3);
    bufp->fullCData(oldp+207,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_state),3);
    bufp->fullCData(oldp+208,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_next_state),3);
    bufp->fullCData(oldp+209,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__last_read_master),3);
    bufp->fullCData(oldp+210,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__last_write_master),3);
    bufp->fullBit(oldp+211,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__read_done));
    bufp->fullBit(oldp+212,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_done));
    bufp->fullCData(oldp+213,((0x7fU & vlSelf->ysyx_24120011_top__DOT__inst)),7);
    bufp->fullCData(oldp+214,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_IDU__DOT__opcode_type),3);
    bufp->fullCData(oldp+215,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__state),3);
    bufp->fullCData(oldp+216,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__next_state),3);
    bufp->fullIData(oldp+217,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__addr),32);
    bufp->fullCData(oldp+218,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__read_delay_cnt),8);
    bufp->fullCData(oldp+219,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__write_delay_cnt),8);
    bufp->fullBit(oldp+220,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__pmem_readed));
    bufp->fullBit(oldp+221,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__pmem_writed));
    bufp->fullCData(oldp+222,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__LSFR_in),8);
    bufp->fullCData(oldp+223,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__random_delay),8);
    bufp->fullCData(oldp+224,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__state),3);
    bufp->fullCData(oldp+225,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__next_state),3);
    bufp->fullIData(oldp+226,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__addr),32);
    bufp->fullCData(oldp+227,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__read_delay_cnt),8);
    bufp->fullCData(oldp+228,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__write_delay_cnt),8);
    bufp->fullBit(oldp+229,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__pmem_readed));
    bufp->fullBit(oldp+230,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__pmem_writed));
    bufp->fullCData(oldp+231,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__LSFR_in),8);
    bufp->fullCData(oldp+232,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__random_delay),8);
    bufp->fullBit(oldp+233,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state));
    bufp->fullBit(oldp+234,(((IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state)
                              ? ((IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state) 
                                 & (~ ((IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__rvalid_reg) 
                                       & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_rready))))
                              : (IData)(vlSelf->ysyx_24120011_top__DOT__S0_arvalid))));
    bufp->fullBit(oldp+235,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state));
    bufp->fullBit(oldp+236,(((IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)
                              ? ((IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
                                 & (~ ((5U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__state)) 
                                       & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_bready))))
                              : ((IData)(vlSelf->ysyx_24120011_top__DOT__S0_awvalid) 
                                 & (0xa00003f8U != vlSelf->ysyx_24120011_top__DOT__S0_araddr)))));
    bufp->fullBit(oldp+237,(((IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__rvalid_reg) 
                             & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_rready))));
    bufp->fullBit(oldp+238,(((5U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__state)) 
                             & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_bready))));
    bufp->fullBit(oldp+239,(((IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__rvalid_reg) 
                             & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_rready))));
    bufp->fullBit(oldp+240,(((5U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__state)) 
                             & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_bready))));
    bufp->fullBit(oldp+241,(vlSelf->clk));
    bufp->fullBit(oldp+242,(vlSelf->rst));
    bufp->fullIData(oldp+243,(vlSelf->ysyx_24120011_top__DOT__rdata),32);
    bufp->fullCData(oldp+244,(0U),2);
    bufp->fullIData(oldp+245,(0U),32);
    bufp->fullBit(oldp+246,(0U));
    bufp->fullCData(oldp+247,(0xfU),4);
    bufp->fullBit(oldp+248,(1U));
    bufp->fullBit(oldp+249,(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__start_read_delay));
    bufp->fullCData(oldp+250,(0U),3);
    bufp->fullCData(oldp+251,(1U),3);
    bufp->fullCData(oldp+252,(2U),3);
    bufp->fullCData(oldp+253,(3U),3);
    bufp->fullCData(oldp+254,(4U),3);
    bufp->fullCData(oldp+255,(5U),3);
    bufp->fullIData(oldp+256,(0x20U),32);
    bufp->fullIData(oldp+257,(0x80000000U),32);
    bufp->fullCData(oldp+258,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__read_choose),3);
    bufp->fullCData(oldp+259,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_choose),3);
}
